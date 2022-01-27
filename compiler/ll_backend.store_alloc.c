/*
** Automatically generated from `store_alloc.m'
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


/* :- module ll_backend.store_alloc. */
/* :- implementation. */

/*
INIT mercury__ll_backend__store_alloc__init
ENDINIT
*/

#include "ll_backend.store_alloc.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.follow_vars.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0;

#line 156 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1;

#line 159 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2];

#line 162 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2];

#line 165 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2];

#line 168 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 174 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 177 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 180 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 183 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3];

#line 186 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3];

#line 189 "ll_backend.store_alloc.c"
static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0;

#line 192 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1];

#line 195 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1];

#line 198 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1];

#line 201 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1];

#line 204 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0;

#line 207 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1;

#line 210 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2];

#line 213 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2];

#line 216 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2];

#line 219 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 222 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 224 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 227 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 230 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 232 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 234 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 237 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 240 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 242 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 245 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 248 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 250 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 252 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 255 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 258 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 260 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 263 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 266 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 268 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 270 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 273 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 276 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 278 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 281 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 284 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 286 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 288 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 291 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 294 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 296 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 299 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 302 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 304 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 306 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 140 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 140 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 140 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 132 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 132 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 132 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 142 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 142 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 142 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 189 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 189 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 189 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 508 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 508 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 508 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 508 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 508 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8);

#line 455 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 455 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 455 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6);

#line 425 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 425 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 425 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 425 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 425 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8);

#line 413 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 413 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4);

#line 368 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 368 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 368 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4);

#line 349 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 325 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 310 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 285 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 195 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16);

#line 144 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15);

#line 123 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 123 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1);


static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[2][3];




static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
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



#line 630 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0 = {
  (MR_String) "is_branched_goal",
  (MR_Integer) 0
};

#line 636 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1 = {
  (MR_String) "is_not_branched_goal",
  (MR_Integer) 1
};

#line 642 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 648 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 654 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 660 "ll_backend.store_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_branched_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__store_alloc____Unify____branched_goal_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____branched_goal_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "branched_goal",
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0
};

#line 677 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 685 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 693 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 702 "ll_backend.store_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_last_locns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__store_alloc____Unify____last_locns_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____last_locns_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "last_locns",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 719 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 728 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 737 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0
};

#line 744 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3] = {
  (MR_String) "sai_stack_slots",
  (MR_String) "sai_vartypes",
  (MR_String) "sai_float_reg"
};

#line 751 "ll_backend.store_alloc.c"
static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0 = {
  (MR_String) "store_alloc_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0,
  NULL,
  NULL
};

#line 766 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 771 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0
  }
};

#line 780 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 785 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1] = {
  (MR_Integer) 0
};

#line 790 "ll_backend.store_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_alloc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "store_alloc_info",
  {     ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0
};

#line 807 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0 = {
  (MR_String) "final_allocation",
  (MR_Integer) 0
};

#line 813 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1 = {
  (MR_String) "for_stack_opt",
  (MR_Integer) 1
};

#line 819 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 825 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 831 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 837 "ll_backend.store_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "store_map_run_type",
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0
};

