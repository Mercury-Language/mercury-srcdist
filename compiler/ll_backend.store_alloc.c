/*
** Automatically generated from `store_alloc.m'
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 158 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0;

#line 161 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1;

#line 164 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2];

#line 167 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2];

#line 170 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2];

#line 173 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 179 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 182 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 185 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 188 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3];

#line 191 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3];

#line 194 "ll_backend.store_alloc.c"
static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0;

#line 197 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1];

#line 200 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1];

#line 203 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1];

#line 206 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1];

#line 209 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0;

#line 212 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1;

#line 215 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2];

#line 218 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2];

#line 221 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2];

#line 224 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 227 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 229 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 232 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 235 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 237 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 239 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 242 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 245 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 247 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 250 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 253 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 255 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 257 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 260 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 263 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 265 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 268 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 271 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 273 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 275 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 278 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 281 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 283 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 286 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 289 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 291 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 293 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 296 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 299 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 301 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

#line 304 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 307 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 309 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 311 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

#line 141 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 141 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 141 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 133 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 133 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 133 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 143 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 143 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 143 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 190 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 190 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

#line 190 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

#line 509 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 509 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 509 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 509 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 509 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8);

#line 456 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 456 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 456 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6);

#line 426 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 426 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 426 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 426 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 426 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8);

#line 414 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 414 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4);

#line 369 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 369 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 369 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4);

#line 350 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 326 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 311 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 286 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

#line 196 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16);

#line 145 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15);

#line 124 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 124 "store_alloc.m"
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



#line 633 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0 = {
  (MR_String) "is_branched_goal",
  (MR_Integer) 0
};

#line 639 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1 = {
  (MR_String) "is_not_branched_goal",
  (MR_Integer) 1
};

#line 645 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 651 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

#line 657 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 663 "ll_backend.store_alloc.c"
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

#line 680 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 688 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 696 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 705 "ll_backend.store_alloc.c"
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

#line 722 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 731 "ll_backend.store_alloc.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 740 "ll_backend.store_alloc.c"
static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0
};

#line 747 "ll_backend.store_alloc.c"
static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3] = {
  (MR_String) "sai_stack_slots",
  (MR_String) "sai_vartypes",
  (MR_String) "sai_float_reg"
};

#line 754 "ll_backend.store_alloc.c"
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

#line 769 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 774 "ll_backend.store_alloc.c"
static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0
  }
};

#line 783 "ll_backend.store_alloc.c"
static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

#line 788 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1] = {
  (MR_Integer) 0
};

#line 793 "ll_backend.store_alloc.c"
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

#line 810 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0 = {
  (MR_String) "final_allocation",
  (MR_Integer) 0
};

#line 816 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1 = {
  (MR_String) "for_stack_opt",
  (MR_Integer) 1
};

#line 822 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 828 "ll_backend.store_alloc.c"
static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

#line 834 "ll_backend.store_alloc.c"
static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 840 "ll_backend.store_alloc.c"
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

#line 857 "ll_backend.store_alloc.c"
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

#line 874 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
#line 877 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 879 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 881 "ll_backend.store_alloc.c"
{
#line 883 "ll_backend.store_alloc.c"
  {
#line 885 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 888 "ll_backend.store_alloc.c"
    {
#line 890 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____branched_goal_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 893 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 895 "ll_backend.store_alloc.c"
  }
#line 897 "ll_backend.store_alloc.c"
}

#line 900 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
#line 903 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 905 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 907 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 909 "ll_backend.store_alloc.c"
{
#line 911 "ll_backend.store_alloc.c"
  {
#line 913 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 916 "ll_backend.store_alloc.c"
    {
#line 918 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____branched_goal_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 921 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 923 "ll_backend.store_alloc.c"
  }
#line 925 "ll_backend.store_alloc.c"
}

#line 928 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
#line 931 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 933 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 935 "ll_backend.store_alloc.c"
{
#line 937 "ll_backend.store_alloc.c"
  {
#line 939 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 942 "ll_backend.store_alloc.c"
    {
#line 944 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____last_locns_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 947 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 949 "ll_backend.store_alloc.c"
  }
#line 951 "ll_backend.store_alloc.c"
}

#line 954 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
#line 957 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 959 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 961 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 963 "ll_backend.store_alloc.c"
{
#line 965 "ll_backend.store_alloc.c"
  {
#line 967 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 970 "ll_backend.store_alloc.c"
    {
#line 972 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____last_locns_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 975 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 977 "ll_backend.store_alloc.c"
  }
#line 979 "ll_backend.store_alloc.c"
}

#line 982 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
#line 985 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 987 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 989 "ll_backend.store_alloc.c"
{
#line 991 "ll_backend.store_alloc.c"
  {
#line 993 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 996 "ll_backend.store_alloc.c"
    {
#line 998 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_alloc_info_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1001 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1003 "ll_backend.store_alloc.c"
  }
#line 1005 "ll_backend.store_alloc.c"
}

#line 1008 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
#line 1011 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1013 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1015 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1017 "ll_backend.store_alloc.c"
{
#line 1019 "ll_backend.store_alloc.c"
  {
#line 1021 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1024 "ll_backend.store_alloc.c"
    {
#line 1026 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_alloc_info_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1029 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1031 "ll_backend.store_alloc.c"
  }
#line 1033 "ll_backend.store_alloc.c"
}

#line 1036 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
#line 1039 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1041 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1043 "ll_backend.store_alloc.c"
{
#line 1045 "ll_backend.store_alloc.c"
  {
#line 1047 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1050 "ll_backend.store_alloc.c"
    {
#line 1052 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_map_run_type_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1055 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1057 "ll_backend.store_alloc.c"
  }
#line 1059 "ll_backend.store_alloc.c"
}

#line 1062 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
#line 1065 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1067 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1069 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1071 "ll_backend.store_alloc.c"
{
#line 1073 "ll_backend.store_alloc.c"
  {
#line 1075 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1078 "ll_backend.store_alloc.c"
    {
#line 1080 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____store_map_run_type_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1083 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1085 "ll_backend.store_alloc.c"
  }
#line 1087 "ll_backend.store_alloc.c"
}

#line 1090 "ll_backend.store_alloc.c"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
#line 1093 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
#line 1095 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
#line 1097 "ll_backend.store_alloc.c"
{
#line 1099 "ll_backend.store_alloc.c"
  {
#line 1101 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded;

#line 1104 "ll_backend.store_alloc.c"
    {
#line 1106 "ll_backend.store_alloc.c"
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____where_stored_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
#line 1109 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1111 "ll_backend.store_alloc.c"
  }
#line 1113 "ll_backend.store_alloc.c"
}

#line 1116 "ll_backend.store_alloc.c"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
#line 1119 "ll_backend.store_alloc.c"
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
#line 1121 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
#line 1123 "ll_backend.store_alloc.c"
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
#line 1125 "ll_backend.store_alloc.c"
{
#line 1127 "ll_backend.store_alloc.c"
  {
#line 1129 "ll_backend.store_alloc.c"
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

#line 1132 "ll_backend.store_alloc.c"
    {
#line 1134 "ll_backend.store_alloc.c"
      ll_backend__store_alloc____Compare____where_stored_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
#line 1137 "ll_backend.store_alloc.c"
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
#line 1139 "ll_backend.store_alloc.c"
  }
#line 1141 "ll_backend.store_alloc.c"
}

#line 141 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
#line 141 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 141 "store_alloc.m"
{
#line 141 "store_alloc.m"
  {
#line 141 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 141 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 141 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 141 "store_alloc.m"
    {
#line 141 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
#line 141 "store_alloc.m"
      return;
    }
#line 141 "store_alloc.m"
  }
#line 141 "store_alloc.m"
}

#line 141 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 141 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 141 "store_alloc.m"
{
#line 141 "store_alloc.m"
  {
#line 141 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 141 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 141 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 141 "store_alloc.m"
    {
#line 141 "store_alloc.m"
      return ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 141 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 141 "store_alloc.m"
  }
#line 141 "store_alloc.m"
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
#line 1247 "ll_backend.store_alloc.c"
  {
#line 1249 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1252 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1254 "ll_backend.store_alloc.c"
  }
#line 36 "store_alloc.m"
}

#line 133 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
#line 133 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 133 "store_alloc.m"
{
#line 133 "store_alloc.m"
  {
#line 133 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 133 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_12 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 133 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_13 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 133 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_12 == ll_backend__store_alloc__CastY_13);
#line 133 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 1283 "ll_backend.store_alloc.c"
      *ll_backend__store_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "store_alloc.m"
    else
#line 133 "store_alloc.m"
      {
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 2)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 133 "store_alloc.m"
        {
#line 133 "store_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], &ll_backend__store_alloc__V_10_10, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
        }
#line 1309 "ll_backend.store_alloc.c"
        ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_10_10 == (MR_Integer) 0);
#line 133 "store_alloc.m"
        ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 133 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 133 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_10_10;
#line 133 "store_alloc.m"
        else
#line 133 "store_alloc.m"
          {
#line 133 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_11_11;

#line 133 "store_alloc.m"
            {
#line 133 "store_alloc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[2], &ll_backend__store_alloc__V_11_11, ((MR_Box) (ll_backend__store_alloc__V_5_5)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
            }
#line 1329 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_11_11 == (MR_Integer) 0);
#line 133 "store_alloc.m"
            ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 133 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 133 "store_alloc.m"
              *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_11_11;
#line 133 "store_alloc.m"
            else
#line 133 "store_alloc.m"
              {
#line 133 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_17_17 = (MR_Integer) ll_backend__store_alloc__V_6_6;
#line 133 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_18_18 = (MR_Integer) ll_backend__store_alloc__V_9_9;

#line 133 "store_alloc.m"
                {
#line 133 "store_alloc.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__V_17_17, ll_backend__store_alloc__V_18_18);
#line 133 "store_alloc.m"
                  return;
                }
#line 133 "store_alloc.m"
              }
#line 133 "store_alloc.m"
          }
#line 133 "store_alloc.m"
      }
#line 133 "store_alloc.m"
  }
#line 133 "store_alloc.m"
}

#line 133 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 133 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 133 "store_alloc.m"
{
#line 133 "store_alloc.m"
  {
#line 133 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 133 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastX_9 = (MR_Integer) ll_backend__store_alloc__HeadVar__1_1;
#line 133 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__CastY_10 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;

#line 133 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_9 == ll_backend__store_alloc__CastY_10);
#line 133 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 133 "store_alloc.m"
      ll_backend__store_alloc__succeeded = MR_TRUE;
#line 133 "store_alloc.m"
    else
#line 133 "store_alloc.m"
      {
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__TypeInfo_12_12;
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));

#line 1407 "ll_backend.store_alloc.c"
        {
#line 1409 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], ((MR_Box) (ll_backend__store_alloc__V_3_3)), ((MR_Box) (ll_backend__store_alloc__V_6_6)));
        }
#line 133 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 133 "store_alloc.m"
          {
#line 1416 "ll_backend.store_alloc.c"
            ll_backend__store_alloc__TypeInfo_12_12 = (MR_Word) &ll_backend__store_alloc_scalar_common_2[2];
#line 1418 "ll_backend.store_alloc.c"
            {
#line 1420 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__store_alloc__TypeInfo_12_12, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
            }
#line 133 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 1425 "ll_backend.store_alloc.c"
              ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_5_5 == ll_backend__store_alloc__V_8_8);
#line 133 "store_alloc.m"
          }
#line 133 "store_alloc.m"
      }
#line 133 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 133 "store_alloc.m"
  }
#line 133 "store_alloc.m"
}

#line 143 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
#line 143 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 143 "store_alloc.m"
{
#line 143 "store_alloc.m"
  {
#line 143 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 143 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
#line 143 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

#line 143 "store_alloc.m"
    {
#line 143 "store_alloc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
#line 143 "store_alloc.m"
      return;
    }
#line 143 "store_alloc.m"
  }
#line 143 "store_alloc.m"
}

#line 143 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 143 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 143 "store_alloc.m"
{
#line 143 "store_alloc.m"
  {
#line 143 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 143 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
#line 143 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

#line 143 "store_alloc.m"
    {
#line 143 "store_alloc.m"
      return ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
#line 143 "store_alloc.m"
    return ll_backend__store_alloc__succeeded;
#line 143 "store_alloc.m"
  }
#line 143 "store_alloc.m"
}

#line 190 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
#line 190 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
#line 190 "store_alloc.m"
{
#line 190 "store_alloc.m"
  {
#line 190 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 190 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
#line 190 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

#line 190 "store_alloc.m"
    {
#line 190 "store_alloc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
#line 190 "store_alloc.m"
      return;
    }
#line 190 "store_alloc.m"
  }
#line 190 "store_alloc.m"
}

#line 190 "store_alloc.m"
static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
#line 190 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
#line 190 "store_alloc.m"
{
#line 1541 "ll_backend.store_alloc.c"
  {
#line 1543 "ll_backend.store_alloc.c"
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

#line 1546 "ll_backend.store_alloc.c"
    return ll_backend__store_alloc__succeeded;
#line 1548 "ll_backend.store_alloc.c"
  }
#line 190 "store_alloc.m"
}

#line 509 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
#line 509 "store_alloc.m"
  MR_Word ll_backend__store_alloc__RegType_5,
#line 509 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Values_6,
#line 509 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__N0_7,
#line 509 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__N_8)
#line 509 "store_alloc.m"
{
#line 516 "store_alloc.m"
  while (MR_TRUE)
#line 516 "store_alloc.m"
    {
#line 516 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 516 "store_alloc.m"
      {
#line 516 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;
#line 513 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_10_10;

#line 513 "store_alloc.m"
        {
#line 513 "store_alloc.m"
          ll_backend__store_alloc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_5));
#line 513 "store_alloc.m"
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 1) = ((MR_Box) (ll_backend__store_alloc__N0_7));
#line 513 "store_alloc.m"
        }
#line 513 "store_alloc.m"
        {
#line 513 "store_alloc.m"
          ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__V_10_10)), ll_backend__store_alloc__Values_6);
        }
#line 516 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 514 "store_alloc.m"
          {
#line 514 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__N1_9 = (ll_backend__store_alloc__N0_7 + (MR_Integer) 1);

#line 515 "store_alloc.m"
            /* direct tailcall eliminated */
