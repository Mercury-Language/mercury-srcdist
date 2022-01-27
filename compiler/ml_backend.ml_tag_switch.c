/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module ml_backend.ml_tag_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#include "ml_backend.ml_tag_switch.mih"


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
#include "hlds.vartypes.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 117 "ml_tag_switch.m"
struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s {
#line 122 "ml_tag_switch.m"
  MR_bool ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded;
#line 122 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20;
#line 143 "ml_tag_switch.m"
  jmp_buf ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0;
#line 143 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33;
#line 143 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36;
#line 117 "ml_tag_switch.m"
};


#line 171 "ml_backend.ml_tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

#line 174 "ml_backend.ml_tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 177 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

#line 180 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0;

#line 183 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1;

#line 186 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2];

#line 189 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2];

#line 192 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2];

#line 195 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1];

#line 198 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0;

#line 201 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[1];

#line 204 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1;

#line 207 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1];

#line 210 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1];

#line 213 "ml_backend.ml_tag_switch.c"
static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2];

#line 216 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2];

#line 219 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2];

#line 222 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0;

#line 225 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0;

#line 228 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2];

#line 231 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0;

#line 234 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1];

#line 237 "ml_backend.ml_tag_switch.c"
static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1];

#line 240 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1];

#line 243 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1];

#line 246 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
#line 249 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 251 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

#line 254 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
#line 257 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 259 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 261 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

#line 264 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
#line 267 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 269 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

#line 272 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
#line 275 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 277 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 279 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

#line 282 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
#line 285 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 287 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

#line 290 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
#line 293 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 295 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 297 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

#line 300 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
#line 303 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 305 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

#line 308 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
#line 311 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 313 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 315 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

#line 318 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
#line 321 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 323 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

#line 326 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
#line 329 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 331 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 333 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

#line 229 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__229__1_2_p_0(
#line 229 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__OtherPtags_21,
#line 229 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_52);

#line 207 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__207__1_2_p_0(
#line 207 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__SecTagLocn_22,
#line 207 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25);

#line 274 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
#line 274 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

#line 274 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

#line 280 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
#line 280 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

#line 280 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

#line 62 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
#line 62 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

#line 62 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

#line 159 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
#line 159 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

#line 159 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_1,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

#line 60 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
#line 60 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

#line 60 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

#line 369 "ml_tag_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
#line 369 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__Stag_3);

#line 365 "ml_tag_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
#line 365 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 365 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1);

#line 347 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_3,
#line 347 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__4_4,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5,
#line 347 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6);

#line 307 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Cases_12,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_13,
#line 307 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__PrimaryTag_14,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__StagLocn_15,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_16,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_17,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_18,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_19,
#line 307 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Statement_20,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33,
#line 307 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34);

#line 289 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
#line 289 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 289 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2,
#line 289 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3);

#line 265 "ml_tag_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
#line 265 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__Ptag_3);

#line 262 "ml_tag_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
#line 262 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 262 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1);

#line 229 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
#line 229 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg);

#line 207 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
#line 207 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg);

#line 196 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCase_11,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_12,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_13,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_14,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_15,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_16,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_17,
#line 196 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__MLDS_Case_18,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41,
#line 196 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);

#line 183 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_3,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_4,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_5,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_6,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_7,
#line 183 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__8_8,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9,
#line 183 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10);

#line 147 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_7,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CaseId_8,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_9,
#line 147 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Statement_10,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14,
#line 147 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15);

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg);

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg);

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg);

#line 117 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_10,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__TaggedCase_11,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__CaseId_12,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Info0_15,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Info_16);

#line 82 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1(
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_2,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_5,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_6,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_7,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_8);


static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[6][3];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[1][2];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][1];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][12];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[3][5];




static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 784 "ml_backend.ml_tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0
  }
};

#line 793 "ml_backend.ml_tag_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 801 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0
  }
};

#line 810 "ml_backend.ml_tag_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____code_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____code_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "code_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 827 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0 = {
  (MR_String) "no_case_is_split_between_ptags",
  (MR_Integer) 0
};

#line 833 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1 = {
  (MR_String) "some_case_is_split_between_ptags",
  (MR_Integer) 1
};

#line 839 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

#line 845 "ml_backend.ml_tag_switch.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

#line 851 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 857 "ml_backend.ml_tag_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "is_a_case_split_between_ptags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0
};

#line 874 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
};

#line 879 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0 = {
  (MR_String) "immediate",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0,
  NULL,
  NULL,
  NULL
};

#line 894 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 899 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1 = {
  (MR_String) "generate",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1,
  NULL,
  NULL,
  NULL
};

#line 914 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

#line 919 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1
};

#line 924 "ml_backend.ml_tag_switch.c"
static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1
  }
};

#line 938 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

#line 944 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 950 "ml_backend.ml_tag_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "maybe_code",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0
};

#line 967 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0
  }
};

#line 976 "ml_backend.ml_tag_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stag_rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 993 "ml_backend.ml_tag_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1001 "ml_backend.ml_tag_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1007 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0 = {
  (MR_String) "stags",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0,
  NULL,
  NULL,
  NULL
};

#line 1022 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

#line 1027 "ml_backend.ml_tag_switch.c"
static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0
  }
};

#line 1036 "ml_backend.ml_tag_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

#line 1041 "ml_backend.ml_tag_switch.c"
static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1] = {
  (MR_Integer) 0
};

#line 1046 "ml_backend.ml_tag_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0
};