#line 854 "ll_backend.store_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_where_stored_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__store_alloc____Unify____where_stored_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____where_stored_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "where_stored",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 871 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 874 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 876 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 878 "ll_backend.store_alloc.c"
{
#line 880 "ll_backend.store_alloc.c"
  {
#line 882 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 885 "ll_backend.store_alloc.c"
    {
#line 887 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____branched_goal_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 890 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 892 "ll_backend.store_alloc.c"
  }
#line 894 "ll_backend.store_alloc.c"
}

#line 897 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 900 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 902 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 904 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 906 "ll_backend.store_alloc.c"
{
#line 908 "ll_backend.store_alloc.c"
  {
#line 910 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 913 "ll_backend.store_alloc.c"
    {
#line 915 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____branched_goal_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 918 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 920 "ll_backend.store_alloc.c"
  }
#line 922 "ll_backend.store_alloc.c"
}

#line 925 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 928 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 930 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 932 "ll_backend.store_alloc.c"
{
#line 934 "ll_backend.store_alloc.c"
  {
#line 936 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 939 "ll_backend.store_alloc.c"
    {
#line 941 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____last_locns_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 944 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 946 "ll_backend.store_alloc.c"
  }
#line 948 "ll_backend.store_alloc.c"
}

#line 951 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 954 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 956 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 958 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 960 "ll_backend.store_alloc.c"
{
#line 962 "ll_backend.store_alloc.c"
  {
#line 964 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 967 "ll_backend.store_alloc.c"
    {
#line 969 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____last_locns_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 972 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 974 "ll_backend.store_alloc.c"
  }
#line 976 "ll_backend.store_alloc.c"
}

#line 979 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 982 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 984 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 986 "ll_backend.store_alloc.c"
{
#line 988 "ll_backend.store_alloc.c"
  {
#line 990 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 993 "ll_backend.store_alloc.c"
    {
#line 995 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_alloc_info_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 998 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1000 "ll_backend.store_alloc.c"
  }
#line 1002 "ll_backend.store_alloc.c"
}

#line 1005 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 1008 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1010 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1012 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1014 "ll_backend.store_alloc.c"
{
#line 1016 "ll_backend.store_alloc.c"
  {
#line 1018 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1021 "ll_backend.store_alloc.c"
    {
#line 1023 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_alloc_info_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1026 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1028 "ll_backend.store_alloc.c"
  }
#line 1030 "ll_backend.store_alloc.c"
}

#line 1033 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 1036 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1038 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1040 "ll_backend.store_alloc.c"
{
#line 1042 "ll_backend.store_alloc.c"
  {
#line 1044 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1047 "ll_backend.store_alloc.c"
    {
#line 1049 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_map_run_type_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1052 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1054 "ll_backend.store_alloc.c"
  }
#line 1056 "ll_backend.store_alloc.c"
}

#line 1059 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 1062 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1064 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1066 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1068 "ll_backend.store_alloc.c"
{
#line 1070 "ll_backend.store_alloc.c"
  {
#line 1072 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1075 "ll_backend.store_alloc.c"
    {
#line 1077 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_map_run_type_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1080 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1082 "ll_backend.store_alloc.c"
  }
#line 1084 "ll_backend.store_alloc.c"
}

#line 1087 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 1090 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1092 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1094 "ll_backend.store_alloc.c"
{
#line 1096 "ll_backend.store_alloc.c"
  {
#line 1098 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1101 "ll_backend.store_alloc.c"
    {
#line 1103 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____where_stored_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1106 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1108 "ll_backend.store_alloc.c"
  }
#line 1110 "ll_backend.store_alloc.c"
}

#line 1113 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 1116 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1118 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1120 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1122 "ll_backend.store_alloc.c"
{
#line 1124 "ll_backend.store_alloc.c"
  {
#line 1126 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1129 "ll_backend.store_alloc.c"
    {
#line 1131 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____where_stored_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1134 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1136 "ll_backend.store_alloc.c"
  }
#line 1138 "ll_backend.store_alloc.c"
}

#line 140 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 140 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 140 "store_alloc.m"
{
#line 140 "store_alloc.m"
  {
#line 140 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 140 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 140 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 140 "store_alloc.m"
    {
#line 140 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
#line 140 "store_alloc.m"
      return;
    }
#line 140 "store_alloc.m"
  }
#line 140 "store_alloc.m"
}

#line 140 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 140 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 140 "store_alloc.m"
{
#line 140 "store_alloc.m"
  {
#line 140 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 140 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 140 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 140 "store_alloc.m"
    {
#line 140 "store_alloc.m"
      return ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 140 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 140 "store_alloc.m"
  }
#line 140 "store_alloc.m"
}

#line 36 "store_alloc.m"
void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0(
#line 36 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 36 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 36 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 36 "store_alloc.m"
{
#line 36 "store_alloc.m"
  {
#line 36 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 36 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 36 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 36 "store_alloc.m"
    {
#line 36 "store_alloc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
#line 36 "store_alloc.m"
      return;
    }
#line 36 "store_alloc.m"
  }
#line 36 "store_alloc.m"
}

#line 36 "store_alloc.m"
MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0(
#line 36 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 36 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 36 "store_alloc.m"
{
#line 1244 "ll_backend.store_alloc.c"
  {
#line 1246 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1249 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1251 "ll_backend.store_alloc.c"
  }
#line 36 "store_alloc.m"
}

#line 132 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 132 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 132 "store_alloc.m"
{
#line 132 "store_alloc.m"
  {
#line 132 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 132 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_12 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 132 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_13 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 132 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_12 == ll_backend__store_alloc__CastY_13);
#line 132 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 1280 "ll_backend.store_alloc.c"
      *ll_backend__store_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 132 "store_alloc.m"
    else
#line 132 "store_alloc.m"
      {
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 2)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 132 "store_alloc.m"
        {
#line 132 "store_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], &ll_backend__store_alloc__V_10_10, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
        }
#line 1306 "ll_backend.store_alloc.c"
        ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_10_10 == (MR_Integer) 0);
#line 132 "store_alloc.m"
        ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 132 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 132 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_10_10;
#line 132 "store_alloc.m"
        else
#line 132 "store_alloc.m"
          {
#line 132 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_11_11;

#line 132 "store_alloc.m"
            {
#line 132 "store_alloc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &ll_backend__store_alloc__V_11_11, ((MR_Box) (ll_backend__store_alloc__V_5_5)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
            }
#line 1326 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_11_11 == (MR_Integer) 0);
#line 132 "store_alloc.m"
            ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 132 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 132 "store_alloc.m"
              *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_11_11;
#line 132 "store_alloc.m"
            else
#line 132 "store_alloc.m"
              {
#line 132 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_17_17 = (MR_Integer) ll_backend__store_alloc__V_6_6;
#line 132 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_18_18 = (MR_Integer) ll_backend__store_alloc__V_9_9;

#line 132 "store_alloc.m"
                {
#line 132 "store_alloc.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__V_17_17, ll_backend__store_alloc__V_18_18);
#line 132 "store_alloc.m"
                  return;
                }
#line 132 "store_alloc.m"
              }
#line 132 "store_alloc.m"
          }
#line 132 "store_alloc.m"
      }
#line 132 "store_alloc.m"
  }
#line 132 "store_alloc.m"
}

#line 132 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 132 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 132 "store_alloc.m"
{
#line 132 "store_alloc.m"
  {
#line 132 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 132 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_9 = (MR_Integer) ll_backend__store_alloc__HeadVar__1_1;
#line 132 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_10 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;

#line 132 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_9 == ll_backend__store_alloc__CastY_10);
#line 132 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 132 "store_alloc.m"
      ll_backend__store_alloc__succeeded = MR_TRUE;
#line 132 "store_alloc.m"
    else
#line 132 "store_alloc.m"
      {
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TypeCtorInfo_12_12;
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));

#line 1404 "ll_backend.store_alloc.c"
        {
#line 1406 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], ((MR_Box) (ll_backend__store_alloc__V_3_3)), ((MR_Box) (ll_backend__store_alloc__V_6_6)));
        }
#line 132 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 132 "store_alloc.m"
          {
#line 1413 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1415 "ll_backend.store_alloc.c"
            {
#line 1417 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__store_alloc__TypeCtorInfo_12_12, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
            }
#line 132 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 1422 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_5_5 == ll_backend__store_alloc__V_8_8);
#line 132 "store_alloc.m"
          }
#line 132 "store_alloc.m"
      }
#line 132 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 132 "store_alloc.m"
  }
#line 132 "store_alloc.m"
}

#line 142 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 142 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 142 "store_alloc.m"
{
#line 142 "store_alloc.m"
  {
#line 142 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 142 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 142 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 142 "store_alloc.m"
    {
#line 142 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
#line 142 "store_alloc.m"
      return;
    }
#line 142 "store_alloc.m"
  }
#line 142 "store_alloc.m"
}

#line 142 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 142 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 142 "store_alloc.m"
{
#line 142 "store_alloc.m"
  {
#line 142 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 142 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 142 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 142 "store_alloc.m"
    {
#line 142 "store_alloc.m"
      return ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 142 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 142 "store_alloc.m"
  }
#line 142 "store_alloc.m"
}

#line 189 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 189 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 189 "store_alloc.m"
{
#line 189 "store_alloc.m"
  {
#line 189 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 189 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 189 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 189 "store_alloc.m"
    {
#line 189 "store_alloc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
#line 189 "store_alloc.m"
      return;
    }
#line 189 "store_alloc.m"
  }
#line 189 "store_alloc.m"
}

#line 189 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 189 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 189 "store_alloc.m"
{
#line 1538 "ll_backend.store_alloc.c"
  {
#line 1540 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1543 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1545 "ll_backend.store_alloc.c"
  }
#line 189 "store_alloc.m"
}

#line 508 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 508 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 508 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 508 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 508 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8)
#line 508 "store_alloc.m"
{
#line 515 "store_alloc.m"
  while (MR_TRUE)
#line 515 "store_alloc.m"
    {
#line 515 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 515 "store_alloc.m"
      {
#line 515 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;
#line 512 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 512 "store_alloc.m"
        {
#line 512 "store_alloc.m"
          ll_backend__store_alloc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_5));
#line 512 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 1) = ((MR_Box) (ll_backend__store_alloc__N0_7));
#line 512 "store_alloc.m"
        }
#line 512 "store_alloc.m"
        {
#line 512 "store_alloc.m"
          ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__V_10_10)), ll_backend__store_alloc__Values_6);
        }
#line 515 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 513 "store_alloc.m"
          {
#line 513 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__N1_9 = (ll_backend__store_alloc__N0_7 + (MR_Integer) 1);

#line 514 "store_alloc.m"
            /* direct tailcall eliminated */
#line 514 "store_alloc.m"
            {
#line 514 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__N0__tmp_copy_7 = ll_backend__store_alloc__N1_9;

#line 514 "store_alloc.m"
              ll_backend__store_alloc__N0_7 = ll_backend__store_alloc__N0__tmp_copy_7;
#line 514 "store_alloc.m"
            }
#line 514 "store_alloc.m"
            continue;
#line 513 "store_alloc.m"
          }
#line 515 "store_alloc.m"
        else
#line 516 "store_alloc.m"
          *ll_backend__store_alloc__N_8 = ll_backend__store_alloc__N0_7;
#line 515 "store_alloc.m"
      }
#line 515 "store_alloc.m"
      break;
#line 515 "store_alloc.m"
    }
#line 508 "store_alloc.m"
}

#line 455 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 455 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 455 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 455 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6)
#line 455 "store_alloc.m"
{
#line 458 "store_alloc.m"
  while (MR_TRUE)
#line 458 "store_alloc.m"
    {
#line 458 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 458 "store_alloc.m"
      {
#line 458 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 458 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 458 "store_alloc.m"
        else
#line 460 "store_alloc.m"
          {
#line 460 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 460 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 460 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 460 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;
#line 460 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;

#line 461 "store_alloc.m"
            {
#line 461 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__map__contains_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, ((MR_Box) (ll_backend__store_alloc__Var_14)));
            }
#line 464 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 463 "store_alloc.m"
              {
#line 463 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 463 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4;
#line 463 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 463 "store_alloc.m"
              }
#line 464 "store_alloc.m"
            else
#line 467 "store_alloc.m"
              {
#line 467 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_40_40;
#line 467 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlots_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));
#line 467 "store_alloc.m"
                MR_Word ll_backend__store_alloc__Locn_24;
#line 467 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 467 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 477 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlotLocn_23;
#line 469 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlot_22;
#line 469 "store_alloc.m"
                MR_Box ll_backend__store_alloc__conv0_StackSlot_22;
#line 471 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_38_38;

#line 469 "store_alloc.m"
                {
#line 469 "store_alloc.m"
                  ll_backend__store_alloc__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__store_alloc__StackSlots_19, ((MR_Box) (ll_backend__store_alloc__Var_14)), &ll_backend__store_alloc__conv0_StackSlot_22);
                }
#line 469 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 469 "store_alloc.m"
                  {
#line 469 "store_alloc.m"
                    ll_backend__store_alloc__StackSlot_22 = ((MR_Word) ll_backend__store_alloc__conv0_StackSlot_22);
#line 469 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = MR_TRUE;
#line 469 "store_alloc.m"
                  }
#line 469 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 469 "store_alloc.m"
                  {
#line 470 "store_alloc.m"
                    {
#line 470 "store_alloc.m"
                      ll_backend__store_alloc__StackSlotLocn_23 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(ll_backend__store_alloc__StackSlot_22);
                    }
#line 1737 "ll_backend.store_alloc.c"
                    ll_backend__store_alloc__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 471 "store_alloc.m"
                    {
#line 471 "store_alloc.m"
                      ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_38_38, ((MR_Box) (ll_backend__store_alloc__StackSlotLocn_23)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4);
                    }
#line 471 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 469 "store_alloc.m"
                  }
#line 477 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 476 "store_alloc.m"
                  {
#line 476 "store_alloc.m"
                    ll_backend__store_alloc__Locn_24 = ll_backend__store_alloc__StackSlotLocn_23;
#line 476 "store_alloc.m"
                    ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 476 "store_alloc.m"
                  }
#line 477 "store_alloc.m"
                else
#line 478 "store_alloc.m"
                  {
#line 478 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__RegType_25;
#line 478 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 478 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 492 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 496 "store_alloc.m"
                    if ((ll_backend__store_alloc__FloatRegType_46 == (MR_Integer) 1))
#line 497 "store_alloc.m"
                      {
#line 497 "store_alloc.m"
                        MR_Word ll_backend__store_alloc__VarType_47;
#line 499 "store_alloc.m"
                        MR_Word ll_backend__store_alloc__V_48_48;

#line 498 "store_alloc.m"
                        {
#line 498 "store_alloc.m"
                          parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_45, ll_backend__store_alloc__Var_14, &ll_backend__store_alloc__VarType_47);
                        }
#line 499 "store_alloc.m"
                        {
#line 499 "store_alloc.m"
                          ll_backend__store_alloc__V_48_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
                        }
#line 499 "store_alloc.m"
                        {
#line 499 "store_alloc.m"
                          ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_47, ll_backend__store_alloc__V_48_48);
                        }
#line 501 "store_alloc.m"
                        if (ll_backend__store_alloc__succeeded)
#line 500 "store_alloc.m"
                          ll_backend__store_alloc__RegType_25 = (MR_Integer) 1;
#line 501 "store_alloc.m"
                        else
#line 502 "store_alloc.m"
                          ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 497 "store_alloc.m"
                      }
#line 496 "store_alloc.m"
                    else
#line 495 "store_alloc.m"
                      ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 479 "store_alloc.m"
                    {
#line 479 "store_alloc.m"
                      ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_25, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_30_30);
                    }
#line 480 "store_alloc.m"
                    {
#line 480 "store_alloc.m"
                      ll_backend__store_alloc__Locn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_25));
#line 480 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_30_30));
#line 480 "store_alloc.m"
                    }
#line 478 "store_alloc.m"
                  }
#line 1826 "ll_backend.store_alloc.c"
                ll_backend__store_alloc__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 482 "store_alloc.m"
                {
#line 482 "store_alloc.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Var_14)), ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31);
                }
#line 483 "store_alloc.m"
                {
#line 483 "store_alloc.m"
                  mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32);
                }
#line 467 "store_alloc.m"
              }
#line 485 "store_alloc.m"
            /* direct tailcall eliminated */
#line 485 "store_alloc.m"
            {
#line 485 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_15;
#line 485 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 485 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;
#line 485 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;

#line 485 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5;
#line 485 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4;
#line 485 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 485 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 485 "store_alloc.m"
            }
#line 485 "store_alloc.m"
            continue;
#line 460 "store_alloc.m"
          }
#line 458 "store_alloc.m"
      }