#line 515 "store_alloc.m"
            {
#line 515 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__N0__tmp_copy_7 = ll_backend__store_alloc__N1_9;

#line 515 "store_alloc.m"
              ll_backend__store_alloc__N0_7 = ll_backend__store_alloc__N0__tmp_copy_7;
#line 515 "store_alloc.m"
            }
#line 515 "store_alloc.m"
            continue;
#line 514 "store_alloc.m"
          }
#line 516 "store_alloc.m"
        else
#line 517 "store_alloc.m"
          *ll_backend__store_alloc__N_8 = ll_backend__store_alloc__N0_7;
#line 516 "store_alloc.m"
      }
#line 516 "store_alloc.m"
      break;
#line 516 "store_alloc.m"
    }
#line 509 "store_alloc.m"
}

#line 456 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 456 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
#line 456 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
#line 456 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6)
#line 456 "store_alloc.m"
{
#line 459 "store_alloc.m"
  while (MR_TRUE)
#line 459 "store_alloc.m"
    {
#line 459 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 459 "store_alloc.m"
      {
#line 459 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 459 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 459 "store_alloc.m"
        else
#line 461 "store_alloc.m"
          {
#line 461 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 461 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 461 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 461 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;
#line 461 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;

#line 462 "store_alloc.m"
            {
#line 462 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__map__contains_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, ((MR_Box) (ll_backend__store_alloc__Var_14)));
            }
#line 465 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 464 "store_alloc.m"
              {
#line 464 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
#line 464 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4;
#line 464 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 464 "store_alloc.m"
              }
#line 465 "store_alloc.m"
            else
#line 468 "store_alloc.m"
              {
#line 468 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_40_40;
#line 468 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlots_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));
#line 468 "store_alloc.m"
                MR_Word ll_backend__store_alloc__Locn_24;
#line 468 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 468 "store_alloc.m"
                MR_Word ll_backend__store_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 478 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlotLocn_23;
#line 470 "store_alloc.m"
                MR_Word ll_backend__store_alloc__StackSlot_22;
#line 470 "store_alloc.m"
                MR_Box ll_backend__store_alloc__conv0_StackSlot_22;
#line 472 "store_alloc.m"
                MR_Word ll_backend__store_alloc__TypeCtorInfo_38_38;

#line 470 "store_alloc.m"
                {
#line 470 "store_alloc.m"
                  ll_backend__store_alloc__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__store_alloc__StackSlots_19, ((MR_Box) (ll_backend__store_alloc__Var_14)), &ll_backend__store_alloc__conv0_StackSlot_22);
                }
#line 470 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 470 "store_alloc.m"
                  {
#line 470 "store_alloc.m"
                    ll_backend__store_alloc__StackSlot_22 = ((MR_Word) ll_backend__store_alloc__conv0_StackSlot_22);
#line 470 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = MR_TRUE;
#line 470 "store_alloc.m"
                  }
#line 470 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 470 "store_alloc.m"
                  {
#line 471 "store_alloc.m"
                    {
#line 471 "store_alloc.m"
                      ll_backend__store_alloc__StackSlotLocn_23 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(ll_backend__store_alloc__StackSlot_22);
                    }
#line 1740 "ll_backend.store_alloc.c"
                    ll_backend__store_alloc__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 472 "store_alloc.m"
                    {
#line 472 "store_alloc.m"
                      ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_38_38, ((MR_Box) (ll_backend__store_alloc__StackSlotLocn_23)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4);
                    }
#line 472 "store_alloc.m"
                    ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
#line 470 "store_alloc.m"
                  }
#line 478 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 477 "store_alloc.m"
                  {
#line 477 "store_alloc.m"
                    ll_backend__store_alloc__Locn_24 = ll_backend__store_alloc__StackSlotLocn_23;
#line 477 "store_alloc.m"
                    ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 477 "store_alloc.m"
                  }
#line 478 "store_alloc.m"
                else
#line 479 "store_alloc.m"
                  {
#line 479 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__RegType_25;
#line 479 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 479 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 493 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 497 "store_alloc.m"
#line 497 "store_alloc.m"
                    switch (ll_backend__store_alloc__FloatRegType_46) {
#line 497 "store_alloc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 497 "store_alloc.m"
                      case (MR_Integer) 1:
#line 498 "store_alloc.m"
                        {
#line 498 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__VarType_47;
#line 500 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__V_48_48;

#line 499 "store_alloc.m"
                          {
#line 499 "store_alloc.m"
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_45, ll_backend__store_alloc__Var_14, &ll_backend__store_alloc__VarType_47);
                          }
#line 500 "store_alloc.m"
                          {
#line 500 "store_alloc.m"
                            ll_backend__store_alloc__V_48_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
#line 500 "store_alloc.m"
                          {
#line 500 "store_alloc.m"
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_47, ll_backend__store_alloc__V_48_48);
                          }
#line 502 "store_alloc.m"
                          if (ll_backend__store_alloc__succeeded)
#line 501 "store_alloc.m"
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 1;
#line 502 "store_alloc.m"
                          else
#line 503 "store_alloc.m"
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 498 "store_alloc.m"
                        }
#line 497 "store_alloc.m"
                        break;
#line 497 "store_alloc.m"
                      case (MR_Integer) 0:
#line 496 "store_alloc.m"
                        ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
#line 497 "store_alloc.m"
                        break;
#line 497 "store_alloc.m"
                    }
#line 480 "store_alloc.m"
                    {
#line 480 "store_alloc.m"
                      ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_25, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_30_30);
                    }
#line 481 "store_alloc.m"
                    {
#line 481 "store_alloc.m"
                      ll_backend__store_alloc__Locn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_25));
#line 481 "store_alloc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_30_30));
#line 481 "store_alloc.m"
                    }
#line 479 "store_alloc.m"
                  }
