/*
** Automatically generated from `mcsolver.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module check_hlds.mcsolver. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mcsolver__init
ENDINIT
*/

#include "check_hlds.mcsolver.mih"


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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.abstract_mode_constraints.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 747 "mcsolver.m"
struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s {
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5;
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6;
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
#line 747 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8;
#line 747 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__solve_var_4_p_0_env_0__cont;
#line 747 "mcsolver.m"
  void * check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr;
#line 753 "mcsolver.m"
  MR_bool check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded;
#line 754 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9;
#line 754 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19;
#line 747 "mcsolver.m"
};

#line 745 "mcsolver.m"
struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s {
#line 745 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3;
#line 745 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__solve_2_p_0_3_env_0__cont;
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr;
#line 745 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8;
#line 745 "mcsolver.m"
};

#line 116 "mcsolver.m"
struct check_hlds__mcsolver__solve_2_p_0_env_0_s {
#line 116 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3;
#line 116 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4;
#line 116 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__solve_2_p_0_env_0__cont;
#line 116 "mcsolver.m"
  void * check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56;
#line 504 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57;
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5;
#line 116 "mcsolver.m"
};


#line 204 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 207 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 210 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 213 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 216 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 219 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 222 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 225 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 228 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 231 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 234 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 237 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 240 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 243 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 246 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 249 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2];

#line 252 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0;

#line 255 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1];

#line 258 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1];

#line 261 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1];

#line 264 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1];

#line 267 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 270 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2];

#line 273 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0;

#line 276 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1];

#line 279 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1;

#line 282 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1];

#line 285 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2;

#line 288 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 291 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1];

#line 294 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3;

#line 297 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1];

#line 300 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1];

#line 303 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1];

#line 306 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1];

#line 309 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0[4];

#line 312 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4];

#line 315 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4];

#line 318 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 321 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 324 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2];

#line 327 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0;

#line 330 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1];

#line 333 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1];

#line 336 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1];

#line 339 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1];

#line 342 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0;

#line 345 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4];

#line 348 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4];

#line 351 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0;

#line 354 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1];

#line 357 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1];

#line 360 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1];

#line 363 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1];

#line 366 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 369 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2];

#line 372 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2];

#line 375 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0;

#line 378 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1];

#line 381 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1];

#line 384 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1];

#line 387 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1];

#line 390 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5];

#line 393 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5];

#line 396 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0;

#line 399 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1];

#line 402 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1];

#line 405 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1];

#line 408 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1];

#line 411 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
#line 414 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 416 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 419 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
#line 422 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 424 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 426 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 429 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
#line 432 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 434 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 437 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
#line 440 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 442 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 444 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 447 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
#line 450 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 452 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 455 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
#line 458 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 460 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 462 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 465 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
#line 468 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 470 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 473 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
#line 476 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 478 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 480 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 483 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
#line 486 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 488 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 491 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
#line 494 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 496 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 498 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 501 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
#line 504 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 506 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 509 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
#line 512 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 514 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 516 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 519 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
#line 522 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 524 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 527 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
#line 530 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 532 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 534 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 537 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
#line 540 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 542 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 545 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
#line 548 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 550 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 552 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 555 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
#line 558 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 563 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
#line 566 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 568 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 570 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 573 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
#line 576 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 578 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 581 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
#line 584 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 586 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 588 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 591 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
#line 594 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 596 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 599 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
#line 602 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 604 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 606 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 609 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
#line 612 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 614 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 617 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
#line 620 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 622 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 624 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 627 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
#line 630 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 632 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 635 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
#line 638 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 640 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 642 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 679 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(
#line 679 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_66);

#line 668 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(
#line 668 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 668 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_70);

#line 629 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(
#line 629 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21);

#line 684 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_95);

#line 659 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(
#line 659 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48);

#line 545 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Val_6,
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_15,
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_16,
#line 545 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_17);

#line 545 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1(
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 545 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 529 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Equivalences_6,
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_17,
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_18,
#line 529 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_19);

#line 496 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_28);

#line 496 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_22);

#line 477 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_24);

#line 477 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_14);

#line 257 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0_1(
#line 257 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 257 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 257 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

#line 255 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(
#line 255 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_16,
#line 255 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_17);

#line 257 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
#line 257 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_19,
#line 257 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_20);

#line 444 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(
#line 444 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_83,
#line 444 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_84);

#line 437 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(
#line 437 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_76,
#line 437 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_77);

#line 430 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(
#line 430 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_71,
#line 430 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_72);

#line 419 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1(
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 417 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(
#line 417 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 417 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_62);

#line 419 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_65,
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_66);

#line 404 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(
#line 404 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48,
#line 404 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_49);

#line 393 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(
#line 393 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 393 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_36);

#line 387 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(
#line 387 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 387 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_31);

#line 376 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_30);

#line 376 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13);

#line 172 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
#line 172 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 172 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 146 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
#line 146 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 146 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 145 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
#line 145 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 145 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 182 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
#line 182 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 182 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 159 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
#line 159 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 159 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 163 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
#line 163 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 163 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 150 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
#line 150 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 150 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 140 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
#line 140 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 140 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 139 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
#line 139 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 139 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 776 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
#line 776 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs_1,
#line 776 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 754 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
#line 754 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 747 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_6,
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 747 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8,
#line 747 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 747 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr);

#line 679 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
#line 679 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 679 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 667 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
#line 667 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 667 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 629 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
#line 629 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 629 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 684 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
#line 684 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 684 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 659 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
#line 659 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 659 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 612 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_1,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 612 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_6);

#line 605 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 605 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 601 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_7,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_8,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_9,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_11,
#line 601 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_12);

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 565 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_8,
#line 565 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_9);

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 556 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Assgts_6,
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 556 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8);

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 496 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 496 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 483 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
#line 483 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 483 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 477 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 477 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 471 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
#line 471 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1);

#line 459 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
#line 459 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_4,
#line 459 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5);

#line 296 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 296 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 271 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
#line 271 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 271 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
#line 271 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3);

#line 255 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
#line 255 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 255 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 255 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

#line 235 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 235 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 240 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
#line 240 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Constraint_4,
#line 240 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
#line 240 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14);

#line 529 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 529 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 745 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
#line 745 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr);

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 504 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
#line 504 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 444 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 437 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 430 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 417 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 404 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 400 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
#line 400 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 400 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 393 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
#line 393 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 393 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 387 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
#line 387 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 387 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 376 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 376 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 296 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 296 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 235 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 235 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9];


#line 754 "mcsolver.m"
/* sealed */ struct check_hlds__mcsolver__vector_common_type_8_0_s {
#line 754 "mcsolver.m"
  const MR_Word check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
#line 754 "mcsolver.m"
};

static /* final */ const struct check_hlds__mcsolver__vector_common_type_8_0_s check_hlds__mcsolver_vector_common_8[2];



static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[0])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[0])),
    ((MR_Box) (check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[5])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[6])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[7])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[8])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[9])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[0])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[7])),
    ((MR_Box) (check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[4])),
    ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[4])),
    ((MR_Box) (check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[13]))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};


static /* final */ const struct check_hlds__mcsolver__vector_common_type_8_0_s check_hlds__mcsolver_vector_common_8[2] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1962 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1970 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1978 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1987 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1996 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2006 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0
  }
};

#line 2014 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2022 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2030 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2038 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2047 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2055 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2064 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2072 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2083 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2093 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2099 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0 = {
  (MR_String) "==",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0,
  NULL,
  NULL,
  NULL
};

#line 2114 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

#line 2119 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0
  }
};

#line 2128 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

#line 2133 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1] = {
  (MR_Integer) 0
};

#line 2138 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgt",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0
};

#line 2155 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2163 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2180 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2186 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0 = {
  (MR_String) "eqv_disj",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0,
  NULL,
  NULL,
  NULL
};

#line 2201 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2206 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1 = {
  (MR_String) "at_most_one",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1,
  NULL,
  NULL,
  NULL
};

#line 2221 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2226 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2 = {
  (MR_String) "exactly_one",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2,
  NULL,
  NULL,
  NULL
};

#line 2241 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2249 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2254 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3 = {
  (MR_String) "disj_of_assgts",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3,
  NULL,
  NULL,
  NULL
};

#line 2269 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0
};

#line 2274 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1
};

#line 2279 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

#line 2284 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3
};

#line 2289 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3
  }
};

#line 2313 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

#line 2321 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2329 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0
};

#line 2346 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2355 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2372 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2389 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2397 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_eqv_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____eqv_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____eqv_vars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "eqv_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2414 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2420 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0 = {
  (MR_String) "implies",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0,
  NULL,
  NULL,
  NULL
};

#line 2435 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

#line 2440 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0
  }
};

#line 2449 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

#line 2454 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1] = {
  (MR_Integer) 0
};

#line 2459 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____impl_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impl_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impl",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0
};

#line 2476 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0
  }
};

#line 2484 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____impls_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impls_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impls",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2501 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvar_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvar_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2518 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2535 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

#line 2543 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4] = {
  (MR_String) "prep_eqv_vars",
  (MR_String) "prep_assgts",
  (MR_String) "prep_impls",
  (MR_String) "prep_complex_cstrts"
};

#line 2551 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0 = {
  (MR_String) "prep_cstrts",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0,
  NULL,
  NULL
};

#line 2566 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

#line 2571 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0
  }
};

#line 2580 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

#line 2585 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1] = {
  (MR_Integer) 0
};

#line 2590 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prep_cstrts",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0
};

#line 2607 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2616 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2622 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2] = {
  (MR_String) "prop_graph_yes",
  (MR_String) "prop_graph_no"
};

#line 2628 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0 = {
  (MR_String) "prop_graph",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0,
  NULL,
  NULL
};

#line 2643 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

#line 2648 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0
  }
};

#line 2657 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

#line 2662 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1] = {
  (MR_Integer) 0
};

#line 2667 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prop_graph_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prop_graph_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prop_graph",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0
};

#line 2684 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

#line 2693 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5] = {
  (MR_String) "vars",
  (MR_String) "eqv_vars",
  (MR_String) "assgts",
  (MR_String) "prop_graph",
  (MR_String) "complex_cstrt_map"
};

#line 2702 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0 = {
  (MR_String) "solver_cstrts",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0,
  NULL,
  NULL
};

#line 2717 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

#line 2722 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0
  }
};

#line 2731 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

#line 2736 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1] = {
  (MR_Integer) 0
};

#line 2741 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "solver_cstrts",
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0 },
  {     check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0
};