#line 1063 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
#line 1066 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1068 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
#line 1070 "ml_backend.ml_tag_switch.c"
{
#line 1072 "ml_backend.ml_tag_switch.c"
  {
#line 1074 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 1077 "ml_backend.ml_tag_switch.c"
    {
#line 1079 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____code_map_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
#line 1082 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1084 "ml_backend.ml_tag_switch.c"
  }
#line 1086 "ml_backend.ml_tag_switch.c"
}

#line 1089 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
#line 1092 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1094 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 1096 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
#line 1098 "ml_backend.ml_tag_switch.c"
{
#line 1100 "ml_backend.ml_tag_switch.c"
  {
#line 1102 "ml_backend.ml_tag_switch.c"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

#line 1105 "ml_backend.ml_tag_switch.c"
    {
#line 1107 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch____Compare____code_map_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
#line 1110 "ml_backend.ml_tag_switch.c"
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
#line 1112 "ml_backend.ml_tag_switch.c"
  }
#line 1114 "ml_backend.ml_tag_switch.c"
}

#line 1117 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
#line 1120 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1122 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
#line 1124 "ml_backend.ml_tag_switch.c"
{
#line 1126 "ml_backend.ml_tag_switch.c"
  {
#line 1128 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 1131 "ml_backend.ml_tag_switch.c"
    {
#line 1133 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
#line 1136 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1138 "ml_backend.ml_tag_switch.c"
  }
#line 1140 "ml_backend.ml_tag_switch.c"
}

#line 1143 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
#line 1146 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1148 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 1150 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
#line 1152 "ml_backend.ml_tag_switch.c"
{
#line 1154 "ml_backend.ml_tag_switch.c"
  {
#line 1156 "ml_backend.ml_tag_switch.c"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

#line 1159 "ml_backend.ml_tag_switch.c"
    {
#line 1161 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
#line 1164 "ml_backend.ml_tag_switch.c"
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
#line 1166 "ml_backend.ml_tag_switch.c"
  }
#line 1168 "ml_backend.ml_tag_switch.c"
}

#line 1171 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
#line 1174 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1176 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
#line 1178 "ml_backend.ml_tag_switch.c"
{
#line 1180 "ml_backend.ml_tag_switch.c"
  {
#line 1182 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 1185 "ml_backend.ml_tag_switch.c"
    {
#line 1187 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____maybe_code_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
#line 1190 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1192 "ml_backend.ml_tag_switch.c"
  }
#line 1194 "ml_backend.ml_tag_switch.c"
}

#line 1197 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
#line 1200 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1202 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 1204 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
#line 1206 "ml_backend.ml_tag_switch.c"
{
#line 1208 "ml_backend.ml_tag_switch.c"
  {
#line 1210 "ml_backend.ml_tag_switch.c"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

#line 1213 "ml_backend.ml_tag_switch.c"
    {
#line 1215 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch____Compare____maybe_code_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
#line 1218 "ml_backend.ml_tag_switch.c"
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
#line 1220 "ml_backend.ml_tag_switch.c"
  }
#line 1222 "ml_backend.ml_tag_switch.c"
}

#line 1225 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
#line 1228 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1230 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
#line 1232 "ml_backend.ml_tag_switch.c"
{
#line 1234 "ml_backend.ml_tag_switch.c"
  {
#line 1236 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 1239 "ml_backend.ml_tag_switch.c"
    {
#line 1241 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
#line 1244 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1246 "ml_backend.ml_tag_switch.c"
  }
#line 1248 "ml_backend.ml_tag_switch.c"
}

#line 1251 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
#line 1254 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1256 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 1258 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
#line 1260 "ml_backend.ml_tag_switch.c"
{
#line 1262 "ml_backend.ml_tag_switch.c"
  {
#line 1264 "ml_backend.ml_tag_switch.c"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

#line 1267 "ml_backend.ml_tag_switch.c"
    {
#line 1269 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
#line 1272 "ml_backend.ml_tag_switch.c"
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
#line 1274 "ml_backend.ml_tag_switch.c"
  }
#line 1276 "ml_backend.ml_tag_switch.c"
}

#line 1279 "ml_backend.ml_tag_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
#line 1282 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1284 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
#line 1286 "ml_backend.ml_tag_switch.c"
{
#line 1288 "ml_backend.ml_tag_switch.c"
  {
#line 1290 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 1293 "ml_backend.ml_tag_switch.c"
    {
#line 1295 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____stags_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
#line 1298 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1300 "ml_backend.ml_tag_switch.c"
  }
#line 1302 "ml_backend.ml_tag_switch.c"
}

#line 1305 "ml_backend.ml_tag_switch.c"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
#line 1308 "ml_backend.ml_tag_switch.c"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
#line 1310 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
#line 1312 "ml_backend.ml_tag_switch.c"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
#line 1314 "ml_backend.ml_tag_switch.c"
{
#line 1316 "ml_backend.ml_tag_switch.c"
  {
#line 1318 "ml_backend.ml_tag_switch.c"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

#line 1321 "ml_backend.ml_tag_switch.c"
    {
#line 1323 "ml_backend.ml_tag_switch.c"
      ml_backend__ml_tag_switch____Compare____stags_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
#line 1326 "ml_backend.ml_tag_switch.c"
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
#line 1328 "ml_backend.ml_tag_switch.c"
  }
#line 1330 "ml_backend.ml_tag_switch.c"
}

#line 229 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__229__1_2_p_0(
#line 229 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__OtherPtags_21,
#line 229 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_52)
#line 229 "ml_tag_switch.m"
{
#line 229 "ml_tag_switch.m"
  {
#line 229 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 229 "ml_tag_switch.m"
    {
#line 229 "ml_tag_switch.m"
      return ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[0], ((MR_Box) (ml_backend__ml_tag_switch__OtherPtags_21)), ((MR_Box) (ml_backend__ml_tag_switch__HeadVar__2_52)));
    }
#line 229 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 229 "ml_tag_switch.m"
  }
#line 229 "ml_tag_switch.m"
}

#line 207 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__207__1_2_p_0(
#line 207 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__SecTagLocn_22,
#line 207 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25)
#line 207 "ml_tag_switch.m"
{
#line 207 "ml_tag_switch.m"
  {
#line 207 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__SecTagLocn_22 == ml_backend__ml_tag_switch__SecTagLocn1_25);

#line 207 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 207 "ml_tag_switch.m"
  }
#line 207 "ml_tag_switch.m"
}

#line 274 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
#line 274 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
#line 274 "ml_tag_switch.m"
{
#line 274 "ml_tag_switch.m"
  {
#line 274 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 274 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastX_9 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
#line 274 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastY_10 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

#line 274 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_9 == ml_backend__ml_tag_switch__CastY_10);
#line 274 "ml_tag_switch.m"
    if (ml_backend__ml_tag_switch__succeeded)
#line 1404 "ml_backend.ml_tag_switch.c"
      *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "ml_tag_switch.m"
    else
#line 274 "ml_tag_switch.m"
      {
#line 274 "ml_tag_switch.m"
        MR_Integer ml_backend__ml_tag_switch__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "ml_tag_switch.m"
        MR_Integer ml_backend__ml_tag_switch__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_8_8;

#line 274 "ml_tag_switch.m"
        {
#line 274 "ml_tag_switch.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tag_switch__V_8_8, ml_backend__ml_tag_switch__V_4_4, ml_backend__ml_tag_switch__V_6_6);
        }
#line 1426 "ml_backend.ml_tag_switch.c"
        ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_8_8 == (MR_Integer) 0);
#line 274 "ml_tag_switch.m"
        ml_backend__ml_tag_switch__succeeded = !(ml_backend__ml_tag_switch__succeeded);
#line 274 "ml_tag_switch.m"
        if (ml_backend__ml_tag_switch__succeeded)
#line 274 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__HeadVar__1_1 = ml_backend__ml_tag_switch__V_8_8;
#line 274 "ml_tag_switch.m"
        else
#line 274 "ml_tag_switch.m"
          {
#line 274 "ml_tag_switch.m"
            {
#line 274 "ml_tag_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[0], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__V_5_5)), ((MR_Box) (ml_backend__ml_tag_switch__V_7_7)));
#line 274 "ml_tag_switch.m"
              return;
            }
#line 274 "ml_tag_switch.m"
          }
#line 274 "ml_tag_switch.m"
      }
#line 274 "ml_tag_switch.m"
  }
#line 274 "ml_tag_switch.m"
}

#line 274 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 274 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
#line 274 "ml_tag_switch.m"
{
#line 274 "ml_tag_switch.m"
  {
#line 274 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 274 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastX_7 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__1_1;
#line 274 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastY_8 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;

#line 274 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_7 == ml_backend__ml_tag_switch__CastY_8);
#line 274 "ml_tag_switch.m"
    if (ml_backend__ml_tag_switch__succeeded)
#line 274 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
#line 274 "ml_tag_switch.m"
    else
#line 274 "ml_tag_switch.m"
      {
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__TypeInfo_9_9;
#line 274 "ml_tag_switch.m"
        MR_Integer ml_backend__ml_tag_switch__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "ml_tag_switch.m"
        MR_Integer ml_backend__ml_tag_switch__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 1)));

#line 1493 "ml_backend.ml_tag_switch.c"
        ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_3_3 == ml_backend__ml_tag_switch__V_5_5);
#line 274 "ml_tag_switch.m"
        if (ml_backend__ml_tag_switch__succeeded)
#line 274 "ml_tag_switch.m"
          {
#line 1499 "ml_backend.ml_tag_switch.c"
            ml_backend__ml_tag_switch__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[0];
#line 1501 "ml_backend.ml_tag_switch.c"
            {
#line 1503 "ml_backend.ml_tag_switch.c"
              return ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tag_switch__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tag_switch__V_4_4)), ((MR_Box) (ml_backend__ml_tag_switch__V_6_6)));
            }
#line 274 "ml_tag_switch.m"
          }
#line 274 "ml_tag_switch.m"
      }
#line 274 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 274 "ml_tag_switch.m"
  }
#line 274 "ml_tag_switch.m"
}

#line 280 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
#line 280 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
#line 280 "ml_tag_switch.m"
{
#line 280 "ml_tag_switch.m"
  {
#line 280 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 280 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_4 = ml_backend__ml_tag_switch__HeadVar__2_2;
#line 280 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_5 = ml_backend__ml_tag_switch__HeadVar__3_3;

#line 280 "ml_tag_switch.m"
    {
#line 280 "ml_tag_switch.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[3], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_5)));
#line 280 "ml_tag_switch.m"
      return;
    }
#line 280 "ml_tag_switch.m"
  }
#line 280 "ml_tag_switch.m"
}

#line 280 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 280 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
#line 280 "ml_tag_switch.m"
{
#line 280 "ml_tag_switch.m"
  {
#line 280 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 280 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_3 = ml_backend__ml_tag_switch__HeadVar__1_1;
#line 280 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_4 = ml_backend__ml_tag_switch__HeadVar__2_2;

#line 280 "ml_tag_switch.m"
    {
#line 280 "ml_tag_switch.m"
      return ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[3], ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_4)));
    }
#line 280 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 280 "ml_tag_switch.m"
  }
#line 280 "ml_tag_switch.m"
}

#line 62 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
#line 62 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
#line 62 "ml_tag_switch.m"
{
#line 62 "ml_tag_switch.m"
  {
#line 62 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 62 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastX_12 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
#line 62 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastY_13 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

#line 62 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_12 == ml_backend__ml_tag_switch__CastY_13);
#line 62 "ml_tag_switch.m"
    if (ml_backend__ml_tag_switch__succeeded)
#line 1603 "ml_backend.ml_tag_switch.c"
      *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "ml_tag_switch.m"
    else
#line 62 "ml_tag_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 62 "ml_tag_switch.m"
      {
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_16_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 1);

#line 62 "ml_tag_switch.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 62 "ml_tag_switch.m"
          {
#line 62 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__V_11_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3), (MR_Integer) 1);

#line 62 "ml_tag_switch.m"
            {
#line 62 "ml_tag_switch.m"
              hlds__hlds_goal____Compare____hlds_goal_0_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__V_16_16, ml_backend__ml_tag_switch__V_11_11);
#line 62 "ml_tag_switch.m"
              return;
            }
#line 62 "ml_tag_switch.m"
          }
#line 62 "ml_tag_switch.m"
        else
#line 1632 "ml_backend.ml_tag_switch.c"
          *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 2;
#line 62 "ml_tag_switch.m"
      }
