/*
** Automatically generated from `store_alloc.m'
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


/* :- module ll_backend.store_alloc. */
/* :- implementation. */

/*
INIT mercury__ll_backend__store_alloc__init
ENDINIT
*/

#include "ll_backend.store_alloc.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 161 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0;

#line 164 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1;

#line 167 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2];

#line 170 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2];

#line 173 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2];

#line 176 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 182 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 185 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 188 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 191 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3];

#line 194 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3];

#line 197 "ll_backend.store_alloc.c"
static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0;

#line 200 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1];

#line 203 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1];

#line 206 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1];

#line 209 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1];

#line 212 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0;

#line 215 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1;

#line 218 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2];

#line 221 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2];

#line 224 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2];

#line 227 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 230 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 232 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 235 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 238 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 240 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 242 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 245 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 248 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 250 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 253 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 256 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 258 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 260 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 263 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 266 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 268 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 271 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 274 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 276 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 278 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 281 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 284 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 286 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 289 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 292 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 294 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 296 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 299 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 302 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 304 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 307 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 310 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 312 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 314 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 145 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 145 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 137 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 137 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 137 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 147 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 147 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 147 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 194 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 194 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 194 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 515 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 515 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 515 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 515 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 515 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8);

#line 462 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 462 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 462 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6);

#line 432 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 432 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 432 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 432 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 432 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8);

#line 420 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 420 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4);

#line 375 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 375 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 375 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4);

#line 356 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 332 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 317 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 292 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 200 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16);

#line 149 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15);

#line 128 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 128 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1);


static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[3][3];




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

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[3][3] = {
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
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 636 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0 = {
  (MR_String) "is_branched_goal",
  (MR_Integer) 0
};

#line 642 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1 = {
  (MR_String) "is_not_branched_goal",
  (MR_Integer) 1
};

#line 648 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 654 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 660 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 666 "ll_backend.store_alloc.c"
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

#line 683 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 691 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 699 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 708 "ll_backend.store_alloc.c"
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

#line 725 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 734 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 743 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0
};

#line 750 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3] = {
  (MR_String) "sai_stack_slots",
  (MR_String) "sai_vartypes",
  (MR_String) "sai_float_reg"
};

#line 757 "ll_backend.store_alloc.c"
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

#line 772 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 777 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0
  }
};

#line 786 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 791 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1] = {
  (MR_Integer) 0
};

#line 796 "ll_backend.store_alloc.c"
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

#line 813 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0 = {
  (MR_String) "final_allocation",
  (MR_Integer) 0
};

#line 819 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1 = {
  (MR_String) "for_stack_opt",
  (MR_Integer) 1
};

#line 825 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 831 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 837 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 843 "ll_backend.store_alloc.c"
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

#line 860 "ll_backend.store_alloc.c"
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