#line 2758 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
#line 2761 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2763 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2765 "check_hlds.mcsolver.c"
{
#line 2767 "check_hlds.mcsolver.c"
  {
#line 2769 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2772 "check_hlds.mcsolver.c"
    {
#line 2774 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2777 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2779 "check_hlds.mcsolver.c"
  }
#line 2781 "check_hlds.mcsolver.c"
}

#line 2784 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
#line 2787 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2789 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2791 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2793 "check_hlds.mcsolver.c"
{
#line 2795 "check_hlds.mcsolver.c"
  {
#line 2797 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2800 "check_hlds.mcsolver.c"
    {
#line 2802 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2805 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2807 "check_hlds.mcsolver.c"
  }
#line 2809 "check_hlds.mcsolver.c"
}

#line 2812 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
#line 2815 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2817 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2819 "check_hlds.mcsolver.c"
{
#line 2821 "check_hlds.mcsolver.c"
  {
#line 2823 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2826 "check_hlds.mcsolver.c"
    {
#line 2828 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2831 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2833 "check_hlds.mcsolver.c"
  }
#line 2835 "check_hlds.mcsolver.c"
}

#line 2838 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
#line 2841 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2843 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2845 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2847 "check_hlds.mcsolver.c"
{
#line 2849 "check_hlds.mcsolver.c"
  {
#line 2851 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2854 "check_hlds.mcsolver.c"
    {
#line 2856 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____assgts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2859 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2861 "check_hlds.mcsolver.c"
  }
#line 2863 "check_hlds.mcsolver.c"
}

#line 2866 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
#line 2869 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2871 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2873 "check_hlds.mcsolver.c"
{
#line 2875 "check_hlds.mcsolver.c"
  {
#line 2877 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2880 "check_hlds.mcsolver.c"
    {
#line 2882 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2885 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2887 "check_hlds.mcsolver.c"
  }
#line 2889 "check_hlds.mcsolver.c"
}

#line 2892 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
#line 2895 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2897 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2899 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2901 "check_hlds.mcsolver.c"
{
#line 2903 "check_hlds.mcsolver.c"
  {
#line 2905 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2908 "check_hlds.mcsolver.c"
    {
#line 2910 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2913 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2915 "check_hlds.mcsolver.c"
  }
#line 2917 "check_hlds.mcsolver.c"
}

#line 2920 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
#line 2923 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2925 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2927 "check_hlds.mcsolver.c"
{
#line 2929 "check_hlds.mcsolver.c"
  {
#line 2931 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2934 "check_hlds.mcsolver.c"
    {
#line 2936 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2939 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2941 "check_hlds.mcsolver.c"
  }
#line 2943 "check_hlds.mcsolver.c"
}

#line 2946 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
#line 2949 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2951 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2953 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2955 "check_hlds.mcsolver.c"
{
#line 2957 "check_hlds.mcsolver.c"
  {
#line 2959 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2962 "check_hlds.mcsolver.c"
    {
#line 2964 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2967 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2969 "check_hlds.mcsolver.c"
  }
#line 2971 "check_hlds.mcsolver.c"
}

#line 2974 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
#line 2977 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2979 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2981 "check_hlds.mcsolver.c"
{
#line 2983 "check_hlds.mcsolver.c"
  {
#line 2985 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2988 "check_hlds.mcsolver.c"
    {
#line 2990 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2993 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2995 "check_hlds.mcsolver.c"
  }
#line 2997 "check_hlds.mcsolver.c"
}

#line 3000 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
#line 3003 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3005 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3007 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3009 "check_hlds.mcsolver.c"
{
#line 3011 "check_hlds.mcsolver.c"
  {
#line 3013 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3016 "check_hlds.mcsolver.c"
    {
#line 3018 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3021 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3023 "check_hlds.mcsolver.c"
  }
#line 3025 "check_hlds.mcsolver.c"
}

#line 3028 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
#line 3031 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3033 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3035 "check_hlds.mcsolver.c"
{
#line 3037 "check_hlds.mcsolver.c"
  {
#line 3039 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3042 "check_hlds.mcsolver.c"
    {
#line 3044 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____eqv_vars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3047 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3049 "check_hlds.mcsolver.c"
  }
#line 3051 "check_hlds.mcsolver.c"
}

#line 3054 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
#line 3057 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3059 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3061 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3063 "check_hlds.mcsolver.c"
{
#line 3065 "check_hlds.mcsolver.c"
  {
#line 3067 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3070 "check_hlds.mcsolver.c"
    {
#line 3072 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____eqv_vars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3075 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3077 "check_hlds.mcsolver.c"
  }
#line 3079 "check_hlds.mcsolver.c"
}

#line 3082 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
#line 3085 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3087 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3089 "check_hlds.mcsolver.c"
{
#line 3091 "check_hlds.mcsolver.c"
  {
#line 3093 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3096 "check_hlds.mcsolver.c"
    {
#line 3098 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impl_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3101 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3103 "check_hlds.mcsolver.c"
  }
#line 3105 "check_hlds.mcsolver.c"
}

#line 3108 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
#line 3111 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3113 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3115 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3117 "check_hlds.mcsolver.c"
{
#line 3119 "check_hlds.mcsolver.c"
  {
#line 3121 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3124 "check_hlds.mcsolver.c"
    {
#line 3126 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____impl_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3129 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3131 "check_hlds.mcsolver.c"
  }
#line 3133 "check_hlds.mcsolver.c"
}

#line 3136 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
#line 3139 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3141 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3143 "check_hlds.mcsolver.c"
{
#line 3145 "check_hlds.mcsolver.c"
  {
#line 3147 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3150 "check_hlds.mcsolver.c"
    {
#line 3152 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impls_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3155 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3157 "check_hlds.mcsolver.c"
  }
#line 3159 "check_hlds.mcsolver.c"
}

#line 3162 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
#line 3165 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3167 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3169 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3171 "check_hlds.mcsolver.c"
{
#line 3173 "check_hlds.mcsolver.c"
  {
#line 3175 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3178 "check_hlds.mcsolver.c"
    {
#line 3180 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____impls_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3183 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3185 "check_hlds.mcsolver.c"
  }
#line 3187 "check_hlds.mcsolver.c"
}

#line 3190 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
#line 3193 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3195 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3197 "check_hlds.mcsolver.c"
{
#line 3199 "check_hlds.mcsolver.c"
  {
#line 3201 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3204 "check_hlds.mcsolver.c"
    {
#line 3206 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvar_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3209 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3211 "check_hlds.mcsolver.c"
  }
#line 3213 "check_hlds.mcsolver.c"
}

#line 3216 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
#line 3219 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3221 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3223 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3225 "check_hlds.mcsolver.c"
{
#line 3227 "check_hlds.mcsolver.c"
  {
#line 3229 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3232 "check_hlds.mcsolver.c"
    {
#line 3234 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____mcvar_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3237 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3239 "check_hlds.mcsolver.c"
  }
#line 3241 "check_hlds.mcsolver.c"
}

#line 3244 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
#line 3247 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3249 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3251 "check_hlds.mcsolver.c"
{
#line 3253 "check_hlds.mcsolver.c"
  {
#line 3255 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3258 "check_hlds.mcsolver.c"
    {
#line 3260 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3263 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3265 "check_hlds.mcsolver.c"
  }
#line 3267 "check_hlds.mcsolver.c"
}

#line 3270 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
#line 3273 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3275 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3277 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3279 "check_hlds.mcsolver.c"
{
#line 3281 "check_hlds.mcsolver.c"
  {
#line 3283 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3286 "check_hlds.mcsolver.c"
    {
#line 3288 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____mcvars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3291 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3293 "check_hlds.mcsolver.c"
  }
#line 3295 "check_hlds.mcsolver.c"
}

#line 3298 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
#line 3301 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3303 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3305 "check_hlds.mcsolver.c"
{
#line 3307 "check_hlds.mcsolver.c"
  {
#line 3309 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3312 "check_hlds.mcsolver.c"
    {
#line 3314 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prep_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3317 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3319 "check_hlds.mcsolver.c"
  }
#line 3321 "check_hlds.mcsolver.c"
}

#line 3324 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
#line 3327 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3329 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3331 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3333 "check_hlds.mcsolver.c"
{
#line 3335 "check_hlds.mcsolver.c"
  {
#line 3337 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3340 "check_hlds.mcsolver.c"
    {
#line 3342 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____prep_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3345 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3347 "check_hlds.mcsolver.c"
  }
#line 3349 "check_hlds.mcsolver.c"
}

#line 3352 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
#line 3355 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3357 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3359 "check_hlds.mcsolver.c"
{
#line 3361 "check_hlds.mcsolver.c"
  {
#line 3363 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3366 "check_hlds.mcsolver.c"
    {
#line 3368 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prop_graph_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3371 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3373 "check_hlds.mcsolver.c"
  }
#line 3375 "check_hlds.mcsolver.c"
}

#line 3378 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
#line 3381 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3383 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3385 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3387 "check_hlds.mcsolver.c"
{
#line 3389 "check_hlds.mcsolver.c"
  {
#line 3391 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3394 "check_hlds.mcsolver.c"
    {
#line 3396 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____prop_graph_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3399 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3401 "check_hlds.mcsolver.c"
  }
#line 3403 "check_hlds.mcsolver.c"
}

#line 3406 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
#line 3409 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3411 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3413 "check_hlds.mcsolver.c"
{
#line 3415 "check_hlds.mcsolver.c"
  {
#line 3417 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3420 "check_hlds.mcsolver.c"
    {
#line 3422 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____solver_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3425 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3427 "check_hlds.mcsolver.c"
  }
#line 3429 "check_hlds.mcsolver.c"
}

#line 3432 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
#line 3435 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3437 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3439 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3441 "check_hlds.mcsolver.c"
{
#line 3443 "check_hlds.mcsolver.c"
  {
#line 3445 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3448 "check_hlds.mcsolver.c"
    {
#line 3450 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____solver_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3453 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3455 "check_hlds.mcsolver.c"
  }
#line 3457 "check_hlds.mcsolver.c"
}

#line 679 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(
#line 679 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_66)
#line 679 "mcsolver.m"
{
#line 679 "mcsolver.m"
  {
#line 679 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 679 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_67;

#line 679 "mcsolver.m"
    {
#line 679 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_67, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_66));
#line 679 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_67, 1) = ((MR_Box) ((MR_Integer) 0));
#line 679 "mcsolver.m"
    }
#line 679 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_67;
#line 679 "mcsolver.m"
  }
#line 679 "mcsolver.m"
}

#line 668 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(
#line 668 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 668 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_70)
#line 668 "mcsolver.m"
{
#line 668 "mcsolver.m"
  {
#line 668 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 668 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_112_112;
#line 668 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V_112_112;

#line 668 "mcsolver.m"
    {
#line 668 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__Bs0_5, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_70)), &check_hlds__mcsolver__conv0_V_112_112);
    }
#line 668 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 668 "mcsolver.m"
      {
#line 668 "mcsolver.m"
        check_hlds__mcsolver__V_112_112 = ((MR_Word) check_hlds__mcsolver__conv0_V_112_112);
#line 668 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 668 "mcsolver.m"
      }
#line 668 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 668 "mcsolver.m"
      check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == check_hlds__mcsolver__V_112_112);
#line 668 "mcsolver.m"
    check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 668 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 668 "mcsolver.m"
  }
#line 668 "mcsolver.m"
}

#line 629 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(
#line 629 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21)
#line 629 "mcsolver.m"
{
#line 629 "mcsolver.m"
  {
#line 629 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 629 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_22;

#line 629 "mcsolver.m"
    {
#line 629 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_21));
#line 629 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 629 "mcsolver.m"
    }
#line 629 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_22;
#line 629 "mcsolver.m"
  }
#line 629 "mcsolver.m"
}

#line 684 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 684 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_95)
#line 684 "mcsolver.m"
{
#line 684 "mcsolver.m"
  {
#line 684 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 684 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_96_96;
#line 684 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_97_97;

#line 686 "mcsolver.m"
    {
#line 686 "mcsolver.m"
      check_hlds__mcsolver__V_97_97 = mercury__bool__not_1_f_0(check_hlds__mcsolver__V_3);
    }
#line 686 "mcsolver.m"
    {
#line 686 "mcsolver.m"
      check_hlds__mcsolver__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 0) = ((MR_Box) (check_hlds__mcsolver__X_2));
#line 686 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 1) = ((MR_Box) (check_hlds__mcsolver__V_97_97));
#line 686 "mcsolver.m"
    }
#line 686 "mcsolver.m"
    {
#line 686 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, ((MR_Box) (check_hlds__mcsolver__V_96_96)), check_hlds__mcsolver__HeadVar__3_95);
    }
#line 684 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 684 "mcsolver.m"
  }
#line 684 "mcsolver.m"
}

#line 659 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(
#line 659 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48)
#line 659 "mcsolver.m"
{
#line 659 "mcsolver.m"
  {
#line 659 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 659 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_49;

#line 659 "mcsolver.m"
    {
#line 659 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_48));
#line 659 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 659 "mcsolver.m"
    }
#line 659 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_49;
#line 659 "mcsolver.m"
  }
#line 659 "mcsolver.m"
}

#line 545 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Val_6,
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_15,
#line 545 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_16,
#line 545 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_17)
#line 545 "mcsolver.m"
{
#line 545 "mcsolver.m"
  {
#line 545 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 547 "mcsolver.m"
    {
#line 547 "mcsolver.m"
      mercury__map__set_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_15)), ((MR_Box) (check_hlds__mcsolver__Val_6)), check_hlds__mcsolver__HeadVar__3_16, check_hlds__mcsolver__HeadVar__4_17);
#line 547 "mcsolver.m"
      return;
    }
#line 545 "mcsolver.m"
  }
#line 545 "mcsolver.m"
}

#line 545 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1(
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 545 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 545 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 545 "mcsolver.m"
{
#line 545 "mcsolver.m"
  {
#line 545 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 545 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__4_17;

#line 545 "mcsolver.m"
    {
#line 545 "mcsolver.m"
      check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv1_HeadVar__4_17);
    }
#line 545 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__4_17));
#line 545 "mcsolver.m"
  }
#line 545 "mcsolver.m"
}

#line 529 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Equivalences_6,
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_17,
#line 529 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_18,
#line 529 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_19)
#line 529 "mcsolver.m"
{
#line 529 "mcsolver.m"
  {
#line 529 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_28_28 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__EquivVars_10;
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_11;
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_20_20;
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_41_41;
#line 533 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_Val_11;
#line 545 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv2_HeadVar__4_19;

#line 531 "mcsolver.m"
    {
#line 531 "mcsolver.m"
      check_hlds__mcsolver__V_20_20 = mercury__eqvclass__get_equivalent_elements_2_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__Equivalences_6, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_17)));
    }
#line 531 "mcsolver.m"
    {
#line 531 "mcsolver.m"
      check_hlds__mcsolver__EquivVars_10 = mercury__set__to_sorted_list_1_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__V_20_20);
    }
#line 533 "mcsolver.m"
    {
#line 533 "mcsolver.m"
      mercury__map__lookup_3_p_0(check_hlds__mcsolver__TypeInfo_28_28, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__HeadVar__3_18, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_17)), &check_hlds__mcsolver__conv0_Val_11);
    }
#line 533 "mcsolver.m"
    check_hlds__mcsolver__Val_11 = ((MR_Word) check_hlds__mcsolver__conv0_Val_11);
#line 545 "mcsolver.m"
    {
#line 545 "mcsolver.m"
      check_hlds__mcsolver__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[6]));
#line 545 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1));
#line 545 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 3) = ((MR_Box) (check_hlds__mcsolver__Val_11));
#line 545 "mcsolver.m"
    }
#line 545 "mcsolver.m"
    {
#line 545 "mcsolver.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_41_41, check_hlds__mcsolver__EquivVars_10, ((MR_Box) (check_hlds__mcsolver__HeadVar__3_18)), &check_hlds__mcsolver__conv2_HeadVar__4_19);
    }
#line 545 "mcsolver.m"
    *check_hlds__mcsolver__HeadVar__4_19 = ((MR_Word) check_hlds__mcsolver__conv2_HeadVar__4_19);
#line 529 "mcsolver.m"
  }
#line 529 "mcsolver.m"
}

#line 496 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_28)
#line 496 "mcsolver.m"
{
#line 496 "mcsolver.m"
  {
#line 496 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_29;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 496 "mcsolver.m"
    {
#line 496 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_29 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__HeadVar__1_21, check_hlds__mcsolver__HeadVar__2_28);
    }
#line 496 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_29;
#line 496 "mcsolver.m"
  }
#line 496 "mcsolver.m"
}

#line 496 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 496 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_22)
#line 496 "mcsolver.m"
{
#line 496 "mcsolver.m"
  {
#line 496 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_23;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, (MR_Integer) 0)));
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, (MR_Integer) 1)));
#line 461 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V_24_24;

#line 461 "mcsolver.m"
    {
#line 461 "mcsolver.m"
      check_hlds__mcsolver__conv0_V_24_24 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__Var_25)));
    }
#line 461 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) check_hlds__mcsolver__conv0_V_24_24);
#line 496 "mcsolver.m"
    {
#line 496 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 496 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_23, 1) = ((MR_Box) (check_hlds__mcsolver__Val_26));
#line 496 "mcsolver.m"
    }
#line 496 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_23;
#line 496 "mcsolver.m"
  }
#line 496 "mcsolver.m"
}

#line 477 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_24)
#line 477 "mcsolver.m"
{
#line 477 "mcsolver.m"
  {
#line 477 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__4_25;
#line 477 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_HeadVar__4_25;

#line 477 "mcsolver.m"
    {
#line 477 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__4_25 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_23, ((MR_Box) (check_hlds__mcsolver__HeadVar__3_24)));
    }
#line 477 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__4_25 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__4_25);
#line 477 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__4_25;
#line 477 "mcsolver.m"
  }
#line 477 "mcsolver.m"
}

#line 477 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13,
#line 477 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_14)
#line 477 "mcsolver.m"
{
#line 477 "mcsolver.m"
  {
#line 477 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_15;
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 0)));
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 1)));

#line 477 "mcsolver.m"
    {
#line 477 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_15, 0) = ((MR_Box) (check_hlds__mcsolver__V_18));
#line 477 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_15, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_14));
#line 477 "mcsolver.m"
    }
#line 477 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_15;
#line 477 "mcsolver.m"
  }
#line 477 "mcsolver.m"
}

#line 257 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0_1(
#line 257 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 257 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 257 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
#line 257 "mcsolver.m"
{
#line 257 "mcsolver.m"
  {
#line 257 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 257 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 257 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_20;

#line 257 "mcsolver.m"
    {
#line 257 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv0_HeadVar__2_20);
    }
#line 257 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 257 "mcsolver.m"
      {
#line 257 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_20));
#line 257 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 257 "mcsolver.m"
      }
#line 257 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 257 "mcsolver.m"
  }
#line 257 "mcsolver.m"
}

#line 255 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(
#line 255 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_16,
#line 255 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_17)
#line 255 "mcsolver.m"
{
#line 255 "mcsolver.m"
  {
#line 255 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_16)) == (MR_mktag((MR_Integer) 2)));
#line 255 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_33_33;
#line 255 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_34_34;
#line 255 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 255 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Fls_30;

#line 256 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 256 "mcsolver.m"
      {
#line 256 "mcsolver.m"
        check_hlds__mcsolver__Fls_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_16, (MR_Integer) 0)));
#line 257 "mcsolver.m"
        check_hlds__mcsolver__V_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[17];
#line 4004 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
#line 4006 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__TypeInfo_34_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[0];
#line 257 "mcsolver.m"
        {
#line 257 "mcsolver.m"
          return check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2(check_hlds__mcsolver__TypeCtorInfo_33_33, check_hlds__mcsolver__TypeInfo_34_34, check_hlds__mcsolver__V_18_18, check_hlds__mcsolver__Fls_30, check_hlds__mcsolver__HeadVar__2_17);
        }
#line 256 "mcsolver.m"
      }
#line 255 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 255 "mcsolver.m"
  }
#line 255 "mcsolver.m"
}

#line 257 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
#line 257 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_19,
#line 257 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_20)
#line 257 "mcsolver.m"
{
#line 257 "mcsolver.m"
  {
#line 257 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_19)) == (MR_mktag((MR_Integer) 0)));
#line 257 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 257 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_28;
#line 257 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_29;

#line 257 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 257 "mcsolver.m"
      {
#line 257 "mcsolver.m"
        check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_19, (MR_Integer) 0)));
#line 257 "mcsolver.m"
        check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 257 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 257 "mcsolver.m"
          {
#line 257 "mcsolver.m"
            check_hlds__mcsolver__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 0)));
#line 257 "mcsolver.m"
            check_hlds__mcsolver__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 1)));
#line 258 "mcsolver.m"
            {
#line 258 "mcsolver.m"
              MR_Word base;
#line 258 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__2_20 = base;
#line 258 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__Var_28));
#line 258 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__Val_29));
#line 258 "mcsolver.m"
            }
#line 258 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 257 "mcsolver.m"
          }
#line 257 "mcsolver.m"
      }
#line 257 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 257 "mcsolver.m"
  }
#line 257 "mcsolver.m"
}

#line 444 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(
#line 444 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_83,
#line 444 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_84)
#line 444 "mcsolver.m"
{
#line 444 "mcsolver.m"
  {
#line 444 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 444 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_85;
#line 444 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_86_86;

#line 446 "mcsolver.m"
    {
#line 446 "mcsolver.m"
      check_hlds__mcsolver__V_86_86 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__HeadVar__1_83);
    }
#line 446 "mcsolver.m"
    {
#line 446 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_85 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_86_86, check_hlds__mcsolver__HeadVar__2_84);
    }
#line 444 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_85;
#line 444 "mcsolver.m"
  }
#line 444 "mcsolver.m"
}

#line 437 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(
#line 437 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_76,
#line 437 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_77)
#line 437 "mcsolver.m"
{
#line 437 "mcsolver.m"
  {
#line 437 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_78;
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_76, (MR_Integer) 0)));
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_76, (MR_Integer) 1)));
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_81_81;
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 0)));
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Y_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 0)));
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver___VX_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 1)));
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver___VY_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 1)));

#line 438 "mcsolver.m"
    {
#line 438 "mcsolver.m"
      check_hlds__mcsolver__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__Y_110));
#line 438 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_77));
#line 438 "mcsolver.m"
    }
#line 438 "mcsolver.m"
    {
#line 438 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_78, 0) = ((MR_Box) (check_hlds__mcsolver__X_109));
#line 438 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_78, 1) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
#line 438 "mcsolver.m"
    }
#line 437 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_78;
#line 437 "mcsolver.m"
  }
#line 437 "mcsolver.m"
}

#line 430 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(
#line 430 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_71,
#line 430 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_72)
#line 430 "mcsolver.m"
{
#line 430 "mcsolver.m"
  {
#line 430 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 430 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_73;
#line 430 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_71, (MR_Integer) 0)));
#line 431 "mcsolver.m"
    MR_Word check_hlds__mcsolver___V_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_71, (MR_Integer) 1)));

#line 431 "mcsolver.m"
    {
#line 431 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_73, 0) = ((MR_Box) (check_hlds__mcsolver__X_104));
#line 431 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_73, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_72));
#line 431 "mcsolver.m"
    }
#line 430 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_73;
#line 430 "mcsolver.m"
  }
#line 430 "mcsolver.m"
}

#line 419 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1(
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 419 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 419 "mcsolver.m"
{
#line 419 "mcsolver.m"
  {
#line 419 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 419 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 419 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__4_67;

#line 419 "mcsolver.m"
    {
#line 419 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__4_67 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 419 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__4_67));
#line 419 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 419 "mcsolver.m"
  }
#line 419 "mcsolver.m"
}

#line 417 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(
#line 417 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 417 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_62)
#line 417 "mcsolver.m"
{
#line 417 "mcsolver.m"
  {
#line 417 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 417 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_63;
#line 417 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_64_64;
#line 417 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_68_68;
#line 419 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_HeadVar__3_63;

#line 419 "mcsolver.m"
    {
#line 419 "mcsolver.m"
      check_hlds__mcsolver__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 419 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[5]));
#line 419 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1));
#line 419 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 419 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 3) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_61));
#line 419 "mcsolver.m"
    }
#line 421 "mcsolver.m"
    {
#line 421 "mcsolver.m"
      check_hlds__mcsolver__V_68_68 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__HeadVar__1_61);
    }
#line 419 "mcsolver.m"
    {
#line 419 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_63 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__V_68_68, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_62)));
    }
#line 419 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__3_63 = ((MR_Word) check_hlds__mcsolver__conv1_HeadVar__3_63);
#line 417 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_63;
#line 417 "mcsolver.m"
  }
#line 417 "mcsolver.m"
}

#line 419 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_65,
#line 419 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_66)
#line 419 "mcsolver.m"
{
#line 419 "mcsolver.m"
  {
#line 419 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 419 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__4_67;

#line 420 "mcsolver.m"
    {
#line 420 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__4_67 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, check_hlds__mcsolver__HeadVar__3_66, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_65)), ((MR_Box) (check_hlds__mcsolver__HeadVar__1_61)));
    }
#line 419 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__4_67;
#line 419 "mcsolver.m"
  }
#line 419 "mcsolver.m"
}

#line 404 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(
#line 404 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48,
#line 404 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_49)
#line 404 "mcsolver.m"
{
#line 404 "mcsolver.m"
  {
#line 404 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_50;
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_48, (MR_Integer) 0)));
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_48, (MR_Integer) 1)));
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 0)));
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VX_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 1)));
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__YesPG_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, (MR_Integer) 0)));
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__NoPG_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, (MR_Integer) 1)));

#line 406 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__VX_94 == (MR_Integer) 1);
#line 404 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 407 "mcsolver.m"
      {
#line 407 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_53_53;

#line 407 "mcsolver.m"
        {
#line 407 "mcsolver.m"
          check_hlds__mcsolver__V_53_53 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__YesPG_97, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
#line 407 "mcsolver.m"
        {
#line 407 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_53_53));
#line 407 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__NoPG_98));
#line 407 "mcsolver.m"
        }
#line 407 "mcsolver.m"
      }
#line 404 "mcsolver.m"
    else
#line 409 "mcsolver.m"
      {
#line 409 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_55_55;

#line 409 "mcsolver.m"
        {
#line 409 "mcsolver.m"
          check_hlds__mcsolver__V_55_55 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__NoPG_98, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
#line 409 "mcsolver.m"
        {
#line 409 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 409 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__YesPG_97));
#line 409 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
#line 409 "mcsolver.m"
        }
#line 409 "mcsolver.m"
      }
#line 404 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_50;
#line 404 "mcsolver.m"
  }
#line 404 "mcsolver.m"
}