#line 62 "ml_tag_switch.m"
    else
#line 62 "ml_tag_switch.m"
      {
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_17_17 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 0);

#line 62 "ml_tag_switch.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1645 "ml_backend.ml_tag_switch.c"
          *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 1;
#line 62 "ml_tag_switch.m"
        else
#line 62 "ml_tag_switch.m"
          {
#line 62 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3), (MR_Integer) 0);

#line 62 "ml_tag_switch.m"
            {
#line 62 "ml_tag_switch.m"
              ml_backend__mlds____Compare____statement_0_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__V_17_17, ml_backend__ml_tag_switch__V_5_5);
#line 62 "ml_tag_switch.m"
              return;
            }
#line 62 "ml_tag_switch.m"
          }
#line 62 "ml_tag_switch.m"
      }
#line 62 "ml_tag_switch.m"
  }
#line 62 "ml_tag_switch.m"
}

#line 62 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 62 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
#line 62 "ml_tag_switch.m"
{
#line 62 "ml_tag_switch.m"
  {
#line 62 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 62 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastX_7 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__1_1;
#line 62 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__CastY_8 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;

#line 62 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_7 == ml_backend__ml_tag_switch__CastY_8);
#line 62 "ml_tag_switch.m"
    if (ml_backend__ml_tag_switch__succeeded)
#line 62 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
#line 62 "ml_tag_switch.m"
    else
#line 62 "ml_tag_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 62 "ml_tag_switch.m"
      {
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1), (MR_Integer) 1);
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_6_6;

#line 62 "ml_tag_switch.m"
        ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 62 "ml_tag_switch.m"
        if (ml_backend__ml_tag_switch__succeeded)
#line 62 "ml_tag_switch.m"
          {
#line 62 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__V_6_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 1);
#line 1713 "ml_backend.ml_tag_switch.c"
            {
#line 1715 "ml_backend.ml_tag_switch.c"
              return ml_backend__ml_tag_switch__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ml_backend__ml_tag_switch__V_5_5, ml_backend__ml_tag_switch__V_6_6);
            }
#line 62 "ml_tag_switch.m"
          }
#line 62 "ml_tag_switch.m"
      }
#line 62 "ml_tag_switch.m"
    else
#line 62 "ml_tag_switch.m"
      {
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_3_3 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1), (MR_Integer) 0);
#line 62 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_4_4;

#line 62 "ml_tag_switch.m"
        ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 62 "ml_tag_switch.m"
        if (ml_backend__ml_tag_switch__succeeded)
#line 62 "ml_tag_switch.m"
          {
#line 62 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 0);
#line 1739 "ml_backend.ml_tag_switch.c"
            {
#line 1741 "ml_backend.ml_tag_switch.c"
              return ml_backend__ml_tag_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_tag_switch__V_3_3, ml_backend__ml_tag_switch__V_4_4);
            }
#line 62 "ml_tag_switch.m"
          }
#line 62 "ml_tag_switch.m"
      }
#line 62 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 62 "ml_tag_switch.m"
  }
#line 62 "ml_tag_switch.m"
}

#line 159 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
#line 159 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
#line 159 "ml_tag_switch.m"
{
#line 159 "ml_tag_switch.m"
  {
#line 159 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 159 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
#line 159 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

#line 159 "ml_tag_switch.m"
    {
#line 159 "ml_tag_switch.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__Cast_HeadVar1_4, ml_backend__ml_tag_switch__Cast_HeadVar2_5);
#line 159 "ml_tag_switch.m"
      return;
    }
#line 159 "ml_tag_switch.m"
  }
#line 159 "ml_tag_switch.m"
}

#line 159 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_1,
#line 159 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
#line 159 "ml_tag_switch.m"
{
#line 1796 "ml_backend.ml_tag_switch.c"
  {
#line 1798 "ml_backend.ml_tag_switch.c"
    MR_bool ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__HeadVar__2_1 == ml_backend__ml_tag_switch__HeadVar__2_2);

#line 1801 "ml_backend.ml_tag_switch.c"
    return ml_backend__ml_tag_switch__succeeded;
#line 1803 "ml_backend.ml_tag_switch.c"
  }
#line 159 "ml_tag_switch.m"
}

#line 60 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
#line 60 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
#line 60 "ml_tag_switch.m"
{
#line 60 "ml_tag_switch.m"
  {
#line 60 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 60 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_4 = ml_backend__ml_tag_switch__HeadVar__2_2;
#line 60 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_5 = ml_backend__ml_tag_switch__HeadVar__3_3;

#line 60 "ml_tag_switch.m"
    {
#line 60 "ml_tag_switch.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_5)));
#line 60 "ml_tag_switch.m"
      return;
    }
#line 60 "ml_tag_switch.m"
  }
#line 60 "ml_tag_switch.m"
}

#line 60 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 60 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
#line 60 "ml_tag_switch.m"
{
#line 60 "ml_tag_switch.m"
  {
#line 60 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 60 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_3 = ml_backend__ml_tag_switch__HeadVar__1_1;
#line 60 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_4 = ml_backend__ml_tag_switch__HeadVar__2_2;

#line 60 "ml_tag_switch.m"
    {
#line 60 "ml_tag_switch.m"
      return ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_4)));
    }
#line 60 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 60 "ml_tag_switch.m"
  }
#line 60 "ml_tag_switch.m"
}

#line 369 "ml_tag_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
#line 369 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__Stag_3)
#line 369 "ml_tag_switch.m"
{
#line 371 "ml_tag_switch.m"
  {
#line 371 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 371 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__HeadVar__2_2;
#line 371 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_4_4;
#line 371 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_5_5;

#line 371 "ml_tag_switch.m"
    {
#line 371 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_5_5, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_3));
#line 371 "ml_tag_switch.m"
    }
#line 371 "ml_tag_switch.m"
    {
#line 371 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 371 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_5_5));
#line 371 "ml_tag_switch.m"
    }
#line 371 "ml_tag_switch.m"
    {
#line 371 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_4_4));
#line 371 "ml_tag_switch.m"
    }
#line 371 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__HeadVar__2_2;
#line 371 "ml_tag_switch.m"
  }
#line 369 "ml_tag_switch.m"
}

#line 365 "ml_tag_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
#line 365 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 365 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1)
#line 365 "ml_tag_switch.m"
{
#line 365 "ml_tag_switch.m"
  {
#line 365 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__wrapper_arg_2;
#line 365 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
#line 365 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__2_2;

#line 365 "ml_tag_switch.m"
    {
#line 365 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__conv0_HeadVar__2_2 = ml_backend__ml_tag_switch__make_match_value_1_f_0(((MR_Integer) ml_backend__ml_tag_switch__wrapper_arg_1));
    }
#line 365 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__2_2));
#line 365 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__wrapper_arg_2;
#line 365 "ml_tag_switch.m"
  }
#line 365 "ml_tag_switch.m"
}

#line 347 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_3,
#line 347 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__4_4,
#line 347 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5,
#line 347 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6)
#line 347 "ml_tag_switch.m"
{
#line 351 "ml_tag_switch.m"
  {
#line 351 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 351 "ml_tag_switch.m"
    if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "ml_tag_switch.m"
      {
#line 351 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 351 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5;
#line 351 "ml_tag_switch.m"
      }
#line 351 "ml_tag_switch.m"
    else
#line 352 "ml_tag_switch.m"
      {
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_24_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Group_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Groups_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Case_16;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Cases_17;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__CaseId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Group_12, (MR_Integer) 0)));
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Stags_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Group_12, (MR_Integer) 1)));
#line 352 "ml_tag_switch.m"
        MR_Integer ml_backend__ml_tag_switch__FirstStag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Stags_31, (MR_Integer) 0)));
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__RevLaterStags_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Stags_31, (MR_Integer) 1)));
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__LaterStags_34;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__FirstMatch_35;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__LaterMatches_36;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Statement_37;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_45_45;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__V_46_46;
#line 352 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__MaybeCode_54;
#line 151 "ml_tag_switch.m"
        MR_Box ml_backend__ml_tag_switch__conv1_MaybeCode_54;

#line 363 "ml_tag_switch.m"
        {
#line 363 "ml_tag_switch.m"
          mercury__list__reverse_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_24_40, ml_backend__ml_tag_switch__RevLaterStags_33, &ml_backend__ml_tag_switch__LaterStags_34);
        }
#line 371 "ml_tag_switch.m"
        {
#line 371 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_46_46, 0) = ((MR_Box) (ml_backend__ml_tag_switch__FirstStag_32));
#line 371 "ml_tag_switch.m"
        }
#line 371 "ml_tag_switch.m"
        {
#line 371 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 371 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_45_45, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_46_46));
#line 371 "ml_tag_switch.m"
        }
#line 371 "ml_tag_switch.m"
        {
#line 371 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__FirstMatch_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__FirstMatch_35, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_45_45));
#line 371 "ml_tag_switch.m"
        }