#line 458 "store_alloc.m"
      break;
#line 458 "store_alloc.m"
    }
#line 455 "store_alloc.m"
}

#line 425 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 425 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 425 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 425 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 425 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 425 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8)
#line 425 "store_alloc.m"
{
#line 430 "store_alloc.m"
  while (MR_TRUE)
#line 430 "store_alloc.m"
    {
#line 430 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 430 "store_alloc.m"
      {
#line 430 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 430 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "store_alloc.m"
          {
#line 431 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 431 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5;
#line 431 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_N_4 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 430 "store_alloc.m"
          }
#line 430 "store_alloc.m"
        else
#line 433 "store_alloc.m"
          {
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeInfo_42_42 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Locn_25;
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__FinalLocn_29;
#line 433 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;
#line 433 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 434 "store_alloc.m"
            MR_Box ll_backend__store_alloc__conv0_Locn_25;

#line 434 "store_alloc.m"
            {
#line 434 "store_alloc.m"
              mercury__map__lookup_3_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, ((MR_Box) (ll_backend__store_alloc__Var_20)), &ll_backend__store_alloc__conv0_Locn_25);
            }
#line 434 "store_alloc.m"
            ll_backend__store_alloc__Locn_25 = ((MR_Word) ll_backend__store_alloc__conv0_Locn_25);
#line 436 "store_alloc.m"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__Locn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "store_alloc.m"
            if (!(ll_backend__store_alloc__succeeded))
#line 437 "store_alloc.m"
              {
#line 437 "store_alloc.m"
                ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Locn_25)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5);
              }
#line 448 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 444 "store_alloc.m"
              {
#line 444 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegType_28;
#line 442 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegTypePrime_26;
#line 440 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_27_27;

#line 440 "store_alloc.m"
                ll_backend__store_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__store_alloc__Locn_25)) == (MR_mktag((MR_Integer) 1)));