#line 877 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 880 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 882 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 884 "ll_backend.store_alloc.c"
{
#line 886 "ll_backend.store_alloc.c"
  {
#line 888 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 891 "ll_backend.store_alloc.c"
    {
#line 893 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____branched_goal_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 896 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 898 "ll_backend.store_alloc.c"
  }
#line 900 "ll_backend.store_alloc.c"
}

#line 903 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 906 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 908 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 910 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 912 "ll_backend.store_alloc.c"
{
#line 914 "ll_backend.store_alloc.c"
  {
#line 916 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 919 "ll_backend.store_alloc.c"
    {
#line 921 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____branched_goal_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 924 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 926 "ll_backend.store_alloc.c"
  }
#line 928 "ll_backend.store_alloc.c"
}

#line 931 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 934 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 936 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 938 "ll_backend.store_alloc.c"
{
#line 940 "ll_backend.store_alloc.c"
  {
#line 942 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 945 "ll_backend.store_alloc.c"
    {
#line 947 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____last_locns_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 950 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 952 "ll_backend.store_alloc.c"
  }
#line 954 "ll_backend.store_alloc.c"
}

#line 957 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 960 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 962 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 964 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 966 "ll_backend.store_alloc.c"
{
#line 968 "ll_backend.store_alloc.c"
  {
#line 970 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 973 "ll_backend.store_alloc.c"
    {
#line 975 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____last_locns_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 978 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 980 "ll_backend.store_alloc.c"
  }
#line 982 "ll_backend.store_alloc.c"
}

#line 985 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 988 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 990 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 992 "ll_backend.store_alloc.c"
{
#line 994 "ll_backend.store_alloc.c"
  {
#line 996 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 999 "ll_backend.store_alloc.c"
    {
#line 1001 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_alloc_info_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1004 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1006 "ll_backend.store_alloc.c"
  }
#line 1008 "ll_backend.store_alloc.c"
}

#line 1011 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 1014 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1016 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1018 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1020 "ll_backend.store_alloc.c"
{
#line 1022 "ll_backend.store_alloc.c"
  {
#line 1024 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1027 "ll_backend.store_alloc.c"
    {
#line 1029 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_alloc_info_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1032 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1034 "ll_backend.store_alloc.c"
  }
#line 1036 "ll_backend.store_alloc.c"
}

#line 1039 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 1042 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1044 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1046 "ll_backend.store_alloc.c"
{
#line 1048 "ll_backend.store_alloc.c"
  {
#line 1050 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1053 "ll_backend.store_alloc.c"
    {
#line 1055 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_map_run_type_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1058 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1060 "ll_backend.store_alloc.c"
  }
#line 1062 "ll_backend.store_alloc.c"
}

#line 1065 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 1068 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1070 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1072 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1074 "ll_backend.store_alloc.c"
{
#line 1076 "ll_backend.store_alloc.c"
  {
#line 1078 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1081 "ll_backend.store_alloc.c"
    {
#line 1083 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_map_run_type_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1086 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1088 "ll_backend.store_alloc.c"
  }
#line 1090 "ll_backend.store_alloc.c"
}

#line 1093 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 1096 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1098 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1100 "ll_backend.store_alloc.c"
{
#line 1102 "ll_backend.store_alloc.c"
  {
#line 1104 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1107 "ll_backend.store_alloc.c"
    {
#line 1109 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____where_stored_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1112 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1114 "ll_backend.store_alloc.c"
  }
#line 1116 "ll_backend.store_alloc.c"
}

#line 1119 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 1122 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1124 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1126 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1128 "ll_backend.store_alloc.c"
{
#line 1130 "ll_backend.store_alloc.c"
  {
#line 1132 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1135 "ll_backend.store_alloc.c"
    {
#line 1137 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____where_stored_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1140 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1142 "ll_backend.store_alloc.c"
  }
#line 1144 "ll_backend.store_alloc.c"
}

#line 145 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 145 "store_alloc.m"
{
#line 145 "store_alloc.m"
  {
#line 145 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 145 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 145 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 145 "store_alloc.m"
    {
#line 145 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
    }
#line 145 "store_alloc.m"
  }
#line 145 "store_alloc.m"
}

#line 145 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 145 "store_alloc.m"
{
#line 145 "store_alloc.m"
  {
#line 145 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 145 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 145 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 145 "store_alloc.m"
    {
#line 145 "store_alloc.m"
      ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 145 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 145 "store_alloc.m"
  }
#line 145 "store_alloc.m"
}

#line 37 "store_alloc.m"
void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0(
#line 37 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 37 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 37 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 37 "store_alloc.m"
{
#line 37 "store_alloc.m"
  {
#line 37 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 37 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 37 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 37 "store_alloc.m"
    {
#line 37 "store_alloc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
    }
#line 37 "store_alloc.m"
  }
#line 37 "store_alloc.m"
}

#line 37 "store_alloc.m"
MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0(
#line 37 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 37 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 37 "store_alloc.m"
{
#line 1246 "ll_backend.store_alloc.c"
  {
#line 1248 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1251 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1253 "ll_backend.store_alloc.c"
  }
#line 37 "store_alloc.m"
}

#line 137 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 137 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 137 "store_alloc.m"
{
#line 137 "store_alloc.m"
  {
#line 137 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 137 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_12 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 137 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_13 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 137 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_12 == ll_backend__store_alloc__CastY_13);
#line 137 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 1282 "ll_backend.store_alloc.c"
      *ll_backend__store_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "store_alloc.m"
    else
#line 137 "store_alloc.m"
      {
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 2)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 137 "store_alloc.m"
        {
#line 137 "store_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], &ll_backend__store_alloc__V_10_10, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
        }
#line 1308 "ll_backend.store_alloc.c"
        ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_10_10 == (MR_Integer) 0);
#line 137 "store_alloc.m"
        ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 137 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 137 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_10_10;
#line 137 "store_alloc.m"
        else
#line 137 "store_alloc.m"
          {
#line 137 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_11_11;

#line 137 "store_alloc.m"
            {
#line 137 "store_alloc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[2], &ll_backend__store_alloc__V_11_11, ((MR_Box) (ll_backend__store_alloc__V_5_5)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
            }
#line 1328 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_11_11 == (MR_Integer) 0);
#line 137 "store_alloc.m"
            ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 137 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 137 "store_alloc.m"
              *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_11_11;
#line 137 "store_alloc.m"
            else
#line 137 "store_alloc.m"
              {
#line 137 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_17_17 = (MR_Integer) ll_backend__store_alloc__V_6_6;
#line 137 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_18_18 = (MR_Integer) ll_backend__store_alloc__V_9_9;

#line 137 "store_alloc.m"
                {
#line 137 "store_alloc.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__V_17_17, ll_backend__store_alloc__V_18_18);
                }
#line 137 "store_alloc.m"
              }
#line 137 "store_alloc.m"
          }
#line 137 "store_alloc.m"
      }
#line 137 "store_alloc.m"
  }
#line 137 "store_alloc.m"
}

#line 137 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 137 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 137 "store_alloc.m"
{
#line 137 "store_alloc.m"
  {
#line 137 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 137 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_9 = (MR_Integer) ll_backend__store_alloc__HeadVar__1_1;
#line 137 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_10 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;

#line 137 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_9 == ll_backend__store_alloc__CastY_10);
#line 137 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 137 "store_alloc.m"
      ll_backend__store_alloc__succeeded = MR_TRUE;
#line 137 "store_alloc.m"
    else
#line 137 "store_alloc.m"
      {
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TypeInfo_12_12;
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));

#line 1404 "ll_backend.store_alloc.c"
        {
#line 1406 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], ((MR_Box) (ll_backend__store_alloc__V_3_3)), ((MR_Box) (ll_backend__store_alloc__V_6_6)));
        }
#line 137 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 137 "store_alloc.m"
          {
#line 1413 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__TypeInfo_12_12 = (MR_Word) &ll_backend__store_alloc_scalar_common_2[2];
#line 1415 "ll_backend.store_alloc.c"
            {
#line 1417 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__store_alloc__TypeInfo_12_12, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
            }
#line 137 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 1422 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_5_5 == ll_backend__store_alloc__V_8_8);
#line 137 "store_alloc.m"
          }
#line 137 "store_alloc.m"
      }
#line 137 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 137 "store_alloc.m"
  }
#line 137 "store_alloc.m"
}

#line 147 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 147 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 147 "store_alloc.m"
{
#line 147 "store_alloc.m"
  {
#line 147 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 147 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 147 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 147 "store_alloc.m"
    {
#line 147 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
    }
#line 147 "store_alloc.m"
  }
#line 147 "store_alloc.m"
}

#line 147 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 147 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 147 "store_alloc.m"
{
#line 147 "store_alloc.m"
  {
#line 147 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 147 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 147 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 147 "store_alloc.m"
    {
#line 147 "store_alloc.m"
      ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 147 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 147 "store_alloc.m"
  }
#line 147 "store_alloc.m"
}

#line 194 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 194 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 194 "store_alloc.m"
{
#line 194 "store_alloc.m"
  {
#line 194 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 194 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 194 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 194 "store_alloc.m"
    {
#line 194 "store_alloc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
    }
#line 194 "store_alloc.m"
  }
#line 194 "store_alloc.m"
}

#line 194 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 194 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 194 "store_alloc.m"
{
#line 1534 "ll_backend.store_alloc.c"
  {
#line 1536 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1539 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1541 "ll_backend.store_alloc.c"
  }
#line 194 "store_alloc.m"
}

#line 515 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 515 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 515 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 515 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 515 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8)
#line 515 "store_alloc.m"
{
#line 519 "store_alloc.m"
  while (MR_TRUE)
#line 519 "store_alloc.m"
    {
#line 519 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 519 "store_alloc.m"
      {
#line 519 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;
#line 519 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 519 "store_alloc.m"
        {
#line 519 "store_alloc.m"
          ll_backend__store_alloc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_5));
#line 519 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 1) = ((MR_Box) (ll_backend__store_alloc__N0_7));
#line 519 "store_alloc.m"
        }
#line 519 "store_alloc.m"
        {
#line 519 "store_alloc.m"
          ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__V_10_10)), ll_backend__store_alloc__Values_6);
        }
#line 519 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 520 "store_alloc.m"
          {
#line 520 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__N1_9 = (ll_backend__store_alloc__N0_7 + (MR_Integer) 1);

#line 521 "store_alloc.m"
            /* direct tailcall eliminated */
#line 521 "store_alloc.m"
            {
#line 521 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__N0__tmp_copy_7 = ll_backend__store_alloc__N1_9;

#line 521 "store_alloc.m"
              ll_backend__store_alloc__N0_7 = ll_backend__store_alloc__N0__tmp_copy_7;
#line 521 "store_alloc.m"
            }
#line 521 "store_alloc.m"
            continue;
#line 520 "store_alloc.m"
          }
#line 519 "store_alloc.m"
        else
#line 523 "store_alloc.m"
          *ll_backend__store_alloc__N_8 = ll_backend__store_alloc__N0_7;
#line 519 "store_alloc.m"
      }
#line 519 "store_alloc.m"
      break;
#line 519 "store_alloc.m"
    }
#line 515 "store_alloc.m"
}

#line 462 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 462 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 462 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 462 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6)
#line 462 "store_alloc.m"
{
#line 465 "store_alloc.m"
  while (MR_TRUE)
#line 465 "store_alloc.m"
    {
#line 465 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 465 "store_alloc.m"
      {
#line 465 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 465 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 465 "store_alloc.m"
        else
#line 467 "store_alloc.m"
          {
#line 467 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 467 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 467 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 467 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;
#line 467 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;

#line 468 "store_alloc.m"
            {
#line 468 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__map__contains_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, ((MR_Box) (ll_backend__store_alloc__Var_14)));
            }
#line 468 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 470 "store_alloc.m"
              {
#line 470 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 470 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4;
#line 470 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 470 "store_alloc.m"
              }
#line 468 "store_alloc.m"
            else
#line 474 "store_alloc.m"
              {
#line 474 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_40_40;
#line 474 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlots_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));
#line 474 "store_alloc.m"
                MR_Word ll_backend__store_alloc__Locn_24;
#line 474 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 474 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 475 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlotLocn_23;
#line 476 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlot_22;
#line 476 "store_alloc.m"
                MR_Box ll_backend__store_alloc__conv0_StackSlot_22;
#line 478 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_38_38;

#line 476 "store_alloc.m"
                {
#line 476 "store_alloc.m"
                  ll_backend__store_alloc__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__store_alloc__StackSlots_19, ((MR_Box) (ll_backend__store_alloc__Var_14)), &ll_backend__store_alloc__conv0_StackSlot_22);
                }
#line 476 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 476 "store_alloc.m"
                  {
#line 476 "store_alloc.m"
                    ll_backend__store_alloc__StackSlot_22 = ((MR_Word) ll_backend__store_alloc__conv0_StackSlot_22);
#line 476 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = MR_TRUE;
#line 476 "store_alloc.m"
                  }
#line 476 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 476 "store_alloc.m"
                  {
#line 477 "store_alloc.m"
                    {
#line 477 "store_alloc.m"
                      ll_backend__store_alloc__StackSlotLocn_23 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(ll_backend__store_alloc__StackSlot_22);
                    }
#line 1733 "ll_backend.store_alloc.c"
                    ll_backend__store_alloc__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 478 "store_alloc.m"
                    {
#line 478 "store_alloc.m"
                      ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_38_38, ((MR_Box) (ll_backend__store_alloc__StackSlotLocn_23)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4);
                    }
#line 478 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 476 "store_alloc.m"
                  }
#line 475 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 483 "store_alloc.m"
                  {
#line 483 "store_alloc.m"
                    ll_backend__store_alloc__Locn_24 = ll_backend__store_alloc__StackSlotLocn_23;
#line 483 "store_alloc.m"
                    ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 483 "store_alloc.m"
                  }
#line 475 "store_alloc.m"
                else
#line 485 "store_alloc.m"
                  {
#line 485 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__RegType_25;
#line 485 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 485 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 499 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 503 "store_alloc.m"
#line 503 "store_alloc.m"
                    switch (ll_backend__store_alloc__FloatRegType_46) {
#line 503 "store_alloc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "store_alloc.m"
                      case (MR_Integer) 1:
#line 504 "store_alloc.m"
                        {
#line 504 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__VarType_47;
#line 506 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__V_48_48;

#line 505 "store_alloc.m"
                          {
#line 505 "store_alloc.m"
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_45, ll_backend__store_alloc__Var_14, &ll_backend__store_alloc__VarType_47);
                          }
#line 506 "store_alloc.m"
                          {
#line 506 "store_alloc.m"
                            ll_backend__store_alloc__V_48_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
#line 506 "store_alloc.m"
                          {
#line 506 "store_alloc.m"
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_47, ll_backend__store_alloc__V_48_48);
                          }
#line 506 "store_alloc.m"
                          if (ll_backend__store_alloc__succeeded)
#line 507 "store_alloc.m"
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 1;
#line 506 "store_alloc.m"
                          else
#line 509 "store_alloc.m"
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 504 "store_alloc.m"
                        }
#line 503 "store_alloc.m"
                        break;
#line 503 "store_alloc.m"
                      case (MR_Integer) 0:
#line 502 "store_alloc.m"
                        ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 503 "store_alloc.m"
                        break;
#line 503 "store_alloc.m"
                    }
#line 486 "store_alloc.m"
                    {
#line 486 "store_alloc.m"
                      ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_25, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_30_30);
                    }
#line 487 "store_alloc.m"
                    {
#line 487 "store_alloc.m"
                      ll_backend__store_alloc__Locn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_25));
#line 487 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_30_30));
#line 487 "store_alloc.m"
                    }
#line 485 "store_alloc.m"
                  }
#line 1833 "ll_backend.store_alloc.c"
                ll_backend__store_alloc__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 489 "store_alloc.m"
                {
#line 489 "store_alloc.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Var_14)), ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31);
                }
#line 490 "store_alloc.m"
                {
#line 490 "store_alloc.m"
                  mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32);
                }
#line 474 "store_alloc.m"
              }
#line 492 "store_alloc.m"
            /* direct tailcall eliminated */
#line 492 "store_alloc.m"
            {
#line 492 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_15;
#line 492 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 492 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;
#line 492 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;

#line 492 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5;
#line 492 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4;
#line 492 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 492 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 492 "store_alloc.m"
            }
#line 492 "store_alloc.m"
            continue;
#line 467 "store_alloc.m"
          }
#line 465 "store_alloc.m"
      }
#line 465 "store_alloc.m"
      break;
#line 465 "store_alloc.m"
    }