#line 365 "ml_tag_switch.m"
        {
#line 365 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__LaterMatches_36 = mercury__list__map_2_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_24_40, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[5], ml_backend__ml_tag_switch__LaterStags_34);
        }
#line 151 "ml_tag_switch.m"
        {
#line 151 "ml_tag_switch.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ml_backend__ml_tag_switch__CodeMap_2, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_30)), &ml_backend__ml_tag_switch__conv1_MaybeCode_54);
        }
#line 151 "ml_tag_switch.m"
        ml_backend__ml_tag_switch__MaybeCode_54 = ((MR_Word) ml_backend__ml_tag_switch__conv1_MaybeCode_54);
#line 154 "ml_tag_switch.m"
        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54)) == (MR_mktag((MR_Integer) 1))))
#line 155 "ml_tag_switch.m"
          {
#line 155 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__Goal_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54), (MR_Integer) 1);

#line 156 "ml_tag_switch.m"
            {
#line 156 "ml_tag_switch.m"
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_3, ml_backend__ml_tag_switch__Goal_55, &ml_backend__ml_tag_switch__Statement_37, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21);
            }
#line 155 "ml_tag_switch.m"
          }
#line 154 "ml_tag_switch.m"
        else
#line 153 "ml_tag_switch.m"
          {
#line 153 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__Statement_37 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54), (MR_Integer) 0);
#line 153 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5;
#line 153 "ml_tag_switch.m"
          }
#line 367 "ml_tag_switch.m"
        {
#line 367 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 0) = ((MR_Box) (ml_backend__ml_tag_switch__FirstMatch_35));
#line 367 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 1) = ((MR_Box) (ml_backend__ml_tag_switch__LaterMatches_36));
#line 367 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 2) = ((MR_Box) (ml_backend__ml_tag_switch__Statement_37));
#line 367 "ml_tag_switch.m"
        }
#line 354 "ml_tag_switch.m"
        {
#line 354 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(ml_backend__ml_tag_switch__Groups_13, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__CodeModel_3, &ml_backend__ml_tag_switch__Cases_17, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6);
        }
#line 352 "ml_tag_switch.m"
        {
#line 352 "ml_tag_switch.m"
          MR_Word base;
#line 352 "ml_tag_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__HeadVar__4_4 = base;
#line 352 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Case_16));
#line 352 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__Cases_17));
#line 352 "ml_tag_switch.m"
        }
#line 352 "ml_tag_switch.m"
      }
#line 351 "ml_tag_switch.m"
  }
#line 347 "ml_tag_switch.m"
}

#line 307 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Cases_12,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_13,
#line 307 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__PrimaryTag_14,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__StagLocn_15,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_16,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_17,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_18,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_19,
#line 307 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Statement_20,
#line 307 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33,
#line 307 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34)
#line 307 "ml_tag_switch.m"
{
#line 313 "ml_tag_switch.m"
  {
#line 313 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__ModuleInfo_22;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__VarType_23;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__VarLval_24;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__VarRval_25;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STagRval_26;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__StagCases0_27;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__StagCases_28;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Default_29;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__SwitchStmt_31;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__MLDS_Context_32;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40;
#line 313 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41;

#line 315 "ml_tag_switch.m"
    {
#line 315 "ml_tag_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, &ml_backend__ml_tag_switch__ModuleInfo_22);
    }
#line 316 "ml_tag_switch.m"
    {
#line 316 "ml_tag_switch.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, ml_backend__ml_tag_switch__Var_16, &ml_backend__ml_tag_switch__VarType_23);
    }
#line 317 "ml_tag_switch.m"
    {
#line 317 "ml_tag_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, ml_backend__ml_tag_switch__Var_16, &ml_backend__ml_tag_switch__VarLval_24);
    }
#line 318 "ml_tag_switch.m"
    {
#line 318 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__VarRval_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__VarRval_25, 0) = ((MR_Box) (ml_backend__ml_tag_switch__VarLval_24));
#line 318 "ml_tag_switch.m"
    }
#line 322 "ml_tag_switch.m"
#line 322 "ml_tag_switch.m"
    switch (ml_backend__ml_tag_switch__StagLocn_15) {
#line 322 "ml_tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 322 "ml_tag_switch.m"
      case (MR_Integer) 2:
#line 320 "ml_tag_switch.m"
        {
#line 321 "ml_tag_switch.m"
          {
#line 321 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__STagRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_3[1])));
#line 321 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 2) = ((MR_Box) (ml_backend__ml_tag_switch__VarRval_25));
#line 321 "ml_tag_switch.m"
          }
#line 320 "ml_tag_switch.m"
        }
#line 322 "ml_tag_switch.m"
        break;
#line 322 "ml_tag_switch.m"
      case (MR_Integer) 0:
#line 322 "ml_tag_switch.m"
      case (MR_Integer) 1:
#line 329 "ml_tag_switch.m"
        {
#line 330 "ml_tag_switch.m"
          {
#line 330 "ml_tag_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_stag_switch\'/11", (MR_String) "no stag");
#line 330 "ml_tag_switch.m"
            return;
          }
#line 329 "ml_tag_switch.m"
        }
#line 322 "ml_tag_switch.m"
        break;
#line 322 "ml_tag_switch.m"
      case (MR_Integer) 3:
#line 324 "ml_tag_switch.m"
        {
#line 324 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__STagRval_26 = ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0(ml_backend__ml_tag_switch__ModuleInfo_22, ml_backend__ml_tag_switch__PrimaryTag_14, ml_backend__ml_tag_switch__VarType_23, ml_backend__ml_tag_switch__VarRval_25);
        }
#line 322 "ml_tag_switch.m"
        break;
#line 322 "ml_tag_switch.m"
    }
#line 334 "ml_tag_switch.m"
    {
#line 334 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(ml_backend__ml_tag_switch__Cases_12, ml_backend__ml_tag_switch__CodeMap_13, ml_backend__ml_tag_switch__CodeModel_17, &ml_backend__ml_tag_switch__StagCases0_27, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40);
    }
#line 335 "ml_tag_switch.m"
    {
#line 335 "ml_tag_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_tag_switch__StagCases0_27, &ml_backend__ml_tag_switch__StagCases_28);
    }
#line 336 "ml_tag_switch.m"
    {
#line 336 "ml_tag_switch.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_tag_switch__CanFail_18, ml_backend__ml_tag_switch__CodeModel_17, ml_backend__ml_tag_switch__Context_19, &ml_backend__ml_tag_switch__Default_29, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41);
    }
#line 340 "ml_tag_switch.m"
    {
#line 340 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__SwitchStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 2) = ((MR_Box) (ml_backend__ml_tag_switch__STagRval_26));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 4) = ((MR_Box) (ml_backend__ml_tag_switch__StagCases_28));
#line 340 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 5) = ((MR_Box) (ml_backend__ml_tag_switch__Default_29));
#line 340 "ml_tag_switch.m"
    }
#line 342 "ml_tag_switch.m"
    {
#line 342 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_tag_switch__Context_19);
    }
#line 343 "ml_tag_switch.m"
    {
#line 343 "ml_tag_switch.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_tag_switch__SwitchStmt_31, ml_backend__ml_tag_switch__MLDS_Context_32, ml_backend__ml_tag_switch__Statement_20, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34);
#line 343 "ml_tag_switch.m"
      return;
    }
#line 313 "ml_tag_switch.m"
  }
#line 307 "ml_tag_switch.m"
}

#line 289 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
#line 289 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 289 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2,
#line 289 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3)
#line 289 "ml_tag_switch.m"
{
#line 292 "ml_tag_switch.m"
  while (MR_TRUE)
#line 292 "ml_tag_switch.m"
    {
#line 292 "ml_tag_switch.m"
      /* tailcall optimized into a loop */
#line 292 "ml_tag_switch.m"
      {
#line 292 "ml_tag_switch.m"
        MR_bool ml_backend__ml_tag_switch__succeeded;

#line 292 "ml_tag_switch.m"
        if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2;
#line 292 "ml_tag_switch.m"
        else
#line 293 "ml_tag_switch.m"
          {
#line 293 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__Entry_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__Entries_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "ml_tag_switch.m"
            MR_Integer ml_backend__ml_tag_switch__Stag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Entry_7, (MR_Integer) 0)));
#line 293 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__CaseId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Entry_7, (MR_Integer) 1)));
#line 293 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19;
#line 299 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__OldEntry_12;
#line 295 "ml_tag_switch.m"
            MR_Box ml_backend__ml_tag_switch__conv0_OldEntry_12;

#line 295 "ml_tag_switch.m"
            {
#line 295 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), &ml_backend__ml_tag_switch__conv0_OldEntry_12);
            }
#line 295 "ml_tag_switch.m"
            if (ml_backend__ml_tag_switch__succeeded)
#line 295 "ml_tag_switch.m"
              {
#line 295 "ml_tag_switch.m"
                ml_backend__ml_tag_switch__OldEntry_12 = ((MR_Word) ml_backend__ml_tag_switch__conv0_OldEntry_12);
#line 295 "ml_tag_switch.m"
                ml_backend__ml_tag_switch__succeeded = MR_TRUE;
#line 295 "ml_tag_switch.m"
              }
#line 299 "ml_tag_switch.m"
            if (ml_backend__ml_tag_switch__succeeded)
#line 296 "ml_tag_switch.m"
              {
#line 296 "ml_tag_switch.m"
                MR_Integer ml_backend__ml_tag_switch__OldFirstStag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__OldEntry_12, (MR_Integer) 0)));