#line 440 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 440 "store_alloc.m"
                  {
#line 440 "store_alloc.m"
                    ll_backend__store_alloc__RegTypePrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 0)));
#line 440 "store_alloc.m"
                    ll_backend__store_alloc__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 1)));
#line 441 "store_alloc.m"
                    ll_backend__store_alloc__RegType_28 = ll_backend__store_alloc__RegTypePrime_26;
#line 440 "store_alloc.m"
                  }
#line 440 "store_alloc.m"
                else
#line 491 "store_alloc.m"
                  {
#line 491 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 491 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 492 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 496 "store_alloc.m"
                    if ((ll_backend__store_alloc__FloatRegType_49 == (MR_Integer) 1))
#line 497 "store_alloc.m"
                      {
#line 497 "store_alloc.m"
                        MR_Word ll_backend__store_alloc__VarType_50;
#line 499 "store_alloc.m"
                        MR_Word ll_backend__store_alloc__V_51_51;

#line 498 "store_alloc.m"
                        {
#line 498 "store_alloc.m"
                          parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_48, ll_backend__store_alloc__Var_20, &ll_backend__store_alloc__VarType_50);
                        }
#line 499 "store_alloc.m"
                        {
#line 499 "store_alloc.m"
                          ll_backend__store_alloc__V_51_51 = parse_tree__builtin_lib_types__float_type_0_f_0();
                        }
#line 499 "store_alloc.m"
                        {
#line 499 "store_alloc.m"
                          ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_50, ll_backend__store_alloc__V_51_51);
                        }
#line 501 "store_alloc.m"
                        if (ll_backend__store_alloc__succeeded)
#line 500 "store_alloc.m"
                          ll_backend__store_alloc__RegType_28 = (MR_Integer) 1;
#line 501 "store_alloc.m"
                        else
#line 502 "store_alloc.m"
                          ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 497 "store_alloc.m"
                      }
#line 496 "store_alloc.m"
                    else
#line 495 "store_alloc.m"
                      ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 491 "store_alloc.m"
                  }
#line 445 "store_alloc.m"
                {
#line 445 "store_alloc.m"
                  ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_28, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_36_36);
                }
#line 446 "store_alloc.m"
                {
#line 446 "store_alloc.m"
                  ll_backend__store_alloc__FinalLocn_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_28));
#line 446 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_36_36));
#line 446 "store_alloc.m"
                }
#line 447 "store_alloc.m"
                {
#line 447 "store_alloc.m"
                  mercury__map__det_update_4_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Var_20)), ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37);
                }
#line 444 "store_alloc.m"
              }
#line 448 "store_alloc.m"
            else
#line 449 "store_alloc.m"
              {
#line 449 "store_alloc.m"
                ll_backend__store_alloc__FinalLocn_29 = ll_backend__store_alloc__Locn_25;
#line 449 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 449 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_36_36 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 449 "store_alloc.m"
              }
#line 451 "store_alloc.m"
            {
#line 451 "store_alloc.m"
              mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38);
            }
#line 452 "store_alloc.m"
            /* direct tailcall eliminated */
#line 452 "store_alloc.m"
            {
#line 452 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_21;
#line 452 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 452 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 452 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;

#line 452 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7;
#line 452 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5;
#line 452 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 452 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 452 "store_alloc.m"
            }
#line 452 "store_alloc.m"
            continue;
#line 433 "store_alloc.m"
          }
#line 430 "store_alloc.m"
      }
#line 430 "store_alloc.m"
      break;
#line 430 "store_alloc.m"
    }
#line 425 "store_alloc.m"
}

#line 413 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 413 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 413 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4)
#line 413 "store_alloc.m"
{
#line 416 "store_alloc.m"
  while (MR_TRUE)
#line 416 "store_alloc.m"
    {
#line 416 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 416 "store_alloc.m"
      {
#line 416 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 416 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 416 "store_alloc.m"
        else
#line 417 "store_alloc.m"
          {
#line 417 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 418 "store_alloc.m"
            {
#line 418 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__HeadVar__2_2);
            }
#line 420 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 420 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 420 "store_alloc.m"
            else
#line 421 "store_alloc.m"
              {
#line 421 "store_alloc.m"
                {
#line 421 "store_alloc.m"
                  mercury__map__delete_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15);
                }
#line 421 "store_alloc.m"
              }
#line 423 "store_alloc.m"
            /* direct tailcall eliminated */
#line 423 "store_alloc.m"
            {
#line 423 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__1__tmp_copy_1 = ll_backend__store_alloc__Vars_10;
#line 423 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 423 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3;
#line 423 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__HeadVar__1__tmp_copy_1;
#line 423 "store_alloc.m"
            }
#line 423 "store_alloc.m"
            continue;
#line 417 "store_alloc.m"
          }
#line 416 "store_alloc.m"
      }
#line 416 "store_alloc.m"
      break;
#line 416 "store_alloc.m"
    }
#line 413 "store_alloc.m"
}

#line 368 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 368 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 368 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4)
#line 368 "store_alloc.m"
{
#line 372 "store_alloc.m"
  {
#line 372 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 372 "store_alloc.m"
    if ((ll_backend__store_alloc__LastLocnsList_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "store_alloc.m"
      {
#line 375 "store_alloc.m"
        {
#line 375 "store_alloc.m"
          *ll_backend__store_alloc__LastLocns_4 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 374 "store_alloc.m"
      }
#line 372 "store_alloc.m"
    else
#line 372 "store_alloc.m"
      {
#line 372 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5;

#line 372 "store_alloc.m"
        *ll_backend__store_alloc__LastLocns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 0)));
#line 372 "store_alloc.m"
        ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 1)));
#line 372 "store_alloc.m"
      }
#line 372 "store_alloc.m"
  }
#line 368 "store_alloc.m"
}

#line 349 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 349 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 349 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 349 "store_alloc.m"
{
#line 354 "store_alloc.m"
  {
#line 354 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 354 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "store_alloc.m"
      {
#line 354 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 354 "store_alloc.m"
      }
#line 354 "store_alloc.m"
    else
#line 357 "store_alloc.m"
      {
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case_17;
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases_18;
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsCases_23;
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 0)));
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 1)));
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 2)));
#line 357 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_29;
#line 362 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_30;