#line 1840 "ll_backend.store_alloc.c"
                ll_backend__store_alloc__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 483 "store_alloc.m"
                {
#line 483 "store_alloc.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Var_14)), ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31);
                }
#line 484 "store_alloc.m"
                {
#line 484 "store_alloc.m"
                  mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32);
                }
#line 468 "store_alloc.m"
              }
#line 486 "store_alloc.m"
            /* direct tailcall eliminated */
#line 486 "store_alloc.m"
            {
#line 486 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_15;
#line 486 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
#line 486 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;
#line 486 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;

#line 486 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5;
#line 486 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4;
#line 486 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 486 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 486 "store_alloc.m"
            }
#line 486 "store_alloc.m"
            continue;
#line 461 "store_alloc.m"
          }
#line 459 "store_alloc.m"
      }
#line 459 "store_alloc.m"
      break;
#line 459 "store_alloc.m"
    }
#line 456 "store_alloc.m"
}

#line 426 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 426 "store_alloc.m"
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
#line 426 "store_alloc.m"
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
#line 426 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
#line 426 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
#line 426 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8)
#line 426 "store_alloc.m"
{
#line 431 "store_alloc.m"
  while (MR_TRUE)
#line 431 "store_alloc.m"
    {
#line 431 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 431 "store_alloc.m"
      {
#line 431 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 431 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "store_alloc.m"
          {
#line 432 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 432 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5;
#line 432 "store_alloc.m"
            *ll_backend__store_alloc__STATE_VARIABLE_N_4 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 431 "store_alloc.m"
          }
#line 431 "store_alloc.m"
        else
#line 434 "store_alloc.m"
          {
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeInfo_42_42 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Locn_25;
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__FinalLocn_29;
#line 434 "store_alloc.m"
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;
#line 434 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 435 "store_alloc.m"
            MR_Box ll_backend__store_alloc__conv0_Locn_25;

#line 435 "store_alloc.m"
            {
#line 435 "store_alloc.m"
              mercury__map__lookup_3_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, ((MR_Box) (ll_backend__store_alloc__Var_20)), &ll_backend__store_alloc__conv0_Locn_25);
            }
#line 435 "store_alloc.m"
            ll_backend__store_alloc__Locn_25 = ((MR_Word) ll_backend__store_alloc__conv0_Locn_25);
#line 437 "store_alloc.m"
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__Locn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "store_alloc.m"
            if (!(ll_backend__store_alloc__succeeded))
#line 438 "store_alloc.m"
              {
#line 438 "store_alloc.m"
                ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Locn_25)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5);
              }
#line 449 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 445 "store_alloc.m"
              {
#line 445 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegType_28;
#line 443 "store_alloc.m"
                MR_Word ll_backend__store_alloc__RegTypePrime_26;
#line 441 "store_alloc.m"
                MR_Integer ll_backend__store_alloc__V_27_27;

#line 441 "store_alloc.m"
                ll_backend__store_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__store_alloc__Locn_25)) == (MR_mktag((MR_Integer) 1)));
#line 441 "store_alloc.m"
                if (ll_backend__store_alloc__succeeded)
#line 441 "store_alloc.m"
                  {
#line 441 "store_alloc.m"
                    ll_backend__store_alloc__RegTypePrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 0)));
#line 441 "store_alloc.m"
                    ll_backend__store_alloc__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 1)));