#line 296 "ml_tag_switch.m"
                MR_Word ml_backend__ml_tag_switch__OldLaterStags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__OldEntry_12, (MR_Integer) 1)));
#line 296 "ml_tag_switch.m"
                MR_Word ml_backend__ml_tag_switch__NewEntry_15;
#line 296 "ml_tag_switch.m"
                MR_Word ml_backend__ml_tag_switch__V_18_18;

#line 297 "ml_tag_switch.m"
                {
#line 297 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_10));
#line 297 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__V_18_18, 1) = ((MR_Box) (ml_backend__ml_tag_switch__OldLaterStags_14));
#line 297 "ml_tag_switch.m"
                }
#line 297 "ml_tag_switch.m"
                {
#line 297 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__NewEntry_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_15, 0) = ((MR_Box) (ml_backend__ml_tag_switch__OldFirstStag_13));
#line 297 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_15, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_18_18));
#line 297 "ml_tag_switch.m"
                }
#line 298 "ml_tag_switch.m"
                {
#line 298 "ml_tag_switch.m"
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), ((MR_Box) (ml_backend__ml_tag_switch__NewEntry_15)), ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, &ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19);
                }
#line 296 "ml_tag_switch.m"
              }
#line 299 "ml_tag_switch.m"
            else
#line 300 "ml_tag_switch.m"
              {
#line 300 "ml_tag_switch.m"
                MR_Word ml_backend__ml_tag_switch__NewEntry_23;

#line 300 "ml_tag_switch.m"
                {
#line 300 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__NewEntry_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_23, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_10));
#line 300 "ml_tag_switch.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "ml_tag_switch.m"
                }
#line 301 "ml_tag_switch.m"
                {
#line 301 "ml_tag_switch.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), ((MR_Box) (ml_backend__ml_tag_switch__NewEntry_23)), ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, &ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19);
                }
#line 300 "ml_tag_switch.m"
              }
#line 303 "ml_tag_switch.m"
            /* direct tailcall eliminated */
#line 303 "ml_tag_switch.m"
            {
#line 303 "ml_tag_switch.m"
              MR_Word ml_backend__ml_tag_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_tag_switch__Entries_8;
#line 303 "ml_tag_switch.m"
              MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0__tmp_copy_2 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19;

#line 303 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0__tmp_copy_2;
#line 303 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__HeadVar__1_1 = ml_backend__ml_tag_switch__HeadVar__1__tmp_copy_1;
#line 303 "ml_tag_switch.m"
            }
#line 303 "ml_tag_switch.m"
            continue;
#line 293 "ml_tag_switch.m"
          }
#line 292 "ml_tag_switch.m"
      }
#line 292 "ml_tag_switch.m"
      break;
#line 292 "ml_tag_switch.m"
    }
#line 289 "ml_tag_switch.m"
}

#line 265 "ml_tag_switch.m"
static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
#line 265 "ml_tag_switch.m"
  MR_Integer ml_backend__ml_tag_switch__Ptag_3)
#line 265 "ml_tag_switch.m"
{
#line 267 "ml_tag_switch.m"
  {
#line 267 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 267 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__HeadVar__2_2;
#line 267 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_4_4;
#line 267 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_5_5;

#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_5_5, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Ptag_3));
#line 267 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_5_5));
#line 267 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_4_4));
#line 267 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__HeadVar__2_2;
#line 267 "ml_tag_switch.m"
  }
#line 265 "ml_tag_switch.m"
}

#line 262 "ml_tag_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
#line 262 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 262 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1)
#line 262 "ml_tag_switch.m"
{
#line 262 "ml_tag_switch.m"
  {
#line 262 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__wrapper_arg_2;
#line 262 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
#line 262 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__conv1_HeadVar__2_2;

#line 262 "ml_tag_switch.m"
    {
#line 262 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__conv1_HeadVar__2_2 = ml_backend__ml_tag_switch__make_ptag_match_1_f_0(((MR_Integer) ml_backend__ml_tag_switch__wrapper_arg_1));
    }
#line 262 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv1_HeadVar__2_2));
#line 262 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__wrapper_arg_2;
#line 262 "ml_tag_switch.m"
  }
#line 262 "ml_tag_switch.m"
}

#line 229 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
#line 229 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg)
#line 229 "ml_tag_switch.m"
{
#line 229 "ml_tag_switch.m"
  {
#line 229 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 229 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;

#line 229 "ml_tag_switch.m"
    {
#line 229 "ml_tag_switch.m"
      return ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__229__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 4))));
    }
#line 229 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 229 "ml_tag_switch.m"
  }
#line 229 "ml_tag_switch.m"
}

#line 207 "ml_tag_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
#line 207 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg)
#line 207 "ml_tag_switch.m"
{
#line 207 "ml_tag_switch.m"
  {
#line 207 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 207 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;

#line 207 "ml_tag_switch.m"
    {
#line 207 "ml_tag_switch.m"
      return ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__207__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 4))));
    }
#line 207 "ml_tag_switch.m"
    return ml_backend__ml_tag_switch__succeeded;
#line 207 "ml_tag_switch.m"
  }
#line 207 "ml_tag_switch.m"
}

#line 196 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCase_11,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_12,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_13,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_14,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_15,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_16,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_17,
#line 196 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__MLDS_Case_18,
#line 196 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41,
#line 196 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42)
#line 196 "ml_tag_switch.m"
{
#line 202 "ml_tag_switch.m"
  {
#line 202 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_71_71;
#line 202 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__MainPtag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 0)));
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__OtherPtags_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 1)));
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__SecTagLocn_22;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__GoalMap_23;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__CountInfo_24;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25;
#line 202 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__MaxSecondary_26;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__GoalList_27;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Statement_30;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__MainPtagMatch_39;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__OtherPtagMatches_40;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 2)));
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_44_44;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_89_89;
#line 202 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_90_90;
#line 205 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__conv0_CountInfo_24;

#line 204 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__SecTagLocn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_43_43, (MR_Integer) 0)));
#line 204 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__GoalMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_43_43, (MR_Integer) 1)));
#line 2668 "ml_backend.ml_tag_switch.c"
    ml_backend__ml_tag_switch__TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 205 "ml_tag_switch.m"
    {
#line 205 "ml_tag_switch.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[1], ml_backend__ml_tag_switch__PtagCountMap_16, ml_backend__ml_tag_switch__MainPtag_20, &ml_backend__ml_tag_switch__conv0_CountInfo_24);
    }
#line 205 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__CountInfo_24 = ((MR_Word) ml_backend__ml_tag_switch__conv0_CountInfo_24);
#line 206 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__SecTagLocn1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__CountInfo_24, (MR_Integer) 0)));
#line 206 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__MaxSecondary_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__CountInfo_24, (MR_Integer) 1)));
#line 207 "ml_tag_switch.m"
    {
#line 207 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 207 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[0]));
#line 207 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1));
#line 207 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 207 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 3) = ((MR_Box) (ml_backend__ml_tag_switch__SecTagLocn_22));
#line 207 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 4) = ((MR_Box) (ml_backend__ml_tag_switch__SecTagLocn1_25));
#line 207 "ml_tag_switch.m"
    }