#line 359 "store_alloc.m"
        {
#line 359 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_28, &ll_backend__store_alloc__Goal_29, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 361 "store_alloc.m"
        {
#line 361 "store_alloc.m"
          ll_backend__store_alloc__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 0) = ((MR_Box) (ll_backend__store_alloc__MainConsId_26));
#line 361 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 1) = ((MR_Box) (ll_backend__store_alloc__OtherConsIds_27));
#line 361 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 2) = ((MR_Box) (ll_backend__store_alloc__Goal_29));
#line 361 "store_alloc.m"
        }
#line 362 "store_alloc.m"
        {
#line 362 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_16, &ll_backend__store_alloc__Cases_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_30, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsCases_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 355 "store_alloc.m"
        {
#line 355 "store_alloc.m"
          MR_Word base;
#line 355 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 355 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Case_17));
#line 355 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Cases_18));
#line 355 "store_alloc.m"
        }
#line 356 "store_alloc.m"
        {
#line 356 "store_alloc.m"
          MR_Word base;
#line 356 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 356 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 356 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsCases_23));
#line 356 "store_alloc.m"
        }
#line 357 "store_alloc.m"
      }
#line 354 "store_alloc.m"
  }
#line 349 "store_alloc.m"
}

#line 325 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 325 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 325 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 325 "store_alloc.m"
{
#line 330 "store_alloc.m"
  {
#line 330 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 330 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "store_alloc.m"
      {
#line 330 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 330 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 330 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 330 "store_alloc.m"
      }
#line 330 "store_alloc.m"
    else
#line 333 "store_alloc.m"
      {
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsDisj_23;
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 1)));
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoal_28;
#line 333 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoalVars_29;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 0)));
#line 344 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_31;

#line 335 "store_alloc.m"
        {
#line 335 "store_alloc.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__GoalInfo0_27, &ll_backend__store_alloc__ResumeGoal_28);
        }
#line 339 "store_alloc.m"
        if ((ll_backend__store_alloc__ResumeGoal_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "store_alloc.m"
          ll_backend__store_alloc__ResumeGoalVars_29 = ll_backend__store_alloc__ResumeVars0_7;
#line 339 "store_alloc.m"
        else
#line 340 "store_alloc.m"
          {
#line 340 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_30_30;

#line 340 "store_alloc.m"
            ll_backend__store_alloc__ResumeGoalVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 0)));
#line 340 "store_alloc.m"
            ll_backend__store_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 1)));
#line 340 "store_alloc.m"
          }
#line 342 "store_alloc.m"
        {
#line 342 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeGoalVars_29, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 344 "store_alloc.m"
        {
#line 344 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_31, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsDisj_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 331 "store_alloc.m"
        {
#line 331 "store_alloc.m"
          MR_Word base;
#line 331 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 331 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 331 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 331 "store_alloc.m"
        }
#line 332 "store_alloc.m"
        {
#line 332 "store_alloc.m"
          MR_Word base;
#line 332 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 332 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 332 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsDisj_23));
#line 332 "store_alloc.m"
        }
#line 333 "store_alloc.m"
      }
#line 330 "store_alloc.m"
  }
#line 325 "store_alloc.m"
}