#line 442 "store_alloc.m"
                    ll_backend__store_alloc__RegType_28 = ll_backend__store_alloc__RegTypePrime_26;
#line 441 "store_alloc.m"
                  }
#line 441 "store_alloc.m"
                else
#line 492 "store_alloc.m"
                  {
#line 492 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__VarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
#line 492 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__FloatRegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
#line 493 "store_alloc.m"
                    MR_Word ll_backend__store_alloc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

#line 497 "store_alloc.m"
#line 497 "store_alloc.m"
                    switch (ll_backend__store_alloc__FloatRegType_49) {
#line 497 "store_alloc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 497 "store_alloc.m"
                      case (MR_Integer) 1:
#line 498 "store_alloc.m"
                        {
#line 498 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__VarType_50;
#line 500 "store_alloc.m"
                          MR_Word ll_backend__store_alloc__V_51_51;

#line 499 "store_alloc.m"
                          {
#line 499 "store_alloc.m"
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_48, ll_backend__store_alloc__Var_20, &ll_backend__store_alloc__VarType_50);
                          }
#line 500 "store_alloc.m"
                          {
#line 500 "store_alloc.m"
                            ll_backend__store_alloc__V_51_51 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
#line 500 "store_alloc.m"
                          {
#line 500 "store_alloc.m"
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_50, ll_backend__store_alloc__V_51_51);
                          }
#line 502 "store_alloc.m"
                          if (ll_backend__store_alloc__succeeded)
#line 501 "store_alloc.m"
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 1;
#line 502 "store_alloc.m"
                          else
#line 503 "store_alloc.m"
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 498 "store_alloc.m"
                        }
#line 497 "store_alloc.m"
                        break;
#line 497 "store_alloc.m"
                      case (MR_Integer) 0:
#line 496 "store_alloc.m"
                        ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
#line 497 "store_alloc.m"
                        break;
#line 497 "store_alloc.m"
                    }
#line 492 "store_alloc.m"
                  }
#line 446 "store_alloc.m"
                {
#line 446 "store_alloc.m"
                  ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_28, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_36_36);
                }
#line 447 "store_alloc.m"
                {
#line 447 "store_alloc.m"
                  ll_backend__store_alloc__FinalLocn_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_28));
#line 447 "store_alloc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_36_36));
#line 447 "store_alloc.m"
                }
#line 448 "store_alloc.m"
                {
#line 448 "store_alloc.m"
                  mercury__map__det_update_4_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Var_20)), ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37);
                }
#line 445 "store_alloc.m"
              }
#line 449 "store_alloc.m"
            else
#line 450 "store_alloc.m"
              {
#line 450 "store_alloc.m"
                ll_backend__store_alloc__FinalLocn_29 = ll_backend__store_alloc__Locn_25;
#line 450 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
#line 450 "store_alloc.m"
                ll_backend__store_alloc__STATE_VARIABLE_N_36_36 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
#line 450 "store_alloc.m"
              }
#line 452 "store_alloc.m"
            {
#line 452 "store_alloc.m"
              mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38);
            }
#line 453 "store_alloc.m"
            /* direct tailcall eliminated */
#line 453 "store_alloc.m"
            {
#line 453 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_21;
#line 453 "store_alloc.m"
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
#line 453 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
#line 453 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;

#line 453 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7;
#line 453 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5;
#line 453 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
#line 453 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
#line 453 "store_alloc.m"
            }
#line 453 "store_alloc.m"
            continue;
#line 434 "store_alloc.m"
          }
#line 431 "store_alloc.m"
      }
#line 431 "store_alloc.m"
      break;
#line 431 "store_alloc.m"
    }
#line 426 "store_alloc.m"
}

#line 414 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
#line 414 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
#line 414 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4)
#line 414 "store_alloc.m"
{
#line 417 "store_alloc.m"
  while (MR_TRUE)
#line 417 "store_alloc.m"
    {
#line 417 "store_alloc.m"
      /* tailcall optimized into a loop */
#line 417 "store_alloc.m"
      {
#line 417 "store_alloc.m"
        MR_bool ll_backend__store_alloc__succeeded;

#line 417 "store_alloc.m"
        if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 417 "store_alloc.m"
        else
#line 418 "store_alloc.m"
          {
#line 418 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "store_alloc.m"
            MR_Word ll_backend__store_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 419 "store_alloc.m"
            {
#line 419 "store_alloc.m"
              ll_backend__store_alloc__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__HeadVar__2_2);
            }
#line 421 "store_alloc.m"
            if (ll_backend__store_alloc__succeeded)
#line 421 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
#line 421 "store_alloc.m"
            else
#line 422 "store_alloc.m"
              {
#line 422 "store_alloc.m"
                {
#line 422 "store_alloc.m"
                  mercury__map__delete_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15);
                }
#line 422 "store_alloc.m"
              }
#line 424 "store_alloc.m"
            /* direct tailcall eliminated */
#line 424 "store_alloc.m"
            {
#line 424 "store_alloc.m"
              MR_Word ll_backend__store_alloc__HeadVar__1__tmp_copy_1 = ll_backend__store_alloc__Vars_10;
#line 424 "store_alloc.m"
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

#line 424 "store_alloc.m"
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3;
#line 424 "store_alloc.m"
              ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__HeadVar__1__tmp_copy_1;
#line 424 "store_alloc.m"
            }
#line 424 "store_alloc.m"
            continue;
#line 418 "store_alloc.m"
          }
#line 417 "store_alloc.m"
      }
#line 417 "store_alloc.m"
      break;
#line 417 "store_alloc.m"
    }
#line 414 "store_alloc.m"
}

#line 369 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
#line 369 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
#line 369 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__LastLocns_4)
#line 369 "store_alloc.m"
{
#line 373 "store_alloc.m"
  {
#line 373 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 373 "store_alloc.m"
    if ((ll_backend__store_alloc__LastLocnsList_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "store_alloc.m"
      {
#line 376 "store_alloc.m"
        {
#line 376 "store_alloc.m"
          *ll_backend__store_alloc__LastLocns_4 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 375 "store_alloc.m"
      }
#line 373 "store_alloc.m"
    else
#line 373 "store_alloc.m"
      {
#line 373 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_5_5;

#line 373 "store_alloc.m"
        *ll_backend__store_alloc__LastLocns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 0)));
#line 373 "store_alloc.m"
        ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 1)));
#line 373 "store_alloc.m"
      }
#line 373 "store_alloc.m"
  }
#line 369 "store_alloc.m"
}

#line 350 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 350 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 350 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 350 "store_alloc.m"
{
#line 355 "store_alloc.m"
  {
#line 355 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 355 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "store_alloc.m"
      {
#line 355 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 355 "store_alloc.m"
      }
#line 355 "store_alloc.m"
    else
#line 358 "store_alloc.m"
      {
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Case_17;
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Cases_18;
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsCases_23;
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 0)));
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 1)));
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 2)));
#line 358 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_29;
#line 363 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_30;

#line 360 "store_alloc.m"
        {
#line 360 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_28, &ll_backend__store_alloc__Goal_29, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 362 "store_alloc.m"
        {
#line 362 "store_alloc.m"
          ll_backend__store_alloc__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 362 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 0) = ((MR_Box) (ll_backend__store_alloc__MainConsId_26));
#line 362 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 1) = ((MR_Box) (ll_backend__store_alloc__OtherConsIds_27));
#line 362 "store_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 2) = ((MR_Box) (ll_backend__store_alloc__Goal_29));
#line 362 "store_alloc.m"
        }