#line 393 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(
#line 393 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 393 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_36)
#line 393 "mcsolver.m"
{
#line 393 "mcsolver.m"
  {
#line 393 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_37;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_36, (MR_Integer) 0)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_36, (MR_Integer) 1)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_40_40;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_41_41;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_42_42;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_43_43;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 0)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VX_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 1)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Y_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 0)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VY_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 1)));

#line 395 "mcsolver.m"
    {
#line 395 "mcsolver.m"
      check_hlds__mcsolver__V_41_41 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_89);
    }
#line 395 "mcsolver.m"
    {
#line 395 "mcsolver.m"
      check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__VX_90));
#line 395 "mcsolver.m"
    }
#line 395 "mcsolver.m"
    {
#line 395 "mcsolver.m"
      check_hlds__mcsolver__V_43_43 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__Y_91);
    }
#line 395 "mcsolver.m"
    {
#line 395 "mcsolver.m"
      check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__VY_92));
#line 395 "mcsolver.m"
    }
#line 395 "mcsolver.m"
    {
#line 395 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_37, 0) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 395 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_37, 1) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 395 "mcsolver.m"
    }
#line 393 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_37;
#line 393 "mcsolver.m"
  }
#line 393 "mcsolver.m"
}

#line 387 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(
#line 387 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 387 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_31)
#line 387 "mcsolver.m"
{
#line 387 "mcsolver.m"
  {
#line 387 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 387 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_32;
#line 387 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_33_33;
#line 387 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_31, (MR_Integer) 0)));
#line 387 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_31, (MR_Integer) 1)));

#line 388 "mcsolver.m"
    {
#line 388 "mcsolver.m"
      check_hlds__mcsolver__V_33_33 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_87);
    }
#line 388 "mcsolver.m"
    {
#line 388 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_32, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_32, 1) = ((MR_Box) (check_hlds__mcsolver__V_88));
#line 388 "mcsolver.m"
    }
#line 387 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_32;
#line 387 "mcsolver.m"
  }
#line 387 "mcsolver.m"
}

#line 376 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_30)
#line 376 "mcsolver.m"
{
#line 376 "mcsolver.m"
  {
#line 376 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_31;

#line 376 "mcsolver.m"
    {
#line 376 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_31 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_30);
    }
#line 376 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_31;
#line 376 "mcsolver.m"
  }
#line 376 "mcsolver.m"
}

#line 376 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(
#line 376 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13)
#line 376 "mcsolver.m"
{
#line 376 "mcsolver.m"
  {
#line 376 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_14;
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 0)));
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Value_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 1)));

#line 376 "mcsolver.m"
    {
#line 376 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_14, 0) = ((MR_Box) (check_hlds__mcsolver__Var_19));
#line 376 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_14, 1) = ((MR_Box) (check_hlds__mcsolver__Value_20));
#line 376 "mcsolver.m"
    }
#line 376 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_14;
#line 376 "mcsolver.m"
  }
#line 376 "mcsolver.m"
}

#line 216 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0(
#line 216 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 216 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 216 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 216 "mcsolver.m"
{
#line 216 "mcsolver.m"
  {
#line 216 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 216 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_18 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 216 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_19 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 216 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_18 == check_hlds__mcsolver__CastY_19);
#line 216 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 4632 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "mcsolver.m"
    else
#line 216 "mcsolver.m"
      {
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 4)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_14_14;

#line 216 "mcsolver.m"
        {
#line 216 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
        }
#line 4666 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
#line 216 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 216 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
#line 216 "mcsolver.m"
        else
#line 216 "mcsolver.m"
          {
#line 216 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_15_15;

#line 216 "mcsolver.m"
            {
#line 216 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
            }
#line 4686 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_15_15 == (MR_Integer) 0);
#line 216 "mcsolver.m"
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 216 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_15_15;
#line 216 "mcsolver.m"
            else
#line 216 "mcsolver.m"
              {
#line 216 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_16_16;

#line 216 "mcsolver.m"
                {
#line 216 "mcsolver.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
                }
#line 4706 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_16_16 == (MR_Integer) 0);
#line 216 "mcsolver.m"
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 216 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_16_16;
#line 216 "mcsolver.m"
                else
#line 216 "mcsolver.m"
                  {
#line 216 "mcsolver.m"
                    MR_Word check_hlds__mcsolver__V_17_17;
#line 172 "mcsolver.m"
                    MR_Integer check_hlds__mcsolver__CastX_30 = (MR_Integer) check_hlds__mcsolver__V_7_7;
#line 172 "mcsolver.m"
                    MR_Integer check_hlds__mcsolver__CastY_31 = (MR_Integer) check_hlds__mcsolver__V_12_12;

#line 172 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_30 == check_hlds__mcsolver__CastY_31);
#line 172 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 4729 "check_hlds.mcsolver.c"
                      {
#line 4731 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 216 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 4735 "check_hlds.mcsolver.c"
                        if (check_hlds__mcsolver__succeeded)
#line 4737 "check_hlds.mcsolver.c"
                          {
#line 4739 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__V_17_17 = (MR_Integer) 0;
#line 4741 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 4743 "check_hlds.mcsolver.c"
                          }
#line 4745 "check_hlds.mcsolver.c"
                      }
#line 172 "mcsolver.m"
                    else
#line 172 "mcsolver.m"
                      {
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 0)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 1)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 0)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 1)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_29_29;

#line 172 "mcsolver.m"
                        {
#line 172 "mcsolver.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_29_29, ((MR_Box) (check_hlds__mcsolver__V_25_25)), ((MR_Box) (check_hlds__mcsolver__V_27_27)));
                        }
#line 4767 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_29_29 == (MR_Integer) 0);
#line 172 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 172 "mcsolver.m"
                        if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
                          {
#line 172 "mcsolver.m"
                            check_hlds__mcsolver__V_17_17 = check_hlds__mcsolver__V_29_29;
#line 4777 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
#line 216 "mcsolver.m"
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 172 "mcsolver.m"
                          }
#line 172 "mcsolver.m"
                        else
#line 172 "mcsolver.m"
                          {
#line 172 "mcsolver.m"
                            {
#line 172 "mcsolver.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__V_26_26)), ((MR_Box) (check_hlds__mcsolver__V_28_28)));
                            }
#line 4792 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
#line 216 "mcsolver.m"
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 172 "mcsolver.m"
                          }
#line 172 "mcsolver.m"
                      }
#line 216 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
                      *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_17_17;
#line 216 "mcsolver.m"
                    else
#line 216 "mcsolver.m"
                      {
#line 216 "mcsolver.m"
                        {
#line 216 "mcsolver.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_8_8)), ((MR_Box) (check_hlds__mcsolver__V_13_13)));
#line 216 "mcsolver.m"
                          return;
                        }
#line 216 "mcsolver.m"
                      }
#line 216 "mcsolver.m"
                  }
#line 216 "mcsolver.m"
              }
#line 216 "mcsolver.m"
          }
#line 216 "mcsolver.m"
      }
#line 216 "mcsolver.m"
  }
#line 216 "mcsolver.m"
}

#line 216 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0(
#line 216 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 216 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 216 "mcsolver.m"
{
#line 216 "mcsolver.m"
  {
#line 216 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 216 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 216 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 216 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
#line 216 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 216 "mcsolver.m"
    else
#line 216 "mcsolver.m"
      {
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_17_17;
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_18_18;
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 4)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 216 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "mcsolver.m"
        MR_Integer check_hlds__mcsolver__CastX_23;
#line 172 "mcsolver.m"
        MR_Integer check_hlds__mcsolver__CastY_24;

#line 4889 "check_hlds.mcsolver.c"
        {
#line 4891 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
#line 216 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
          {
#line 4898 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[6];
#line 4900 "check_hlds.mcsolver.c"
            {
#line 4902 "check_hlds.mcsolver.c"
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
#line 216 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
              {
#line 4909 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 4911 "check_hlds.mcsolver.c"
                {
#line 4913 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
#line 216 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
                  {
#line 172 "mcsolver.m"
                    check_hlds__mcsolver__CastX_23 = (MR_Integer) check_hlds__mcsolver__V_6_6;
#line 172 "mcsolver.m"
                    check_hlds__mcsolver__CastY_24 = (MR_Integer) check_hlds__mcsolver__V_11_11;
#line 172 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_23 == check_hlds__mcsolver__CastY_24);
#line 172 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 172 "mcsolver.m"
                    else
#line 172 "mcsolver.m"
                      {
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__TypeInfo_10_26;
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 0)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 1)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 0)));
#line 172 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 1)));

#line 4945 "check_hlds.mcsolver.c"
                        {
#line 4947 "check_hlds.mcsolver.c"
                          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_19_19)), ((MR_Box) (check_hlds__mcsolver__V_21_21)));
                        }
#line 172 "mcsolver.m"
                        if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
                          {
#line 4954 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__TypeInfo_10_26 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
#line 4956 "check_hlds.mcsolver.c"
                            {
#line 4958 "check_hlds.mcsolver.c"
                              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_26, ((MR_Box) (check_hlds__mcsolver__V_20_20)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
                            }
#line 172 "mcsolver.m"
                          }
#line 172 "mcsolver.m"
                      }
#line 216 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 216 "mcsolver.m"
                      {
#line 4969 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[1];
#line 4971 "check_hlds.mcsolver.c"
                        {
#line 4973 "check_hlds.mcsolver.c"
                          return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                        }
#line 216 "mcsolver.m"
                      }
#line 216 "mcsolver.m"
                  }
#line 216 "mcsolver.m"
              }
#line 216 "mcsolver.m"
          }
#line 216 "mcsolver.m"
      }
#line 216 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 216 "mcsolver.m"
  }
#line 216 "mcsolver.m"
}