#line 462 "store_alloc.m"
}

#line 432 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 432 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 432 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 432 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 432 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 432 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8)
#line 432 "store_alloc.m"
{
#line 437 "store_alloc.m"
  while (MR_TRUE)
#line 437 "store_alloc.m"
    {
#line 437 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 437 "store_alloc.m"
      {
#line 437 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 437 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "store_alloc.m"
          {
#line 438 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 438 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5;
#line 438 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_N_4 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 437 "store_alloc.m"
          }
#line 437 "store_alloc.m"
        else
#line 440 "store_alloc.m"
          {
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeInfo_42_42 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Locn_25;
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__FinalLocn_29;
#line 440 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;
#line 440 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 441 "store_alloc.m"
            MR_Box ll_backend__store_alloc__conv0_Locn_25;

#line 441 "store_alloc.m"
            {
#line 441 "store_alloc.m"
              mercury__map__lookup_3_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, ((MR_Box) (ll_backend__store_alloc__Var_20)), &ll_backend__store_alloc__conv0_Locn_25);
            }
#line 441 "store_alloc.m"
            ll_backend__store_alloc__Locn_25 = ((MR_Word) ll_backend__store_alloc__conv0_Locn_25);
#line 443 "store_alloc.m"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__Locn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "store_alloc.m"
            if (!(ll_backend__store_alloc__succeeded))
#line 444 "store_alloc.m"
              {
#line 444 "store_alloc.m"
                ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Locn_25)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5);
              }
#line 442 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 451 "store_alloc.m"
              {
#line 451 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegType_28;
#line 447 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegTypePrime_26;
#line 447 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_27_27;

#line 447 "store_alloc.m"
                ll_backend__store_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__store_alloc__Locn_25)) == (MR_mktag((MR_Integer) 1)));
#line 447 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 447 "store_alloc.m"
                  {
#line 447 "store_alloc.m"
                    ll_backend__store_alloc__RegTypePrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 0)));