#line 363 "store_alloc.m"
        {
#line 363 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_16, &ll_backend__store_alloc__Cases_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_30, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsCases_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 356 "store_alloc.m"
        {
#line 356 "store_alloc.m"
          MR_Word base;
#line 356 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 356 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Case_17));
#line 356 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Cases_18));
#line 356 "store_alloc.m"
        }
#line 357 "store_alloc.m"
        {
#line 357 "store_alloc.m"
          MR_Word base;
#line 357 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 357 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 357 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsCases_23));
#line 357 "store_alloc.m"
        }
#line 358 "store_alloc.m"
      }
#line 355 "store_alloc.m"
  }
#line 350 "store_alloc.m"
}

#line 326 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__LastLocns0_5,
#line 326 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 326 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 326 "store_alloc.m"
{
#line 331 "store_alloc.m"
  {
#line 331 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 331 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "store_alloc.m"
      {
#line 331 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 331 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 331 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
#line 331 "store_alloc.m"
      }
#line 331 "store_alloc.m"
    else
#line 334 "store_alloc.m"
      {
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__LastLocnsDisj_23;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 1)));
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoal_28;
#line 334 "store_alloc.m"
        MR_Word ll_backend__store_alloc__ResumeGoalVars_29;
#line 335 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 0)));
#line 345 "store_alloc.m"
        MR_Word ll_backend__store_alloc___Liveness1_31;

#line 336 "store_alloc.m"
        {
#line 336 "store_alloc.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__GoalInfo0_27, &ll_backend__store_alloc__ResumeGoal_28);
        }
#line 340 "store_alloc.m"
        if ((ll_backend__store_alloc__ResumeGoal_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "store_alloc.m"
          ll_backend__store_alloc__ResumeGoalVars_29 = ll_backend__store_alloc__ResumeVars0_7;
#line 340 "store_alloc.m"
        else
#line 341 "store_alloc.m"
          {
#line 341 "store_alloc.m"
            MR_Word ll_backend__store_alloc__V_30_30;

#line 341 "store_alloc.m"
            ll_backend__store_alloc__ResumeGoalVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 0)));
#line 341 "store_alloc.m"
            ll_backend__store_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 1)));
#line 341 "store_alloc.m"
          }
#line 343 "store_alloc.m"
        {
#line 343 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeGoalVars_29, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 345 "store_alloc.m"
        {
#line 345 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_31, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsDisj_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 332 "store_alloc.m"
        {
#line 332 "store_alloc.m"
          MR_Word base;
#line 332 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 332 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 332 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 332 "store_alloc.m"
        }
#line 333 "store_alloc.m"
        {
#line 333 "store_alloc.m"
          MR_Word base;
#line 333 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__6_6 = base;
#line 333 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
#line 333 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsDisj_23));
#line 333 "store_alloc.m"
        }
#line 334 "store_alloc.m"
      }
#line 331 "store_alloc.m"
  }
#line 326 "store_alloc.m"
}