#line 172 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
#line 172 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 172 "mcsolver.m"
{
#line 172 "mcsolver.m"
  {
#line 172 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 172 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 172 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 172 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 172 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5017 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 172 "mcsolver.m"
    else
#line 172 "mcsolver.m"
      {
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 172 "mcsolver.m"
        {
#line 172 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
#line 5039 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 172 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 172 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 172 "mcsolver.m"
        else
#line 172 "mcsolver.m"
          {
#line 172 "mcsolver.m"
            {
#line 172 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
#line 172 "mcsolver.m"
              return;
            }
#line 172 "mcsolver.m"
          }
#line 172 "mcsolver.m"
      }
#line 172 "mcsolver.m"
  }
#line 172 "mcsolver.m"
}

#line 172 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 172 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 172 "mcsolver.m"
{
#line 172 "mcsolver.m"
  {
#line 172 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 172 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 172 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 172 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 172 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 172 "mcsolver.m"
    else
#line 172 "mcsolver.m"
      {
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_10_10;
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 5106 "check_hlds.mcsolver.c"
        {
#line 5108 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
#line 172 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 172 "mcsolver.m"
          {
#line 5115 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_10_10 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
#line 5117 "check_hlds.mcsolver.c"
            {
#line 5119 "check_hlds.mcsolver.c"
              return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_10, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
            }
#line 172 "mcsolver.m"
          }
#line 172 "mcsolver.m"
      }
#line 172 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 172 "mcsolver.m"
  }
#line 172 "mcsolver.m"
}

#line 187 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0(
#line 187 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 187 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 187 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 187 "mcsolver.m"
{
#line 187 "mcsolver.m"
  {
#line 187 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 187 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_15 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 187 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_16 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 187 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_15 == check_hlds__mcsolver__CastY_16);
#line 187 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5157 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 187 "mcsolver.m"
    else
#line 187 "mcsolver.m"
      {
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12;

#line 187 "mcsolver.m"
        {
#line 187 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
#line 5187 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_12_12 == (MR_Integer) 0);
#line 187 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 187 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_12_12;
#line 187 "mcsolver.m"
        else
#line 187 "mcsolver.m"
          {
#line 187 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_13_13;

#line 187 "mcsolver.m"
            {
#line 187 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_13_13, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
#line 5207 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_13_13 == (MR_Integer) 0);
#line 187 "mcsolver.m"
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 187 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_13_13;
#line 187 "mcsolver.m"
            else
#line 187 "mcsolver.m"
              {
#line 187 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_14_14;

#line 187 "mcsolver.m"
                {
#line 187 "mcsolver.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
#line 5227 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
#line 187 "mcsolver.m"
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 187 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
#line 187 "mcsolver.m"
                else
#line 187 "mcsolver.m"
                  {
#line 187 "mcsolver.m"
                    {
#line 187 "mcsolver.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
#line 187 "mcsolver.m"
                      return;
                    }
#line 187 "mcsolver.m"
                  }
#line 187 "mcsolver.m"
              }
#line 187 "mcsolver.m"
          }
#line 187 "mcsolver.m"
      }
#line 187 "mcsolver.m"
  }
#line 187 "mcsolver.m"
}

#line 187 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0(
#line 187 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 187 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 187 "mcsolver.m"
{
#line 187 "mcsolver.m"
  {
#line 187 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 187 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_11 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 187 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_12 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 187 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_11 == check_hlds__mcsolver__CastY_12);
#line 187 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 187 "mcsolver.m"
    else
#line 187 "mcsolver.m"
      {
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_14_14;
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_15_15;
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 187 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));

#line 5310 "check_hlds.mcsolver.c"
        {
#line 5312 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
        }
#line 187 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
          {
#line 5319 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_14_14 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 5321 "check_hlds.mcsolver.c"
            {
#line 5323 "check_hlds.mcsolver.c"
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
            }
#line 187 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
              {
#line 5330 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[7];
#line 5332 "check_hlds.mcsolver.c"
                {
#line 5334 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
                }
#line 187 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 187 "mcsolver.m"
                  {
#line 5341 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
#line 5343 "check_hlds.mcsolver.c"
                    {
#line 5345 "check_hlds.mcsolver.c"
                      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                    }
#line 187 "mcsolver.m"
                  }
#line 187 "mcsolver.m"
              }
#line 187 "mcsolver.m"
          }
#line 187 "mcsolver.m"
      }
#line 187 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 187 "mcsolver.m"
  }
#line 187 "mcsolver.m"
}

#line 33 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0(
#line 33 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 33 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 33 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 33 "mcsolver.m"
{
#line 33 "mcsolver.m"
  {
#line 33 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 33 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 33 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 33 "mcsolver.m"
    {
#line 33 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 33 "mcsolver.m"
      return;
    }
#line 33 "mcsolver.m"
  }
#line 33 "mcsolver.m"
}

#line 33 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0(
#line 33 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 33 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 33 "mcsolver.m"
{
#line 33 "mcsolver.m"
  {
#line 33 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 33 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 33 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 33 "mcsolver.m"
    {
#line 33 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 33 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 33 "mcsolver.m"
  }
#line 33 "mcsolver.m"
}

#line 32 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0(
#line 32 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 32 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 32 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 32 "mcsolver.m"
{
#line 32 "mcsolver.m"
  {
#line 32 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 32 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 32 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 32 "mcsolver.m"
    {
#line 32 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 32 "mcsolver.m"
      return;
    }
#line 32 "mcsolver.m"
  }
#line 32 "mcsolver.m"
}

#line 32 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0(
#line 32 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 32 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 32 "mcsolver.m"
{
#line 32 "mcsolver.m"
  {
#line 32 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 32 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 32 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 32 "mcsolver.m"
    {
#line 32 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 32 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 32 "mcsolver.m"
  }
#line 32 "mcsolver.m"
}

#line 146 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
#line 146 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 146 "mcsolver.m"
{
#line 146 "mcsolver.m"
  {
#line 146 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 146 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 146 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 146 "mcsolver.m"
    {
#line 146 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 146 "mcsolver.m"
      return;
    }
#line 146 "mcsolver.m"
  }
#line 146 "mcsolver.m"
}

#line 146 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 146 "mcsolver.m"
{
#line 146 "mcsolver.m"
  {
#line 146 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 146 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 146 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 146 "mcsolver.m"
    {
#line 146 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 146 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 146 "mcsolver.m"
  }
#line 146 "mcsolver.m"
}

#line 145 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
#line 145 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 145 "mcsolver.m"
{
#line 145 "mcsolver.m"
  {
#line 145 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 145 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 145 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 145 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 145 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5573 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "mcsolver.m"
    else
#line 145 "mcsolver.m"
      {
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 145 "mcsolver.m"
        {
#line 145 "mcsolver.m"
          check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__V_8_8, check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
        }
#line 5595 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 145 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 145 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 145 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 145 "mcsolver.m"
        else
#line 145 "mcsolver.m"
          {
#line 145 "mcsolver.m"
            check_hlds__mcsolver____Compare____assgt_0_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_5_5, check_hlds__mcsolver__V_7_7);
#line 145 "mcsolver.m"
            return;
          }
#line 145 "mcsolver.m"
      }
#line 145 "mcsolver.m"
  }
#line 145 "mcsolver.m"
}

#line 145 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 145 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 145 "mcsolver.m"
{
#line 145 "mcsolver.m"
  {
#line 145 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 145 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 145 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 145 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 145 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 145 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 145 "mcsolver.m"
    else
#line 145 "mcsolver.m"
      {
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 5656 "check_hlds.mcsolver.c"
        {
#line 5658 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_3_3, check_hlds__mcsolver__V_5_5);
        }
#line 145 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 5663 "check_hlds.mcsolver.c"
          {
#line 5665 "check_hlds.mcsolver.c"
            return check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
          }
#line 145 "mcsolver.m"
      }
#line 145 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 145 "mcsolver.m"
  }
#line 145 "mcsolver.m"
}

#line 182 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
#line 182 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 182 "mcsolver.m"
{
#line 182 "mcsolver.m"
  {
#line 182 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 182 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 182 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 182 "mcsolver.m"
    {
#line 182 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 182 "mcsolver.m"
      return;
    }
#line 182 "mcsolver.m"
  }
#line 182 "mcsolver.m"
}

#line 182 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 182 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 182 "mcsolver.m"
{
#line 182 "mcsolver.m"
  {
#line 182 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 182 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 182 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 182 "mcsolver.m"
    {
#line 182 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 182 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 182 "mcsolver.m"
  }
#line 182 "mcsolver.m"
}

#line 159 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
#line 159 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 159 "mcsolver.m"
{
#line 159 "mcsolver.m"
  {
#line 159 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 159 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 159 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 159 "mcsolver.m"
    {
#line 159 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 159 "mcsolver.m"
      return;
    }
#line 159 "mcsolver.m"
  }
#line 159 "mcsolver.m"
}

#line 159 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 159 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 159 "mcsolver.m"
{
#line 159 "mcsolver.m"
  {
#line 159 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 159 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 159 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 159 "mcsolver.m"
    {
#line 159 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 159 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 159 "mcsolver.m"
  }
#line 159 "mcsolver.m"
}

#line 163 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
#line 163 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 163 "mcsolver.m"
{
#line 163 "mcsolver.m"
  {
#line 163 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 163 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 163 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 163 "mcsolver.m"
    {
#line 163 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 163 "mcsolver.m"
      return;
    }
#line 163 "mcsolver.m"
  }
#line 163 "mcsolver.m"
}

#line 163 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 163 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 163 "mcsolver.m"
{
#line 163 "mcsolver.m"
  {
#line 163 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 163 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 163 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 163 "mcsolver.m"
    {
#line 163 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 163 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 163 "mcsolver.m"
  }
#line 163 "mcsolver.m"
}

#line 150 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
#line 150 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 150 "mcsolver.m"
{
#line 150 "mcsolver.m"
  {
#line 150 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 150 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_45 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 150 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_46 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 150 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_45 == check_hlds__mcsolver__CastY_46);
#line 150 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5887 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "mcsolver.m"
    else
#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
      switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) {
#line 150 "mcsolver.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
        case (MR_Integer) 0:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
#line 150 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
              case (MR_Integer) 0:
#line 150 "mcsolver.m"
                {
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_8_8;

#line 150 "mcsolver.m"
                  {
#line 150 "mcsolver.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_55_55)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                  }
#line 5926 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 150 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 150 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
                    *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 150 "mcsolver.m"
                  else
#line 150 "mcsolver.m"
                    {
#line 150 "mcsolver.m"
                      {
#line 150 "mcsolver.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_54_54)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
#line 150 "mcsolver.m"
                        return;
                      }
#line 150 "mcsolver.m"
                    }
#line 150 "mcsolver.m"
                }
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 1:
#line 5953 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 2:
#line 5959 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 3:
#line 5965 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
            }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 1:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
#line 150 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
              case (MR_Integer) 0:
#line 5989 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 1:
#line 150 "mcsolver.m"
                {
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "mcsolver.m"
                  {
#line 150 "mcsolver.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_52_52)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
#line 150 "mcsolver.m"
                    return;
                  }
#line 150 "mcsolver.m"
                }
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 2:
#line 6013 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 3:
#line 6019 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
            }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 2:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
#line 150 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
              case (MR_Integer) 0:
#line 6043 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 1:
#line 6049 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 2:
#line 150 "mcsolver.m"
                {
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "mcsolver.m"
                  {
#line 150 "mcsolver.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_56_56)), ((MR_Box) (check_hlds__mcsolver__V_33_33)));
#line 150 "mcsolver.m"
                    return;
                  }
#line 150 "mcsolver.m"
                }
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 3:
#line 6073 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
            }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 3:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
#line 150 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
              case (MR_Integer) 0:
#line 6097 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 1:
#line 6103 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 2:
#line 6109 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
              case (MR_Integer) 3:
#line 150 "mcsolver.m"
                {
#line 150 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "mcsolver.m"
                  {
#line 150 "mcsolver.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[5], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_53_53)), ((MR_Box) (check_hlds__mcsolver__V_44_44)));
#line 150 "mcsolver.m"
                    return;
                  }
#line 150 "mcsolver.m"
                }
#line 150 "mcsolver.m"
                break;
#line 150 "mcsolver.m"
            }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
      }
#line 150 "mcsolver.m"
  }
#line 150 "mcsolver.m"
}

#line 150 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 150 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 150 "mcsolver.m"
{
#line 150 "mcsolver.m"
  {
#line 150 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 150 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 150 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 150 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
#line 150 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 150 "mcsolver.m"
    else
#line 150 "mcsolver.m"
#line 150 "mcsolver.m"
      switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
#line 150 "mcsolver.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mcsolver.m"
        case (MR_Integer) 0:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_17_17;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_18_18;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_5_5;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_6_6;

#line 150 "mcsolver.m"
            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 150 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
              {
#line 150 "mcsolver.m"
                check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "mcsolver.m"
                check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 6202 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 6204 "check_hlds.mcsolver.c"
                {
#line 6206 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
                }
#line 150 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
                  {
#line 6213 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6215 "check_hlds.mcsolver.c"
                    {
#line 6217 "check_hlds.mcsolver.c"
                      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                    }
#line 150 "mcsolver.m"
                  }
#line 150 "mcsolver.m"
              }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 1:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_15_15;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_8_8;

#line 150 "mcsolver.m"
            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 150 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
              {
#line 150 "mcsolver.m"
                check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6247 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6249 "check_hlds.mcsolver.c"
                {
#line 6251 "check_hlds.mcsolver.c"
                  return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
                }
#line 150 "mcsolver.m"
              }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 2:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_19_19;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_10_10;

#line 150 "mcsolver.m"
            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 150 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
              {
#line 150 "mcsolver.m"
                check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6279 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_19_19 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6281 "check_hlds.mcsolver.c"
                {
#line 6283 "check_hlds.mcsolver.c"
                  return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_19_19, ((MR_Box) (check_hlds__mcsolver__V_9_9)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
#line 150 "mcsolver.m"
              }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
        case (MR_Integer) 3:
#line 150 "mcsolver.m"
          {
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_12_12;

#line 150 "mcsolver.m"
            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 150 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 150 "mcsolver.m"
              {
#line 150 "mcsolver.m"
                check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6311 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[5];
#line 6313 "check_hlds.mcsolver.c"
                {
#line 6315 "check_hlds.mcsolver.c"
                  return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_11_11)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                }
#line 150 "mcsolver.m"
              }
#line 150 "mcsolver.m"
          }
#line 150 "mcsolver.m"
          break;
#line 150 "mcsolver.m"
      }
#line 150 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 150 "mcsolver.m"
  }
#line 150 "mcsolver.m"
}

#line 140 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
#line 140 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 140 "mcsolver.m"
{
#line 140 "mcsolver.m"
  {
#line 140 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 140 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 140 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 140 "mcsolver.m"
    {
#line 140 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 140 "mcsolver.m"
      return;
    }
#line 140 "mcsolver.m"
  }
#line 140 "mcsolver.m"
}

#line 140 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 140 "mcsolver.m"
{
#line 140 "mcsolver.m"
  {
#line 140 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 140 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 140 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 140 "mcsolver.m"
    {
#line 140 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 140 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 140 "mcsolver.m"
  }
#line 140 "mcsolver.m"
}

#line 139 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
#line 139 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 139 "mcsolver.m"
{
#line 139 "mcsolver.m"
  {
#line 139 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 139 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 139 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 139 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 139 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 6419 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "mcsolver.m"
    else
#line 139 "mcsolver.m"
      {
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 139 "mcsolver.m"
        {
#line 139 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
#line 6441 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 139 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 139 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 139 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 139 "mcsolver.m"
        else
#line 139 "mcsolver.m"
          {
#line 139 "mcsolver.m"
            MR_Integer check_hlds__mcsolver__V_13_13 = (MR_Integer) check_hlds__mcsolver__V_5_5;
#line 139 "mcsolver.m"
            MR_Integer check_hlds__mcsolver__V_14_14 = (MR_Integer) check_hlds__mcsolver__V_7_7;

#line 139 "mcsolver.m"
            {
#line 139 "mcsolver.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__V_14_14);
#line 139 "mcsolver.m"
              return;
            }
#line 139 "mcsolver.m"
          }
#line 139 "mcsolver.m"
      }
#line 139 "mcsolver.m"
  }
#line 139 "mcsolver.m"
}

#line 139 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 139 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 139 "mcsolver.m"
{
#line 139 "mcsolver.m"
  {
#line 139 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 139 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 139 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 139 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 139 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 139 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 139 "mcsolver.m"
    else
#line 139 "mcsolver.m"
      {
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 6511 "check_hlds.mcsolver.c"
        {
#line 6513 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
#line 139 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 6518 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_4_4 == check_hlds__mcsolver__V_6_6);
#line 139 "mcsolver.m"
      }
#line 139 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 139 "mcsolver.m"
  }
#line 139 "mcsolver.m"
}

#line 776 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
#line 776 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs_1,
#line 776 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 776 "mcsolver.m"
{
#line 778 "mcsolver.m"
  while (MR_TRUE)
#line 778 "mcsolver.m"
    {
#line 778 "mcsolver.m"
      /* tailcall optimized into a loop */
#line 778 "mcsolver.m"
      {
#line 778 "mcsolver.m"
        MR_bool check_hlds__mcsolver__succeeded;

#line 778 "mcsolver.m"
        if ((check_hlds__mcsolver__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "mcsolver.m"
          check_hlds__mcsolver__succeeded = MR_TRUE;
#line 778 "mcsolver.m"
        else
#line 779 "mcsolver.m"
          {
#line 779 "mcsolver.m"
            MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 779 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 779 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_7_7;
#line 781 "mcsolver.m"
            MR_Box check_hlds__mcsolver__conv0_V_7_7;

#line 781 "mcsolver.m"
            {
#line 781 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_5)), check_hlds__mcsolver__Bs_1, &check_hlds__mcsolver__conv0_V_7_7);
            }
#line 781 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 781 "mcsolver.m"
              {
#line 781 "mcsolver.m"
                check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv0_V_7_7);
#line 781 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 781 "mcsolver.m"
              }
#line 779 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 779 "mcsolver.m"
              {
#line 781 "mcsolver.m"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7_7 == (MR_Integer) 0);
#line 779 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 782 "mcsolver.m"
                  {
#line 782 "mcsolver.m"
                    /* direct tailcall eliminated */
#line 782 "mcsolver.m"
                    {
#line 782 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__HeadVar__2__tmp_copy_2 = check_hlds__mcsolver__Xs_6;

#line 782 "mcsolver.m"
                      check_hlds__mcsolver__HeadVar__2_2 = check_hlds__mcsolver__HeadVar__2__tmp_copy_2;
#line 782 "mcsolver.m"
                    }
#line 782 "mcsolver.m"
                    continue;
#line 782 "mcsolver.m"
                  }
#line 779 "mcsolver.m"
              }
#line 779 "mcsolver.m"
          }
#line 778 "mcsolver.m"
        return check_hlds__mcsolver__succeeded;
#line 778 "mcsolver.m"
      }
#line 778 "mcsolver.m"
      break;
#line 778 "mcsolver.m"
    }
#line 776 "mcsolver.m"
}

#line 754 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
#line 754 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 754 "mcsolver.m"
{
#line 754 "mcsolver.m"
  {
#line 754 "mcsolver.m"
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 759 "mcsolver.m"
    {
#line 759 "mcsolver.m"
      MR_Word base;
#line 759 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19 = base;
#line 759 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6));
#line 759 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9));
#line 759 "mcsolver.m"
    }
#line 759 "mcsolver.m"
    {
#line 759 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8);
    }
#line 759 "mcsolver.m"
    if ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
#line 759 "mcsolver.m"
      {
#line 759 "mcsolver.m"
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
#line 759 "mcsolver.m"
        return;
      }
#line 754 "mcsolver.m"
  }
#line 754 "mcsolver.m"
}

#line 747 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_6,
#line 747 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 747 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8,
#line 747 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 747 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr)
#line 747 "mcsolver.m"
{
#line 747 "mcsolver.m"
  {
#line 747 "mcsolver.m"
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s check_hlds__mcsolver__env;

#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5 = check_hlds__mcsolver__SCs_5;
#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6 = check_hlds__mcsolver__X_6;
#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7 = check_hlds__mcsolver__Bs0_7;
#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8 = check_hlds__mcsolver__Bs_8;
#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont = check_hlds__mcsolver__cont;
#line 747 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
#line 751 "mcsolver.m"
    {
#line 751 "mcsolver.m"
      (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6)));
    }
#line 753 "mcsolver.m"
    if ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
#line 752 "mcsolver.m"
      {
#line 752 "mcsolver.m"
        *((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8) = (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
#line 752 "mcsolver.m"
        {
#line 752 "mcsolver.m"
          ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
#line 752 "mcsolver.m"
          return;
        }
#line 752 "mcsolver.m"
      }
#line 753 "mcsolver.m"
    else
#line 754 "mcsolver.m"
      {
#line 754 "mcsolver.m"
        {
#line 754 "mcsolver.m"
          MR_Integer check_hlds__mcsolver__slot_0 = (MR_Integer) 0;

#line 754 "mcsolver.m"
          do
#line 754 "mcsolver.m"
            {
#line 754 "mcsolver.m"
              (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9 = ((&check_hlds__mcsolver_vector_common_8[0 + check_hlds__mcsolver__slot_0]))->check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
#line 754 "mcsolver.m"
              {
#line 754 "mcsolver.m"
                check_hlds__mcsolver__solve_var_4_p_0_1(&check_hlds__mcsolver__env);
              }
#line 754 "mcsolver.m"
              check_hlds__mcsolver__slot_0 = (check_hlds__mcsolver__slot_0 + (MR_Integer) 1);
#line 754 "mcsolver.m"
            }
#line 754 "mcsolver.m"
          while ((check_hlds__mcsolver__slot_0 < (MR_Integer) 2));
#line 754 "mcsolver.m"
        }
#line 754 "mcsolver.m"
      }
#line 747 "mcsolver.m"
  }
#line 747 "mcsolver.m"
}

#line 679 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
#line 679 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 679 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 679 "mcsolver.m"
{
#line 679 "mcsolver.m"
  {
#line 679 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 679 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 679 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__2_67;

#line 679 "mcsolver.m"
    {
#line 679 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__2_67 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 679 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__2_67));
#line 679 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 679 "mcsolver.m"
  }
#line 679 "mcsolver.m"
}

#line 667 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
#line 667 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 667 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 667 "mcsolver.m"
{
#line 667 "mcsolver.m"
  {
#line 667 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 667 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 667 "mcsolver.m"
    {
#line 667 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 667 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 667 "mcsolver.m"
  }
#line 667 "mcsolver.m"
}

#line 629 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
#line 629 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 629 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 629 "mcsolver.m"
{
#line 629 "mcsolver.m"
  {
#line 629 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 629 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 629 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__2_22;

#line 629 "mcsolver.m"
    {
#line 629 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__2_22 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 629 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__2_22));
#line 629 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 629 "mcsolver.m"
  }
#line 629 "mcsolver.m"
}

#line 684 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
#line 684 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 684 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 684 "mcsolver.m"
{
#line 684 "mcsolver.m"
  {
#line 684 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 684 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 684 "mcsolver.m"
    {
#line 684 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 684 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 684 "mcsolver.m"
  }
#line 684 "mcsolver.m"
}

#line 659 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
#line 659 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 659 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 659 "mcsolver.m"
{
#line 659 "mcsolver.m"
  {
#line 659 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 659 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 659 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_49;

#line 659 "mcsolver.m"
    {
#line 659 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__2_49 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 659 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_49));
#line 659 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 659 "mcsolver.m"
  }
#line 659 "mcsolver.m"
}

#line 612 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_1,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
#line 612 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 612 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_6)
#line 612 "mcsolver.m"
{
#line 615 "mcsolver.m"
  {
#line 615 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 615 "mcsolver.m"
#line 615 "mcsolver.m"
    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__4_4)) {
#line 615 "mcsolver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 615 "mcsolver.m"
      case (MR_Integer) 0:
#line 615 "mcsolver.m"
        {
#line 615 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
#line 615 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Zs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 1)));

#line 616 "mcsolver.m"
          {
#line 616 "mcsolver.m"
            check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__X_2)), ((MR_Box) (check_hlds__mcsolver__Y_10)));
          }
#line 631 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 624 "mcsolver.m"
#line 624 "mcsolver.m"
            switch (check_hlds__mcsolver__V_3) {
#line 624 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 624 "mcsolver.m"
              case (MR_Integer) 0:
#line 625 "mcsolver.m"
                {
#line 625 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_19_19;

#line 629 "mcsolver.m"
                  {
#line 629 "mcsolver.m"
                    check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[15], check_hlds__mcsolver__Zs_11);
                  }
#line 629 "mcsolver.m"
                  {
#line 629 "mcsolver.m"
                    return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_19_19, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
#line 625 "mcsolver.m"
                }
#line 624 "mcsolver.m"
                break;
#line 624 "mcsolver.m"
              case (MR_Integer) 1:
#line 618 "mcsolver.m"
                {
#line 622 "mcsolver.m"
                  {
#line 622 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
#line 622 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 618 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 618 "mcsolver.m"
                    {
#line 623 "mcsolver.m"
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 623 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 618 "mcsolver.m"
                    }
#line 618 "mcsolver.m"
                }
#line 624 "mcsolver.m"
                break;
#line 624 "mcsolver.m"
            }
#line 631 "mcsolver.m"
          else
#line 639 "mcsolver.m"
#line 639 "mcsolver.m"
            switch (check_hlds__mcsolver__V_3) {
#line 639 "mcsolver.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 639 "mcsolver.m"
              case (MR_Integer) 0:
#line 646 "mcsolver.m"
                {
#line 644 "mcsolver.m"
                  {
#line 644 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
#line 646 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 645 "mcsolver.m"
                    {
#line 645 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_30_30;

#line 645 "mcsolver.m"
                      {
#line 645 "mcsolver.m"
                        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "mcsolver.m"
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
#line 645 "mcsolver.m"
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 645 "mcsolver.m"
                      }
#line 645 "mcsolver.m"
                      {
#line 645 "mcsolver.m"
                        return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                      }
#line 645 "mcsolver.m"
                    }
#line 646 "mcsolver.m"
                  else
#line 647 "mcsolver.m"
                    {
#line 647 "mcsolver.m"
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 647 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 647 "mcsolver.m"
                    }
#line 646 "mcsolver.m"
                }
#line 639 "mcsolver.m"
                break;
#line 639 "mcsolver.m"
              case (MR_Integer) 1:
#line 634 "mcsolver.m"
                {
#line 634 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_35_35;

#line 638 "mcsolver.m"
                  {
#line 638 "mcsolver.m"
                    check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "mcsolver.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
#line 638 "mcsolver.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) ((MR_Integer) 1));
#line 638 "mcsolver.m"
                  }
#line 638 "mcsolver.m"
                  {
#line 638 "mcsolver.m"
                    return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
#line 634 "mcsolver.m"
                }
#line 639 "mcsolver.m"
                break;
#line 639 "mcsolver.m"
            }
#line 615 "mcsolver.m"
        }
#line 615 "mcsolver.m"
        break;
#line 615 "mcsolver.m"
      case (MR_Integer) 1:
#line 652 "mcsolver.m"
        {
#line 652 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Ys0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

#line 656 "mcsolver.m"
#line 656 "mcsolver.m"
          switch (check_hlds__mcsolver__V_3) {
#line 656 "mcsolver.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 656 "mcsolver.m"
            case (MR_Integer) 0:
#line 654 "mcsolver.m"
              {
#line 654 "mcsolver.m"
                *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 654 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 654 "mcsolver.m"
              }
#line 656 "mcsolver.m"
              break;
#line 656 "mcsolver.m"
            case (MR_Integer) 1:
#line 657 "mcsolver.m"
              {
#line 657 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeInfo_103_103 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 657 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeCtorInfo_104_104;
#line 657 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_44;
#line 657 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_46_46;
#line 657 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_47_47;

#line 658 "mcsolver.m"
                {
#line 658 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__Ys0_41, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_44);
                }
#line 657 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 657 "mcsolver.m"
                  {
#line 7137 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeCtorInfo_104_104 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 659 "mcsolver.m"
                    check_hlds__mcsolver__V_47_47 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[14];
#line 659 "mcsolver.m"
                    {
#line 659 "mcsolver.m"
                      check_hlds__mcsolver__V_46_46 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__TypeCtorInfo_104_104, check_hlds__mcsolver__V_47_47, check_hlds__mcsolver__Ys_44);
                    }
#line 659 "mcsolver.m"
                    {
#line 659 "mcsolver.m"
                      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_46_46, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                    }
#line 657 "mcsolver.m"
                  }
#line 657 "mcsolver.m"
              }
#line 656 "mcsolver.m"
              break;
#line 656 "mcsolver.m"
          }
#line 652 "mcsolver.m"
        }
#line 615 "mcsolver.m"
        break;
#line 615 "mcsolver.m"
      case (MR_Integer) 2:
#line 662 "mcsolver.m"
        {
#line 662 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Ys0_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

#line 676 "mcsolver.m"
#line 676 "mcsolver.m"
          switch (check_hlds__mcsolver__V_3) {
#line 676 "mcsolver.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 676 "mcsolver.m"
            case (MR_Integer) 0:
#line 664 "mcsolver.m"
              {
#line 664 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_58;
#line 664 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_69_69;
#line 664 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_115_115;
#line 664 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_116_116;

#line 667 "mcsolver.m"
                {
#line 667 "mcsolver.m"
                  check_hlds__mcsolver__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[3]));
#line 667 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4));
#line 667 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 667 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 3) = ((MR_Box) (check_hlds__mcsolver__Bs0_5));
#line 667 "mcsolver.m"
                }
#line 667 "mcsolver.m"
                {
#line 667 "mcsolver.m"
                  check_hlds__mcsolver__Ys_58 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_69_69, check_hlds__mcsolver__Ys0_55);
                }
#line 670 "mcsolver.m"
                check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__Ys_58)) == (MR_mktag((MR_Integer) 1)));
#line 670 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 670 "mcsolver.m"
                  {
#line 670 "mcsolver.m"
                    check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 0)));
#line 670 "mcsolver.m"
                    check_hlds__mcsolver__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 1)));
#line 672 "mcsolver.m"
                    if ((check_hlds__mcsolver__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "mcsolver.m"
                      {
#line 670 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_74_74;
#line 670 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_75_75;

#line 671 "mcsolver.m"
                        {
#line 671 "mcsolver.m"
                          check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "mcsolver.m"
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_116_116));
#line 671 "mcsolver.m"
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) ((MR_Integer) 1));
#line 671 "mcsolver.m"
                        }
#line 671 "mcsolver.m"
                        {
#line 671 "mcsolver.m"
                          check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "mcsolver.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
#line 671 "mcsolver.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "mcsolver.m"
                        }
#line 671 "mcsolver.m"
                        {
#line 671 "mcsolver.m"
                          return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_74_74, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                        }
#line 670 "mcsolver.m"
                      }
#line 672 "mcsolver.m"
                    else
#line 674 "mcsolver.m"
                      {
#line 674 "mcsolver.m"
                        *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 674 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 674 "mcsolver.m"
                      }
#line 670 "mcsolver.m"
                  }
#line 664 "mcsolver.m"
              }
#line 676 "mcsolver.m"
              break;
#line 676 "mcsolver.m"
            case (MR_Integer) 1:
#line 677 "mcsolver.m"
              {
#line 677 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeInfo_108_108 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 677 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeCtorInfo_109_109;
#line 677 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_64_64;
#line 677 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_65_65;
#line 677 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_80;

#line 678 "mcsolver.m"
                {
#line 678 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__Ys0_55, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_80);
                }
#line 677 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 677 "mcsolver.m"
                  {
#line 7293 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeCtorInfo_109_109 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 679 "mcsolver.m"
                    check_hlds__mcsolver__V_65_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[16];
#line 679 "mcsolver.m"
                    {
#line 679 "mcsolver.m"
                      check_hlds__mcsolver__V_64_64 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__TypeCtorInfo_109_109, check_hlds__mcsolver__V_65_65, check_hlds__mcsolver__Ys_80);
                    }
#line 679 "mcsolver.m"
                    {
#line 679 "mcsolver.m"
                      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                    }
#line 677 "mcsolver.m"
                  }
#line 677 "mcsolver.m"
              }
#line 676 "mcsolver.m"
              break;
#line 676 "mcsolver.m"
          }