#line 447 "store_alloc.m"
                    ll_backend__store_alloc__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 1)));
#line 448 "store_alloc.m"
                    ll_backend__store_alloc__RegType_28 = ll_backend__store_alloc__RegTypePrime_26;
#line 447 "store_alloc.m"
                  }
#line 447 "store_alloc.m"
                else
#line 498 "store_alloc.m"
                  {
#line 498 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 498 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 499 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 503 "store_alloc.m"
#line 503 "store_alloc.m"
                    switch (ll_backend__store_alloc__FloatRegType_49) {
#line 503 "store_alloc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "store_alloc.m"
                      case (MR_Integer) 1:
#line 504 "store_alloc.m"
                        {
#line 504 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__VarType_50;
#line 506 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__V_51_51;

#line 505 "store_alloc.m"
                          {
#line 505 "store_alloc.m"
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_48, ll_backend__store_alloc__Var_20, &ll_backend__store_alloc__VarType_50);
                          }
#line 506 "store_alloc.m"
                          {
#line 506 "store_alloc.m"
                            ll_backend__store_alloc__V_51_51 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
#line 506 "store_alloc.m"
                          {
#line 506 "store_alloc.m"
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_50, ll_backend__store_alloc__V_51_51);
                          }
#line 506 "store_alloc.m"
                          if (ll_backend__store_alloc__succeeded)
#line 507 "store_alloc.m"
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 1;
#line 506 "store_alloc.m"
                          else
#line 509 "store_alloc.m"
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 504 "store_alloc.m"
                        }
#line 503 "store_alloc.m"
                        break;
#line 503 "store_alloc.m"
                      case (MR_Integer) 0:
#line 502 "store_alloc.m"
                        ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 503 "store_alloc.m"
                        break;
#line 503 "store_alloc.m"
                    }
#line 498 "store_alloc.m"
                  }
#line 452 "store_alloc.m"
                {
#line 452 "store_alloc.m"
                  ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_28, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_36_36);
                }
#line 453 "store_alloc.m"
                {
#line 453 "store_alloc.m"
                  ll_backend__store_alloc__FinalLocn_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_28));
#line 453 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_36_36));
#line 453 "store_alloc.m"
                }
#line 454 "store_alloc.m"
                {
#line 454 "store_alloc.m"
                  mercury__map__det_update_4_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Var_20)), ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37);
                }
#line 451 "store_alloc.m"
              }
#line 442 "store_alloc.m"
            else
#line 456 "store_alloc.m"
              {
#line 456 "store_alloc.m"
                ll_backend__store_alloc__FinalLocn_29 = ll_backend__store_alloc__Locn_25;
#line 456 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 456 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_36_36 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 456 "store_alloc.m"
              }
#line 458 "store_alloc.m"
            {
#line 458 "store_alloc.m"
              mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38);
            }
#line 459 "store_alloc.m"
            /* direct tailcall eliminated */
#line 459 "store_alloc.m"
            {
#line 459 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_21;
#line 459 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 459 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 459 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;

#line 459 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7;
#line 459 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5;
#line 459 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 459 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 459 "store_alloc.m"
            }
#line 459 "store_alloc.m"
            continue;
#line 440 "store_alloc.m"
          }
#line 437 "store_alloc.m"
      }
#line 437 "store_alloc.m"
      break;
#line 437 "store_alloc.m"
    }
#line 432 "store_alloc.m"
}

#line 420 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 420 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 420 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4)
#line 420 "store_alloc.m"
{
#line 423 "store_alloc.m"
  while (MR_TRUE)
#line 423 "store_alloc.m"
    {
#line 423 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 423 "store_alloc.m"
      {
#line 423 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 423 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 423 "store_alloc.m"
        else
#line 424 "store_alloc.m"
          {
#line 424 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 424 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 425 "store_alloc.m"
            {
#line 425 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__HeadVar__2_2);
            }
#line 425 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 425 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 425 "store_alloc.m"
            else
#line 428 "store_alloc.m"
              {
#line 428 "store_alloc.m"
                {
#line 428 "store_alloc.m"
                  mercury__map__delete_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15);
                }
#line 428 "store_alloc.m"
              }
#line 430 "store_alloc.m"
            /* direct tailcall eliminated */
#line 430 "store_alloc.m"
            {
#line 430 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__1__tmp_copy_1 = ll_backend__store_alloc__Vars_10;
#line 430 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 430 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3;
#line 430 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__HeadVar__1__tmp_copy_1;
#line 430 "store_alloc.m"
            }
#line 430 "store_alloc.m"
            continue;
#line 424 "store_alloc.m"
          }
#line 423 "store_alloc.m"
      }
#line 423 "store_alloc.m"
      break;
#line 423 "store_alloc.m"
    }
#line 420 "store_alloc.m"
}

#line 375 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 375 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 375 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4)
#line 375 "store_alloc.m"
{
#line 379 "store_alloc.m"
  {
#line 379 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 379 "store_alloc.m"
    if ((ll_backend__store_alloc__LastLocnsList_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "store_alloc.m"
      {
#line 382 "store_alloc.m"
        {
#line 382 "store_alloc.m"
          *ll_backend__store_alloc__LastLocns_4 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 381 "store_alloc.m"
      }
#line 379 "store_alloc.m"
    else
#line 379 "store_alloc.m"
      {
#line 379 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5;

#line 379 "store_alloc.m"
        *ll_backend__store_alloc__LastLocns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 0)));
#line 379 "store_alloc.m"
        ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 1)));
#line 379 "store_alloc.m"
      }
#line 379 "store_alloc.m"
  }
#line 375 "store_alloc.m"
}

#line 356 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 356 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 356 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 356 "store_alloc.m"
{
#line 361 "store_alloc.m"
  {
#line 361 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 361 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "store_alloc.m"
      {
#line 361 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 361 "store_alloc.m"
      }
#line 361 "store_alloc.m"
    else
#line 364 "store_alloc.m"
      {
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case_17;
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases_18;
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsCases_23;
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 0)));
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 1)));
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 2)));
#line 364 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_29;
#line 369 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_30;

#line 366 "store_alloc.m"
        {
#line 366 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_28, &ll_backend__store_alloc__Goal_29, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 368 "store_alloc.m"
        {
#line 368 "store_alloc.m"
          ll_backend__store_alloc__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 368 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 0) = ((MR_Box) (ll_backend__store_alloc__MainConsId_26));
#line 368 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 1) = ((MR_Box) (ll_backend__store_alloc__OtherConsIds_27));
#line 368 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 2) = ((MR_Box) (ll_backend__store_alloc__Goal_29));
#line 368 "store_alloc.m"
        }
#line 369 "store_alloc.m"
        {
#line 369 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_16, &ll_backend__store_alloc__Cases_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_30, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsCases_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 362 "store_alloc.m"
        {
#line 362 "store_alloc.m"
          MR_Word base;
#line 362 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 362 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Case_17));
#line 362 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Cases_18));
#line 362 "store_alloc.m"
        }
#line 363 "store_alloc.m"
        {
#line 363 "store_alloc.m"
          MR_Word base;
#line 363 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 363 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 363 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsCases_23));
#line 363 "store_alloc.m"
        }
#line 364 "store_alloc.m"
      }