#line 310 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 310 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 310 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 310 "store_alloc.m"
{
#line 314 "store_alloc.m"
  {
#line 314 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 314 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "store_alloc.m"
      {
#line 314 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "store_alloc.m"
        {
#line 314 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 314 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 314 "store_alloc.m"
      }
#line 314 "store_alloc.m"
    else
#line 316 "store_alloc.m"
      {
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness1_24;
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness2_25;
#line 316 "store_alloc.m"
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28;

#line 317 "store_alloc.m"
        {
#line 317 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 319 "store_alloc.m"
        {
#line 319 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness2_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 315 "store_alloc.m"
        {
#line 315 "store_alloc.m"
          MR_Word base;
#line 315 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 315 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 315 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 315 "store_alloc.m"
        }
#line 321 "store_alloc.m"
        {
#line 321 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__Liveness2_25);
        }
#line 316 "store_alloc.m"
      }
#line 314 "store_alloc.m"
  }
#line 310 "store_alloc.m"
}

#line 285 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 285 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 285 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 285 "store_alloc.m"
{
#line 289 "store_alloc.m"
  {
#line 289 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 289 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "store_alloc.m"
      {
#line 289 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 289 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_Liveness_4 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3;
#line 289 "store_alloc.m"
      }
#line 289 "store_alloc.m"
    else
#line 291 "store_alloc.m"
      {
#line 291 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_19;
#line 291 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_20;
#line 294 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 1)));
#line 294 "store_alloc.m"
        MR_Word ll_backend__store_alloc__InstMapDelta_27;
#line 294 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 0)));

#line 295 "store_alloc.m"
        {
#line 295 "store_alloc.m"
          ll_backend__store_alloc__InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__store_alloc__GoalInfo_26);
        }
#line 296 "store_alloc.m"
        {
#line 296 "store_alloc.m"
          ll_backend__store_alloc__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__store_alloc__InstMapDelta_27);
        }
#line 301 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 299 "store_alloc.m"
          {
#line 298 "store_alloc.m"
            {
#line 298 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 300 "store_alloc.m"
            ll_backend__store_alloc__Goals_20 = ll_backend__store_alloc__Goals0_18;
#line 299 "store_alloc.m"
          }
#line 301 "store_alloc.m"
        else
#line 303 "store_alloc.m"
          {
#line 303 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34;
#line 303 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35;

#line 302 "store_alloc.m"
            {
#line 302 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, &ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 304 "store_alloc.m"
            {
#line 304 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_20, ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 303 "store_alloc.m"
          }
#line 290 "store_alloc.m"
        {
#line 290 "store_alloc.m"
          MR_Word base;
#line 290 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 290 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_19));
#line 290 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_20));
#line 290 "store_alloc.m"
        }
#line 291 "store_alloc.m"
      }
#line 289 "store_alloc.m"
  }
#line 285 "store_alloc.m"
}

#line 195 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 195 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 195 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16)
#line 195 "store_alloc.m"
{
#line 203 "store_alloc.m"
  {
#line 203 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 203 "store_alloc.m"
    if (((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 250 "store_alloc.m"
      {
#line 250 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SubGoal0_44 = (MR_Word) MR_body(((MR_Word) ll_backend__store_alloc__GoalExpr0_10), (MR_Integer) 0);
#line 250 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SubGoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 1)));
#line 250 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeNot_47;
#line 250 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeNotVars_48;
#line 250 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SubGoal_50;
#line 251 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 0)));
#line 253 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_49_49;
#line 254 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_51_51;

#line 252 "store_alloc.m"
        {
#line 252 "store_alloc.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__SubGoalInfo0_46, &ll_backend__store_alloc__ResumeNot_47);
        }
#line 253 "store_alloc.m"
        {
#line 253 "store_alloc.m"
          hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeNot_47, &ll_backend__store_alloc__ResumeNotVars_48, &ll_backend__store_alloc__V_49_49);
        }
#line 254 "store_alloc.m"
        {
#line 254 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_44, &ll_backend__store_alloc__SubGoal_50, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__V_51_51, ll_backend__store_alloc__ResumeNotVars_48, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 256 "store_alloc.m"
        *ll_backend__store_alloc__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__store_alloc__SubGoal_50);
#line 257 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 250 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 250 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 203 "store_alloc.m"
      {
#line 203 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 203 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 203 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_19;

#line 208 "store_alloc.m"
        if ((ll_backend__store_alloc__ConjType_17 == (MR_Integer) 1))
#line 210 "store_alloc.m"
          {
#line 210 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
          }
#line 208 "store_alloc.m"
        else
#line 206 "store_alloc.m"
          {
#line 206 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
          }
#line 213 "store_alloc.m"
        {
#line 213 "store_alloc.m"
          MR_Word base;
#line 213 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 213 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = base;
#line 213 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 213 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__ConjType_17));
#line 213 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Goals_19));
#line 213 "store_alloc.m"
        }
#line 214 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 203 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 216 "store_alloc.m"
      {
#line 216 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsList_20;
#line 216 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 216 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_104;

#line 217 "store_alloc.m"
        {
#line 217 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_103, &ll_backend__store_alloc__Goals_104, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 219 "store_alloc.m"
        {
#line 219 "store_alloc.m"
          ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
        }
#line 220 "store_alloc.m"
        {
#line 220 "store_alloc.m"
          MR_Word base;
#line 220 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = base;
#line 220 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 220 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_104));
#line 220 "store_alloc.m"
        }
#line 221 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 216 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 230 "store_alloc.m"
      {
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 4)));
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__CondGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 1)));
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeCond_33;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeCondVars_34;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cond_36;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness1_37;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsCond_38;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Then_39;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Else_41;
#line 230 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsElse_43;
#line 234 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 0)));
#line 236 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_35_35;
#line 241 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness2_42;
#line 243 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_91_91;

#line 235 "store_alloc.m"
        {
#line 235 "store_alloc.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__CondGoalInfo0_32, &ll_backend__store_alloc__ResumeCond_33);
        }
#line 236 "store_alloc.m"
        {
#line 236 "store_alloc.m"
          hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeCond_33, &ll_backend__store_alloc__ResumeCondVars_34, &ll_backend__store_alloc__V_35_35);
        }
#line 237 "store_alloc.m"
        {
#line 237 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Cond0_26, &ll_backend__store_alloc__Cond_36, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__ResumeCondVars_34, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 239 "store_alloc.m"
        {
#line 239 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Then0_27, &ll_backend__store_alloc__Then_39, ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 241 "store_alloc.m"
        {
#line 241 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Else0_28, &ll_backend__store_alloc__Else_41, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc___Liveness2_42, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsElse_43, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 243 "store_alloc.m"
        {
#line 243 "store_alloc.m"
          ll_backend__store_alloc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsElse_43));
#line 243 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "store_alloc.m"
        }
#line 247 "store_alloc.m"
        {
#line 247 "store_alloc.m"
          MR_Word base;
#line 247 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 247 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = base;
#line 247 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 247 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Vars_25));
#line 247 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Cond_36));
#line 247 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Then_39));
#line 247 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__store_alloc__Else_41));
#line 247 "store_alloc.m"
        }
#line 248 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 230 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 259 "store_alloc.m"
      {
#line 259 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 259 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SubGoal0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 263 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TermVar_53;
#line 260 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_85_85;

#line 260 "store_alloc.m"
        ll_backend__store_alloc__succeeded = ((((MR_tag((MR_Word) ll_backend__store_alloc__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 260 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 260 "store_alloc.m"
          {
#line 260 "store_alloc.m"
            ll_backend__store_alloc__TermVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 1)));
#line 260 "store_alloc.m"
            ll_backend__store_alloc__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 2)));
#line 260 "store_alloc.m"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_85_85 == (MR_Integer) 1);
#line 260 "store_alloc.m"
          }
#line 263 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 261 "store_alloc.m"
          {
#line 261 "store_alloc.m"
            *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 262 "store_alloc.m"
            {
#line 262 "store_alloc.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__TermVar_53, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79);
            }
#line 261 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 261 "store_alloc.m"
          }
#line 263 "store_alloc.m"
        else
#line 265 "store_alloc.m"
          {
#line 265 "store_alloc.m"
            MR_Word ll_backend__store_alloc__SubGoal_106;

#line 264 "store_alloc.m"
            {
#line 264 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_108, &ll_backend__store_alloc__SubGoal_106, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
            }
#line 266 "store_alloc.m"
            {
#line 266 "store_alloc.m"
              MR_Word base;
#line 266 "store_alloc.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "store_alloc.m"
              *ll_backend__store_alloc__GoalExpr_11 = base;
#line 266 "store_alloc.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 266 "store_alloc.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Reason_52));
#line 266 "store_alloc.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__SubGoal_106));
#line 266 "store_alloc.m"
            }
#line 265 "store_alloc.m"
          }
#line 268 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 259 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 278 "store_alloc.m"
      {
#line 280 "store_alloc.m"
        {
#line 280 "store_alloc.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.store_alloc", (MR_String) "predicate \140ll_backend.store_alloc.store_alloc_in_goal_2\'/9", (MR_String) "shorthand");
#line 280 "store_alloc.m"
          return;
        }
#line 278 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 203 "store_alloc.m"
    if (((((MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 223 "store_alloc.m"
      {
#line 223 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 223 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Det_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 223 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 223 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases_24;
#line 223 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsList_105;

#line 224 "store_alloc.m"
        {
#line 224 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_23, &ll_backend__store_alloc__Cases_24, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
        }
#line 226 "store_alloc.m"
        {
#line 226 "store_alloc.m"
          ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
        }
#line 227 "store_alloc.m"
        {
#line 227 "store_alloc.m"
          MR_Word base;
#line 227 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 227 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = base;
#line 227 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 227 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Var_21));
#line 227 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Det_22));
#line 227 "store_alloc.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Cases_24));
#line 227 "store_alloc.m"
        }
#line 228 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 223 "store_alloc.m"
      }
#line 203 "store_alloc.m"
    else
#line 274 "store_alloc.m"
      {
#line 275 "store_alloc.m"
        *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 276 "store_alloc.m"
        *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 274 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
#line 274 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 274 "store_alloc.m"
      }
#line 203 "store_alloc.m"
  }
#line 195 "store_alloc.m"
}

#line 144 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 144 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 144 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15)
#line 144 "store_alloc.m"
{
#line 149 "store_alloc.m"
  {
#line 149 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TypeCtorInfo_37_37;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 0)));
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 1)));
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreDeaths_18;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreBirths_19;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostDeaths_20;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostBirths_21;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness1_22;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness2_23;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr_24;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness3_25;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__BranchedGoal_26;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness4_27;
#line 149 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo_33;

#line 152 "store_alloc.m"
    {
#line 152 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreDeaths_18);
    }
#line 153 "store_alloc.m"
    {
#line 153 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreBirths_19);
    }
#line 154 "store_alloc.m"
    {
#line 154 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostDeaths_20);
    }
#line 155 "store_alloc.m"
    {
#line 155 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostBirths_21);
    }
#line 3209 "ll_backend.store_alloc.c"
    ll_backend__store_alloc__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 157 "store_alloc.m"
    {
#line 157 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness0_11, ll_backend__store_alloc__PreDeaths_18, &ll_backend__store_alloc__Liveness1_22);
    }
#line 158 "store_alloc.m"
    {
#line 158 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness1_22, ll_backend__store_alloc__PreBirths_19, &ll_backend__store_alloc__Liveness2_23);
    }
#line 159 "store_alloc.m"
    {
#line 159 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(ll_backend__store_alloc__GoalExpr0_16, &ll_backend__store_alloc__GoalExpr_24, ll_backend__store_alloc__Liveness2_23, &ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__BranchedGoal_26, ll_backend__store_alloc__StoreAllocInfo_15);
    }
#line 161 "store_alloc.m"
    {
#line 161 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__PostDeaths_20, &ll_backend__store_alloc__Liveness4_27);
    }
#line 165 "store_alloc.m"
    {
#line 165 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__PostBirths_21, ll_backend__store_alloc__Liveness_12);
    }
#line 181 "store_alloc.m"
    if ((ll_backend__store_alloc__BranchedGoal_26 == (MR_Integer) 0))
#line 167 "store_alloc.m"
      {
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TypeInfo_19_54;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TypeCtorInfo_20_55;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__MappedSet_28;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__MappedVars_29;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__AdvisoryStoreMap_31;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__StoreMap_32;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__FollowKeys_45;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__StoreVars_46;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SeenLvals0_47;
#line 167 "store_alloc.m"
        MR_Integer ll_backend__store_alloc__N_48;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__SeenLvals_49;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50;
#line 167 "store_alloc.m"
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52;
#line 175 "store_alloc.m"
        MR_Word ll_backend__store_alloc__StoreMapPrime_30;

#line 171 "store_alloc.m"
        {
#line 171 "store_alloc.m"
          parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__MappedSet_28);
        }
#line 172 "store_alloc.m"
        {
#line 172 "store_alloc.m"
          ll_backend__store_alloc__MappedVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__MappedSet_28);
        }
#line 173 "store_alloc.m"
        {
#line 173 "store_alloc.m"
          ll_backend__store_alloc__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__StoreMapPrime_30);
        }
#line 175 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 174 "store_alloc.m"
          ll_backend__store_alloc__AdvisoryStoreMap_31 = ll_backend__store_alloc__StoreMapPrime_30;
#line 175 "store_alloc.m"
        else
#line 176 "store_alloc.m"
          {
#line 176 "store_alloc.m"
            {
#line 176 "store_alloc.m"
              ll_backend__store_alloc__AdvisoryStoreMap_31 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
            }
#line 176 "store_alloc.m"
          }
#line 3299 "ll_backend.store_alloc.c"
        ll_backend__store_alloc__TypeInfo_19_54 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 3301 "ll_backend.store_alloc.c"
        ll_backend__store_alloc__TypeCtorInfo_20_55 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 400 "store_alloc.m"
        {
#line 400 "store_alloc.m"
          mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__FollowKeys_45);
        }
#line 401 "store_alloc.m"
        {
#line 401 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(ll_backend__store_alloc__FollowKeys_45, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50);
        }
#line 404 "store_alloc.m"
        {
#line 404 "store_alloc.m"
          mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__StoreVars_46);
        }
#line 405 "store_alloc.m"
        {
#line 405 "store_alloc.m"
          mercury__set__init_1_p_0(ll_backend__store_alloc__TypeCtorInfo_20_55, &ll_backend__store_alloc__SeenLvals0_47);
        }
#line 406 "store_alloc.m"
        {
#line 406 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__StoreVars_46, (MR_Integer) 1, &ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals0_47, &ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52);
        }
#line 410 "store_alloc.m"
        {
#line 410 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52, &ll_backend__store_alloc__StoreMap_32);
        }
#line 180 "store_alloc.m"
        {
#line 180 "store_alloc.m"
          hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__store_alloc__StoreMap_32, ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__GoalInfo_33);
        }
#line 167 "store_alloc.m"
      }
#line 181 "store_alloc.m"
    else
#line 183 "store_alloc.m"
      ll_backend__store_alloc__GoalInfo_33 = ll_backend__store_alloc__GoalInfo0_17;
#line 185 "store_alloc.m"
    {
#line 185 "store_alloc.m"
      MR_Word base;
#line 185 "store_alloc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "store_alloc.m"
      *ll_backend__store_alloc__Goal_10 = base;
#line 185 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr_24));
#line 185 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo_33));
#line 185 "store_alloc.m"
    }
#line 149 "store_alloc.m"
  }
#line 144 "store_alloc.m"
}

#line 123 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 123 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1)
#line 123 "store_alloc.m"
{
#line 125 "store_alloc.m"
  {
#line 125 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 125 "store_alloc.m"
    MR_Word ll_backend__store_alloc__HeadVar__2_2;

#line 125 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "store_alloc.m"
      {
#line 125 "store_alloc.m"
        {
#line 125 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 125 "store_alloc.m"
      }
#line 125 "store_alloc.m"
    else
#line 126 "store_alloc.m"
      {
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Var_3;
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Lval_4;
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__VarLvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7;
#line 126 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8;

#line 126 "store_alloc.m"
        ll_backend__store_alloc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 0)));
#line 126 "store_alloc.m"
        ll_backend__store_alloc__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 1)));