#line 207 "ml_tag_switch.m"
    {
#line 207 "ml_tag_switch.m"
      mercury__require__expect_4_p_0(ml_backend__ml_tag_switch__V_44_44, (MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "secondary tag locations differ");
    }
#line 209 "ml_tag_switch.m"
    {
#line 209 "ml_tag_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_71_71, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_tag_switch__GoalMap_23, &ml_backend__ml_tag_switch__GoalList_27);
    }
#line 225 "ml_tag_switch.m"
#line 225 "ml_tag_switch.m"
    switch (ml_backend__ml_tag_switch__SecTagLocn_22) {
#line 225 "ml_tag_switch.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 225 "ml_tag_switch.m"
      case (MR_Integer) 2:
#line 225 "ml_tag_switch.m"
      case (MR_Integer) 3:
#line 228 "ml_tag_switch.m"
        {
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_7_86;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_8_87;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__CaseCanFail_34;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__GroupedGoalList_37;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__V_48_48;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__RevMap_84;
#line 228 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__V_85_85;
#line 256 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__CaseId_69;
#line 248 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__V_54_54;
#line 248 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch__V_55_55;
#line 248 "ml_tag_switch.m"
          MR_Word ml_backend__ml_tag_switch___Stags_38;

#line 229 "ml_tag_switch.m"
          {
#line 229 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 229 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[1]));
#line 229 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2));
#line 229 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 229 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_tag_switch__OtherPtags_21));
#line 229 "ml_tag_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "ml_tag_switch.m"
          }
#line 229 "ml_tag_switch.m"
          {
#line 229 "ml_tag_switch.m"
            mercury__require__expect_4_p_0(ml_backend__ml_tag_switch__V_48_48, (MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) ">1 ptag with secondary tag");
          }
#line 234 "ml_tag_switch.m"
#line 234 "ml_tag_switch.m"
          switch (ml_backend__ml_tag_switch__CanFail_14) {
#line 234 "ml_tag_switch.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 234 "ml_tag_switch.m"
            case (MR_Integer) 0:
#line 235 "ml_tag_switch.m"
              {
#line 237 "ml_tag_switch.m"
                MR_Integer ml_backend__ml_tag_switch__GoalCount_35;
#line 237 "ml_tag_switch.m"
                MR_Integer ml_backend__ml_tag_switch__FullGoalCount_36;

#line 237 "ml_tag_switch.m"
                {
#line 237 "ml_tag_switch.m"
                  mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[2], ml_backend__ml_tag_switch__GoalList_27, &ml_backend__ml_tag_switch__GoalCount_35);
                }
#line 238 "ml_tag_switch.m"
                ml_backend__ml_tag_switch__FullGoalCount_36 = (ml_backend__ml_tag_switch__MaxSecondary_26 + (MR_Integer) 1);
#line 239 "ml_tag_switch.m"
                ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__FullGoalCount_36 == ml_backend__ml_tag_switch__GoalCount_35);
#line 235 "ml_tag_switch.m"
                if (ml_backend__ml_tag_switch__succeeded)
#line 241 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 1;
#line 235 "ml_tag_switch.m"
                else
#line 243 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 0;
#line 235 "ml_tag_switch.m"
              }
#line 234 "ml_tag_switch.m"
              break;
#line 234 "ml_tag_switch.m"
            case (MR_Integer) 1:
#line 232 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 1;
#line 234 "ml_tag_switch.m"
              break;
#line 234 "ml_tag_switch.m"
          }
#line 2805 "ml_backend.ml_tag_switch.c"
          ml_backend__ml_tag_switch__TypeCtorInfo_7_86 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 2807 "ml_backend.ml_tag_switch.c"
          ml_backend__ml_tag_switch__TypeCtorInfo_8_87 = (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0;
#line 286 "ml_tag_switch.m"
          {
#line 286 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__V_85_85 = mercury__map__init_0_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_7_86, ml_backend__ml_tag_switch__TypeCtorInfo_8_87);
          }
#line 286 "ml_tag_switch.m"
          {
#line 286 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(ml_backend__ml_tag_switch__GoalList_27, ml_backend__ml_tag_switch__V_85_85, &ml_backend__ml_tag_switch__RevMap_84);
          }
#line 287 "ml_tag_switch.m"
          {
#line 287 "ml_tag_switch.m"
            mercury__map__to_assoc_list_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_7_86, ml_backend__ml_tag_switch__TypeCtorInfo_8_87, ml_backend__ml_tag_switch__RevMap_84, &ml_backend__ml_tag_switch__GroupedGoalList_37);
          }
#line 249 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CaseCanFail_34 == (MR_Integer) 1);
#line 248 "ml_tag_switch.m"
          if (ml_backend__ml_tag_switch__succeeded)
#line 248 "ml_tag_switch.m"
            {
#line 248 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__GroupedGoalList_37)) == (MR_mktag((MR_Integer) 1)));
#line 248 "ml_tag_switch.m"
              if (ml_backend__ml_tag_switch__succeeded)
#line 248 "ml_tag_switch.m"
                {
#line 248 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GroupedGoalList_37, (MR_Integer) 0)));
#line 248 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GroupedGoalList_37, (MR_Integer) 1)));
#line 248 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "ml_tag_switch.m"
                  if (ml_backend__ml_tag_switch__succeeded)
#line 248 "ml_tag_switch.m"
                    {
#line 248 "ml_tag_switch.m"
                      ml_backend__ml_tag_switch__CaseId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_54_54, (MR_Integer) 0)));
#line 248 "ml_tag_switch.m"
                      ml_backend__ml_tag_switch___Stags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_54_54, (MR_Integer) 1)));
#line 248 "ml_tag_switch.m"
                      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
#line 248 "ml_tag_switch.m"
                    }
#line 248 "ml_tag_switch.m"
                }
#line 248 "ml_tag_switch.m"
            }
#line 256 "ml_tag_switch.m"
          if (ml_backend__ml_tag_switch__succeeded)
#line 255 "ml_tag_switch.m"
            {
#line 255 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__lookup_code_map_6_p_0(ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__CaseId_69, ml_backend__ml_tag_switch__CodeModel_15, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
            }
#line 256 "ml_tag_switch.m"
          else
#line 257 "ml_tag_switch.m"
            {
#line 257 "ml_tag_switch.m"
              ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(ml_backend__ml_tag_switch__GroupedGoalList_37, ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__MainPtag_20, ml_backend__ml_tag_switch__SecTagLocn_22, ml_backend__ml_tag_switch__Var_13, ml_backend__ml_tag_switch__CodeModel_15, ml_backend__ml_tag_switch__CaseCanFail_34, ml_backend__ml_tag_switch__Context_17, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
            }
#line 228 "ml_tag_switch.m"
        }
#line 225 "ml_tag_switch.m"
        break;
#line 225 "ml_tag_switch.m"
      case (MR_Integer) 0:
#line 225 "ml_tag_switch.m"
      case (MR_Integer) 1:
#line 213 "ml_tag_switch.m"
        if ((ml_backend__ml_tag_switch__GoalList_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "ml_tag_switch.m"
          {
#line 217 "ml_tag_switch.m"
            {
#line 217 "ml_tag_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "no goal for non-shared tag");
#line 217 "ml_tag_switch.m"
              return;
            }
#line 216 "ml_tag_switch.m"
          }
#line 213 "ml_tag_switch.m"
        else
#line 218 "ml_tag_switch.m"
          {
#line 218 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GoalList_27, (MR_Integer) 1)));
#line 218 "ml_tag_switch.m"
            MR_Word ml_backend__ml_tag_switch__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GoalList_27, (MR_Integer) 0)));

#line 218 "ml_tag_switch.m"
            if ((ml_backend__ml_tag_switch__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "ml_tag_switch.m"
              {
#line 219 "ml_tag_switch.m"
                MR_Word ml_backend__ml_tag_switch__CaseId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_81_81, (MR_Integer) 1)));
#line 219 "ml_tag_switch.m"
                MR_Integer ml_backend__ml_tag_switch___Stag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_81_81, (MR_Integer) 0)));

#line 220 "ml_tag_switch.m"
                {
#line 220 "ml_tag_switch.m"
                  ml_backend__ml_tag_switch__lookup_code_map_6_p_0(ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__CaseId_29, ml_backend__ml_tag_switch__CodeModel_15, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
                }
#line 219 "ml_tag_switch.m"
              }
#line 218 "ml_tag_switch.m"
            else
#line 222 "ml_tag_switch.m"
              {
#line 223 "ml_tag_switch.m"
                {
#line 223 "ml_tag_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "more than one goal for non-shared tag");
#line 223 "ml_tag_switch.m"
                  return;
                }
#line 222 "ml_tag_switch.m"
              }
#line 218 "ml_tag_switch.m"
          }
#line 225 "ml_tag_switch.m"
        break;
#line 225 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_90_90, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MainPtag_20));
#line 267 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_89_89, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_90_90));
#line 267 "ml_tag_switch.m"
    }
#line 267 "ml_tag_switch.m"
    {
#line 267 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__MainPtagMatch_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__MainPtagMatch_39, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_89_89));
#line 267 "ml_tag_switch.m"
    }
#line 262 "ml_tag_switch.m"
    {
#line 262 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__OtherPtagMatches_40 = mercury__list__map_2_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_71_71, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[4], ml_backend__ml_tag_switch__OtherPtags_21);
    }
#line 263 "ml_tag_switch.m"
    {
#line 263 "ml_tag_switch.m"
      MR_Word base;
#line 263 "ml_tag_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_tag_switch.m"
      *ml_backend__ml_tag_switch__MLDS_Case_18 = base;
#line 263 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MainPtagMatch_39));
#line 263 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__OtherPtagMatches_40));
#line 263 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tag_switch__Statement_30));
#line 263 "ml_tag_switch.m"
    }
#line 202 "ml_tag_switch.m"
  }
#line 196 "ml_tag_switch.m"
}