#line 361 "store_alloc.m"
  }
#line 356 "store_alloc.m"
}

#line 332 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 332 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 332 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 332 "store_alloc.m"
{
#line 337 "store_alloc.m"
  {
#line 337 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 337 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "store_alloc.m"
      {
#line 337 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 337 "store_alloc.m"
      }
#line 337 "store_alloc.m"
    else
#line 340 "store_alloc.m"
      {
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsDisj_23;
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 1)));
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoal_28;
#line 340 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoalVars_29;
#line 341 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 0)));
#line 351 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_31;

#line 342 "store_alloc.m"
        {
#line 342 "store_alloc.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__GoalInfo0_27, &ll_backend__store_alloc__ResumeGoal_28);
        }
#line 346 "store_alloc.m"
        if ((ll_backend__store_alloc__ResumeGoal_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "store_alloc.m"
          ll_backend__store_alloc__ResumeGoalVars_29 = ll_backend__store_alloc__ResumeVars0_7;
#line 346 "store_alloc.m"
        else
#line 347 "store_alloc.m"
          {
#line 347 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_30_30;

#line 347 "store_alloc.m"
            ll_backend__store_alloc__ResumeGoalVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 0)));
#line 347 "store_alloc.m"
            ll_backend__store_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 1)));
#line 347 "store_alloc.m"
          }
#line 349 "store_alloc.m"
        {
#line 349 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeGoalVars_29, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 351 "store_alloc.m"
        {
#line 351 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_31, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsDisj_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 338 "store_alloc.m"
        {
#line 338 "store_alloc.m"
          MR_Word base;
#line 338 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 338 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 338 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 338 "store_alloc.m"
        }
#line 339 "store_alloc.m"
        {
#line 339 "store_alloc.m"
          MR_Word base;
#line 339 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 339 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 339 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsDisj_23));
#line 339 "store_alloc.m"
        }
#line 340 "store_alloc.m"
      }
#line 337 "store_alloc.m"
  }
#line 332 "store_alloc.m"
}