#line 127 "store_alloc.m"
        {
#line 127 "store_alloc.m"
          ll_backend__store_alloc__V_7_7 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__VarLvals_5);
        }
#line 128 "store_alloc.m"
        {
#line 128 "store_alloc.m"
          ll_backend__store_alloc__V_8_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__store_alloc__Lval_4)));
        }
#line 127 "store_alloc.m"
        {
#line 127 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__V_7_7, ((MR_Box) (ll_backend__store_alloc__Var_3)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
        }
#line 126 "store_alloc.m"
      }
#line 125 "store_alloc.m"
    return ll_backend__store_alloc__HeadVar__2_2;
#line 125 "store_alloc.m"
  }
#line 123 "store_alloc.m"
}

#line 40 "store_alloc.m"
void MR_CALL 
ll_backend__store_alloc__allocate_store_maps_5_p_0(
#line 40 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RunType_6,
#line 40 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ModuleInfo_7,
#line 40 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 40 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39,
#line 40 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_40)
#line 40 "store_alloc.m"
{
#line 75 "store_alloc.m"
  {
#line 75 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Globals_11;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__VarTypes_17;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal2_25;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness0_26;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TraceLevel_27;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredInfo_28;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__ResumeVars_29;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__InputArgLvals_30;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__LastLocns0_31;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StackSlots_32;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegs_33;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegType_34;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StoreAllocInfo_35;
#line 75 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal_36;
#line 75 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_42_42;
#line 119 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_37_37;
#line 119 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_38_38;

#line 76 "store_alloc.m"
    {
#line 76 "store_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Globals_11);
    }
#line 95 "store_alloc.m"
    {
#line 95 "store_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__PredId_8, ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Liveness0_26);
    }
#line 96 "store_alloc.m"
    {
#line 96 "store_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__store_alloc__Globals_11, &ll_backend__store_alloc__TraceLevel_27);
    }
#line 97 "store_alloc.m"
    {
#line 97 "store_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredId_8, &ll_backend__store_alloc__PredInfo_28);
    }
#line 99 "store_alloc.m"
    {
#line 99 "store_alloc.m"
      ll_backend__store_alloc__V_42_42 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_28, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__TraceLevel_27);
    }
#line 100 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_42_42 == (MR_Integer) 1);
#line 103 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 102 "store_alloc.m"
      {
#line 102 "store_alloc.m"
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__ResumeVars_29);
      }
#line 103 "store_alloc.m"
    else
#line 104 "store_alloc.m"
      {
#line 104 "store_alloc.m"
        {
#line 104 "store_alloc.m"
          ll_backend__store_alloc__ResumeVars_29 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 104 "store_alloc.m"
      }
#line 106 "store_alloc.m"
    {
#line 106 "store_alloc.m"
      ll_backend__code_util__build_input_arg_list_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__InputArgLvals_30);
    }
#line 107 "store_alloc.m"
    {
#line 107 "store_alloc.m"
      ll_backend__store_alloc__LastLocns0_31 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__InputArgLvals_30);
    }