#line 183 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_3,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_4,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_5,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_6,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_7,
#line 183 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__HeadVar__8_8,
#line 183 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9,
#line 183 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10)
#line 183 "ml_tag_switch.m"
{
#line 188 "ml_tag_switch.m"
  {
#line 188 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;

#line 188 "ml_tag_switch.m"
    if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "ml_tag_switch.m"
      {
#line 188 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9;
#line 188 "ml_tag_switch.m"
      }
#line 188 "ml_tag_switch.m"
    else
#line 190 "ml_tag_switch.m"
      {
#line 190 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Ptag_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Ptags_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__MLDS_Case_28;
#line 190 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__MLDS_Cases_29;
#line 190 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33;

#line 191 "ml_tag_switch.m"
        {
#line 191 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(ml_backend__ml_tag_switch__Ptag_20, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__Var_3, ml_backend__ml_tag_switch__CanFail_4, ml_backend__ml_tag_switch__CodeModel_5, ml_backend__ml_tag_switch__PtagCountMap_6, ml_backend__ml_tag_switch__Context_7, &ml_backend__ml_tag_switch__MLDS_Case_28, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33);
        }
#line 193 "ml_tag_switch.m"
        {
#line 193 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(ml_backend__ml_tag_switch__Ptags_21, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__Var_3, ml_backend__ml_tag_switch__CanFail_4, ml_backend__ml_tag_switch__CodeModel_5, ml_backend__ml_tag_switch__PtagCountMap_6, ml_backend__ml_tag_switch__Context_7, &ml_backend__ml_tag_switch__MLDS_Cases_29, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10);
        }
#line 190 "ml_tag_switch.m"
        {
#line 190 "ml_tag_switch.m"
          MR_Word base;
#line 190 "ml_tag_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__HeadVar__8_8 = base;
#line 190 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MLDS_Case_28));
#line 190 "ml_tag_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__MLDS_Cases_29));
#line 190 "ml_tag_switch.m"
        }
#line 190 "ml_tag_switch.m"
      }
#line 188 "ml_tag_switch.m"
  }
#line 183 "ml_tag_switch.m"
}

#line 147 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeMap_7,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CaseId_8,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_9,
#line 147 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Statement_10,
#line 147 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14,
#line 147 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15)
#line 147 "ml_tag_switch.m"
{
#line 150 "ml_tag_switch.m"
  {
#line 150 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 150 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__MaybeCode_12;
#line 151 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__conv0_MaybeCode_12;

#line 151 "ml_tag_switch.m"
    {
#line 151 "ml_tag_switch.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ml_backend__ml_tag_switch__CodeMap_7, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_8)), &ml_backend__ml_tag_switch__conv0_MaybeCode_12);
    }
#line 151 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__MaybeCode_12 = ((MR_Word) ml_backend__ml_tag_switch__conv0_MaybeCode_12);
#line 154 "ml_tag_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12)) == (MR_mktag((MR_Integer) 1))))
#line 155 "ml_tag_switch.m"
      {
#line 155 "ml_tag_switch.m"
        MR_Word ml_backend__ml_tag_switch__Goal_13 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12), (MR_Integer) 1);

#line 156 "ml_tag_switch.m"
        {
#line 156 "ml_tag_switch.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_9, ml_backend__ml_tag_switch__Goal_13, ml_backend__ml_tag_switch__Statement_10, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15);
#line 156 "ml_tag_switch.m"
          return;
        }
#line 155 "ml_tag_switch.m"
      }
#line 154 "ml_tag_switch.m"
    else
#line 153 "ml_tag_switch.m"
      {
#line 153 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__Statement_10 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12), (MR_Integer) 0);
#line 153 "ml_tag_switch.m"
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14;
#line 153 "ml_tag_switch.m"
      }
#line 150 "ml_tag_switch.m"
  }
#line 147 "ml_tag_switch.m"
}

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg)
#line 143 "ml_tag_switch.m"
{
#line 143 "ml_tag_switch.m"
  {
#line 143 "ml_tag_switch.m"
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

#line 143 "ml_tag_switch.m"
    MR_builtin_longjmp((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0, 1);
#line 143 "ml_tag_switch.m"
  }
#line 143 "ml_tag_switch.m"
}

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg)
#line 143 "ml_tag_switch.m"
{
#line 143 "ml_tag_switch.m"
  {
#line 143 "ml_tag_switch.m"
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

#line 143 "ml_tag_switch.m"
    {
#line 145 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__V_35_35;
#line 145 "ml_tag_switch.m"
      MR_String ml_backend__ml_tag_switch__V_34_34;

#line 145 "ml_tag_switch.m"
      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, (MR_Integer) 0)));
#line 145 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, (MR_Integer) 1)));
#line 145 "ml_tag_switch.m"
      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 145 "ml_tag_switch.m"
      if ((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
#line 145 "ml_tag_switch.m"
        {
#line 145 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36, (MR_Integer) 1)));
#line 145 "ml_tag_switch.m"
          {
#line 145 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(ml_backend__ml_tag_switch__env_ptr);
#line 145 "ml_tag_switch.m"
            return;
          }
#line 145 "ml_tag_switch.m"
        }
#line 143 "ml_tag_switch.m"
    }
#line 143 "ml_tag_switch.m"
  }
#line 143 "ml_tag_switch.m"
}

#line 143 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(
#line 143 "ml_tag_switch.m"
  void * ml_backend__ml_tag_switch__env_ptr_arg)
#line 143 "ml_tag_switch.m"
{
#line 143 "ml_tag_switch.m"
  {
#line 143 "ml_tag_switch.m"
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

#line 143 "ml_tag_switch.m"
    if (MR_builtin_setjmp((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0) == 0)
#line 143 "ml_tag_switch.m"
      {
#line 144 "ml_tag_switch.m"
        {
#line 144 "ml_tag_switch.m"
          ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20, &(ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2, ml_backend__ml_tag_switch__env_ptr);
        }
#line 143 "ml_tag_switch.m"
        (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = MR_FALSE;
#line 143 "ml_tag_switch.m"
      }
#line 143 "ml_tag_switch.m"
    else
#line 143 "ml_tag_switch.m"
      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = MR_TRUE;
#line 143 "ml_tag_switch.m"
  }
#line 143 "ml_tag_switch.m"
}

#line 117 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_10,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__TaggedCase_11,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__CaseId_12,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26,
#line 117 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Info0_15,
#line 117 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Info_16)
#line 117 "ml_tag_switch.m"
{
#line 117 "ml_tag_switch.m"
  {
#line 117 "ml_tag_switch.m"
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s ml_backend__ml_tag_switch__env;

#line 122 "ml_tag_switch.m"
    {
#line 122 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__OtherTaggedConsIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 1)));
#line 122 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__Goal_19;
#line 122 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__Info1_21;
#line 122 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__MaybeCode_24;
#line 123 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch___MainTaggedConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 0)));
#line 130 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__V_22_22;
#line 130 "ml_tag_switch.m"
      MR_Word ml_backend__ml_tag_switch__V_23_23;

#line 123 "ml_tag_switch.m"
      *ml_backend__ml_tag_switch__CaseId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 2)));
#line 123 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 3)));
#line 125 "ml_tag_switch.m"
      {
#line 125 "ml_tag_switch.m"
        ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_10, ml_backend__ml_tag_switch__Goal_19, &(ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20, ml_backend__ml_tag_switch__Info0_15, &ml_backend__ml_tag_switch__Info1_21);
      }
#line 130 "ml_tag_switch.m"
      (ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__OtherTaggedConsIds_18)) == (MR_mktag((MR_Integer) 1)));
#line 130 "ml_tag_switch.m"
      if ((ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
#line 130 "ml_tag_switch.m"
        {
#line 130 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__OtherTaggedConsIds_18, (MR_Integer) 0)));
#line 130 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__OtherTaggedConsIds_18, (MR_Integer) 1)));
#line 143 "ml_tag_switch.m"
          {
#line 143 "ml_tag_switch.m"
            ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(&ml_backend__ml_tag_switch__env);
          }
#line 130 "ml_tag_switch.m"
        }
#line 135 "ml_tag_switch.m"
      if ((ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
#line 133 "ml_tag_switch.m"
        {
#line 133 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__MaybeCode_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tag_switch__Goal_19);
#line 134 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__Info_16 = ml_backend__ml_tag_switch__Info0_15;
#line 133 "ml_tag_switch.m"
        }
#line 135 "ml_tag_switch.m"
      else
#line 136 "ml_tag_switch.m"
        {
#line 136 "ml_tag_switch.m"
          ml_backend__ml_tag_switch__MaybeCode_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) (ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20);
#line 137 "ml_tag_switch.m"
          *ml_backend__ml_tag_switch__Info_16 = ml_backend__ml_tag_switch__Info1_21;
#line 136 "ml_tag_switch.m"
        }
#line 139 "ml_tag_switch.m"
      {
#line 139 "ml_tag_switch.m"
        mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ((MR_Box) (*ml_backend__ml_tag_switch__CaseId_12)), ((MR_Box) (ml_backend__ml_tag_switch__MaybeCode_24)), ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25, ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26);
#line 139 "ml_tag_switch.m"
        return;
      }
#line 122 "ml_tag_switch.m"
    }
#line 117 "ml_tag_switch.m"
  }