#line 662 "mcsolver.m"
        }
#line 615 "mcsolver.m"
        break;
#line 615 "mcsolver.m"
      case (MR_Integer) 3:
#line 682 "mcsolver.m"
        {
#line 682 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
#line 682 "mcsolver.m"
          MR_Word check_hlds__mcsolver__NotConflicting_89;
#line 682 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_94_94;
#line 682 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_113_113;
#line 682 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_114_114;
#line 684 "mcsolver.m"
          MR_Word check_hlds__mcsolver___Conflicts_88;

#line 684 "mcsolver.m"
          {
#line 684 "mcsolver.m"
            check_hlds__mcsolver__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 684 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[12]));
#line 684 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2));
#line 684 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 684 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 3) = ((MR_Box) (check_hlds__mcsolver__X_2));
#line 684 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 4) = ((MR_Box) (check_hlds__mcsolver__V_3));
#line 684 "mcsolver.m"
          }
#line 684 "mcsolver.m"
          {
#line 684 "mcsolver.m"
            mercury__list__filter_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__V_94_94, check_hlds__mcsolver__Assgtss_84, &check_hlds__mcsolver___Conflicts_88, &check_hlds__mcsolver__NotConflicting_89);
          }
#line 694 "mcsolver.m"
          check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__NotConflicting_89)) == (MR_mktag((MR_Integer) 1)));
#line 694 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 694 "mcsolver.m"
            {
#line 694 "mcsolver.m"
              check_hlds__mcsolver__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 0)));
#line 694 "mcsolver.m"
              check_hlds__mcsolver__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 1)));
#line 696 "mcsolver.m"
              if ((check_hlds__mcsolver__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "mcsolver.m"
                {
#line 695 "mcsolver.m"
                  return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_114_114, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                }
#line 696 "mcsolver.m"
              else
#line 698 "mcsolver.m"
                {
#line 698 "mcsolver.m"
                  *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 698 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = MR_TRUE;
#line 698 "mcsolver.m"
                }
#line 694 "mcsolver.m"
            }
#line 682 "mcsolver.m"
        }
#line 615 "mcsolver.m"
        break;
#line 615 "mcsolver.m"
    }
#line 615 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 615 "mcsolver.m"
  }
#line 612 "mcsolver.m"
}

#line 605 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 605 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 605 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 605 "mcsolver.m"
{
#line 605 "mcsolver.m"
  {
#line 605 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 605 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 605 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_6;

#line 605 "mcsolver.m"
    {
#line 605 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrt_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_6);
    }
#line 605 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 605 "mcsolver.m"
      {
#line 605 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_6));
#line 605 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 605 "mcsolver.m"
      }
#line 605 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 605 "mcsolver.m"
  }
#line 605 "mcsolver.m"
}

#line 601 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_7,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_8,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_9,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
#line 601 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_11,
#line 601 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_12)
#line 601 "mcsolver.m"
{
#line 604 "mcsolver.m"
  {
#line 604 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 604 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 605 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_Bs_12;

#line 605 "mcsolver.m"
    {
#line 605 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_7[0]));
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1));
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_7));
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 4) = ((MR_Box) (check_hlds__mcsolver__X_8));
#line 605 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 5) = ((MR_Box) (check_hlds__mcsolver__V_9));
#line 605 "mcsolver.m"
    }
#line 605 "mcsolver.m"
    {
#line 605 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__ComplexCstrts_10, ((MR_Box) (check_hlds__mcsolver__Bs0_11)), &check_hlds__mcsolver__conv1_Bs_12);
    }
#line 605 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 605 "mcsolver.m"
      {
#line 605 "mcsolver.m"
        *check_hlds__mcsolver__Bs_12 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_12);
#line 605 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 605 "mcsolver.m"
      }
#line 604 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 604 "mcsolver.m"
  }
#line 601 "mcsolver.m"
}

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 560 "mcsolver.m"
{
#line 560 "mcsolver.m"
  {
#line 560 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 560 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv3_Bs_9;

#line 560 "mcsolver.m"
    {
#line 560 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv3_Bs_9);
    }
#line 560 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_Bs_9));
#line 560 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
      }
#line 560 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
  }
#line 560 "mcsolver.m"
}

#line 565 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 565 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_8,
#line 565 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_9)
#line 565 "mcsolver.m"
{
#line 568 "mcsolver.m"
  {
#line 568 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 568 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 568 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 580 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V0_10;
#line 570 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V0_10;

#line 570 "mcsolver.m"
    {
#line 570 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, &check_hlds__mcsolver__conv0_V0_10);
    }
#line 570 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 570 "mcsolver.m"
      {
#line 570 "mcsolver.m"
        check_hlds__mcsolver__V0_10 = ((MR_Word) check_hlds__mcsolver__conv0_V0_10);
#line 570 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 570 "mcsolver.m"
      }
#line 580 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 577 "mcsolver.m"
      {
#line 578 "mcsolver.m"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7 == check_hlds__mcsolver__V0_10);
#line 577 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 577 "mcsolver.m"
          {
#line 579 "mcsolver.m"
            *check_hlds__mcsolver__Bs_9 = check_hlds__mcsolver__Bs0_8;
#line 579 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 577 "mcsolver.m"
          }
#line 577 "mcsolver.m"
      }
#line 580 "mcsolver.m"
    else
#line 583 "mcsolver.m"
      {
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Bs1_12;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Assgts_13;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Bs2_14;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__ComplexCstrts_15;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_24_24;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_25_25;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_50_50;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_51_51;
#line 583 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_56_56;
#line 587 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_26_26;
#line 587 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_27_27;
#line 587 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_28_28;
#line 587 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_29_29;
#line 560 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv4_Bs2_14;
#line 590 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30;
#line 590 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31;
#line 590 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_32_32;
#line 590 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_33_33;
#line 729 "mcsolver.m"
        MR_Word check_hlds__mcsolver__CmplxCstrts_64;
#line 730 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_7_65;
#line 730 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_8_66;
#line 730 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv5_CmplxCstrts_64;

#line 585 "mcsolver.m"
        {
#line 585 "mcsolver.m"
          check_hlds__mcsolver__Bs1_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, ((MR_Box) (check_hlds__mcsolver__V_7)));
        }
#line 587 "mcsolver.m"
        check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
#line 587 "mcsolver.m"
        check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
#line 587 "mcsolver.m"
        check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
#line 587 "mcsolver.m"
        check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
#line 587 "mcsolver.m"
        check_hlds__mcsolver__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
#line 708 "mcsolver.m"
        check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 0)));
#line 708 "mcsolver.m"
        check_hlds__mcsolver__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 1)));
#line 708 "mcsolver.m"
#line 708 "mcsolver.m"
        switch (check_hlds__mcsolver__V_7) {
#line 708 "mcsolver.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 708 "mcsolver.m"
          case (MR_Integer) 0:
#line 715 "mcsolver.m"
            {
#line 715 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Assgts_45;
#line 716 "mcsolver.m"
              MR_Box check_hlds__mcsolver__conv1_Assgts_45;

#line 716 "mcsolver.m"
              {
#line 716 "mcsolver.m"
                check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_50_50, &check_hlds__mcsolver__conv1_Assgts_45);
              }
#line 716 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 716 "mcsolver.m"
                {
#line 716 "mcsolver.m"
                  check_hlds__mcsolver__Assgts_45 = ((MR_Word) check_hlds__mcsolver__conv1_Assgts_45);
#line 716 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = MR_TRUE;
#line 716 "mcsolver.m"
                }
#line 715 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 717 "mcsolver.m"
                check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_45;
#line 715 "mcsolver.m"
              else
#line 719 "mcsolver.m"
                check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "mcsolver.m"
            }
#line 708 "mcsolver.m"
            break;
#line 708 "mcsolver.m"
          case (MR_Integer) 1:
#line 708 "mcsolver.m"
            {
#line 708 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Assgts_41;
#line 709 "mcsolver.m"
              MR_Box check_hlds__mcsolver__conv2_Assgts_41;

#line 709 "mcsolver.m"
              {
#line 709 "mcsolver.m"
                check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_51_51, &check_hlds__mcsolver__conv2_Assgts_41);
              }
#line 709 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 709 "mcsolver.m"
                {
#line 709 "mcsolver.m"
                  check_hlds__mcsolver__Assgts_41 = ((MR_Word) check_hlds__mcsolver__conv2_Assgts_41);
#line 709 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = MR_TRUE;
#line 709 "mcsolver.m"
                }
#line 708 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 710 "mcsolver.m"
                check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_41;
#line 708 "mcsolver.m"
              else
#line 712 "mcsolver.m"
                check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "mcsolver.m"
            }
#line 708 "mcsolver.m"
            break;
#line 708 "mcsolver.m"
        }
#line 560 "mcsolver.m"
        {
#line 560 "mcsolver.m"
          check_hlds__mcsolver__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 560 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgt_4_p_0_1));
#line 560 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
#line 560 "mcsolver.m"
        }
#line 560 "mcsolver.m"
        {
#line 560 "mcsolver.m"
          check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_56_56, check_hlds__mcsolver__Assgts_13, ((MR_Box) (check_hlds__mcsolver__Bs1_12)), &check_hlds__mcsolver__conv4_Bs2_14);
        }
#line 560 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
          {
#line 560 "mcsolver.m"
            check_hlds__mcsolver__Bs2_14 = ((MR_Word) check_hlds__mcsolver__conv4_Bs2_14);
#line 560 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
          }
#line 583 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 583 "mcsolver.m"
          {
#line 590 "mcsolver.m"
            check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
#line 590 "mcsolver.m"
            check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
#line 590 "mcsolver.m"
            check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
#line 590 "mcsolver.m"
            check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
#line 590 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
#line 7802 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_7_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 7804 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_8_66 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
#line 730 "mcsolver.m"
            {
#line 730 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0(check_hlds__mcsolver__TypeInfo_7_65, check_hlds__mcsolver__TypeInfo_8_66, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_25_25, &check_hlds__mcsolver__conv5_CmplxCstrts_64);
            }
#line 730 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 730 "mcsolver.m"
              {
#line 730 "mcsolver.m"
                check_hlds__mcsolver__CmplxCstrts_64 = ((MR_Word) check_hlds__mcsolver__conv5_CmplxCstrts_64);
#line 730 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 730 "mcsolver.m"
              }
#line 729 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 731 "mcsolver.m"
              check_hlds__mcsolver__ComplexCstrts_15 = check_hlds__mcsolver__CmplxCstrts_64;
#line 729 "mcsolver.m"
            else
#line 733 "mcsolver.m"
              check_hlds__mcsolver__ComplexCstrts_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "mcsolver.m"
            {
#line 591 "mcsolver.m"
              return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrts_6_p_0(check_hlds__mcsolver__SCs_5, check_hlds__mcsolver__X_6, check_hlds__mcsolver__V_7, check_hlds__mcsolver__ComplexCstrts_15, check_hlds__mcsolver__Bs2_14, check_hlds__mcsolver__Bs_9);
            }
#line 583 "mcsolver.m"
          }
#line 583 "mcsolver.m"
      }
#line 568 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 568 "mcsolver.m"
  }
#line 565 "mcsolver.m"
}

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 560 "mcsolver.m"
{
#line 560 "mcsolver.m"
  {
#line 560 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 560 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

#line 560 "mcsolver.m"
    {
#line 560 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
#line 560 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
#line 560 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
      }
#line 560 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
  }
#line 560 "mcsolver.m"
}

#line 556 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Assgts_6,
#line 556 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 556 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8)
#line 556 "mcsolver.m"
{
#line 559 "mcsolver.m"
  {
#line 559 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 559 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_9_9;
#line 560 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_Bs_8;

#line 560 "mcsolver.m"
    {
#line 560 "mcsolver.m"
      check_hlds__mcsolver__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 560 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgts_4_p_0_1));
#line 560 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
#line 560 "mcsolver.m"
    }
#line 560 "mcsolver.m"
    {
#line 560 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_9_9, check_hlds__mcsolver__Assgts_6, ((MR_Box) (check_hlds__mcsolver__Bs0_7)), &check_hlds__mcsolver__conv1_Bs_8);
    }
#line 560 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        *check_hlds__mcsolver__Bs_8 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_8);
#line 560 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
      }
#line 559 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 559 "mcsolver.m"
  }
#line 556 "mcsolver.m"
}

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 467 "mcsolver.m"
{
#line 467 "mcsolver.m"
  {
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 467 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv5_HeadVar__3_3;

#line 467 "mcsolver.m"
    {
#line 467 "mcsolver.m"
      check_hlds__mcsolver__conv5_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 467 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv5_HeadVar__3_3));
#line 467 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
  }
#line 467 "mcsolver.m"
}

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 467 "mcsolver.m"
{
#line 467 "mcsolver.m"
  {
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 467 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv4_HeadVar__3_3;

#line 467 "mcsolver.m"
    {
#line 467 "mcsolver.m"
      check_hlds__mcsolver__conv4_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 467 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv4_HeadVar__3_3));
#line 467 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
  }