#line 317 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 317 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 317 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 317 "store_alloc.m"
{
#line 321 "store_alloc.m"
  {
#line 321 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 321 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "store_alloc.m"
      {
#line 321 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 321 "store_alloc.m"
        {
#line 321 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 321 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 321 "store_alloc.m"
      }
#line 321 "store_alloc.m"
    else
#line 323 "store_alloc.m"
      {
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness1_24;
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness2_25;
#line 323 "store_alloc.m"
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28;

#line 324 "store_alloc.m"
        {
#line 324 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 326 "store_alloc.m"
        {
#line 326 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness2_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 322 "store_alloc.m"
        {
#line 322 "store_alloc.m"
          MR_Word base;
#line 322 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 322 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 322 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 322 "store_alloc.m"
        }
#line 328 "store_alloc.m"
        {
#line 328 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__Liveness2_25);
        }
#line 323 "store_alloc.m"
      }
#line 321 "store_alloc.m"
  }
#line 317 "store_alloc.m"
}

#line 292 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 292 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 292 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 292 "store_alloc.m"
{
#line 296 "store_alloc.m"
  {
#line 296 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 296 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "store_alloc.m"
      {
#line 296 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 296 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_Liveness_4 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3;
#line 296 "store_alloc.m"
      }
#line 296 "store_alloc.m"
    else
#line 298 "store_alloc.m"
      {
#line 298 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_19;
#line 298 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_20;
#line 301 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 1)));
#line 301 "store_alloc.m"
        MR_Word ll_backend__store_alloc__InstMapDelta_27;
#line 301 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 0)));

#line 302 "store_alloc.m"
        {
#line 302 "store_alloc.m"
          ll_backend__store_alloc__InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__store_alloc__GoalInfo_26);
        }
#line 303 "store_alloc.m"
        {
#line 303 "store_alloc.m"
          ll_backend__store_alloc__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__store_alloc__InstMapDelta_27);
        }
#line 299 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 306 "store_alloc.m"
          {
#line 305 "store_alloc.m"
            {
#line 305 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 307 "store_alloc.m"
            ll_backend__store_alloc__Goals_20 = ll_backend__store_alloc__Goals0_18;
#line 306 "store_alloc.m"
          }
#line 299 "store_alloc.m"
        else
#line 310 "store_alloc.m"
          {
#line 310 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34;
#line 310 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35;

#line 309 "store_alloc.m"
            {
#line 309 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, &ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 311 "store_alloc.m"
            {
#line 311 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_20, ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 310 "store_alloc.m"
          }
#line 297 "store_alloc.m"
        {
#line 297 "store_alloc.m"
          MR_Word base;
#line 297 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 297 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_19));
#line 297 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_20));
#line 297 "store_alloc.m"
        }
#line 298 "store_alloc.m"
      }
#line 296 "store_alloc.m"
  }
#line 292 "store_alloc.m"
}

#line 200 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 200 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 200 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16)
#line 200 "store_alloc.m"
{
#line 208 "store_alloc.m"
  {
#line 208 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 208 "store_alloc.m"
#line 208 "store_alloc.m"
    switch (MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) {
#line 208 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 208 "store_alloc.m"
      case (MR_Integer) 0:
#line 255 "store_alloc.m"
        {
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoal0_44 = (MR_Word) MR_body(((MR_Word) ll_backend__store_alloc__GoalExpr0_10), (MR_Integer) 0);
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 1)));
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__ResumeNot_47;
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__ResumeNotVars_48;
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoal_50;
#line 256 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 0)));
#line 258 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_49_49;
#line 259 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_51_51;

#line 257 "store_alloc.m"
          {
#line 257 "store_alloc.m"
            hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__SubGoalInfo0_46, &ll_backend__store_alloc__ResumeNot_47);
          }
#line 258 "store_alloc.m"
          {
#line 258 "store_alloc.m"
            hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeNot_47, &ll_backend__store_alloc__ResumeNotVars_48, &ll_backend__store_alloc__V_49_49);
          }
#line 259 "store_alloc.m"
          {
#line 259 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_44, &ll_backend__store_alloc__SubGoal_50, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__V_51_51, ll_backend__store_alloc__ResumeNotVars_48, ll_backend__store_alloc__StoreAllocInfo_16);
          }
#line 261 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__store_alloc__SubGoal_50);
#line 262 "store_alloc.m"
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 255 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 255 "store_alloc.m"
        }
#line 208 "store_alloc.m"
        break;
#line 208 "store_alloc.m"
      case (MR_Integer) 1:
#line 208 "store_alloc.m"
      case (MR_Integer) 2:
#line 281 "store_alloc.m"
        {
#line 282 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 283 "store_alloc.m"
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 281 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
#line 281 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 281 "store_alloc.m"
        }
#line 208 "store_alloc.m"
        break;
#line 208 "store_alloc.m"
      case (MR_Integer) 3:
#line 208 "store_alloc.m"
#line 208 "store_alloc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) {
#line 208 "store_alloc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 208 "store_alloc.m"
          case (MR_Integer) 0:
#line 208 "store_alloc.m"
          case (MR_Integer) 1:
#line 281 "store_alloc.m"
            {
#line 282 "store_alloc.m"
              *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 283 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 281 "store_alloc.m"
              *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
#line 281 "store_alloc.m"
              *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 281 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 2:
#line 208 "store_alloc.m"
            {
#line 208 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 208 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 208 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals_19;

#line 213 "store_alloc.m"
#line 213 "store_alloc.m"
              switch (ll_backend__store_alloc__ConjType_17) {
#line 213 "store_alloc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 213 "store_alloc.m"
                case (MR_Integer) 1:
#line 215 "store_alloc.m"
                  {
#line 215 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 213 "store_alloc.m"
                  break;
#line 213 "store_alloc.m"
                case (MR_Integer) 0:
#line 211 "store_alloc.m"
                  {
#line 211 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 213 "store_alloc.m"
                  break;
#line 213 "store_alloc.m"
              }
#line 218 "store_alloc.m"
              {
#line 218 "store_alloc.m"
                MR_Word base;
#line 218 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 218 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 218 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__ConjType_17));
#line 218 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Goals_19));
#line 218 "store_alloc.m"
              }
#line 219 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 208 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 3:
#line 221 "store_alloc.m"
            {
#line 221 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsList_20;
#line 221 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 221 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals_104;

#line 222 "store_alloc.m"
              {
#line 222 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_103, &ll_backend__store_alloc__Goals_104, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 224 "store_alloc.m"
              {
#line 224 "store_alloc.m"
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
#line 225 "store_alloc.m"
              {
#line 225 "store_alloc.m"
                MR_Word base;
#line 225 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 225 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 225 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_104));
#line 225 "store_alloc.m"
              }
#line 226 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 221 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 4:
#line 228 "store_alloc.m"
            {
#line 228 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 228 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Det_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 228 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 228 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cases_24;
#line 228 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsList_105;

#line 229 "store_alloc.m"
              {
#line 229 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_23, &ll_backend__store_alloc__Cases_24, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 231 "store_alloc.m"
              {
#line 231 "store_alloc.m"
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
#line 232 "store_alloc.m"
              {
#line 232 "store_alloc.m"
                MR_Word base;
#line 232 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 232 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 232 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 232 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Var_21));
#line 232 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Det_22));
#line 232 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Cases_24));
#line 232 "store_alloc.m"
              }
#line 233 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 228 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 5:
#line 264 "store_alloc.m"
            {
#line 264 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 264 "store_alloc.m"
              MR_Word ll_backend__store_alloc__SubGoal0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 265 "store_alloc.m"
              MR_Word ll_backend__store_alloc__TermVar_53;
#line 266 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_85_85;

#line 266 "store_alloc.m"
              ll_backend__store_alloc__succeeded = ((((MR_tag((MR_Word) ll_backend__store_alloc__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 266 "store_alloc.m"
              if (ll_backend__store_alloc__succeeded)
#line 266 "store_alloc.m"
                {
#line 266 "store_alloc.m"
                  ll_backend__store_alloc__TermVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 1)));
#line 266 "store_alloc.m"
                  ll_backend__store_alloc__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 2)));
#line 266 "store_alloc.m"
                  ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_85_85 == (MR_Integer) 1);
#line 266 "store_alloc.m"
                }
#line 265 "store_alloc.m"
              if (ll_backend__store_alloc__succeeded)
#line 268 "store_alloc.m"
                {
#line 268 "store_alloc.m"
                  *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 269 "store_alloc.m"
                  {
#line 269 "store_alloc.m"
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__TermVar_53, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79);
                  }
#line 268 "store_alloc.m"
                  *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 268 "store_alloc.m"
                }
#line 265 "store_alloc.m"
              else
#line 272 "store_alloc.m"
                {
#line 272 "store_alloc.m"
                  MR_Word ll_backend__store_alloc__SubGoal_106;

#line 271 "store_alloc.m"
                  {
#line 271 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_108, &ll_backend__store_alloc__SubGoal_106, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 273 "store_alloc.m"
                  {
#line 273 "store_alloc.m"
                    MR_Word base;
#line 273 "store_alloc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 273 "store_alloc.m"
                    *ll_backend__store_alloc__GoalExpr_11 = base;
#line 273 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 273 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Reason_52));
#line 273 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__SubGoal_106));
#line 273 "store_alloc.m"
                  }
#line 272 "store_alloc.m"
                }
#line 275 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 264 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 6:
#line 235 "store_alloc.m"
            {
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 4)));
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__CondGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 1)));
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ResumeCond_33;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ResumeCondVars_34;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cond_36;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Liveness1_37;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsCond_38;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Then_39;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Else_41;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsElse_43;
#line 239 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 0)));
#line 241 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_35_35;
#line 246 "store_alloc.m"
              MR_Word ll_backend__store_alloc___Liveness2_42;
#line 248 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_91_91;

#line 240 "store_alloc.m"
              {
#line 240 "store_alloc.m"
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__CondGoalInfo0_32, &ll_backend__store_alloc__ResumeCond_33);
              }
#line 241 "store_alloc.m"
              {
#line 241 "store_alloc.m"
                hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeCond_33, &ll_backend__store_alloc__ResumeCondVars_34, &ll_backend__store_alloc__V_35_35);
              }
#line 242 "store_alloc.m"
              {
#line 242 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Cond0_26, &ll_backend__store_alloc__Cond_36, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__ResumeCondVars_34, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 244 "store_alloc.m"
              {
#line 244 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Then0_27, &ll_backend__store_alloc__Then_39, ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 246 "store_alloc.m"
              {
#line 246 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Else0_28, &ll_backend__store_alloc__Else_41, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc___Liveness2_42, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsElse_43, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 248 "store_alloc.m"
              {
#line 248 "store_alloc.m"
                ll_backend__store_alloc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsElse_43));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "store_alloc.m"
              }
#line 252 "store_alloc.m"
              {
#line 252 "store_alloc.m"
                MR_Word base;
#line 252 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 252 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 252 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 252 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Vars_25));
#line 252 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Cond_36));
#line 252 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Then_39));
#line 252 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__store_alloc__Else_41));
#line 252 "store_alloc.m"
              }
#line 253 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 235 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
          case (MR_Integer) 7:
#line 285 "store_alloc.m"
            {
#line 287 "store_alloc.m"
              {
#line 287 "store_alloc.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.store_alloc", (MR_String) "predicate \140ll_backend.store_alloc.store_alloc_in_goal_2\'/9", (MR_String) "shorthand");
#line 287 "store_alloc.m"
                return;
              }
#line 285 "store_alloc.m"
            }
#line 208 "store_alloc.m"
            break;
#line 208 "store_alloc.m"
        }
#line 208 "store_alloc.m"
        break;
#line 208 "store_alloc.m"
    }
#line 208 "store_alloc.m"
  }
#line 200 "store_alloc.m"
}

#line 149 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 149 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 149 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15)
#line 149 "store_alloc.m"
{
#line 154 "store_alloc.m"
  {
#line 154 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TypeCtorInfo_37_37;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 0)));
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 1)));
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreDeaths_18;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreBirths_19;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostDeaths_20;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostBirths_21;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness1_22;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness2_23;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr_24;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness3_25;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__BranchedGoal_26;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness4_27;
#line 154 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo_33;