#line 311 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 311 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 311 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 311 "store_alloc.m"
{
#line 315 "store_alloc.m"
  {
#line 315 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 315 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "store_alloc.m"
      {
#line 315 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "store_alloc.m"
        {
#line 315 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 315 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 315 "store_alloc.m"
      }
#line 315 "store_alloc.m"
    else
#line 317 "store_alloc.m"
      {
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_17;
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_18;
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness1_24;
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Liveness2_25;
#line 317 "store_alloc.m"
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28;

#line 318 "store_alloc.m"
        {
#line 318 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 320 "store_alloc.m"
        {
#line 320 "store_alloc.m"
          ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness2_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
#line 316 "store_alloc.m"
        {
#line 316 "store_alloc.m"
          MR_Word base;
#line 316 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 316 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
#line 316 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
#line 316 "store_alloc.m"
        }
#line 322 "store_alloc.m"
        {
#line 322 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__Liveness2_25);
        }
#line 317 "store_alloc.m"
      }
#line 315 "store_alloc.m"
  }
#line 311 "store_alloc.m"
}

#line 286 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
#line 286 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
#line 286 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
#line 286 "store_alloc.m"
{
#line 290 "store_alloc.m"
  {
#line 290 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 290 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "store_alloc.m"
      {
#line 290 "store_alloc.m"
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
#line 290 "store_alloc.m"
        *ll_backend__store_alloc__STATE_VARIABLE_Liveness_4 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3;
#line 290 "store_alloc.m"
      }
#line 290 "store_alloc.m"
    else
#line 292 "store_alloc.m"
      {
#line 292 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goal_19;
#line 292 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Goals_20;
#line 295 "store_alloc.m"
        MR_Word ll_backend__store_alloc__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 1)));
#line 295 "store_alloc.m"
        MR_Word ll_backend__store_alloc__InstMapDelta_27;
#line 295 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 0)));

#line 296 "store_alloc.m"
        {
#line 296 "store_alloc.m"
          ll_backend__store_alloc__InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__store_alloc__GoalInfo_26);
        }
#line 297 "store_alloc.m"
        {
#line 297 "store_alloc.m"
          ll_backend__store_alloc__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__store_alloc__InstMapDelta_27);
        }
#line 302 "store_alloc.m"
        if (ll_backend__store_alloc__succeeded)
#line 300 "store_alloc.m"
          {
#line 299 "store_alloc.m"
            {
#line 299 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 301 "store_alloc.m"
            ll_backend__store_alloc__Goals_20 = ll_backend__store_alloc__Goals0_18;
#line 300 "store_alloc.m"
          }
#line 302 "store_alloc.m"
        else
#line 304 "store_alloc.m"
          {
#line 304 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34;
#line 304 "store_alloc.m"
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35;

#line 303 "store_alloc.m"
            {
#line 303 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, &ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 305 "store_alloc.m"
            {
#line 305 "store_alloc.m"
              ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_20, ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
#line 304 "store_alloc.m"
          }
#line 291 "store_alloc.m"
        {
#line 291 "store_alloc.m"
          MR_Word base;
#line 291 "store_alloc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "store_alloc.m"
          *ll_backend__store_alloc__HeadVar__2_2 = base;
#line 291 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_19));
#line 291 "store_alloc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_20));
#line 291 "store_alloc.m"
        }
#line 292 "store_alloc.m"
      }
#line 290 "store_alloc.m"
  }
#line 286 "store_alloc.m"
}

#line 196 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 196 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
#line 196 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16)
#line 196 "store_alloc.m"
{
#line 204 "store_alloc.m"
  {
#line 204 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;

#line 204 "store_alloc.m"
#line 204 "store_alloc.m"
    switch (MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) {
#line 204 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 204 "store_alloc.m"
      case (MR_Integer) 0:
#line 251 "store_alloc.m"
        {
#line 251 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoal0_44 = (MR_Word) MR_body(((MR_Word) ll_backend__store_alloc__GoalExpr0_10), (MR_Integer) 0);
#line 251 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 1)));
#line 251 "store_alloc.m"
          MR_Word ll_backend__store_alloc__ResumeNot_47;
#line 251 "store_alloc.m"
          MR_Word ll_backend__store_alloc__ResumeNotVars_48;
#line 251 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SubGoal_50;
#line 252 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 0)));
#line 254 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_49_49;
#line 255 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_51_51;

#line 253 "store_alloc.m"
          {
#line 253 "store_alloc.m"
            hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__SubGoalInfo0_46, &ll_backend__store_alloc__ResumeNot_47);
          }
#line 254 "store_alloc.m"
          {
#line 254 "store_alloc.m"
            hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeNot_47, &ll_backend__store_alloc__ResumeNotVars_48, &ll_backend__store_alloc__V_49_49);
          }
#line 255 "store_alloc.m"
          {
#line 255 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_44, &ll_backend__store_alloc__SubGoal_50, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__V_51_51, ll_backend__store_alloc__ResumeNotVars_48, ll_backend__store_alloc__StoreAllocInfo_16);
          }
#line 257 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__store_alloc__SubGoal_50);
#line 258 "store_alloc.m"
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 251 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 251 "store_alloc.m"
        }
#line 204 "store_alloc.m"
        break;
#line 204 "store_alloc.m"
      case (MR_Integer) 1:
#line 204 "store_alloc.m"
      case (MR_Integer) 2:
#line 275 "store_alloc.m"
        {
#line 276 "store_alloc.m"
          *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 277 "store_alloc.m"
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 275 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
#line 275 "store_alloc.m"
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 275 "store_alloc.m"
        }
#line 204 "store_alloc.m"
        break;
#line 204 "store_alloc.m"
      case (MR_Integer) 3:
#line 204 "store_alloc.m"
#line 204 "store_alloc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) {
#line 204 "store_alloc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 204 "store_alloc.m"
          case (MR_Integer) 0:
#line 204 "store_alloc.m"
          case (MR_Integer) 1:
#line 275 "store_alloc.m"
            {
#line 276 "store_alloc.m"
              *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 277 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 275 "store_alloc.m"
              *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
#line 275 "store_alloc.m"
              *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 275 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 2:
#line 204 "store_alloc.m"
            {
#line 204 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 204 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 204 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals_19;

#line 209 "store_alloc.m"
#line 209 "store_alloc.m"
              switch (ll_backend__store_alloc__ConjType_17) {
#line 209 "store_alloc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 209 "store_alloc.m"
                case (MR_Integer) 1:
#line 211 "store_alloc.m"
                  {
#line 211 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 209 "store_alloc.m"
                  break;
#line 209 "store_alloc.m"
                case (MR_Integer) 0:
#line 207 "store_alloc.m"
                  {
#line 207 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 209 "store_alloc.m"
                  break;
#line 209 "store_alloc.m"
              }
#line 214 "store_alloc.m"
              {
#line 214 "store_alloc.m"
                MR_Word base;
#line 214 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 214 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 214 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 214 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__ConjType_17));
#line 214 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Goals_19));
#line 214 "store_alloc.m"
              }
#line 215 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 204 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 3:
#line 217 "store_alloc.m"
            {
#line 217 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsList_20;
#line 217 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 217 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Goals_104;

#line 218 "store_alloc.m"
              {
#line 218 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_103, &ll_backend__store_alloc__Goals_104, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 220 "store_alloc.m"
              {
#line 220 "store_alloc.m"
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
#line 221 "store_alloc.m"
              {
#line 221 "store_alloc.m"
                MR_Word base;
#line 221 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 221 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 221 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_104));
#line 221 "store_alloc.m"
              }
#line 222 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 217 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 4:
#line 224 "store_alloc.m"
            {
#line 224 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 224 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Det_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 224 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 224 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cases_24;
#line 224 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsList_105;

#line 225 "store_alloc.m"
              {
#line 225 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_23, &ll_backend__store_alloc__Cases_24, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 227 "store_alloc.m"
              {
#line 227 "store_alloc.m"
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
#line 228 "store_alloc.m"
              {
#line 228 "store_alloc.m"
                MR_Word base;
#line 228 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 228 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 228 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 228 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Var_21));
#line 228 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Det_22));
#line 228 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Cases_24));
#line 228 "store_alloc.m"
              }
#line 229 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 224 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 5:
#line 260 "store_alloc.m"
            {
#line 260 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 260 "store_alloc.m"
              MR_Word ll_backend__store_alloc__SubGoal0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 264 "store_alloc.m"
              MR_Word ll_backend__store_alloc__TermVar_53;
#line 261 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_85_85;

#line 261 "store_alloc.m"
              ll_backend__store_alloc__succeeded = ((((MR_tag((MR_Word) ll_backend__store_alloc__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 261 "store_alloc.m"
              if (ll_backend__store_alloc__succeeded)
#line 261 "store_alloc.m"
                {
#line 261 "store_alloc.m"
                  ll_backend__store_alloc__TermVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 1)));
#line 261 "store_alloc.m"
                  ll_backend__store_alloc__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 2)));
#line 261 "store_alloc.m"
                  ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_85_85 == (MR_Integer) 1);
#line 261 "store_alloc.m"
                }
#line 264 "store_alloc.m"
              if (ll_backend__store_alloc__succeeded)
#line 262 "store_alloc.m"
                {
#line 262 "store_alloc.m"
                  *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
#line 263 "store_alloc.m"
                  {
#line 263 "store_alloc.m"
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__TermVar_53, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79);
                  }
#line 262 "store_alloc.m"
                  *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
#line 262 "store_alloc.m"
                }
#line 264 "store_alloc.m"
              else
#line 266 "store_alloc.m"
                {
#line 266 "store_alloc.m"
                  MR_Word ll_backend__store_alloc__SubGoal_106;

#line 265 "store_alloc.m"
                  {
#line 265 "store_alloc.m"
                    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_108, &ll_backend__store_alloc__SubGoal_106, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
#line 267 "store_alloc.m"
                  {
#line 267 "store_alloc.m"
                    MR_Word base;
#line 267 "store_alloc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 267 "store_alloc.m"
                    *ll_backend__store_alloc__GoalExpr_11 = base;
#line 267 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 267 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Reason_52));
#line 267 "store_alloc.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__SubGoal_106));
#line 267 "store_alloc.m"
                  }
#line 266 "store_alloc.m"
                }
#line 269 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
#line 260 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 6:
#line 231 "store_alloc.m"
            {
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 4)));
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__CondGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 1)));
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ResumeCond_33;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__ResumeCondVars_34;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Cond_36;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Liveness1_37;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsCond_38;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Then_39;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__Else_41;
#line 231 "store_alloc.m"
              MR_Word ll_backend__store_alloc__LastLocnsElse_43;
#line 235 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 0)));
#line 237 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_35_35;
#line 242 "store_alloc.m"
              MR_Word ll_backend__store_alloc___Liveness2_42;
#line 244 "store_alloc.m"
              MR_Word ll_backend__store_alloc__V_91_91;

#line 236 "store_alloc.m"
              {
#line 236 "store_alloc.m"
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__CondGoalInfo0_32, &ll_backend__store_alloc__ResumeCond_33);
              }
#line 237 "store_alloc.m"
              {
#line 237 "store_alloc.m"
                hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeCond_33, &ll_backend__store_alloc__ResumeCondVars_34, &ll_backend__store_alloc__V_35_35);
              }
#line 238 "store_alloc.m"
              {
#line 238 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Cond0_26, &ll_backend__store_alloc__Cond_36, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__ResumeCondVars_34, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 240 "store_alloc.m"
              {
#line 240 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Then0_27, &ll_backend__store_alloc__Then_39, ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 242 "store_alloc.m"
              {
#line 242 "store_alloc.m"
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Else0_28, &ll_backend__store_alloc__Else_41, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc___Liveness2_42, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsElse_43, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
#line 244 "store_alloc.m"
              {
#line 244 "store_alloc.m"
                ll_backend__store_alloc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "store_alloc.m"
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsElse_43));
#line 244 "store_alloc.m"
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "store_alloc.m"
              }
#line 248 "store_alloc.m"
              {
#line 248 "store_alloc.m"
                MR_Word base;
#line 248 "store_alloc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 248 "store_alloc.m"
                *ll_backend__store_alloc__GoalExpr_11 = base;
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Vars_25));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Cond_36));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Then_39));
#line 248 "store_alloc.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__store_alloc__Else_41));
#line 248 "store_alloc.m"
              }
#line 249 "store_alloc.m"
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
#line 231 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
          case (MR_Integer) 7:
#line 279 "store_alloc.m"
            {
#line 281 "store_alloc.m"
              {
#line 281 "store_alloc.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.store_alloc", (MR_String) "predicate \140ll_backend.store_alloc.store_alloc_in_goal_2\'/9", (MR_String) "shorthand");
#line 281 "store_alloc.m"
                return;
              }
#line 279 "store_alloc.m"
            }
#line 204 "store_alloc.m"
            break;
#line 204 "store_alloc.m"
        }