#line 467 "mcsolver.m"
}

#line 496 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 496 "mcsolver.m"
{
#line 496 "mcsolver.m"
  {
#line 496 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 496 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_29;

#line 496 "mcsolver.m"
    {
#line 496 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__3_29 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 496 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_29));
#line 496 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 496 "mcsolver.m"
  }
#line 496 "mcsolver.m"
}

#line 496 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 496 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 496 "mcsolver.m"
{
#line 496 "mcsolver.m"
  {
#line 496 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 496 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 496 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_23;

#line 496 "mcsolver.m"
    {
#line 496 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_23 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 496 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_23));
#line 496 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 496 "mcsolver.m"
  }
#line 496 "mcsolver.m"
}

#line 467 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 467 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 467 "mcsolver.m"
{
#line 467 "mcsolver.m"
  {
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 467 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_3;

#line 467 "mcsolver.m"
    {
#line 467 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 467 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_3));
#line 467 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 467 "mcsolver.m"
  }
#line 467 "mcsolver.m"
}

#line 483 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
#line 483 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 483 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 483 "mcsolver.m"
{
#line 485 "mcsolver.m"
  {
#line 485 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 485 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_3;

#line 485 "mcsolver.m"
#line 485 "mcsolver.m"
    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) {
#line 485 "mcsolver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "mcsolver.m"
      case (MR_Integer) 0:
#line 485 "mcsolver.m"
        {
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_7_43;
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Ys_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_7_7;
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_8_8;
#line 485 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_42_42;
#line 461 "mcsolver.m"
          MR_Box check_hlds__mcsolver__conv3_V_7_7;

#line 461 "mcsolver.m"
          {
#line 461 "mcsolver.m"
            check_hlds__mcsolver__conv3_V_7_7 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__X_5)));
          }
#line 461 "mcsolver.m"
          check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv3_V_7_7);
#line 8154 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__TypeInfo_7_43 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 467 "mcsolver.m"
          }
#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_8_8 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__V_42_42, check_hlds__mcsolver__Ys_6);
          }
#line 486 "mcsolver.m"
          {
#line 486 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 486 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_7_7));
#line 486 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mcsolver__V_8_8));
#line 486 "mcsolver.m"
          }
#line 485 "mcsolver.m"
        }
#line 485 "mcsolver.m"
        break;
#line 485 "mcsolver.m"
      case (MR_Integer) 1:
#line 488 "mcsolver.m"
        {
#line 488 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_7_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 488 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 488 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_11_11;
#line 488 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_33_33;

#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 467 "mcsolver.m"
          }
#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_11_11 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__V_33_33, check_hlds__mcsolver__Xs_10);
          }
#line 489 "mcsolver.m"
          {
#line 489 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 489 "mcsolver.m"
          }
#line 488 "mcsolver.m"
        }
#line 485 "mcsolver.m"
        break;
#line 485 "mcsolver.m"
      case (MR_Integer) 2:
#line 491 "mcsolver.m"
        {
#line 491 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_7_49 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 491 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 491 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_14_14;
#line 491 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_48_48;

#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 467 "mcsolver.m"
          }
#line 467 "mcsolver.m"
          {
#line 467 "mcsolver.m"
            check_hlds__mcsolver__V_14_14 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__V_48_48, check_hlds__mcsolver__Xs_13);
          }
#line 492 "mcsolver.m"
          {
#line 492 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "mcsolver.m"
            MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 492 "mcsolver.m"
          }
#line 491 "mcsolver.m"
        }
#line 485 "mcsolver.m"
        break;
#line 485 "mcsolver.m"
      case (MR_Integer) 3:
#line 494 "mcsolver.m"
        {
#line 494 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_27_27 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 494 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 494 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_19_19;
#line 494 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_20_20;
#line 494 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_21_21;

#line 496 "mcsolver.m"
          {
#line 496 "mcsolver.m"
            check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 496 "mcsolver.m"
          }
#line 496 "mcsolver.m"
          {
#line 496 "mcsolver.m"
            check_hlds__mcsolver__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[11]));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 3) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 496 "mcsolver.m"
          }
#line 495 "mcsolver.m"
          {
#line 495 "mcsolver.m"
            check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__V_20_20, check_hlds__mcsolver__Assgtss_16);
          }
#line 495 "mcsolver.m"
          {
#line 495 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "mcsolver.m"
            MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 495 "mcsolver.m"
          }
#line 494 "mcsolver.m"
        }
#line 485 "mcsolver.m"
        break;
#line 485 "mcsolver.m"
    }
#line 485 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_3;
#line 485 "mcsolver.m"
  }
#line 483 "mcsolver.m"
}

#line 477 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 477 "mcsolver.m"
{
#line 477 "mcsolver.m"
  {
#line 477 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 477 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__4_25;

#line 477 "mcsolver.m"
    {
#line 477 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__4_25 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 477 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__4_25));
#line 477 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 477 "mcsolver.m"
  }
#line 477 "mcsolver.m"
}

#line 477 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 477 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 477 "mcsolver.m"
{
#line 477 "mcsolver.m"
  {
#line 477 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 477 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 477 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_15;

#line 477 "mcsolver.m"
    {
#line 477 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_15 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 477 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_15));
#line 477 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 477 "mcsolver.m"
  }
#line 477 "mcsolver.m"
}

#line 471 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
#line 471 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1)
#line 471 "mcsolver.m"
{
#line 473 "mcsolver.m"
  {
#line 473 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 473 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_2;

#line 473 "mcsolver.m"
#line 473 "mcsolver.m"
    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
#line 473 "mcsolver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 473 "mcsolver.m"
      case (MR_Integer) 0:
#line 473 "mcsolver.m"
        {
#line 473 "mcsolver.m"
          MR_Word check_hlds__mcsolver__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Ys_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 473 "mcsolver.m"
          {
#line 473 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__mcsolver__X_3));
#line 473 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_4));
#line 473 "mcsolver.m"
          }
#line 473 "mcsolver.m"
        }
#line 473 "mcsolver.m"
        break;
#line 473 "mcsolver.m"
      case (MR_Integer) 1:
#line 474 "mcsolver.m"
        check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "mcsolver.m"
        break;
#line 473 "mcsolver.m"
      case (MR_Integer) 2:
#line 475 "mcsolver.m"
        check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "mcsolver.m"
        break;
#line 473 "mcsolver.m"
      case (MR_Integer) 3:
#line 476 "mcsolver.m"
        {
#line 476 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "mcsolver.m"
          MR_Box check_hlds__mcsolver__conv2_HeadVar__2_2;

#line 477 "mcsolver.m"
          {
#line 477 "mcsolver.m"
            check_hlds__mcsolver__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], (MR_Word) &check_hlds__mcsolver_scalar_common_6[1], check_hlds__mcsolver__Assgtss_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 477 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) check_hlds__mcsolver__conv2_HeadVar__2_2);
#line 476 "mcsolver.m"
        }
#line 473 "mcsolver.m"
        break;
#line 473 "mcsolver.m"
    }
#line 473 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_2;
#line 473 "mcsolver.m"
  }
#line 471 "mcsolver.m"
}

#line 459 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
#line 459 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_4,
#line 459 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5)
#line 459 "mcsolver.m"
{
#line 461 "mcsolver.m"
  {
#line 461 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 461 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_3;
#line 461 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_HeadVar__3_3;

#line 461 "mcsolver.m"
    {
#line 461 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_3 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_4, ((MR_Box) (check_hlds__mcsolver__X_5)));
    }
#line 461 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__3_3 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__3_3);
#line 461 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_3;
#line 461 "mcsolver.m"
  }
#line 459 "mcsolver.m"
}

#line 296 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 296 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 296 "mcsolver.m"
{
#line 296 "mcsolver.m"
  {
#line 296 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 296 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

#line 296 "mcsolver.m"
    {
#line 296 "mcsolver.m"
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
#line 296 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
#line 296 "mcsolver.m"
  }
#line 296 "mcsolver.m"
}

#line 271 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
#line 271 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 271 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
#line 271 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3)
#line 271 "mcsolver.m"
{
#line 274 "mcsolver.m"
  {
#line 274 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 274 "mcsolver.m"
#line 274 "mcsolver.m"
    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
#line 274 "mcsolver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 274 "mcsolver.m"
      case (MR_Integer) 0:
#line 274 "mcsolver.m"
        {
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_43_43;
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_44_44;
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_45_45;
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_46_46;
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_47_47;
#line 274 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_48_48;

#line 324 "mcsolver.m"
          {
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__Var_4));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) (check_hlds__mcsolver__Value_5));
#line 324 "mcsolver.m"
          }
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
#line 324 "mcsolver.m"
          {
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_45_45));
#line 324 "mcsolver.m"
          }
#line 324 "mcsolver.m"
          {
#line 324 "mcsolver.m"
            MR_Word base;
#line 324 "mcsolver.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_47_47));
#line 324 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
#line 324 "mcsolver.m"
          }
#line 274 "mcsolver.m"
        }
#line 274 "mcsolver.m"
        break;
#line 274 "mcsolver.m"
      case (MR_Integer) 1:
#line 276 "mcsolver.m"
        {
#line 276 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));

#line 294 "mcsolver.m"
          if ((check_hlds__mcsolver__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "mcsolver.m"
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
#line 294 "mcsolver.m"
          else
#line 295 "mcsolver.m"
            {
#line 295 "mcsolver.m"
              MR_Word check_hlds__mcsolver__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 0)));
#line 295 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Xs_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 1)));
#line 295 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_61_61;
#line 296 "mcsolver.m"
              MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

#line 296 "mcsolver.m"
              {
#line 296 "mcsolver.m"
                check_hlds__mcsolver__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
#line 296 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 1) = ((MR_Box) (check_hlds__mcsolver__prepare_var_constraint_3_p_0_1));
#line 296 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 3) = ((MR_Box) (check_hlds__mcsolver__X_56));
#line 296 "mcsolver.m"
              }
#line 296 "mcsolver.m"
              {
#line 296 "mcsolver.m"
                mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_61_61, check_hlds__mcsolver__Xs_57, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
              }
#line 296 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
#line 295 "mcsolver.m"
            }
#line 276 "mcsolver.m"
        }
#line 274 "mcsolver.m"
        break;
#line 274 "mcsolver.m"
      case (MR_Integer) 2:
#line 278 "mcsolver.m"
        {
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Var1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Var2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_74_74;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_75_75;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_76_76;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_78_78;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_80_80;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_81_81;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_82_82;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_84_84;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_86_86;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_87_87;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_88_88;
#line 278 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_89_89;

#line 301 "mcsolver.m"
          {
#line 301 "mcsolver.m"
            check_hlds__mcsolver__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 301 "mcsolver.m"
          }
#line 301 "mcsolver.m"
          {
#line 301 "mcsolver.m"
            check_hlds__mcsolver__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 301 "mcsolver.m"
          }
#line 301 "mcsolver.m"
          {
#line 301 "mcsolver.m"
            check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_76_76));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) (check_hlds__mcsolver__V_78_78));
#line 301 "mcsolver.m"
          }
#line 302 "mcsolver.m"
          {
#line 302 "mcsolver.m"
            check_hlds__mcsolver__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 1) = ((MR_Box) ((MR_Integer) 0));
#line 302 "mcsolver.m"
          }
#line 302 "mcsolver.m"
          {
#line 302 "mcsolver.m"
            check_hlds__mcsolver__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 302 "mcsolver.m"
          }
#line 302 "mcsolver.m"
          {
#line 302 "mcsolver.m"
            check_hlds__mcsolver__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__V_82_82));
#line 302 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__V_84_84));
#line 302 "mcsolver.m"
          }
#line 303 "mcsolver.m"
          check_hlds__mcsolver__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
#line 303 "mcsolver.m"
          check_hlds__mcsolver__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
#line 303 "mcsolver.m"
          check_hlds__mcsolver__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
#line 303 "mcsolver.m"
          check_hlds__mcsolver__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
#line 303 "mcsolver.m"
          {
#line 303 "mcsolver.m"
            check_hlds__mcsolver__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 0) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
#line 303 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 1) = ((MR_Box) (check_hlds__mcsolver__V_86_86));
#line 303 "mcsolver.m"
          }
#line 301 "mcsolver.m"
          {
#line 301 "mcsolver.m"
            check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (check_hlds__mcsolver__V_80_80));
#line 301 "mcsolver.m"
          }
#line 301 "mcsolver.m"
          {
#line 301 "mcsolver.m"
            MR_Word base;
#line 301 "mcsolver.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_87_87));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_88_88));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_74_74));
#line 301 "mcsolver.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_89_89));
#line 301 "mcsolver.m"
          }
#line 278 "mcsolver.m"
        }
#line 274 "mcsolver.m"
        break;
#line 274 "mcsolver.m"
      case (MR_Integer) 3:
#line 274 "mcsolver.m"
#line 274 "mcsolver.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)))) {
#line 274 "mcsolver.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 274 "mcsolver.m"
          case (MR_Integer) 0:
#line 280 "mcsolver.m"
            {
#line 280 "mcsolver.m"
              MR_Word check_hlds__mcsolver__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Ys_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));

#line 281 "mcsolver.m"
              {
#line 281 "mcsolver.m"
                check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(check_hlds__mcsolver__X_21, check_hlds__mcsolver__Ys_22, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 281 "mcsolver.m"
                return;
              }
#line 280 "mcsolver.m"
            }
#line 274 "mcsolver.m"
            break;
#line 274 "mcsolver.m"
          case (MR_Integer) 1:
#line 282 "mcsolver.m"
            {
#line 282 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 283 "mcsolver.m"
              {
#line 283 "mcsolver.m"
                check_hlds__mcsolver__at_most_one_3_p_0(check_hlds__mcsolver__Vars_27, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 283 "mcsolver.m"
                return;
              }
#line 282 "mcsolver.m"
            }
#line 274 "mcsolver.m"
            break;
#line 274 "mcsolver.m"
          case (MR_Integer) 2:
#line 284 "mcsolver.m"
            {
#line 284 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 285 "mcsolver.m"
              {
#line 285 "mcsolver.m"
                check_hlds__mcsolver__exactly_one_3_p_0(check_hlds__mcsolver__Vars_32, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 285 "mcsolver.m"
                return;
              }
#line 284 "mcsolver.m"
            }
#line 274 "mcsolver.m"
            break;
#line 274 "mcsolver.m"
        }
#line 274 "mcsolver.m"
        break;
#line 274 "mcsolver.m"
    }
#line 274 "mcsolver.m"
  }
#line 271 "mcsolver.m"
}

#line 255 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
#line 255 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 255 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 255 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
#line 255 "mcsolver.m"
{
#line 255 "mcsolver.m"
  {
#line 255 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 255 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 255 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__2_17;

#line 255 "mcsolver.m"
    {
#line 255 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv2_HeadVar__2_17);
    }
#line 255 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 255 "mcsolver.m"
      {
#line 255 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__2_17));
#line 255 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 255 "mcsolver.m"
      }
#line 255 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 255 "mcsolver.m"
  }
#line 255 "mcsolver.m"
}

#line 235 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 235 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 235 "mcsolver.m"
{
#line 235 "mcsolver.m"
  {
#line 235 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 235 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

#line 235 "mcsolver.m"
    {
#line 235 "mcsolver.m"
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
#line 235 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
#line 235 "mcsolver.m"
  }
#line 235 "mcsolver.m"
}

#line 240 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
#line 240 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Constraint_4,
#line 240 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
#line 240 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14)
#line 240 "mcsolver.m"
{
#line 245 "mcsolver.m"
  {
#line 245 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 245 "mcsolver.m"
#line 245 "mcsolver.m"
    switch (MR_tag((MR_Word) check_hlds__mcsolver__Constraint_4)) {
#line 245 "mcsolver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 245 "mcsolver.m"
      case (MR_Integer) 0:
#line 245 "mcsolver.m"
        {
#line 245 "mcsolver.m"
          MR_Word check_hlds__mcsolver__VarConstraint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));

#line 246 "mcsolver.m"
          {
#line 246 "mcsolver.m"
            check_hlds__mcsolver__prepare_var_constraint_3_p_0(check_hlds__mcsolver__VarConstraint_6, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
#line 246 "mcsolver.m"
            return;
          }
#line 245 "mcsolver.m"
        }
#line 245 "mcsolver.m"
        break;
#line 245 "mcsolver.m"
      case (MR_Integer) 1:
#line 251 "mcsolver.m"
        {
#line 251 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
#line 263 "mcsolver.m"
          MR_Word check_hlds__mcsolver__DisjOfAssgts_12;

#line 255 "mcsolver.m"
          {
#line 255 "mcsolver.m"
            check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[12], check_hlds__mcsolver__Constraints_32, &check_hlds__mcsolver__DisjOfAssgts_12);
          }
#line 263 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 262 "mcsolver.m"
            {
#line 262 "mcsolver.m"
              check_hlds__mcsolver__disjunction_of_assignments_3_p_0(check_hlds__mcsolver__DisjOfAssgts_12, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
#line 262 "mcsolver.m"
              return;
            }
#line 263 "mcsolver.m"
          else
#line 264 "mcsolver.m"
            {
#line 264 "mcsolver.m"
              {
#line 264 "mcsolver.m"
                mercury__require__sorry_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.prepare_abstract_constraint\'/3", (MR_String) "Disjuction of constraints - general case.");
#line 264 "mcsolver.m"
                return;
              }
#line 264 "mcsolver.m"
            }
#line 251 "mcsolver.m"
        }
#line 245 "mcsolver.m"
        break;
#line 245 "mcsolver.m"
      case (MR_Integer) 2:
#line 248 "mcsolver.m"
        {
#line 248 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
#line 235 "mcsolver.m"
          MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14;

#line 235 "mcsolver.m"
          {
#line 235 "mcsolver.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[11], check_hlds__mcsolver__Constraints_7, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
          }
#line 235 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
#line 248 "mcsolver.m"
        }
#line 245 "mcsolver.m"
        break;
#line 245 "mcsolver.m"
    }
#line 245 "mcsolver.m"
  }
#line 240 "mcsolver.m"
}

#line 529 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 529 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 529 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 529 "mcsolver.m"
{
#line 529 "mcsolver.m"
  {
#line 529 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 529 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv4_HeadVar__4_19;

#line 529 "mcsolver.m"
    {
#line 529 "mcsolver.m"
      check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv4_HeadVar__4_19);
    }
#line 529 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv4_HeadVar__4_19));
#line 529 "mcsolver.m"
  }