#line 108 "store_alloc.m"
    {
#line 108 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__StackSlots_32);
    }
#line 109 "store_alloc.m"
    {
#line 109 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__VarTypes_17);
    }
#line 91 "store_alloc.m"
    if ((ll_backend__store_alloc__RunType_6 == (MR_Integer) 0))
#line 78 "store_alloc.m"
      {
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_12;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__FollowVarsMap0_13;
#line 78 "store_alloc.m"
        MR_Integer ll_backend__store_alloc__NextNonReservedR0_14;
#line 78 "store_alloc.m"
        MR_Integer ll_backend__store_alloc__NextNonReservedF0_15;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal1_16;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__FollowVarsMap_18;
#line 78 "store_alloc.m"
        MR_Integer ll_backend__store_alloc__NextNonReservedR_19;
#line 78 "store_alloc.m"
        MR_Integer ll_backend__store_alloc__NextNonReservedF_20;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalExpr1_21;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo1_22;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__FollowVars_23;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo2_24;
#line 78 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_41_41;

#line 79 "store_alloc.m"
        {
#line 79 "store_alloc.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__Goal0_12);
        }
#line 81 "store_alloc.m"
        {
#line 81 "store_alloc.m"
          ll_backend__follow_vars__find_final_follow_vars_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedF0_15);
        }
#line 83 "store_alloc.m"
        {
#line 83 "store_alloc.m"
          ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__store_alloc__Goal0_12, &ll_backend__store_alloc__Goal1_16, ll_backend__store_alloc__VarTypes_17, ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__FollowVarsMap_18, ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedR_19, ll_backend__store_alloc__NextNonReservedF0_15, &ll_backend__store_alloc__NextNonReservedF_20);
        }
#line 86 "store_alloc.m"
        ll_backend__store_alloc__GoalExpr1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 0)));
#line 86 "store_alloc.m"
        ll_backend__store_alloc__GoalInfo1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 1)));
#line 87 "store_alloc.m"
        {
#line 87 "store_alloc.m"
          ll_backend__store_alloc__FollowVars_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 87 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVarsMap_18));
#line 87 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 1) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedR_19));
#line 87 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 2) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedF_20));
#line 87 "store_alloc.m"
        }
#line 89 "store_alloc.m"
        {
#line 89 "store_alloc.m"
          ll_backend__store_alloc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_41_41, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVars_23));
#line 89 "store_alloc.m"
        }
#line 89 "store_alloc.m"
        {
#line 89 "store_alloc.m"
          hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(ll_backend__store_alloc__V_41_41, ll_backend__store_alloc__GoalInfo1_22, &ll_backend__store_alloc__GoalInfo2_24);
        }
#line 90 "store_alloc.m"
        {
#line 90 "store_alloc.m"
          ll_backend__store_alloc__Goal2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 90 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr1_21));
#line 90 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo2_24));
#line 90 "store_alloc.m"
        }
#line 78 "store_alloc.m"
      }
#line 91 "store_alloc.m"
    else
#line 93 "store_alloc.m"
      {
#line 93 "store_alloc.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__Goal2_25);
      }
#line 110 "store_alloc.m"
    {
#line 110 "store_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__store_alloc__Globals_11, (MR_Integer) 253, &ll_backend__store_alloc__FloatRegs_33);
    }
#line 114 "store_alloc.m"
    if ((ll_backend__store_alloc__FloatRegs_33 == (MR_Integer) 0))
#line 116 "store_alloc.m"
      ll_backend__store_alloc__FloatRegType_34 = (MR_Integer) 0;
#line 114 "store_alloc.m"
    else
#line 113 "store_alloc.m"
      ll_backend__store_alloc__FloatRegType_34 = (MR_Integer) 1;
#line 118 "store_alloc.m"
    {
#line 118 "store_alloc.m"
      ll_backend__store_alloc__StoreAllocInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 0) = ((MR_Box) (ll_backend__store_alloc__StackSlots_32));
#line 118 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 1) = ((MR_Box) (ll_backend__store_alloc__VarTypes_17));
#line 118 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 2) = ((MR_Box) (ll_backend__store_alloc__FloatRegType_34));
#line 118 "store_alloc.m"
    }
#line 119 "store_alloc.m"
    {
#line 119 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal2_25, &ll_backend__store_alloc__Goal_36, ll_backend__store_alloc__Liveness0_26, &ll_backend__store_alloc__V_37_37, ll_backend__store_alloc__LastLocns0_31, &ll_backend__store_alloc__V_38_38, ll_backend__store_alloc__ResumeVars_29, ll_backend__store_alloc__StoreAllocInfo_35);
    }
#line 121 "store_alloc.m"
    {
#line 121 "store_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__store_alloc__Goal_36, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_40);
#line 121 "store_alloc.m"
      return;
    }
#line 75 "store_alloc.m"
  }
#line 40 "store_alloc.m"
}

void mercury__ll_backend__store_alloc__init(void)
{
}

void mercury__ll_backend__store_alloc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_branched_goal_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_last_locns_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_alloc_info_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_where_stored_0);
}

void mercury__ll_backend__store_alloc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.store_alloc. */