#line 157 "store_alloc.m"
    {
#line 157 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreDeaths_18);
    }
#line 158 "store_alloc.m"
    {
#line 158 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreBirths_19);
    }
#line 159 "store_alloc.m"
    {
#line 159 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostDeaths_20);
    }
#line 160 "store_alloc.m"
    {
#line 160 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostBirths_21);
    }
#line 3280 "ll_backend.store_alloc.c"
    ll_backend__store_alloc__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 162 "store_alloc.m"
    {
#line 162 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness0_11, ll_backend__store_alloc__PreDeaths_18, &ll_backend__store_alloc__Liveness1_22);
    }
#line 163 "store_alloc.m"
    {
#line 163 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness1_22, ll_backend__store_alloc__PreBirths_19, &ll_backend__store_alloc__Liveness2_23);
    }
#line 164 "store_alloc.m"
    {
#line 164 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(ll_backend__store_alloc__GoalExpr0_16, &ll_backend__store_alloc__GoalExpr_24, ll_backend__store_alloc__Liveness2_23, &ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__BranchedGoal_26, ll_backend__store_alloc__StoreAllocInfo_15);
    }
#line 166 "store_alloc.m"
    {
#line 166 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__PostDeaths_20, &ll_backend__store_alloc__Liveness4_27);
    }
#line 170 "store_alloc.m"
    {
#line 170 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__PostBirths_21, ll_backend__store_alloc__Liveness_12);
    }
#line 186 "store_alloc.m"
#line 186 "store_alloc.m"
    switch (ll_backend__store_alloc__BranchedGoal_26) {
#line 186 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 186 "store_alloc.m"
      case (MR_Integer) 0:
#line 172 "store_alloc.m"
        {
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__TypeInfo_19_54;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__TypeCtorInfo_20_55;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__MappedSet_28;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__MappedVars_29;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__AdvisoryStoreMap_31;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreMap_32;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowKeys_45;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreVars_46;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SeenLvals0_47;
#line 172 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__N_48;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SeenLvals_49;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50;
#line 172 "store_alloc.m"
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52;
#line 178 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreMapPrime_30;

#line 176 "store_alloc.m"
          {
#line 176 "store_alloc.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__MappedSet_28);
          }
#line 177 "store_alloc.m"
          {
#line 177 "store_alloc.m"
            ll_backend__store_alloc__MappedVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__MappedSet_28);
          }
#line 178 "store_alloc.m"
          {
#line 178 "store_alloc.m"
            ll_backend__store_alloc__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__StoreMapPrime_30);
          }
#line 178 "store_alloc.m"
          if (ll_backend__store_alloc__succeeded)
#line 179 "store_alloc.m"
            ll_backend__store_alloc__AdvisoryStoreMap_31 = ll_backend__store_alloc__StoreMapPrime_30;
#line 178 "store_alloc.m"
          else
#line 181 "store_alloc.m"
            {
#line 181 "store_alloc.m"
              {
#line 181 "store_alloc.m"
                ll_backend__store_alloc__AdvisoryStoreMap_31 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
              }
#line 181 "store_alloc.m"
            }
#line 3375 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__TypeInfo_19_54 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 3377 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__TypeCtorInfo_20_55 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 407 "store_alloc.m"
          {
#line 407 "store_alloc.m"
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__FollowKeys_45);
          }
#line 408 "store_alloc.m"
          {
#line 408 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(ll_backend__store_alloc__FollowKeys_45, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50);
          }
#line 411 "store_alloc.m"
          {
#line 411 "store_alloc.m"
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__StoreVars_46);
          }
#line 412 "store_alloc.m"
          {
#line 412 "store_alloc.m"
            mercury__set__init_1_p_0(ll_backend__store_alloc__TypeCtorInfo_20_55, &ll_backend__store_alloc__SeenLvals0_47);
          }
#line 413 "store_alloc.m"
          {
#line 413 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__StoreVars_46, (MR_Integer) 1, &ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals0_47, &ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52);
          }
#line 417 "store_alloc.m"
          {
#line 417 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52, &ll_backend__store_alloc__StoreMap_32);
          }
#line 185 "store_alloc.m"
          {
#line 185 "store_alloc.m"
            hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__store_alloc__StoreMap_32, ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__GoalInfo_33);
          }
#line 172 "store_alloc.m"
        }
#line 186 "store_alloc.m"
        break;
#line 186 "store_alloc.m"
      case (MR_Integer) 1:
#line 188 "store_alloc.m"
        ll_backend__store_alloc__GoalInfo_33 = ll_backend__store_alloc__GoalInfo0_17;
#line 186 "store_alloc.m"
        break;
#line 186 "store_alloc.m"
    }
#line 190 "store_alloc.m"
    {
#line 190 "store_alloc.m"
      MR_Word base;
#line 190 "store_alloc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "store_alloc.m"
      *ll_backend__store_alloc__Goal_10 = base;
#line 190 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr_24));
#line 190 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo_33));
#line 190 "store_alloc.m"
    }
#line 154 "store_alloc.m"
  }
#line 149 "store_alloc.m"
}

#line 128 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 128 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1)
#line 128 "store_alloc.m"
{
#line 130 "store_alloc.m"
  {
#line 130 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 130 "store_alloc.m"
    MR_Word ll_backend__store_alloc__HeadVar__2_2;

#line 130 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "store_alloc.m"
      {
#line 130 "store_alloc.m"
        {
#line 130 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 130 "store_alloc.m"
      }
#line 130 "store_alloc.m"
    else
#line 131 "store_alloc.m"
      {
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Var_3;
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Lval_4;
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__VarLvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7;
#line 131 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8;

#line 131 "store_alloc.m"
        ll_backend__store_alloc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 0)));
#line 131 "store_alloc.m"
        ll_backend__store_alloc__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 1)));
#line 132 "store_alloc.m"
        {
#line 132 "store_alloc.m"
          ll_backend__store_alloc__V_7_7 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__VarLvals_5);
        }
#line 133 "store_alloc.m"
        {
#line 133 "store_alloc.m"
          ll_backend__store_alloc__V_8_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__store_alloc__Lval_4)));
        }
#line 132 "store_alloc.m"
        {
#line 132 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__V_7_7, ((MR_Box) (ll_backend__store_alloc__Var_3)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
        }
#line 131 "store_alloc.m"
      }
#line 130 "store_alloc.m"
    return ll_backend__store_alloc__HeadVar__2_2;
#line 130 "store_alloc.m"
  }
#line 128 "store_alloc.m"
}