#line 529 "mcsolver.m"
}

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 745 "mcsolver.m"
{
#line 745 "mcsolver.m"
  {
#line 745 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 745 "mcsolver.m"
    *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8));
#line 745 "mcsolver.m"
    {
#line 745 "mcsolver.m"
      ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr);
#line 745 "mcsolver.m"
      return;
    }
#line 745 "mcsolver.m"
  }
#line 745 "mcsolver.m"
}

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 745 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 745 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
#line 745 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr)
#line 745 "mcsolver.m"
{
#line 745 "mcsolver.m"
  {
#line 745 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s check_hlds__mcsolver__env;

#line 745 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3 = check_hlds__mcsolver__wrapper_arg_3;
#line 745 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont = check_hlds__mcsolver__cont;
#line 745 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
#line 745 "mcsolver.m"
    {
#line 745 "mcsolver.m"
      MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 745 "mcsolver.m"
      {
#line 745 "mcsolver.m"
        check_hlds__mcsolver__solve_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8, check_hlds__mcsolver__solve_2_p_0_2, &check_hlds__mcsolver__env);
      }
#line 745 "mcsolver.m"
    }
#line 745 "mcsolver.m"
  }
#line 745 "mcsolver.m"
}

#line 560 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 560 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 560 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 560 "mcsolver.m"
{
#line 560 "mcsolver.m"
  {
#line 560 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 560 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

#line 560 "mcsolver.m"
    {
#line 560 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
#line 560 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
#line 560 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
      }
#line 560 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
  }
#line 560 "mcsolver.m"
}

#line 745 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
#line 745 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 745 "mcsolver.m"
{
#line 745 "mcsolver.m"
  {
#line 745 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 745 "mcsolver.m"
    (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5 = ((MR_Word) (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5);
#line 745 "mcsolver.m"
    {
#line 745 "mcsolver.m"
      check_hlds__mcsolver__solve_2_p_0_4(check_hlds__mcsolver__env_ptr);
#line 745 "mcsolver.m"
      return;
    }
#line 745 "mcsolver.m"
  }
#line 745 "mcsolver.m"
}

#line 504 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
#line 504 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 504 "mcsolver.m"
{
#line 504 "mcsolver.m"
  {
#line 504 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 504 "mcsolver.m"
    {
#line 528 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 528 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_67_67;
#line 528 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_68_68;
#line 528 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_69_69;
#line 529 "mcsolver.m"
      MR_Box check_hlds__mcsolver__conv5_Bindings_4;

#line 528 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 528 "mcsolver.m"
      check_hlds__mcsolver__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 528 "mcsolver.m"
      check_hlds__mcsolver__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 528 "mcsolver.m"
      check_hlds__mcsolver__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 9307 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 9309 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 529 "mcsolver.m"
      {
#line 529 "mcsolver.m"
        MR_Word base;
#line 529 "mcsolver.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 529 "mcsolver.m"
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56 = base;
#line 529 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[3]));
#line 529 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_6));
#line 529 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 529 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50));
#line 529 "mcsolver.m"
      }
#line 536 "mcsolver.m"
      {
#line 536 "mcsolver.m"
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57 = mercury__map__keys_1_f_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5);
      }
#line 9334 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
#line 529 "mcsolver.m"
      {
#line 529 "mcsolver.m"
        mercury__list__foldl_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57, ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5)), &check_hlds__mcsolver__conv5_Bindings_4);
      }
#line 529 "mcsolver.m"
      *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4) = ((MR_Word) check_hlds__mcsolver__conv5_Bindings_4);
#line 529 "mcsolver.m"
      {
#line 529 "mcsolver.m"
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr);
#line 529 "mcsolver.m"
        return;
      }
#line 504 "mcsolver.m"
    }
#line 504 "mcsolver.m"
  }
#line 504 "mcsolver.m"
}

#line 116 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__solve_2_p_0(
#line 116 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_3,
#line 116 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bindings_4,
#line 116 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 116 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr)
#line 116 "mcsolver.m"
{
#line 116 "mcsolver.m"
  {
#line 116 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s check_hlds__mcsolver__env;

#line 116 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3 = check_hlds__mcsolver__SCs_3;
#line 116 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4 = check_hlds__mcsolver__Bindings_4;
#line 116 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__cont = check_hlds__mcsolver__cont;
#line 116 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
#line 504 "mcsolver.m"
    {
#line 504 "mcsolver.m"
      MR_bool check_hlds__mcsolver__succeeded;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__TypeInfo_13_44;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__TypeInfo_14_45;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_7_7;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__Bs1_15;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_16_16;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_17_17;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_30_30;
#line 504 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_40_40;
#line 518 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_18_18;
#line 518 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_19_19;
#line 518 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_20_20;
#line 518 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_21_21;
#line 560 "mcsolver.m"
      MR_Box check_hlds__mcsolver__conv1_Bs1_15;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_22_22;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_23_23;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_24_24;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_25_25;

#line 505 "mcsolver.m"
      {
#line 505 "mcsolver.m"
        check_hlds__mcsolver__V_7_7 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0);
      }
#line 518 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 518 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 518 "mcsolver.m"
      check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 518 "mcsolver.m"
      check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 518 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 560 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_1));
#line 560 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
#line 560 "mcsolver.m"
      }
#line 560 "mcsolver.m"
      {
#line 560 "mcsolver.m"
        check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_7_7)), &check_hlds__mcsolver__conv1_Bs1_15);
      }
#line 560 "mcsolver.m"
      if (check_hlds__mcsolver__succeeded)
#line 560 "mcsolver.m"
        {
#line 560 "mcsolver.m"
          check_hlds__mcsolver__Bs1_15 = ((MR_Word) check_hlds__mcsolver__conv1_Bs1_15);
#line 560 "mcsolver.m"
          check_hlds__mcsolver__succeeded = MR_TRUE;
#line 560 "mcsolver.m"
        }
#line 504 "mcsolver.m"
      if (check_hlds__mcsolver__succeeded)
#line 504 "mcsolver.m"
        {
#line 519 "mcsolver.m"
          check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 519 "mcsolver.m"
          check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 519 "mcsolver.m"
          check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 519 "mcsolver.m"
          check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 519 "mcsolver.m"
          check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 9480 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__TypeInfo_13_44 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 9482 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__TypeInfo_14_45 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
#line 745 "mcsolver.m"
          {
#line 745 "mcsolver.m"
            check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 745 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[2]));
#line 745 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_3));
#line 745 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 745 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
#line 745 "mcsolver.m"
          }
#line 745 "mcsolver.m"
          {
#line 745 "mcsolver.m"
            mercury__list__foldl_4_p_7(check_hlds__mcsolver__TypeInfo_13_44, check_hlds__mcsolver__TypeInfo_14_45, check_hlds__mcsolver__V_40_40, check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__Bs1_15)), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5, check_hlds__mcsolver__solve_2_p_0_5, &check_hlds__mcsolver__env);
          }
#line 504 "mcsolver.m"
        }
#line 504 "mcsolver.m"
    }
#line 116 "mcsolver.m"
  }
#line 116 "mcsolver.m"
}

#line 444 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 444 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 444 "mcsolver.m"
{
#line 444 "mcsolver.m"
  {
#line 444 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 444 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 444 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv11_HeadVar__3_85;

#line 444 "mcsolver.m"
    {
#line 444 "mcsolver.m"
      check_hlds__mcsolver__conv11_HeadVar__3_85 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 444 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv11_HeadVar__3_85));
#line 444 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 444 "mcsolver.m"
  }
#line 444 "mcsolver.m"
}

#line 437 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 437 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 437 "mcsolver.m"
{
#line 437 "mcsolver.m"
  {
#line 437 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 437 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 437 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv9_HeadVar__3_78;

#line 437 "mcsolver.m"
    {
#line 437 "mcsolver.m"
      check_hlds__mcsolver__conv9_HeadVar__3_78 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 437 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv9_HeadVar__3_78));
#line 437 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 437 "mcsolver.m"
  }
#line 437 "mcsolver.m"
}

#line 430 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 430 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 430 "mcsolver.m"
{
#line 430 "mcsolver.m"
  {
#line 430 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 430 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 430 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv7_HeadVar__3_73;

#line 430 "mcsolver.m"
    {
#line 430 "mcsolver.m"
      check_hlds__mcsolver__conv7_HeadVar__3_73 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 430 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv7_HeadVar__3_73));
#line 430 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 430 "mcsolver.m"
  }
#line 430 "mcsolver.m"
}

#line 417 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 417 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 417 "mcsolver.m"
{
#line 417 "mcsolver.m"
  {
#line 417 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 417 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 417 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv5_HeadVar__3_63;

#line 417 "mcsolver.m"
    {
#line 417 "mcsolver.m"
      check_hlds__mcsolver__conv5_HeadVar__3_63 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 417 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv5_HeadVar__3_63));
#line 417 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 417 "mcsolver.m"
  }
#line 417 "mcsolver.m"
}

#line 404 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 404 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 404 "mcsolver.m"
{
#line 404 "mcsolver.m"
  {
#line 404 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 404 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 404 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv3_HeadVar__3_50;

#line 404 "mcsolver.m"
    {
#line 404 "mcsolver.m"
      check_hlds__mcsolver__conv3_HeadVar__3_50 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 404 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_HeadVar__3_50));
#line 404 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 404 "mcsolver.m"
  }
#line 404 "mcsolver.m"
}

#line 400 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
#line 400 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 400 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 400 "mcsolver.m"
{
#line 400 "mcsolver.m"
  {
#line 400 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 400 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 400 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_3;

#line 400 "mcsolver.m"
    {
#line 400 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__3_3 = check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 400 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_3));
#line 400 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 400 "mcsolver.m"
  }
#line 400 "mcsolver.m"
}

#line 393 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
#line 393 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 393 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 393 "mcsolver.m"
{
#line 393 "mcsolver.m"
  {
#line 393 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 393 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_37;

#line 393 "mcsolver.m"
    {
#line 393 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_37 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 393 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_37));
#line 393 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 393 "mcsolver.m"
  }
#line 393 "mcsolver.m"
}

#line 387 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
#line 387 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 387 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 387 "mcsolver.m"
{
#line 387 "mcsolver.m"
  {
#line 387 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 387 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 387 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_32;

#line 387 "mcsolver.m"
    {
#line 387 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_32 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 387 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_32));
#line 387 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 387 "mcsolver.m"
  }
#line 387 "mcsolver.m"
}

#line 112 "mcsolver.m"
MR_Word MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0(
#line 112 "mcsolver.m"
  MR_Word check_hlds__mcsolver__PCs_3)
#line 112 "mcsolver.m"
{
#line 382 "mcsolver.m"
  {
#line 382 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__SCs_4;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_128_128 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_129_129;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_130_130;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_138_138;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_144_144;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Eqvs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Assgts_6;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Impls_9;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__ComplexCstrts_13;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__PropGraph_14;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__ComplexCstrtsMap_17;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AssgtVars_22;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AndImplVars_25;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AndComplexCstrtVars_28;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AllVars_29;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_30_30;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_35_35;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_44_44;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_45_45;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_46_46;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_57_57;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_58_58;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_59_59;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_69_69;
#line 382 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 384 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 384 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_122_122;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_123_123;
#line 393 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_124_124;
#line 400 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_125_125;
#line 400 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_126_126;
#line 400 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_127_127;
#line 404 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv4_PropGraph_14;
#line 417 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv6_ComplexCstrtsMap_17;
#line 430 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv8_AssgtVars_22;
#line 437 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv10_AndImplVars_25;
#line 444 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv12_AndComplexCstrtVars_28;

#line 387 "mcsolver.m"
    {
#line 387 "mcsolver.m"
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 387 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
#line 387 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_1));
#line 387 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 387 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 387 "mcsolver.m"
    }
#line 387 "mcsolver.m"
    {
#line 387 "mcsolver.m"
      check_hlds__mcsolver__Assgts_6 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_116_116);
    }
#line 9887 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeCtorInfo_129_129 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0;
#line 393 "mcsolver.m"
    {
#line 393 "mcsolver.m"
      check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 393 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[3]));
#line 393 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_2));
#line 393 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 393 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 393 "mcsolver.m"
    }
#line 393 "mcsolver.m"
    check_hlds__mcsolver__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 393 "mcsolver.m"
    check_hlds__mcsolver__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 393 "mcsolver.m"
    check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 393 "mcsolver.m"
    check_hlds__mcsolver__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 393 "mcsolver.m"
    {
#line 393 "mcsolver.m"
      check_hlds__mcsolver__Impls_9 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__V_44_44);
    }
#line 9916 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeCtorInfo_130_130 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;
#line 400 "mcsolver.m"
    {
#line 400 "mcsolver.m"
      check_hlds__mcsolver__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 400 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[4]));
#line 400 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_3));
#line 400 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 400 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 400 "mcsolver.m"
    }
#line 400 "mcsolver.m"
    check_hlds__mcsolver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 400 "mcsolver.m"
    check_hlds__mcsolver__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 400 "mcsolver.m"
    check_hlds__mcsolver__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 400 "mcsolver.m"
    check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 400 "mcsolver.m"
    {
#line 400 "mcsolver.m"
      check_hlds__mcsolver__ComplexCstrts_13 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__V_45_45, check_hlds__mcsolver__V_46_46);
    }
#line 9945 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeInfo_138_138 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 412 "mcsolver.m"
    {
#line 412 "mcsolver.m"
      check_hlds__mcsolver__V_58_58 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
#line 412 "mcsolver.m"
    {
#line 412 "mcsolver.m"
      check_hlds__mcsolver__V_59_59 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
#line 412 "mcsolver.m"
    {
#line 412 "mcsolver.m"
      check_hlds__mcsolver__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 0) = ((MR_Box) (check_hlds__mcsolver__V_58_58));
#line 412 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 1) = ((MR_Box) (check_hlds__mcsolver__V_59_59));
#line 412 "mcsolver.m"
    }
#line 404 "mcsolver.m"
    {
#line 404 "mcsolver.m"
      check_hlds__mcsolver__conv4_PropGraph_14 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[6], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__V_57_57)));
    }
#line 404 "mcsolver.m"
    check_hlds__mcsolver__PropGraph_14 = ((MR_Word) check_hlds__mcsolver__conv4_PropGraph_14);
#line 425 "mcsolver.m"
    {
#line 425 "mcsolver.m"
      check_hlds__mcsolver__V_69_69 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_130_130);
    }
#line 417 "mcsolver.m"
    {
#line 417 "mcsolver.m"
      check_hlds__mcsolver__conv6_ComplexCstrtsMap_17 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[7], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__V_69_69)));
    }
#line 417 "mcsolver.m"
    check_hlds__mcsolver__ComplexCstrtsMap_17 = ((MR_Word) check_hlds__mcsolver__conv6_ComplexCstrtsMap_17);
#line 9986 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeInfo_144_144 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 430 "mcsolver.m"
    {
#line 430 "mcsolver.m"
      check_hlds__mcsolver__conv8_AssgtVars_22 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[8], check_hlds__mcsolver__Assgts_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 430 "mcsolver.m"
    check_hlds__mcsolver__AssgtVars_22 = ((MR_Word) check_hlds__mcsolver__conv8_AssgtVars_22);
#line 437 "mcsolver.m"
    {
#line 437 "mcsolver.m"
      check_hlds__mcsolver__conv10_AndImplVars_25 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[9], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__AssgtVars_22)));
    }
#line 437 "mcsolver.m"
    check_hlds__mcsolver__AndImplVars_25 = ((MR_Word) check_hlds__mcsolver__conv10_AndImplVars_25);
#line 444 "mcsolver.m"
    {
#line 444 "mcsolver.m"
      check_hlds__mcsolver__conv12_AndComplexCstrtVars_28 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[10], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__AndImplVars_25)));
    }
#line 444 "mcsolver.m"
    check_hlds__mcsolver__AndComplexCstrtVars_28 = ((MR_Word) check_hlds__mcsolver__conv12_AndComplexCstrtVars_28);
#line 451 "mcsolver.m"
    {
#line 451 "mcsolver.m"
      check_hlds__mcsolver__AllVars_29 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__AndComplexCstrtVars_28);
    }
#line 454 "mcsolver.m"
    {
#line 454 "mcsolver.m"
      check_hlds__mcsolver__SCs_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 454 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 0) = ((MR_Box) (check_hlds__mcsolver__AllVars_29));
#line 454 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 1) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 454 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 2) = ((MR_Box) (check_hlds__mcsolver__Assgts_6));
#line 454 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 3) = ((MR_Box) (check_hlds__mcsolver__PropGraph_14));
#line 454 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 4) = ((MR_Box) (check_hlds__mcsolver__ComplexCstrtsMap_17));
#line 454 "mcsolver.m"
    }
#line 382 "mcsolver.m"
    return check_hlds__mcsolver__SCs_4;
#line 382 "mcsolver.m"
  }
#line 112 "mcsolver.m"
}

#line 376 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 376 "mcsolver.m"
{
#line 376 "mcsolver.m"
  {
#line 376 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 376 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_31;

#line 376 "mcsolver.m"
    {
#line 376 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_31 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 376 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_31));
#line 376 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 376 "mcsolver.m"
  }
#line 376 "mcsolver.m"
}

#line 376 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 376 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 376 "mcsolver.m"
{
#line 376 "mcsolver.m"
  {
#line 376 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 376 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 376 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_14;

#line 376 "mcsolver.m"
    {
#line 376 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__2_14 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 376 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_14));
#line 376 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 376 "mcsolver.m"
  }
#line 376 "mcsolver.m"
}

#line 107 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0(
#line 107 "mcsolver.m"
  MR_Word check_hlds__mcsolver__DisjOfAssgts_4,
#line 107 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9,
#line 107 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_10)
#line 107 "mcsolver.m"
{
#line 374 "mcsolver.m"
  {
#line 374 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Assgtss_6;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_22_22;
#line 374 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;

#line 376 "mcsolver.m"
    {
#line 376 "mcsolver.m"
      check_hlds__mcsolver__Assgtss_6 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_6[0], check_hlds__mcsolver__DisjOfAssgts_4);
    }
#line 378 "mcsolver.m"
    {
#line 378 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(3), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__Assgtss_6));
#line 378 "mcsolver.m"
    }
#line 378 "mcsolver.m"
    check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 0)));
#line 378 "mcsolver.m"
    check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 1)));
#line 378 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 2)));
#line 378 "mcsolver.m"
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 3)));
#line 378 "mcsolver.m"
    {
#line 378 "mcsolver.m"
      check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 378 "mcsolver.m"
    }