#line 117 "ml_tag_switch.m"
}

#line 82 "ml_tag_switch.m"
static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1(
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__closure_arg,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_2,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_5,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_6,
#line 82 "ml_tag_switch.m"
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_7,
#line 82 "ml_tag_switch.m"
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_8)
#line 82 "ml_tag_switch.m"
{
#line 82 "ml_tag_switch.m"
  {
#line 82 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
#line 82 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__conv2_CaseId_12;
#line 82 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26;
#line 82 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__conv0_Info_16;

#line 82 "ml_tag_switch.m"
    {
#line 82 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), &ml_backend__ml_tag_switch__conv2_CaseId_12, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3), &ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_7), &ml_backend__ml_tag_switch__conv0_Info_16);
    }
#line 82 "ml_tag_switch.m"
    *ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv2_CaseId_12));
#line 82 "ml_tag_switch.m"
    *ml_backend__ml_tag_switch__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26));
#line 82 "ml_tag_switch.m"
    *ml_backend__ml_tag_switch__wrapper_arg_8 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_Info_16));
#line 82 "ml_tag_switch.m"
  }
#line 82 "ml_tag_switch.m"
}

#line 32 "ml_tag_switch.m"
void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__TaggedCases_9,
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Var_10,
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CodeModel_11,
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__CanFail_12,
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__Context_13,
#line 32 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__Statements_14,
#line 32 "ml_tag_switch.m"
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35,
#line 32 "ml_tag_switch.m"
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_36)
#line 32 "ml_tag_switch.m"
{
#line 69 "ml_tag_switch.m"
  {
#line 69 "ml_tag_switch.m"
    MR_bool ml_backend__ml_tag_switch__succeeded;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_57_57;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__VarLval_16;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__VarRval_17;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PTagRval_18;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__ModuleInfo_19;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Type_20;
#line 69 "ml_tag_switch.m"
    MR_Integer ml_backend__ml_tag_switch__MaxPrimary_21;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PtagCountMap_22;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__CodeMap_23;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PtagCaseMap_26;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PtagCaseList_27;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PtagCases0_28;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__PtagCases_29;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Default_30;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__Range_31;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__SwitchStmt0_32;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__MLDS_Context_33;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__SwitchStatement_34;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_39_39;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__V_40_40;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43;
#line 69 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44;
#line 82 "ml_tag_switch.m"
    MR_Word ml_backend__ml_tag_switch___CaseIdPtagsMap_25;
#line 82 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__conv5_CodeMap_23;
#line 82 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__conv4_V_24_24;
#line 82 "ml_tag_switch.m"
    MR_Box ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42;

#line 71 "ml_tag_switch.m"
    {
#line 71 "ml_tag_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, ml_backend__ml_tag_switch__Var_10, &ml_backend__ml_tag_switch__VarLval_16);
    }
#line 72 "ml_tag_switch.m"
    {
#line 72 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__VarRval_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 72 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__VarRval_17, 0) = ((MR_Box) (ml_backend__ml_tag_switch__VarLval_16));
#line 72 "ml_tag_switch.m"
    }
#line 73 "ml_tag_switch.m"
    {
#line 73 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__PTagRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 73 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 73 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_3[0])));
#line 73 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 2) = ((MR_Box) (ml_backend__ml_tag_switch__VarRval_17));
#line 73 "ml_tag_switch.m"
    }
#line 79 "ml_tag_switch.m"
    {
#line 79 "ml_tag_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, &ml_backend__ml_tag_switch__ModuleInfo_19);
    }
#line 80 "ml_tag_switch.m"
    {
#line 80 "ml_tag_switch.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, ml_backend__ml_tag_switch__Var_10, &ml_backend__ml_tag_switch__Type_20);
    }
#line 81 "ml_tag_switch.m"
    {
#line 81 "ml_tag_switch.m"
      backend_libs__switch_util__get_ptag_counts_4_p_0(ml_backend__ml_tag_switch__Type_20, ml_backend__ml_tag_switch__ModuleInfo_19, &ml_backend__ml_tag_switch__MaxPrimary_21, &ml_backend__ml_tag_switch__PtagCountMap_22);
    }
#line 82 "ml_tag_switch.m"
    {
#line 82 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 82 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_4[0]));
#line 82 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 1) = ((MR_Box) (ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1));
#line 82 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 82 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 3) = ((MR_Box) (ml_backend__ml_tag_switch__CodeModel_11));
#line 82 "ml_tag_switch.m"
    }
#line 3524 "ml_backend.ml_tag_switch.c"
    ml_backend__ml_tag_switch__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
#line 83 "ml_tag_switch.m"
    {
#line 83 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__V_40_40 = mercury__map__init_0_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
    }
#line 83 "ml_tag_switch.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 82 "ml_tag_switch.m"
    {
#line 82 "ml_tag_switch.m"
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_tag_switch__TaggedCases_9, ml_backend__ml_tag_switch__V_39_39, ((MR_Box) (ml_backend__ml_tag_switch__V_40_40)), &ml_backend__ml_tag_switch__conv5_CodeMap_23, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tag_switch__conv4_V_24_24, ((MR_Box) (ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35)), &ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42, &ml_backend__ml_tag_switch___CaseIdPtagsMap_25, &ml_backend__ml_tag_switch__PtagCaseMap_26);
    }
#line 82 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__CodeMap_23 = ((MR_Word) ml_backend__ml_tag_switch__conv5_CodeMap_23);
#line 82 "ml_tag_switch.m"
    ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42 = ((MR_Word) ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42);
#line 84 "ml_tag_switch.m"
    {
#line 84 "ml_tag_switch.m"
      backend_libs__switch_util__order_ptags_by_count_3_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, ml_backend__ml_tag_switch__PtagCountMap_22, ml_backend__ml_tag_switch__PtagCaseMap_26, &ml_backend__ml_tag_switch__PtagCaseList_27);
    }
#line 104 "ml_tag_switch.m"
    {
#line 104 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(ml_backend__ml_tag_switch__PtagCaseList_27, ml_backend__ml_tag_switch__CodeMap_23, ml_backend__ml_tag_switch__Var_10, ml_backend__ml_tag_switch__CanFail_12, ml_backend__ml_tag_switch__CodeModel_11, ml_backend__ml_tag_switch__PtagCountMap_22, ml_backend__ml_tag_switch__Context_13, &ml_backend__ml_tag_switch__PtagCases0_28, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43);
    }
#line 106 "ml_tag_switch.m"
    {
#line 106 "ml_tag_switch.m"
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_tag_switch__PtagCases0_28, &ml_backend__ml_tag_switch__PtagCases_29);
    }
#line 107 "ml_tag_switch.m"
    {
#line 107 "ml_tag_switch.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_tag_switch__CanFail_12, ml_backend__ml_tag_switch__CodeModel_11, ml_backend__ml_tag_switch__Context_13, &ml_backend__ml_tag_switch__Default_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44);
    }
#line 110 "ml_tag_switch.m"
    {
#line 110 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__Range_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__Range_31, 0) = ((MR_Box) ((MR_Integer) 0));
#line 110 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__Range_31, 1) = ((MR_Box) (ml_backend__ml_tag_switch__MaxPrimary_21));
#line 110 "ml_tag_switch.m"
    }
#line 111 "ml_tag_switch.m"
    {
#line 111 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__SwitchStmt0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 2) = ((MR_Box) (ml_backend__ml_tag_switch__PTagRval_18));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 3) = ((MR_Box) (ml_backend__ml_tag_switch__Range_31));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 4) = ((MR_Box) (ml_backend__ml_tag_switch__PtagCases_29));
#line 111 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 5) = ((MR_Box) (ml_backend__ml_tag_switch__Default_30));
#line 111 "ml_tag_switch.m"
    }
#line 113 "ml_tag_switch.m"
    {
#line 113 "ml_tag_switch.m"
      ml_backend__ml_tag_switch__MLDS_Context_33 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_tag_switch__Context_13);
    }
#line 114 "ml_tag_switch.m"
    {
#line 114 "ml_tag_switch.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_tag_switch__SwitchStmt0_32, ml_backend__ml_tag_switch__MLDS_Context_33, &ml_backend__ml_tag_switch__SwitchStatement_34, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_36);
    }
#line 115 "ml_tag_switch.m"
    {
#line 115 "ml_tag_switch.m"
      MR_Word base;
#line 115 "ml_tag_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "ml_tag_switch.m"
      *ml_backend__ml_tag_switch__Statements_14 = base;
#line 115 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__SwitchStatement_34));
#line 115 "ml_tag_switch.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 115 "ml_tag_switch.m"
    }
#line 69 "ml_tag_switch.m"
  }
#line 32 "ml_tag_switch.m"
}

void mercury__ml_backend__ml_tag_switch__init(void)
{
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0);
}

void mercury__ml_backend__ml_tag_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_tag_switch. */