#line 41 "store_alloc.m"
void MR_CALL 
ll_backend__store_alloc__allocate_store_maps_5_p_0(
#line 41 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RunType_6,
#line 41 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ModuleInfo_7,
#line 41 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 41 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40,
#line 41 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_41)
#line 41 "store_alloc.m"
{
#line 79 "store_alloc.m"
  {
#line 79 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Globals_11;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__VarTypes_17;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal2_25;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredInfo_26;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness0_27;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TraceLevel_28;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__NeedFailVars_29;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__ResumeVars_30;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__InputArgLvals_31;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__LastLocns0_32;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StackSlots_33;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegs_34;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegType_35;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StoreAllocInfo_36;
#line 79 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal_37;
#line 79 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 124 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_38_38;
#line 124 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_39_39;

#line 80 "store_alloc.m"
    {
#line 80 "store_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Globals_11);
    }
#line 99 "store_alloc.m"
    {
#line 99 "store_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredId_8, &ll_backend__store_alloc__PredInfo_26);
    }
#line 100 "store_alloc.m"
    {
#line 100 "store_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_26, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Liveness0_27);
    }
#line 101 "store_alloc.m"
    {
#line 101 "store_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__store_alloc__Globals_11, &ll_backend__store_alloc__TraceLevel_28);
    }
#line 102 "store_alloc.m"
    {
#line 102 "store_alloc.m"
      ll_backend__store_alloc__NeedFailVars_29 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_26, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, ll_backend__store_alloc__TraceLevel_28);
    }
#line 107 "store_alloc.m"
#line 107 "store_alloc.m"
    switch (ll_backend__store_alloc__NeedFailVars_29) {
#line 107 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 107 "store_alloc.m"
      case (MR_Integer) 0:
#line 108 "store_alloc.m"
        {
#line 109 "store_alloc.m"
          {
#line 109 "store_alloc.m"
            ll_backend__store_alloc__ResumeVars_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 108 "store_alloc.m"
        }
#line 107 "store_alloc.m"
        break;
#line 107 "store_alloc.m"
      case (MR_Integer) 1:
#line 106 "store_alloc.m"
        {
#line 106 "store_alloc.m"
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__ResumeVars_30);
        }
#line 107 "store_alloc.m"
        break;
#line 107 "store_alloc.m"
    }
#line 111 "store_alloc.m"
    {
#line 111 "store_alloc.m"
      ll_backend__code_util__build_input_arg_list_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__InputArgLvals_31);
    }
#line 112 "store_alloc.m"
    {
#line 112 "store_alloc.m"
      ll_backend__store_alloc__LastLocns0_32 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__InputArgLvals_31);
    }
#line 113 "store_alloc.m"
    {
#line 113 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__StackSlots_33);
    }
#line 114 "store_alloc.m"
    {
#line 114 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__VarTypes_17);
    }
#line 95 "store_alloc.m"
#line 95 "store_alloc.m"
    switch (ll_backend__store_alloc__RunType_6) {
#line 95 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 95 "store_alloc.m"
      case (MR_Integer) 0:
#line 82 "store_alloc.m"
        {
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__Goal0_12;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVarsMap0_13;
#line 82 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedR0_14;
#line 82 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedF0_15;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__Goal1_16;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVarsMap_18;
#line 82 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedR_19;
#line 82 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedF_20;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalExpr1_21;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalInfo1_22;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVars_23;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalInfo2_24;
#line 82 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_42_42;

#line 83 "store_alloc.m"
          {
#line 83 "store_alloc.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Goal0_12);
          }
#line 85 "store_alloc.m"
          {
#line 85 "store_alloc.m"
            ll_backend__follow_vars__find_final_follow_vars_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedF0_15);
          }
#line 87 "store_alloc.m"
          {
#line 87 "store_alloc.m"
            ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__store_alloc__Goal0_12, &ll_backend__store_alloc__Goal1_16, ll_backend__store_alloc__VarTypes_17, ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__FollowVarsMap_18, ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedR_19, ll_backend__store_alloc__NextNonReservedF0_15, &ll_backend__store_alloc__NextNonReservedF_20);
          }
#line 90 "store_alloc.m"
          ll_backend__store_alloc__GoalExpr1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 0)));
#line 90 "store_alloc.m"
          ll_backend__store_alloc__GoalInfo1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 1)));
#line 91 "store_alloc.m"
          {
#line 91 "store_alloc.m"
            ll_backend__store_alloc__FollowVars_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 91 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVarsMap_18));
#line 91 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 1) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedR_19));
#line 91 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 2) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedF_20));
#line 91 "store_alloc.m"
          }
#line 93 "store_alloc.m"
          {
#line 93 "store_alloc.m"
            ll_backend__store_alloc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "store_alloc.m"
            MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_42_42, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVars_23));
#line 93 "store_alloc.m"
          }
#line 93 "store_alloc.m"
          {
#line 93 "store_alloc.m"
            hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(ll_backend__store_alloc__V_42_42, ll_backend__store_alloc__GoalInfo1_22, &ll_backend__store_alloc__GoalInfo2_24);
          }
#line 94 "store_alloc.m"
          {
#line 94 "store_alloc.m"
            ll_backend__store_alloc__Goal2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 94 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr1_21));
#line 94 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo2_24));
#line 94 "store_alloc.m"
          }
#line 82 "store_alloc.m"
        }
#line 95 "store_alloc.m"
        break;
#line 95 "store_alloc.m"
      case (MR_Integer) 1:
#line 97 "store_alloc.m"
        {
#line 97 "store_alloc.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Goal2_25);
        }
#line 95 "store_alloc.m"
        break;
#line 95 "store_alloc.m"
    }
#line 115 "store_alloc.m"
    {
#line 115 "store_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__store_alloc__Globals_11, (MR_Integer) 251, &ll_backend__store_alloc__FloatRegs_34);
    }
#line 119 "store_alloc.m"
#line 119 "store_alloc.m"
    switch (ll_backend__store_alloc__FloatRegs_34) {
#line 119 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 119 "store_alloc.m"
      case (MR_Integer) 0:
#line 121 "store_alloc.m"
        ll_backend__store_alloc__FloatRegType_35 = (MR_Integer) 0;
#line 119 "store_alloc.m"
        break;
#line 119 "store_alloc.m"
      case (MR_Integer) 1:
#line 118 "store_alloc.m"
        ll_backend__store_alloc__FloatRegType_35 = (MR_Integer) 1;
#line 119 "store_alloc.m"
        break;
#line 119 "store_alloc.m"
    }
#line 123 "store_alloc.m"
    {
#line 123 "store_alloc.m"
      ll_backend__store_alloc__StoreAllocInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 123 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 0) = ((MR_Box) (ll_backend__store_alloc__StackSlots_33));
#line 123 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 1) = ((MR_Box) (ll_backend__store_alloc__VarTypes_17));
#line 123 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 2) = ((MR_Box) (ll_backend__store_alloc__FloatRegType_35));
#line 123 "store_alloc.m"
    }
#line 124 "store_alloc.m"
    {
#line 124 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal2_25, &ll_backend__store_alloc__Goal_37, ll_backend__store_alloc__Liveness0_27, &ll_backend__store_alloc__V_38_38, ll_backend__store_alloc__LastLocns0_32, &ll_backend__store_alloc__V_39_39, ll_backend__store_alloc__ResumeVars_30, ll_backend__store_alloc__StoreAllocInfo_36);
    }
#line 126 "store_alloc.m"
    {
#line 126 "store_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__store_alloc__Goal_37, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_41);
    }
#line 79 "store_alloc.m"
  }
#line 41 "store_alloc.m"
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