#line 204 "store_alloc.m"
        break;
#line 204 "store_alloc.m"
    }
#line 204 "store_alloc.m"
  }
#line 196 "store_alloc.m"
}

#line 145 "store_alloc.m"
static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Goal0_9,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Goal_10,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__Liveness0_11,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__Liveness_12,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
#line 145 "store_alloc.m"
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
#line 145 "store_alloc.m"
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15)
#line 145 "store_alloc.m"
{
#line 150 "store_alloc.m"
  {
#line 150 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TypeCtorInfo_37_37;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 0)));
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 1)));
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreDeaths_18;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PreBirths_19;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostDeaths_20;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PostBirths_21;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness1_22;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness2_23;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalExpr_24;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness3_25;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__BranchedGoal_26;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness4_27;
#line 150 "store_alloc.m"
    MR_Word ll_backend__store_alloc__GoalInfo_33;

#line 153 "store_alloc.m"
    {
#line 153 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreDeaths_18);
    }
#line 154 "store_alloc.m"
    {
#line 154 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreBirths_19);
    }
#line 155 "store_alloc.m"
    {
#line 155 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostDeaths_20);
    }
#line 156 "store_alloc.m"
    {
#line 156 "store_alloc.m"
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostBirths_21);
    }
#line 3287 "ll_backend.store_alloc.c"
    ll_backend__store_alloc__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 158 "store_alloc.m"
    {
#line 158 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness0_11, ll_backend__store_alloc__PreDeaths_18, &ll_backend__store_alloc__Liveness1_22);
    }
#line 159 "store_alloc.m"
    {
#line 159 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness1_22, ll_backend__store_alloc__PreBirths_19, &ll_backend__store_alloc__Liveness2_23);
    }
#line 160 "store_alloc.m"
    {
#line 160 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(ll_backend__store_alloc__GoalExpr0_16, &ll_backend__store_alloc__GoalExpr_24, ll_backend__store_alloc__Liveness2_23, &ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__BranchedGoal_26, ll_backend__store_alloc__StoreAllocInfo_15);
    }
#line 162 "store_alloc.m"
    {
#line 162 "store_alloc.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__PostDeaths_20, &ll_backend__store_alloc__Liveness4_27);
    }
#line 166 "store_alloc.m"
    {
#line 166 "store_alloc.m"
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__PostBirths_21, ll_backend__store_alloc__Liveness_12);
    }
#line 182 "store_alloc.m"
#line 182 "store_alloc.m"
    switch (ll_backend__store_alloc__BranchedGoal_26) {
#line 182 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 182 "store_alloc.m"
      case (MR_Integer) 0:
#line 168 "store_alloc.m"
        {
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__TypeInfo_19_54;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__TypeCtorInfo_20_55;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__MappedSet_28;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__MappedVars_29;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__AdvisoryStoreMap_31;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreMap_32;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowKeys_45;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreVars_46;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SeenLvals0_47;
#line 168 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__N_48;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__SeenLvals_49;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50;
#line 168 "store_alloc.m"
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52;
#line 176 "store_alloc.m"
          MR_Word ll_backend__store_alloc__StoreMapPrime_30;

#line 172 "store_alloc.m"
          {
#line 172 "store_alloc.m"
            parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__MappedSet_28);
          }
#line 173 "store_alloc.m"
          {
#line 173 "store_alloc.m"
            ll_backend__store_alloc__MappedVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__MappedSet_28);
          }
#line 174 "store_alloc.m"
          {
#line 174 "store_alloc.m"
            ll_backend__store_alloc__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__StoreMapPrime_30);
          }
#line 176 "store_alloc.m"
          if (ll_backend__store_alloc__succeeded)
#line 175 "store_alloc.m"
            ll_backend__store_alloc__AdvisoryStoreMap_31 = ll_backend__store_alloc__StoreMapPrime_30;
#line 176 "store_alloc.m"
          else
#line 177 "store_alloc.m"
            {
#line 177 "store_alloc.m"
              {
#line 177 "store_alloc.m"
                ll_backend__store_alloc__AdvisoryStoreMap_31 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
              }
#line 177 "store_alloc.m"
            }
#line 3382 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__TypeInfo_19_54 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
#line 3384 "ll_backend.store_alloc.c"
          ll_backend__store_alloc__TypeCtorInfo_20_55 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 401 "store_alloc.m"
          {
#line 401 "store_alloc.m"
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__FollowKeys_45);
          }
#line 402 "store_alloc.m"
          {
#line 402 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(ll_backend__store_alloc__FollowKeys_45, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50);
          }
#line 405 "store_alloc.m"
          {
#line 405 "store_alloc.m"
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__StoreVars_46);
          }
#line 406 "store_alloc.m"
          {
#line 406 "store_alloc.m"
            mercury__set__init_1_p_0(ll_backend__store_alloc__TypeCtorInfo_20_55, &ll_backend__store_alloc__SeenLvals0_47);
          }
#line 407 "store_alloc.m"
          {
#line 407 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__StoreVars_46, (MR_Integer) 1, &ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals0_47, &ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52);
          }
#line 411 "store_alloc.m"
          {
#line 411 "store_alloc.m"
            ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52, &ll_backend__store_alloc__StoreMap_32);
          }
#line 181 "store_alloc.m"
          {
#line 181 "store_alloc.m"
            hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__store_alloc__StoreMap_32, ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__GoalInfo_33);
          }
#line 168 "store_alloc.m"
        }
#line 182 "store_alloc.m"
        break;
#line 182 "store_alloc.m"
      case (MR_Integer) 1:
#line 184 "store_alloc.m"
        ll_backend__store_alloc__GoalInfo_33 = ll_backend__store_alloc__GoalInfo0_17;
#line 182 "store_alloc.m"
        break;
#line 182 "store_alloc.m"
    }
#line 186 "store_alloc.m"
    {
#line 186 "store_alloc.m"
      MR_Word base;
#line 186 "store_alloc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "store_alloc.m"
      *ll_backend__store_alloc__Goal_10 = base;
#line 186 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr_24));
#line 186 "store_alloc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo_33));
#line 186 "store_alloc.m"
    }
#line 150 "store_alloc.m"
  }
#line 145 "store_alloc.m"
}

#line 124 "store_alloc.m"
static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
#line 124 "store_alloc.m"
  MR_Word ll_backend__store_alloc__HeadVar__1_1)
#line 124 "store_alloc.m"
{
#line 126 "store_alloc.m"
  {
#line 126 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 126 "store_alloc.m"
    MR_Word ll_backend__store_alloc__HeadVar__2_2;

#line 126 "store_alloc.m"
    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "store_alloc.m"
      {
#line 126 "store_alloc.m"
        {
#line 126 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
#line 126 "store_alloc.m"
      }
#line 126 "store_alloc.m"
    else
#line 127 "store_alloc.m"
      {
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Var_3;
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__Lval_4;
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__VarLvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_7_7;
#line 127 "store_alloc.m"
        MR_Word ll_backend__store_alloc__V_8_8;

#line 127 "store_alloc.m"
        ll_backend__store_alloc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 0)));
#line 127 "store_alloc.m"
        ll_backend__store_alloc__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 1)));
#line 128 "store_alloc.m"
        {
#line 128 "store_alloc.m"
          ll_backend__store_alloc__V_7_7 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__VarLvals_5);
        }
#line 129 "store_alloc.m"
        {
#line 129 "store_alloc.m"
          ll_backend__store_alloc__V_8_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__store_alloc__Lval_4)));
        }
#line 128 "store_alloc.m"
        {
#line 128 "store_alloc.m"
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__V_7_7, ((MR_Box) (ll_backend__store_alloc__Var_3)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
        }
#line 127 "store_alloc.m"
      }
#line 126 "store_alloc.m"
    return ll_backend__store_alloc__HeadVar__2_2;