#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      MR_Word base;
#line 377 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_10 = base;
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_22_22));
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 377 "mcsolver.m"
    }
#line 374 "mcsolver.m"
  }
#line 107 "mcsolver.m"
}

#line 102 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__exactly_one_3_p_0(
#line 102 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Xs_4,
#line 102 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10,
#line 102 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_11)
#line 102 "mcsolver.m"
{
#line 361 "mcsolver.m"
  {
#line 361 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 361 "mcsolver.m"
    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "mcsolver.m"
      {
#line 362 "mcsolver.m"
        {
#line 362 "mcsolver.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.exactly_one\'/3", (MR_String) "exactly_one of zero variables");
#line 362 "mcsolver.m"
          return;
        }
#line 361 "mcsolver.m"
      }
#line 361 "mcsolver.m"
    else
#line 361 "mcsolver.m"
      {
#line 361 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
#line 361 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

#line 361 "mcsolver.m"
        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "mcsolver.m"
          {
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_38_38;
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_39_39;
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_40_40;
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_41_41;
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_42_42;
#line 364 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_43_43;

#line 324 "mcsolver.m"
            {
#line 324 "mcsolver.m"
              check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__V_31_31));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 1));
#line 324 "mcsolver.m"
            }
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
#line 324 "mcsolver.m"
            check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
#line 324 "mcsolver.m"
            {
#line 324 "mcsolver.m"
              check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 324 "mcsolver.m"
            }
#line 324 "mcsolver.m"
            {
#line 324 "mcsolver.m"
              MR_Word base;
#line 324 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 324 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 324 "mcsolver.m"
            }
#line 364 "mcsolver.m"
          }
#line 361 "mcsolver.m"
        else
#line 367 "mcsolver.m"
          {
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_14_14;
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_15_15;
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_16_16;
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_23_23;
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_24_24;
#line 367 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_25_25;

#line 369 "mcsolver.m"
            {
#line 369 "mcsolver.m"
              check_hlds__mcsolver__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(2), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
#line 369 "mcsolver.m"
            }
#line 369 "mcsolver.m"
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
#line 369 "mcsolver.m"
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
#line 369 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
#line 369 "mcsolver.m"
            check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
#line 369 "mcsolver.m"
            {
#line 369 "mcsolver.m"
              check_hlds__mcsolver__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 1) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 369 "mcsolver.m"
            }
#line 368 "mcsolver.m"
            {
#line 368 "mcsolver.m"
              MR_Word base;
#line 368 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
#line 368 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 368 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 368 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 368 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 368 "mcsolver.m"
            }
#line 367 "mcsolver.m"
          }
#line 361 "mcsolver.m"
      }
#line 361 "mcsolver.m"
  }
#line 102 "mcsolver.m"
}

#line 97 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__at_most_one_3_p_0(
#line 97 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Xs_4,
#line 97 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
#line 97 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14)
#line 97 "mcsolver.m"
{
#line 345 "mcsolver.m"
  {
#line 345 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 345 "mcsolver.m"
    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
#line 345 "mcsolver.m"
    else
#line 345 "mcsolver.m"
      {
#line 345 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
#line 345 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

#line 345 "mcsolver.m"
        if ((check_hlds__mcsolver__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
#line 345 "mcsolver.m"
        else
#line 345 "mcsolver.m"
          {
#line 345 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 1)));
#line 345 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 0)));

#line 345 "mcsolver.m"
            if ((check_hlds__mcsolver__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "mcsolver.m"
              {
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_42_42;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_43_43;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_44_44;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_46_46;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_48_48;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_49_49;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_50_50;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_52_52;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_54_54;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_55_55;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_56_56;
#line 307 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_57_57;

#line 308 "mcsolver.m"
                {
#line 308 "mcsolver.m"
                  check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) ((MR_Integer) 1));
#line 308 "mcsolver.m"
                }
#line 308 "mcsolver.m"
                {
#line 308 "mcsolver.m"
                  check_hlds__mcsolver__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 308 "mcsolver.m"
                }
#line 308 "mcsolver.m"
                {
#line 308 "mcsolver.m"
                  check_hlds__mcsolver__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
#line 308 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 1) = ((MR_Box) ((MR_Integer) 1));
#line 309 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 309 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 0) = ((MR_Box) (check_hlds__mcsolver__V_50_50));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 1) = ((MR_Box) (check_hlds__mcsolver__V_52_52));
#line 309 "mcsolver.m"
                }
#line 310 "mcsolver.m"
                check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
#line 310 "mcsolver.m"
                check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
#line 310 "mcsolver.m"
                check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
#line 310 "mcsolver.m"
                check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
#line 310 "mcsolver.m"
                {
#line 310 "mcsolver.m"
                  check_hlds__mcsolver__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (check_hlds__mcsolver__V_49_49));
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
#line 310 "mcsolver.m"
                }
#line 308 "mcsolver.m"
                {
#line 308 "mcsolver.m"
                  check_hlds__mcsolver__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
#line 308 "mcsolver.m"
                }
#line 308 "mcsolver.m"
                {
#line 308 "mcsolver.m"
                  MR_Word base;
#line 308 "mcsolver.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_56_56));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 308 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_57_57));
#line 308 "mcsolver.m"
                }
#line 307 "mcsolver.m"
              }
#line 345 "mcsolver.m"
            else
#line 352 "mcsolver.m"
              {
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_18_18;
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_19_19;
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_20_20;
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_25_25;
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_26_26;
#line 352 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_27_27;

#line 354 "mcsolver.m"
                {
#line 354 "mcsolver.m"
                  check_hlds__mcsolver__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
#line 354 "mcsolver.m"
                }
#line 354 "mcsolver.m"
                check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
#line 354 "mcsolver.m"
                check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
#line 354 "mcsolver.m"
                check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
#line 354 "mcsolver.m"
                check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
#line 354 "mcsolver.m"
                {
#line 354 "mcsolver.m"
                  check_hlds__mcsolver__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_20_20));
#line 354 "mcsolver.m"
                }
#line 353 "mcsolver.m"
                {
#line 353 "mcsolver.m"
                  MR_Word base;
#line 353 "mcsolver.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 353 "mcsolver.m"
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
#line 353 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 353 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 353 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_27_27));
#line 353 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 353 "mcsolver.m"
                }
#line 352 "mcsolver.m"
              }
#line 345 "mcsolver.m"
          }
#line 345 "mcsolver.m"
      }
#line 345 "mcsolver.m"
  }
#line 97 "mcsolver.m"
}

#line 91 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(
#line 91 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 91 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Ys_6,
#line 91 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12,
#line 91 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_13)
#line 91 "mcsolver.m"
{
#line 330 "mcsolver.m"
  {
#line 330 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 330 "mcsolver.m"
    if ((check_hlds__mcsolver__Ys_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "mcsolver.m"
      {
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_38_38;
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_39_39;
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_40_40;
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_41_41;
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_42_42;
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_43_43;

#line 324 "mcsolver.m"
        {
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 324 "mcsolver.m"
        }
#line 324 "mcsolver.m"
        check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 324 "mcsolver.m"
        check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 324 "mcsolver.m"
        check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 324 "mcsolver.m"
        check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 324 "mcsolver.m"
        {
#line 324 "mcsolver.m"
          check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 324 "mcsolver.m"
        }
#line 324 "mcsolver.m"
        {
#line 324 "mcsolver.m"
          MR_Word base;
#line 324 "mcsolver.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 324 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 324 "mcsolver.m"
        }
#line 330 "mcsolver.m"
      }
#line 330 "mcsolver.m"
    else
#line 330 "mcsolver.m"
      {
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 1)));
#line 330 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 0)));

#line 330 "mcsolver.m"
        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "mcsolver.m"
          {
#line 289 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_54_54;
#line 289 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_60_60;
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_61_61;
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_62_62;
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_59_59;

#line 290 "mcsolver.m"
            {
#line 290 "mcsolver.m"
              check_hlds__mcsolver__V_54_54 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_55_55, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__V_31_31)));
            }
#line 290 "mcsolver.m"
            check_hlds__mcsolver__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 290 "mcsolver.m"
            check_hlds__mcsolver__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 290 "mcsolver.m"
            check_hlds__mcsolver__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 290 "mcsolver.m"
            check_hlds__mcsolver__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 290 "mcsolver.m"
            {
#line 290 "mcsolver.m"
              MR_Word base;
#line 290 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 290 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
#line 290 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_60_60));
#line 290 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_61_61));
#line 290 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_62_62));
#line 290 "mcsolver.m"
            }
#line 289 "mcsolver.m"
          }
#line 330 "mcsolver.m"
        else
#line 336 "mcsolver.m"
          {
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_16_16;
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_17_17;
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_18_18;
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_23_23;
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_24_24;
#line 336 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_25_25;

#line 338 "mcsolver.m"
            {
#line 338 "mcsolver.m"
              check_hlds__mcsolver__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_6));
#line 338 "mcsolver.m"
            }
#line 338 "mcsolver.m"
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 338 "mcsolver.m"
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 338 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 338 "mcsolver.m"
            check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 338 "mcsolver.m"
            {
#line 338 "mcsolver.m"
              check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 338 "mcsolver.m"
            }
#line 337 "mcsolver.m"
            {
#line 337 "mcsolver.m"
              MR_Word base;
#line 337 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 337 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 337 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 337 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 337 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 337 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 337 "mcsolver.m"
            }
#line 336 "mcsolver.m"
          }
#line 330 "mcsolver.m"
      }
#line 330 "mcsolver.m"
  }
#line 91 "mcsolver.m"
}

#line 86 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__assign_4_p_0(
#line 86 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 86 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_6,
#line 86 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
#line 86 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
#line 86 "mcsolver.m"
{
#line 323 "mcsolver.m"
  {
#line 323 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_14_14;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 323 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;

#line 324 "mcsolver.m"
    {
#line 324 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_6));
#line 324 "mcsolver.m"
    }
#line 324 "mcsolver.m"
    check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 324 "mcsolver.m"
    check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 324 "mcsolver.m"
    check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 324 "mcsolver.m"
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 324 "mcsolver.m"
    {
#line 324 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 324 "mcsolver.m"
    }
#line 324 "mcsolver.m"
    {
#line 324 "mcsolver.m"
      MR_Word base;
#line 324 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 324 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 324 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 324 "mcsolver.m"
    }
#line 323 "mcsolver.m"
  }
#line 86 "mcsolver.m"
}

#line 80 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__different_4_p_0(
#line 80 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 80 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Y_6,
#line 80 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
#line 80 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
#line 80 "mcsolver.m"
{
#line 314 "mcsolver.m"
  {
#line 314 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_29_29;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_30_30;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_35_35;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_36_36;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_37_37;
#line 314 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_38_38;

#line 315 "mcsolver.m"
    {
#line 315 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 315 "mcsolver.m"
    }
#line 315 "mcsolver.m"
    {
#line 315 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 315 "mcsolver.m"
    }
#line 315 "mcsolver.m"
    {
#line 315 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 315 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 316 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 1));
#line 316 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 316 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 1) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 317 "mcsolver.m"
    }
#line 318 "mcsolver.m"
    {
#line 318 "mcsolver.m"
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 318 "mcsolver.m"
    }
#line 319 "mcsolver.m"
    check_hlds__mcsolver__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 319 "mcsolver.m"
    check_hlds__mcsolver__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 319 "mcsolver.m"
    check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 319 "mcsolver.m"
    check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 319 "mcsolver.m"
    {
#line 319 "mcsolver.m"
      check_hlds__mcsolver__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 0) = ((MR_Box) (check_hlds__mcsolver__V_30_30));
#line 319 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 1) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 319 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 1) = ((MR_Box) (check_hlds__mcsolver__V_29_29));
#line 317 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 316 "mcsolver.m"
    }
#line 315 "mcsolver.m"
    {
#line 315 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 315 "mcsolver.m"
    }
#line 315 "mcsolver.m"
    {
#line 315 "mcsolver.m"
      MR_Word base;
#line 315 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_36_36));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_37_37));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 315 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 315 "mcsolver.m"
    }
#line 314 "mcsolver.m"
  }
#line 80 "mcsolver.m"
}

#line 74 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__not_both_4_p_0(
#line 74 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 74 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Y_6,
#line 74 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
#line 74 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
#line 74 "mcsolver.m"
{
#line 307 "mcsolver.m"
  {
#line 307 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_25_25;
#line 307 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_26_26;

#line 308 "mcsolver.m"
    {
#line 308 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 308 "mcsolver.m"
    }
#line 308 "mcsolver.m"
    {
#line 308 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 308 "mcsolver.m"
    }
#line 308 "mcsolver.m"
    {
#line 308 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 308 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 309 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 309 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 309 "mcsolver.m"
    }
#line 310 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 310 "mcsolver.m"
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 310 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 310 "mcsolver.m"
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 310 "mcsolver.m"
    {
#line 310 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 310 "mcsolver.m"
    }
#line 308 "mcsolver.m"
    {
#line 308 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 308 "mcsolver.m"
    }
#line 308 "mcsolver.m"
    {
#line 308 "mcsolver.m"
      MR_Word base;
#line 308 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 308 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 308 "mcsolver.m"
    }
#line 307 "mcsolver.m"
  }
#line 74 "mcsolver.m"
}

#line 68 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__implies_4_p_0(
#line 68 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 68 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Y_6,
#line 68 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
#line 68 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
#line 68 "mcsolver.m"
{
#line 300 "mcsolver.m"
  {
#line 300 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_25_25;
#line 300 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_26_26;

#line 301 "mcsolver.m"
    {
#line 301 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 301 "mcsolver.m"
    }
#line 301 "mcsolver.m"
    {
#line 301 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 1));
#line 301 "mcsolver.m"
    }
#line 301 "mcsolver.m"
    {
#line 301 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 301 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 302 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 302 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 302 "mcsolver.m"
    }
#line 303 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 303 "mcsolver.m"
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 303 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 303 "mcsolver.m"
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 303 "mcsolver.m"
    {
#line 303 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 303 "mcsolver.m"
    }
#line 301 "mcsolver.m"
    {
#line 301 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 301 "mcsolver.m"
    }
#line 301 "mcsolver.m"
    {
#line 301 "mcsolver.m"
      MR_Word base;
#line 301 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 301 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 301 "mcsolver.m"
    }
#line 300 "mcsolver.m"
  }
#line 68 "mcsolver.m"
}

#line 296 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 296 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 296 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 296 "mcsolver.m"
{
#line 296 "mcsolver.m"
  {
#line 296 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 296 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

#line 296 "mcsolver.m"
    {
#line 296 "mcsolver.m"
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
#line 296 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
#line 296 "mcsolver.m"
  }
#line 296 "mcsolver.m"
}

#line 63 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0(
#line 63 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 63 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
#line 63 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3)
#line 63 "mcsolver.m"
{
#line 294 "mcsolver.m"
  {
#line 294 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 294 "mcsolver.m"
    if ((check_hlds__mcsolver__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
#line 294 "mcsolver.m"
    else
#line 295 "mcsolver.m"
      {
#line 295 "mcsolver.m"
        MR_Word check_hlds__mcsolver__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12;
#line 296 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

#line 296 "mcsolver.m"
        {
#line 296 "mcsolver.m"
          check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
#line 296 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__equivalent_3_p_0_1));
#line 296 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 3) = ((MR_Box) (check_hlds__mcsolver__X_7));
#line 296 "mcsolver.m"
        }
#line 296 "mcsolver.m"
        {
#line 296 "mcsolver.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_12_12, check_hlds__mcsolver__Xs_8, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
        }
#line 296 "mcsolver.m"
        *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
#line 295 "mcsolver.m"
      }
#line 294 "mcsolver.m"
  }
#line 63 "mcsolver.m"
}

#line 57 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__equivalent_4_p_0(
#line 57 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5,
#line 57 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Y_6,
#line 57 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
#line 57 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
#line 57 "mcsolver.m"
{
#line 289 "mcsolver.m"
  {
#line 289 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 289 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 289 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;

#line 290 "mcsolver.m"
    {
#line 290 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__Y_6)));
    }
#line 290 "mcsolver.m"
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 290 "mcsolver.m"
    check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 290 "mcsolver.m"
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 290 "mcsolver.m"
    check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 290 "mcsolver.m"
    {
#line 290 "mcsolver.m"
      MR_Word base;
#line 290 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 290 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 290 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 290 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 290 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 290 "mcsolver.m"
    }
#line 289 "mcsolver.m"
  }
#line 57 "mcsolver.m"
}

#line 235 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 235 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 235 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 235 "mcsolver.m"
{
#line 235 "mcsolver.m"
  {
#line 235 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 235 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

#line 235 "mcsolver.m"
    {
#line 235 "mcsolver.m"
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
#line 235 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
#line 235 "mcsolver.m"
  }
#line 235 "mcsolver.m"
}

#line 51 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0(
#line 51 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Constraints_4,
#line 51 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_6,
#line 51 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_7)
#line 51 "mcsolver.m"
{
#line 234 "mcsolver.m"
  {
#line 234 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 235 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7;

#line 235 "mcsolver.m"
    {
#line 235 "mcsolver.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[4], check_hlds__mcsolver__Constraints_4, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_6)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
    }
#line 235 "mcsolver.m"
    *check_hlds__mcsolver__STATE_VARIABLE_PCs_7 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
#line 234 "mcsolver.m"
  }
#line 51 "mcsolver.m"
}

#line 46 "mcsolver.m"
MR_Word MR_CALL 
check_hlds__mcsolver__new_prep_cstrts_0_f_0(void)
#line 46 "mcsolver.m"
{
#line 227 "mcsolver.m"
  {
#line 227 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 227 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__1_1;
#line 227 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_2_2;

#line 227 "mcsolver.m"
    {
#line 227 "mcsolver.m"
      check_hlds__mcsolver__V_2_2 = mercury__eqvclass__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0]);
    }
#line 227 "mcsolver.m"
    {
#line 227 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 227 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__mcsolver__V_2_2));
#line 227 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "mcsolver.m"
    }
#line 227 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__1_1;
#line 227 "mcsolver.m"
  }
#line 46 "mcsolver.m"
}

void mercury__check_hlds__mcsolver__init(void)
{
}

void mercury__check_hlds__mcsolver__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgts_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrts_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_eqv_vars_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impls_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvar_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvars_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0);
	MR_register_type_ctor_info(&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0);
}

void mercury__check_hlds__mcsolver__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mcsolver. */
