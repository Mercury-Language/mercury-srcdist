/*
** Automatically generated from `ml_string_switch.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module ml_backend.ml_string_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_string_switch__init
ENDINIT
*/

#include "ml_backend.ml_string_switch.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_lookup_switch.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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




#line 151 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 154 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 157 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 160 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 163 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 166 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0;

#line 169 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0;

#line 172 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0[2];

#line 175 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0;

#line 178 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0[1];

#line 181 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0[1];

#line 184 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0[1];

#line 187 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0[1];

#line 190 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_lval_0;

#line 193 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0;

#line 196 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 199 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0[9];

#line 202 "ml_backend.ml_string_switch.c"
static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0[9];

#line 205 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0;

#line 208 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0[1];

#line 211 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0[1];

#line 214 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0[1];

#line 217 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0[1];

#line 220 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0[9];

#line 223 "ml_backend.ml_string_switch.c"
static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0[9];

#line 226 "ml_backend.ml_string_switch.c"
static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0[9];

#line 229 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0;

#line 232 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0[1];

#line 235 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0[1];

#line 238 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0[1];

#line 241 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0[1];

#line 244 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001(
#line 247 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 249 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2);

#line 252 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001(
#line 255 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 257 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 259 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3);

#line 262 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001(
#line 265 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 267 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2);

#line 270 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001(
#line 273 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 275 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 277 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3);

#line 280 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001(
#line 283 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 285 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2);

#line 288 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001(
#line 291 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 293 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 295 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3);

#line 298 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001(
#line 301 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 303 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2);

#line 306 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001(
#line 309 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 311 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 313 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3);

#line 1614 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1614__1_2_p_0(
#line 1614 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1614 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_50);

#line 1594 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1594__1_2_p_0(
#line 1594 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1594 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_55);

#line 1045 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1045__1_2_p_0(
#line 1045 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 1045 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_31);

#line 353 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__353__1_2_p_0(
#line 353 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 353 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_30);

#line 744 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(
#line 744 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3);

#line 744 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2);

#line 1310 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(
#line 1310 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3);

#line 1310 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2);

#line 261 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0(
#line 261 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3);

#line 261 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0(
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2);

#line 267 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(
#line 267 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3);

#line 267 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2);

#line 1614 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2(
#line 1614 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg);

#line 1594 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1(
#line 1594 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg);

#line 1582 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LoopPresent_14,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_15,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeStopLoopVarLval_16,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_17,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatements_18,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__SetupForFailStatements_20,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__BodyStatement_21,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__AfterStatements_22,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_45);

#line 1377 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_13,
#line 1377 "ml_string_switch.m"
  MR_String ml_backend__ml_string_switch__InitialComment_14,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__BinarySearchInfo_15,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__VectorCommon_16,
#line 1377 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_17,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_18,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StringFieldId_19,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_20,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatement_21,
#line 1377 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_55,
#line 1377 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_56);

#line 1323 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_8_p_0(
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_9,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_10,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_11,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_12,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1323 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__BinarySearchInfo_14,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_39,
#line 1323 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_40);

#line 1290 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3(
#line 1290 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1290 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 1288 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2(
#line 1288 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1288 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 1279 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1(
#line 1279 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1279 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 1256 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_4,
#line 1256 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_5,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6,
#line 1256 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_7,
#line 1256 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0_8,
#line 1256 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_9,
#line 1256 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__HeadVar__10_10);

#line 1140 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_12_p_0(
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_14,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_15,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseSolns0_16,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_17,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_18,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_19,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_20,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_21,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_92,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_93);

#line 1132 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
#line 1132 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1132 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 1121 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3,
#line 1121 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4,
#line 1121 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5,
#line 1121 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6);

#line 1054 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_12_p_0(
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_14,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_15,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseValues0_16,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_17,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_18,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_19,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_20,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_21,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_60);

#line 1019 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(
#line 1019 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1019 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0_2,
#line 1019 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_3);

#line 1001 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3,
#line 1001 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4,
#line 1001 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5,
#line 1001 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6);

#line 800 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_14_p_0(
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_15,
#line 800 "ml_string_switch.m"
  MR_String ml_backend__ml_string_switch__InitialComment_16,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSearchInfo_17,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashOp_18,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__VectorCommon_19,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_20,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StringFieldId_21,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotFieldId_22,
#line 800 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__HashMask_23,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_24,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatements_25,
#line 800 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_26,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_63,
#line 800 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_64);

#line 757 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_9_p_0(
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_10,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_11,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LoopPresent_12,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_13,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_14,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_15,
#line 757 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HashSearchInfo_16,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_33,
#line 757 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_34);

#line 711 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3(
#line 711 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 711 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 709 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2(
#line 709 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 709 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 703 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1(
#line 703 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 703 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 684 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(
#line 684 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_12,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_13,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FirstSolnStructType_14,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LaterSolnStructType_15,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_16,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_17,
#line 684 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__FirstSolnsRowInitializer_18,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_35,
#line 684 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_36,
#line 684 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37,
#line 684 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_38);

#line 656 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0(
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_13,
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_14,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_15,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FirstSolnStructType_16,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LaterSolnStructType_17,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_18,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_19,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_24,
#line 656 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_25,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_26,
#line 656 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_27,
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_28);

#line 599 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2(
#line 599 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 599 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 598 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1(
#line 598 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 598 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 512 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_12,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_14,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseSolns_15,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_16,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_17,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_18,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_19,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_20,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_98,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_99);

#line 494 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1(
#line 494 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 494 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 464 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0(
#line 464 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_9,
#line 464 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_10,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_11,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_12,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_13,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_14,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_17,
#line 464 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_18);

#line 427 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2(
#line 427 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 427 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 426 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1(
#line 426 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 426 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 362 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_12,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_14,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseValues_15,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_16,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_17,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_18,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_19,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_20,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_69,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_70);

#line 336 "ml_string_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_string_switch__make_hash_match_1_f_0(
#line 336 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_3);

#line 330 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1(
#line 330 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 330 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 320 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeMap_1,
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0_3,
#line 320 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Cases_4);

#line 269 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0(
#line 269 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_10,
#line 269 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_11,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_12,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_13,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_14,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_18,
#line 269 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20,
#line 269 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_21);

#line 246 "ml_string_switch.m"
static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
#line 246 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedConsId_3);

#line 226 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0_1(
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 206 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0(
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_10,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedCase_11,
#line 206 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__CaseNum_12,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_16,
#line 206 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_17,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_18,
#line 206 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_19);

#line 195 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__add_to_strs_casenums_4_p_0(
#line 195 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__CaseNum_5,
#line 195 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedConsId_6,
#line 195 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_0_11,
#line 195 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_12);

#line 192 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_2(
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 192 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_3);

#line 226 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1(
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1);

#line 177 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__3_3,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_4,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_5,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_6,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_7);

#line 1045 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1(
#line 1045 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg);

#line 968 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0_1(
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_2,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_4,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_5,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_6,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_7,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_8);

#line 353 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1(
#line 353 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg);


static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[18][3];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[29][2];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[15][1];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[6][5];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][12];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][7];

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_7[1][6];




static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_1[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[3])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_2[29][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1)),
    ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[0])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_3[2])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_3[1])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_3[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[6])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[7])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[8])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[9])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[10])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_3[11])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_string_switch_scalar_common_3[12])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[13])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[14])))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_3[15][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "we found a match; dispatch to the corresponding code"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "we found a match; look up the results"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "compute the hash value of the input string"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "lookup the string for this hash slot"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "did we find a match\?"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "no collisions; no hash chain loop"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "no match yet, so get next slot in hash chain"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "hash chain loop"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "break out of search loop"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "jump out of search loop"))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_string_switch_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1521 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_string_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 1530 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1539 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 1547 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 1555 "ml_backend.ml_string_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_string_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 1563 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0
  }
};

#line 1572 "ml_backend.ml_string_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slot_rev_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slot_rev_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_string_switch__type_ctor_info_hash_slots_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1593 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1601 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1607 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0 = {
  (MR_String) "hash_slots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_hash_slots_0_0,
  NULL,
  NULL,
  NULL
};

#line 1622 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0
};

#line 1627 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_hash_slots_0_0
  }
};

#line 1636 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_hash_slots_0_0
};

#line 1641 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0[1] = {
  (MR_Integer) 0
};

#line 1646 "ml_backend.ml_string_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "hash_slots",
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_hash_slots_0
  },
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_hash_slots_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_hash_slots_0
};

#line 1667 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0
  }
};

#line 1675 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 1683 "ml_backend.ml_string_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1691 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__code_model__hlds__code_model__type_ctor_info_code_model_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1704 "ml_backend.ml_string_switch.c"
static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0[9] = {
  (MR_String) "mbsi_code_model",
  (MR_String) "mbsi_switch_var",
  (MR_String) "mbsi_lo_var",
  (MR_String) "mbsi_hi_var",
  (MR_String) "mbsi_mid_var",
  (MR_String) "mbsi_result_var",
  (MR_String) "mbsi_stop_loop_var",
  (MR_String) "mbsi_fail_statements",
  (MR_String) "mbsi_defns"
};

#line 1717 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0 = {
  (MR_String) "ml_binary_search_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_binary_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_binary_search_info_0_0,
  NULL,
  NULL
};

#line 1732 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0
};

#line 1737 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_binary_search_info_0_0
  }
};

#line 1746 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_binary_search_info_0_0
};

#line 1751 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0[1] = {
  (MR_Integer) 0
};

#line 1756 "ml_backend.ml_string_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_binary_search_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_binary_search_info",
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_binary_search_info_0
  },
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_binary_search_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_binary_search_info_0
};

#line 1777 "ml_backend.ml_string_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__code_model__hlds__code_model__type_ctor_info_code_model_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__maybe__ti_maybe_1ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_string_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1790 "ml_backend.ml_string_switch.c"
static const MR_ConstString ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0[9] = {
  (MR_String) "mhsi_code_model",
  (MR_String) "mhsi_loop_present",
  (MR_String) "mhsi_context",
  (MR_String) "mhsi_switch_var",
  (MR_String) "mhsi_slot_var",
  (MR_String) "mhsi_string_var",
  (MR_String) "mhsi_stop_loop_var",
  (MR_String) "mhsi_fail_statements",
  (MR_String) "mhsi_defns"
};

#line 1803 "ml_backend.ml_string_switch.c"
static const MR_DuArgLocn ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 1852 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0 = {
  (MR_String) "ml_hash_search_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_types_ml_hash_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_names_ml_hash_search_info_0_0,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__field_locns_ml_hash_search_info_0_0,
  NULL
};

#line 1867 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0
};

#line 1872 "ml_backend.ml_string_switch.c"
static const MR_DuPtagLayout ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_stag_ordered_ml_hash_search_info_0_0
  }
};

#line 1881 "ml_backend.ml_string_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0[1] = {
  &ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_functor_desc_ml_hash_search_info_0_0
};

#line 1886 "ml_backend.ml_string_switch.c"
static const MR_Integer ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0[1] = {
  (MR_Integer) 0
};

#line 1891 "ml_backend.ml_string_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_hash_search_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001)),
  (MR_String) "ml_backend.ml_string_switch",
  (MR_String) "ml_hash_search_info",
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_name_ordered_ml_hash_search_info_0
  },
  {
    ml_backend__ml_string_switch__ml_backend__ml_string_switch__du_ptag_ordered_ml_hash_search_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_string_switch__ml_backend__ml_string_switch__functor_number_map_ml_hash_search_info_0
};

#line 1912 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0_10001(
#line 1915 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 1917 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2)
#line 1919 "ml_backend.ml_string_switch.c"
{
#line 1921 "ml_backend.ml_string_switch.c"
  {
#line 1923 "ml_backend.ml_string_switch.c"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 1926 "ml_backend.ml_string_switch.c"
    {
#line 1928 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2));
    }
#line 1931 "ml_backend.ml_string_switch.c"
    return ml_backend__ml_string_switch__succeeded;
#line 1933 "ml_backend.ml_string_switch.c"
  }
#line 1935 "ml_backend.ml_string_switch.c"
}

#line 1938 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0_10001(
#line 1941 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 1943 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 1945 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3)
#line 1947 "ml_backend.ml_string_switch.c"
{
#line 1949 "ml_backend.ml_string_switch.c"
  {
#line 1951 "ml_backend.ml_string_switch.c"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__1_1;

#line 1954 "ml_backend.ml_string_switch.c"
    {
#line 1956 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(&ml_backend__ml_string_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_3));
    }
#line 1959 "ml_backend.ml_string_switch.c"
    *ml_backend__ml_string_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__1_1));
#line 1961 "ml_backend.ml_string_switch.c"
  }
#line 1963 "ml_backend.ml_string_switch.c"
}

#line 1966 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0_10001(
#line 1969 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 1971 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2)
#line 1973 "ml_backend.ml_string_switch.c"
{
#line 1975 "ml_backend.ml_string_switch.c"
  {
#line 1977 "ml_backend.ml_string_switch.c"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 1980 "ml_backend.ml_string_switch.c"
    {
#line 1982 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch____Unify____hash_slots_0_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2));
    }
#line 1985 "ml_backend.ml_string_switch.c"
    return ml_backend__ml_string_switch__succeeded;
#line 1987 "ml_backend.ml_string_switch.c"
  }
#line 1989 "ml_backend.ml_string_switch.c"
}

#line 1992 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0_10001(
#line 1995 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 1997 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 1999 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3)
#line 2001 "ml_backend.ml_string_switch.c"
{
#line 2003 "ml_backend.ml_string_switch.c"
  {
#line 2005 "ml_backend.ml_string_switch.c"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__1_1;

#line 2008 "ml_backend.ml_string_switch.c"
    {
#line 2010 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch____Compare____hash_slots_0_0(&ml_backend__ml_string_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_3));
    }
#line 2013 "ml_backend.ml_string_switch.c"
    *ml_backend__ml_string_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__1_1));
#line 2015 "ml_backend.ml_string_switch.c"
  }
#line 2017 "ml_backend.ml_string_switch.c"
}

#line 2020 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0_10001(
#line 2023 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 2025 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2)
#line 2027 "ml_backend.ml_string_switch.c"
{
#line 2029 "ml_backend.ml_string_switch.c"
  {
#line 2031 "ml_backend.ml_string_switch.c"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 2034 "ml_backend.ml_string_switch.c"
    {
#line 2036 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2));
    }
#line 2039 "ml_backend.ml_string_switch.c"
    return ml_backend__ml_string_switch__succeeded;
#line 2041 "ml_backend.ml_string_switch.c"
  }
#line 2043 "ml_backend.ml_string_switch.c"
}

#line 2046 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0_10001(
#line 2049 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 2051 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 2053 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3)
#line 2055 "ml_backend.ml_string_switch.c"
{
#line 2057 "ml_backend.ml_string_switch.c"
  {
#line 2059 "ml_backend.ml_string_switch.c"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__1_1;

#line 2062 "ml_backend.ml_string_switch.c"
    {
#line 2064 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(&ml_backend__ml_string_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_3));
    }
#line 2067 "ml_backend.ml_string_switch.c"
    *ml_backend__ml_string_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__1_1));
#line 2069 "ml_backend.ml_string_switch.c"
  }
#line 2071 "ml_backend.ml_string_switch.c"
}

#line 2074 "ml_backend.ml_string_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0_10001(
#line 2077 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 2079 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2)
#line 2081 "ml_backend.ml_string_switch.c"
{
#line 2083 "ml_backend.ml_string_switch.c"
  {
#line 2085 "ml_backend.ml_string_switch.c"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 2088 "ml_backend.ml_string_switch.c"
    {
#line 2090 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2));
    }
#line 2093 "ml_backend.ml_string_switch.c"
    return ml_backend__ml_string_switch__succeeded;
#line 2095 "ml_backend.ml_string_switch.c"
  }
#line 2097 "ml_backend.ml_string_switch.c"
}

#line 2100 "ml_backend.ml_string_switch.c"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0_10001(
#line 2103 "ml_backend.ml_string_switch.c"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_1,
#line 2105 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 2107 "ml_backend.ml_string_switch.c"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3)
#line 2109 "ml_backend.ml_string_switch.c"
{
#line 2111 "ml_backend.ml_string_switch.c"
  {
#line 2113 "ml_backend.ml_string_switch.c"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__1_1;

#line 2116 "ml_backend.ml_string_switch.c"
    {
#line 2118 "ml_backend.ml_string_switch.c"
      ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(&ml_backend__ml_string_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_3));
    }
#line 2121 "ml_backend.ml_string_switch.c"
    *ml_backend__ml_string_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__1_1));
#line 2123 "ml_backend.ml_string_switch.c"
  }
#line 2125 "ml_backend.ml_string_switch.c"
}

#line 1614 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1614__1_2_p_0(
#line 1614 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1614 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_50)
#line 1614 "ml_string_switch.m"
{
#line 1614 "ml_string_switch.m"
  {
#line 1614 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 1614 "ml_string_switch.m"
    {
#line 1614 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6], ((MR_Box) (ml_backend__ml_string_switch__FailStatements_19)), ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_50)));
    }
#line 1614 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1614 "ml_string_switch.m"
  }
#line 1614 "ml_string_switch.m"
}

#line 1594 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1594__1_2_p_0(
#line 1594 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1594 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_55)
#line 1594 "ml_string_switch.m"
{
#line 1594 "ml_string_switch.m"
  {
#line 1594 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 1594 "ml_string_switch.m"
    {
#line 1594 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6], ((MR_Box) (ml_backend__ml_string_switch__FailStatements_19)), ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_55)));
    }
#line 1594 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1594 "ml_string_switch.m"
  }
#line 1594 "ml_string_switch.m"
}

#line 1045 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1045__1_2_p_0(
#line 1045 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 1045 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_31)
#line 1045 "ml_string_switch.m"
{
#line 1045 "ml_string_switch.m"
  {
#line 1045 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CodeModel_12 == ml_backend__ml_string_switch__HeadVar__2_31);

#line 1045 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1045 "ml_string_switch.m"
  }
#line 1045 "ml_string_switch.m"
}

#line 353 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__353__1_2_p_0(
#line 353 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 353 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_30)
#line 353 "ml_string_switch.m"
{
#line 353 "ml_string_switch.m"
  {
#line 353 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CodeModel_12 == ml_backend__ml_string_switch__HeadVar__2_30);

#line 353 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 353 "ml_string_switch.m"
  }
#line 353 "ml_string_switch.m"
}

#line 744 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_hash_search_info_0_0(
#line 744 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3)
#line 744 "ml_string_switch.m"
{
#line 744 "ml_string_switch.m"
  {
#line 744 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 744 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_30 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;
#line 744 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_31 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__3_3;

#line 744 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_30 == ml_backend__ml_string_switch__CastY_31);
#line 744 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 2246 "ml_backend.ml_string_switch.c"
      *ml_backend__ml_string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 744 "ml_string_switch.m"
    else
#line 744 "ml_string_switch.m"
      {
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_22_22;
#line 744 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_41_41 = (MR_Integer) ml_backend__ml_string_switch__V_4_4;
#line 744 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_42_42 = (MR_Integer) ml_backend__ml_string_switch__V_13_13;

#line 744 "ml_string_switch.m"
        {
#line 744 "ml_string_switch.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_string_switch__V_22_22, ml_backend__ml_string_switch__V_41_41, ml_backend__ml_string_switch__V_42_42);
        }
#line 2300 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_22_22 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
          *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_22_22;
#line 744 "ml_string_switch.m"
        else
#line 744 "ml_string_switch.m"
          {
#line 744 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_23_23;
#line 744 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__V_43_43 = (MR_Integer) ml_backend__ml_string_switch__V_5_5;
#line 744 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__V_44_44 = (MR_Integer) ml_backend__ml_string_switch__V_14_14;

#line 744 "ml_string_switch.m"
            {
#line 744 "ml_string_switch.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_string_switch__V_23_23, ml_backend__ml_string_switch__V_43_43, ml_backend__ml_string_switch__V_44_44);
            }
#line 2324 "ml_backend.ml_string_switch.c"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_23_23 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
              *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_23_23;
#line 744 "ml_string_switch.m"
            else
#line 744 "ml_string_switch.m"
              {
#line 744 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_24_24;

#line 744 "ml_string_switch.m"
                {
#line 744 "ml_string_switch.m"
                  mercury__term____Compare____context_0_0(&ml_backend__ml_string_switch__V_24_24, ml_backend__ml_string_switch__V_6_6, ml_backend__ml_string_switch__V_15_15);
                }
#line 2344 "ml_backend.ml_string_switch.c"
                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_24_24 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                  *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_24_24;
#line 744 "ml_string_switch.m"
                else
#line 744 "ml_string_switch.m"
                  {
#line 744 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_25_25;

#line 744 "ml_string_switch.m"
                    {
#line 744 "ml_string_switch.m"
                      ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_string_switch__V_25_25, ml_backend__ml_string_switch__V_7_7, ml_backend__ml_string_switch__V_16_16);
                    }
#line 2364 "ml_backend.ml_string_switch.c"
                    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_25_25 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                    if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                      *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_25_25;
#line 744 "ml_string_switch.m"
                    else
#line 744 "ml_string_switch.m"
                      {
#line 744 "ml_string_switch.m"
                        MR_Word ml_backend__ml_string_switch__V_26_26;

#line 744 "ml_string_switch.m"
                        {
#line 744 "ml_string_switch.m"
                          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_26_26, ml_backend__ml_string_switch__V_8_8, ml_backend__ml_string_switch__V_17_17);
                        }
#line 2384 "ml_backend.ml_string_switch.c"
                        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_26_26 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                        ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                        if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                          *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_26_26;
#line 744 "ml_string_switch.m"
                        else
#line 744 "ml_string_switch.m"
                          {
#line 744 "ml_string_switch.m"
                            MR_Word ml_backend__ml_string_switch__V_27_27;

#line 744 "ml_string_switch.m"
                            {
#line 744 "ml_string_switch.m"
                              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_27_27, ml_backend__ml_string_switch__V_9_9, ml_backend__ml_string_switch__V_18_18);
                            }
#line 2404 "ml_backend.ml_string_switch.c"
                            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_27_27 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                            ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                            if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                              *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_27_27;
#line 744 "ml_string_switch.m"
                            else
#line 744 "ml_string_switch.m"
                              {
#line 744 "ml_string_switch.m"
                                MR_Word ml_backend__ml_string_switch__V_28_28;

#line 744 "ml_string_switch.m"
                                {
#line 744 "ml_string_switch.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[8], &ml_backend__ml_string_switch__V_28_28, ((MR_Box) (ml_backend__ml_string_switch__V_10_10)), ((MR_Box) (ml_backend__ml_string_switch__V_19_19)));
                                }
#line 2424 "ml_backend.ml_string_switch.c"
                                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_28_28 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                                ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                                if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                                  *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_28_28;
#line 744 "ml_string_switch.m"
                                else
#line 744 "ml_string_switch.m"
                                  {
#line 744 "ml_string_switch.m"
                                    MR_Word ml_backend__ml_string_switch__V_29_29;

#line 744 "ml_string_switch.m"
                                    {
#line 744 "ml_string_switch.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6], &ml_backend__ml_string_switch__V_29_29, ((MR_Box) (ml_backend__ml_string_switch__V_11_11)), ((MR_Box) (ml_backend__ml_string_switch__V_20_20)));
                                    }
#line 2444 "ml_backend.ml_string_switch.c"
                                    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_29_29 == (MR_Integer) 0);
#line 744 "ml_string_switch.m"
                                    ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 744 "ml_string_switch.m"
                                    if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                                      *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_29_29;
#line 744 "ml_string_switch.m"
                                    else
#line 744 "ml_string_switch.m"
                                      {
#line 744 "ml_string_switch.m"
                                        {
#line 744 "ml_string_switch.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[9], ml_backend__ml_string_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_string_switch__V_12_12)), ((MR_Box) (ml_backend__ml_string_switch__V_21_21)));
#line 744 "ml_string_switch.m"
                                          return;
                                        }
#line 744 "ml_string_switch.m"
                                      }
#line 744 "ml_string_switch.m"
                                  }
#line 744 "ml_string_switch.m"
                              }
#line 744 "ml_string_switch.m"
                          }
#line 744 "ml_string_switch.m"
                      }
#line 744 "ml_string_switch.m"
                  }
#line 744 "ml_string_switch.m"
              }
#line 744 "ml_string_switch.m"
          }
#line 744 "ml_string_switch.m"
      }
#line 744 "ml_string_switch.m"
  }
#line 744 "ml_string_switch.m"
}

#line 744 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_hash_search_info_0_0(
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 744 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2)
#line 744 "ml_string_switch.m"
{
#line 744 "ml_string_switch.m"
  {
#line 744 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 744 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_21 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__1_1;
#line 744 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_22 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;

#line 744 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_21 == ml_backend__ml_string_switch__CastY_22);
#line 744 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
      ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 744 "ml_string_switch.m"
    else
#line 744 "ml_string_switch.m"
      {
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_27_27;
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_28_28;
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_29_29;
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 744 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 7)));

#line 2557 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_3_3 == ml_backend__ml_string_switch__V_12_12);
#line 744 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
          {
#line 2563 "ml_backend.ml_string_switch.c"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_4_4 == ml_backend__ml_string_switch__V_13_13);
#line 744 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
              {
#line 2569 "ml_backend.ml_string_switch.c"
                {
#line 2571 "ml_backend.ml_string_switch.c"
                  ml_backend__ml_string_switch__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_string_switch__V_5_5, ml_backend__ml_string_switch__V_14_14);
                }
#line 744 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                  {
#line 2578 "ml_backend.ml_string_switch.c"
                    {
#line 2580 "ml_backend.ml_string_switch.c"
                      ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_string_switch__V_6_6, ml_backend__ml_string_switch__V_15_15);
                    }
#line 744 "ml_string_switch.m"
                    if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                      {
#line 2587 "ml_backend.ml_string_switch.c"
                        {
#line 2589 "ml_backend.ml_string_switch.c"
                          ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_7_7, ml_backend__ml_string_switch__V_16_16);
                        }
#line 744 "ml_string_switch.m"
                        if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                          {
#line 2596 "ml_backend.ml_string_switch.c"
                            {
#line 2598 "ml_backend.ml_string_switch.c"
                              ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_8_8, ml_backend__ml_string_switch__V_17_17);
                            }
#line 744 "ml_string_switch.m"
                            if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                              {
#line 2605 "ml_backend.ml_string_switch.c"
                                ml_backend__ml_string_switch__TypeInfo_27_27 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[8];
#line 2607 "ml_backend.ml_string_switch.c"
                                {
#line 2609 "ml_backend.ml_string_switch.c"
                                  ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_27_27, ((MR_Box) (ml_backend__ml_string_switch__V_9_9)), ((MR_Box) (ml_backend__ml_string_switch__V_18_18)));
                                }
#line 744 "ml_string_switch.m"
                                if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                                  {
#line 2616 "ml_backend.ml_string_switch.c"
                                    ml_backend__ml_string_switch__TypeInfo_28_28 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6];
#line 2618 "ml_backend.ml_string_switch.c"
                                    {
#line 2620 "ml_backend.ml_string_switch.c"
                                      ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_28_28, ((MR_Box) (ml_backend__ml_string_switch__V_10_10)), ((MR_Box) (ml_backend__ml_string_switch__V_19_19)));
                                    }
#line 744 "ml_string_switch.m"
                                    if (ml_backend__ml_string_switch__succeeded)
#line 744 "ml_string_switch.m"
                                      {
#line 2627 "ml_backend.ml_string_switch.c"
                                        ml_backend__ml_string_switch__TypeInfo_29_29 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[9];
#line 2629 "ml_backend.ml_string_switch.c"
                                        {
#line 2631 "ml_backend.ml_string_switch.c"
                                          return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_29_29, ((MR_Box) (ml_backend__ml_string_switch__V_11_11)), ((MR_Box) (ml_backend__ml_string_switch__V_20_20)));
                                        }
#line 744 "ml_string_switch.m"
                                      }
#line 744 "ml_string_switch.m"
                                  }
#line 744 "ml_string_switch.m"
                              }
#line 744 "ml_string_switch.m"
                          }
#line 744 "ml_string_switch.m"
                      }
#line 744 "ml_string_switch.m"
                  }
#line 744 "ml_string_switch.m"
              }
#line 744 "ml_string_switch.m"
          }
#line 744 "ml_string_switch.m"
      }
#line 744 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 744 "ml_string_switch.m"
  }
#line 744 "ml_string_switch.m"
}

#line 1310 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____ml_binary_search_info_0_0(
#line 1310 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3)
#line 1310 "ml_string_switch.m"
{
#line 1310 "ml_string_switch.m"
  {
#line 1310 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1310 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_30 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;
#line 1310 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_31 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__3_3;

#line 1310 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_30 == ml_backend__ml_string_switch__CastY_31);
#line 1310 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 2683 "ml_backend.ml_string_switch.c"
      *ml_backend__ml_string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 1310 "ml_string_switch.m"
    else
#line 1310 "ml_string_switch.m"
      {
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 8)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 6)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 7)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 8)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_22_22;
#line 1310 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_41_41 = (MR_Integer) ml_backend__ml_string_switch__V_4_4;
#line 1310 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_42_42 = (MR_Integer) ml_backend__ml_string_switch__V_13_13;

#line 1310 "ml_string_switch.m"
        {
#line 1310 "ml_string_switch.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_string_switch__V_22_22, ml_backend__ml_string_switch__V_41_41, ml_backend__ml_string_switch__V_42_42);
        }
#line 2737 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_22_22 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
          *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_22_22;
#line 1310 "ml_string_switch.m"
        else
#line 1310 "ml_string_switch.m"
          {
#line 1310 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_23_23;

#line 1310 "ml_string_switch.m"
            {
#line 1310 "ml_string_switch.m"
              ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_string_switch__V_23_23, ml_backend__ml_string_switch__V_5_5, ml_backend__ml_string_switch__V_14_14);
            }
#line 2757 "ml_backend.ml_string_switch.c"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_23_23 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
              *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_23_23;
#line 1310 "ml_string_switch.m"
            else
#line 1310 "ml_string_switch.m"
              {
#line 1310 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_24_24;

#line 1310 "ml_string_switch.m"
                {
#line 1310 "ml_string_switch.m"
                  ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_24_24, ml_backend__ml_string_switch__V_6_6, ml_backend__ml_string_switch__V_15_15);
                }
#line 2777 "ml_backend.ml_string_switch.c"
                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_24_24 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                  *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_24_24;
#line 1310 "ml_string_switch.m"
                else
#line 1310 "ml_string_switch.m"
                  {
#line 1310 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_25_25;

#line 1310 "ml_string_switch.m"
                    {
#line 1310 "ml_string_switch.m"
                      ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_25_25, ml_backend__ml_string_switch__V_7_7, ml_backend__ml_string_switch__V_16_16);
                    }
#line 2797 "ml_backend.ml_string_switch.c"
                    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_25_25 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                    if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                      *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_25_25;
#line 1310 "ml_string_switch.m"
                    else
#line 1310 "ml_string_switch.m"
                      {
#line 1310 "ml_string_switch.m"
                        MR_Word ml_backend__ml_string_switch__V_26_26;

#line 1310 "ml_string_switch.m"
                        {
#line 1310 "ml_string_switch.m"
                          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_26_26, ml_backend__ml_string_switch__V_8_8, ml_backend__ml_string_switch__V_17_17);
                        }
#line 2817 "ml_backend.ml_string_switch.c"
                        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_26_26 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                        ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                        if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                          *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_26_26;
#line 1310 "ml_string_switch.m"
                        else
#line 1310 "ml_string_switch.m"
                          {
#line 1310 "ml_string_switch.m"
                            MR_Word ml_backend__ml_string_switch__V_27_27;

#line 1310 "ml_string_switch.m"
                            {
#line 1310 "ml_string_switch.m"
                              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_string_switch__V_27_27, ml_backend__ml_string_switch__V_9_9, ml_backend__ml_string_switch__V_18_18);
                            }
#line 2837 "ml_backend.ml_string_switch.c"
                            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_27_27 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                            ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                            if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                              *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_27_27;
#line 1310 "ml_string_switch.m"
                            else
#line 1310 "ml_string_switch.m"
                              {
#line 1310 "ml_string_switch.m"
                                MR_Word ml_backend__ml_string_switch__V_28_28;

#line 1310 "ml_string_switch.m"
                                {
#line 1310 "ml_string_switch.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[8], &ml_backend__ml_string_switch__V_28_28, ((MR_Box) (ml_backend__ml_string_switch__V_10_10)), ((MR_Box) (ml_backend__ml_string_switch__V_19_19)));
                                }
#line 2857 "ml_backend.ml_string_switch.c"
                                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_28_28 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                                ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                                if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                                  *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_28_28;
#line 1310 "ml_string_switch.m"
                                else
#line 1310 "ml_string_switch.m"
                                  {
#line 1310 "ml_string_switch.m"
                                    MR_Word ml_backend__ml_string_switch__V_29_29;

#line 1310 "ml_string_switch.m"
                                    {
#line 1310 "ml_string_switch.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6], &ml_backend__ml_string_switch__V_29_29, ((MR_Box) (ml_backend__ml_string_switch__V_11_11)), ((MR_Box) (ml_backend__ml_string_switch__V_20_20)));
                                    }
#line 2877 "ml_backend.ml_string_switch.c"
                                    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_29_29 == (MR_Integer) 0);
#line 1310 "ml_string_switch.m"
                                    ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1310 "ml_string_switch.m"
                                    if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                                      *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_29_29;
#line 1310 "ml_string_switch.m"
                                    else
#line 1310 "ml_string_switch.m"
                                      {
#line 1310 "ml_string_switch.m"
                                        {
#line 1310 "ml_string_switch.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[9], ml_backend__ml_string_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_string_switch__V_12_12)), ((MR_Box) (ml_backend__ml_string_switch__V_21_21)));
#line 1310 "ml_string_switch.m"
                                          return;
                                        }
#line 1310 "ml_string_switch.m"
                                      }
#line 1310 "ml_string_switch.m"
                                  }
#line 1310 "ml_string_switch.m"
                              }
#line 1310 "ml_string_switch.m"
                          }
#line 1310 "ml_string_switch.m"
                      }
#line 1310 "ml_string_switch.m"
                  }
#line 1310 "ml_string_switch.m"
              }
#line 1310 "ml_string_switch.m"
          }
#line 1310 "ml_string_switch.m"
      }
#line 1310 "ml_string_switch.m"
  }
#line 1310 "ml_string_switch.m"
}

#line 1310 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____ml_binary_search_info_0_0(
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1310 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2)
#line 1310 "ml_string_switch.m"
{
#line 1310 "ml_string_switch.m"
  {
#line 1310 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1310 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_21 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__1_1;
#line 1310 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_22 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;

#line 1310 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_21 == ml_backend__ml_string_switch__CastY_22);
#line 1310 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
      ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 1310 "ml_string_switch.m"
    else
#line 1310 "ml_string_switch.m"
      {
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_28_28;
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_29_29;
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_30_30;
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 6)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 7)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 8)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 6)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 7)));
#line 1310 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 8)));

#line 2990 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_3_3 == ml_backend__ml_string_switch__V_12_12);
#line 1310 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
          {
#line 2996 "ml_backend.ml_string_switch.c"
            {
#line 2998 "ml_backend.ml_string_switch.c"
              ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_string_switch__V_4_4, ml_backend__ml_string_switch__V_13_13);
            }
#line 1310 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
              {
#line 3005 "ml_backend.ml_string_switch.c"
                {
#line 3007 "ml_backend.ml_string_switch.c"
                  ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_5_5, ml_backend__ml_string_switch__V_14_14);
                }
#line 1310 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                  {
#line 3014 "ml_backend.ml_string_switch.c"
                    {
#line 3016 "ml_backend.ml_string_switch.c"
                      ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_6_6, ml_backend__ml_string_switch__V_15_15);
                    }
#line 1310 "ml_string_switch.m"
                    if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                      {
#line 3023 "ml_backend.ml_string_switch.c"
                        {
#line 3025 "ml_backend.ml_string_switch.c"
                          ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_7_7, ml_backend__ml_string_switch__V_16_16);
                        }
#line 1310 "ml_string_switch.m"
                        if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                          {
#line 3032 "ml_backend.ml_string_switch.c"
                            {
#line 3034 "ml_backend.ml_string_switch.c"
                              ml_backend__ml_string_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_string_switch__V_8_8, ml_backend__ml_string_switch__V_17_17);
                            }
#line 1310 "ml_string_switch.m"
                            if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                              {
#line 3041 "ml_backend.ml_string_switch.c"
                                ml_backend__ml_string_switch__TypeInfo_28_28 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[8];
#line 3043 "ml_backend.ml_string_switch.c"
                                {
#line 3045 "ml_backend.ml_string_switch.c"
                                  ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_28_28, ((MR_Box) (ml_backend__ml_string_switch__V_9_9)), ((MR_Box) (ml_backend__ml_string_switch__V_18_18)));
                                }
#line 1310 "ml_string_switch.m"
                                if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                                  {
#line 3052 "ml_backend.ml_string_switch.c"
                                    ml_backend__ml_string_switch__TypeInfo_29_29 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[6];
#line 3054 "ml_backend.ml_string_switch.c"
                                    {
#line 3056 "ml_backend.ml_string_switch.c"
                                      ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_29_29, ((MR_Box) (ml_backend__ml_string_switch__V_10_10)), ((MR_Box) (ml_backend__ml_string_switch__V_19_19)));
                                    }
#line 1310 "ml_string_switch.m"
                                    if (ml_backend__ml_string_switch__succeeded)
#line 1310 "ml_string_switch.m"
                                      {
#line 3063 "ml_backend.ml_string_switch.c"
                                        ml_backend__ml_string_switch__TypeInfo_30_30 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[9];
#line 3065 "ml_backend.ml_string_switch.c"
                                        {
#line 3067 "ml_backend.ml_string_switch.c"
                                          return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_30_30, ((MR_Box) (ml_backend__ml_string_switch__V_11_11)), ((MR_Box) (ml_backend__ml_string_switch__V_20_20)));
                                        }
#line 1310 "ml_string_switch.m"
                                      }
#line 1310 "ml_string_switch.m"
                                  }
#line 1310 "ml_string_switch.m"
                              }
#line 1310 "ml_string_switch.m"
                          }
#line 1310 "ml_string_switch.m"
                      }
#line 1310 "ml_string_switch.m"
                  }
#line 1310 "ml_string_switch.m"
              }
#line 1310 "ml_string_switch.m"
          }
#line 1310 "ml_string_switch.m"
      }
#line 1310 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1310 "ml_string_switch.m"
  }
#line 1310 "ml_string_switch.m"
}

#line 261 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slots_0_0(
#line 261 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3)
#line 261 "ml_string_switch.m"
{
#line 261 "ml_string_switch.m"
  {
#line 261 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 261 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_9 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;
#line 261 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_10 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__3_3;

#line 261 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_9 == ml_backend__ml_string_switch__CastY_10);
#line 261 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 3119 "ml_backend.ml_string_switch.c"
      *ml_backend__ml_string_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "ml_string_switch.m"
    else
#line 261 "ml_string_switch.m"
      {
#line 261 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_8_8;

#line 261 "ml_string_switch.m"
        {
#line 261 "ml_string_switch.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_string_switch__V_8_8, ml_backend__ml_string_switch__V_4_4, ml_backend__ml_string_switch__V_6_6);
        }
#line 3141 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_8_8 == (MR_Integer) 0);
#line 261 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 261 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 261 "ml_string_switch.m"
          *ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__V_8_8;
#line 261 "ml_string_switch.m"
        else
#line 261 "ml_string_switch.m"
          {
#line 261 "ml_string_switch.m"
            {
#line 261 "ml_string_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[7], ml_backend__ml_string_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_string_switch__V_5_5)), ((MR_Box) (ml_backend__ml_string_switch__V_7_7)));
#line 261 "ml_string_switch.m"
              return;
            }
#line 261 "ml_string_switch.m"
          }
#line 261 "ml_string_switch.m"
      }
#line 261 "ml_string_switch.m"
  }
#line 261 "ml_string_switch.m"
}

#line 261 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slots_0_0(
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 261 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2)
#line 261 "ml_string_switch.m"
{
#line 261 "ml_string_switch.m"
  {
#line 261 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 261 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastX_7 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__1_1;
#line 261 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__CastY_8 = (MR_Integer) ml_backend__ml_string_switch__HeadVar__2_2;

#line 261 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__CastX_7 == ml_backend__ml_string_switch__CastY_8);
#line 261 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 261 "ml_string_switch.m"
      ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 261 "ml_string_switch.m"
    else
#line 261 "ml_string_switch.m"
      {
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeInfo_9_9;
#line 261 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));

#line 3208 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_3_3 == ml_backend__ml_string_switch__V_5_5);
#line 261 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 261 "ml_string_switch.m"
          {
#line 3214 "ml_backend.ml_string_switch.c"
            ml_backend__ml_string_switch__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[7];
#line 3216 "ml_backend.ml_string_switch.c"
            {
#line 3218 "ml_backend.ml_string_switch.c"
              return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_string_switch__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_string_switch__V_4_4)), ((MR_Box) (ml_backend__ml_string_switch__V_6_6)));
            }
#line 261 "ml_string_switch.m"
          }
#line 261 "ml_string_switch.m"
      }
#line 261 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 261 "ml_string_switch.m"
  }
#line 261 "ml_string_switch.m"
}

#line 267 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch____Compare____hash_slot_rev_map_0_0(
#line 267 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__1_1,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3)
#line 267 "ml_string_switch.m"
{
#line 267 "ml_string_switch.m"
  {
#line 267 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 267 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Cast_HeadVar1_4 = ml_backend__ml_string_switch__HeadVar__2_2;
#line 267 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Cast_HeadVar2_5 = ml_backend__ml_string_switch__HeadVar__3_3;

#line 267 "ml_string_switch.m"
    {
#line 267 "ml_string_switch.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_1[4], ml_backend__ml_string_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_string_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_string_switch__Cast_HeadVar2_5)));
#line 267 "ml_string_switch.m"
      return;
    }
#line 267 "ml_string_switch.m"
  }
#line 267 "ml_string_switch.m"
}

#line 267 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch____Unify____hash_slot_rev_map_0_0(
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 267 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2)
#line 267 "ml_string_switch.m"
{
#line 267 "ml_string_switch.m"
  {
#line 267 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 267 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Cast_HeadVar1_3 = ml_backend__ml_string_switch__HeadVar__1_1;
#line 267 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Cast_HeadVar2_4 = ml_backend__ml_string_switch__HeadVar__2_2;

#line 267 "ml_string_switch.m"
    {
#line 267 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_1[4], ((MR_Box) (ml_backend__ml_string_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_string_switch__Cast_HeadVar2_4)));
    }
#line 267 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 267 "ml_string_switch.m"
  }
#line 267 "ml_string_switch.m"
}

#line 1614 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2(
#line 1614 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg)
#line 1614 "ml_string_switch.m"
{
#line 1614 "ml_string_switch.m"
  {
#line 1614 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1614 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;

#line 1614 "ml_string_switch.m"
    {
#line 1614 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1614__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 4))));
    }
#line 1614 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1614 "ml_string_switch.m"
  }
#line 1614 "ml_string_switch.m"
}

#line 1594 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1(
#line 1594 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg)
#line 1594 "ml_string_switch.m"
{
#line 1594 "ml_string_switch.m"
  {
#line 1594 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1594 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;

#line 1594 "ml_string_switch.m"
    {
#line 1594 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_wrap_loop_break__1594__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 4))));
    }
#line 1594 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1594 "ml_string_switch.m"
  }
#line 1594 "ml_string_switch.m"
}

#line 1582 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LoopPresent_14,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_15,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeStopLoopVarLval_16,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_17,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatements_18,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FailStatements_19,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__SetupForFailStatements_20,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__BodyStatement_21,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__AfterStatements_22,
#line 1582 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44,
#line 1582 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_45)
#line 1582 "ml_string_switch.m"
{
#line 1590 "ml_string_switch.m"
  {
#line 1590 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1590 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OnlyFailAfterStatements_24;

#line 1597 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__CodeModel_13 == (MR_Integer) 0))
#line 1592 "ml_string_switch.m"
      {
#line 1592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_51_51;

#line 1593 "ml_string_switch.m"
        *ml_backend__ml_string_switch__SetupForFailStatements_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1594 "ml_string_switch.m"
        {
#line 1594 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1594 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_51_51, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[5]));
#line 1594 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_51_51, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_1));
#line 1594 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1594 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_51_51, 3) = ((MR_Box) (ml_backend__ml_string_switch__FailStatements_19));
#line 1594 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_51_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1594 "ml_string_switch.m"
        }
#line 1594 "ml_string_switch.m"
        {
#line 1594 "ml_string_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_string_switch__V_51_51, (MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_det, but FailStatements is not empty");
        }
#line 1596 "ml_string_switch.m"
        ml_backend__ml_string_switch__OnlyFailAfterStatements_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1592 "ml_string_switch.m"
      }
#line 1597 "ml_string_switch.m"
    else
#line 1597 "ml_string_switch.m"
      if ((ml_backend__ml_string_switch__CodeModel_13 == (MR_Integer) 2))
#line 1612 "ml_string_switch.m"
        {
#line 1612 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__V_46_46;

#line 1613 "ml_string_switch.m"
          *ml_backend__ml_string_switch__SetupForFailStatements_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1614 "ml_string_switch.m"
          {
#line 1614 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1614 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_46_46, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[5]));
#line 1614 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_46_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0_2));
#line 1614 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1614 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_46_46, 3) = ((MR_Box) (ml_backend__ml_string_switch__FailStatements_19));
#line 1614 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_46_46, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1614 "ml_string_switch.m"
          }
#line 1614 "ml_string_switch.m"
          {
#line 1614 "ml_string_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_string_switch__V_46_46, (MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_wrap_loop_break\'/12", (MR_String) "model_non, but FailStatements is not empty");
          }
#line 1616 "ml_string_switch.m"
          ml_backend__ml_string_switch__OnlyFailAfterStatements_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1612 "ml_string_switch.m"
        }
#line 1597 "ml_string_switch.m"
      else
#line 1598 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__MaybeStopLoopVarLval_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "ml_string_switch.m"
          {
#line 1601 "ml_string_switch.m"
            *ml_backend__ml_string_switch__SetupForFailStatements_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1602 "ml_string_switch.m"
            ml_backend__ml_string_switch__OnlyFailAfterStatements_24 = ml_backend__ml_string_switch__FailStatements_19;
#line 1600 "ml_string_switch.m"
          }
#line 1598 "ml_string_switch.m"
        else
#line 1604 "ml_string_switch.m"
          {
#line 1608 "ml_string_switch.m"
            *ml_backend__ml_string_switch__SetupForFailStatements_20 = ml_backend__ml_string_switch__FailStatements_19;
#line 1609 "ml_string_switch.m"
            ml_backend__ml_string_switch__OnlyFailAfterStatements_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1604 "ml_string_switch.m"
          }
#line 1667 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__MaybeStopLoopVarLval_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "ml_string_switch.m"
      {
#line 1621 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__LoopPresent_14 == (MR_Integer) 0);
#line 1621 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1622 "ml_string_switch.m"
          ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__OnlyFailAfterStatements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1619 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1626 "ml_string_switch.m"
          {
#line 1626 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_78_78;

#line 1625 "ml_string_switch.m"
            {
#line 1625 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_78_78, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchDefns_17));
#line 1625 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_string_switch__MatchStatements_18));
#line 1625 "ml_string_switch.m"
            }
#line 1625 "ml_string_switch.m"
            {
#line 1625 "ml_string_switch.m"
              MR_Word base;
#line 1625 "ml_string_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "ml_string_switch.m"
              *ml_backend__ml_string_switch__BodyStatement_21 = base;
#line 1625 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_78_78));
#line 1625 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1625 "ml_string_switch.m"
            }
#line 1627 "ml_string_switch.m"
            *ml_backend__ml_string_switch__AfterStatements_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1627 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_Info_45 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44;
#line 1626 "ml_string_switch.m"
          }
#line 1619 "ml_string_switch.m"
        else
#line 1629 "ml_string_switch.m"
          {
#line 1629 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__ModuleInfo_26;
#line 1629 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Globals_27;
#line 1629 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__SupportsBreakContinue_28;
#line 1629 "ml_string_switch.m"
            MR_String ml_backend__ml_string_switch__Experiment_29;

#line 1629 "ml_string_switch.m"
            {
#line 1629 "ml_string_switch.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44, &ml_backend__ml_string_switch__ModuleInfo_26);
            }
#line 1630 "ml_string_switch.m"
            {
#line 1630 "ml_string_switch.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_string_switch__ModuleInfo_26, &ml_backend__ml_string_switch__Globals_27);
            }
#line 1631 "ml_string_switch.m"
            {
#line 1631 "ml_string_switch.m"
              ml_backend__ml_string_switch__SupportsBreakContinue_28 = ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(ml_backend__ml_string_switch__Globals_27);
            }
#line 1633 "ml_string_switch.m"
            {
#line 1633 "ml_string_switch.m"
              libs__globals__lookup_string_option_3_p_0(ml_backend__ml_string_switch__Globals_27, (MR_Integer) 664, &ml_backend__ml_string_switch__Experiment_29);
            }
#line 1635 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__SupportsBreakContinue_28 == (MR_Integer) 1);
#line 1635 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 1635 "ml_string_switch.m"
              {
#line 1636 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__OnlyFailAfterStatements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1635 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 1635 "ml_string_switch.m"
                  {
#line 1637 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = (strcmp(ml_backend__ml_string_switch__Experiment_29, (MR_String) "use_end_label") == 0);
#line 1637 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = !(ml_backend__ml_string_switch__succeeded);
#line 1635 "ml_string_switch.m"
                  }
#line 1635 "ml_string_switch.m"
              }
#line 1649 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 1640 "ml_string_switch.m"
              {
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__BreakCommentStatement_30;
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__BreakStatement_31;
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_85_85;
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_86_86;
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_87_87;
#line 1640 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_88_88;

#line 1639 "ml_string_switch.m"
                {
#line 1639 "ml_string_switch.m"
                  ml_backend__ml_string_switch__BreakCommentStatement_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1639 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BreakCommentStatement_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[26])));
#line 1639 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BreakCommentStatement_30, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1639 "ml_string_switch.m"
                }
#line 1642 "ml_string_switch.m"
                {
#line 1642 "ml_string_switch.m"
                  ml_backend__ml_string_switch__BreakStatement_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1642 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BreakStatement_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[27])));
#line 1642 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BreakStatement_31, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1642 "ml_string_switch.m"
                }
#line 1646 "ml_string_switch.m"
                {
#line 1646 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_88_88, 0) = ((MR_Box) (ml_backend__ml_string_switch__BreakStatement_31));
#line 1646 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1646 "ml_string_switch.m"
                }
#line 1646 "ml_string_switch.m"
                {
#line 1646 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_87_87, 0) = ((MR_Box) (ml_backend__ml_string_switch__BreakCommentStatement_30));
#line 1646 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_87_87, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_88_88));
#line 1646 "ml_string_switch.m"
                }
#line 1645 "ml_string_switch.m"
                {
#line 1645 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_86_86 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__MatchStatements_18, ml_backend__ml_string_switch__V_87_87);
                }
#line 1644 "ml_string_switch.m"
                {
#line 1644 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1644 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchDefns_17));
#line 1644 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_85_85, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_86_86));
#line 1644 "ml_string_switch.m"
                }
#line 1644 "ml_string_switch.m"
                {
#line 1644 "ml_string_switch.m"
                  MR_Word base;
#line 1644 "ml_string_switch.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1644 "ml_string_switch.m"
                  *ml_backend__ml_string_switch__BodyStatement_21 = base;
#line 1644 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_85_85));
#line 1644 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1644 "ml_string_switch.m"
                }
#line 1648 "ml_string_switch.m"
                *ml_backend__ml_string_switch__AfterStatements_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1648 "ml_string_switch.m"
                *ml_backend__ml_string_switch__STATE_VARIABLE_Info_45 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44;
#line 1640 "ml_string_switch.m"
              }
#line 1649 "ml_string_switch.m"
            else
#line 1650 "ml_string_switch.m"
              {
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__TypeCtorInfo_107_107;
#line 1650 "ml_string_switch.m"
                MR_String ml_backend__ml_string_switch__EndLabel_32;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__GotoCommentStatement_33;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__GotoEndStatement_34;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__EndLabelStatement_35;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_94_94;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_95_95;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_96_96;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_97_97;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_98_98;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_99_99;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_101_101;
#line 1650 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_102_102;

#line 1650 "ml_string_switch.m"
                {
#line 1650 "ml_string_switch.m"
                  ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ml_backend__ml_string_switch__EndLabel_32, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44, ml_backend__ml_string_switch__STATE_VARIABLE_Info_45);
                }
#line 1651 "ml_string_switch.m"
                {
#line 1651 "ml_string_switch.m"
                  ml_backend__ml_string_switch__GotoCommentStatement_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1651 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__GotoCommentStatement_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[28])));
#line 1651 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__GotoCommentStatement_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1651 "ml_string_switch.m"
                }
#line 1654 "ml_string_switch.m"
                {
#line 1654 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_95_95, 0) = ((MR_Box) (ml_backend__ml_string_switch__EndLabel_32));
#line 1654 "ml_string_switch.m"
                }
#line 1654 "ml_string_switch.m"
                {
#line 1654 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1654 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_94_94, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_95_95));
#line 1654 "ml_string_switch.m"
                }
#line 1654 "ml_string_switch.m"
                {
#line 1654 "ml_string_switch.m"
                  ml_backend__ml_string_switch__GotoEndStatement_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1654 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__GotoEndStatement_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_94_94));
#line 1654 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__GotoEndStatement_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1654 "ml_string_switch.m"
                }
#line 3740 "ml_backend.ml_string_switch.c"
                ml_backend__ml_string_switch__TypeCtorInfo_107_107 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 1659 "ml_string_switch.m"
                {
#line 1659 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_99_99, 0) = ((MR_Box) (ml_backend__ml_string_switch__GotoEndStatement_34));
#line 1659 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1659 "ml_string_switch.m"
                }
#line 1659 "ml_string_switch.m"
                {
#line 1659 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_98_98, 0) = ((MR_Box) (ml_backend__ml_string_switch__GotoCommentStatement_33));
#line 1659 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_98_98, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_99_99));
#line 1659 "ml_string_switch.m"
                }
#line 1658 "ml_string_switch.m"
                {
#line 1658 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_97_97 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_107_107, ml_backend__ml_string_switch__MatchStatements_18, ml_backend__ml_string_switch__V_98_98);
                }
#line 1657 "ml_string_switch.m"
                {
#line 1657 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1657 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_96_96, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchDefns_17));
#line 1657 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_96_96, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_97_97));
#line 1657 "ml_string_switch.m"
                }
#line 1657 "ml_string_switch.m"
                {
#line 1657 "ml_string_switch.m"
                  MR_Word base;
#line 1657 "ml_string_switch.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1657 "ml_string_switch.m"
                  *ml_backend__ml_string_switch__BodyStatement_21 = base;
#line 1657 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_96_96));
#line 1657 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1657 "ml_string_switch.m"
                }
#line 1662 "ml_string_switch.m"
                {
#line 1662 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1662 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1662 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_101_101, 1) = ((MR_Box) (ml_backend__ml_string_switch__EndLabel_32));
#line 1662 "ml_string_switch.m"
                }
#line 1662 "ml_string_switch.m"
                {
#line 1662 "ml_string_switch.m"
                  ml_backend__ml_string_switch__EndLabelStatement_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1662 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__EndLabelStatement_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_101_101));
#line 1662 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__EndLabelStatement_35, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1662 "ml_string_switch.m"
                }
#line 1664 "ml_string_switch.m"
                {
#line 1664 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_102_102, 0) = ((MR_Box) (ml_backend__ml_string_switch__EndLabelStatement_35));
#line 1664 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1664 "ml_string_switch.m"
                }
#line 1664 "ml_string_switch.m"
                {
#line 1664 "ml_string_switch.m"
                  *ml_backend__ml_string_switch__AfterStatements_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_107_107, ml_backend__ml_string_switch__OnlyFailAfterStatements_24, ml_backend__ml_string_switch__V_102_102);
                }
#line 1650 "ml_string_switch.m"
              }
#line 1629 "ml_string_switch.m"
          }
#line 1619 "ml_string_switch.m"
      }
#line 1667 "ml_string_switch.m"
    else
#line 1668 "ml_string_switch.m"
      {
#line 1668 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StopLoopVarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopVarLval_16, (MR_Integer) 0)));

#line 1670 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__LoopPresent_14 == (MR_Integer) 0);
#line 1670 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1671 "ml_string_switch.m"
          ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__OnlyFailAfterStatements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3845 "ml_backend.ml_string_switch.c"
        if (ml_backend__ml_string_switch__succeeded)
#line 3847 "ml_backend.ml_string_switch.c"
          {
#line 3849 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_56_56;

#line 1674 "ml_string_switch.m"
            {
#line 1674 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1674 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_56_56, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchDefns_17));
#line 1674 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_56_56, 1) = ((MR_Box) (ml_backend__ml_string_switch__MatchStatements_18));
#line 1674 "ml_string_switch.m"
            }
#line 1674 "ml_string_switch.m"
            {
#line 1674 "ml_string_switch.m"
              MR_Word base;
#line 1674 "ml_string_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1674 "ml_string_switch.m"
              *ml_backend__ml_string_switch__BodyStatement_21 = base;
#line 1674 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_56_56));
#line 1674 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1674 "ml_string_switch.m"
            }
#line 1687 "ml_string_switch.m"
            *ml_backend__ml_string_switch__AfterStatements_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3878 "ml_backend.ml_string_switch.c"
          }
#line 3880 "ml_backend.ml_string_switch.c"
        else
#line 3882 "ml_backend.ml_string_switch.c"
          {
#line 3884 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__SetStopLoopStatement_37;
#line 3886 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_57_57;
#line 3888 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_58_58;
#line 3890 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_62_62;
#line 3892 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_63_63;
#line 3894 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_64_64;

#line 1679 "ml_string_switch.m"
            {
#line 1679 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_58_58, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_36));
#line 1679 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[25])));
#line 1679 "ml_string_switch.m"
            }
#line 1678 "ml_string_switch.m"
            {
#line 1678 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1678 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_57_57, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_58_58));
#line 1678 "ml_string_switch.m"
            }
#line 1678 "ml_string_switch.m"
            {
#line 1678 "ml_string_switch.m"
              ml_backend__ml_string_switch__SetStopLoopStatement_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1678 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SetStopLoopStatement_37, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_57_57));
#line 1678 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SetStopLoopStatement_37, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1678 "ml_string_switch.m"
            }
#line 1683 "ml_string_switch.m"
            {
#line 1683 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_64_64, 0) = ((MR_Box) (ml_backend__ml_string_switch__SetStopLoopStatement_37));
#line 1683 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1683 "ml_string_switch.m"
            }
#line 1683 "ml_string_switch.m"
            {
#line 1683 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__MatchStatements_18, ml_backend__ml_string_switch__V_64_64);
            }
#line 1682 "ml_string_switch.m"
            {
#line 1682 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchDefns_17));
#line 1682 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_62_62, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_63_63));
#line 1682 "ml_string_switch.m"
            }
#line 1682 "ml_string_switch.m"
            {
#line 1682 "ml_string_switch.m"
              MR_Word base;
#line 1682 "ml_string_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "ml_string_switch.m"
              *ml_backend__ml_string_switch__BodyStatement_21 = base;
#line 1682 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1682 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1682 "ml_string_switch.m"
            }
#line 1689 "ml_string_switch.m"
            if ((ml_backend__ml_string_switch__OnlyFailAfterStatements_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "ml_string_switch.m"
              *ml_backend__ml_string_switch__AfterStatements_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1689 "ml_string_switch.m"
            else
#line 1689 "ml_string_switch.m"
              {
#line 1689 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__OnlyFailAfterStatements_24, (MR_Integer) 1)));
#line 1689 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__OnlyFailAfterStatements_24, (MR_Integer) 0)));

#line 1689 "ml_string_switch.m"
                if ((ml_backend__ml_string_switch__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1697 "ml_string_switch.m"
                  {
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__SuccessTest_42;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__AfterStatement_43;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_71_71;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_75_75;

#line 1699 "ml_string_switch.m"
                    {
#line 1699 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_36));
#line 1699 "ml_string_switch.m"
                    }
#line 1698 "ml_string_switch.m"
                    {
#line 1698 "ml_string_switch.m"
                      ml_backend__ml_string_switch__SuccessTest_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_42, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_71_71));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[15])));
#line 1698 "ml_string_switch.m"
                    }
#line 1703 "ml_string_switch.m"
                    {
#line 1703 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_string_switch__SuccessTest_42));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_121_121));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1703 "ml_string_switch.m"
                    }
#line 1702 "ml_string_switch.m"
                    {
#line 1702 "ml_string_switch.m"
                      ml_backend__ml_string_switch__AfterStatement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1702 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AfterStatement_43, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_75_75));
#line 1702 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AfterStatement_43, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1702 "ml_string_switch.m"
                    }
#line 1706 "ml_string_switch.m"
                    {
#line 1706 "ml_string_switch.m"
                      MR_Word base;
#line 1706 "ml_string_switch.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "ml_string_switch.m"
                      *ml_backend__ml_string_switch__AfterStatements_22 = base;
#line 1706 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__AfterStatement_43));
#line 1706 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1706 "ml_string_switch.m"
                    }
#line 1697 "ml_string_switch.m"
                  }
#line 1689 "ml_string_switch.m"
                else
#line 1697 "ml_string_switch.m"
                  {
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_67_67;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__OnlyFailAfterStatement_109;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__SuccessTest_110;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__AfterStatement_111;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_113_113;
#line 1697 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_117_117;

#line 1695 "ml_string_switch.m"
                    {
#line 1695 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1695 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1695 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_string_switch__OnlyFailAfterStatements_24));
#line 1695 "ml_string_switch.m"
                    }
#line 1694 "ml_string_switch.m"
                    {
#line 1694 "ml_string_switch.m"
                      ml_backend__ml_string_switch__OnlyFailAfterStatement_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1694 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__OnlyFailAfterStatement_109, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_67_67));
#line 1694 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__OnlyFailAfterStatement_109, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1694 "ml_string_switch.m"
                    }
#line 1699 "ml_string_switch.m"
                    {
#line 1699 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_113_113, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_36));
#line 1699 "ml_string_switch.m"
                    }
#line 1698 "ml_string_switch.m"
                    {
#line 1698 "ml_string_switch.m"
                      ml_backend__ml_string_switch__SuccessTest_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_110, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_113_113));
#line 1698 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SuccessTest_110, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[15])));
#line 1698 "ml_string_switch.m"
                    }
#line 1703 "ml_string_switch.m"
                    {
#line 1703 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_117_117, 0) = ((MR_Box) (ml_backend__ml_string_switch__SuccessTest_110));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_117_117, 1) = ((MR_Box) (ml_backend__ml_string_switch__OnlyFailAfterStatement_109));
#line 1703 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_117_117, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1703 "ml_string_switch.m"
                    }
#line 1702 "ml_string_switch.m"
                    {
#line 1702 "ml_string_switch.m"
                      ml_backend__ml_string_switch__AfterStatement_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1702 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AfterStatement_111, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_117_117));
#line 1702 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AfterStatement_111, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 1702 "ml_string_switch.m"
                    }
#line 1706 "ml_string_switch.m"
                    {
#line 1706 "ml_string_switch.m"
                      MR_Word base;
#line 1706 "ml_string_switch.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "ml_string_switch.m"
                      *ml_backend__ml_string_switch__AfterStatements_22 = base;
#line 1706 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__AfterStatement_111));
#line 1706 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1706 "ml_string_switch.m"
                    }
#line 1697 "ml_string_switch.m"
                  }
#line 1689 "ml_string_switch.m"
              }
#line 4151 "ml_backend.ml_string_switch.c"
          }
#line 1706 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_Info_45 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_44;
#line 1668 "ml_string_switch.m"
      }
#line 1590 "ml_string_switch.m"
  }
#line 1582 "ml_string_switch.m"
}

#line 1377 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_13,
#line 1377 "ml_string_switch.m"
  MR_String ml_backend__ml_string_switch__InitialComment_14,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__BinarySearchInfo_15,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__VectorCommon_16,
#line 1377 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_17,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_18,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StringFieldId_19,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_20,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatement_21,
#line 1377 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1377 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_55,
#line 1377 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_56)
#line 1377 "ml_string_switch.m"
{
#line 1384 "ml_string_switch.m"
  {
#line 1384 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_165_165;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CodeModel_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 0)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 1)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoVarLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 2)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HiVarLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 3)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 4)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultVarLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 5)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeStopLoopVarLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 6)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FailStatements_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 7)));
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoVarRval_33;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HiVarRval_34;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarRval_35;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultVarRval_36;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SetupForFailStatements_37;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SuccessStatement_38;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AfterStatements_39;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_40;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_41;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitLoVarStatement_42;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitHiVarStatement_43;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CrossingTest_44;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AssignMidVarStatement_45;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AssignResultVarStatement_46;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultTest_47;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SearchStatements_50;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitialCommentStatement_54;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_59_59;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_60_60;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_61_61;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_62_62;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_65_65;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_66_66;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_67_67;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_68_68;
#line 1384 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__V_69_69;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_72_72;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_73_73;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_74_74;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_76_76;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_81_81;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_82_82;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_83_83;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_85_85;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_86_86;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_89_89;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_94_94;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_95_95;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_100_100;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_101_101;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_102_102;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_103_103;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_105_105;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_108_108;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_109_109;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_110_110;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_111_111;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_112_112;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_160_160;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_161_161;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_162_162;
#line 1384 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_163_163;
#line 1385 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___Defns_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_15, (MR_Integer) 8)));

#line 1388 "ml_string_switch.m"
    {
#line 1388 "ml_string_switch.m"
      ml_backend__ml_string_switch__LoVarRval_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoVarRval_33, 0) = ((MR_Box) (ml_backend__ml_string_switch__LoVarLval_26));
#line 1388 "ml_string_switch.m"
    }
#line 1389 "ml_string_switch.m"
    {
#line 1389 "ml_string_switch.m"
      ml_backend__ml_string_switch__HiVarRval_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HiVarRval_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__HiVarLval_27));
#line 1389 "ml_string_switch.m"
    }
#line 1390 "ml_string_switch.m"
    {
#line 1390 "ml_string_switch.m"
      ml_backend__ml_string_switch__MidVarRval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MidVarRval_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_28));
#line 1390 "ml_string_switch.m"
    }
#line 1391 "ml_string_switch.m"
    {
#line 1391 "ml_string_switch.m"
      ml_backend__ml_string_switch__ResultVarRval_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__ResultVarRval_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarLval_29));
#line 1391 "ml_string_switch.m"
    }
#line 1393 "ml_string_switch.m"
    {
#line 1393 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(ml_backend__ml_string_switch__CodeModel_24, (MR_Integer) 1, ml_backend__ml_string_switch__MLDS_Context_13, ml_backend__ml_string_switch__MaybeStopLoopVarLval_30, ml_backend__ml_string_switch__MatchDefns_20, ml_backend__ml_string_switch__MatchStatement_21, ml_backend__ml_string_switch__FailStatements_31, &ml_backend__ml_string_switch__SetupForFailStatements_37, &ml_backend__ml_string_switch__SuccessStatement_38, &ml_backend__ml_string_switch__AfterStatements_39, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_55, ml_backend__ml_string_switch__STATE_VARIABLE_Info_56);
    }
#line 1397 "ml_string_switch.m"
    {
#line 1397 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_string_switch__STATE_VARIABLE_Info_56, &ml_backend__ml_string_switch__ModuleInfo_40);
    }
#line 1398 "ml_string_switch.m"
    {
#line 1398 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_59_59 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 1398 "ml_string_switch.m"
    {
#line 1398 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_40, ml_backend__ml_string_switch__V_59_59);
    }
#line 1401 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[15]);
#line 1401 "ml_string_switch.m"
    {
#line 1401 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_61_61, 0) = ((MR_Box) (ml_backend__ml_string_switch__LoVarLval_26));
#line 1401 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1401 "ml_string_switch.m"
    }
#line 1400 "ml_string_switch.m"
    {
#line 1400 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1400 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_60_60, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_61_61));
#line 1400 "ml_string_switch.m"
    }
#line 1400 "ml_string_switch.m"
    {
#line 1400 "ml_string_switch.m"
      ml_backend__ml_string_switch__InitLoVarStatement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitLoVarStatement_42, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_60_60));
#line 1400 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitLoVarStatement_42, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1400 "ml_string_switch.m"
    }
#line 1404 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_69_69 = (ml_backend__ml_string_switch__TableSize_17 - (MR_Integer) 1);
#line 1404 "ml_string_switch.m"
    {
#line 1404 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_68_68, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_69_69));
#line 1404 "ml_string_switch.m"
    }
#line 1404 "ml_string_switch.m"
    {
#line 1404 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1404 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_68_68));
#line 1404 "ml_string_switch.m"
    }
#line 1404 "ml_string_switch.m"
    {
#line 1404 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_66_66, 0) = ((MR_Box) (ml_backend__ml_string_switch__HiVarLval_27));
#line 1404 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_67_67));
#line 1404 "ml_string_switch.m"
    }
#line 1403 "ml_string_switch.m"
    {
#line 1403 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1403 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_65_65, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_66_66));
#line 1403 "ml_string_switch.m"
    }
#line 1403 "ml_string_switch.m"
    {
#line 1403 "ml_string_switch.m"
      ml_backend__ml_string_switch__InitHiVarStatement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitHiVarStatement_43, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_65_65));
#line 1403 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitHiVarStatement_43, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1403 "ml_string_switch.m"
    }
#line 1406 "ml_string_switch.m"
    {
#line 1406 "ml_string_switch.m"
      ml_backend__ml_string_switch__CrossingTest_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CrossingTest_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1406 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CrossingTest_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 1406 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CrossingTest_44, 2) = ((MR_Box) (ml_backend__ml_string_switch__LoVarRval_33));
#line 1406 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CrossingTest_44, 3) = ((MR_Box) (ml_backend__ml_string_switch__HiVarRval_34));
#line 1406 "ml_string_switch.m"
    }
#line 1411 "ml_string_switch.m"
    {
#line 1411 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1411 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 2) = ((MR_Box) (ml_backend__ml_string_switch__LoVarRval_33));
#line 1411 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 3) = ((MR_Box) (ml_backend__ml_string_switch__HiVarRval_34));
#line 1411 "ml_string_switch.m"
    }
#line 1410 "ml_string_switch.m"
    {
#line 1410 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1410 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1410 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_76_76));
#line 1410 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[24])));
#line 1410 "ml_string_switch.m"
    }
#line 1409 "ml_string_switch.m"
    {
#line 1409 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_28));
#line 1409 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_74_74));
#line 1409 "ml_string_switch.m"
    }
#line 1408 "ml_string_switch.m"
    {
#line 1408 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1408 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_73_73));
#line 1408 "ml_string_switch.m"
    }
#line 1408 "ml_string_switch.m"
    {
#line 1408 "ml_string_switch.m"
      ml_backend__ml_string_switch__AssignMidVarStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AssignMidVarStatement_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_72_72));
#line 1408 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AssignMidVarStatement_45, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1408 "ml_string_switch.m"
    }
#line 1419 "ml_string_switch.m"
    {
#line 1419 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1419 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_89_89, 1) = ((MR_Box) (ml_backend__ml_string_switch__VectorCommon_16));
#line 1419 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_89_89, 2) = ((MR_Box) (ml_backend__ml_string_switch__MidVarRval_35));
#line 1419 "ml_string_switch.m"
    }
#line 1418 "ml_string_switch.m"
    {
#line 1418 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[1])));
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_86_86, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_89_89));
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_86_86, 2) = ((MR_Box) (ml_backend__ml_string_switch__StringFieldId_19));
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_86_86, 3) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_41));
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_86_86, 4) = ((MR_Box) (ml_backend__ml_string_switch__StructType_18));
#line 1418 "ml_string_switch.m"
    }
#line 1418 "ml_string_switch.m"
    {
#line 1418 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_86_86));
#line 1418 "ml_string_switch.m"
    }
#line 1416 "ml_string_switch.m"
    {
#line 1416 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1416 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21))));
#line 1416 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_83_83, 2) = ((MR_Box) (ml_backend__ml_string_switch__VarRval_25));
#line 1416 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_83_83, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_85_85));
#line 1416 "ml_string_switch.m"
    }
#line 1415 "ml_string_switch.m"
    {
#line 1415 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_82_82, 0) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarLval_29));
#line 1415 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_83_83));
#line 1415 "ml_string_switch.m"
    }
#line 1414 "ml_string_switch.m"
    {
#line 1414 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1414 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_82_82));
#line 1414 "ml_string_switch.m"
    }
#line 1414 "ml_string_switch.m"
    {
#line 1414 "ml_string_switch.m"
      ml_backend__ml_string_switch__AssignResultVarStatement_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AssignResultVarStatement_46, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_81_81));
#line 1414 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__AssignResultVarStatement_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1414 "ml_string_switch.m"
    }
#line 1422 "ml_string_switch.m"
    {
#line 1422 "ml_string_switch.m"
      ml_backend__ml_string_switch__ResultTest_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__ResultTest_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1422 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__ResultTest_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1422 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__ResultTest_47, 2) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarRval_36));
#line 1422 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__ResultTest_47, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1422 "ml_string_switch.m"
    }
#line 1425 "ml_string_switch.m"
    {
#line 1425 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1425 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 1425 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_95_95, 2) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarRval_36));
#line 1425 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_95_95, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1425 "ml_string_switch.m"
    }
#line 1428 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[25]);
#line 1428 "ml_string_switch.m"
    {
#line 1428 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1428 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1428 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_103_103, 2) = ((MR_Box) (ml_backend__ml_string_switch__MidVarRval_35));
#line 1428 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_103_103, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_105_105));
#line 1428 "ml_string_switch.m"
    }
#line 1427 "ml_string_switch.m"
    {
#line 1427 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_102_102, 0) = ((MR_Box) (ml_backend__ml_string_switch__HiVarLval_27));
#line 1427 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_102_102, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_103_103));
#line 1427 "ml_string_switch.m"
    }
#line 1426 "ml_string_switch.m"
    {
#line 1426 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1426 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_101_101, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_102_102));
#line 1426 "ml_string_switch.m"
    }
#line 1426 "ml_string_switch.m"
    {
#line 1426 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_100_100, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_101_101));
#line 1426 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_100_100, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1426 "ml_string_switch.m"
    }
#line 1432 "ml_string_switch.m"
    {
#line 1432 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1432 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1432 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_112_112, 2) = ((MR_Box) (ml_backend__ml_string_switch__MidVarRval_35));
#line 1432 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_112_112, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_105_105));
#line 1432 "ml_string_switch.m"
    }
#line 1431 "ml_string_switch.m"
    {
#line 1431 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_111_111, 0) = ((MR_Box) (ml_backend__ml_string_switch__LoVarLval_26));
#line 1431 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_111_111, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_112_112));
#line 1431 "ml_string_switch.m"
    }
#line 1430 "ml_string_switch.m"
    {
#line 1430 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1430 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_110_110, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_111_111));
#line 1430 "ml_string_switch.m"
    }
#line 1430 "ml_string_switch.m"
    {
#line 1430 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_109_109, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_110_110));
#line 1430 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_109_109, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1430 "ml_string_switch.m"
    }
#line 1430 "ml_string_switch.m"
    {
#line 1430 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_108_108, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_109_109));
#line 1430 "ml_string_switch.m"
    }
#line 1424 "ml_string_switch.m"
    {
#line 1424 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_94_94, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_95_95));
#line 1424 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_94_94, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_100_100));
#line 1424 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_94_94, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_108_108));
#line 1424 "ml_string_switch.m"
    }
#line 1423 "ml_string_switch.m"
    {
#line 1423 "ml_string_switch.m"
      ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_94_94));
#line 1423 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1423 "ml_string_switch.m"
    }
#line 1454 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__MaybeStopLoopVarLval_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1437 "ml_string_switch.m"
      {
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LoopBodyStatements_49;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_145_145;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_146_146;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_147_147;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_148_148;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_149_149;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_151_151;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_152_152;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_153_153;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_154_154;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_156_156;
#line 1437 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_157_157;

#line 1442 "ml_string_switch.m"
        {
#line 1442 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_149_149, 0) = ((MR_Box) (ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48));
#line 1442 "ml_string_switch.m"
        }
#line 1441 "ml_string_switch.m"
        {
#line 1441 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_148_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_148_148, 0) = ((MR_Box) (ml_backend__ml_string_switch__ResultTest_47));
#line 1441 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_148_148, 1) = ((MR_Box) (ml_backend__ml_string_switch__SuccessStatement_38));
#line 1441 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_148_148, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_149_149));
#line 1441 "ml_string_switch.m"
        }
#line 1441 "ml_string_switch.m"
        {
#line 1441 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_147_147, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_148_148));
#line 1441 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_147_147, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1441 "ml_string_switch.m"
        }
#line 1444 "ml_string_switch.m"
        {
#line 1444 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_147_147));
#line 1444 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1444 "ml_string_switch.m"
        }
#line 1440 "ml_string_switch.m"
        {
#line 1440 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_145_145, 0) = ((MR_Box) (ml_backend__ml_string_switch__AssignResultVarStatement_46));
#line 1440 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_145_145, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_146_146));
#line 1440 "ml_string_switch.m"
        }
#line 1439 "ml_string_switch.m"
        {
#line 1439 "ml_string_switch.m"
          ml_backend__ml_string_switch__LoopBodyStatements_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopBodyStatements_49, 0) = ((MR_Box) (ml_backend__ml_string_switch__AssignMidVarStatement_45));
#line 1439 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopBodyStatements_49, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_145_145));
#line 1439 "ml_string_switch.m"
        }
#line 1450 "ml_string_switch.m"
        {
#line 1450 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_157_157, 1) = ((MR_Box) (ml_backend__ml_string_switch__LoopBodyStatements_49));
#line 1450 "ml_string_switch.m"
        }
#line 1450 "ml_string_switch.m"
        {
#line 1450 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_156_156, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_157_157));
#line 1450 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_156_156, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1450 "ml_string_switch.m"
        }
#line 1448 "ml_string_switch.m"
        {
#line 1448 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_154_154, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1448 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_154_154, 1) = ((MR_Box) (ml_backend__ml_string_switch__CrossingTest_44));
#line 1448 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_154_154, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_156_156));
#line 1448 "ml_string_switch.m"
        }
#line 1448 "ml_string_switch.m"
        {
#line 1448 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_153_153, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_154_154));
#line 1448 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_153_153, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1448 "ml_string_switch.m"
        }
#line 1453 "ml_string_switch.m"
        {
#line 1453 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_152_152, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_153_153));
#line 1453 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "ml_string_switch.m"
        }
#line 1447 "ml_string_switch.m"
        {
#line 1447 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_151_151, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitHiVarStatement_43));
#line 1447 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_151_151, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_152_152));
#line 1447 "ml_string_switch.m"
        }
#line 1446 "ml_string_switch.m"
        {
#line 1446 "ml_string_switch.m"
          ml_backend__ml_string_switch__SearchStatements_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SearchStatements_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitLoVarStatement_42));
#line 1446 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SearchStatements_50, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_151_151));
#line 1446 "ml_string_switch.m"
        }
#line 1437 "ml_string_switch.m"
      }
#line 1454 "ml_string_switch.m"
    else
#line 1455 "ml_string_switch.m"
      {
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StopLoopVarLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopVarLval_30, (MR_Integer) 0)));
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__InitStopLoopVarStatement_52;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StopLoopTest_53;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_117_117;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_118_118;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_123_123;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_127_127;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_128_128;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_129_129;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_130_130;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_131_131;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_133_133;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_134_134;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_135_135;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_136_136;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_137_137;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_139_139;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_141_141;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_142_142;
#line 1455 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LoopBodyStatements_164;

#line 1457 "ml_string_switch.m"
        {
#line 1457 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_118_118, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_51));
#line 1457 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_118_118, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1457 "ml_string_switch.m"
        }
#line 1456 "ml_string_switch.m"
        {
#line 1456 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1456 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_117_117, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_118_118));
#line 1456 "ml_string_switch.m"
        }
#line 1456 "ml_string_switch.m"
        {
#line 1456 "ml_string_switch.m"
          ml_backend__ml_string_switch__InitStopLoopVarStatement_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitStopLoopVarStatement_52, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_117_117));
#line 1456 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitStopLoopVarStatement_52, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1456 "ml_string_switch.m"
        }
#line 1460 "ml_string_switch.m"
        {
#line 1460 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1460 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_123_123, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_51));
#line 1460 "ml_string_switch.m"
        }
#line 1459 "ml_string_switch.m"
        {
#line 1459 "ml_string_switch.m"
          ml_backend__ml_string_switch__StopLoopTest_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1459 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1459 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_53, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_123_123));
#line 1459 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_53, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1459 "ml_string_switch.m"
        }
#line 1466 "ml_string_switch.m"
        {
#line 1466 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_131_131, 0) = ((MR_Box) (ml_backend__ml_string_switch__UpdateLoOrHiVarStatement_48));
#line 1466 "ml_string_switch.m"
        }
#line 1465 "ml_string_switch.m"
        {
#line 1465 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_130_130 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_130_130, 0) = ((MR_Box) (ml_backend__ml_string_switch__ResultTest_47));
#line 1465 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_130_130, 1) = ((MR_Box) (ml_backend__ml_string_switch__SuccessStatement_38));
#line 1465 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_130_130, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_131_131));
#line 1465 "ml_string_switch.m"
        }
#line 1465 "ml_string_switch.m"
        {
#line 1465 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_129_129, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_130_130));
#line 1465 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_129_129, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1465 "ml_string_switch.m"
        }
#line 1468 "ml_string_switch.m"
        {
#line 1468 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_128_128, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_129_129));
#line 1468 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1468 "ml_string_switch.m"
        }
#line 1463 "ml_string_switch.m"
        {
#line 1463 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_127_127, 0) = ((MR_Box) (ml_backend__ml_string_switch__AssignResultVarStatement_46));
#line 1463 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_127_127, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_128_128));
#line 1463 "ml_string_switch.m"
        }
#line 1462 "ml_string_switch.m"
        {
#line 1462 "ml_string_switch.m"
          ml_backend__ml_string_switch__LoopBodyStatements_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopBodyStatements_164, 0) = ((MR_Box) (ml_backend__ml_string_switch__AssignMidVarStatement_45));
#line 1462 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopBodyStatements_164, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_127_127));
#line 1462 "ml_string_switch.m"
        }
#line 1474 "ml_string_switch.m"
        {
#line 1474 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1474 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1474 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_139_139, 2) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopTest_53));
#line 1474 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_139_139, 3) = ((MR_Box) (ml_backend__ml_string_switch__CrossingTest_44));
#line 1474 "ml_string_switch.m"
        }
#line 1475 "ml_string_switch.m"
        {
#line 1475 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1475 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_142_142, 1) = ((MR_Box) (ml_backend__ml_string_switch__LoopBodyStatements_164));
#line 1475 "ml_string_switch.m"
        }
#line 1475 "ml_string_switch.m"
        {
#line 1475 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_141_141, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_142_142));
#line 1475 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_141_141, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1475 "ml_string_switch.m"
        }
#line 1473 "ml_string_switch.m"
        {
#line 1473 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_137_137, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1473 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_137_137, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_139_139));
#line 1473 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_137_137, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_141_141));
#line 1473 "ml_string_switch.m"
        }
#line 1473 "ml_string_switch.m"
        {
#line 1473 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_136_136, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_137_137));
#line 1473 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_136_136, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1473 "ml_string_switch.m"
        }
#line 1478 "ml_string_switch.m"
        {
#line 1478 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_136_136));
#line 1478 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1478 "ml_string_switch.m"
        }
#line 1472 "ml_string_switch.m"
        {
#line 1472 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_134_134, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitStopLoopVarStatement_52));
#line 1472 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_134_134, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_135_135));
#line 1472 "ml_string_switch.m"
        }
#line 1471 "ml_string_switch.m"
        {
#line 1471 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_133_133, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitHiVarStatement_43));
#line 1471 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_133_133, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_134_134));
#line 1471 "ml_string_switch.m"
        }
#line 1470 "ml_string_switch.m"
        {
#line 1470 "ml_string_switch.m"
          ml_backend__ml_string_switch__SearchStatements_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SearchStatements_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitLoVarStatement_42));
#line 1470 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SearchStatements_50, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_133_133));
#line 1470 "ml_string_switch.m"
        }
#line 1455 "ml_string_switch.m"
      }
#line 1482 "ml_string_switch.m"
    {
#line 1482 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_161_161, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitialComment_14));
#line 1482 "ml_string_switch.m"
    }
#line 1482 "ml_string_switch.m"
    {
#line 1482 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_160_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_160_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1482 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_160_160, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_161_161));
#line 1482 "ml_string_switch.m"
    }
#line 1482 "ml_string_switch.m"
    {
#line 1482 "ml_string_switch.m"
      ml_backend__ml_string_switch__InitialCommentStatement_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitialCommentStatement_54, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_160_160));
#line 1482 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitialCommentStatement_54, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_13));
#line 1482 "ml_string_switch.m"
    }
#line 5202 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_165_165 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 1483 "ml_string_switch.m"
    {
#line 1483 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_162_162, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitialCommentStatement_54));
#line 1483 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_162_162, 1) = ((MR_Box) (ml_backend__ml_string_switch__SetupForFailStatements_37));
#line 1483 "ml_string_switch.m"
    }
#line 1484 "ml_string_switch.m"
    {
#line 1484 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_163_163 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_165_165, ml_backend__ml_string_switch__SearchStatements_50, ml_backend__ml_string_switch__AfterStatements_39);
    }
#line 1483 "ml_string_switch.m"
    {
#line 1483 "ml_string_switch.m"
      *ml_backend__ml_string_switch__Statements_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_165_165, ml_backend__ml_string_switch__V_162_162, ml_backend__ml_string_switch__V_163_163);
    }
#line 1384 "ml_string_switch.m"
  }
#line 1377 "ml_string_switch.m"
}

#line 1323 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_8_p_0(
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_9,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_10,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_11,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_12,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1323 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__BinarySearchInfo_14,
#line 1323 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_39,
#line 1323 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_40)
#line 1323 "ml_string_switch.m"
{
#line 1328 "ml_string_switch.m"
  {
#line 1328 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarLval_16;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarRval_17;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__IndexType_18;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultType_19;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__IndexGCStatement_20;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoVar_22;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoVarDefn_23;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoVarLval_24;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HiVar_25;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HiVarDefn_26;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HiVarLval_27;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVar_28;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarDefn_29;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarLval_30;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultVar_31;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultVarDefn_32;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ResultVarLval_33;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AlwaysDefns_34;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeStopLoopLval_35;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StopLoopVarDefns_36;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Defns_37;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FailStatements_38;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_42_42;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_43_43;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_46_46;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_48_48;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_49_49;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_52_52;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_53_53;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_54_54;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_55_55;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_69;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Globals_70;
#line 1328 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SupportsGoto_71;
#line 1328 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__Experiment_72;

#line 1329 "ml_string_switch.m"
    {
#line 1329 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_39, ml_backend__ml_string_switch__Var_13, &ml_backend__ml_string_switch__VarLval_16);
    }
#line 1330 "ml_string_switch.m"
    {
#line 1330 "ml_string_switch.m"
      ml_backend__ml_string_switch__VarRval_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__VarRval_17, 0) = ((MR_Box) (ml_backend__ml_string_switch__VarLval_16));
#line 1330 "ml_string_switch.m"
    }
#line 1338 "ml_string_switch.m"
    ml_backend__ml_string_switch__IndexType_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 1339 "ml_string_switch.m"
    ml_backend__ml_string_switch__ResultType_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 1341 "ml_string_switch.m"
    ml_backend__ml_string_switch__IndexGCStatement_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1344 "ml_string_switch.m"
    {
#line 1344 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "lo", &ml_backend__ml_string_switch__LoVar_22, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_39, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_42_42);
    }
#line 1345 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__LoVar_22);
#line 1345 "ml_string_switch.m"
    {
#line 1345 "ml_string_switch.m"
      ml_backend__ml_string_switch__LoVarDefn_23 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_43_43, ml_backend__ml_string_switch__IndexType_18, ml_backend__ml_string_switch__IndexGCStatement_20, ml_backend__ml_string_switch__MLDS_Context_12);
    }
#line 1347 "ml_string_switch.m"
    {
#line 1347 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_42_42, ml_backend__ml_string_switch__LoVar_22, ml_backend__ml_string_switch__IndexType_18, &ml_backend__ml_string_switch__LoVarLval_24);
    }
#line 1349 "ml_string_switch.m"
    {
#line 1349 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "hi", &ml_backend__ml_string_switch__HiVar_25, ml_backend__ml_string_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45);
    }
#line 1350 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__HiVar_25);
#line 1350 "ml_string_switch.m"
    {
#line 1350 "ml_string_switch.m"
      ml_backend__ml_string_switch__HiVarDefn_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_46_46, ml_backend__ml_string_switch__IndexType_18, ml_backend__ml_string_switch__IndexGCStatement_20, ml_backend__ml_string_switch__MLDS_Context_12);
    }
#line 1352 "ml_string_switch.m"
    {
#line 1352 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45, ml_backend__ml_string_switch__HiVar_25, ml_backend__ml_string_switch__IndexType_18, &ml_backend__ml_string_switch__HiVarLval_27);
    }
#line 1354 "ml_string_switch.m"
    {
#line 1354 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "mid", &ml_backend__ml_string_switch__MidVar_28, ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_48_48);
    }
#line 1355 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__MidVar_28);
#line 1355 "ml_string_switch.m"
    {
#line 1355 "ml_string_switch.m"
      ml_backend__ml_string_switch__MidVarDefn_29 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_49_49, ml_backend__ml_string_switch__IndexType_18, ml_backend__ml_string_switch__IndexGCStatement_20, ml_backend__ml_string_switch__MLDS_Context_12);
    }
#line 1357 "ml_string_switch.m"
    {
#line 1357 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_48_48, ml_backend__ml_string_switch__MidVar_28, ml_backend__ml_string_switch__IndexType_18, &ml_backend__ml_string_switch__MidVarLval_30);
    }
#line 1359 "ml_string_switch.m"
    {
#line 1359 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "result", &ml_backend__ml_string_switch__ResultVar_31, ml_backend__ml_string_switch__STATE_VARIABLE_Info_48_48, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51);
    }
#line 1360 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__ResultVar_31);
#line 1360 "ml_string_switch.m"
    {
#line 1360 "ml_string_switch.m"
      ml_backend__ml_string_switch__ResultVarDefn_32 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_52_52, ml_backend__ml_string_switch__ResultType_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_12);
    }
#line 1362 "ml_string_switch.m"
    {
#line 1362 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51, ml_backend__ml_string_switch__ResultVar_31, ml_backend__ml_string_switch__ResultType_19, &ml_backend__ml_string_switch__ResultVarLval_33);
    }
#line 1364 "ml_string_switch.m"
    {
#line 1364 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_55_55, 0) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarDefn_32));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "ml_string_switch.m"
    }
#line 1364 "ml_string_switch.m"
    {
#line 1364 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_54_54, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarDefn_29));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_54_54, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_55_55));
#line 1364 "ml_string_switch.m"
    }
#line 1364 "ml_string_switch.m"
    {
#line 1364 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_53_53, 0) = ((MR_Box) (ml_backend__ml_string_switch__HiVarDefn_26));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_53_53, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_54_54));
#line 1364 "ml_string_switch.m"
    }
#line 1364 "ml_string_switch.m"
    {
#line 1364 "ml_string_switch.m"
      ml_backend__ml_string_switch__AlwaysDefns_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__AlwaysDefns_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__LoVarDefn_23));
#line 1364 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__AlwaysDefns_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_53_53));
#line 1364 "ml_string_switch.m"
    }
#line 1503 "ml_string_switch.m"
    {
#line 1503 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51, &ml_backend__ml_string_switch__ModuleInfo_69);
    }
#line 1504 "ml_string_switch.m"
    {
#line 1504 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_string_switch__ModuleInfo_69, &ml_backend__ml_string_switch__Globals_70);
    }
#line 1505 "ml_string_switch.m"
    {
#line 1505 "ml_string_switch.m"
      ml_backend__ml_string_switch__SupportsGoto_71 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(ml_backend__ml_string_switch__Globals_70);
    }
#line 1506 "ml_string_switch.m"
    {
#line 1506 "ml_string_switch.m"
      libs__globals__lookup_string_option_3_p_0(ml_backend__ml_string_switch__Globals_70, (MR_Integer) 664, &ml_backend__ml_string_switch__Experiment_72);
    }
#line 5478 "ml_backend.ml_string_switch.c"
    if ((ml_backend__ml_string_switch__SupportsGoto_71 == (MR_Integer) 0))
#line 5480 "ml_backend.ml_string_switch.c"
      {
#line 5482 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__StopLoopType_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 5484 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__StopLoopVar_75;
#line 5486 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__StopLoopVarDefn_76;
#line 5488 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__StopLoopVarLval_77;
#line 5490 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__V_81_81;

#line 1533 "ml_string_switch.m"
        {
#line 1533 "ml_string_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "stop_loop", &ml_backend__ml_string_switch__StopLoopVar_75, ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58);
        }
#line 1534 "ml_string_switch.m"
        ml_backend__ml_string_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__StopLoopVar_75);
#line 1534 "ml_string_switch.m"
        {
#line 1534 "ml_string_switch.m"
          ml_backend__ml_string_switch__StopLoopVarDefn_76 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_81_81, ml_backend__ml_string_switch__StopLoopType_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_12);
        }
#line 1536 "ml_string_switch.m"
        {
#line 1536 "ml_string_switch.m"
          ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58, ml_backend__ml_string_switch__StopLoopVar_75, ml_backend__ml_string_switch__StopLoopType_73, &ml_backend__ml_string_switch__StopLoopVarLval_77);
        }
#line 1537 "ml_string_switch.m"
        {
#line 1537 "ml_string_switch.m"
          ml_backend__ml_string_switch__MaybeStopLoopLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopLval_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_77));
#line 1537 "ml_string_switch.m"
        }
#line 1538 "ml_string_switch.m"
        {
#line 1538 "ml_string_switch.m"
          ml_backend__ml_string_switch__StopLoopVarDefns_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarDefn_76));
#line 1538 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "ml_string_switch.m"
        }
#line 5528 "ml_backend.ml_string_switch.c"
      }
#line 5530 "ml_backend.ml_string_switch.c"
    else
#line 5532 "ml_backend.ml_string_switch.c"
      {
#line 1509 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = (strcmp(ml_backend__ml_string_switch__Experiment_72, (MR_String) "use_stop_loop") == 0);
#line 5536 "ml_backend.ml_string_switch.c"
        if (ml_backend__ml_string_switch__succeeded)
#line 5538 "ml_backend.ml_string_switch.c"
          {
#line 5540 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopType_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 5542 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVar_93;
#line 5544 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVarDefn_94;
#line 5546 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVarLval_95;
#line 5548 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_97_97;

#line 1533 "ml_string_switch.m"
            {
#line 1533 "ml_string_switch.m"
              ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "stop_loop", &ml_backend__ml_string_switch__StopLoopVar_93, ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58);
            }
#line 1534 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__StopLoopVar_93);
#line 1534 "ml_string_switch.m"
            {
#line 1534 "ml_string_switch.m"
              ml_backend__ml_string_switch__StopLoopVarDefn_94 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_97_97, ml_backend__ml_string_switch__StopLoopType_91, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_12);
            }
#line 1536 "ml_string_switch.m"
            {
#line 1536 "ml_string_switch.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58, ml_backend__ml_string_switch__StopLoopVar_93, ml_backend__ml_string_switch__StopLoopType_91, &ml_backend__ml_string_switch__StopLoopVarLval_95);
            }
#line 1537 "ml_string_switch.m"
            {
#line 1537 "ml_string_switch.m"
              ml_backend__ml_string_switch__MaybeStopLoopLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopLval_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_95));
#line 1537 "ml_string_switch.m"
            }
#line 1538 "ml_string_switch.m"
            {
#line 1538 "ml_string_switch.m"
              ml_backend__ml_string_switch__StopLoopVarDefns_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarDefn_94));
#line 1538 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "ml_string_switch.m"
            }
#line 5586 "ml_backend.ml_string_switch.c"
          }
#line 5588 "ml_backend.ml_string_switch.c"
        else
#line 5590 "ml_backend.ml_string_switch.c"
          {
#line 1521 "ml_string_switch.m"
            ml_backend__ml_string_switch__MaybeStopLoopLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
            ml_backend__ml_string_switch__StopLoopVarDefns_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
            ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_51_51;
#line 5598 "ml_backend.ml_string_switch.c"
          }
#line 5600 "ml_backend.ml_string_switch.c"
      }
#line 1367 "ml_string_switch.m"
    {
#line 1367 "ml_string_switch.m"
      ml_backend__ml_string_switch__Defns_37 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_string_switch__AlwaysDefns_34, ml_backend__ml_string_switch__StopLoopVarDefns_36);
    }
#line 1551 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__CanFail_10 == (MR_Integer) 0))
#line 1558 "ml_string_switch.m"
      {
#line 1558 "ml_string_switch.m"
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_string_switch__CodeModel_9, ml_backend__ml_string_switch__Context_11, &ml_backend__ml_string_switch__FailStatements_38, ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58, ml_backend__ml_string_switch__STATE_VARIABLE_Info_40);
      }
#line 1551 "ml_string_switch.m"
    else
#line 1551 "ml_string_switch.m"
      {
#line 1555 "ml_string_switch.m"
        ml_backend__ml_string_switch__FailStatements_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1555 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_Info_40 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_58_58;
#line 1551 "ml_string_switch.m"
      }
#line 1373 "ml_string_switch.m"
    {
#line 1373 "ml_string_switch.m"
      MR_Word base;
#line 1373 "ml_string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "ml_string_switch.m"
      *ml_backend__ml_string_switch__BinarySearchInfo_14 = base;
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__CodeModel_9));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__VarRval_17));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_string_switch__LoVarLval_24));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_string_switch__HiVarLval_27));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_30));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_string_switch__ResultVarLval_33));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_string_switch__MaybeStopLoopLval_35));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_string_switch__FailStatements_38));
#line 1373 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_string_switch__Defns_37));
#line 1373 "ml_string_switch.m"
    }
#line 1328 "ml_string_switch.m"
  }
#line 1323 "ml_string_switch.m"
}

#line 1290 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3(
#line 1290 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1290 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 1290 "ml_string_switch.m"
{
#line 1290 "ml_string_switch.m"
  {
#line 1290 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 1290 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 1290 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv2_HeadVar__3_3;

#line 1290 "ml_string_switch.m"
    {
#line 1290 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv2_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 1290 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv2_HeadVar__3_3));
#line 1290 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 1290 "ml_string_switch.m"
  }
#line 1290 "ml_string_switch.m"
}

#line 1288 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_2(
#line 1288 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1288 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 1288 "ml_string_switch.m"
{
#line 1288 "ml_string_switch.m"
  {
#line 1288 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 1288 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 1288 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_HeadVar__2_2;

#line 1288 "ml_string_switch.m"
    {
#line 1288 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 1288 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv1_HeadVar__2_2));
#line 1288 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 1288 "ml_string_switch.m"
  }
#line 1288 "ml_string_switch.m"
}

#line 1279 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_1(
#line 1279 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1279 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 1279 "ml_string_switch.m"
{
#line 1279 "ml_string_switch.m"
  {
#line 1279 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 1279 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 1279 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__2_2;

#line 1279 "ml_string_switch.m"
    {
#line 1279 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 1279 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__2_2));
#line 1279 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 1279 "ml_string_switch.m"
  }
#line 1279 "ml_string_switch.m"
}

#line 1256 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__3_3,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_4,
#line 1256 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_5,
#line 1256 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6,
#line 1256 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_7,
#line 1256 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0_8,
#line 1256 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_9,
#line 1256 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__HeadVar__10_10)
#line 1256 "ml_string_switch.m"
{
#line 1263 "ml_string_switch.m"
  while (MR_TRUE)
#line 1263 "ml_string_switch.m"
    {
#line 1263 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 1263 "ml_string_switch.m"
      {
#line 1263 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded;

#line 1263 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "ml_string_switch.m"
          {
#line 1266 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_9 = ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0_8;
#line 1265 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_7 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
#line 1265 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_5 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_4;
#line 1263 "ml_string_switch.m"
          }
#line 1263 "ml_string_switch.m"
        else
#line 1270 "ml_string_switch.m"
          {
#line 1270 "ml_string_switch.m"
            MR_String ml_backend__ml_string_switch__Str_23;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Solns_24;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrSolns_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrRval_32;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__FirstSolnRowInitializer_36;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_48_48;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_56_56;
#line 1270 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_58_58;
#line 1270 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_67_67;
#line 1270 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_68_68;

#line 1267 "ml_string_switch.m"
            ml_backend__ml_string_switch__Str_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_47_47, (MR_Integer) 0)));
#line 1267 "ml_string_switch.m"
            ml_backend__ml_string_switch__Solns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_47_47, (MR_Integer) 1)));
#line 1271 "ml_string_switch.m"
            {
#line 1271 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1271 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_48_48, 1) = ((MR_Box) (ml_backend__ml_string_switch__Str_23));
#line 1271 "ml_string_switch.m"
            }
#line 1271 "ml_string_switch.m"
            {
#line 1271 "ml_string_switch.m"
              ml_backend__ml_string_switch__StrRval_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1271 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_32, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_48_48));
#line 1271 "ml_string_switch.m"
            }
#line 1280 "ml_string_switch.m"
            if (((MR_tag((MR_Word) ml_backend__ml_string_switch__Solns_24)) == (MR_mktag((MR_Integer) 0))))
#line 1273 "ml_string_switch.m"
              {
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__FirstSolnRvals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 0)));
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__NumLaterSolnsInitializer_34;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__FirstLaterSlotInitializer_35;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_61_61;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_62_62;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_63_63;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_64_64;
#line 1273 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_65_65;

#line 1274 "ml_string_switch.m"
                {
#line 1274 "ml_string_switch.m"
                  ml_backend__ml_string_switch__NumLaterSolnsInitializer_34 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                }
#line 1275 "ml_string_switch.m"
                {
#line 1275 "ml_string_switch.m"
                  ml_backend__ml_string_switch__FirstLaterSlotInitializer_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
                }
#line 1277 "ml_string_switch.m"
                {
#line 1277 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_string_switch__StrRval_32));
#line 1277 "ml_string_switch.m"
                }
#line 1279 "ml_string_switch.m"
                {
#line 1279 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_65_65 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[16], ml_backend__ml_string_switch__FirstSolnRvals_33);
                }
#line 1279 "ml_string_switch.m"
                {
#line 1279 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_64_64, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLaterSlotInitializer_35));
#line 1279 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_64_64, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_65_65));
#line 1279 "ml_string_switch.m"
                }
#line 1278 "ml_string_switch.m"
                {
#line 1278 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsInitializer_34));
#line 1278 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_63_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_64_64));
#line 1278 "ml_string_switch.m"
                }
#line 1277 "ml_string_switch.m"
                {
#line 1277 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_61_61, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 1277 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_63_63));
#line 1277 "ml_string_switch.m"
                }
#line 1276 "ml_string_switch.m"
                {
#line 1276 "ml_string_switch.m"
                  ml_backend__ml_string_switch__FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__FirstSolnRowInitializer_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_2));
#line 1276 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__FirstSolnRowInitializer_36, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_61_61));
#line 1276 "ml_string_switch.m"
                }
#line 1279 "ml_string_switch.m"
                ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_56_56 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6;
#line 1279 "ml_string_switch.m"
                ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_58_58 = ml_backend__ml_string_switch__HeadVar__10_10;
#line 1273 "ml_string_switch.m"
              }
#line 1280 "ml_string_switch.m"
            else
#line 1281 "ml_string_switch.m"
              {
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__TypeInfo_80_80 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[2];
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__TypeCtorInfo_82_82;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__LaterSolns_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 1)));
#line 1281 "ml_string_switch.m"
                MR_Integer ml_backend__ml_string_switch__NumLaterSolns_38;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializers_39;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_49_49;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_50_50;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_51_51;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_52_52;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_53_53;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_55_55;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_57_57;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__FirstSolnRvals_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 0)));
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__NumLaterSolnsInitializer_74;
#line 1281 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__FirstLaterSlotInitializer_75;

#line 1282 "ml_string_switch.m"
                {
#line 1282 "ml_string_switch.m"
                  mercury__list__length_2_p_0(ml_backend__ml_string_switch__TypeInfo_80_80, ml_backend__ml_string_switch__LaterSolns_37, &ml_backend__ml_string_switch__NumLaterSolns_38);
                }
#line 1283 "ml_string_switch.m"
                {
#line 1283 "ml_string_switch.m"
                  ml_backend__ml_string_switch__NumLaterSolnsInitializer_74 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_string_switch__NumLaterSolns_38);
                }
#line 1284 "ml_string_switch.m"
                {
#line 1284 "ml_string_switch.m"
                  ml_backend__ml_string_switch__FirstLaterSlotInitializer_75 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_string_switch__HeadVar__10_10);
                }
#line 1286 "ml_string_switch.m"
                {
#line 1286 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__StrRval_32));
#line 1286 "ml_string_switch.m"
                }
#line 6000 "ml_backend.ml_string_switch.c"
                ml_backend__ml_string_switch__TypeCtorInfo_82_82 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 1288 "ml_string_switch.m"
                {
#line 1288 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_53_53 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_string_switch__TypeCtorInfo_82_82, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[17], ml_backend__ml_string_switch__FirstSolnRvals_73);
                }
#line 1288 "ml_string_switch.m"
                {
#line 1288 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_52_52, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLaterSlotInitializer_75));
#line 1288 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_53_53));
#line 1288 "ml_string_switch.m"
                }
#line 1287 "ml_string_switch.m"
                {
#line 1287 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_51_51, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsInitializer_74));
#line 1287 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_51_51, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_52_52));
#line 1287 "ml_string_switch.m"
                }
#line 1286 "ml_string_switch.m"
                {
#line 1286 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_49_49, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_50_50));
#line 1286 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_49_49, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_51_51));
#line 1286 "ml_string_switch.m"
                }
#line 1285 "ml_string_switch.m"
                {
#line 1285 "ml_string_switch.m"
                  ml_backend__ml_string_switch__FirstSolnRowInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__FirstSolnRowInitializer_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_2));
#line 1285 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__FirstSolnRowInitializer_36, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_49_49));
#line 1285 "ml_string_switch.m"
                }
#line 1290 "ml_string_switch.m"
                {
#line 1290 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_55_55, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_7[0]));
#line 1290 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_55_55, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0_3));
#line 1290 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1290 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_55_55, 3) = ((MR_Box) (ml_backend__ml_string_switch__HeadVar__3_3));
#line 1290 "ml_string_switch.m"
                }
#line 1289 "ml_string_switch.m"
                {
#line 1289 "ml_string_switch.m"
                  ml_backend__ml_string_switch__LaterSolnRowInitializers_39 = mercury__list__map_2_f_0(ml_backend__ml_string_switch__TypeInfo_80_80, ml_backend__ml_string_switch__TypeCtorInfo_82_82, ml_backend__ml_string_switch__V_55_55, ml_backend__ml_string_switch__LaterSolns_37);
                }
#line 1293 "ml_string_switch.m"
                {
#line 1293 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_57_57 = mercury__cord__from_list_1_f_0(ml_backend__ml_string_switch__TypeCtorInfo_82_82, ml_backend__ml_string_switch__LaterSolnRowInitializers_39);
                }
#line 1292 "ml_string_switch.m"
                {
#line 1292 "ml_string_switch.m"
                  ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_56_56 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_82_82, ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6, ml_backend__ml_string_switch__V_57_57);
                }
#line 1294 "ml_string_switch.m"
                ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_58_58 = (ml_backend__ml_string_switch__HeadVar__10_10 + ml_backend__ml_string_switch__NumLaterSolns_38);
#line 1281 "ml_string_switch.m"
              }
#line 1296 "ml_string_switch.m"
            {
#line 1296 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_67_67, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnRowInitializer_36));
#line 1296 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_67_67, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_4));
#line 1296 "ml_string_switch.m"
            }
#line 1298 "ml_string_switch.m"
            ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_68_68 = (ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0_8 + (MR_Integer) 1);
#line 1299 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 1299 "ml_string_switch.m"
            {
#line 1299 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_string_switch__StrSolns_25;
#line 1299 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_4 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_67_67;
#line 1299 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_6 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_56_56;
#line 1299 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0__tmp_copy_8 = ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_68_68;
#line 1299 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__HeadVar__10__tmp_copy_10 = ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_58_58;

#line 1299 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__10_10 = ml_backend__ml_string_switch__HeadVar__10__tmp_copy_10;
#line 1299 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0_8 = ml_backend__ml_string_switch__STATE_VARIABLE_CurFirstSolnIndex_0__tmp_copy_8;
#line 1299 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_6 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_6;
#line 1299 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_4 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_4;
#line 1299 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1;
#line 1299 "ml_string_switch.m"
            }
#line 1299 "ml_string_switch.m"
            continue;
#line 1270 "ml_string_switch.m"
          }
#line 1263 "ml_string_switch.m"
      }
#line 1263 "ml_string_switch.m"
      break;
#line 1263 "ml_string_switch.m"
    }
#line 1256 "ml_string_switch.m"
}

#line 1140 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_12_p_0(
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_14,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_15,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseSolns0_16,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_17,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_18,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_19,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_20,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_21,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1140 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_92,
#line 1140 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_93)
#line 1140 "ml_string_switch.m"
{
#line 1150 "ml_string_switch.m"
  {
#line 1150 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_132_132;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_133_133;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_24;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_25;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_26;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_27;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SeveralSolnLookupVars_28;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsVarLval_29;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarLval_30;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitVarLval_31;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitAssignStatement_32;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__IncrLaterSlotVarStatement_33;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MatchDefns_34;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarRval_35;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitVarRval_36;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_37;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_IntType_38;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnFieldTypes_39;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseSolns_41;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_42;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnStructTypeNum_43;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnStructType_44;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnFieldIds_45;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_46;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnStructTypeNum_47;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnStructType_48;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnFieldIds_49;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData2_50;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_55;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsFieldId_56;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLaterRowFieldId_57;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnArgIds_58;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevFirstSolnRowInitializers_59;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializersCord_60;
#line 1150 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__FirstSolnTableSize_61;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnRowInitializers_62;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializers_63;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnVectorCommon_64;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData3_65;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnVectorCommon_66;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_67;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__BinarySearchInfo_68;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarLval_73;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarRval_77;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_78;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarAssignStatement_79;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnLookupStatements_80;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnLookupStatements_81;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CallContStatement_82;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLookupSucceedStmt_83;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLookupSucceedStatement_84;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterLookupSucceedStmt_85;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterLookupSucceedStatement_86;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopCond_87;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopStmt_88;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopStatement_89;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MatchStatements_90;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_94_94;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_95_95;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_96_96;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_97_97;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_104_104;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_107_107;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_108_108;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_110_110;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_111_111;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_112_112;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_113_113;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_115_115;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_116_116;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_119_119;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_120_120;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_121_121;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_125_125;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_126_126;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_127_127;
#line 1150 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_128_128;
#line 1186 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_51;
#line 1186 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_52;
#line 1186 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLaterRowFieldIdPrime_53;
#line 1186 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnArgIdsPrime_54;
#line 1179 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_98_98;
#line 1179 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_99_99;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_69;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_70;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoVarLval_71;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___HiVarLval_72;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___ResultVarLval_74;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopLval_75;
#line 1206 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_76;

#line 1151 "ml_string_switch.m"
    {
#line 1151 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_92, &ml_backend__ml_string_switch__ModuleInfo_24);
    }
#line 1152 "ml_string_switch.m"
    {
#line 1152 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_24, &ml_backend__ml_string_switch__ModuleName_25);
    }
#line 1153 "ml_string_switch.m"
    {
#line 1153 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_25);
    }
#line 1154 "ml_string_switch.m"
    {
#line 1154 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_92, &ml_backend__ml_string_switch__Target_27);
    }
#line 1156 "ml_string_switch.m"
    {
#line 1156 "ml_string_switch.m"
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__SeveralSolnLookupVars_28, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_92, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_94_94);
    }
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__NumLaterSolnsVarLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 0)));
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__LaterSlotVarLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 1)));
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__LimitVarLval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 2)));
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__LimitAssignStatement_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 3)));
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__IncrLaterSlotVarStatement_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 4)));
#line 1157 "ml_string_switch.m"
    ml_backend__ml_string_switch__MatchDefns_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_28, (MR_Integer) 5)));
#line 1160 "ml_string_switch.m"
    {
#line 1160 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterSlotVarRval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LaterSlotVarRval_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarLval_30));
#line 1160 "ml_string_switch.m"
    }
#line 1161 "ml_string_switch.m"
    {
#line 1161 "ml_string_switch.m"
      ml_backend__ml_string_switch__LimitVarRval_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LimitVarRval_36, 0) = ((MR_Box) (ml_backend__ml_string_switch__LimitVarLval_31));
#line 1161 "ml_string_switch.m"
    }
#line 1163 "ml_string_switch.m"
    {
#line 1163 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_95_95 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 1163 "ml_string_switch.m"
    {
#line 1163 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_37 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_24, ml_backend__ml_string_switch__V_95_95);
    }
#line 1164 "ml_string_switch.m"
    ml_backend__ml_string_switch__MLDS_IntType_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 1166 "ml_string_switch.m"
    {
#line 1166 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_97_97, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_38));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_97_97, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_18));
#line 1166 "ml_string_switch.m"
    }
#line 1166 "ml_string_switch.m"
    {
#line 1166 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_96_96, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_38));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_96_96, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_97_97));
#line 1166 "ml_string_switch.m"
    }
#line 1166 "ml_string_switch.m"
    {
#line 1166 "ml_string_switch.m"
      ml_backend__ml_string_switch__FirstSolnFieldTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_39, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_37));
#line 1166 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_39, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_96_96));
#line 1166 "ml_string_switch.m"
    }
#line 1170 "ml_string_switch.m"
    {
#line 1170 "ml_string_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_1[3], ml_backend__ml_string_switch__CaseSolns0_16, &ml_backend__ml_string_switch__CaseSolns_41);
    }
#line 1171 "ml_string_switch.m"
    {
#line 1171 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_94_94, &ml_backend__ml_string_switch__GlobalData0_42);
    }
#line 1172 "ml_string_switch.m"
    {
#line 1172 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__MLDS_Context_20, ml_backend__ml_string_switch__Target_27, ml_backend__ml_string_switch__FirstSolnFieldTypes_39, &ml_backend__ml_string_switch__FirstSolnStructTypeNum_43, &ml_backend__ml_string_switch__FirstSolnStructType_44, &ml_backend__ml_string_switch__FirstSolnFieldIds_45, ml_backend__ml_string_switch__GlobalData0_42, &ml_backend__ml_string_switch__GlobalData1_46);
    }
#line 1175 "ml_string_switch.m"
    {
#line 1175 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__MLDS_Context_20, ml_backend__ml_string_switch__Target_27, ml_backend__ml_string_switch__OutTypes_18, &ml_backend__ml_string_switch__LaterSolnStructTypeNum_47, &ml_backend__ml_string_switch__LaterSolnStructType_48, &ml_backend__ml_string_switch__LaterSolnFieldIds_49, ml_backend__ml_string_switch__GlobalData1_46, &ml_backend__ml_string_switch__GlobalData2_50);
    }
#line 1179 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FirstSolnFieldIds_45)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 1179 "ml_string_switch.m"
      {
#line 1179 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldIdPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_45, (MR_Integer) 0)));
#line 1179 "ml_string_switch.m"
        ml_backend__ml_string_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_45, (MR_Integer) 1)));
#line 1179 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 1179 "ml_string_switch.m"
          {
#line 1179 "ml_string_switch.m"
            ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_98_98, (MR_Integer) 0)));
#line 1179 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_98_98, (MR_Integer) 1)));
#line 1180 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 1180 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 1180 "ml_string_switch.m"
              {
#line 1180 "ml_string_switch.m"
                ml_backend__ml_string_switch__FirstLaterRowFieldIdPrime_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_99_99, (MR_Integer) 0)));
#line 1180 "ml_string_switch.m"
                ml_backend__ml_string_switch__FirstSolnArgIdsPrime_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_99_99, (MR_Integer) 1)));
#line 1180 "ml_string_switch.m"
              }
#line 1179 "ml_string_switch.m"
          }
#line 1179 "ml_string_switch.m"
      }
#line 1186 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 1182 "ml_string_switch.m"
      {
#line 1182 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldId_55 = ml_backend__ml_string_switch__StringFieldIdPrime_51;
#line 1183 "ml_string_switch.m"
        ml_backend__ml_string_switch__NumLaterSolnsFieldId_56 = ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_52;
#line 1184 "ml_string_switch.m"
        ml_backend__ml_string_switch__FirstLaterRowFieldId_57 = ml_backend__ml_string_switch__FirstLaterRowFieldIdPrime_53;
#line 1185 "ml_string_switch.m"
        ml_backend__ml_string_switch__FirstSolnArgIds_58 = ml_backend__ml_string_switch__FirstSolnArgIdsPrime_54;
#line 1182 "ml_string_switch.m"
      }
#line 1186 "ml_string_switch.m"
    else
#line 1187 "ml_string_switch.m"
      {
#line 1187 "ml_string_switch.m"
        {
#line 1187 "ml_string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_several_soln_lookup_switch\'/12", (MR_String) "bad FieldIds");
#line 1187 "ml_string_switch.m"
          return;
        }
#line 1187 "ml_string_switch.m"
      }
#line 6526 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_132_132 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 1192 "ml_string_switch.m"
    {
#line 1192 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_104_104 = mercury__cord__init_0_f_0(ml_backend__ml_string_switch__TypeCtorInfo_132_132);
    }
#line 1189 "ml_string_switch.m"
    {
#line 1189 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_several_lookup_initializers_10_p_0(ml_backend__ml_string_switch__CaseSolns_41, ml_backend__ml_string_switch__FirstSolnStructType_44, ml_backend__ml_string_switch__LaterSolnStructType_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevFirstSolnRowInitializers_59, ml_backend__ml_string_switch__V_104_104, &ml_backend__ml_string_switch__LaterSolnRowInitializersCord_60, (MR_Integer) 0, &ml_backend__ml_string_switch__FirstSolnTableSize_61, (MR_Integer) 0);
    }
#line 1194 "ml_string_switch.m"
    {
#line 1194 "ml_string_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_132_132, ml_backend__ml_string_switch__RevFirstSolnRowInitializers_59, &ml_backend__ml_string_switch__FirstSolnRowInitializers_62);
    }
#line 1195 "ml_string_switch.m"
    {
#line 1195 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterSolnRowInitializers_63 = mercury__cord__list_1_f_0(ml_backend__ml_string_switch__TypeCtorInfo_132_132, ml_backend__ml_string_switch__LaterSolnRowInitializersCord_60);
    }
#line 1196 "ml_string_switch.m"
    {
#line 1196 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__FirstSolnStructTypeNum_43, ml_backend__ml_string_switch__FirstSolnRowInitializers_62, &ml_backend__ml_string_switch__FirstSolnVectorCommon_64, ml_backend__ml_string_switch__GlobalData2_50, &ml_backend__ml_string_switch__GlobalData3_65);
    }
#line 1199 "ml_string_switch.m"
    {
#line 1199 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__LaterSolnStructTypeNum_47, ml_backend__ml_string_switch__LaterSolnRowInitializers_63, &ml_backend__ml_string_switch__LaterSolnVectorCommon_66, ml_backend__ml_string_switch__GlobalData3_65, &ml_backend__ml_string_switch__GlobalData_67);
    }
#line 1202 "ml_string_switch.m"
    {
#line 1202 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_67, ml_backend__ml_string_switch__STATE_VARIABLE_Info_94_94, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_107_107);
    }
#line 1204 "ml_string_switch.m"
    {
#line 1204 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_8_p_0(ml_backend__ml_string_switch__CodeModel_14, ml_backend__ml_string_switch__CanFail_15, ml_backend__ml_string_switch__Context_19, ml_backend__ml_string_switch__MLDS_Context_20, ml_backend__ml_string_switch__Var_13, &ml_backend__ml_string_switch__BinarySearchInfo_68, ml_backend__ml_string_switch__STATE_VARIABLE_Info_107_107, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_108_108);
    }
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 0)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 1)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoVarLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 2)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___HiVarLval_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 3)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch__MidVarLval_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 4)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___ResultVarLval_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 5)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopLval_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 6)));
#line 1206 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 7)));
#line 1206 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_68, (MR_Integer) 8)));
#line 1209 "ml_string_switch.m"
    {
#line 1209 "ml_string_switch.m"
      ml_backend__ml_string_switch__MidVarRval_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MidVarRval_77, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_73));
#line 1209 "ml_string_switch.m"
    }
#line 1211 "ml_string_switch.m"
    {
#line 1211 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_string_switch__NumLaterSolnsVarLval_29, ml_backend__ml_string_switch__MLDS_IntType_38, ml_backend__ml_string_switch__NumLaterSolnsFieldId_56, ml_backend__ml_string_switch__FirstSolnVectorCommon_64, ml_backend__ml_string_switch__FirstSolnStructType_44, ml_backend__ml_string_switch__MidVarRval_77, ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_78, ml_backend__ml_string_switch__STATE_VARIABLE_Info_108_108, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109);
    }
#line 1215 "ml_string_switch.m"
    {
#line 1215 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_string_switch__LaterSlotVarLval_30, ml_backend__ml_string_switch__MLDS_IntType_38, ml_backend__ml_string_switch__FirstLaterRowFieldId_57, ml_backend__ml_string_switch__FirstSolnVectorCommon_64, ml_backend__ml_string_switch__FirstSolnStructType_44, ml_backend__ml_string_switch__MidVarRval_77, ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__LaterSlotVarAssignStatement_79, ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_110_110);
    }
#line 1219 "ml_string_switch.m"
    {
#line 1219 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_17, ml_backend__ml_string_switch__OutTypes_18, ml_backend__ml_string_switch__FirstSolnArgIds_58, ml_backend__ml_string_switch__FirstSolnVectorCommon_64, ml_backend__ml_string_switch__FirstSolnStructType_44, ml_backend__ml_string_switch__MidVarRval_77, ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__FirstSolnLookupStatements_80, ml_backend__ml_string_switch__STATE_VARIABLE_Info_110_110, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_111_111);
    }
#line 1222 "ml_string_switch.m"
    {
#line 1222 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_17, ml_backend__ml_string_switch__OutTypes_18, ml_backend__ml_string_switch__LaterSolnFieldIds_49, ml_backend__ml_string_switch__LaterSolnVectorCommon_66, ml_backend__ml_string_switch__LaterSolnStructType_48, ml_backend__ml_string_switch__LaterSlotVarRval_35, ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__LaterSolnLookupStatements_81, ml_backend__ml_string_switch__STATE_VARIABLE_Info_111_111, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_112_112);
    }
#line 1226 "ml_string_switch.m"
    {
#line 1226 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_string_switch__Context_19, &ml_backend__ml_string_switch__CallContStatement_82, ml_backend__ml_string_switch__STATE_VARIABLE_Info_112_112, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_113_113);
    }
#line 6619 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_133_133 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 1228 "ml_string_switch.m"
    {
#line 1228 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_116_116, 0) = ((MR_Box) (ml_backend__ml_string_switch__CallContStatement_82));
#line 1228 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "ml_string_switch.m"
    }
#line 1228 "ml_string_switch.m"
    {
#line 1228 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_115_115 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_133_133, ml_backend__ml_string_switch__FirstSolnLookupStatements_80, ml_backend__ml_string_switch__V_116_116);
    }
#line 1227 "ml_string_switch.m"
    {
#line 1227 "ml_string_switch.m"
      ml_backend__ml_string_switch__FirstLookupSucceedStmt_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStmt_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStmt_83, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_115_115));
#line 1227 "ml_string_switch.m"
    }
#line 1229 "ml_string_switch.m"
    {
#line 1229 "ml_string_switch.m"
      ml_backend__ml_string_switch__FirstLookupSucceedStatement_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStatement_84, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLookupSucceedStmt_83));
#line 1229 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStatement_84, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_20));
#line 1229 "ml_string_switch.m"
    }
#line 1234 "ml_string_switch.m"
    {
#line 1234 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_121_121, 0) = ((MR_Box) (ml_backend__ml_string_switch__IncrLaterSlotVarStatement_33));
#line 1234 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "ml_string_switch.m"
    }
#line 1234 "ml_string_switch.m"
    {
#line 1234 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_120_120, 0) = ((MR_Box) (ml_backend__ml_string_switch__CallContStatement_82));
#line 1234 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_120_120, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_121_121));
#line 1234 "ml_string_switch.m"
    }
#line 1233 "ml_string_switch.m"
    {
#line 1233 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_119_119 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_133_133, ml_backend__ml_string_switch__LaterSolnLookupStatements_81, ml_backend__ml_string_switch__V_120_120);
    }
#line 1232 "ml_string_switch.m"
    {
#line 1232 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterLookupSucceedStmt_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStmt_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStmt_85, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_119_119));
#line 1232 "ml_string_switch.m"
    }
#line 1235 "ml_string_switch.m"
    {
#line 1235 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterLookupSucceedStatement_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStatement_86, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterLookupSucceedStmt_85));
#line 1235 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStatement_86, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_20));
#line 1235 "ml_string_switch.m"
    }
#line 1238 "ml_string_switch.m"
    {
#line 1238 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopCond_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1238 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 1238 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_87, 2) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarRval_35));
#line 1238 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_87, 3) = ((MR_Box) (ml_backend__ml_string_switch__LimitVarRval_36));
#line 1238 "ml_string_switch.m"
    }
#line 1239 "ml_string_switch.m"
    {
#line 1239 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopStmt_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_88, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1239 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_88, 1) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopCond_87));
#line 1239 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_88, 2) = ((MR_Box) (ml_backend__ml_string_switch__LaterLookupSucceedStatement_86));
#line 1239 "ml_string_switch.m"
    }
#line 1241 "ml_string_switch.m"
    {
#line 1241 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopStatement_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__MoreSolnsLoopStatement_89, 0) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopStmt_88));
#line 1241 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__MoreSolnsLoopStatement_89, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_20));
#line 1241 "ml_string_switch.m"
    }
#line 1247 "ml_string_switch.m"
    {
#line 1247 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_128_128, 0) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopStatement_89));
#line 1247 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1247 "ml_string_switch.m"
    }
#line 1245 "ml_string_switch.m"
    {
#line 1245 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_127_127, 0) = ((MR_Box) (ml_backend__ml_string_switch__LimitAssignStatement_32));
#line 1245 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_127_127, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_128_128));
#line 1245 "ml_string_switch.m"
    }
#line 1245 "ml_string_switch.m"
    {
#line 1245 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_126_126, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarAssignStatement_79));
#line 1245 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_126_126, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_127_127));
#line 1245 "ml_string_switch.m"
    }
#line 1244 "ml_string_switch.m"
    {
#line 1244 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_125_125, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLookupSucceedStatement_84));
#line 1244 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_125_125, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_126_126));
#line 1244 "ml_string_switch.m"
    }
#line 1244 "ml_string_switch.m"
    {
#line 1244 "ml_string_switch.m"
      ml_backend__ml_string_switch__MatchStatements_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MatchStatements_90, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_78));
#line 1244 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MatchStatements_90, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_125_125));
#line 1244 "ml_string_switch.m"
    }
#line 1251 "ml_string_switch.m"
    {
#line 1251 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(ml_backend__ml_string_switch__MLDS_Context_20, (MR_String) "binary string several soln lookup switch", ml_backend__ml_string_switch__BinarySearchInfo_68, ml_backend__ml_string_switch__FirstSolnVectorCommon_64, ml_backend__ml_string_switch__FirstSolnTableSize_61, ml_backend__ml_string_switch__FirstSolnStructType_44, ml_backend__ml_string_switch__StringFieldId_55, ml_backend__ml_string_switch__MatchDefns_34, ml_backend__ml_string_switch__MatchStatements_90, ml_backend__ml_string_switch__Statements_22, ml_backend__ml_string_switch__STATE_VARIABLE_Info_113_113, ml_backend__ml_string_switch__STATE_VARIABLE_Info_93);
#line 1251 "ml_string_switch.m"
      return;
    }
#line 1150 "ml_string_switch.m"
  }
#line 1140 "ml_string_switch.m"
}

#line 1132 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0_1(
#line 1132 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 1132 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 1132 "ml_string_switch.m"
{
#line 1132 "ml_string_switch.m"
  {
#line 1132 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 1132 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 1132 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__2_2;

#line 1132 "ml_string_switch.m"
    {
#line 1132 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 1132 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__2_2));
#line 1132 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 1132 "ml_string_switch.m"
  }
#line 1132 "ml_string_switch.m"
}

#line 1121 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1121 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3,
#line 1121 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4,
#line 1121 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5,
#line 1121 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6)
#line 1121 "ml_string_switch.m"
{
#line 1126 "ml_string_switch.m"
  while (MR_TRUE)
#line 1126 "ml_string_switch.m"
    {
#line 1126 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 1126 "ml_string_switch.m"
      {
#line 1126 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded;

#line 1126 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "ml_string_switch.m"
          {
#line 1127 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5;
#line 1127 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3;
#line 1126 "ml_string_switch.m"
          }
#line 1126 "ml_string_switch.m"
        else
#line 1129 "ml_string_switch.m"
          {
#line 1129 "ml_string_switch.m"
            MR_String ml_backend__ml_string_switch__Str_14;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Rvals_15;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrRvals_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrRval_20;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__RowInitializer_21;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_27_27;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_28_28;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_29_29;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_30_30;
#line 1129 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_32_32;
#line 1129 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_33_33;

#line 1128 "ml_string_switch.m"
            ml_backend__ml_string_switch__Str_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, (MR_Integer) 0)));
#line 1128 "ml_string_switch.m"
            ml_backend__ml_string_switch__Rvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, (MR_Integer) 1)));
#line 1130 "ml_string_switch.m"
            {
#line 1130 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1130 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_27_27, 1) = ((MR_Box) (ml_backend__ml_string_switch__Str_14));
#line 1130 "ml_string_switch.m"
            }
#line 1130 "ml_string_switch.m"
            {
#line 1130 "ml_string_switch.m"
              ml_backend__ml_string_switch__StrRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1130 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_20, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_27_27));
#line 1130 "ml_string_switch.m"
            }
#line 1132 "ml_string_switch.m"
            {
#line 1132 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_29_29, 0) = ((MR_Box) (ml_backend__ml_string_switch__StrRval_20));
#line 1132 "ml_string_switch.m"
            }
#line 1132 "ml_string_switch.m"
            {
#line 1132 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_30_30 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[15], ml_backend__ml_string_switch__Rvals_15);
            }
#line 1132 "ml_string_switch.m"
            {
#line 1132 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_28_28, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_29_29));
#line 1132 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_28_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_30_30));
#line 1132 "ml_string_switch.m"
            }
#line 1131 "ml_string_switch.m"
            {
#line 1131 "ml_string_switch.m"
              ml_backend__ml_string_switch__RowInitializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_21, 0) = ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_2));
#line 1131 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_21, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_28_28));
#line 1131 "ml_string_switch.m"
            }
#line 1133 "ml_string_switch.m"
            {
#line 1133 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_32_32, 0) = ((MR_Box) (ml_backend__ml_string_switch__RowInitializer_21));
#line 1133 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_32_32, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3));
#line 1133 "ml_string_switch.m"
            }
#line 1134 "ml_string_switch.m"
            ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_33_33 = (ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5 + (MR_Integer) 1);
#line 1135 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 1135 "ml_string_switch.m"
            {
#line 1135 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_string_switch__StrRvals_16;
#line 1135 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_3 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_32_32;
#line 1135 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_5 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_33_33;

#line 1135 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_5;
#line 1135 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_3;
#line 1135 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1;
#line 1135 "ml_string_switch.m"
            }
#line 1135 "ml_string_switch.m"
            continue;
#line 1129 "ml_string_switch.m"
          }
#line 1126 "ml_string_switch.m"
      }
#line 1126 "ml_string_switch.m"
      break;
#line 1126 "ml_string_switch.m"
    }
#line 1121 "ml_string_switch.m"
}

#line 1054 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_12_p_0(
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_13,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_14,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_15,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseValues0_16,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_17,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_18,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_19,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_20,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_21,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_22,
#line 1054 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59,
#line 1054 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_60)
#line 1054 "ml_string_switch.m"
{
#line 1064 "ml_string_switch.m"
  {
#line 1064 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_24;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_25;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_26;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_27;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_28;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ArgTypes_29;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseValues_30;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_31;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructTypeNum_32;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructType_33;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FieldIds_34;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_35;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_38;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutFieldIds_39;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevRowInitializers_40;
#line 1064 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__TableSize_41;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RowInitializers_42;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VectorCommon_43;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_44;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__BinarySearchInfo_45;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarLval_50;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarRval_54;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GetArgStatements_55;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MatchStatements_56;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_61_61;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_67_67;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_68_68;
#line 1064 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69;
#line 1082 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_36;
#line 1082 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutFieldIdsPrime_37;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_46;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_47;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoVarLval_48;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___HiVarLval_49;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___ResultVarLval_51;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopLval_52;
#line 1094 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_53;

#line 1065 "ml_string_switch.m"
    {
#line 1065 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59, &ml_backend__ml_string_switch__ModuleInfo_24);
    }
#line 1066 "ml_string_switch.m"
    {
#line 1066 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_24, &ml_backend__ml_string_switch__ModuleName_25);
    }
#line 1067 "ml_string_switch.m"
    {
#line 1067 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_25);
    }
#line 1068 "ml_string_switch.m"
    {
#line 1068 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59, &ml_backend__ml_string_switch__Target_27);
    }
#line 1070 "ml_string_switch.m"
    {
#line 1070 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_61_61 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 1070 "ml_string_switch.m"
    {
#line 1070 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_28 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_24, ml_backend__ml_string_switch__V_61_61);
    }
#line 1071 "ml_string_switch.m"
    {
#line 1071 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ArgTypes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_29, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_28));
#line 1071 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_29, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_18));
#line 1071 "ml_string_switch.m"
    }
#line 1074 "ml_string_switch.m"
    {
#line 1074 "ml_string_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_1[2], ml_backend__ml_string_switch__CaseValues0_16, &ml_backend__ml_string_switch__CaseValues_30);
    }
#line 1075 "ml_string_switch.m"
    {
#line 1075 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59, &ml_backend__ml_string_switch__GlobalData0_31);
    }
#line 1076 "ml_string_switch.m"
    {
#line 1076 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__MLDS_Context_20, ml_backend__ml_string_switch__Target_27, ml_backend__ml_string_switch__MLDS_ArgTypes_29, &ml_backend__ml_string_switch__StructTypeNum_32, &ml_backend__ml_string_switch__StructType_33, &ml_backend__ml_string_switch__FieldIds_34, ml_backend__ml_string_switch__GlobalData0_31, &ml_backend__ml_string_switch__GlobalData1_35);
    }
#line 1079 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_34)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 1079 "ml_string_switch.m"
      {
#line 1079 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldIdPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_34, (MR_Integer) 0)));
#line 1079 "ml_string_switch.m"
        ml_backend__ml_string_switch__OutFieldIdsPrime_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_34, (MR_Integer) 1)));
#line 1080 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldId_38 = ml_backend__ml_string_switch__StringFieldIdPrime_36;
#line 1081 "ml_string_switch.m"
        ml_backend__ml_string_switch__OutFieldIds_39 = ml_backend__ml_string_switch__OutFieldIdsPrime_37;
#line 1079 "ml_string_switch.m"
      }
#line 1079 "ml_string_switch.m"
    else
#line 1083 "ml_string_switch.m"
      {
#line 1083 "ml_string_switch.m"
        {
#line 1083 "ml_string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/12", (MR_String) "bad FieldIds");
#line 1083 "ml_string_switch.m"
          return;
        }
#line 1083 "ml_string_switch.m"
      }
#line 1085 "ml_string_switch.m"
    {
#line 1085 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_simple_lookup_initializers_6_p_0(ml_backend__ml_string_switch__CaseValues_30, ml_backend__ml_string_switch__StructType_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevRowInitializers_40, (MR_Integer) 0, &ml_backend__ml_string_switch__TableSize_41);
    }
#line 1087 "ml_string_switch.m"
    {
#line 1087 "ml_string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_string_switch__RevRowInitializers_40, &ml_backend__ml_string_switch__RowInitializers_42);
    }
#line 1088 "ml_string_switch.m"
    {
#line 1088 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_26, ml_backend__ml_string_switch__StructTypeNum_32, ml_backend__ml_string_switch__RowInitializers_42, &ml_backend__ml_string_switch__VectorCommon_43, ml_backend__ml_string_switch__GlobalData1_35, &ml_backend__ml_string_switch__GlobalData_44);
    }
#line 1090 "ml_string_switch.m"
    {
#line 1090 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_44, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_59, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_67_67);
    }
#line 1092 "ml_string_switch.m"
    {
#line 1092 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_8_p_0(ml_backend__ml_string_switch__CodeModel_14, ml_backend__ml_string_switch__CanFail_15, ml_backend__ml_string_switch__Context_19, ml_backend__ml_string_switch__MLDS_Context_20, ml_backend__ml_string_switch__Var_13, &ml_backend__ml_string_switch__BinarySearchInfo_45, ml_backend__ml_string_switch__STATE_VARIABLE_Info_67_67, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_68_68);
    }
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 0)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 1)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoVarLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 2)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___HiVarLval_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 3)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch__MidVarLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 4)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___ResultVarLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 5)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 6)));
#line 1094 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 7)));
#line 1094 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_45, (MR_Integer) 8)));
#line 1097 "ml_string_switch.m"
    {
#line 1097 "ml_string_switch.m"
      ml_backend__ml_string_switch__MidVarRval_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MidVarRval_54, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_50));
#line 1097 "ml_string_switch.m"
    }
#line 1099 "ml_string_switch.m"
    {
#line 1099 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_17, ml_backend__ml_string_switch__OutTypes_18, ml_backend__ml_string_switch__OutFieldIds_39, ml_backend__ml_string_switch__VectorCommon_43, ml_backend__ml_string_switch__StructType_33, ml_backend__ml_string_switch__MidVarRval_54, ml_backend__ml_string_switch__MLDS_Context_20, &ml_backend__ml_string_switch__GetArgStatements_55, ml_backend__ml_string_switch__STATE_VARIABLE_Info_68_68, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69);
    }
#line 1105 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__CodeModel_14 == (MR_Integer) 0))
#line 1104 "ml_string_switch.m"
      ml_backend__ml_string_switch__MatchStatements_56 = ml_backend__ml_string_switch__GetArgStatements_55;
#line 1105 "ml_string_switch.m"
    else
#line 1105 "ml_string_switch.m"
      if ((ml_backend__ml_string_switch__CodeModel_14 == (MR_Integer) 2))
#line 1111 "ml_string_switch.m"
        {
#line 1112 "ml_string_switch.m"
          {
#line 1112 "ml_string_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_simple_lookup_switch\'/12", (MR_String) "model_non");
#line 1112 "ml_string_switch.m"
            return;
          }
#line 1111 "ml_string_switch.m"
        }
#line 1105 "ml_string_switch.m"
      else
#line 1106 "ml_string_switch.m"
        {
#line 1106 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__SetSuccessTrueStatement_57;
#line 1106 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__V_75_75;

#line 1107 "ml_string_switch.m"
          {
#line 1107 "ml_string_switch.m"
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[14]), ml_backend__ml_string_switch__Context_19, &ml_backend__ml_string_switch__SetSuccessTrueStatement_57);
          }
#line 1109 "ml_string_switch.m"
          {
#line 1109 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_string_switch__SetSuccessTrueStatement_57));
#line 1109 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "ml_string_switch.m"
          }
#line 1109 "ml_string_switch.m"
          {
#line 1109 "ml_string_switch.m"
            ml_backend__ml_string_switch__MatchStatements_56 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__GetArgStatements_55, ml_backend__ml_string_switch__V_75_75);
          }
#line 1106 "ml_string_switch.m"
        }
#line 1117 "ml_string_switch.m"
    {
#line 1117 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(ml_backend__ml_string_switch__MLDS_Context_20, (MR_String) "binary string simple lookup switch", ml_backend__ml_string_switch__BinarySearchInfo_45, ml_backend__ml_string_switch__VectorCommon_43, ml_backend__ml_string_switch__TableSize_41, ml_backend__ml_string_switch__StructType_33, ml_backend__ml_string_switch__StringFieldId_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MatchStatements_56, ml_backend__ml_string_switch__Statements_22, ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69, ml_backend__ml_string_switch__STATE_VARIABLE_Info_60);
#line 1117 "ml_string_switch.m"
      return;
    }
#line 1064 "ml_string_switch.m"
  }
#line 1054 "ml_string_switch.m"
}

#line 1019 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(
#line 1019 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1019 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0_2,
#line 1019 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_3)
#line 1019 "ml_string_switch.m"
{
#line 1022 "ml_string_switch.m"
  while (MR_TRUE)
#line 1022 "ml_string_switch.m"
    {
#line 1022 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 1022 "ml_string_switch.m"
      {
#line 1022 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded;

#line 1022 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "ml_string_switch.m"
          *ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_3 = ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0_2;
#line 1022 "ml_string_switch.m"
        else
#line 1024 "ml_string_switch.m"
          {
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__CaseNumStmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__CaseNumsStmts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1024 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__CaseNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseNumStmt_7, (MR_Integer) 0)));
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseNumStmt_7, (MR_Integer) 1)));
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__MatchCond_12;
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__SwitchCase_13;
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_16_16;
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_17_17;
#line 1024 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_19_19;

#line 1026 "ml_string_switch.m"
            {
#line 1026 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_17_17, 0) = ((MR_Box) (ml_backend__ml_string_switch__CaseNum_10));
#line 1026 "ml_string_switch.m"
            }
#line 1026 "ml_string_switch.m"
            {
#line 1026 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1026 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_16_16, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_17_17));
#line 1026 "ml_string_switch.m"
            }
#line 1026 "ml_string_switch.m"
            {
#line 1026 "ml_string_switch.m"
              ml_backend__ml_string_switch__MatchCond_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__MatchCond_12, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_16_16));
#line 1026 "ml_string_switch.m"
            }
#line 1027 "ml_string_switch.m"
            {
#line 1027 "ml_string_switch.m"
              ml_backend__ml_string_switch__SwitchCase_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SwitchCase_13, 0) = ((MR_Box) (ml_backend__ml_string_switch__MatchCond_12));
#line 1027 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SwitchCase_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SwitchCase_13, 2) = ((MR_Box) (ml_backend__ml_string_switch__Statement_11));
#line 1027 "ml_string_switch.m"
            }
#line 1028 "ml_string_switch.m"
            {
#line 1028 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_19_19, 0) = ((MR_Box) (ml_backend__ml_string_switch__SwitchCase_13));
#line 1028 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_19_19, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0_2));
#line 1028 "ml_string_switch.m"
            }
#line 1029 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 1029 "ml_string_switch.m"
            {
#line 1029 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_string_switch__CaseNumsStmts_8;
#line 1029 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0__tmp_copy_2 = ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_19_19;

#line 1029 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0_2 = ml_backend__ml_string_switch__STATE_VARIABLE_SwitchCases_0__tmp_copy_2;
#line 1029 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1;
#line 1029 "ml_string_switch.m"
            }
#line 1029 "ml_string_switch.m"
            continue;
#line 1024 "ml_string_switch.m"
          }
#line 1022 "ml_string_switch.m"
      }
#line 1022 "ml_string_switch.m"
      break;
#line 1022 "ml_string_switch.m"
    }
#line 1019 "ml_string_switch.m"
}

#line 1001 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 1001 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3,
#line 1001 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4,
#line 1001 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5,
#line 1001 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6)
#line 1001 "ml_string_switch.m"
{
#line 1006 "ml_string_switch.m"
  while (MR_TRUE)
#line 1006 "ml_string_switch.m"
    {
#line 1006 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 1006 "ml_string_switch.m"
      {
#line 1006 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded;

#line 1006 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "ml_string_switch.m"
          {
#line 1007 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_6 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5;
#line 1007 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_4 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3;
#line 1006 "ml_string_switch.m"
          }
#line 1006 "ml_string_switch.m"
        else
#line 1009 "ml_string_switch.m"
          {
#line 1009 "ml_string_switch.m"
            MR_String ml_backend__ml_string_switch__Str_14;
#line 1009 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__CaseNum_15;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrCaseNums_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StrRval_20;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__CaseNumRval_21;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__RowInitializer_22;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_28_28;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_29_29;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_30_30;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_31_31;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_32_32;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_33_33;
#line 1009 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_35_35;
#line 1009 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_36_36;

#line 1008 "ml_string_switch.m"
            ml_backend__ml_string_switch__Str_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, (MR_Integer) 0)));
#line 1008 "ml_string_switch.m"
            ml_backend__ml_string_switch__CaseNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, (MR_Integer) 1)));
#line 1010 "ml_string_switch.m"
            {
#line 1010 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1010 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_28_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__Str_14));
#line 1010 "ml_string_switch.m"
            }
#line 1010 "ml_string_switch.m"
            {
#line 1010 "ml_string_switch.m"
              ml_backend__ml_string_switch__StrRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1010 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StrRval_20, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_28_28));
#line 1010 "ml_string_switch.m"
            }
#line 1011 "ml_string_switch.m"
            {
#line 1011 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_29_29, 0) = ((MR_Box) (ml_backend__ml_string_switch__CaseNum_15));
#line 1011 "ml_string_switch.m"
            }
#line 1011 "ml_string_switch.m"
            {
#line 1011 "ml_string_switch.m"
              ml_backend__ml_string_switch__CaseNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CaseNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1011 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__CaseNumRval_21, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_29_29));
#line 1011 "ml_string_switch.m"
            }
#line 1013 "ml_string_switch.m"
            {
#line 1013 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_31_31, 0) = ((MR_Box) (ml_backend__ml_string_switch__StrRval_20));
#line 1013 "ml_string_switch.m"
            }
#line 1013 "ml_string_switch.m"
            {
#line 1013 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_33_33, 0) = ((MR_Box) (ml_backend__ml_string_switch__CaseNumRval_21));
#line 1013 "ml_string_switch.m"
            }
#line 1013 "ml_string_switch.m"
            {
#line 1013 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_32_32, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_33_33));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "ml_string_switch.m"
            }
#line 1013 "ml_string_switch.m"
            {
#line 1013 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_30_30, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_31_31));
#line 1013 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_32_32));
#line 1013 "ml_string_switch.m"
            }
#line 1012 "ml_string_switch.m"
            {
#line 1012 "ml_string_switch.m"
              ml_backend__ml_string_switch__RowInitializer_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_22, 0) = ((MR_Box) (ml_backend__ml_string_switch__HeadVar__2_2));
#line 1012 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_22, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_30_30));
#line 1012 "ml_string_switch.m"
            }
#line 1014 "ml_string_switch.m"
            {
#line 1014 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_35_35, 0) = ((MR_Box) (ml_backend__ml_string_switch__RowInitializer_22));
#line 1014 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_35_35, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3));
#line 1014 "ml_string_switch.m"
            }
#line 1015 "ml_string_switch.m"
            ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_36_36 = (ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5 + (MR_Integer) 1);
#line 1016 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 1016 "ml_string_switch.m"
            {
#line 1016 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_string_switch__StrCaseNums_16;
#line 1016 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_3 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_35_35;
#line 1016 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_5 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_36_36;

#line 1016 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0_5 = ml_backend__ml_string_switch__STATE_VARIABLE_CurIndex_0__tmp_copy_5;
#line 1016 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_3 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_3;
#line 1016 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__1_1 = ml_backend__ml_string_switch__HeadVar__1__tmp_copy_1;
#line 1016 "ml_string_switch.m"
            }
#line 1016 "ml_string_switch.m"
            continue;
#line 1009 "ml_string_switch.m"
          }
#line 1006 "ml_string_switch.m"
      }
#line 1006 "ml_string_switch.m"
      break;
#line 1006 "ml_string_switch.m"
    }
#line 1001 "ml_string_switch.m"
}

#line 800 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_14_p_0(
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_15,
#line 800 "ml_string_switch.m"
  MR_String ml_backend__ml_string_switch__InitialComment_16,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSearchInfo_17,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashOp_18,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__VectorCommon_19,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_20,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StringFieldId_21,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotFieldId_22,
#line 800 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__HashMask_23,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchDefns_24,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MatchStatements_25,
#line 800 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_26,
#line 800 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_63,
#line 800 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_64)
#line 800 "ml_string_switch.m"
{
#line 810 "ml_string_switch.m"
  {
#line 810 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CodeModel_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoopPresent_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 1)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 2)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 3)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarLval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 4)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeStopLoopVarLval_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 5)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FailStatements_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 6)));
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarRval_37;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarRval_38;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarType_40;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SetupForFailStatements_41;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SuccessStatement_42;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AfterStatements_43;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitialCommentStatement_44;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__PrepareForMatchStatements_45;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FoundMatchCond_46;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LookForMatchPrepareStatements_47;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotTest_48;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitStopLoopVarStatements_49;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__InitSuccessStatements_50;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoopTest_51;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_66_66;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_67_67;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_68_68;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_72_72;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_73_73;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_74_74;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_75_75;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_76_76;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_78_78;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_79_79;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_80_80;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_81_81;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_84_84;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_86_86;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_87_87;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_88_88;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_90_90;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_94_94;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_95_95;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_96_96;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_97_97;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_98_98;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_99_99;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_100_100;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_102_102;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_103_103;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_104_104;
#line 810 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_110_110;
#line 811 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___Defns_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_17, (MR_Integer) 7)));

#line 814 "ml_string_switch.m"
    {
#line 814 "ml_string_switch.m"
      ml_backend__ml_string_switch__SlotVarRval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 814 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SlotVarRval_37, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_32));
#line 814 "ml_string_switch.m"
    }
#line 815 "ml_string_switch.m"
    {
#line 815 "ml_string_switch.m"
      ml_backend__ml_string_switch__StringVarRval_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StringVarRval_38, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringVarLval_33));
#line 815 "ml_string_switch.m"
    }
#line 817 "ml_string_switch.m"
    {
#line 817 "ml_string_switch.m"
      ml_backend__ml_string_switch__StringVarType_40 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    }
#line 819 "ml_string_switch.m"
    {
#line 819 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_wrap_loop_break_12_p_0(ml_backend__ml_string_switch__CodeModel_28, ml_backend__ml_string_switch__LoopPresent_29, ml_backend__ml_string_switch__MLDS_Context_15, ml_backend__ml_string_switch__MaybeStopLoopVarLval_34, ml_backend__ml_string_switch__MatchDefns_24, ml_backend__ml_string_switch__MatchStatements_25, ml_backend__ml_string_switch__FailStatements_35, &ml_backend__ml_string_switch__SetupForFailStatements_41, &ml_backend__ml_string_switch__SuccessStatement_42, &ml_backend__ml_string_switch__AfterStatements_43, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_63, ml_backend__ml_string_switch__STATE_VARIABLE_Info_64);
    }
#line 825 "ml_string_switch.m"
    {
#line 825 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitialComment_16));
#line 825 "ml_string_switch.m"
    }
#line 825 "ml_string_switch.m"
    {
#line 825 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 825 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_67_67));
#line 825 "ml_string_switch.m"
    }
#line 825 "ml_string_switch.m"
    {
#line 825 "ml_string_switch.m"
      ml_backend__ml_string_switch__InitialCommentStatement_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitialCommentStatement_44, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_66_66));
#line 825 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitialCommentStatement_44, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 825 "ml_string_switch.m"
    }
#line 827 "ml_string_switch.m"
    {
#line 827 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[17])));
#line 827 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_68_68, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 827 "ml_string_switch.m"
    }
#line 832 "ml_string_switch.m"
    {
#line 832 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_string_switch__HashOp_18));
#line 832 "ml_string_switch.m"
    }
#line 832 "ml_string_switch.m"
    {
#line 832 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 832 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 832 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_79_79));
#line 832 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_78_78, 2) = ((MR_Box) (ml_backend__ml_string_switch__VarRval_31));
#line 832 "ml_string_switch.m"
    }
#line 833 "ml_string_switch.m"
    {
#line 833 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_81_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 833 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_81_81, 0) = ((MR_Box) (ml_backend__ml_string_switch__HashMask_23));
#line 833 "ml_string_switch.m"
    }
#line 833 "ml_string_switch.m"
    {
#line 833 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 833 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_80_80, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_81_81));
#line 833 "ml_string_switch.m"
    }
#line 831 "ml_string_switch.m"
    {
#line 831 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 831 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 831 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 831 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_78_78));
#line 831 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_76_76, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_80_80));
#line 831 "ml_string_switch.m"
    }
#line 830 "ml_string_switch.m"
    {
#line 830 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_32));
#line 830 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_76_76));
#line 830 "ml_string_switch.m"
    }
#line 830 "ml_string_switch.m"
    {
#line 830 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 830 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_75_75));
#line 830 "ml_string_switch.m"
    }
#line 829 "ml_string_switch.m"
    {
#line 829 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_74_74));
#line 829 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 829 "ml_string_switch.m"
    }
#line 835 "ml_string_switch.m"
    {
#line 835 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_73_73));
#line 835 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 835 "ml_string_switch.m"
    }
#line 828 "ml_string_switch.m"
    {
#line 828 "ml_string_switch.m"
      ml_backend__ml_string_switch__PrepareForMatchStatements_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__PrepareForMatchStatements_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_68_68));
#line 828 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__PrepareForMatchStatements_45, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_72_72));
#line 828 "ml_string_switch.m"
    }
#line 838 "ml_string_switch.m"
    {
#line 838 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_87_87, 1) = ((MR_Box) (ml_backend__ml_string_switch__StringVarType_40));
#line 838 "ml_string_switch.m"
    }
#line 838 "ml_string_switch.m"
    {
#line 838 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_86_86, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_87_87));
#line 838 "ml_string_switch.m"
    }
#line 838 "ml_string_switch.m"
    {
#line 838 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 2) = ((MR_Box) (ml_backend__ml_string_switch__StringVarRval_38));
#line 838 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_86_86));
#line 838 "ml_string_switch.m"
    }
#line 839 "ml_string_switch.m"
    {
#line 839 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 839 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 839 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 839 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_88_88, 2) = ((MR_Box) (ml_backend__ml_string_switch__StringVarRval_38));
#line 839 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_88_88, 3) = ((MR_Box) (ml_backend__ml_string_switch__VarRval_31));
#line 839 "ml_string_switch.m"
    }
#line 837 "ml_string_switch.m"
    {
#line 837 "ml_string_switch.m"
      ml_backend__ml_string_switch__FoundMatchCond_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 837 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FoundMatchCond_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 837 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FoundMatchCond_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 837 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FoundMatchCond_46, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_84_84));
#line 837 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FoundMatchCond_46, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_88_88));
#line 837 "ml_string_switch.m"
    }
#line 842 "ml_string_switch.m"
    {
#line 842 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_90_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[18])));
#line 842 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_90_90, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 842 "ml_string_switch.m"
    }
#line 846 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[1]);
#line 847 "ml_string_switch.m"
    {
#line 847 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 847 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 847 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_102_102, 1) = ((MR_Box) (ml_backend__ml_string_switch__VectorCommon_19));
#line 847 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_102_102, 2) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarRval_37));
#line 847 "ml_string_switch.m"
    }
#line 846 "ml_string_switch.m"
    {
#line 846 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_99_99, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_100_100));
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_99_99, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_102_102));
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_99_99, 2) = ((MR_Box) (ml_backend__ml_string_switch__StringFieldId_21));
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_99_99, 3) = ((MR_Box) (ml_backend__ml_string_switch__StringVarType_40));
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_99_99, 4) = ((MR_Box) (ml_backend__ml_string_switch__StructType_20));
#line 846 "ml_string_switch.m"
    }
#line 846 "ml_string_switch.m"
    {
#line 846 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 846 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_98_98, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_99_99));
#line 846 "ml_string_switch.m"
    }
#line 845 "ml_string_switch.m"
    {
#line 845 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_97_97, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringVarLval_33));
#line 845 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_97_97, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_98_98));
#line 845 "ml_string_switch.m"
    }
#line 845 "ml_string_switch.m"
    {
#line 845 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 845 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_96_96, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_97_97));
#line 845 "ml_string_switch.m"
    }
#line 844 "ml_string_switch.m"
    {
#line 844 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_95_95, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_96_96));
#line 844 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_95_95, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 844 "ml_string_switch.m"
    }
#line 850 "ml_string_switch.m"
    {
#line 850 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 850 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[19])));
#line 850 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_104_104, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 850 "ml_string_switch.m"
    }
#line 852 "ml_string_switch.m"
    {
#line 852 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_103_103, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_104_104));
#line 852 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "ml_string_switch.m"
    }
#line 849 "ml_string_switch.m"
    {
#line 849 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_94_94, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_95_95));
#line 849 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_94_94, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_103_103));
#line 849 "ml_string_switch.m"
    }
#line 843 "ml_string_switch.m"
    {
#line 843 "ml_string_switch.m"
      ml_backend__ml_string_switch__LookForMatchPrepareStatements_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LookForMatchPrepareStatements_47, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_90_90));
#line 843 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LookForMatchPrepareStatements_47, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_94_94));
#line 843 "ml_string_switch.m"
    }
#line 853 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[15]);
#line 853 "ml_string_switch.m"
    {
#line 853 "ml_string_switch.m"
      ml_backend__ml_string_switch__SlotTest_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 853 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SlotTest_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SlotTest_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 853 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SlotTest_48, 2) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarRval_37));
#line 853 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SlotTest_48, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_110_110));
#line 853 "ml_string_switch.m"
    }
#line 859 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__MaybeStopLoopVarLval_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "ml_string_switch.m"
      {
#line 856 "ml_string_switch.m"
        ml_backend__ml_string_switch__InitStopLoopVarStatements_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "ml_string_switch.m"
        ml_backend__ml_string_switch__InitSuccessStatements_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 858 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopTest_51 = ml_backend__ml_string_switch__SlotTest_48;
#line 855 "ml_string_switch.m"
      }
#line 859 "ml_string_switch.m"
    else
#line 860 "ml_string_switch.m"
      {
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StopLoopVarLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopVarLval_34, (MR_Integer) 0)));
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__InitStopLoopVarStatement_53;
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StopLoopTest_55;
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_113_113;
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_114_114;
#line 860 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_123_123;

#line 862 "ml_string_switch.m"
        {
#line 862 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_114_114 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_114_114, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_52));
#line 862 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_114_114, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_110_110));
#line 862 "ml_string_switch.m"
        }
#line 861 "ml_string_switch.m"
        {
#line 861 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 861 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_113_113, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_114_114));
#line 861 "ml_string_switch.m"
        }
#line 861 "ml_string_switch.m"
        {
#line 861 "ml_string_switch.m"
          ml_backend__ml_string_switch__InitStopLoopVarStatement_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitStopLoopVarStatement_53, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_113_113));
#line 861 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__InitStopLoopVarStatement_53, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 861 "ml_string_switch.m"
        }
#line 864 "ml_string_switch.m"
        {
#line 864 "ml_string_switch.m"
          ml_backend__ml_string_switch__InitStopLoopVarStatements_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__InitStopLoopVarStatements_49, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitStopLoopVarStatement_53));
#line 864 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__InitStopLoopVarStatements_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "ml_string_switch.m"
        }
#line 870 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__CodeModel_28 == (MR_Integer) 0))
#line 869 "ml_string_switch.m"
          ml_backend__ml_string_switch__InitSuccessStatements_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "ml_string_switch.m"
        else
#line 870 "ml_string_switch.m"
          if ((ml_backend__ml_string_switch__CodeModel_28 == (MR_Integer) 2))
#line 881 "ml_string_switch.m"
            ml_backend__ml_string_switch__InitSuccessStatements_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "ml_string_switch.m"
          else
#line 871 "ml_string_switch.m"
            {
#line 871 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__InitSuccessStatement_54;

#line 872 "ml_string_switch.m"
              {
#line 872 "ml_string_switch.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_string_switch__STATE_VARIABLE_Info_64, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[20]), ml_backend__ml_string_switch__Context_30, &ml_backend__ml_string_switch__InitSuccessStatement_54);
              }
#line 874 "ml_string_switch.m"
              {
#line 874 "ml_string_switch.m"
                ml_backend__ml_string_switch__InitSuccessStatements_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "ml_string_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__InitSuccessStatements_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitSuccessStatement_54));
#line 874 "ml_string_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__InitSuccessStatements_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "ml_string_switch.m"
              }
#line 871 "ml_string_switch.m"
            }
#line 884 "ml_string_switch.m"
        {
#line 884 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_123_123, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_52));
#line 884 "ml_string_switch.m"
        }
#line 883 "ml_string_switch.m"
        {
#line 883 "ml_string_switch.m"
          ml_backend__ml_string_switch__StopLoopTest_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 883 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 883 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 883 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_55, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_123_123));
#line 883 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StopLoopTest_55, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_110_110));
#line 883 "ml_string_switch.m"
        }
#line 885 "ml_string_switch.m"
        {
#line 885 "ml_string_switch.m"
          ml_backend__ml_string_switch__LoopTest_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 885 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__LoopTest_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 885 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__LoopTest_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 885 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__LoopTest_51, 2) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopTest_55));
#line 885 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__LoopTest_51, 3) = ((MR_Box) (ml_backend__ml_string_switch__SlotTest_48));
#line 885 "ml_string_switch.m"
        }
#line 860 "ml_string_switch.m"
      }
#line 918 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__MaybeNextSlotFieldId_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "ml_string_switch.m"
      {
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeCtorInfo_179_179;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NoLoopCommentStatement_62;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_131_131;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_133_133;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_134_134;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_135_135;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_136_136;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_138_138;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LookForMatchStatement_176;
#line 919 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__SearchStatements_177;

#line 920 "ml_string_switch.m"
        {
#line 920 "ml_string_switch.m"
          ml_backend__ml_string_switch__NoLoopCommentStatement_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NoLoopCommentStatement_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[21])));
#line 920 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NoLoopCommentStatement_62, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 920 "ml_string_switch.m"
        }
#line 923 "ml_string_switch.m"
        {
#line 923 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 923 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_131_131, 0) = ((MR_Box) (ml_backend__ml_string_switch__FoundMatchCond_46));
#line 923 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_131_131, 1) = ((MR_Box) (ml_backend__ml_string_switch__SuccessStatement_42));
#line 923 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_131_131, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "ml_string_switch.m"
        }
#line 922 "ml_string_switch.m"
        {
#line 922 "ml_string_switch.m"
          ml_backend__ml_string_switch__LookForMatchStatement_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookForMatchStatement_176, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_131_131));
#line 922 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookForMatchStatement_176, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 922 "ml_string_switch.m"
        }
#line 8339 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__TypeCtorInfo_179_179 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 927 "ml_string_switch.m"
        {
#line 927 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 0) = ((MR_Box) (ml_backend__ml_string_switch__NoLoopCommentStatement_62));
#line 927 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 1) = ((MR_Box) (ml_backend__ml_string_switch__LookForMatchPrepareStatements_47));
#line 927 "ml_string_switch.m"
        }
#line 928 "ml_string_switch.m"
        {
#line 928 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_136_136, 0) = ((MR_Box) (ml_backend__ml_string_switch__LookForMatchStatement_176));
#line 928 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "ml_string_switch.m"
        }
#line 927 "ml_string_switch.m"
        {
#line 927 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_134_134 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_179_179, ml_backend__ml_string_switch__V_135_135, ml_backend__ml_string_switch__V_136_136);
        }
#line 926 "ml_string_switch.m"
        {
#line 926 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_133_133 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_179_179, ml_backend__ml_string_switch__InitSuccessStatements_50, ml_backend__ml_string_switch__V_134_134);
        }
#line 925 "ml_string_switch.m"
        {
#line 925 "ml_string_switch.m"
          ml_backend__ml_string_switch__SearchStatements_177 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_179_179, ml_backend__ml_string_switch__PrepareForMatchStatements_45, ml_backend__ml_string_switch__V_133_133);
        }
#line 929 "ml_string_switch.m"
        {
#line 929 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_138_138, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitialCommentStatement_44));
#line 929 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_138_138, 1) = ((MR_Box) (ml_backend__ml_string_switch__SearchStatements_177));
#line 929 "ml_string_switch.m"
        }
#line 929 "ml_string_switch.m"
        {
#line 929 "ml_string_switch.m"
          *ml_backend__ml_string_switch__Statements_26 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_179_179, ml_backend__ml_string_switch__V_138_138, ml_backend__ml_string_switch__AfterStatements_43);
        }
#line 919 "ml_string_switch.m"
      }
#line 918 "ml_string_switch.m"
    else
#line 888 "ml_string_switch.m"
      {
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TypeCtorInfo_178_178;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NextSlotFieldId_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeNextSlotFieldId_22, (MR_Integer) 0)));
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NoMatchStatement_57;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LookForMatchStatement_58;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LoopBody_59;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__LoopStatements_60;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__SearchStatements_61;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_139_139;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_141_141;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_142_142;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_146_146;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_147_147;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_148_148;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_149_149;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_150_150;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_151_151;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_156_156;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_157_157;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_158_158;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_160_160;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_161_161;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_163_163;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_167_167;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_168_168;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_169_169;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_172_172;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_173_173;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_174_174;
#line 888 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_175_175;

#line 890 "ml_string_switch.m"
        {
#line 890 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[22])));
#line 890 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_142_142, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 890 "ml_string_switch.m"
        }
#line 895 "ml_string_switch.m"
        {
#line 895 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_151_151, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_100_100));
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_151_151, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_102_102));
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_151_151, 2) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotFieldId_56));
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_151_151, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_151_151, 4) = ((MR_Box) (ml_backend__ml_string_switch__StructType_20));
#line 895 "ml_string_switch.m"
        }
#line 895 "ml_string_switch.m"
        {
#line 895 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_150_150, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_151_151));
#line 895 "ml_string_switch.m"
        }
#line 894 "ml_string_switch.m"
        {
#line 894 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_149_149 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_149_149, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_32));
#line 894 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_149_149, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_150_150));
#line 894 "ml_string_switch.m"
        }
#line 894 "ml_string_switch.m"
        {
#line 894 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 894 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_148_148, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_149_149));
#line 894 "ml_string_switch.m"
        }
#line 893 "ml_string_switch.m"
        {
#line 893 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_147_147, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_148_148));
#line 893 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_147_147, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 893 "ml_string_switch.m"
        }
#line 899 "ml_string_switch.m"
        {
#line 899 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_147_147));
#line 899 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 899 "ml_string_switch.m"
        }
#line 892 "ml_string_switch.m"
        {
#line 892 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_141_141, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_142_142));
#line 892 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_141_141, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_146_146));
#line 892 "ml_string_switch.m"
        }
#line 889 "ml_string_switch.m"
        {
#line 889 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_139_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_139_139, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_141_141));
#line 889 "ml_string_switch.m"
        }
#line 889 "ml_string_switch.m"
        {
#line 889 "ml_string_switch.m"
          ml_backend__ml_string_switch__NoMatchStatement_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NoMatchStatement_57, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_139_139));
#line 889 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NoMatchStatement_57, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 889 "ml_string_switch.m"
        }
#line 902 "ml_string_switch.m"
        {
#line 902 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_157_157, 0) = ((MR_Box) (ml_backend__ml_string_switch__NoMatchStatement_57));
#line 902 "ml_string_switch.m"
        }
#line 901 "ml_string_switch.m"
        {
#line 901 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_156_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 901 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_156_156, 0) = ((MR_Box) (ml_backend__ml_string_switch__FoundMatchCond_46));
#line 901 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_156_156, 1) = ((MR_Box) (ml_backend__ml_string_switch__SuccessStatement_42));
#line 901 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_156_156, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_157_157));
#line 901 "ml_string_switch.m"
        }
#line 900 "ml_string_switch.m"
        {
#line 900 "ml_string_switch.m"
          ml_backend__ml_string_switch__LookForMatchStatement_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookForMatchStatement_58, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_156_156));
#line 900 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookForMatchStatement_58, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 900 "ml_string_switch.m"
        }
#line 8590 "ml_backend.ml_string_switch.c"
        ml_backend__ml_string_switch__TypeCtorInfo_178_178 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 905 "ml_string_switch.m"
        {
#line 905 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_161_161, 0) = ((MR_Box) (ml_backend__ml_string_switch__LookForMatchStatement_58));
#line 905 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "ml_string_switch.m"
        }
#line 905 "ml_string_switch.m"
        {
#line 905 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_160_160 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__LookForMatchPrepareStatements_47, ml_backend__ml_string_switch__V_161_161);
        }
#line 904 "ml_string_switch.m"
        {
#line 904 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_158_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_158_158, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_160_160));
#line 904 "ml_string_switch.m"
        }
#line 904 "ml_string_switch.m"
        {
#line 904 "ml_string_switch.m"
          ml_backend__ml_string_switch__LoopBody_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LoopBody_59, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_158_158));
#line 904 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LoopBody_59, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 904 "ml_string_switch.m"
        }
#line 908 "ml_string_switch.m"
        {
#line 908 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_163_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[23])));
#line 908 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_163_163, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 908 "ml_string_switch.m"
        }
#line 910 "ml_string_switch.m"
        {
#line 910 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 910 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_169_169, 0) = ((MR_Box) ((MR_Integer) 1));
#line 910 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_169_169, 1) = ((MR_Box) (ml_backend__ml_string_switch__LoopTest_51));
#line 910 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_169_169, 2) = ((MR_Box) (ml_backend__ml_string_switch__LoopBody_59));
#line 910 "ml_string_switch.m"
        }
#line 910 "ml_string_switch.m"
        {
#line 910 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 910 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_168_168, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_169_169));
#line 910 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_168_168, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_15));
#line 910 "ml_string_switch.m"
        }
#line 912 "ml_string_switch.m"
        {
#line 912 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_167_167, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_168_168));
#line 912 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "ml_string_switch.m"
        }
#line 909 "ml_string_switch.m"
        {
#line 909 "ml_string_switch.m"
          ml_backend__ml_string_switch__LoopStatements_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopStatements_60, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_163_163));
#line 909 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LoopStatements_60, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_167_167));
#line 909 "ml_string_switch.m"
        }
#line 914 "ml_string_switch.m"
        {
#line 914 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_173_173 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__InitSuccessStatements_50, ml_backend__ml_string_switch__LoopStatements_60);
        }
#line 914 "ml_string_switch.m"
        {
#line 914 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_172_172 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__InitStopLoopVarStatements_49, ml_backend__ml_string_switch__V_173_173);
        }
#line 913 "ml_string_switch.m"
        {
#line 913 "ml_string_switch.m"
          ml_backend__ml_string_switch__SearchStatements_61 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__PrepareForMatchStatements_45, ml_backend__ml_string_switch__V_172_172);
        }
#line 916 "ml_string_switch.m"
        {
#line 916 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_174_174, 0) = ((MR_Box) (ml_backend__ml_string_switch__InitialCommentStatement_44));
#line 916 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_174_174, 1) = ((MR_Box) (ml_backend__ml_string_switch__SetupForFailStatements_41));
#line 916 "ml_string_switch.m"
        }
#line 917 "ml_string_switch.m"
        {
#line 917 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_175_175 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__SearchStatements_61, ml_backend__ml_string_switch__AfterStatements_43);
        }
#line 916 "ml_string_switch.m"
        {
#line 916 "ml_string_switch.m"
          *ml_backend__ml_string_switch__Statements_26 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_178_178, ml_backend__ml_string_switch__V_174_174, ml_backend__ml_string_switch__V_175_175);
        }
#line 888 "ml_string_switch.m"
      }
#line 810 "ml_string_switch.m"
  }
#line 800 "ml_string_switch.m"
}

#line 757 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_9_p_0(
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_10,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_11,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LoopPresent_12,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_13,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MLDS_Context_14,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_15,
#line 757 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HashSearchInfo_16,
#line 757 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_33,
#line 757 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_34)
#line 757 "ml_string_switch.m"
{
#line 763 "ml_string_switch.m"
  {
#line 763 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarLval_18;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VarRval_19;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVar_20;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarType_21;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarDefn_22;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarLval_23;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVar_24;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarType_25;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarDefn_26;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringVarLval_27;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__AlwaysDefns_28;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeStopLoopLval_29;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StopLoopVarDefns_30;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Defns_31;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FailStatements_32;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_36_36;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_37_37;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_41_41;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_43_43;
#line 763 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45;

#line 764 "ml_string_switch.m"
    {
#line 764 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_33, ml_backend__ml_string_switch__Var_15, &ml_backend__ml_string_switch__VarLval_18);
    }
#line 765 "ml_string_switch.m"
    {
#line 765 "ml_string_switch.m"
      ml_backend__ml_string_switch__VarRval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 765 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__VarRval_19, 0) = ((MR_Box) (ml_backend__ml_string_switch__VarLval_18));
#line 765 "ml_string_switch.m"
    }
#line 771 "ml_string_switch.m"
    {
#line 771 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "slot", &ml_backend__ml_string_switch__SlotVar_20, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_33, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_36_36);
    }
#line 772 "ml_string_switch.m"
    ml_backend__ml_string_switch__SlotVarType_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 774 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__SlotVar_20);
#line 774 "ml_string_switch.m"
    {
#line 774 "ml_string_switch.m"
      ml_backend__ml_string_switch__SlotVarDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_37_37, ml_backend__ml_string_switch__SlotVarType_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_14);
    }
#line 776 "ml_string_switch.m"
    {
#line 776 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_36_36, ml_backend__ml_string_switch__SlotVar_20, ml_backend__ml_string_switch__SlotVarType_21, &ml_backend__ml_string_switch__SlotVarLval_23);
    }
#line 778 "ml_string_switch.m"
    {
#line 778 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "str", &ml_backend__ml_string_switch__StringVar_24, ml_backend__ml_string_switch__STATE_VARIABLE_Info_36_36, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40);
    }
#line 779 "ml_string_switch.m"
    {
#line 779 "ml_string_switch.m"
      ml_backend__ml_string_switch__StringVarType_25 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    }
#line 783 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__StringVar_24);
#line 783 "ml_string_switch.m"
    {
#line 783 "ml_string_switch.m"
      ml_backend__ml_string_switch__StringVarDefn_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_41_41, ml_backend__ml_string_switch__StringVarType_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_14);
    }
#line 785 "ml_string_switch.m"
    {
#line 785 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40, ml_backend__ml_string_switch__StringVar_24, ml_backend__ml_string_switch__StringVarType_25, &ml_backend__ml_string_switch__StringVarLval_27);
    }
#line 787 "ml_string_switch.m"
    {
#line 787 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_43_43, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringVarDefn_26));
#line 787 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "ml_string_switch.m"
    }
#line 787 "ml_string_switch.m"
    {
#line 787 "ml_string_switch.m"
      ml_backend__ml_string_switch__AlwaysDefns_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__AlwaysDefns_28, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarDefn_22));
#line 787 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__AlwaysDefns_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_43_43));
#line 787 "ml_string_switch.m"
    }
#line 8865 "ml_backend.ml_string_switch.c"
    if ((ml_backend__ml_string_switch__LoopPresent_12 == (MR_Integer) 0))
#line 8867 "ml_backend.ml_string_switch.c"
      {
#line 1521 "ml_string_switch.m"
        ml_backend__ml_string_switch__MaybeStopLoopLval_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
        ml_backend__ml_string_switch__StopLoopVarDefns_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
        ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40;
#line 8875 "ml_backend.ml_string_switch.c"
      }
#line 8877 "ml_backend.ml_string_switch.c"
    else
#line 8879 "ml_backend.ml_string_switch.c"
      {
#line 8881 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__ModuleInfo_56;
#line 8883 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__Globals_57;
#line 8885 "ml_backend.ml_string_switch.c"
        MR_Word ml_backend__ml_string_switch__SupportsGoto_58;
#line 8887 "ml_backend.ml_string_switch.c"
        MR_String ml_backend__ml_string_switch__Experiment_59;

#line 1503 "ml_string_switch.m"
        {
#line 1503 "ml_string_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40, &ml_backend__ml_string_switch__ModuleInfo_56);
        }
#line 1504 "ml_string_switch.m"
        {
#line 1504 "ml_string_switch.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_string_switch__ModuleInfo_56, &ml_backend__ml_string_switch__Globals_57);
        }
#line 1505 "ml_string_switch.m"
        {
#line 1505 "ml_string_switch.m"
          ml_backend__ml_string_switch__SupportsGoto_58 = ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(ml_backend__ml_string_switch__Globals_57);
        }
#line 1506 "ml_string_switch.m"
        {
#line 1506 "ml_string_switch.m"
          libs__globals__lookup_string_option_3_p_0(ml_backend__ml_string_switch__Globals_57, (MR_Integer) 664, &ml_backend__ml_string_switch__Experiment_59);
        }
#line 8910 "ml_backend.ml_string_switch.c"
        if ((ml_backend__ml_string_switch__SupportsGoto_58 == (MR_Integer) 0))
#line 8912 "ml_backend.ml_string_switch.c"
          {
#line 8914 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopType_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 8916 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVar_62;
#line 8918 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVarDefn_63;
#line 8920 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__StopLoopVarLval_64;
#line 8922 "ml_backend.ml_string_switch.c"
            MR_Word ml_backend__ml_string_switch__V_68_68;

#line 1533 "ml_string_switch.m"
            {
#line 1533 "ml_string_switch.m"
              ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "stop_loop", &ml_backend__ml_string_switch__StopLoopVar_62, ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45);
            }
#line 1534 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__StopLoopVar_62);
#line 1534 "ml_string_switch.m"
            {
#line 1534 "ml_string_switch.m"
              ml_backend__ml_string_switch__StopLoopVarDefn_63 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_68_68, ml_backend__ml_string_switch__StopLoopType_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_14);
            }
#line 1536 "ml_string_switch.m"
            {
#line 1536 "ml_string_switch.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45, ml_backend__ml_string_switch__StopLoopVar_62, ml_backend__ml_string_switch__StopLoopType_60, &ml_backend__ml_string_switch__StopLoopVarLval_64);
            }
#line 1537 "ml_string_switch.m"
            {
#line 1537 "ml_string_switch.m"
              ml_backend__ml_string_switch__MaybeStopLoopLval_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopLval_29, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_64));
#line 1537 "ml_string_switch.m"
            }
#line 1538 "ml_string_switch.m"
            {
#line 1538 "ml_string_switch.m"
              ml_backend__ml_string_switch__StopLoopVarDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_30, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarDefn_63));
#line 1538 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "ml_string_switch.m"
            }
#line 8960 "ml_backend.ml_string_switch.c"
          }
#line 8962 "ml_backend.ml_string_switch.c"
        else
#line 8964 "ml_backend.ml_string_switch.c"
          {
#line 1509 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = (strcmp(ml_backend__ml_string_switch__Experiment_59, (MR_String) "use_stop_loop") == 0);
#line 8968 "ml_backend.ml_string_switch.c"
            if (ml_backend__ml_string_switch__succeeded)
#line 8970 "ml_backend.ml_string_switch.c"
              {
#line 8972 "ml_backend.ml_string_switch.c"
                MR_Word ml_backend__ml_string_switch__StopLoopType_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 8974 "ml_backend.ml_string_switch.c"
                MR_Word ml_backend__ml_string_switch__StopLoopVar_81;
#line 8976 "ml_backend.ml_string_switch.c"
                MR_Word ml_backend__ml_string_switch__StopLoopVarDefn_82;
#line 8978 "ml_backend.ml_string_switch.c"
                MR_Word ml_backend__ml_string_switch__StopLoopVarLval_83;
#line 8980 "ml_backend.ml_string_switch.c"
                MR_Word ml_backend__ml_string_switch__V_85_85;

#line 1533 "ml_string_switch.m"
                {
#line 1533 "ml_string_switch.m"
                  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "stop_loop", &ml_backend__ml_string_switch__StopLoopVar_81, ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45);
                }
#line 1534 "ml_string_switch.m"
                ml_backend__ml_string_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_string_switch__StopLoopVar_81);
#line 1534 "ml_string_switch.m"
                {
#line 1534 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StopLoopVarDefn_82 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_string_switch__V_85_85, ml_backend__ml_string_switch__StopLoopType_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MLDS_Context_14);
                }
#line 1536 "ml_string_switch.m"
                {
#line 1536 "ml_string_switch.m"
                  ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45, ml_backend__ml_string_switch__StopLoopVar_81, ml_backend__ml_string_switch__StopLoopType_79, &ml_backend__ml_string_switch__StopLoopVarLval_83);
                }
#line 1537 "ml_string_switch.m"
                {
#line 1537 "ml_string_switch.m"
                  ml_backend__ml_string_switch__MaybeStopLoopLval_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeStopLoopLval_29, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarLval_83));
#line 1537 "ml_string_switch.m"
                }
#line 1538 "ml_string_switch.m"
                {
#line 1538 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StopLoopVarDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_30, 0) = ((MR_Box) (ml_backend__ml_string_switch__StopLoopVarDefn_82));
#line 1538 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__StopLoopVarDefns_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "ml_string_switch.m"
                }
#line 9018 "ml_backend.ml_string_switch.c"
              }
#line 9020 "ml_backend.ml_string_switch.c"
            else
#line 9022 "ml_backend.ml_string_switch.c"
              {
#line 1521 "ml_string_switch.m"
                ml_backend__ml_string_switch__MaybeStopLoopLval_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
                ml_backend__ml_string_switch__StopLoopVarDefns_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "ml_string_switch.m"
                ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_40_40;
#line 9030 "ml_backend.ml_string_switch.c"
              }
#line 9032 "ml_backend.ml_string_switch.c"
          }
#line 9034 "ml_backend.ml_string_switch.c"
      }
#line 790 "ml_string_switch.m"
    {
#line 790 "ml_string_switch.m"
      ml_backend__ml_string_switch__Defns_31 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_string_switch__AlwaysDefns_28, ml_backend__ml_string_switch__StopLoopVarDefns_30);
    }
#line 1551 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__CanFail_11 == (MR_Integer) 0))
#line 1558 "ml_string_switch.m"
      {
#line 1558 "ml_string_switch.m"
        ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_string_switch__CodeModel_10, ml_backend__ml_string_switch__Context_13, &ml_backend__ml_string_switch__FailStatements_32, ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45, ml_backend__ml_string_switch__STATE_VARIABLE_Info_34);
      }
#line 1551 "ml_string_switch.m"
    else
#line 1551 "ml_string_switch.m"
      {
#line 1555 "ml_string_switch.m"
        ml_backend__ml_string_switch__FailStatements_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1555 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_Info_34 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_45_45;
#line 1551 "ml_string_switch.m"
      }
#line 796 "ml_string_switch.m"
    {
#line 796 "ml_string_switch.m"
      MR_Word base;
#line 796 "ml_string_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 796 "ml_string_switch.m"
      *ml_backend__ml_string_switch__HashSearchInfo_16 = base;
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((ml_backend__ml_string_switch__CodeModel_10 | ((ml_backend__ml_string_switch__LoopPresent_12 << (MR_Integer) 2)))));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__Context_13));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_string_switch__VarRval_19));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_23));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_string_switch__StringVarLval_27));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_string_switch__MaybeStopLoopLval_29));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_string_switch__FailStatements_32));
#line 796 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_string_switch__Defns_31));
#line 796 "ml_string_switch.m"
    }
#line 763 "ml_string_switch.m"
  }
#line 757 "ml_string_switch.m"
}

#line 711 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3(
#line 711 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 711 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 711 "ml_string_switch.m"
{
#line 711 "ml_string_switch.m"
  {
#line 711 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 711 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 711 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv3_HeadVar__3_3;

#line 711 "ml_string_switch.m"
    {
#line 711 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv3_HeadVar__3_3 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 711 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv3_HeadVar__3_3));
#line 711 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 711 "ml_string_switch.m"
  }
#line 711 "ml_string_switch.m"
}

#line 709 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_2(
#line 709 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 709 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 709 "ml_string_switch.m"
{
#line 709 "ml_string_switch.m"
  {
#line 709 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 709 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 709 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv2_HeadVar__2_2;

#line 709 "ml_string_switch.m"
    {
#line 709 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv2_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 709 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv2_HeadVar__2_2));
#line 709 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 709 "ml_string_switch.m"
  }
#line 709 "ml_string_switch.m"
}

#line 703 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_1(
#line 703 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 703 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 703 "ml_string_switch.m"
{
#line 703 "ml_string_switch.m"
  {
#line 703 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 703 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 703 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_HeadVar__2_2;

#line 703 "ml_string_switch.m"
    {
#line 703 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 703 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv1_HeadVar__2_2));
#line 703 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 703 "ml_string_switch.m"
  }
#line 703 "ml_string_switch.m"
}

#line 684 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(
#line 684 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_12,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_13,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FirstSolnStructType_14,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LaterSolnStructType_15,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_16,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_17,
#line 684 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__FirstSolnsRowInitializer_18,
#line 684 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_35,
#line 684 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_36,
#line 684 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37,
#line 684 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_38)
#line 684 "ml_string_switch.m"
{
#line 694 "ml_string_switch.m"
  {
#line 694 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 694 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringRval_25;
#line 694 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NextSlotRval_26;
#line 694 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsRval_28;
#line 694 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLaterSlotRval_29;
#line 694 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnOutInitializers_30;
#line 717 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSlotMapEntry_21;
#line 695 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__conv0_HashSlotMapEntry_21;

#line 695 "ml_string_switch.m"
    {
#line 695 "ml_string_switch.m"
      ml_backend__ml_string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[5], ml_backend__ml_string_switch__HashSlotMap_13, ml_backend__ml_string_switch__Slot_12, &ml_backend__ml_string_switch__conv0_HashSlotMapEntry_21);
    }
#line 695 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 695 "ml_string_switch.m"
      {
#line 695 "ml_string_switch.m"
        ml_backend__ml_string_switch__HashSlotMapEntry_21 = ((MR_Word) ml_backend__ml_string_switch__conv0_HashSlotMapEntry_21);
#line 695 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 695 "ml_string_switch.m"
      }
#line 717 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 696 "ml_string_switch.m"
      {
#line 696 "ml_string_switch.m"
        MR_String ml_backend__ml_string_switch__String_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_21, (MR_Integer) 0)));
#line 696 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__Next_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_21, (MR_Integer) 1)));
#line 696 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__Solns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_21, (MR_Integer) 2)));
#line 696 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_39_39;
#line 696 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_40_40;

#line 697 "ml_string_switch.m"
        {
#line 697 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 697 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_39_39, 1) = ((MR_Box) (ml_backend__ml_string_switch__String_22));
#line 697 "ml_string_switch.m"
        }
#line 697 "ml_string_switch.m"
        {
#line 697 "ml_string_switch.m"
          ml_backend__ml_string_switch__StringRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 697 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_25, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_39_39));
#line 697 "ml_string_switch.m"
        }
#line 698 "ml_string_switch.m"
        {
#line 698 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_40_40, 0) = ((MR_Box) (ml_backend__ml_string_switch__Next_23));
#line 698 "ml_string_switch.m"
        }
#line 698 "ml_string_switch.m"
        {
#line 698 "ml_string_switch.m"
          ml_backend__ml_string_switch__NextSlotRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 698 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_26, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_40_40));
#line 698 "ml_string_switch.m"
        }
#line 704 "ml_string_switch.m"
        if (((MR_tag((MR_Word) ml_backend__ml_string_switch__Solns_24)) == (MR_mktag((MR_Integer) 0))))
#line 700 "ml_string_switch.m"
          {
#line 700 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__FirstSolnRvals_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 0)));

#line 701 "ml_string_switch.m"
            ml_backend__ml_string_switch__NumLaterSolnsRval_28 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[15]);
#line 702 "ml_string_switch.m"
            ml_backend__ml_string_switch__FirstLaterSlotRval_29 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[16]);
#line 703 "ml_string_switch.m"
            {
#line 703 "ml_string_switch.m"
              ml_backend__ml_string_switch__FirstSolnOutInitializers_30 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[13], ml_backend__ml_string_switch__FirstSolnRvals_27);
            }
#line 703 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_36 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_35;
#line 703 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_38 = ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37;
#line 700 "ml_string_switch.m"
          }
#line 704 "ml_string_switch.m"
        else
#line 705 "ml_string_switch.m"
          {
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__TypeInfo_82_82 = (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[2];
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__TypeCtorInfo_84_84;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__LaterSolns_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 1)));
#line 705 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__NumLaterSolns_32;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializers_33;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_41_41;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_42_42;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_44_44;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_46_46;
#line 705 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__FirstSolnRvals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__Solns_24, (MR_Integer) 0)));

#line 706 "ml_string_switch.m"
            {
#line 706 "ml_string_switch.m"
              mercury__list__length_2_p_0(ml_backend__ml_string_switch__TypeInfo_82_82, ml_backend__ml_string_switch__LaterSolns_31, &ml_backend__ml_string_switch__NumLaterSolns_32);
            }
#line 707 "ml_string_switch.m"
            {
#line 707 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_41_41, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolns_32));
#line 707 "ml_string_switch.m"
            }
#line 707 "ml_string_switch.m"
            {
#line 707 "ml_string_switch.m"
              ml_backend__ml_string_switch__NumLaterSolnsRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NumLaterSolnsRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 707 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NumLaterSolnsRval_28, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_41_41));
#line 707 "ml_string_switch.m"
            }
#line 708 "ml_string_switch.m"
            {
#line 708 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_42_42, 0) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37));
#line 708 "ml_string_switch.m"
            }
#line 708 "ml_string_switch.m"
            {
#line 708 "ml_string_switch.m"
              ml_backend__ml_string_switch__FirstLaterSlotRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FirstLaterSlotRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 708 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__FirstLaterSlotRval_29, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_42_42));
#line 708 "ml_string_switch.m"
            }
#line 9387 "ml_backend.ml_string_switch.c"
            ml_backend__ml_string_switch__TypeCtorInfo_84_84 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 709 "ml_string_switch.m"
            {
#line 709 "ml_string_switch.m"
              ml_backend__ml_string_switch__FirstSolnOutInitializers_30 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_string_switch__TypeCtorInfo_84_84, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[14], ml_backend__ml_string_switch__FirstSolnRvals_75);
            }
#line 711 "ml_string_switch.m"
            {
#line 711 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 711 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_7[0]));
#line 711 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0_3));
#line 711 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 711 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_44_44, 3) = ((MR_Box) (ml_backend__ml_string_switch__LaterSolnStructType_15));
#line 711 "ml_string_switch.m"
            }
#line 710 "ml_string_switch.m"
            {
#line 710 "ml_string_switch.m"
              ml_backend__ml_string_switch__LaterSolnRowInitializers_33 = mercury__list__map_2_f_0(ml_backend__ml_string_switch__TypeInfo_82_82, ml_backend__ml_string_switch__TypeCtorInfo_84_84, ml_backend__ml_string_switch__V_44_44, ml_backend__ml_string_switch__LaterSolns_31);
            }
#line 714 "ml_string_switch.m"
            {
#line 714 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_46_46 = mercury__cord__from_list_1_f_0(ml_backend__ml_string_switch__TypeCtorInfo_84_84, ml_backend__ml_string_switch__LaterSolnRowInitializers_33);
            }
#line 713 "ml_string_switch.m"
            {
#line 713 "ml_string_switch.m"
              *ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_36 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_84_84, ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_35, ml_backend__ml_string_switch__V_46_46);
            }
#line 715 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_38 = (ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37 + ml_backend__ml_string_switch__NumLaterSolns_32);
#line 705 "ml_string_switch.m"
          }
#line 696 "ml_string_switch.m"
      }
#line 717 "ml_string_switch.m"
    else
#line 718 "ml_string_switch.m"
      {
#line 718 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_53_53;
#line 718 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_54_54;

#line 718 "ml_string_switch.m"
        {
#line 718 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_54_54 = ml_backend__ml_code_util__ml_string_type_0_f_0();
        }
#line 718 "ml_string_switch.m"
        {
#line 718 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 718 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_53_53, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_54_54));
#line 718 "ml_string_switch.m"
        }
#line 718 "ml_string_switch.m"
        {
#line 718 "ml_string_switch.m"
          ml_backend__ml_string_switch__StringRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 718 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_25, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_53_53));
#line 718 "ml_string_switch.m"
        }
#line 719 "ml_string_switch.m"
        ml_backend__ml_string_switch__NextSlotRval_26 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[12]);
#line 720 "ml_string_switch.m"
        ml_backend__ml_string_switch__NumLaterSolnsRval_28 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[16]);
#line 721 "ml_string_switch.m"
        ml_backend__ml_string_switch__FirstLaterSlotRval_29 = ml_backend__ml_string_switch__NumLaterSolnsRval_28;
#line 722 "ml_string_switch.m"
        ml_backend__ml_string_switch__FirstSolnOutInitializers_30 = ml_backend__ml_string_switch__DummyOutInitializers_17;
#line 722 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_38 = ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_37;
#line 722 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_36 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_35;
#line 718 "ml_string_switch.m"
      }
#line 730 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__MaybeNextSlotId_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "ml_string_switch.m"
      {
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_61_61;
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_62_62;
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_63_63;
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_64_64;
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_65_65;
#line 731 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_66_66;

#line 733 "ml_string_switch.m"
        {
#line 733 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_25));
#line 733 "ml_string_switch.m"
        }
#line 734 "ml_string_switch.m"
        {
#line 734 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_64_64, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsRval_28));
#line 734 "ml_string_switch.m"
        }
#line 734 "ml_string_switch.m"
        {
#line 734 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_66_66, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLaterSlotRval_29));
#line 734 "ml_string_switch.m"
        }
#line 735 "ml_string_switch.m"
        {
#line 735 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_65_65, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_66_66));
#line 735 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_65_65, 1) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnOutInitializers_30));
#line 735 "ml_string_switch.m"
        }
#line 734 "ml_string_switch.m"
        {
#line 734 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_64_64));
#line 734 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_63_63, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_65_65));
#line 734 "ml_string_switch.m"
        }
#line 733 "ml_string_switch.m"
        {
#line 733 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_61_61, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 733 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_61_61, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_63_63));
#line 733 "ml_string_switch.m"
        }
#line 732 "ml_string_switch.m"
        {
#line 732 "ml_string_switch.m"
          MR_Word base;
#line 732 "ml_string_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "ml_string_switch.m"
          *ml_backend__ml_string_switch__FirstSolnsRowInitializer_18 = base;
#line 732 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnStructType_14));
#line 732 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_61_61));
#line 732 "ml_string_switch.m"
        }
#line 731 "ml_string_switch.m"
      }
#line 730 "ml_string_switch.m"
    else
#line 725 "ml_string_switch.m"
      {
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_67_67;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_68_68;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_69_69;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_70_70;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_71_71;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_72_72;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_73_73;
#line 725 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_74_74;

#line 727 "ml_string_switch.m"
        {
#line 727 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_68_68, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_25));
#line 727 "ml_string_switch.m"
        }
#line 727 "ml_string_switch.m"
        {
#line 727 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_70_70, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotRval_26));
#line 727 "ml_string_switch.m"
        }
#line 728 "ml_string_switch.m"
        {
#line 728 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 728 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsRval_28));
#line 728 "ml_string_switch.m"
        }
#line 728 "ml_string_switch.m"
        {
#line 728 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 728 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLaterSlotRval_29));
#line 728 "ml_string_switch.m"
        }
#line 729 "ml_string_switch.m"
        {
#line 729 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_74_74));
#line 729 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnOutInitializers_30));
#line 729 "ml_string_switch.m"
        }
#line 728 "ml_string_switch.m"
        {
#line 728 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_72_72));
#line 728 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_71_71, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_73_73));
#line 728 "ml_string_switch.m"
        }
#line 727 "ml_string_switch.m"
        {
#line 727 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_69_69, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_70_70));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_69_69, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_71_71));
#line 727 "ml_string_switch.m"
        }
#line 727 "ml_string_switch.m"
        {
#line 727 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_68_68));
#line 727 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_69_69));
#line 727 "ml_string_switch.m"
        }
#line 726 "ml_string_switch.m"
        {
#line 726 "ml_string_switch.m"
          MR_Word base;
#line 726 "ml_string_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "ml_string_switch.m"
          *ml_backend__ml_string_switch__FirstSolnsRowInitializer_18 = base;
#line 726 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnStructType_14));
#line 726 "ml_string_switch.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_67_67));
#line 726 "ml_string_switch.m"
        }
#line 725 "ml_string_switch.m"
      }
#line 694 "ml_string_switch.m"
  }
#line 684 "ml_string_switch.m"
}

#line 656 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0(
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_13,
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_14,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_15,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__FirstSolnStructType_16,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LaterSolnStructType_17,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_18,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_19,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_24,
#line 656 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_25,
#line 656 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_26,
#line 656 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_27,
#line 656 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_28)
#line 656 "ml_string_switch.m"
{
#line 670 "ml_string_switch.m"
  while (MR_TRUE)
#line 670 "ml_string_switch.m"
    {
#line 670 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 670 "ml_string_switch.m"
      {
#line 670 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__Slot_13 == ml_backend__ml_string_switch__TableSize_14);

#line 670 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 669 "ml_string_switch.m"
          {
#line 669 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_27 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_26;
#line 669 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_25 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_24;
#line 669 "ml_string_switch.m"
          }
#line 670 "ml_string_switch.m"
        else
#line 674 "ml_string_switch.m"
          {
#line 674 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__FirstSolnsRowInitializer_23;
#line 674 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_29_29;
#line 674 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_31_31;
#line 674 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__V_32_32;
#line 674 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_30_36;

#line 671 "ml_string_switch.m"
            {
#line 671 "ml_string_switch.m"
              ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slot_11_p_0(ml_backend__ml_string_switch__Slot_13, ml_backend__ml_string_switch__HashSlotMap_15, ml_backend__ml_string_switch__FirstSolnStructType_16, ml_backend__ml_string_switch__LaterSolnStructType_17, ml_backend__ml_string_switch__MaybeNextSlotId_18, ml_backend__ml_string_switch__DummyOutInitializers_19, &ml_backend__ml_string_switch__FirstSolnsRowInitializer_23, ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_26, &ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_29_29, ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_28, &ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_30_36);
            }
#line 675 "ml_string_switch.m"
            {
#line 675 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_31_31, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstSolnsRowInitializer_23));
#line 675 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_31_31, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_24));
#line 675 "ml_string_switch.m"
            }
#line 677 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_32_32 = (ml_backend__ml_string_switch__Slot_13 + (MR_Integer) 1);
#line 677 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 677 "ml_string_switch.m"
            {
#line 677 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__Slot__tmp_copy_13 = ml_backend__ml_string_switch__V_32_32;
#line 677 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_24 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_31_31;
#line 677 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_26 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_29_29;
#line 677 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0__tmp_copy_28 = ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_30_36;

#line 677 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0_28 = ml_backend__ml_string_switch__STATE_VARIABLE_CurLaterSolnIndex_0__tmp_copy_28;
#line 677 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_26 = ml_backend__ml_string_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_26;
#line 677 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_24 = ml_backend__ml_string_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_24;
#line 677 "ml_string_switch.m"
              ml_backend__ml_string_switch__Slot_13 = ml_backend__ml_string_switch__Slot__tmp_copy_13;
#line 677 "ml_string_switch.m"
            }
#line 677 "ml_string_switch.m"
            continue;
#line 674 "ml_string_switch.m"
          }
#line 670 "ml_string_switch.m"
      }
#line 670 "ml_string_switch.m"
      break;
#line 670 "ml_string_switch.m"
    }
#line 656 "ml_string_switch.m"
}

#line 599 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_2(
#line 599 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 599 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 599 "ml_string_switch.m"
{
#line 599 "ml_string_switch.m"
  {
#line 599 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 599 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 599 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_HeadVar__2_2;

#line 599 "ml_string_switch.m"
    {
#line 599 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 599 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv1_HeadVar__2_2));
#line 599 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 599 "ml_string_switch.m"
  }
#line 599 "ml_string_switch.m"
}

#line 598 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0_1(
#line 598 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 598 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 598 "ml_string_switch.m"
{
#line 598 "ml_string_switch.m"
  {
#line 598 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 598 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 598 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__2_2;

#line 598 "ml_string_switch.m"
    {
#line 598 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 598 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__2_2));
#line 598 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 598 "ml_string_switch.m"
  }
#line 598 "ml_string_switch.m"
}

#line 512 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_12,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_14,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseSolns_15,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_16,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_17,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_18,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_19,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_20,
#line 512 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_98,
#line 512 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_99)
#line 512 "ml_string_switch.m"
{
#line 520 "ml_string_switch.m"
  {
#line 520 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_156_156;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_159_159;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_162_162;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_22;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SeveralSolnLookupVars_23;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsVarLval_24;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarLval_25;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitVarLval_26;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitAssignStatement_27;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__IncrLaterSlotVarStatement_28;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MatchDefns_29;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarRval_30;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LimitVarRval_31;
#line 520 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__TableSize_32;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSlotMap_33;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashOp_34;
#line 520 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__NumCollisions_35;
#line 520 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__HashMask_36;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_37;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_38;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_39;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_40;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_41;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_IntType_42;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnFieldTypes_43;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoopPresent_44;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSearchInfo_45;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarLval_50;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarRval_54;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_55;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnStructTypeNum_56;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnStructType_57;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnFieldIds_58;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_59;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnStructTypeNum_60;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnStructType_61;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnFieldIds_62;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData2_63;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_68;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsFieldId_69;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLaterSolnRowFieldId_70;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutFieldIds_71;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeNextSlotFieldId_72;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__DummyOutRvals_74;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__DummyOutInitializers_75;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevFirstSolnRowInitializers_76;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializersCord_77;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnRowInitializers_78;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnRowInitializers_79;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnVectorCommon_80;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData3_81;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnVectorCommon_82;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_83;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_84;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSlotVarAssignStatement_85;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstSolnLookupStatements_86;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterSolnLookupStatements_87;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CallContStatement_88;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLookupSucceedStmt_89;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FirstLookupSucceedStatement_90;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterLookupSucceedStmt_91;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LaterLookupSucceedStatement_92;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopCond_93;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopStmt_94;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MoreSolnsLoopStatement_95;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SuccessStatements_96;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_100_100;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_103_103;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_125_125;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_127_127;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_128_128;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_129_129;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_130_130;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_131_131;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_132_132;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_134_134;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_135_135;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_138_138;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_139_139;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_140_140;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_144_144;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_145_145;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_146_146;
#line 520 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_147_147;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_46;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoopPresent_47;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___Context_48;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_49;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___StringVarLval_51;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopLval_52;
#line 554 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_53;

#line 521 "ml_string_switch.m"
    {
#line 521 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_22 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_18);
    }
#line 522 "ml_string_switch.m"
    {
#line 522 "ml_string_switch.m"
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__SeveralSolnLookupVars_23, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_98, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_100_100);
    }
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__NumLaterSolnsVarLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 0)));
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__LaterSlotVarLval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 1)));
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__LimitVarLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 2)));
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__LimitAssignStatement_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 3)));
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__IncrLaterSlotVarStatement_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 4)));
#line 523 "ml_string_switch.m"
    ml_backend__ml_string_switch__MatchDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__SeveralSolnLookupVars_23, (MR_Integer) 5)));
#line 526 "ml_string_switch.m"
    {
#line 526 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterSlotVarRval_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LaterSlotVarRval_30, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarLval_25));
#line 526 "ml_string_switch.m"
    }
#line 527 "ml_string_switch.m"
    {
#line 527 "ml_string_switch.m"
      ml_backend__ml_string_switch__LimitVarRval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__LimitVarRval_31, 0) = ((MR_Box) (ml_backend__ml_string_switch__LimitVarLval_26));
#line 527 "ml_string_switch.m"
    }
#line 530 "ml_string_switch.m"
    {
#line 530 "ml_string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[4], ml_backend__ml_string_switch__CaseSolns_15, (MR_Integer) 1, &ml_backend__ml_string_switch__TableSize_32, &ml_backend__ml_string_switch__HashSlotMap_33, &ml_backend__ml_string_switch__HashOp_34, &ml_backend__ml_string_switch__NumCollisions_35);
    }
#line 532 "ml_string_switch.m"
    ml_backend__ml_string_switch__HashMask_36 = (ml_backend__ml_string_switch__TableSize_32 - (MR_Integer) 1);
#line 534 "ml_string_switch.m"
    {
#line 534 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_100_100, &ml_backend__ml_string_switch__ModuleInfo_37);
    }
#line 535 "ml_string_switch.m"
    {
#line 535 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_37, &ml_backend__ml_string_switch__ModuleName_38);
    }
#line 536 "ml_string_switch.m"
    {
#line 536 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_39 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_38);
    }
#line 537 "ml_string_switch.m"
    {
#line 537 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_100_100, &ml_backend__ml_string_switch__Target_40);
    }
#line 539 "ml_string_switch.m"
    {
#line 539 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_103_103 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 539 "ml_string_switch.m"
    {
#line 539 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_37, ml_backend__ml_string_switch__V_103_103);
    }
#line 540 "ml_string_switch.m"
    ml_backend__ml_string_switch__MLDS_IntType_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 542 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_35 == (MR_Integer) 0);
#line 546 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 544 "ml_string_switch.m"
      {
#line 544 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_104_104;
#line 544 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_105_105;

#line 544 "ml_string_switch.m"
        {
#line 544 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_105_105, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_42));
#line 544 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_105_105, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_17));
#line 544 "ml_string_switch.m"
        }
#line 544 "ml_string_switch.m"
        {
#line 544 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_104_104, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_42));
#line 544 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_104_104, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_105_105));
#line 544 "ml_string_switch.m"
        }
#line 543 "ml_string_switch.m"
        {
#line 543 "ml_string_switch.m"
          ml_backend__ml_string_switch__FirstSolnFieldTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_43, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_41));
#line 543 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_43, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_104_104));
#line 543 "ml_string_switch.m"
        }
#line 545 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_44 = (MR_Integer) 0;
#line 544 "ml_string_switch.m"
      }
#line 546 "ml_string_switch.m"
    else
#line 548 "ml_string_switch.m"
      {
#line 548 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_106_106;
#line 548 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_107_107;
#line 548 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_108_108;

#line 548 "ml_string_switch.m"
        {
#line 548 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_108_108, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_42));
#line 548 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_108_108, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_17));
#line 548 "ml_string_switch.m"
        }
#line 548 "ml_string_switch.m"
        {
#line 548 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_107_107, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_42));
#line 548 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_107_107, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_108_108));
#line 548 "ml_string_switch.m"
        }
#line 547 "ml_string_switch.m"
        {
#line 547 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_106_106, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_IntType_42));
#line 547 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_106_106, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_107_107));
#line 547 "ml_string_switch.m"
        }
#line 547 "ml_string_switch.m"
        {
#line 547 "ml_string_switch.m"
          ml_backend__ml_string_switch__FirstSolnFieldTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_43, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_41));
#line 547 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldTypes_43, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_106_106));
#line 547 "ml_string_switch.m"
        }
#line 549 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_44 = (MR_Integer) 1;
#line 548 "ml_string_switch.m"
      }
#line 552 "ml_string_switch.m"
    {
#line 552 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_9_p_0(ml_backend__ml_string_switch__CodeModel_13, ml_backend__ml_string_switch__CanFail_14, ml_backend__ml_string_switch__LoopPresent_44, ml_backend__ml_string_switch__Context_18, ml_backend__ml_string_switch__MLDS_Context_22, ml_backend__ml_string_switch__Var_12, &ml_backend__ml_string_switch__HashSearchInfo_45, ml_backend__ml_string_switch__STATE_VARIABLE_Info_100_100, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109);
    }
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoopPresent_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 1)));
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 2)));
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch__SlotVarLval_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 3)));
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___StringVarLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 4)));
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 5)));
#line 554 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 6)));
#line 554 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_45, (MR_Integer) 7)));
#line 557 "ml_string_switch.m"
    {
#line 557 "ml_string_switch.m"
      ml_backend__ml_string_switch__SlotVarRval_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SlotVarRval_54, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_50));
#line 557 "ml_string_switch.m"
    }
#line 559 "ml_string_switch.m"
    {
#line 559 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109, &ml_backend__ml_string_switch__GlobalData0_55);
    }
#line 560 "ml_string_switch.m"
    {
#line 560 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_39, ml_backend__ml_string_switch__MLDS_Context_22, ml_backend__ml_string_switch__Target_40, ml_backend__ml_string_switch__FirstSolnFieldTypes_43, &ml_backend__ml_string_switch__FirstSolnStructTypeNum_56, &ml_backend__ml_string_switch__FirstSolnStructType_57, &ml_backend__ml_string_switch__FirstSolnFieldIds_58, ml_backend__ml_string_switch__GlobalData0_55, &ml_backend__ml_string_switch__GlobalData1_59);
    }
#line 563 "ml_string_switch.m"
    {
#line 563 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_39, ml_backend__ml_string_switch__MLDS_Context_22, ml_backend__ml_string_switch__Target_40, ml_backend__ml_string_switch__OutTypes_17, &ml_backend__ml_string_switch__LaterSolnStructTypeNum_60, &ml_backend__ml_string_switch__LaterSolnStructType_61, &ml_backend__ml_string_switch__LaterSolnFieldIds_62, ml_backend__ml_string_switch__GlobalData1_59, &ml_backend__ml_string_switch__GlobalData2_63);
    }
#line 566 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_35 == (MR_Integer) 0);
#line 580 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 577 "ml_string_switch.m"
      {
#line 577 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_64;
#line 577 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_65;
#line 577 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_66;
#line 577 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OutFieldIdsPrime_67;
#line 568 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_110_110;
#line 568 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_111_111;

#line 568 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FirstSolnFieldIds_58)) == (MR_mktag((MR_Integer) 1)));
#line 568 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 568 "ml_string_switch.m"
          {
#line 568 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_58, (MR_Integer) 0)));
#line 568 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_58, (MR_Integer) 1)));
#line 569 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_110_110)) == (MR_mktag((MR_Integer) 1)));
#line 569 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 569 "ml_string_switch.m"
              {
#line 569 "ml_string_switch.m"
                ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_110_110, (MR_Integer) 0)));
#line 569 "ml_string_switch.m"
                ml_backend__ml_string_switch__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_110_110, (MR_Integer) 1)));
#line 570 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_111_111)) == (MR_mktag((MR_Integer) 1)));
#line 570 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 570 "ml_string_switch.m"
                  {
#line 570 "ml_string_switch.m"
                    ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_111_111, (MR_Integer) 0)));
#line 570 "ml_string_switch.m"
                    ml_backend__ml_string_switch__OutFieldIdsPrime_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_111_111, (MR_Integer) 1)));
#line 570 "ml_string_switch.m"
                  }
#line 569 "ml_string_switch.m"
              }
#line 568 "ml_string_switch.m"
          }
#line 577 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 572 "ml_string_switch.m"
          {
#line 572 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_68 = ml_backend__ml_string_switch__StringFieldIdPrime_64;
#line 573 "ml_string_switch.m"
            ml_backend__ml_string_switch__NumLaterSolnsFieldId_69 = ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_65;
#line 574 "ml_string_switch.m"
            ml_backend__ml_string_switch__FirstLaterSolnRowFieldId_70 = ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_66;
#line 575 "ml_string_switch.m"
            ml_backend__ml_string_switch__OutFieldIds_71 = ml_backend__ml_string_switch__OutFieldIdsPrime_67;
#line 576 "ml_string_switch.m"
            ml_backend__ml_string_switch__MaybeNextSlotFieldId_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "ml_string_switch.m"
          }
#line 577 "ml_string_switch.m"
        else
#line 578 "ml_string_switch.m"
          {
#line 578 "ml_string_switch.m"
            {
#line 578 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
#line 578 "ml_string_switch.m"
              return;
            }
#line 578 "ml_string_switch.m"
          }
#line 577 "ml_string_switch.m"
      }
#line 580 "ml_string_switch.m"
    else
#line 592 "ml_string_switch.m"
      {
#line 592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NextSlotFieldIdPrime_73;
#line 592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_150;
#line 592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_151;
#line 592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_152;
#line 592 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OutFieldIdsPrime_153;
#line 582 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_115_115;
#line 582 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_116_116;
#line 582 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_117_117;

#line 583 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FirstSolnFieldIds_58)) == (MR_mktag((MR_Integer) 1)));
#line 583 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 583 "ml_string_switch.m"
          {
#line 583 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_58, (MR_Integer) 0)));
#line 583 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FirstSolnFieldIds_58, (MR_Integer) 1)));
#line 583 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 583 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 583 "ml_string_switch.m"
              {
#line 583 "ml_string_switch.m"
                ml_backend__ml_string_switch__NextSlotFieldIdPrime_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_115_115, (MR_Integer) 0)));
#line 583 "ml_string_switch.m"
                ml_backend__ml_string_switch__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_115_115, (MR_Integer) 1)));
#line 584 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_116_116)) == (MR_mktag((MR_Integer) 1)));
#line 584 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 584 "ml_string_switch.m"
                  {
#line 584 "ml_string_switch.m"
                    ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_116_116, (MR_Integer) 0)));
#line 584 "ml_string_switch.m"
                    ml_backend__ml_string_switch__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_116_116, (MR_Integer) 1)));
#line 585 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 585 "ml_string_switch.m"
                    if (ml_backend__ml_string_switch__succeeded)
#line 585 "ml_string_switch.m"
                      {
#line 585 "ml_string_switch.m"
                        ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_117_117, (MR_Integer) 0)));
#line 585 "ml_string_switch.m"
                        ml_backend__ml_string_switch__OutFieldIdsPrime_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_117_117, (MR_Integer) 1)));
#line 585 "ml_string_switch.m"
                      }
#line 584 "ml_string_switch.m"
                  }
#line 583 "ml_string_switch.m"
              }
#line 583 "ml_string_switch.m"
          }
#line 592 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 587 "ml_string_switch.m"
          {
#line 587 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_68 = ml_backend__ml_string_switch__StringFieldIdPrime_150;
#line 588 "ml_string_switch.m"
            ml_backend__ml_string_switch__NumLaterSolnsFieldId_69 = ml_backend__ml_string_switch__NumLaterSolnsFieldIdPrime_151;
#line 589 "ml_string_switch.m"
            ml_backend__ml_string_switch__FirstLaterSolnRowFieldId_70 = ml_backend__ml_string_switch__FirstLaterSolnRowFieldIdPrime_152;
#line 590 "ml_string_switch.m"
            ml_backend__ml_string_switch__OutFieldIds_71 = ml_backend__ml_string_switch__OutFieldIdsPrime_153;
#line 591 "ml_string_switch.m"
            {
#line 591 "ml_string_switch.m"
              ml_backend__ml_string_switch__MaybeNextSlotFieldId_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeNextSlotFieldId_72, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotFieldIdPrime_73));
#line 591 "ml_string_switch.m"
            }
#line 587 "ml_string_switch.m"
          }
#line 592 "ml_string_switch.m"
        else
#line 593 "ml_string_switch.m"
          {
#line 593 "ml_string_switch.m"
            {
#line 593 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_several_soln_lookup_switch\'/11", (MR_String) "bad FieldIds");
#line 593 "ml_string_switch.m"
              return;
            }
#line 593 "ml_string_switch.m"
          }
#line 592 "ml_string_switch.m"
      }
#line 10491 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_156_156 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 598 "ml_string_switch.m"
    {
#line 598 "ml_string_switch.m"
      ml_backend__ml_string_switch__DummyOutRvals_74 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_string_switch__TypeCtorInfo_156_156, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[11], ml_backend__ml_string_switch__OutTypes_17);
    }
#line 10498 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_159_159 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 599 "ml_string_switch.m"
    {
#line 599 "ml_string_switch.m"
      ml_backend__ml_string_switch__DummyOutInitializers_75 = mercury__list__map_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_156_156, ml_backend__ml_string_switch__TypeCtorInfo_159_159, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[12], ml_backend__ml_string_switch__DummyOutRvals_74);
    }
#line 604 "ml_string_switch.m"
    {
#line 604 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_125_125 = mercury__cord__init_0_f_0(ml_backend__ml_string_switch__TypeCtorInfo_159_159);
    }
#line 600 "ml_string_switch.m"
    {
#line 600 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_several_soln_lookup_slots_12_p_0((MR_Integer) 0, ml_backend__ml_string_switch__TableSize_32, ml_backend__ml_string_switch__HashSlotMap_33, ml_backend__ml_string_switch__FirstSolnStructType_57, ml_backend__ml_string_switch__LaterSolnStructType_61, ml_backend__ml_string_switch__MaybeNextSlotFieldId_72, ml_backend__ml_string_switch__DummyOutInitializers_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevFirstSolnRowInitializers_76, ml_backend__ml_string_switch__V_125_125, &ml_backend__ml_string_switch__LaterSolnRowInitializersCord_77, (MR_Integer) 0);
    }
#line 605 "ml_string_switch.m"
    {
#line 605 "ml_string_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_159_159, ml_backend__ml_string_switch__RevFirstSolnRowInitializers_76, &ml_backend__ml_string_switch__FirstSolnRowInitializers_78);
    }
#line 606 "ml_string_switch.m"
    {
#line 606 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterSolnRowInitializers_79 = mercury__cord__list_1_f_0(ml_backend__ml_string_switch__TypeCtorInfo_159_159, ml_backend__ml_string_switch__LaterSolnRowInitializersCord_77);
    }
#line 608 "ml_string_switch.m"
    {
#line 608 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_39, ml_backend__ml_string_switch__FirstSolnStructTypeNum_56, ml_backend__ml_string_switch__FirstSolnRowInitializers_78, &ml_backend__ml_string_switch__FirstSolnVectorCommon_80, ml_backend__ml_string_switch__GlobalData2_63, &ml_backend__ml_string_switch__GlobalData3_81);
    }
#line 611 "ml_string_switch.m"
    {
#line 611 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_39, ml_backend__ml_string_switch__LaterSolnStructTypeNum_60, ml_backend__ml_string_switch__LaterSolnRowInitializers_79, &ml_backend__ml_string_switch__LaterSolnVectorCommon_82, ml_backend__ml_string_switch__GlobalData3_81, &ml_backend__ml_string_switch__GlobalData_83);
    }
#line 614 "ml_string_switch.m"
    {
#line 614 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_83, ml_backend__ml_string_switch__STATE_VARIABLE_Info_109_109, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_127_127);
    }
#line 616 "ml_string_switch.m"
    {
#line 616 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_string_switch__NumLaterSolnsVarLval_24, ml_backend__ml_string_switch__MLDS_IntType_42, ml_backend__ml_string_switch__NumLaterSolnsFieldId_69, ml_backend__ml_string_switch__FirstSolnVectorCommon_80, ml_backend__ml_string_switch__FirstSolnStructType_57, ml_backend__ml_string_switch__SlotVarRval_54, ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_84, ml_backend__ml_string_switch__STATE_VARIABLE_Info_127_127, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_128_128);
    }
#line 619 "ml_string_switch.m"
    {
#line 619 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_string_switch__LaterSlotVarLval_25, ml_backend__ml_string_switch__MLDS_IntType_42, ml_backend__ml_string_switch__FirstLaterSolnRowFieldId_70, ml_backend__ml_string_switch__FirstSolnVectorCommon_80, ml_backend__ml_string_switch__FirstSolnStructType_57, ml_backend__ml_string_switch__SlotVarRval_54, ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__LaterSlotVarAssignStatement_85, ml_backend__ml_string_switch__STATE_VARIABLE_Info_128_128, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_129_129);
    }
#line 622 "ml_string_switch.m"
    {
#line 622 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_16, ml_backend__ml_string_switch__OutTypes_17, ml_backend__ml_string_switch__OutFieldIds_71, ml_backend__ml_string_switch__FirstSolnVectorCommon_80, ml_backend__ml_string_switch__FirstSolnStructType_57, ml_backend__ml_string_switch__SlotVarRval_54, ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__FirstSolnLookupStatements_86, ml_backend__ml_string_switch__STATE_VARIABLE_Info_129_129, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_130_130);
    }
#line 625 "ml_string_switch.m"
    {
#line 625 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_16, ml_backend__ml_string_switch__OutTypes_17, ml_backend__ml_string_switch__LaterSolnFieldIds_62, ml_backend__ml_string_switch__LaterSolnVectorCommon_82, ml_backend__ml_string_switch__LaterSolnStructType_61, ml_backend__ml_string_switch__LaterSlotVarRval_30, ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__LaterSolnLookupStatements_87, ml_backend__ml_string_switch__STATE_VARIABLE_Info_130_130, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_131_131);
    }
#line 629 "ml_string_switch.m"
    {
#line 629 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_string_switch__Context_18, &ml_backend__ml_string_switch__CallContStatement_88, ml_backend__ml_string_switch__STATE_VARIABLE_Info_131_131, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_132_132);
    }
#line 10565 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_162_162 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 631 "ml_string_switch.m"
    {
#line 631 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 0) = ((MR_Box) (ml_backend__ml_string_switch__CallContStatement_88));
#line 631 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "ml_string_switch.m"
    }
#line 631 "ml_string_switch.m"
    {
#line 631 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_134_134 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_162_162, ml_backend__ml_string_switch__FirstSolnLookupStatements_86, ml_backend__ml_string_switch__V_135_135);
    }
#line 630 "ml_string_switch.m"
    {
#line 630 "ml_string_switch.m"
      ml_backend__ml_string_switch__FirstLookupSucceedStmt_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStmt_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStmt_89, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_134_134));
#line 630 "ml_string_switch.m"
    }
#line 632 "ml_string_switch.m"
    {
#line 632 "ml_string_switch.m"
      ml_backend__ml_string_switch__FirstLookupSucceedStatement_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStatement_90, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLookupSucceedStmt_89));
#line 632 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstLookupSucceedStatement_90, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_22));
#line 632 "ml_string_switch.m"
    }
#line 637 "ml_string_switch.m"
    {
#line 637 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_140_140, 0) = ((MR_Box) (ml_backend__ml_string_switch__IncrLaterSlotVarStatement_28));
#line 637 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "ml_string_switch.m"
    }
#line 637 "ml_string_switch.m"
    {
#line 637 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_139_139, 0) = ((MR_Box) (ml_backend__ml_string_switch__CallContStatement_88));
#line 637 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_139_139, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_140_140));
#line 637 "ml_string_switch.m"
    }
#line 636 "ml_string_switch.m"
    {
#line 636 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_138_138 = mercury__list__f_43_43_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_162_162, ml_backend__ml_string_switch__LaterSolnLookupStatements_87, ml_backend__ml_string_switch__V_139_139);
    }
#line 635 "ml_string_switch.m"
    {
#line 635 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterLookupSucceedStmt_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStmt_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStmt_91, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_138_138));
#line 635 "ml_string_switch.m"
    }
#line 638 "ml_string_switch.m"
    {
#line 638 "ml_string_switch.m"
      ml_backend__ml_string_switch__LaterLookupSucceedStatement_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStatement_92, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterLookupSucceedStmt_91));
#line 638 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LaterLookupSucceedStatement_92, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_22));
#line 638 "ml_string_switch.m"
    }
#line 641 "ml_string_switch.m"
    {
#line 641 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopCond_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 641 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 641 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 641 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_93, 2) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarRval_30));
#line 641 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__MoreSolnsLoopCond_93, 3) = ((MR_Box) (ml_backend__ml_string_switch__LimitVarRval_31));
#line 641 "ml_string_switch.m"
    }
#line 642 "ml_string_switch.m"
    {
#line 642 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopStmt_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 642 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_94, 0) = ((MR_Box) ((MR_Integer) 0));
#line 642 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_94, 1) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopCond_93));
#line 642 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MoreSolnsLoopStmt_94, 2) = ((MR_Box) (ml_backend__ml_string_switch__LaterLookupSucceedStatement_92));
#line 642 "ml_string_switch.m"
    }
#line 644 "ml_string_switch.m"
    {
#line 644 "ml_string_switch.m"
      ml_backend__ml_string_switch__MoreSolnsLoopStatement_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__MoreSolnsLoopStatement_95, 0) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopStmt_94));
#line 644 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__MoreSolnsLoopStatement_95, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_22));
#line 644 "ml_string_switch.m"
    }
#line 648 "ml_string_switch.m"
    {
#line 648 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_147_147, 0) = ((MR_Box) (ml_backend__ml_string_switch__MoreSolnsLoopStatement_95));
#line 648 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "ml_string_switch.m"
    }
#line 648 "ml_string_switch.m"
    {
#line 648 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 0) = ((MR_Box) (ml_backend__ml_string_switch__LimitAssignStatement_27));
#line 648 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_146_146, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_147_147));
#line 648 "ml_string_switch.m"
    }
#line 647 "ml_string_switch.m"
    {
#line 647 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_145_145, 0) = ((MR_Box) (ml_backend__ml_string_switch__LaterSlotVarAssignStatement_85));
#line 647 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_145_145, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_146_146));
#line 647 "ml_string_switch.m"
    }
#line 647 "ml_string_switch.m"
    {
#line 647 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_144_144, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstLookupSucceedStatement_90));
#line 647 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_144_144, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_145_145));
#line 647 "ml_string_switch.m"
    }
#line 646 "ml_string_switch.m"
    {
#line 646 "ml_string_switch.m"
      ml_backend__ml_string_switch__SuccessStatements_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SuccessStatements_96, 0) = ((MR_Box) (ml_backend__ml_string_switch__NumLaterSolnsAssignStatement_84));
#line 646 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SuccessStatements_96, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_144_144));
#line 646 "ml_string_switch.m"
    }
#line 651 "ml_string_switch.m"
    {
#line 651 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_14_p_0(ml_backend__ml_string_switch__MLDS_Context_22, (MR_String) "hashed string several_soln lookup switch", ml_backend__ml_string_switch__HashSearchInfo_45, ml_backend__ml_string_switch__HashOp_34, ml_backend__ml_string_switch__FirstSolnVectorCommon_80, ml_backend__ml_string_switch__FirstSolnStructType_57, ml_backend__ml_string_switch__StringFieldId_68, ml_backend__ml_string_switch__MaybeNextSlotFieldId_72, ml_backend__ml_string_switch__HashMask_36, ml_backend__ml_string_switch__MatchDefns_29, ml_backend__ml_string_switch__SuccessStatements_96, ml_backend__ml_string_switch__Statements_20, ml_backend__ml_string_switch__STATE_VARIABLE_Info_132_132, ml_backend__ml_string_switch__STATE_VARIABLE_Info_99);
#line 651 "ml_string_switch.m"
      return;
    }
#line 520 "ml_string_switch.m"
  }
#line 512 "ml_string_switch.m"
}

#line 494 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0_1(
#line 494 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 494 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 494 "ml_string_switch.m"
{
#line 494 "ml_string_switch.m"
  {
#line 494 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 494 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 494 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_HeadVar__2_2;

#line 494 "ml_string_switch.m"
    {
#line 494 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 494 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv1_HeadVar__2_2));
#line 494 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 494 "ml_string_switch.m"
  }
#line 494 "ml_string_switch.m"
}

#line 464 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0(
#line 464 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_9,
#line 464 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_10,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_11,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_12,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_13,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__DummyOutInitializers_14,
#line 464 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_17,
#line 464 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_18)
#line 464 "ml_string_switch.m"
{
#line 474 "ml_string_switch.m"
  while (MR_TRUE)
#line 474 "ml_string_switch.m"
    {
#line 474 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 474 "ml_string_switch.m"
      {
#line 474 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__Slot_9 == ml_backend__ml_string_switch__TableSize_10);

#line 474 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 472 "ml_string_switch.m"
          *ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_18 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_17;
#line 474 "ml_string_switch.m"
        else
#line 476 "ml_string_switch.m"
          {
#line 476 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__RowInitializer_16;
#line 476 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19_19;
#line 476 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__V_20_20;
#line 476 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StringRval_33;
#line 476 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__NextSlotRval_34;
#line 476 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__OutInitializers_35;
#line 495 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__HashSlotMapEntry_29;
#line 490 "ml_string_switch.m"
            MR_Box ml_backend__ml_string_switch__conv0_HashSlotMapEntry_29;

#line 490 "ml_string_switch.m"
            {
#line 490 "ml_string_switch.m"
              ml_backend__ml_string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[3], ml_backend__ml_string_switch__HashSlotMap_12, ml_backend__ml_string_switch__Slot_9, &ml_backend__ml_string_switch__conv0_HashSlotMapEntry_29);
            }
#line 490 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 490 "ml_string_switch.m"
              {
#line 490 "ml_string_switch.m"
                ml_backend__ml_string_switch__HashSlotMapEntry_29 = ((MR_Word) ml_backend__ml_string_switch__conv0_HashSlotMapEntry_29);
#line 490 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 490 "ml_string_switch.m"
              }
#line 495 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 491 "ml_string_switch.m"
              {
#line 491 "ml_string_switch.m"
                MR_String ml_backend__ml_string_switch__String_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_29, (MR_Integer) 0)));
#line 491 "ml_string_switch.m"
                MR_Integer ml_backend__ml_string_switch__Next_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_29, (MR_Integer) 1)));
#line 491 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__OutRvals_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_29, (MR_Integer) 2)));
#line 491 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_37_37;
#line 491 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_38_38;

#line 492 "ml_string_switch.m"
                {
#line 492 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 492 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_37_37, 1) = ((MR_Box) (ml_backend__ml_string_switch__String_30));
#line 492 "ml_string_switch.m"
                }
#line 492 "ml_string_switch.m"
                {
#line 492 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StringRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 492 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_37_37));
#line 492 "ml_string_switch.m"
                }
#line 493 "ml_string_switch.m"
                {
#line 493 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_38_38, 0) = ((MR_Box) (ml_backend__ml_string_switch__Next_31));
#line 493 "ml_string_switch.m"
                }
#line 493 "ml_string_switch.m"
                {
#line 493 "ml_string_switch.m"
                  ml_backend__ml_string_switch__NextSlotRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 493 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_38_38));
#line 493 "ml_string_switch.m"
                }
#line 494 "ml_string_switch.m"
                {
#line 494 "ml_string_switch.m"
                  ml_backend__ml_string_switch__OutInitializers_35 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[10], ml_backend__ml_string_switch__OutRvals_32);
                }
#line 491 "ml_string_switch.m"
              }
#line 495 "ml_string_switch.m"
            else
#line 496 "ml_string_switch.m"
              {
#line 496 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_40_40;
#line 496 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_41_41;

#line 496 "ml_string_switch.m"
                {
#line 496 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_41_41 = ml_backend__ml_code_util__ml_string_type_0_f_0();
                }
#line 496 "ml_string_switch.m"
                {
#line 496 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 496 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_40_40, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_41_41));
#line 496 "ml_string_switch.m"
                }
#line 496 "ml_string_switch.m"
                {
#line 496 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StringRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 496 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_40_40));
#line 496 "ml_string_switch.m"
                }
#line 497 "ml_string_switch.m"
                ml_backend__ml_string_switch__NextSlotRval_34 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[12]);
#line 498 "ml_string_switch.m"
                ml_backend__ml_string_switch__OutInitializers_35 = ml_backend__ml_string_switch__DummyOutInitializers_14;
#line 496 "ml_string_switch.m"
              }
#line 504 "ml_string_switch.m"
            if ((ml_backend__ml_string_switch__MaybeNextSlotId_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "ml_string_switch.m"
              {
#line 505 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_44_44;
#line 505 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_45_45;

#line 507 "ml_string_switch.m"
                {
#line 507 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_45_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_33));
#line 507 "ml_string_switch.m"
                }
#line 507 "ml_string_switch.m"
                {
#line 507 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_44_44, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_45_45));
#line 507 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutInitializers_35));
#line 507 "ml_string_switch.m"
                }
#line 506 "ml_string_switch.m"
                {
#line 506 "ml_string_switch.m"
                  ml_backend__ml_string_switch__RowInitializer_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_16, 0) = ((MR_Box) (ml_backend__ml_string_switch__StructType_11));
#line 506 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_16, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_44_44));
#line 506 "ml_string_switch.m"
                }
#line 505 "ml_string_switch.m"
              }
#line 504 "ml_string_switch.m"
            else
#line 501 "ml_string_switch.m"
              {
#line 501 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_46_46;
#line 501 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_47_47;
#line 501 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_48_48;
#line 501 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_49_49;

#line 503 "ml_string_switch.m"
                {
#line 503 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_47_47, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_33));
#line 503 "ml_string_switch.m"
                }
#line 503 "ml_string_switch.m"
                {
#line 503 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_49_49, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotRval_34));
#line 503 "ml_string_switch.m"
                }
#line 503 "ml_string_switch.m"
                {
#line 503 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_48_48, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_49_49));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_48_48, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutInitializers_35));
#line 503 "ml_string_switch.m"
                }
#line 503 "ml_string_switch.m"
                {
#line 503 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_46_46, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_47_47));
#line 503 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_46_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_48_48));
#line 503 "ml_string_switch.m"
                }
#line 502 "ml_string_switch.m"
                {
#line 502 "ml_string_switch.m"
                  ml_backend__ml_string_switch__RowInitializer_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_16, 0) = ((MR_Box) (ml_backend__ml_string_switch__StructType_11));
#line 502 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_16, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_46_46));
#line 502 "ml_string_switch.m"
                }
#line 501 "ml_string_switch.m"
              }
#line 477 "ml_string_switch.m"
            {
#line 477 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19_19, 0) = ((MR_Box) (ml_backend__ml_string_switch__RowInitializer_16));
#line 477 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19_19, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_17));
#line 477 "ml_string_switch.m"
            }
#line 478 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_20_20 = (ml_backend__ml_string_switch__Slot_9 + (MR_Integer) 1);
#line 478 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 478 "ml_string_switch.m"
            {
#line 478 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__Slot__tmp_copy_9 = ml_backend__ml_string_switch__V_20_20;
#line 478 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_17 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19_19;

#line 478 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_17 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_17;
#line 478 "ml_string_switch.m"
              ml_backend__ml_string_switch__Slot_9 = ml_backend__ml_string_switch__Slot__tmp_copy_9;
#line 478 "ml_string_switch.m"
            }
#line 478 "ml_string_switch.m"
            continue;
#line 476 "ml_string_switch.m"
          }
#line 474 "ml_string_switch.m"
      }
#line 474 "ml_string_switch.m"
      break;
#line 474 "ml_string_switch.m"
    }
#line 464 "ml_string_switch.m"
}

#line 427 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_2(
#line 427 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 427 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 427 "ml_string_switch.m"
{
#line 427 "ml_string_switch.m"
  {
#line 427 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 427 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 427 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_HeadVar__2_2;

#line 427 "ml_string_switch.m"
    {
#line 427 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 427 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv1_HeadVar__2_2));
#line 427 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 427 "ml_string_switch.m"
  }
#line 427 "ml_string_switch.m"
}

#line 426 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0_1(
#line 426 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 426 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 426 "ml_string_switch.m"
{
#line 426 "ml_string_switch.m"
  {
#line 426 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 426 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 426 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__2_2;

#line 426 "ml_string_switch.m"
    {
#line 426 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_HeadVar__2_2 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 426 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__2_2));
#line 426 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 426 "ml_string_switch.m"
  }
#line 426 "ml_string_switch.m"
}

#line 362 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_12,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_13,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_14,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CaseValues_15,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutVars_16,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__OutTypes_17,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_18,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_19,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_20,
#line 362 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_69,
#line 362 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_70)
#line 362 "ml_string_switch.m"
{
#line 370 "ml_string_switch.m"
  {
#line 370 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_105_105;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_108_108;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_22;
#line 370 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__TableSize_23;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSlotMap_24;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashOp_25;
#line 370 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__NumCollisions_26;
#line 370 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__HashMask_27;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_28;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_29;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_30;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_31;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_32;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ArgTypes_34;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoopPresent_35;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSearchInfo_36;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarLval_41;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarRval_45;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_46;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructTypeNum_47;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructType_48;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FieldIds_49;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_50;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_53;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutFieldIds_54;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeNextSlotFieldId_55;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__DummyOutRvals_57;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__DummyOutInitializers_58;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevRowInitializers_59;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RowInitializers_60;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VectorCommon_61;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_62;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LookupStatements_63;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FoundMatchCommentStatement_65;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MatchStatements_66;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_73_73;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_75_75;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_87_87;
#line 370 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_88_88;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_37;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoopPresent_38;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___Context_39;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_40;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___StringVarLval_42;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopLval_43;
#line 396 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_44;

#line 371 "ml_string_switch.m"
    {
#line 371 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_22 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_18);
    }
#line 374 "ml_string_switch.m"
    {
#line 374 "ml_string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[2], ml_backend__ml_string_switch__CaseValues_15, (MR_Integer) 1, &ml_backend__ml_string_switch__TableSize_23, &ml_backend__ml_string_switch__HashSlotMap_24, &ml_backend__ml_string_switch__HashOp_25, &ml_backend__ml_string_switch__NumCollisions_26);
    }
#line 376 "ml_string_switch.m"
    ml_backend__ml_string_switch__HashMask_27 = (ml_backend__ml_string_switch__TableSize_23 - (MR_Integer) 1);
#line 378 "ml_string_switch.m"
    {
#line 378 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_69, &ml_backend__ml_string_switch__ModuleInfo_28);
    }
#line 379 "ml_string_switch.m"
    {
#line 379 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_28, &ml_backend__ml_string_switch__ModuleName_29);
    }
#line 380 "ml_string_switch.m"
    {
#line 380 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_29);
    }
#line 381 "ml_string_switch.m"
    {
#line 381 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_69, &ml_backend__ml_string_switch__Target_31);
    }
#line 383 "ml_string_switch.m"
    {
#line 383 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_73_73 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 383 "ml_string_switch.m"
    {
#line 383 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_28, ml_backend__ml_string_switch__V_73_73);
    }
#line 386 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_26 == (MR_Integer) 0);
#line 389 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 387 "ml_string_switch.m"
      {
#line 387 "ml_string_switch.m"
        {
#line 387 "ml_string_switch.m"
          ml_backend__ml_string_switch__MLDS_ArgTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_32));
#line 387 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_17));
#line 387 "ml_string_switch.m"
        }
#line 388 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_35 = (MR_Integer) 0;
#line 387 "ml_string_switch.m"
      }
#line 389 "ml_string_switch.m"
    else
#line 390 "ml_string_switch.m"
      {
#line 390 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_74_74;

#line 390 "ml_string_switch.m"
        {
#line 390 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 390 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_string_switch__OutTypes_17));
#line 390 "ml_string_switch.m"
        }
#line 390 "ml_string_switch.m"
        {
#line 390 "ml_string_switch.m"
          ml_backend__ml_string_switch__MLDS_ArgTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_32));
#line 390 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_74_74));
#line 390 "ml_string_switch.m"
        }
#line 391 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_35 = (MR_Integer) 1;
#line 390 "ml_string_switch.m"
      }
#line 394 "ml_string_switch.m"
    {
#line 394 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_9_p_0(ml_backend__ml_string_switch__CodeModel_13, ml_backend__ml_string_switch__CanFail_14, ml_backend__ml_string_switch__LoopPresent_35, ml_backend__ml_string_switch__Context_18, ml_backend__ml_string_switch__MLDS_Context_22, ml_backend__ml_string_switch__Var_12, &ml_backend__ml_string_switch__HashSearchInfo_36, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_69, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_75_75);
    }
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoopPresent_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 1)));
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 2)));
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch__SlotVarLval_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 3)));
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___StringVarLval_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 4)));
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 5)));
#line 396 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 6)));
#line 396 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_36, (MR_Integer) 7)));
#line 399 "ml_string_switch.m"
    {
#line 399 "ml_string_switch.m"
      ml_backend__ml_string_switch__SlotVarRval_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__SlotVarRval_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_41));
#line 399 "ml_string_switch.m"
    }
#line 401 "ml_string_switch.m"
    {
#line 401 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_75_75, &ml_backend__ml_string_switch__GlobalData0_46);
    }
#line 402 "ml_string_switch.m"
    {
#line 402 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_30, ml_backend__ml_string_switch__MLDS_Context_22, ml_backend__ml_string_switch__Target_31, ml_backend__ml_string_switch__MLDS_ArgTypes_34, &ml_backend__ml_string_switch__StructTypeNum_47, &ml_backend__ml_string_switch__StructType_48, &ml_backend__ml_string_switch__FieldIds_49, ml_backend__ml_string_switch__GlobalData0_46, &ml_backend__ml_string_switch__GlobalData1_50);
    }
#line 405 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_26 == (MR_Integer) 0);
#line 413 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 410 "ml_string_switch.m"
      {
#line 410 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_51;
#line 410 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OutFieldIdsPrime_52;

#line 406 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_49)) == (MR_mktag((MR_Integer) 1)));
#line 406 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 406 "ml_string_switch.m"
          {
#line 406 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_49, (MR_Integer) 0)));
#line 406 "ml_string_switch.m"
            ml_backend__ml_string_switch__OutFieldIdsPrime_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_49, (MR_Integer) 1)));
#line 407 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_53 = ml_backend__ml_string_switch__StringFieldIdPrime_51;
#line 408 "ml_string_switch.m"
            ml_backend__ml_string_switch__OutFieldIds_54 = ml_backend__ml_string_switch__OutFieldIdsPrime_52;
#line 409 "ml_string_switch.m"
            ml_backend__ml_string_switch__MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "ml_string_switch.m"
          }
#line 406 "ml_string_switch.m"
        else
#line 411 "ml_string_switch.m"
          {
#line 411 "ml_string_switch.m"
            {
#line 411 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
#line 411 "ml_string_switch.m"
              return;
            }
#line 411 "ml_string_switch.m"
          }
#line 410 "ml_string_switch.m"
      }
#line 413 "ml_string_switch.m"
    else
#line 421 "ml_string_switch.m"
      {
#line 421 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NextSlotFieldIdPrime_56;
#line 421 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_101;
#line 421 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OutFieldIdsPrime_102;
#line 415 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_79_79;

#line 416 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_49)) == (MR_mktag((MR_Integer) 1)));
#line 416 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 416 "ml_string_switch.m"
          {
#line 416 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_49, (MR_Integer) 0)));
#line 416 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_49, (MR_Integer) 1)));
#line 416 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 416 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 416 "ml_string_switch.m"
              {
#line 416 "ml_string_switch.m"
                ml_backend__ml_string_switch__NextSlotFieldIdPrime_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_79_79, (MR_Integer) 0)));
#line 416 "ml_string_switch.m"
                ml_backend__ml_string_switch__OutFieldIdsPrime_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_79_79, (MR_Integer) 1)));
#line 416 "ml_string_switch.m"
              }
#line 416 "ml_string_switch.m"
          }
#line 421 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 418 "ml_string_switch.m"
          {
#line 418 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_53 = ml_backend__ml_string_switch__StringFieldIdPrime_101;
#line 419 "ml_string_switch.m"
            ml_backend__ml_string_switch__OutFieldIds_54 = ml_backend__ml_string_switch__OutFieldIdsPrime_102;
#line 420 "ml_string_switch.m"
            {
#line 420 "ml_string_switch.m"
              ml_backend__ml_string_switch__MaybeNextSlotFieldId_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeNextSlotFieldId_55, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotFieldIdPrime_56));
#line 420 "ml_string_switch.m"
            }
#line 418 "ml_string_switch.m"
          }
#line 421 "ml_string_switch.m"
        else
#line 422 "ml_string_switch.m"
          {
#line 422 "ml_string_switch.m"
            {
#line 422 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "bad FieldIds");
#line 422 "ml_string_switch.m"
              return;
            }
#line 422 "ml_string_switch.m"
          }
#line 421 "ml_string_switch.m"
      }
#line 11525 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_105_105 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 426 "ml_string_switch.m"
    {
#line 426 "ml_string_switch.m"
      ml_backend__ml_string_switch__DummyOutRvals_57 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_string_switch__TypeCtorInfo_105_105, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[8], ml_backend__ml_string_switch__OutTypes_17);
    }
#line 11532 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_108_108 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 427 "ml_string_switch.m"
    {
#line 427 "ml_string_switch.m"
      ml_backend__ml_string_switch__DummyOutInitializers_58 = mercury__list__map_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_105_105, ml_backend__ml_string_switch__TypeCtorInfo_108_108, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[9], ml_backend__ml_string_switch__DummyOutRvals_57);
    }
#line 428 "ml_string_switch.m"
    {
#line 428 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_simple_lookup_slots_8_p_0((MR_Integer) 0, ml_backend__ml_string_switch__TableSize_23, ml_backend__ml_string_switch__StructType_48, ml_backend__ml_string_switch__HashSlotMap_24, ml_backend__ml_string_switch__MaybeNextSlotFieldId_55, ml_backend__ml_string_switch__DummyOutInitializers_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevRowInitializers_59);
    }
#line 431 "ml_string_switch.m"
    {
#line 431 "ml_string_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_108_108, ml_backend__ml_string_switch__RevRowInitializers_59, &ml_backend__ml_string_switch__RowInitializers_60);
    }
#line 433 "ml_string_switch.m"
    {
#line 433 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_30, ml_backend__ml_string_switch__StructTypeNum_47, ml_backend__ml_string_switch__RowInitializers_60, &ml_backend__ml_string_switch__VectorCommon_61, ml_backend__ml_string_switch__GlobalData1_50, &ml_backend__ml_string_switch__GlobalData_62);
    }
#line 435 "ml_string_switch.m"
    {
#line 435 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_62, ml_backend__ml_string_switch__STATE_VARIABLE_Info_75_75, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_87_87);
    }
#line 437 "ml_string_switch.m"
    {
#line 437 "ml_string_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_string_switch__OutVars_16, ml_backend__ml_string_switch__OutTypes_17, ml_backend__ml_string_switch__OutFieldIds_54, ml_backend__ml_string_switch__VectorCommon_61, ml_backend__ml_string_switch__StructType_48, ml_backend__ml_string_switch__SlotVarRval_45, ml_backend__ml_string_switch__MLDS_Context_22, &ml_backend__ml_string_switch__LookupStatements_63, ml_backend__ml_string_switch__STATE_VARIABLE_Info_87_87, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_88_88);
    }
#line 441 "ml_string_switch.m"
    {
#line 441 "ml_string_switch.m"
      ml_backend__ml_string_switch__FoundMatchCommentStatement_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FoundMatchCommentStatement_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[13])));
#line 441 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FoundMatchCommentStatement_65, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_22));
#line 441 "ml_string_switch.m"
    }
#line 447 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__CodeModel_13 == (MR_Integer) 0))
#line 446 "ml_string_switch.m"
      {
#line 446 "ml_string_switch.m"
        ml_backend__ml_string_switch__MatchStatements_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "ml_string_switch.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MatchStatements_66, 0) = ((MR_Box) (ml_backend__ml_string_switch__FoundMatchCommentStatement_65));
#line 446 "ml_string_switch.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MatchStatements_66, 1) = ((MR_Box) (ml_backend__ml_string_switch__LookupStatements_63));
#line 446 "ml_string_switch.m"
      }
#line 447 "ml_string_switch.m"
    else
#line 447 "ml_string_switch.m"
      if ((ml_backend__ml_string_switch__CodeModel_13 == (MR_Integer) 2))
#line 454 "ml_string_switch.m"
        {
#line 455 "ml_string_switch.m"
          {
#line 455 "ml_string_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_simple_lookup_switch\'/11", (MR_String) "model_non");
#line 455 "ml_string_switch.m"
            return;
          }
#line 454 "ml_string_switch.m"
        }
#line 447 "ml_string_switch.m"
      else
#line 448 "ml_string_switch.m"
        {
#line 448 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__SetSuccessTrueStatement_67;
#line 448 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__V_96_96;
#line 448 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__V_97_97;

#line 449 "ml_string_switch.m"
          {
#line 449 "ml_string_switch.m"
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_88_88, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[14]), ml_backend__ml_string_switch__Context_18, &ml_backend__ml_string_switch__SetSuccessTrueStatement_67);
          }
#line 451 "ml_string_switch.m"
          {
#line 451 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_96_96, 0) = ((MR_Box) (ml_backend__ml_string_switch__FoundMatchCommentStatement_65));
#line 451 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_96_96, 1) = ((MR_Box) (ml_backend__ml_string_switch__LookupStatements_63));
#line 451 "ml_string_switch.m"
          }
#line 452 "ml_string_switch.m"
          {
#line 452 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_97_97, 0) = ((MR_Box) (ml_backend__ml_string_switch__SetSuccessTrueStatement_67));
#line 452 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "ml_string_switch.m"
          }
#line 451 "ml_string_switch.m"
          {
#line 451 "ml_string_switch.m"
            ml_backend__ml_string_switch__MatchStatements_66 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__V_96_96, ml_backend__ml_string_switch__V_97_97);
          }
#line 448 "ml_string_switch.m"
        }
#line 459 "ml_string_switch.m"
    {
#line 459 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_14_p_0(ml_backend__ml_string_switch__MLDS_Context_22, (MR_String) "hashed string simple lookup switch", ml_backend__ml_string_switch__HashSearchInfo_36, ml_backend__ml_string_switch__HashOp_25, ml_backend__ml_string_switch__VectorCommon_61, ml_backend__ml_string_switch__StructType_48, ml_backend__ml_string_switch__StringFieldId_53, ml_backend__ml_string_switch__MaybeNextSlotFieldId_55, ml_backend__ml_string_switch__HashMask_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__MatchStatements_66, ml_backend__ml_string_switch__Statements_20, ml_backend__ml_string_switch__STATE_VARIABLE_Info_88_88, ml_backend__ml_string_switch__STATE_VARIABLE_Info_70);
#line 459 "ml_string_switch.m"
      return;
    }
#line 370 "ml_string_switch.m"
  }
#line 362 "ml_string_switch.m"
}

#line 336 "ml_string_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_string_switch__make_hash_match_1_f_0(
#line 336 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_3)
#line 336 "ml_string_switch.m"
{
#line 338 "ml_string_switch.m"
  {
#line 338 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 338 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HeadVar__2_2;
#line 338 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_4_4;
#line 338 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_5_5;

#line 338 "ml_string_switch.m"
    {
#line 338 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_string_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_5_5, 0) = ((MR_Box) (ml_backend__ml_string_switch__Slot_3));
#line 338 "ml_string_switch.m"
    }
#line 338 "ml_string_switch.m"
    {
#line 338 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 338 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_4_4, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_5_5));
#line 338 "ml_string_switch.m"
    }
#line 338 "ml_string_switch.m"
    {
#line 338 "ml_string_switch.m"
      ml_backend__ml_string_switch__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_4_4));
#line 338 "ml_string_switch.m"
    }
#line 338 "ml_string_switch.m"
    return ml_backend__ml_string_switch__HeadVar__2_2;
#line 338 "ml_string_switch.m"
  }
#line 336 "ml_string_switch.m"
}

#line 330 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0_1(
#line 330 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 330 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 330 "ml_string_switch.m"
{
#line 330 "ml_string_switch.m"
  {
#line 330 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 330 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 330 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_HeadVar__2_2;

#line 330 "ml_string_switch.m"
    {
#line 330 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_HeadVar__2_2 = ml_backend__ml_string_switch__make_hash_match_1_f_0(((MR_Integer) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 330 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_HeadVar__2_2));
#line 330 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 330 "ml_string_switch.m"
  }
#line 330 "ml_string_switch.m"
}

#line 320 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeMap_1,
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 320 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0_3,
#line 320 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Cases_4)
#line 320 "ml_string_switch.m"
{
#line 324 "ml_string_switch.m"
  while (MR_TRUE)
#line 324 "ml_string_switch.m"
    {
#line 324 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 324 "ml_string_switch.m"
      {
#line 324 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded;

#line 324 "ml_string_switch.m"
        if ((ml_backend__ml_string_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "ml_string_switch.m"
          *ml_backend__ml_string_switch__STATE_VARIABLE_Cases_4 = ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0_3;
#line 324 "ml_string_switch.m"
        else
#line 325 "ml_string_switch.m"
          {
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Entry_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Entries_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__CaseNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Entry_10, (MR_Integer) 0)));
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__HashSlots_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Entry_10, (MR_Integer) 1)));
#line 325 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__FirstHashSlot_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlots_14, (MR_Integer) 0)));
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__RevLaterHashSlots_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlots_14, (MR_Integer) 1)));
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__LaterHashSlots_17;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__FirstMatchCond_18;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__LaterMatchConds_19;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__CaseStatement_20;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__Case_21;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Cases_25_25;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_33_33;
#line 325 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__V_34_34;
#line 331 "ml_string_switch.m"
            MR_Box ml_backend__ml_string_switch__conv1_CaseStatement_20;

#line 328 "ml_string_switch.m"
            {
#line 328 "ml_string_switch.m"
              mercury__list__reverse_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_27_27, ml_backend__ml_string_switch__RevLaterHashSlots_16, &ml_backend__ml_string_switch__LaterHashSlots_17);
            }
#line 338 "ml_string_switch.m"
            {
#line 338 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_string_switch.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_34_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstHashSlot_15));
#line 338 "ml_string_switch.m"
            }
#line 338 "ml_string_switch.m"
            {
#line 338 "ml_string_switch.m"
              ml_backend__ml_string_switch__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 338 "ml_string_switch.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_33_33, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_34_34));
#line 338 "ml_string_switch.m"
            }
#line 338 "ml_string_switch.m"
            {
#line 338 "ml_string_switch.m"
              ml_backend__ml_string_switch__FirstMatchCond_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__FirstMatchCond_18, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_33_33));
#line 338 "ml_string_switch.m"
            }
#line 330 "ml_string_switch.m"
            {
#line 330 "ml_string_switch.m"
              ml_backend__ml_string_switch__LaterMatchConds_19 = mercury__list__map_2_f_0(ml_backend__ml_string_switch__TypeCtorInfo_27_27, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[7], ml_backend__ml_string_switch__LaterHashSlots_17);
            }
#line 331 "ml_string_switch.m"
            {
#line 331 "ml_string_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__CodeMap_1, ml_backend__ml_string_switch__CaseNum_13, &ml_backend__ml_string_switch__conv1_CaseStatement_20);
            }
#line 331 "ml_string_switch.m"
            ml_backend__ml_string_switch__CaseStatement_20 = ((MR_Word) ml_backend__ml_string_switch__conv1_CaseStatement_20);
#line 332 "ml_string_switch.m"
            {
#line 332 "ml_string_switch.m"
              ml_backend__ml_string_switch__Case_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 332 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Case_21, 0) = ((MR_Box) (ml_backend__ml_string_switch__FirstMatchCond_18));
#line 332 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Case_21, 1) = ((MR_Box) (ml_backend__ml_string_switch__LaterMatchConds_19));
#line 332 "ml_string_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Case_21, 2) = ((MR_Box) (ml_backend__ml_string_switch__CaseStatement_20));
#line 332 "ml_string_switch.m"
            }
#line 333 "ml_string_switch.m"
            {
#line 333 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_Cases_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_Cases_25_25, 0) = ((MR_Box) (ml_backend__ml_string_switch__Case_21));
#line 333 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_Cases_25_25, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0_3));
#line 333 "ml_string_switch.m"
            }
#line 334 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 334 "ml_string_switch.m"
            {
#line 334 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_string_switch__Entries_11;
#line 334 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0__tmp_copy_3 = ml_backend__ml_string_switch__STATE_VARIABLE_Cases_25_25;

#line 334 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0_3 = ml_backend__ml_string_switch__STATE_VARIABLE_Cases_0__tmp_copy_3;
#line 334 "ml_string_switch.m"
              ml_backend__ml_string_switch__HeadVar__2_2 = ml_backend__ml_string_switch__HeadVar__2__tmp_copy_2;
#line 334 "ml_string_switch.m"
            }
#line 334 "ml_string_switch.m"
            continue;
#line 325 "ml_string_switch.m"
          }
#line 324 "ml_string_switch.m"
      }
#line 324 "ml_string_switch.m"
      break;
#line 324 "ml_string_switch.m"
    }
#line 320 "ml_string_switch.m"
}

#line 269 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0(
#line 269 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__Slot_10,
#line 269 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__TableSize_11,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HashSlotMap_12,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__StructType_13,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__MaybeNextSlotId_14,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_18,
#line 269 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19,
#line 269 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20,
#line 269 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_21)
#line 269 "ml_string_switch.m"
{
#line 279 "ml_string_switch.m"
  while (MR_TRUE)
#line 279 "ml_string_switch.m"
    {
#line 279 "ml_string_switch.m"
      /* tailcall optimized into a loop */
#line 279 "ml_string_switch.m"
      {
#line 279 "ml_string_switch.m"
        MR_bool ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__Slot_10 == ml_backend__ml_string_switch__TableSize_11);

#line 279 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 278 "ml_string_switch.m"
          {
#line 278 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_21 = ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20;
#line 278 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_19 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_18;
#line 278 "ml_string_switch.m"
          }
#line 279 "ml_string_switch.m"
        else
#line 281 "ml_string_switch.m"
          {
#line 281 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__RowInitializer_17;
#line 281 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_22_22;
#line 281 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_23_23;
#line 281 "ml_string_switch.m"
            MR_Integer ml_backend__ml_string_switch__V_24_24;
#line 281 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__StringRval_40;
#line 281 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__NextSlotRval_41;
#line 306 "ml_string_switch.m"
            MR_Word ml_backend__ml_string_switch__HashSlotMapEntry_36;
#line 294 "ml_string_switch.m"
            MR_Box ml_backend__ml_string_switch__conv0_HashSlotMapEntry_36;

#line 294 "ml_string_switch.m"
            {
#line 294 "ml_string_switch.m"
              ml_backend__ml_string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_string_switch_scalar_common_2[1], ml_backend__ml_string_switch__HashSlotMap_12, ml_backend__ml_string_switch__Slot_10, &ml_backend__ml_string_switch__conv0_HashSlotMapEntry_36);
            }
#line 294 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 294 "ml_string_switch.m"
              {
#line 294 "ml_string_switch.m"
                ml_backend__ml_string_switch__HashSlotMapEntry_36 = ((MR_Word) ml_backend__ml_string_switch__conv0_HashSlotMapEntry_36);
#line 294 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 294 "ml_string_switch.m"
              }
#line 306 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 295 "ml_string_switch.m"
              {
#line 295 "ml_string_switch.m"
                MR_String ml_backend__ml_string_switch__String_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_36, (MR_Integer) 0)));
#line 295 "ml_string_switch.m"
                MR_Integer ml_backend__ml_string_switch__Next_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_36, (MR_Integer) 1)));
#line 295 "ml_string_switch.m"
                MR_Integer ml_backend__ml_string_switch__CaseNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSlotMapEntry_36, (MR_Integer) 2)));
#line 295 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_47_47;
#line 295 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_48_48;
#line 302 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__OldEntry_42;
#line 298 "ml_string_switch.m"
                MR_Box ml_backend__ml_string_switch__conv1_OldEntry_42;

#line 296 "ml_string_switch.m"
                {
#line 296 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 296 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_string_switch__String_37));
#line 296 "ml_string_switch.m"
                }
#line 296 "ml_string_switch.m"
                {
#line 296 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StringRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 296 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_40, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_47_47));
#line 296 "ml_string_switch.m"
                }
#line 297 "ml_string_switch.m"
                {
#line 297 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__V_48_48, 0) = ((MR_Box) (ml_backend__ml_string_switch__Next_38));
#line 297 "ml_string_switch.m"
                }
#line 297 "ml_string_switch.m"
                {
#line 297 "ml_string_switch.m"
                  ml_backend__ml_string_switch__NextSlotRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 297 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__NextSlotRval_41, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_48_48));
#line 297 "ml_string_switch.m"
                }
#line 298 "ml_string_switch.m"
                {
#line 298 "ml_string_switch.m"
                  ml_backend__ml_string_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0, ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20, ml_backend__ml_string_switch__CaseNum_39, &ml_backend__ml_string_switch__conv1_OldEntry_42);
                }
#line 298 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 298 "ml_string_switch.m"
                  {
#line 298 "ml_string_switch.m"
                    ml_backend__ml_string_switch__OldEntry_42 = ((MR_Word) ml_backend__ml_string_switch__conv1_OldEntry_42);
#line 298 "ml_string_switch.m"
                    ml_backend__ml_string_switch__succeeded = MR_TRUE;
#line 298 "ml_string_switch.m"
                  }
#line 302 "ml_string_switch.m"
                if (ml_backend__ml_string_switch__succeeded)
#line 299 "ml_string_switch.m"
                  {
#line 299 "ml_string_switch.m"
                    MR_Integer ml_backend__ml_string_switch__OldFirstSlot_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__OldEntry_42, (MR_Integer) 0)));
#line 299 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__OldLaterSlots_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__OldEntry_42, (MR_Integer) 1)));
#line 299 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__NewEntry_45;
#line 299 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__V_49_49;

#line 300 "ml_string_switch.m"
                    {
#line 300 "ml_string_switch.m"
                      ml_backend__ml_string_switch__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_49_49, 0) = ((MR_Box) (ml_backend__ml_string_switch__Slot_10));
#line 300 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_49_49, 1) = ((MR_Box) (ml_backend__ml_string_switch__OldLaterSlots_44));
#line 300 "ml_string_switch.m"
                    }
#line 300 "ml_string_switch.m"
                    {
#line 300 "ml_string_switch.m"
                      ml_backend__ml_string_switch__NewEntry_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NewEntry_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__OldFirstSlot_43));
#line 300 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NewEntry_45, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_49_49));
#line 300 "ml_string_switch.m"
                    }
#line 301 "ml_string_switch.m"
                    {
#line 301 "ml_string_switch.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0, ml_backend__ml_string_switch__CaseNum_39, ((MR_Box) (ml_backend__ml_string_switch__NewEntry_45)), ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20, &ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_22_22);
                    }
#line 299 "ml_string_switch.m"
                  }
#line 302 "ml_string_switch.m"
                else
#line 303 "ml_string_switch.m"
                  {
#line 303 "ml_string_switch.m"
                    MR_Word ml_backend__ml_string_switch__NewEntry_65;

#line 303 "ml_string_switch.m"
                    {
#line 303 "ml_string_switch.m"
                      ml_backend__ml_string_switch__NewEntry_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NewEntry_65, 0) = ((MR_Box) (ml_backend__ml_string_switch__Slot_10));
#line 303 "ml_string_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__NewEntry_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "ml_string_switch.m"
                    }
#line 304 "ml_string_switch.m"
                    {
#line 304 "ml_string_switch.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0, ml_backend__ml_string_switch__CaseNum_39, ((MR_Box) (ml_backend__ml_string_switch__NewEntry_65)), ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20, &ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_22_22);
                    }
#line 303 "ml_string_switch.m"
                  }
#line 295 "ml_string_switch.m"
              }
#line 306 "ml_string_switch.m"
            else
#line 307 "ml_string_switch.m"
              {
#line 307 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_53_53;
#line 307 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_54_54;

#line 307 "ml_string_switch.m"
                {
#line 307 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_54_54 = ml_backend__ml_code_util__ml_string_type_0_f_0();
                }
#line 307 "ml_string_switch.m"
                {
#line 307 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 307 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_53_53, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_54_54));
#line 307 "ml_string_switch.m"
                }
#line 307 "ml_string_switch.m"
                {
#line 307 "ml_string_switch.m"
                  ml_backend__ml_string_switch__StringRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__StringRval_40, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_53_53));
#line 307 "ml_string_switch.m"
                }
#line 308 "ml_string_switch.m"
                ml_backend__ml_string_switch__NextSlotRval_41 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[12]);
#line 308 "ml_string_switch.m"
                ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_22_22 = ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20;
#line 307 "ml_string_switch.m"
              }
#line 314 "ml_string_switch.m"
            if ((ml_backend__ml_string_switch__MaybeNextSlotId_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "ml_string_switch.m"
              {
#line 315 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_57_57;
#line 315 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_58_58;

#line 317 "ml_string_switch.m"
                {
#line 317 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_58_58, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_40));
#line 317 "ml_string_switch.m"
                }
#line 317 "ml_string_switch.m"
                {
#line 317 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_57_57, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_58_58));
#line 317 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "ml_string_switch.m"
                }
#line 316 "ml_string_switch.m"
                {
#line 316 "ml_string_switch.m"
                  ml_backend__ml_string_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_string_switch__StructType_13));
#line 316 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_57_57));
#line 316 "ml_string_switch.m"
                }
#line 315 "ml_string_switch.m"
              }
#line 314 "ml_string_switch.m"
            else
#line 311 "ml_string_switch.m"
              {
#line 311 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_60_60;
#line 311 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_61_61;
#line 311 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_62_62;
#line 311 "ml_string_switch.m"
                MR_Word ml_backend__ml_string_switch__V_63_63;

#line 313 "ml_string_switch.m"
                {
#line 313 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_61_61, 0) = ((MR_Box) (ml_backend__ml_string_switch__StringRval_40));
#line 313 "ml_string_switch.m"
                }
#line 313 "ml_string_switch.m"
                {
#line 313 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotRval_41));
#line 313 "ml_string_switch.m"
                }
#line 313 "ml_string_switch.m"
                {
#line 313 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_63_63));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "ml_string_switch.m"
                }
#line 313 "ml_string_switch.m"
                {
#line 313 "ml_string_switch.m"
                  ml_backend__ml_string_switch__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_60_60, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_61_61));
#line 313 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_60_60, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_62_62));
#line 313 "ml_string_switch.m"
                }
#line 312 "ml_string_switch.m"
                {
#line 312 "ml_string_switch.m"
                  ml_backend__ml_string_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_string_switch__StructType_13));
#line 312 "ml_string_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_string_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_60_60));
#line 312 "ml_string_switch.m"
                }
#line 311 "ml_string_switch.m"
              }
#line 282 "ml_string_switch.m"
            {
#line 282 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_23_23, 0) = ((MR_Box) (ml_backend__ml_string_switch__RowInitializer_17));
#line 282 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_23_23, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_18));
#line 282 "ml_string_switch.m"
            }
#line 283 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_24_24 = (ml_backend__ml_string_switch__Slot_10 + (MR_Integer) 1);
#line 283 "ml_string_switch.m"
            /* direct tailcall eliminated */
#line 283 "ml_string_switch.m"
            {
#line 283 "ml_string_switch.m"
              MR_Integer ml_backend__ml_string_switch__Slot__tmp_copy_10 = ml_backend__ml_string_switch__V_24_24;
#line 283 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_18 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_23_23;
#line 283 "ml_string_switch.m"
              MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0__tmp_copy_20 = ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_22_22;

#line 283 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0_20 = ml_backend__ml_string_switch__STATE_VARIABLE_RevMap_0__tmp_copy_20;
#line 283 "ml_string_switch.m"
              ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0_18 = ml_backend__ml_string_switch__STATE_VARIABLE_RevRowInitializers_0__tmp_copy_18;
#line 283 "ml_string_switch.m"
              ml_backend__ml_string_switch__Slot_10 = ml_backend__ml_string_switch__Slot__tmp_copy_10;
#line 283 "ml_string_switch.m"
            }
#line 283 "ml_string_switch.m"
            continue;
#line 281 "ml_string_switch.m"
          }
#line 279 "ml_string_switch.m"
      }
#line 279 "ml_string_switch.m"
      break;
#line 279 "ml_string_switch.m"
    }
#line 269 "ml_string_switch.m"
}

#line 246 "ml_string_switch.m"
static MR_String MR_CALL 
ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(
#line 246 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedConsId_3)
#line 246 "ml_string_switch.m"
{
#line 248 "ml_string_switch.m"
  {
#line 248 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 248 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__String_4;
#line 248 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ConsTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedConsId_3, (MR_Integer) 1)));
#line 249 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedConsId_3, (MR_Integer) 0)));
#line 252 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__ConsString_7;

#line 250 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__ConsTag_6)) == (MR_mktag((MR_Integer) 1)));
#line 250 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 250 "ml_string_switch.m"
      {
#line 250 "ml_string_switch.m"
        ml_backend__ml_string_switch__ConsString_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__ConsTag_6, (MR_Integer) 0)));
#line 251 "ml_string_switch.m"
        {
#line 251 "ml_string_switch.m"
          MR_String ml_backend__ml_string_switch__V_9_9;

#line 251 "ml_string_switch.m"
          {
#line 251 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_9_9 = mercury__string__f_43_43_2_f_0(ml_backend__ml_string_switch__ConsString_7, (MR_String) "\"");
          }
#line 251 "ml_string_switch.m"
          {
#line 251 "ml_string_switch.m"
            return ml_backend__ml_string_switch__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ml_backend__ml_string_switch__V_9_9);
          }
#line 251 "ml_string_switch.m"
        }
#line 250 "ml_string_switch.m"
      }
#line 250 "ml_string_switch.m"
    else
#line 253 "ml_string_switch.m"
      {
#line 253 "ml_string_switch.m"
        {
#line 253 "ml_string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "function \140ml_backend.ml_string_switch.gen_string_switch_case_comment\'/1", (MR_String) "non-string tag");
        }
#line 253 "ml_string_switch.m"
      }
#line 248 "ml_string_switch.m"
    return ml_backend__ml_string_switch__String_4;
#line 248 "ml_string_switch.m"
  }
#line 246 "ml_string_switch.m"
}

#line 226 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0_1(
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 226 "ml_string_switch.m"
{
#line 226 "ml_string_switch.m"
  {
#line 226 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 226 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 226 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__conv0_String_4;

#line 226 "ml_string_switch.m"
    {
#line 226 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 226 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_String_4));
#line 226 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 226 "ml_string_switch.m"
  }
#line 226 "ml_string_switch.m"
}

#line 206 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0(
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_10,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedCase_11,
#line 206 "ml_string_switch.m"
  MR_Integer * ml_backend__ml_string_switch__CaseNum_12,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_16,
#line 206 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_17,
#line 206 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_18,
#line 206 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_19)
#line 206 "ml_string_switch.m"
{
#line 212 "ml_string_switch.m"
  {
#line 212 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MainTaggedConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_11, (MR_Integer) 0)));
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OtherTaggedConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_11, (MR_Integer) 1)));
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Goal_35;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GoalStatement_36;
#line 212 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__MainString_37;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OtherStrings_38;
#line 212 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__Strings_39;
#line 212 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__CommentString_40;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GoalInfo_42;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Context_43;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_44;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Comment_45;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseStatement_46;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_50_50;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_52_52;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_53_53;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_54_54;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_56_56;
#line 212 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_57_57;
#line 237 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___GoalExpr_41;

#line 222 "ml_string_switch.m"
    *ml_backend__ml_string_switch__CaseNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_11, (MR_Integer) 2)));
#line 222 "ml_string_switch.m"
    ml_backend__ml_string_switch__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_11, (MR_Integer) 3)));
#line 224 "ml_string_switch.m"
    {
#line 224 "ml_string_switch.m"
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_string_switch__CodeModel_10, ml_backend__ml_string_switch__Goal_35, &ml_backend__ml_string_switch__GoalStatement_36, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_18, ml_backend__ml_string_switch__STATE_VARIABLE_Info_19);
    }
#line 225 "ml_string_switch.m"
    {
#line 225 "ml_string_switch.m"
      ml_backend__ml_string_switch__MainString_37 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(ml_backend__ml_string_switch__MainTaggedConsId_33);
    }
#line 226 "ml_string_switch.m"
    {
#line 226 "ml_string_switch.m"
      ml_backend__ml_string_switch__OtherStrings_38 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[6], ml_backend__ml_string_switch__OtherTaggedConsIds_34);
    }
#line 228 "ml_string_switch.m"
    {
#line 228 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__MainString_37));
#line 228 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_50_50, 1) = ((MR_Box) (ml_backend__ml_string_switch__OtherStrings_38));
#line 228 "ml_string_switch.m"
    }
#line 228 "ml_string_switch.m"
    {
#line 228 "ml_string_switch.m"
      ml_backend__ml_string_switch__Strings_39 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__ml_string_switch__V_50_50);
    }
#line 236 "ml_string_switch.m"
    {
#line 236 "ml_string_switch.m"
      ml_backend__ml_string_switch__CommentString_40 = mercury__string__f_43_43_2_f_0((MR_String) "case ", ml_backend__ml_string_switch__Strings_39);
    }
#line 237 "ml_string_switch.m"
    ml_backend__ml_string_switch___GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Goal_35, (MR_Integer) 0)));
#line 237 "ml_string_switch.m"
    ml_backend__ml_string_switch__GoalInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Goal_35, (MR_Integer) 1)));
#line 238 "ml_string_switch.m"
    {
#line 238 "ml_string_switch.m"
      ml_backend__ml_string_switch__Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_string_switch__GoalInfo_42);
    }
#line 239 "ml_string_switch.m"
    {
#line 239 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_44 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_43);
    }
#line 240 "ml_string_switch.m"
    {
#line 240 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_53_53, 0) = ((MR_Box) (ml_backend__ml_string_switch__CommentString_40));
#line 240 "ml_string_switch.m"
    }
#line 240 "ml_string_switch.m"
    {
#line 240 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 240 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_53_53));
#line 240 "ml_string_switch.m"
    }
#line 240 "ml_string_switch.m"
    {
#line 240 "ml_string_switch.m"
      ml_backend__ml_string_switch__Comment_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Comment_45, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_52_52));
#line 240 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Comment_45, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_44));
#line 240 "ml_string_switch.m"
    }
#line 242 "ml_string_switch.m"
    {
#line 242 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_57_57, 0) = ((MR_Box) (ml_backend__ml_string_switch__GoalStatement_36));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "ml_string_switch.m"
    }
#line 242 "ml_string_switch.m"
    {
#line 242 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_56_56, 0) = ((MR_Box) (ml_backend__ml_string_switch__Comment_45));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_56_56, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_57_57));
#line 242 "ml_string_switch.m"
    }
#line 242 "ml_string_switch.m"
    {
#line 242 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_54_54, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_56_56));
#line 242 "ml_string_switch.m"
    }
#line 242 "ml_string_switch.m"
    {
#line 242 "ml_string_switch.m"
      ml_backend__ml_string_switch__CaseStatement_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseStatement_46, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_54_54));
#line 242 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseStatement_46, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_44));
#line 242 "ml_string_switch.m"
    }
#line 244 "ml_string_switch.m"
    {
#line 244 "ml_string_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, *ml_backend__ml_string_switch__CaseNum_12, ((MR_Box) (ml_backend__ml_string_switch__CaseStatement_46)), ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_16, ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_17);
#line 244 "ml_string_switch.m"
      return;
    }
#line 212 "ml_string_switch.m"
  }
#line 206 "ml_string_switch.m"
}

#line 195 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__add_to_strs_casenums_4_p_0(
#line 195 "ml_string_switch.m"
  MR_Integer ml_backend__ml_string_switch__CaseNum_5,
#line 195 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__TaggedConsId_6,
#line 195 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_0_11,
#line 195 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_12)
#line 195 "ml_string_switch.m"
{
#line 198 "ml_string_switch.m"
  {
#line 198 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 198 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ConsTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedConsId_6, (MR_Integer) 1)));
#line 199 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedConsId_6, (MR_Integer) 0)));
#line 202 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__String_10;

#line 200 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__ConsTag_9)) == (MR_mktag((MR_Integer) 1)));
#line 200 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 200 "ml_string_switch.m"
      {
#line 200 "ml_string_switch.m"
        ml_backend__ml_string_switch__String_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__ConsTag_9, (MR_Integer) 0)));
#line 201 "ml_string_switch.m"
        {
#line 201 "ml_string_switch.m"
          MR_Word ml_backend__ml_string_switch__V_14_14;

#line 201 "ml_string_switch.m"
          {
#line 201 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_14_14, 0) = ((MR_Box) (ml_backend__ml_string_switch__String_10));
#line 201 "ml_string_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_14_14, 1) = ((MR_Box) (ml_backend__ml_string_switch__CaseNum_5));
#line 201 "ml_string_switch.m"
          }
#line 201 "ml_string_switch.m"
          {
#line 201 "ml_string_switch.m"
            MR_Word base;
#line 201 "ml_string_switch.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "ml_string_switch.m"
            *ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_12 = base;
#line 201 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_14_14));
#line 201 "ml_string_switch.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_0_11));
#line 201 "ml_string_switch.m"
          }
#line 201 "ml_string_switch.m"
        }
#line 200 "ml_string_switch.m"
      }
#line 200 "ml_string_switch.m"
    else
#line 203 "ml_string_switch.m"
      {
#line 203 "ml_string_switch.m"
        {
#line 203 "ml_string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.add_to_strs_casenums\'/4", (MR_String) "non-string tag");
#line 203 "ml_string_switch.m"
          return;
        }
#line 203 "ml_string_switch.m"
      }
#line 198 "ml_string_switch.m"
  }
#line 195 "ml_string_switch.m"
}

#line 192 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_2(
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 192 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_2,
#line 192 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_3)
#line 192 "ml_string_switch.m"
{
#line 192 "ml_string_switch.m"
  {
#line 192 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 192 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_STATE_VARIABLE_StrsCaseNums_12;

#line 192 "ml_string_switch.m"
    {
#line 192 "ml_string_switch.m"
      ml_backend__ml_string_switch__add_to_strs_casenums_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_2), &ml_backend__ml_string_switch__conv1_STATE_VARIABLE_StrsCaseNums_12);
    }
#line 192 "ml_string_switch.m"
    *ml_backend__ml_string_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_string_switch__conv1_STATE_VARIABLE_StrsCaseNums_12));
#line 192 "ml_string_switch.m"
  }
#line 192 "ml_string_switch.m"
}

#line 226 "ml_string_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_1(
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 226 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1)
#line 226 "ml_string_switch.m"
{
#line 226 "ml_string_switch.m"
  {
#line 226 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__wrapper_arg_2;
#line 226 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 226 "ml_string_switch.m"
    MR_String ml_backend__ml_string_switch__conv0_String_4;

#line 226 "ml_string_switch.m"
    {
#line 226 "ml_string_switch.m"
      ml_backend__ml_string_switch__conv0_String_4 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1));
    }
#line 226 "ml_string_switch.m"
    ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv0_String_4));
#line 226 "ml_string_switch.m"
    return ml_backend__ml_string_switch__wrapper_arg_2;
#line 226 "ml_string_switch.m"
  }
#line 226 "ml_string_switch.m"
}

#line 177 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__1_1,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__HeadVar__2_2,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__HeadVar__3_3,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_4,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_5,
#line 177 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_6,
#line 177 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_7)
#line 177 "ml_string_switch.m"
{
#line 182 "ml_string_switch.m"
  {
#line 182 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;

#line 182 "ml_string_switch.m"
    if ((ml_backend__ml_string_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "ml_string_switch.m"
      {
#line 182 "ml_string_switch.m"
        *ml_backend__ml_string_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_Info_7 = ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_6;
#line 183 "ml_string_switch.m"
        *ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_5 = ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_4;
#line 182 "ml_string_switch.m"
      }
#line 182 "ml_string_switch.m"
    else
#line 185 "ml_string_switch.m"
      {
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TaggedCase_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__TaggedCases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__CaseNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 2)));
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__MainTaggedConsId_22;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OtherTaggedConsIds_23;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_31_31;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_32_32;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_33_33;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_36_36;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_37_37;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__MainTaggedConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 0)));
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OtherTaggedConsIds_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 1)));
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__Goal_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 3)));
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__GoalStatement_56;
#line 185 "ml_string_switch.m"
        MR_String ml_backend__ml_string_switch__MainString_57;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__OtherStrings_58;
#line 185 "ml_string_switch.m"
        MR_String ml_backend__ml_string_switch__Strings_59;
#line 185 "ml_string_switch.m"
        MR_String ml_backend__ml_string_switch__CommentString_60;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__GoalInfo_62;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__Context_63;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__MLDS_Context_64;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__Comment_65;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__CaseStatement_66;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_70_70;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_72_72;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_73_73;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_74_74;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_76_76;
#line 185 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_77_77;
#line 237 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch___GoalExpr_61;
#line 190 "ml_string_switch.m"
        MR_Integer ml_backend__ml_string_switch__V_24_24;
#line 190 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_25_25;
#line 192 "ml_string_switch.m"
        MR_Box ml_backend__ml_string_switch__conv2_HeadVar__3_3;

#line 224 "ml_string_switch.m"
        {
#line 224 "ml_string_switch.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_string_switch__HeadVar__1_1, ml_backend__ml_string_switch__Goal_55, &ml_backend__ml_string_switch__GoalStatement_56, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_6, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_32_32);
        }
#line 225 "ml_string_switch.m"
        {
#line 225 "ml_string_switch.m"
          ml_backend__ml_string_switch__MainString_57 = ml_backend__ml_string_switch__gen_string_switch_case_comment_1_f_0(ml_backend__ml_string_switch__MainTaggedConsId_53);
        }
#line 226 "ml_string_switch.m"
        {
#line 226 "ml_string_switch.m"
          ml_backend__ml_string_switch__OtherStrings_58 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[5], ml_backend__ml_string_switch__OtherTaggedConsIds_54);
        }
#line 228 "ml_string_switch.m"
        {
#line 228 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_70_70, 0) = ((MR_Box) (ml_backend__ml_string_switch__MainString_57));
#line 228 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_70_70, 1) = ((MR_Box) (ml_backend__ml_string_switch__OtherStrings_58));
#line 228 "ml_string_switch.m"
        }
#line 228 "ml_string_switch.m"
        {
#line 228 "ml_string_switch.m"
          ml_backend__ml_string_switch__Strings_59 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__ml_string_switch__V_70_70);
        }
#line 236 "ml_string_switch.m"
        {
#line 236 "ml_string_switch.m"
          ml_backend__ml_string_switch__CommentString_60 = mercury__string__f_43_43_2_f_0((MR_String) "case ", ml_backend__ml_string_switch__Strings_59);
        }
#line 237 "ml_string_switch.m"
        ml_backend__ml_string_switch___GoalExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Goal_55, (MR_Integer) 0)));
#line 237 "ml_string_switch.m"
        ml_backend__ml_string_switch__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Goal_55, (MR_Integer) 1)));
#line 238 "ml_string_switch.m"
        {
#line 238 "ml_string_switch.m"
          ml_backend__ml_string_switch__Context_63 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_string_switch__GoalInfo_62);
        }
#line 239 "ml_string_switch.m"
        {
#line 239 "ml_string_switch.m"
          ml_backend__ml_string_switch__MLDS_Context_64 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_63);
        }
#line 240 "ml_string_switch.m"
        {
#line 240 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_73_73, 0) = ((MR_Box) (ml_backend__ml_string_switch__CommentString_60));
#line 240 "ml_string_switch.m"
        }
#line 240 "ml_string_switch.m"
        {
#line 240 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 240 "ml_string_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_73_73));
#line 240 "ml_string_switch.m"
        }
#line 240 "ml_string_switch.m"
        {
#line 240 "ml_string_switch.m"
          ml_backend__ml_string_switch__Comment_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Comment_65, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_72_72));
#line 240 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__Comment_65, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_64));
#line 240 "ml_string_switch.m"
        }
#line 242 "ml_string_switch.m"
        {
#line 242 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_77_77, 0) = ((MR_Box) (ml_backend__ml_string_switch__GoalStatement_56));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "ml_string_switch.m"
        }
#line 242 "ml_string_switch.m"
        {
#line 242 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_76_76, 0) = ((MR_Box) (ml_backend__ml_string_switch__Comment_65));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_76_76, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_77_77));
#line 242 "ml_string_switch.m"
        }
#line 242 "ml_string_switch.m"
        {
#line 242 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_74_74, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_76_76));
#line 242 "ml_string_switch.m"
        }
#line 242 "ml_string_switch.m"
        {
#line 242 "ml_string_switch.m"
          ml_backend__ml_string_switch__CaseStatement_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseStatement_66, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_74_74));
#line 242 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseStatement_66, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_64));
#line 242 "ml_string_switch.m"
        }
#line 244 "ml_string_switch.m"
        {
#line 244 "ml_string_switch.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_string_switch__CaseNum_21, ((MR_Box) (ml_backend__ml_string_switch__CaseStatement_66)), ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_0_4, &ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_31_31);
        }
#line 188 "ml_string_switch.m"
        {
#line 188 "ml_string_switch.m"
          ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(ml_backend__ml_string_switch__HeadVar__1_1, ml_backend__ml_string_switch__TaggedCases_17, &ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_33_33, ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_31_31, ml_backend__ml_string_switch__STATE_VARIABLE_CodeMap_5, ml_backend__ml_string_switch__STATE_VARIABLE_Info_32_32, ml_backend__ml_string_switch__STATE_VARIABLE_Info_7);
        }
#line 190 "ml_string_switch.m"
        ml_backend__ml_string_switch__MainTaggedConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 0)));
#line 190 "ml_string_switch.m"
        ml_backend__ml_string_switch__OtherTaggedConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 1)));
#line 190 "ml_string_switch.m"
        ml_backend__ml_string_switch__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 2)));
#line 190 "ml_string_switch.m"
        ml_backend__ml_string_switch__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__TaggedCase_16, (MR_Integer) 3)));
#line 191 "ml_string_switch.m"
        {
#line 191 "ml_string_switch.m"
          ml_backend__ml_string_switch__add_to_strs_casenums_4_p_0(ml_backend__ml_string_switch__CaseNum_21, ml_backend__ml_string_switch__MainTaggedConsId_22, ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_33_33, &ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_36_36);
        }
#line 192 "ml_string_switch.m"
        {
#line 192 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 192 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_37_37, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_6[0]));
#line 192 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_37_37, 1) = ((MR_Box) (ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0_2));
#line 192 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 192 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_37_37, 3) = ((MR_Box) (ml_backend__ml_string_switch__CaseNum_21));
#line 192 "ml_string_switch.m"
        }
#line 192 "ml_string_switch.m"
        {
#line 192 "ml_string_switch.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_string_switch_scalar_common_2[0], ml_backend__ml_string_switch__V_37_37, ml_backend__ml_string_switch__OtherTaggedConsIds_23, ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_StrsCaseNums_36_36)), &ml_backend__ml_string_switch__conv2_HeadVar__3_3);
        }
#line 192 "ml_string_switch.m"
        *ml_backend__ml_string_switch__HeadVar__3_3 = ((MR_Word) ml_backend__ml_string_switch__conv2_HeadVar__3_3);
#line 185 "ml_string_switch.m"
      }
#line 182 "ml_string_switch.m"
  }
#line 177 "ml_string_switch.m"
}

#line 1045 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1(
#line 1045 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg)
#line 1045 "ml_string_switch.m"
{
#line 1045 "ml_string_switch.m"
  {
#line 1045 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1045 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;

#line 1045 "ml_string_switch.m"
    {
#line 1045 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_binary_lookup_switch__1045__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 4))));
    }
#line 1045 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 1045 "ml_string_switch.m"
  }
#line 1045 "ml_string_switch.m"
}

#line 52 "ml_string_switch.m"
void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0(
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_10,
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LookupSwitchInfo_11,
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_13,
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_14,
#line 52 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_15,
#line 52 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_16,
#line 52 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_25,
#line 52 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_26)
#line 52 "ml_string_switch.m"
{
#line 1035 "ml_string_switch.m"
  {
#line 1035 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 1035 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_18;
#line 1035 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseConsts_19;
#line 1035 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutVars_20;
#line 1035 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutTypes_21;

#line 1036 "ml_string_switch.m"
    {
#line 1036 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_14);
    }
#line 1037 "ml_string_switch.m"
    ml_backend__ml_string_switch__CaseConsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 0)));
#line 1037 "ml_string_switch.m"
    ml_backend__ml_string_switch__OutVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 1)));
#line 1037 "ml_string_switch.m"
    ml_backend__ml_string_switch__OutTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 2)));
#line 1043 "ml_string_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_string_switch__CaseConsts_19)) == (MR_mktag((MR_Integer) 0))))
#line 1039 "ml_string_switch.m"
      {
#line 1039 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__CaseValues_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseConsts_19, (MR_Integer) 0)));

#line 1040 "ml_string_switch.m"
        {
#line 1040 "ml_string_switch.m"
          ml_backend__ml_string_switch__ml_generate_string_binary_simple_lookup_switch_12_p_0(ml_backend__ml_string_switch__Var_10, ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__CaseValues_22, ml_backend__ml_string_switch__OutVars_20, ml_backend__ml_string_switch__OutTypes_21, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Defns_15, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_25, ml_backend__ml_string_switch__STATE_VARIABLE_Info_26);
#line 1040 "ml_string_switch.m"
          return;
        }
#line 1039 "ml_string_switch.m"
      }
#line 1043 "ml_string_switch.m"
    else
#line 1044 "ml_string_switch.m"
      {
#line 1044 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__CaseSolns_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__CaseConsts_19, (MR_Integer) 0)));
#line 1044 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_27_27;

#line 1045 "ml_string_switch.m"
        {
#line 1045 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
#line 1045 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0_1));
#line 1045 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1045 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, 3) = ((MR_Box) (ml_backend__ml_string_switch__CodeModel_12));
#line 1045 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_27_27, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1045 "ml_string_switch.m"
        }
#line 1045 "ml_string_switch.m"
        {
#line 1045 "ml_string_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_string_switch__V_27_27, (MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_lookup_switch\'/9", (MR_String) "CodeModel != model_non");
        }
#line 1047 "ml_string_switch.m"
        {
#line 1047 "ml_string_switch.m"
          ml_backend__ml_string_switch__ml_generate_string_binary_several_soln_lookup_switch_12_p_0(ml_backend__ml_string_switch__Var_10, ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__CaseSolns_23, ml_backend__ml_string_switch__OutVars_20, ml_backend__ml_string_switch__OutTypes_21, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Defns_15, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_25, ml_backend__ml_string_switch__STATE_VARIABLE_Info_26);
#line 1047 "ml_string_switch.m"
          return;
        }
#line 1044 "ml_string_switch.m"
      }
#line 1035 "ml_string_switch.m"
  }
#line 52 "ml_string_switch.m"
}

#line 968 "ml_string_switch.m"
static void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0_1(
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_1,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_2,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_3,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_4,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_5,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_6,
#line 968 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__wrapper_arg_7,
#line 968 "ml_string_switch.m"
  MR_Box * ml_backend__ml_string_switch__wrapper_arg_8)
#line 968 "ml_string_switch.m"
{
#line 968 "ml_string_switch.m"
  {
#line 968 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;
#line 968 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__conv2_CaseNum_12;
#line 968 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv1_STATE_VARIABLE_CodeMap_17;
#line 968 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__conv0_STATE_VARIABLE_Info_19;

#line 968 "ml_string_switch.m"
    {
#line 968 "ml_string_switch.m"
      ml_backend__ml_string_switch__gen_tagged_case_code_for_string_switch_dummy_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_1), &ml_backend__ml_string_switch__conv2_CaseNum_12, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_3), &ml_backend__ml_string_switch__conv1_STATE_VARIABLE_CodeMap_17, ((MR_Word) ml_backend__ml_string_switch__wrapper_arg_5), &ml_backend__ml_string_switch__conv0_STATE_VARIABLE_Info_19);
    }
#line 968 "ml_string_switch.m"
    *ml_backend__ml_string_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_string_switch__conv2_CaseNum_12));
#line 968 "ml_string_switch.m"
    *ml_backend__ml_string_switch__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_string_switch__conv1_STATE_VARIABLE_CodeMap_17));
#line 968 "ml_string_switch.m"
    *ml_backend__ml_string_switch__wrapper_arg_6 = ((MR_Box) (ml_backend__ml_string_switch__conv0_STATE_VARIABLE_Info_19));
#line 968 "ml_string_switch.m"
  }
#line 968 "ml_string_switch.m"
}

#line 47 "ml_string_switch.m"
void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Cases_10,
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_11,
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_13,
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_14,
#line 47 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_15,
#line 47 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_16,
#line 47 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_60,
#line 47 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_61)
#line 47 "ml_string_switch.m"
{
#line 937 "ml_string_switch.m"
  {
#line 937 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_96_96;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_97_97;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_18;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__BinarySearchInfo_19;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MidVarLval_24;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_28;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_29;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_30;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_31;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_32;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ArgTypes_34;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_35;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructTypeNum_36;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructType_37;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FieldIds_38;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_39;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_42;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseNumFieldId_43;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseLabelMap0_44;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseLabelMap_45;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SortedTable_47;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevRowInitializers_48;
#line 937 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__TableSize_49;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RowInitializers_50;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData2_51;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VectorCommon_52;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_53;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseLabelList_54;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchCases0_55;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchCases_56;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchStmt0_57;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchStatement_58;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_63_63;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_66_66;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_72_72;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_73_73;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_77_77;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_80_80;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_81_81;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_84_84;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_85_85;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_86_86;
#line 937 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__V_88_88;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_91_91;
#line 937 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_93_93;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_20;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_21;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoVarLval_22;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___HiVarLval_23;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___ResultVarLval_25;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopVarLval_26;
#line 941 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_27;
#line 963 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_40;
#line 963 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseNumFieldIdPrime_41;
#line 960 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_67_67;
#line 960 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_68_68;
#line 967 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__conv5_CaseLabelMap_45;
#line 967 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__conv4_STATE_VARIABLE_Info_73_73;
#line 967 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__conv3_V_46_46;

#line 938 "ml_string_switch.m"
    {
#line 938 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_14);
    }
#line 939 "ml_string_switch.m"
    {
#line 939 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_vars_8_p_0(ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Var_11, &ml_backend__ml_string_switch__BinarySearchInfo_19, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62);
    }
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 0)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 1)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoVarLval_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 2)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___HiVarLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 3)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch__MidVarLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 4)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___ResultVarLval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 5)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopVarLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 6)));
#line 941 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 7)));
#line 941 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__BinarySearchInfo_19, (MR_Integer) 8)));
#line 945 "ml_string_switch.m"
    {
#line 945 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62, &ml_backend__ml_string_switch__ModuleInfo_28);
    }
#line 946 "ml_string_switch.m"
    {
#line 946 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_28, &ml_backend__ml_string_switch__ModuleName_29);
    }
#line 947 "ml_string_switch.m"
    {
#line 947 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_29);
    }
#line 948 "ml_string_switch.m"
    {
#line 948 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62, &ml_backend__ml_string_switch__Target_31);
    }
#line 950 "ml_string_switch.m"
    {
#line 950 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_63_63 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 950 "ml_string_switch.m"
    {
#line 950 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_28, ml_backend__ml_string_switch__V_63_63);
    }
#line 952 "ml_string_switch.m"
    {
#line 952 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ArgTypes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_32));
#line 952 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_2[10])));
#line 952 "ml_string_switch.m"
    }
#line 955 "ml_string_switch.m"
    {
#line 955 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62, &ml_backend__ml_string_switch__GlobalData0_35);
    }
#line 956 "ml_string_switch.m"
    {
#line 956 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_30, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Target_31, ml_backend__ml_string_switch__MLDS_ArgTypes_34, &ml_backend__ml_string_switch__StructTypeNum_36, &ml_backend__ml_string_switch__StructType_37, &ml_backend__ml_string_switch__FieldIds_38, ml_backend__ml_string_switch__GlobalData0_35, &ml_backend__ml_string_switch__GlobalData1_39);
    }
#line 959 "ml_string_switch.m"
    {
#line 959 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData1_39, ml_backend__ml_string_switch__STATE_VARIABLE_Info_62_62, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_66_66);
    }
#line 960 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_38)) == (MR_mktag((MR_Integer) 1)));
#line 960 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 960 "ml_string_switch.m"
      {
#line 960 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldIdPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_38, (MR_Integer) 0)));
#line 960 "ml_string_switch.m"
        ml_backend__ml_string_switch__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_38, (MR_Integer) 1)));
#line 960 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 960 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 960 "ml_string_switch.m"
          {
#line 960 "ml_string_switch.m"
            ml_backend__ml_string_switch__CaseNumFieldIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_67_67, (MR_Integer) 0)));
#line 960 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_67_67, (MR_Integer) 1)));
#line 960 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "ml_string_switch.m"
          }
#line 960 "ml_string_switch.m"
      }
#line 963 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 961 "ml_string_switch.m"
      {
#line 961 "ml_string_switch.m"
        ml_backend__ml_string_switch__StringFieldId_42 = ml_backend__ml_string_switch__StringFieldIdPrime_40;
#line 962 "ml_string_switch.m"
        ml_backend__ml_string_switch__CaseNumFieldId_43 = ml_backend__ml_string_switch__CaseNumFieldIdPrime_41;
#line 961 "ml_string_switch.m"
      }
#line 963 "ml_string_switch.m"
    else
#line 964 "ml_string_switch.m"
      {
#line 964 "ml_string_switch.m"
        {
#line 964 "ml_string_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_binary_jump_switch\'/9", (MR_String) "bad FieldIds");
#line 964 "ml_string_switch.m"
          return;
        }
#line 964 "ml_string_switch.m"
      }
#line 13478 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_96_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 13480 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_97_97 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 966 "ml_string_switch.m"
    {
#line 966 "ml_string_switch.m"
      mercury__map__init_1_p_0(ml_backend__ml_string_switch__TypeCtorInfo_96_96, ml_backend__ml_string_switch__TypeCtorInfo_97_97, &ml_backend__ml_string_switch__CaseLabelMap0_44);
    }
#line 968 "ml_string_switch.m"
    {
#line 968 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 968 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_72_72, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_5[0]));
#line 968 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_72_72, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0_1));
#line 968 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 968 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_72_72, 3) = ((MR_Box) (ml_backend__ml_string_switch__CodeModel_12));
#line 968 "ml_string_switch.m"
    }
#line 969 "ml_string_switch.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 967 "ml_string_switch.m"
    {
#line 967 "ml_string_switch.m"
      backend_libs__switch_util__string_binary_cases_9_p_0(ml_backend__ml_string_switch__TypeCtorInfo_96_96, (MR_Word) &ml_backend__ml_string_switch_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ml_backend__ml_string_switch__Cases_10, ml_backend__ml_string_switch__V_72_72, ((MR_Box) (ml_backend__ml_string_switch__CaseLabelMap0_44)), &ml_backend__ml_string_switch__conv5_CaseLabelMap_45, ((MR_Box) (ml_backend__ml_string_switch__STATE_VARIABLE_Info_66_66)), &ml_backend__ml_string_switch__conv4_STATE_VARIABLE_Info_73_73, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_string_switch__conv3_V_46_46, &ml_backend__ml_string_switch__SortedTable_47);
    }
#line 967 "ml_string_switch.m"
    ml_backend__ml_string_switch__CaseLabelMap_45 = ((MR_Word) ml_backend__ml_string_switch__conv5_CaseLabelMap_45);
#line 967 "ml_string_switch.m"
    ml_backend__ml_string_switch__STATE_VARIABLE_Info_73_73 = ((MR_Word) ml_backend__ml_string_switch__conv4_STATE_VARIABLE_Info_73_73);
#line 970 "ml_string_switch.m"
    {
#line 970 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_jump_initializers_6_p_0(ml_backend__ml_string_switch__SortedTable_47, ml_backend__ml_string_switch__StructType_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevRowInitializers_48, (MR_Integer) 0, &ml_backend__ml_string_switch__TableSize_49);
    }
#line 972 "ml_string_switch.m"
    {
#line 972 "ml_string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_string_switch__RevRowInitializers_48, &ml_backend__ml_string_switch__RowInitializers_50);
    }
#line 975 "ml_string_switch.m"
    {
#line 975 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_73_73, &ml_backend__ml_string_switch__GlobalData2_51);
    }
#line 976 "ml_string_switch.m"
    {
#line 976 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_30, ml_backend__ml_string_switch__StructTypeNum_36, ml_backend__ml_string_switch__RowInitializers_50, &ml_backend__ml_string_switch__VectorCommon_52, ml_backend__ml_string_switch__GlobalData2_51, &ml_backend__ml_string_switch__GlobalData_53);
    }
#line 978 "ml_string_switch.m"
    {
#line 978 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_53, ml_backend__ml_string_switch__STATE_VARIABLE_Info_73_73, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_77_77);
    }
#line 984 "ml_string_switch.m"
    {
#line 984 "ml_string_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_96_96, ml_backend__ml_string_switch__TypeCtorInfo_97_97, ml_backend__ml_string_switch__CaseLabelMap_45, &ml_backend__ml_string_switch__CaseLabelList_54);
    }
#line 985 "ml_string_switch.m"
    {
#line 985 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_jump_switch_arms_3_p_0(ml_backend__ml_string_switch__CaseLabelList_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__SwitchCases0_55);
    }
#line 986 "ml_string_switch.m"
    {
#line 986 "ml_string_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_string_switch__SwitchCases0_55, &ml_backend__ml_string_switch__SwitchCases_56);
    }
#line 989 "ml_string_switch.m"
    {
#line 989 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 989 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_string_switch__MidVarLval_24));
#line 989 "ml_string_switch.m"
    }
#line 989 "ml_string_switch.m"
    {
#line 989 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 989 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 989 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_string_switch__VectorCommon_52));
#line 989 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__V_84_84, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_85_85));
#line 989 "ml_string_switch.m"
    }
#line 988 "ml_string_switch.m"
    {
#line 988 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_3[1])));
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_84_84));
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_81_81, 2) = ((MR_Box) (ml_backend__ml_string_switch__CaseNumFieldId_43));
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_81_81, 3) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_32));
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_81_81, 4) = ((MR_Box) (ml_backend__ml_string_switch__StructType_37));
#line 988 "ml_string_switch.m"
    }
#line 988 "ml_string_switch.m"
    {
#line 988 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 988 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_80_80, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_81_81));
#line 988 "ml_string_switch.m"
    }
#line 991 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_88_88 = (ml_backend__ml_string_switch__TableSize_49 - (MR_Integer) 1);
#line 991 "ml_string_switch.m"
    {
#line 991 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_86_86, 0) = ((MR_Box) ((MR_Integer) 0));
#line 991 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_86_86, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_88_88));
#line 991 "ml_string_switch.m"
    }
#line 987 "ml_string_switch.m"
    {
#line 987 "ml_string_switch.m"
      ml_backend__ml_string_switch__SwitchStmt0_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_80_80));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_86_86));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 4) = ((MR_Box) (ml_backend__ml_string_switch__SwitchCases_56));
#line 987 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_57, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "ml_string_switch.m"
    }
#line 993 "ml_string_switch.m"
    {
#line 993 "ml_string_switch.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_string_switch__SwitchStmt0_57, ml_backend__ml_string_switch__MLDS_Context_18, &ml_backend__ml_string_switch__SwitchStatement_58, ml_backend__ml_string_switch__STATE_VARIABLE_Info_77_77, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_91_91);
    }
#line 999 "ml_string_switch.m"
    {
#line 999 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_93_93, 0) = ((MR_Box) (ml_backend__ml_string_switch__SwitchStatement_58));
#line 999 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "ml_string_switch.m"
    }
#line 997 "ml_string_switch.m"
    {
#line 997 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_binary_switch_search_12_p_0(ml_backend__ml_string_switch__MLDS_Context_18, (MR_String) "binary string jump switch", ml_backend__ml_string_switch__BinarySearchInfo_19, ml_backend__ml_string_switch__VectorCommon_52, ml_backend__ml_string_switch__TableSize_49, ml_backend__ml_string_switch__StructType_37, ml_backend__ml_string_switch__StringFieldId_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__V_93_93, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_91_91, ml_backend__ml_string_switch__STATE_VARIABLE_Info_61);
#line 997 "ml_string_switch.m"
      return;
    }
#line 937 "ml_string_switch.m"
  }
#line 47 "ml_string_switch.m"
}

#line 353 "ml_string_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1(
#line 353 "ml_string_switch.m"
  MR_Box ml_backend__ml_string_switch__closure_arg)
#line 353 "ml_string_switch.m"
{
#line 353 "ml_string_switch.m"
  {
#line 353 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 353 "ml_string_switch.m"
    MR_Box ml_backend__ml_string_switch__closure = ml_backend__ml_string_switch__closure_arg;

#line 353 "ml_string_switch.m"
    {
#line 353 "ml_string_switch.m"
      return ml_backend__ml_string_switch__succeeded = ml_backend__ml_string_switch__IntroducedFrom__pred__ml_generate_string_hash_lookup_switch__353__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__closure, (MR_Integer) 4))));
    }
#line 353 "ml_string_switch.m"
    return ml_backend__ml_string_switch__succeeded;
#line 353 "ml_string_switch.m"
  }
#line 353 "ml_string_switch.m"
}

#line 41 "ml_string_switch.m"
void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0(
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_10,
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__LookupSwitchInfo_11,
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_13,
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_14,
#line 41 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_15,
#line 41 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_16,
#line 41 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_24,
#line 41 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_25)
#line 41 "ml_string_switch.m"
{
#line 344 "ml_string_switch.m"
  {
#line 344 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 344 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CaseConsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 0)));
#line 344 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 1)));
#line 344 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__OutTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__LookupSwitchInfo_11, (MR_Integer) 2)));

#line 351 "ml_string_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_string_switch__CaseConsts_18)) == (MR_mktag((MR_Integer) 0))))
#line 347 "ml_string_switch.m"
      {
#line 347 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__CaseValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__CaseConsts_18, (MR_Integer) 0)));

#line 348 "ml_string_switch.m"
        {
#line 348 "ml_string_switch.m"
          ml_backend__ml_string_switch__ml_generate_string_hash_simple_lookup_switch_11_p_0(ml_backend__ml_string_switch__Var_10, ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__CaseValues_21, ml_backend__ml_string_switch__OutVars_19, ml_backend__ml_string_switch__OutTypes_20, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__Defns_15, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_24, ml_backend__ml_string_switch__STATE_VARIABLE_Info_25);
#line 348 "ml_string_switch.m"
          return;
        }
#line 347 "ml_string_switch.m"
      }
#line 351 "ml_string_switch.m"
    else
#line 352 "ml_string_switch.m"
      {
#line 352 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__CaseSolns_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__CaseConsts_18, (MR_Integer) 0)));
#line 352 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_26_26;

#line 353 "ml_string_switch.m"
        {
#line 353 "ml_string_switch.m"
          ml_backend__ml_string_switch__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 353 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, 0) = ((MR_Box) (&ml_backend__ml_string_switch_scalar_common_4[0]));
#line 353 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, 1) = ((MR_Box) (ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0_1));
#line 353 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 353 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, 3) = ((MR_Box) (ml_backend__ml_string_switch__CodeModel_12));
#line 353 "ml_string_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_26_26, 4) = ((MR_Box) ((MR_Integer) 2));
#line 353 "ml_string_switch.m"
        }
#line 353 "ml_string_switch.m"
        {
#line 353 "ml_string_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_string_switch__V_26_26, (MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_lookup_switch\'/9", (MR_String) "CodeModel != model_non");
        }
#line 355 "ml_string_switch.m"
        {
#line 355 "ml_string_switch.m"
          ml_backend__ml_string_switch__ml_generate_string_hash_several_soln_lookup_switch_11_p_0(ml_backend__ml_string_switch__Var_10, ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__CaseSolns_22, ml_backend__ml_string_switch__OutVars_19, ml_backend__ml_string_switch__OutTypes_20, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__Defns_15, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_24, ml_backend__ml_string_switch__STATE_VARIABLE_Info_25);
#line 355 "ml_string_switch.m"
          return;
        }
#line 352 "ml_string_switch.m"
      }
#line 344 "ml_string_switch.m"
  }
#line 41 "ml_string_switch.m"
}

#line 36 "ml_string_switch.m"
void MR_CALL 
ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Cases_10,
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Var_11,
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CodeModel_12,
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__CanFail_13,
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__Context_14,
#line 36 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Defns_15,
#line 36 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__Statements_16,
#line 36 "ml_string_switch.m"
  MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_66,
#line 36 "ml_string_switch.m"
  MR_Word * ml_backend__ml_string_switch__STATE_VARIABLE_Info_67)
#line 36 "ml_string_switch.m"
{
#line 92 "ml_string_switch.m"
  {
#line 92 "ml_string_switch.m"
    MR_bool ml_backend__ml_string_switch__succeeded;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_106_106;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__TypeCtorInfo_108_108;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_Context_18;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StrsCaseNums_19;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__CodeMap_20;
#line 92 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__TableSize_21;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSlotMap_22;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashOp_23;
#line 92 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__NumCollisions_24;
#line 92 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__HashMask_25;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleInfo_26;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__ModuleName_27;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ModuleName_28;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__Target_29;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_StringType_30;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MLDS_ArgTypes_32;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__LoopPresent_33;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__HashSearchInfo_34;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotVarLval_39;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData0_43;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructTypeNum_44;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StructType_45;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FieldIds_46;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData1_47;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__StringFieldId_49;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__MaybeNextSlotFieldId_50;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevRowInitializers_52;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevMap_53;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RowInitializers_54;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__VectorCommon_55;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__GlobalData_56;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__RevList_57;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotsCases0_58;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SlotsCases_59;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchStmt0_61;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__SwitchStatement_62;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__FoundMatchStatements_64;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_68_68;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_72_72;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_76_76;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_88_88;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_89_89;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_91_91;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_92_92;
#line 92 "ml_string_switch.m"
    MR_Integer ml_backend__ml_string_switch__V_94_94;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__STATE_VARIABLE_Info_97_97;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_98_98;
#line 92 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch__V_101_101;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___CodeModel_35;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___LoopPresent_36;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___Context_37;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___VarRval_38;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___StringVarLval_40;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___MaybeStopLoopLval_41;
#line 120 "ml_string_switch.m"
    MR_Word ml_backend__ml_string_switch___FailStatements_42;

#line 93 "ml_string_switch.m"
    {
#line 93 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_Context_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_string_switch__Context_14);
    }
#line 13918 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_106_106 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 95 "ml_string_switch.m"
    {
#line 95 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_68_68 = mercury__map__init_0_f_0(ml_backend__ml_string_switch__TypeCtorInfo_106_106, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0);
    }
#line 94 "ml_string_switch.m"
    {
#line 94 "ml_string_switch.m"
      ml_backend__ml_string_switch__gen_tagged_case_codes_for_string_switch_7_p_0(ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__Cases_10, &ml_backend__ml_string_switch__StrsCaseNums_19, ml_backend__ml_string_switch__V_68_68, &ml_backend__ml_string_switch__CodeMap_20, ml_backend__ml_string_switch__STATE_VARIABLE_Info_0_66, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69);
    }
#line 98 "ml_string_switch.m"
    {
#line 98 "ml_string_switch.m"
      backend_libs__switch_util__construct_string_hash_cases_6_p_0(ml_backend__ml_string_switch__TypeCtorInfo_106_106, ml_backend__ml_string_switch__StrsCaseNums_19, (MR_Integer) 1, &ml_backend__ml_string_switch__TableSize_21, &ml_backend__ml_string_switch__HashSlotMap_22, &ml_backend__ml_string_switch__HashOp_23, &ml_backend__ml_string_switch__NumCollisions_24);
    }
#line 100 "ml_string_switch.m"
    ml_backend__ml_string_switch__HashMask_25 = (ml_backend__ml_string_switch__TableSize_21 - (MR_Integer) 1);
#line 102 "ml_string_switch.m"
    {
#line 102 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_string_switch__ModuleInfo_26);
    }
#line 103 "ml_string_switch.m"
    {
#line 103 "ml_string_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_string_switch__ModuleInfo_26, &ml_backend__ml_string_switch__ModuleName_27);
    }
#line 104 "ml_string_switch.m"
    {
#line 104 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_string_switch__ModuleName_27);
    }
#line 105 "ml_string_switch.m"
    {
#line 105 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_string_switch__Target_29);
    }
#line 107 "ml_string_switch.m"
    {
#line 107 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_72_72 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 107 "ml_string_switch.m"
    {
#line 107 "ml_string_switch.m"
      ml_backend__ml_string_switch__MLDS_StringType_30 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_string_switch__ModuleInfo_26, ml_backend__ml_string_switch__V_72_72);
    }
#line 110 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_24 == (MR_Integer) 0);
#line 113 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 111 "ml_string_switch.m"
      {
#line 111 "ml_string_switch.m"
        {
#line 111 "ml_string_switch.m"
          ml_backend__ml_string_switch__MLDS_ArgTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_32, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_30));
#line 111 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "ml_string_switch.m"
        }
#line 112 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_33 = (MR_Integer) 0;
#line 111 "ml_string_switch.m"
      }
#line 113 "ml_string_switch.m"
    else
#line 114 "ml_string_switch.m"
      {
#line 114 "ml_string_switch.m"
        {
#line 114 "ml_string_switch.m"
          ml_backend__ml_string_switch__MLDS_ArgTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_32, 0) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_StringType_30));
#line 114 "ml_string_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MLDS_ArgTypes_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_string_switch_scalar_common_2[10])));
#line 114 "ml_string_switch.m"
        }
#line 115 "ml_string_switch.m"
        ml_backend__ml_string_switch__LoopPresent_33 = (MR_Integer) 1;
#line 114 "ml_string_switch.m"
      }
#line 118 "ml_string_switch.m"
    {
#line 118 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_vars_9_p_0(ml_backend__ml_string_switch__CodeModel_12, ml_backend__ml_string_switch__CanFail_13, ml_backend__ml_string_switch__LoopPresent_33, ml_backend__ml_string_switch__Context_14, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Var_11, &ml_backend__ml_string_switch__HashSearchInfo_34, ml_backend__ml_string_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_76_76);
    }
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___CodeModel_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___LoopPresent_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___Context_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 1)));
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___VarRval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 2)));
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch__SlotVarLval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 3)));
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___StringVarLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 4)));
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___MaybeStopLoopLval_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 5)));
#line 120 "ml_string_switch.m"
    ml_backend__ml_string_switch___FailStatements_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 6)));
#line 120 "ml_string_switch.m"
    *ml_backend__ml_string_switch__Defns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__HashSearchInfo_34, (MR_Integer) 7)));
#line 124 "ml_string_switch.m"
    {
#line 124 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_string_switch__STATE_VARIABLE_Info_76_76, &ml_backend__ml_string_switch__GlobalData0_43);
    }
#line 125 "ml_string_switch.m"
    {
#line 125 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_28, ml_backend__ml_string_switch__MLDS_Context_18, ml_backend__ml_string_switch__Target_29, ml_backend__ml_string_switch__MLDS_ArgTypes_32, &ml_backend__ml_string_switch__StructTypeNum_44, &ml_backend__ml_string_switch__StructType_45, &ml_backend__ml_string_switch__FieldIds_46, ml_backend__ml_string_switch__GlobalData0_43, &ml_backend__ml_string_switch__GlobalData1_47);
    }
#line 128 "ml_string_switch.m"
    ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__NumCollisions_24 == (MR_Integer) 0);
#line 135 "ml_string_switch.m"
    if (ml_backend__ml_string_switch__succeeded)
#line 132 "ml_string_switch.m"
      {
#line 132 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_48;
#line 129 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_77_77;

#line 129 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_46)) == (MR_mktag((MR_Integer) 1)));
#line 129 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 129 "ml_string_switch.m"
          {
#line 129 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_46, (MR_Integer) 0)));
#line 129 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_46, (MR_Integer) 1)));
#line 129 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "ml_string_switch.m"
          }
#line 132 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 130 "ml_string_switch.m"
          {
#line 130 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_49 = ml_backend__ml_string_switch__StringFieldIdPrime_48;
#line 131 "ml_string_switch.m"
            ml_backend__ml_string_switch__MaybeNextSlotFieldId_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "ml_string_switch.m"
          }
#line 132 "ml_string_switch.m"
        else
#line 133 "ml_string_switch.m"
          {
#line 133 "ml_string_switch.m"
            {
#line 133 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/9", (MR_String) "bad FieldIds");
#line 133 "ml_string_switch.m"
              return;
            }
#line 133 "ml_string_switch.m"
          }
#line 132 "ml_string_switch.m"
      }
#line 135 "ml_string_switch.m"
    else
#line 139 "ml_string_switch.m"
      {
#line 139 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__NextSlotFieldIdPrime_51;
#line 139 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__StringFieldIdPrime_105;
#line 136 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_81_81;
#line 136 "ml_string_switch.m"
        MR_Word ml_backend__ml_string_switch__V_82_82;

#line 136 "ml_string_switch.m"
        ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__FieldIds_46)) == (MR_mktag((MR_Integer) 1)));
#line 136 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 136 "ml_string_switch.m"
          {
#line 136 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldIdPrime_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_46, (MR_Integer) 0)));
#line 136 "ml_string_switch.m"
            ml_backend__ml_string_switch__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FieldIds_46, (MR_Integer) 1)));
#line 136 "ml_string_switch.m"
            ml_backend__ml_string_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_string_switch__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 136 "ml_string_switch.m"
            if (ml_backend__ml_string_switch__succeeded)
#line 136 "ml_string_switch.m"
              {
#line 136 "ml_string_switch.m"
                ml_backend__ml_string_switch__NextSlotFieldIdPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_81_81, (MR_Integer) 0)));
#line 136 "ml_string_switch.m"
                ml_backend__ml_string_switch__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_81_81, (MR_Integer) 1)));
#line 136 "ml_string_switch.m"
                ml_backend__ml_string_switch__succeeded = (ml_backend__ml_string_switch__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "ml_string_switch.m"
              }
#line 136 "ml_string_switch.m"
          }
#line 139 "ml_string_switch.m"
        if (ml_backend__ml_string_switch__succeeded)
#line 137 "ml_string_switch.m"
          {
#line 137 "ml_string_switch.m"
            ml_backend__ml_string_switch__StringFieldId_49 = ml_backend__ml_string_switch__StringFieldIdPrime_105;
#line 138 "ml_string_switch.m"
            {
#line 138 "ml_string_switch.m"
              ml_backend__ml_string_switch__MaybeNextSlotFieldId_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 138 "ml_string_switch.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__MaybeNextSlotFieldId_50, 0) = ((MR_Box) (ml_backend__ml_string_switch__NextSlotFieldIdPrime_51));
#line 138 "ml_string_switch.m"
            }
#line 137 "ml_string_switch.m"
          }
#line 139 "ml_string_switch.m"
        else
#line 140 "ml_string_switch.m"
          {
#line 140 "ml_string_switch.m"
            {
#line 140 "ml_string_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_string_switch", (MR_String) "predicate \140ml_backend.ml_string_switch.ml_generate_string_hash_jump_switch\'/9", (MR_String) "bad FieldIds");
#line 140 "ml_string_switch.m"
              return;
            }
#line 140 "ml_string_switch.m"
          }
#line 139 "ml_string_switch.m"
      }
#line 14158 "ml_backend.ml_string_switch.c"
    ml_backend__ml_string_switch__TypeCtorInfo_108_108 = (MR_Word) &ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0;
#line 145 "ml_string_switch.m"
    {
#line 145 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_88_88 = mercury__map__init_0_f_0(ml_backend__ml_string_switch__TypeCtorInfo_106_106, ml_backend__ml_string_switch__TypeCtorInfo_108_108);
    }
#line 144 "ml_string_switch.m"
    {
#line 144 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_jump_slots_9_p_0((MR_Integer) 0, ml_backend__ml_string_switch__TableSize_21, ml_backend__ml_string_switch__HashSlotMap_22, ml_backend__ml_string_switch__StructType_45, ml_backend__ml_string_switch__MaybeNextSlotFieldId_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__RevRowInitializers_52, ml_backend__ml_string_switch__V_88_88, &ml_backend__ml_string_switch__RevMap_53);
    }
#line 146 "ml_string_switch.m"
    {
#line 146 "ml_string_switch.m"
      mercury__list__reverse_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_string_switch__RevRowInitializers_52, &ml_backend__ml_string_switch__RowInitializers_54);
    }
#line 148 "ml_string_switch.m"
    {
#line 148 "ml_string_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_string_switch__MLDS_ModuleName_28, ml_backend__ml_string_switch__StructTypeNum_44, ml_backend__ml_string_switch__RowInitializers_54, &ml_backend__ml_string_switch__VectorCommon_55, ml_backend__ml_string_switch__GlobalData1_47, &ml_backend__ml_string_switch__GlobalData_56);
    }
#line 150 "ml_string_switch.m"
    {
#line 150 "ml_string_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_string_switch__GlobalData_56, ml_backend__ml_string_switch__STATE_VARIABLE_Info_76_76, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_89_89);
    }
#line 153 "ml_string_switch.m"
    {
#line 153 "ml_string_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_string_switch__TypeCtorInfo_106_106, ml_backend__ml_string_switch__TypeCtorInfo_108_108, ml_backend__ml_string_switch__RevMap_53, &ml_backend__ml_string_switch__RevList_57);
    }
#line 154 "ml_string_switch.m"
    {
#line 154 "ml_string_switch.m"
      ml_backend__ml_string_switch__generate_string_jump_switch_arms_4_p_0(ml_backend__ml_string_switch__CodeMap_20, ml_backend__ml_string_switch__RevList_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_string_switch__SlotsCases0_58);
    }
#line 155 "ml_string_switch.m"
    {
#line 155 "ml_string_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_string_switch__SlotsCases0_58, &ml_backend__ml_string_switch__SlotsCases_59);
    }
#line 158 "ml_string_switch.m"
    {
#line 158 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_91_91, 0) = ((MR_Box) (ml_backend__ml_string_switch__SlotVarLval_39));
#line 158 "ml_string_switch.m"
    }
#line 159 "ml_string_switch.m"
    ml_backend__ml_string_switch__V_94_94 = (ml_backend__ml_string_switch__TableSize_21 - (MR_Integer) 1);
#line 159 "ml_string_switch.m"
    {
#line 159 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_92_92, 0) = ((MR_Box) ((MR_Integer) 0));
#line 159 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_92_92, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_94_94));
#line 159 "ml_string_switch.m"
    }
#line 158 "ml_string_switch.m"
    {
#line 158 "ml_string_switch.m"
      ml_backend__ml_string_switch__SwitchStmt0_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 2) = ((MR_Box) (ml_backend__ml_string_switch__V_91_91));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 3) = ((MR_Box) (ml_backend__ml_string_switch__V_92_92));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 4) = ((MR_Box) (ml_backend__ml_string_switch__SlotsCases_59));
#line 158 "ml_string_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_string_switch__SwitchStmt0_61, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "ml_string_switch.m"
    }
#line 161 "ml_string_switch.m"
    {
#line 161 "ml_string_switch.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_string_switch__SwitchStmt0_61, ml_backend__ml_string_switch__MLDS_Context_18, &ml_backend__ml_string_switch__SwitchStatement_62, ml_backend__ml_string_switch__STATE_VARIABLE_Info_89_89, &ml_backend__ml_string_switch__STATE_VARIABLE_Info_97_97);
    }
#line 165 "ml_string_switch.m"
    {
#line 165 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_98_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_string_switch_scalar_common_2[11])));
#line 165 "ml_string_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_string_switch__V_98_98, 1) = ((MR_Box) (ml_backend__ml_string_switch__MLDS_Context_18));
#line 165 "ml_string_switch.m"
    }
#line 167 "ml_string_switch.m"
    {
#line 167 "ml_string_switch.m"
      ml_backend__ml_string_switch__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_101_101, 0) = ((MR_Box) (ml_backend__ml_string_switch__SwitchStatement_62));
#line 167 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "ml_string_switch.m"
    }
#line 165 "ml_string_switch.m"
    {
#line 165 "ml_string_switch.m"
      ml_backend__ml_string_switch__FoundMatchStatements_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FoundMatchStatements_64, 0) = ((MR_Box) (ml_backend__ml_string_switch__V_98_98));
#line 165 "ml_string_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_string_switch__FoundMatchStatements_64, 1) = ((MR_Box) (ml_backend__ml_string_switch__V_101_101));
#line 165 "ml_string_switch.m"
    }
#line 170 "ml_string_switch.m"
    {
#line 170 "ml_string_switch.m"
      ml_backend__ml_string_switch__ml_gen_string_hash_switch_search_14_p_0(ml_backend__ml_string_switch__MLDS_Context_18, (MR_String) "hashed string jump switch", ml_backend__ml_string_switch__HashSearchInfo_34, ml_backend__ml_string_switch__HashOp_23, ml_backend__ml_string_switch__VectorCommon_55, ml_backend__ml_string_switch__StructType_45, ml_backend__ml_string_switch__StringFieldId_49, ml_backend__ml_string_switch__MaybeNextSlotFieldId_50, ml_backend__ml_string_switch__HashMask_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_string_switch__FoundMatchStatements_64, ml_backend__ml_string_switch__Statements_16, ml_backend__ml_string_switch__STATE_VARIABLE_Info_97_97, ml_backend__ml_string_switch__STATE_VARIABLE_Info_67);
#line 170 "ml_string_switch.m"
      return;
    }
#line 92 "ml_string_switch.m"
  }
#line 36 "ml_string_switch.m"
}

void mercury__ml_backend__ml_string_switch__init(void)
{
}

void mercury__ml_backend__ml_string_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slot_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_hash_slots_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_binary_search_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_string_switch__ml_backend__ml_string_switch__type_ctor_info_ml_hash_search_info_0);
}

void mercury__ml_backend__ml_string_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_string_switch. */