#line 126 "store_alloc.m"
  }
#line 124 "store_alloc.m"
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
#line 76 "store_alloc.m"
  {
#line 76 "store_alloc.m"
    MR_bool ll_backend__store_alloc__succeeded;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Globals_11;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__VarTypes_17;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal2_25;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Liveness0_26;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__TraceLevel_27;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__PredInfo_28;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__ResumeVars_29;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__InputArgLvals_30;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__LastLocns0_31;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StackSlots_32;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegs_33;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__FloatRegType_34;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__StoreAllocInfo_35;
#line 76 "store_alloc.m"
    MR_Word ll_backend__store_alloc__Goal_36;
#line 76 "store_alloc.m"
    MR_Integer ll_backend__store_alloc__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
#line 101 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_42_42;
#line 120 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_37_37;
#line 120 "store_alloc.m"
    MR_Word ll_backend__store_alloc__V_38_38;

#line 77 "store_alloc.m"
    {
#line 77 "store_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Globals_11);
    }
#line 96 "store_alloc.m"
    {
#line 96 "store_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__PredId_8, ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Liveness0_26);
    }
#line 97 "store_alloc.m"
    {
#line 97 "store_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__store_alloc__Globals_11, &ll_backend__store_alloc__TraceLevel_27);
    }
#line 98 "store_alloc.m"
    {
#line 98 "store_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredId_8, &ll_backend__store_alloc__PredInfo_28);
    }
#line 100 "store_alloc.m"
    {
#line 100 "store_alloc.m"
      ll_backend__store_alloc__V_42_42 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_28, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__TraceLevel_27);
    }
#line 101 "store_alloc.m"
    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_42_42 == (MR_Integer) 1);
#line 104 "store_alloc.m"
    if (ll_backend__store_alloc__succeeded)
#line 103 "store_alloc.m"
      {
#line 103 "store_alloc.m"
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__ResumeVars_29);
      }
#line 104 "store_alloc.m"
    else
#line 105 "store_alloc.m"
      {
#line 105 "store_alloc.m"
        {
#line 105 "store_alloc.m"
          ll_backend__store_alloc__ResumeVars_29 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 105 "store_alloc.m"
      }
#line 107 "store_alloc.m"
    {
#line 107 "store_alloc.m"
      ll_backend__code_util__build_input_arg_list_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__InputArgLvals_30);
    }
#line 108 "store_alloc.m"
    {
#line 108 "store_alloc.m"
      ll_backend__store_alloc__LastLocns0_31 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__InputArgLvals_30);
    }
#line 109 "store_alloc.m"
    {
#line 109 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__StackSlots_32);
    }
#line 110 "store_alloc.m"
    {
#line 110 "store_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__VarTypes_17);
    }
#line 92 "store_alloc.m"
#line 92 "store_alloc.m"
    switch (ll_backend__store_alloc__RunType_6) {
#line 92 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 92 "store_alloc.m"
      case (MR_Integer) 0:
#line 79 "store_alloc.m"
        {
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__Goal0_12;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVarsMap0_13;
#line 79 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedR0_14;
#line 79 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedF0_15;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__Goal1_16;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVarsMap_18;
#line 79 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedR_19;
#line 79 "store_alloc.m"
          MR_Integer ll_backend__store_alloc__NextNonReservedF_20;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalExpr1_21;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalInfo1_22;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__FollowVars_23;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__GoalInfo2_24;
#line 79 "store_alloc.m"
          MR_Word ll_backend__store_alloc__V_41_41;

#line 80 "store_alloc.m"
          {
#line 80 "store_alloc.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__Goal0_12);
          }
#line 82 "store_alloc.m"
          {
#line 82 "store_alloc.m"
            ll_backend__follow_vars__find_final_follow_vars_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedF0_15);
          }
#line 84 "store_alloc.m"
          {
#line 84 "store_alloc.m"
            ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__store_alloc__Goal0_12, &ll_backend__store_alloc__Goal1_16, ll_backend__store_alloc__VarTypes_17, ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__FollowVarsMap_18, ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedR_19, ll_backend__store_alloc__NextNonReservedF0_15, &ll_backend__store_alloc__NextNonReservedF_20);
          }
#line 87 "store_alloc.m"
          ll_backend__store_alloc__GoalExpr1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 0)));
#line 87 "store_alloc.m"
          ll_backend__store_alloc__GoalInfo1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 1)));
#line 88 "store_alloc.m"
          {
#line 88 "store_alloc.m"
            ll_backend__store_alloc__FollowVars_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 88 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVarsMap_18));
#line 88 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 1) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedR_19));
#line 88 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 2) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedF_20));
#line 88 "store_alloc.m"
          }
#line 90 "store_alloc.m"
          {
#line 90 "store_alloc.m"
            ll_backend__store_alloc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 90 "store_alloc.m"
            MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_41_41, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVars_23));
#line 90 "store_alloc.m"
          }
#line 90 "store_alloc.m"
          {
#line 90 "store_alloc.m"
            hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(ll_backend__store_alloc__V_41_41, ll_backend__store_alloc__GoalInfo1_22, &ll_backend__store_alloc__GoalInfo2_24);
          }
#line 91 "store_alloc.m"
          {
#line 91 "store_alloc.m"
            ll_backend__store_alloc__Goal2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 91 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr1_21));
#line 91 "store_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo2_24));
#line 91 "store_alloc.m"
          }
#line 79 "store_alloc.m"
        }
#line 92 "store_alloc.m"
        break;
#line 92 "store_alloc.m"
      case (MR_Integer) 1:
#line 94 "store_alloc.m"
        {
#line 94 "store_alloc.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, &ll_backend__store_alloc__Goal2_25);
        }
#line 92 "store_alloc.m"
        break;
#line 92 "store_alloc.m"
    }
#line 111 "store_alloc.m"
    {
#line 111 "store_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__store_alloc__Globals_11, (MR_Integer) 254, &ll_backend__store_alloc__FloatRegs_33);
    }
#line 115 "store_alloc.m"
#line 115 "store_alloc.m"
    switch (ll_backend__store_alloc__FloatRegs_33) {
#line 115 "store_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 115 "store_alloc.m"
      case (MR_Integer) 0:
#line 117 "store_alloc.m"
        ll_backend__store_alloc__FloatRegType_34 = (MR_Integer) 0;
#line 115 "store_alloc.m"
        break;
#line 115 "store_alloc.m"
      case (MR_Integer) 1:
#line 114 "store_alloc.m"
        ll_backend__store_alloc__FloatRegType_34 = (MR_Integer) 1;
#line 115 "store_alloc.m"
        break;
#line 115 "store_alloc.m"
    }
#line 119 "store_alloc.m"
    {
#line 119 "store_alloc.m"
      ll_backend__store_alloc__StoreAllocInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 0) = ((MR_Box) (ll_backend__store_alloc__StackSlots_32));
#line 119 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 1) = ((MR_Box) (ll_backend__store_alloc__VarTypes_17));
#line 119 "store_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_35, 2) = ((MR_Box) (ll_backend__store_alloc__FloatRegType_34));
#line 119 "store_alloc.m"
    }
#line 120 "store_alloc.m"
    {
#line 120 "store_alloc.m"
      ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal2_25, &ll_backend__store_alloc__Goal_36, ll_backend__store_alloc__Liveness0_26, &ll_backend__store_alloc__V_37_37, ll_backend__store_alloc__LastLocns0_31, &ll_backend__store_alloc__V_38_38, ll_backend__store_alloc__ResumeVars_29, ll_backend__store_alloc__StoreAllocInfo_35);
    }
#line 122 "store_alloc.m"
    {
#line 122 "store_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__store_alloc__Goal_36, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_39, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_40);
#line 122 "store_alloc.m"
      return;
    }
#line 76 "store_alloc.m"
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
