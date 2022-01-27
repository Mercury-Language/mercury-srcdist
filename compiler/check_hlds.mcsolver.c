/*
** Automatically generated from `mcsolver.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "tree_bitset.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 748 "mcsolver.m"
struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s {
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5;
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6;
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
#line 748 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8;
#line 748 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__solve_var_4_p_0_env_0__cont;
#line 748 "mcsolver.m"
  void * check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr;
#line 754 "mcsolver.m"
  MR_bool check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded;
#line 755 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9;
#line 755 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19;
#line 748 "mcsolver.m"
};

#line 746 "mcsolver.m"
struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s {
#line 746 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3;
#line 746 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__solve_2_p_0_3_env_0__cont;
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr;
#line 746 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8;
#line 746 "mcsolver.m"
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
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56;
#line 505 "mcsolver.m"
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57;
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5;
#line 116 "mcsolver.m"
};


#line 200 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 203 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 206 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 209 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 212 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 215 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

#line 218 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 221 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 224 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 227 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 230 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 233 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 236 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 239 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 242 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 245 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2];

#line 248 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0;

#line 251 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1];

#line 254 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1];

#line 257 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1];

#line 260 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1];

#line 263 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 266 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2];

#line 269 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0;

#line 272 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1];

#line 275 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1;

#line 278 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1];

#line 281 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2;

#line 284 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 287 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1];

#line 290 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3;

#line 293 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1];

#line 296 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1];

#line 299 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1];

#line 302 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1];

#line 305 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0[4];

#line 308 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4];

#line 311 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4];

#line 314 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

#line 317 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 320 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2];

#line 323 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0;

#line 326 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1];

#line 329 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1];

#line 332 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1];

#line 335 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1];

#line 338 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0;

#line 341 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4];

#line 344 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4];

#line 347 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0;

#line 350 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1];

#line 353 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1];

#line 356 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1];

#line 359 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1];

#line 362 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 365 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2];

#line 368 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2];

#line 371 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0;

#line 374 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1];

#line 377 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1];

#line 380 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1];

#line 383 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1];

#line 386 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5];

#line 389 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5];

#line 392 "check_hlds.mcsolver.c"
static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0;

#line 395 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1];

#line 398 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1];

#line 401 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1];

#line 404 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1];

#line 407 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
#line 410 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 412 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 415 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
#line 418 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 420 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 422 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 425 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
#line 428 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 430 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 433 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
#line 436 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 438 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 440 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 443 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
#line 446 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 448 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 451 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
#line 454 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 456 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 458 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 461 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
#line 464 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 466 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 469 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
#line 472 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 474 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 476 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 479 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
#line 482 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 484 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 487 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
#line 490 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 492 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 494 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 497 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
#line 500 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 502 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 505 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
#line 508 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 510 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 512 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 515 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
#line 518 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 520 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 523 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
#line 526 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 528 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 530 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 533 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
#line 536 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 538 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 541 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
#line 544 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 546 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 548 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 551 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
#line 554 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 556 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 559 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
#line 562 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 564 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 566 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 569 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
#line 572 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 574 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 577 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
#line 580 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 582 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 584 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 587 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
#line 590 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 592 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 595 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
#line 598 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 600 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 602 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 605 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
#line 608 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 610 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 613 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
#line 616 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 618 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 620 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 623 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
#line 626 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 628 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 631 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
#line 634 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 636 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 638 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

#line 680 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__680__1_1_f_0(
#line 680 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_66);

#line 669 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__669__1_2_p_0(
#line 669 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 669 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_70);

#line 630 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__630__1_1_f_0(
#line 630 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21);

#line 685 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__685__1_3_p_0(
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_95);

#line 660 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__660__1_1_f_0(
#line 660 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48);

#line 546 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__546__1_4_p_0(
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Val_6,
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_15,
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_16,
#line 546 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_17);

#line 546 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0_1(
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 546 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 530 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0(
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Equivalences_6,
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_17,
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_18,
#line 530 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_19);

#line 497 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__2_2_f_0(
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_28);

#line 497 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__1_2_f_0(
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_22);

#line 478 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__2_3_f_0(
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_24);

#line 478 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__1_2_f_0(
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_14);

#line 258 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0_1(
#line 258 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 258 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 258 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

#line 256 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0(
#line 256 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_16,
#line 256 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_17);

#line 258 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_p_0(
#line 258 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_19,
#line 258 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_20);

#line 445 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__445__1_2_f_0(
#line 445 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_83,
#line 445 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_84);

#line 438 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__438__1_2_f_0(
#line 438 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_76,
#line 438 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_77);

#line 431 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__431__1_2_f_0(
#line 431 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_71,
#line 431 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_72);

#line 420 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0_1(
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 418 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0(
#line 418 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 418 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_62);

#line 420 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__420__1_3_f_0(
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_65,
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_66);

#line 405 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__405__1_2_f_0(
#line 405 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48,
#line 405 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_49);

#line 394 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__394__1_2_f_0(
#line 394 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 394 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_36);

#line 388 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__388__1_2_f_0(
#line 388 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 388 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_31);

#line 377 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__2_2_f_0(
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_30);

#line 377 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__1_1_f_0(
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13);

#line 173 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
#line 173 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 173 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 147 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
#line 147 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 147 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 146 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
#line 146 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 146 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 146 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 183 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
#line 183 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 183 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 160 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
#line 160 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 160 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 164 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
#line 164 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 164 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 151 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
#line 151 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 151 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 141 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
#line 141 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 141 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 140 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
#line 140 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

#line 140 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 140 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 777 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
#line 777 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs_1,
#line 777 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 755 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
#line 755 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 748 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_6,
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 748 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8,
#line 748 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 748 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr);

#line 680 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
#line 680 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 680 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 668 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
#line 668 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 668 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 630 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
#line 630 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 630 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 685 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
#line 685 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 685 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 660 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
#line 660 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 660 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 613 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_1,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 613 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_6);

#line 606 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 606 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 602 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_7,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_8,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_9,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_11,
#line 602 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_12);

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 566 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_8,
#line 566 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_9);

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 557 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Assgts_6,
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 557 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8);

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 497 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 497 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 484 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
#line 484 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 484 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

#line 478 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 478 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 472 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
#line 472 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1);

#line 460 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
#line 460 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_4,
#line 460 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5);

#line 297 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 297 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 272 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
#line 272 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 272 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
#line 272 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3);

#line 256 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
#line 256 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 256 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 256 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

#line 236 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 236 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 241 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
#line 241 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Constraint_4,
#line 241 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
#line 241 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14);

#line 530 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 530 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 746 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
#line 746 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr);

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 505 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
#line 505 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg);

#line 445 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 438 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 431 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 418 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 405 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

#line 401 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
#line 401 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 401 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 394 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
#line 394 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 394 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 388 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
#line 388 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 388 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 377 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 377 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

#line 297 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 297 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

#line 236 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 236 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9];


#line 755 "mcsolver.m"
/* sealed */ struct check_hlds__mcsolver__vector_common_type_8_0_s {
#line 755 "mcsolver.m"
  const MR_Word check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
#line 755 "mcsolver.m"
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
    ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0_1)),
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
  /* row 0 */
  {
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_Integer) 0
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1972 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1980 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1988 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1997 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2006 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2016 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0
  }
};

#line 2024 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2032 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2040 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2048 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2057 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2065 "check_hlds.mcsolver.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2074 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2082 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2093 "check_hlds.mcsolver.c"
static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2103 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2109 "check_hlds.mcsolver.c"
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

#line 2124 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

#line 2129 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0
  }
};

#line 2138 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

#line 2143 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1] = {
  (MR_Integer) 0
};

#line 2148 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgt",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0
};

#line 2169 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2177 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgts",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2198 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2204 "check_hlds.mcsolver.c"
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

#line 2219 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2224 "check_hlds.mcsolver.c"
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

#line 2239 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

#line 2244 "check_hlds.mcsolver.c"
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

#line 2259 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2267 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2272 "check_hlds.mcsolver.c"
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

#line 2287 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0
};

#line 2292 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1
};

#line 2297 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

#line 2302 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3
};

#line 2307 "check_hlds.mcsolver.c"
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

#line 2331 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

#line 2339 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2347 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0
};

#line 2368 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

#line 2377 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2398 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrts",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2419 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 2427 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_eqv_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____eqv_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____eqv_vars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "eqv_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2448 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2454 "check_hlds.mcsolver.c"
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

#line 2469 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

#line 2474 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0
  }
};

#line 2483 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

#line 2488 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1] = {
  (MR_Integer) 0
};

#line 2493 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____impl_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impl_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impl",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0
};

#line 2514 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0
  }
};

#line 2522 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____impls_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impls_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impls",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2543 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvar_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvar_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvar",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2564 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2585 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

#line 2593 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4] = {
  (MR_String) "prep_eqv_vars",
  (MR_String) "prep_assgts",
  (MR_String) "prep_impls",
  (MR_String) "prep_complex_cstrts"
};

#line 2601 "check_hlds.mcsolver.c"
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

#line 2616 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

#line 2621 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0
  }
};

#line 2630 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

#line 2635 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1] = {
  (MR_Integer) 0
};

#line 2640 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prep_cstrts",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0
};

#line 2661 "check_hlds.mcsolver.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

#line 2670 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

#line 2676 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2] = {
  (MR_String) "prop_graph_yes",
  (MR_String) "prop_graph_no"
};

#line 2682 "check_hlds.mcsolver.c"
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

#line 2697 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

#line 2702 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0
  }
};

#line 2711 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

#line 2716 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1] = {
  (MR_Integer) 0
};

#line 2721 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prop_graph_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prop_graph_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prop_graph",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0
};

#line 2742 "check_hlds.mcsolver.c"
static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

#line 2751 "check_hlds.mcsolver.c"
static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5] = {
  (MR_String) "vars",
  (MR_String) "eqv_vars",
  (MR_String) "assgts",
  (MR_String) "prop_graph",
  (MR_String) "complex_cstrt_map"
};

#line 2760 "check_hlds.mcsolver.c"
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

#line 2775 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

#line 2780 "check_hlds.mcsolver.c"
static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0
  }
};

#line 2789 "check_hlds.mcsolver.c"
static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

#line 2794 "check_hlds.mcsolver.c"
static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1] = {
  (MR_Integer) 0
};

#line 2799 "check_hlds.mcsolver.c"
const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "solver_cstrts",
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0
  },
  {
    check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0
};

#line 2820 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
#line 2823 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2825 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2827 "check_hlds.mcsolver.c"
{
#line 2829 "check_hlds.mcsolver.c"
  {
#line 2831 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2834 "check_hlds.mcsolver.c"
    {
#line 2836 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2839 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2841 "check_hlds.mcsolver.c"
  }
#line 2843 "check_hlds.mcsolver.c"
}

#line 2846 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
#line 2849 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2851 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2853 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2855 "check_hlds.mcsolver.c"
{
#line 2857 "check_hlds.mcsolver.c"
  {
#line 2859 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2862 "check_hlds.mcsolver.c"
    {
#line 2864 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2867 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2869 "check_hlds.mcsolver.c"
  }
#line 2871 "check_hlds.mcsolver.c"
}

#line 2874 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
#line 2877 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2879 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2881 "check_hlds.mcsolver.c"
{
#line 2883 "check_hlds.mcsolver.c"
  {
#line 2885 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2888 "check_hlds.mcsolver.c"
    {
#line 2890 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2893 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2895 "check_hlds.mcsolver.c"
  }
#line 2897 "check_hlds.mcsolver.c"
}

#line 2900 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
#line 2903 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2905 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2907 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2909 "check_hlds.mcsolver.c"
{
#line 2911 "check_hlds.mcsolver.c"
  {
#line 2913 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2916 "check_hlds.mcsolver.c"
    {
#line 2918 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____assgts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2921 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2923 "check_hlds.mcsolver.c"
  }
#line 2925 "check_hlds.mcsolver.c"
}

#line 2928 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
#line 2931 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2933 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2935 "check_hlds.mcsolver.c"
{
#line 2937 "check_hlds.mcsolver.c"
  {
#line 2939 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2942 "check_hlds.mcsolver.c"
    {
#line 2944 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 2947 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 2949 "check_hlds.mcsolver.c"
  }
#line 2951 "check_hlds.mcsolver.c"
}

#line 2954 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
#line 2957 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 2959 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 2961 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 2963 "check_hlds.mcsolver.c"
{
#line 2965 "check_hlds.mcsolver.c"
  {
#line 2967 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 2970 "check_hlds.mcsolver.c"
    {
#line 2972 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 2975 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 2977 "check_hlds.mcsolver.c"
  }
#line 2979 "check_hlds.mcsolver.c"
}

#line 2982 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
#line 2985 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 2987 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 2989 "check_hlds.mcsolver.c"
{
#line 2991 "check_hlds.mcsolver.c"
  {
#line 2993 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 2996 "check_hlds.mcsolver.c"
    {
#line 2998 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3001 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3003 "check_hlds.mcsolver.c"
  }
#line 3005 "check_hlds.mcsolver.c"
}

#line 3008 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
#line 3011 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3013 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3015 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3017 "check_hlds.mcsolver.c"
{
#line 3019 "check_hlds.mcsolver.c"
  {
#line 3021 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3024 "check_hlds.mcsolver.c"
    {
#line 3026 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3029 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3031 "check_hlds.mcsolver.c"
  }
#line 3033 "check_hlds.mcsolver.c"
}

#line 3036 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
#line 3039 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3041 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3043 "check_hlds.mcsolver.c"
{
#line 3045 "check_hlds.mcsolver.c"
  {
#line 3047 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3050 "check_hlds.mcsolver.c"
    {
#line 3052 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3055 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3057 "check_hlds.mcsolver.c"
  }
#line 3059 "check_hlds.mcsolver.c"
}

#line 3062 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
#line 3065 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3067 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3069 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3071 "check_hlds.mcsolver.c"
{
#line 3073 "check_hlds.mcsolver.c"
  {
#line 3075 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3078 "check_hlds.mcsolver.c"
    {
#line 3080 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____complex_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3083 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3085 "check_hlds.mcsolver.c"
  }
#line 3087 "check_hlds.mcsolver.c"
}

#line 3090 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
#line 3093 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3095 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3097 "check_hlds.mcsolver.c"
{
#line 3099 "check_hlds.mcsolver.c"
  {
#line 3101 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3104 "check_hlds.mcsolver.c"
    {
#line 3106 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____eqv_vars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3109 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3111 "check_hlds.mcsolver.c"
  }
#line 3113 "check_hlds.mcsolver.c"
}

#line 3116 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
#line 3119 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3121 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3123 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3125 "check_hlds.mcsolver.c"
{
#line 3127 "check_hlds.mcsolver.c"
  {
#line 3129 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3132 "check_hlds.mcsolver.c"
    {
#line 3134 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____eqv_vars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3137 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3139 "check_hlds.mcsolver.c"
  }
#line 3141 "check_hlds.mcsolver.c"
}

#line 3144 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
#line 3147 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3149 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3151 "check_hlds.mcsolver.c"
{
#line 3153 "check_hlds.mcsolver.c"
  {
#line 3155 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3158 "check_hlds.mcsolver.c"
    {
#line 3160 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impl_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3163 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3165 "check_hlds.mcsolver.c"
  }
#line 3167 "check_hlds.mcsolver.c"
}

#line 3170 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
#line 3173 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3175 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3177 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3179 "check_hlds.mcsolver.c"
{
#line 3181 "check_hlds.mcsolver.c"
  {
#line 3183 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3186 "check_hlds.mcsolver.c"
    {
#line 3188 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____impl_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3191 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3193 "check_hlds.mcsolver.c"
  }
#line 3195 "check_hlds.mcsolver.c"
}

#line 3198 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
#line 3201 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3203 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3205 "check_hlds.mcsolver.c"
{
#line 3207 "check_hlds.mcsolver.c"
  {
#line 3209 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3212 "check_hlds.mcsolver.c"
    {
#line 3214 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impls_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3217 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3219 "check_hlds.mcsolver.c"
  }
#line 3221 "check_hlds.mcsolver.c"
}

#line 3224 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
#line 3227 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3229 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3231 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3233 "check_hlds.mcsolver.c"
{
#line 3235 "check_hlds.mcsolver.c"
  {
#line 3237 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3240 "check_hlds.mcsolver.c"
    {
#line 3242 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____impls_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3245 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3247 "check_hlds.mcsolver.c"
  }
#line 3249 "check_hlds.mcsolver.c"
}

#line 3252 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
#line 3255 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3257 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3259 "check_hlds.mcsolver.c"
{
#line 3261 "check_hlds.mcsolver.c"
  {
#line 3263 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3266 "check_hlds.mcsolver.c"
    {
#line 3268 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvar_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3271 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3273 "check_hlds.mcsolver.c"
  }
#line 3275 "check_hlds.mcsolver.c"
}

#line 3278 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
#line 3281 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3283 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3285 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3287 "check_hlds.mcsolver.c"
{
#line 3289 "check_hlds.mcsolver.c"
  {
#line 3291 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3294 "check_hlds.mcsolver.c"
    {
#line 3296 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____mcvar_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3299 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3301 "check_hlds.mcsolver.c"
  }
#line 3303 "check_hlds.mcsolver.c"
}

#line 3306 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
#line 3309 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3311 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3313 "check_hlds.mcsolver.c"
{
#line 3315 "check_hlds.mcsolver.c"
  {
#line 3317 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3320 "check_hlds.mcsolver.c"
    {
#line 3322 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3325 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3327 "check_hlds.mcsolver.c"
  }
#line 3329 "check_hlds.mcsolver.c"
}

#line 3332 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
#line 3335 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3337 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3339 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3341 "check_hlds.mcsolver.c"
{
#line 3343 "check_hlds.mcsolver.c"
  {
#line 3345 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3348 "check_hlds.mcsolver.c"
    {
#line 3350 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____mcvars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3353 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3355 "check_hlds.mcsolver.c"
  }
#line 3357 "check_hlds.mcsolver.c"
}

#line 3360 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
#line 3363 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3365 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3367 "check_hlds.mcsolver.c"
{
#line 3369 "check_hlds.mcsolver.c"
  {
#line 3371 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3374 "check_hlds.mcsolver.c"
    {
#line 3376 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prep_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3379 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3381 "check_hlds.mcsolver.c"
  }
#line 3383 "check_hlds.mcsolver.c"
}

#line 3386 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
#line 3389 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3391 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3393 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3395 "check_hlds.mcsolver.c"
{
#line 3397 "check_hlds.mcsolver.c"
  {
#line 3399 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3402 "check_hlds.mcsolver.c"
    {
#line 3404 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____prep_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3407 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3409 "check_hlds.mcsolver.c"
  }
#line 3411 "check_hlds.mcsolver.c"
}

#line 3414 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
#line 3417 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3419 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3421 "check_hlds.mcsolver.c"
{
#line 3423 "check_hlds.mcsolver.c"
  {
#line 3425 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3428 "check_hlds.mcsolver.c"
    {
#line 3430 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prop_graph_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3433 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3435 "check_hlds.mcsolver.c"
  }
#line 3437 "check_hlds.mcsolver.c"
}

#line 3440 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
#line 3443 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3445 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3447 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3449 "check_hlds.mcsolver.c"
{
#line 3451 "check_hlds.mcsolver.c"
  {
#line 3453 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3456 "check_hlds.mcsolver.c"
    {
#line 3458 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____prop_graph_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3461 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3463 "check_hlds.mcsolver.c"
  }
#line 3465 "check_hlds.mcsolver.c"
}

#line 3468 "check_hlds.mcsolver.c"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
#line 3471 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 3473 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 3475 "check_hlds.mcsolver.c"
{
#line 3477 "check_hlds.mcsolver.c"
  {
#line 3479 "check_hlds.mcsolver.c"
    MR_bool check_hlds__mcsolver__succeeded;

#line 3482 "check_hlds.mcsolver.c"
    {
#line 3484 "check_hlds.mcsolver.c"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____solver_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 3487 "check_hlds.mcsolver.c"
    return check_hlds__mcsolver__succeeded;
#line 3489 "check_hlds.mcsolver.c"
  }
#line 3491 "check_hlds.mcsolver.c"
}

#line 3494 "check_hlds.mcsolver.c"
static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
#line 3497 "check_hlds.mcsolver.c"
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
#line 3499 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 3501 "check_hlds.mcsolver.c"
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
#line 3503 "check_hlds.mcsolver.c"
{
#line 3505 "check_hlds.mcsolver.c"
  {
#line 3507 "check_hlds.mcsolver.c"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

#line 3510 "check_hlds.mcsolver.c"
    {
#line 3512 "check_hlds.mcsolver.c"
      check_hlds__mcsolver____Compare____solver_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
#line 3515 "check_hlds.mcsolver.c"
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
#line 3517 "check_hlds.mcsolver.c"
  }
#line 3519 "check_hlds.mcsolver.c"
}

#line 680 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__680__1_1_f_0(
#line 680 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_66)
#line 680 "mcsolver.m"
{
#line 680 "mcsolver.m"
  {
#line 680 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 680 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_67;

#line 680 "mcsolver.m"
    {
#line 680 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_67, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_66));
#line 680 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_67, 1) = ((MR_Box) ((MR_Integer) 0));
#line 680 "mcsolver.m"
    }
#line 680 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_67;
#line 680 "mcsolver.m"
  }
#line 680 "mcsolver.m"
}

#line 669 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__669__1_2_p_0(
#line 669 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 669 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_70)
#line 669 "mcsolver.m"
{
#line 669 "mcsolver.m"
  {
#line 669 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 669 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_112_112;
#line 669 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V_112_112;

#line 669 "mcsolver.m"
    {
#line 669 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__Bs0_5, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_70)), &check_hlds__mcsolver__conv0_V_112_112);
    }
#line 669 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 669 "mcsolver.m"
      {
#line 669 "mcsolver.m"
        check_hlds__mcsolver__V_112_112 = ((MR_Word) check_hlds__mcsolver__conv0_V_112_112);
#line 669 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 669 "mcsolver.m"
      }
#line 669 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 669 "mcsolver.m"
      check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == check_hlds__mcsolver__V_112_112);
#line 669 "mcsolver.m"
    check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 669 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 669 "mcsolver.m"
  }
#line 669 "mcsolver.m"
}

#line 630 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__630__1_1_f_0(
#line 630 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21)
#line 630 "mcsolver.m"
{
#line 630 "mcsolver.m"
  {
#line 630 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 630 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_22;

#line 630 "mcsolver.m"
    {
#line 630 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_21));
#line 630 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 630 "mcsolver.m"
    }
#line 630 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_22;
#line 630 "mcsolver.m"
  }
#line 630 "mcsolver.m"
}

#line 685 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__685__1_3_p_0(
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 685 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_95)
#line 685 "mcsolver.m"
{
#line 685 "mcsolver.m"
  {
#line 685 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 685 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_96_96;
#line 685 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_97_97;

#line 687 "mcsolver.m"
    {
#line 687 "mcsolver.m"
      check_hlds__mcsolver__V_97_97 = mercury__bool__not_1_f_0(check_hlds__mcsolver__V_3);
    }
#line 687 "mcsolver.m"
    {
#line 687 "mcsolver.m"
      check_hlds__mcsolver__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 0) = ((MR_Box) (check_hlds__mcsolver__X_2));
#line 687 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 1) = ((MR_Box) (check_hlds__mcsolver__V_97_97));
#line 687 "mcsolver.m"
    }
#line 687 "mcsolver.m"
    {
#line 687 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, ((MR_Box) (check_hlds__mcsolver__V_96_96)), check_hlds__mcsolver__HeadVar__3_95);
    }
#line 685 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 685 "mcsolver.m"
  }
#line 685 "mcsolver.m"
}

#line 660 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__660__1_1_f_0(
#line 660 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48)
#line 660 "mcsolver.m"
{
#line 660 "mcsolver.m"
  {
#line 660 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 660 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_49;

#line 660 "mcsolver.m"
    {
#line 660 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, 0) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_48));
#line 660 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 660 "mcsolver.m"
    }
#line 660 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_49;
#line 660 "mcsolver.m"
  }
#line 660 "mcsolver.m"
}

#line 546 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__546__1_4_p_0(
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Val_6,
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_15,
#line 546 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_16,
#line 546 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_17)
#line 546 "mcsolver.m"
{
#line 546 "mcsolver.m"
  {
#line 546 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 548 "mcsolver.m"
    {
#line 548 "mcsolver.m"
      mercury__map__set_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_15)), ((MR_Box) (check_hlds__mcsolver__Val_6)), check_hlds__mcsolver__HeadVar__3_16, check_hlds__mcsolver__HeadVar__4_17);
#line 548 "mcsolver.m"
      return;
    }
#line 546 "mcsolver.m"
  }
#line 546 "mcsolver.m"
}

#line 546 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0_1(
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 546 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 546 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 546 "mcsolver.m"
{
#line 546 "mcsolver.m"
  {
#line 546 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 546 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__4_17;

#line 546 "mcsolver.m"
    {
#line 546 "mcsolver.m"
      check_hlds__mcsolver__IntroducedFrom__pred__bind_all__546__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv1_HeadVar__4_17);
    }
#line 546 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__4_17));
#line 546 "mcsolver.m"
  }
#line 546 "mcsolver.m"
}

#line 530 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0(
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Equivalences_6,
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_17,
#line 530 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_18,
#line 530 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__4_19)
#line 530 "mcsolver.m"
{
#line 530 "mcsolver.m"
  {
#line 530 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_28_28 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__EquivVars_10;
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_11;
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_20_20;
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_41_41;
#line 534 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_Val_11;
#line 546 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv2_HeadVar__4_19;

#line 532 "mcsolver.m"
    {
#line 532 "mcsolver.m"
      check_hlds__mcsolver__V_20_20 = mercury__eqvclass__get_equivalent_elements_2_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__Equivalences_6, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_17)));
    }
#line 532 "mcsolver.m"
    {
#line 532 "mcsolver.m"
      check_hlds__mcsolver__EquivVars_10 = mercury__set__to_sorted_list_1_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__V_20_20);
    }
#line 534 "mcsolver.m"
    {
#line 534 "mcsolver.m"
      mercury__map__lookup_3_p_0(check_hlds__mcsolver__TypeInfo_28_28, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__HeadVar__3_18, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_17)), &check_hlds__mcsolver__conv0_Val_11);
    }
#line 534 "mcsolver.m"
    check_hlds__mcsolver__Val_11 = ((MR_Word) check_hlds__mcsolver__conv0_Val_11);
#line 546 "mcsolver.m"
    {
#line 546 "mcsolver.m"
      check_hlds__mcsolver__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[6]));
#line 546 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0_1));
#line 546 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 3) = ((MR_Box) (check_hlds__mcsolver__Val_11));
#line 546 "mcsolver.m"
    }
#line 546 "mcsolver.m"
    {
#line 546 "mcsolver.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_41_41, check_hlds__mcsolver__EquivVars_10, ((MR_Box) (check_hlds__mcsolver__HeadVar__3_18)), &check_hlds__mcsolver__conv2_HeadVar__4_19);
    }
#line 546 "mcsolver.m"
    *check_hlds__mcsolver__HeadVar__4_19 = ((MR_Word) check_hlds__mcsolver__conv2_HeadVar__4_19);
#line 530 "mcsolver.m"
  }
#line 530 "mcsolver.m"
}

#line 497 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__2_2_f_0(
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_28)
#line 497 "mcsolver.m"
{
#line 497 "mcsolver.m"
  {
#line 497 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_29;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;

#line 497 "mcsolver.m"
    {
#line 497 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_29 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__HeadVar__1_21, check_hlds__mcsolver__HeadVar__2_28);
    }
#line 497 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_29;
#line 497 "mcsolver.m"
  }
#line 497 "mcsolver.m"
}

#line 497 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__1_2_f_0(
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 497 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_22)
#line 497 "mcsolver.m"
{
#line 497 "mcsolver.m"
  {
#line 497 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_23;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, (MR_Integer) 0)));
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_22, (MR_Integer) 1)));
#line 462 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V_24_24;

#line 462 "mcsolver.m"
    {
#line 462 "mcsolver.m"
      check_hlds__mcsolver__conv0_V_24_24 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__Var_25)));
    }
#line 462 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) check_hlds__mcsolver__conv0_V_24_24);
#line 497 "mcsolver.m"
    {
#line 497 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 497 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_23, 1) = ((MR_Box) (check_hlds__mcsolver__Val_26));
#line 497 "mcsolver.m"
    }
#line 497 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_23;
#line 497 "mcsolver.m"
  }
#line 497 "mcsolver.m"
}

#line 478 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__2_3_f_0(
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_24)
#line 478 "mcsolver.m"
{
#line 478 "mcsolver.m"
  {
#line 478 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__4_25;
#line 478 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_HeadVar__4_25;

#line 478 "mcsolver.m"
    {
#line 478 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__4_25 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_23, ((MR_Box) (check_hlds__mcsolver__HeadVar__3_24)));
    }
#line 478 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__4_25 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__4_25);
#line 478 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__4_25;
#line 478 "mcsolver.m"
  }
#line 478 "mcsolver.m"
}

#line 478 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__1_2_f_0(
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13,
#line 478 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_14)
#line 478 "mcsolver.m"
{
#line 478 "mcsolver.m"
  {
#line 478 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_15;
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 0)));
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 1)));

#line 478 "mcsolver.m"
    {
#line 478 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_15, 0) = ((MR_Box) (check_hlds__mcsolver__V_18));
#line 478 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_15, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_14));
#line 478 "mcsolver.m"
    }
#line 478 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_15;
#line 478 "mcsolver.m"
  }
#line 478 "mcsolver.m"
}

#line 258 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0_1(
#line 258 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 258 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 258 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
#line 258 "mcsolver.m"
{
#line 258 "mcsolver.m"
  {
#line 258 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 258 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 258 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_20;

#line 258 "mcsolver.m"
    {
#line 258 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv0_HeadVar__2_20);
    }
#line 258 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 258 "mcsolver.m"
      {
#line 258 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_20));
#line 258 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 258 "mcsolver.m"
      }
#line 258 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 258 "mcsolver.m"
  }
#line 258 "mcsolver.m"
}

#line 256 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0(
#line 256 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_16,
#line 256 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_17)
#line 256 "mcsolver.m"
{
#line 256 "mcsolver.m"
  {
#line 256 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_16)) == (MR_mktag((MR_Integer) 2)));
#line 256 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_33_33;
#line 256 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_34_34;
#line 256 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 256 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Fls_30;

#line 257 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 257 "mcsolver.m"
      {
#line 257 "mcsolver.m"
        check_hlds__mcsolver__Fls_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_16, (MR_Integer) 0)));
#line 258 "mcsolver.m"
        check_hlds__mcsolver__V_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[17];
#line 4066 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
#line 4068 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__TypeInfo_34_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[0];
#line 258 "mcsolver.m"
        {
#line 258 "mcsolver.m"
          return check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2(check_hlds__mcsolver__TypeCtorInfo_33_33, check_hlds__mcsolver__TypeInfo_34_34, check_hlds__mcsolver__V_18_18, check_hlds__mcsolver__Fls_30, check_hlds__mcsolver__HeadVar__2_17);
        }
#line 257 "mcsolver.m"
      }
#line 256 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 256 "mcsolver.m"
  }
#line 256 "mcsolver.m"
}

#line 258 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__258__1_2_p_0(
#line 258 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_19,
#line 258 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__2_20)
#line 258 "mcsolver.m"
{
#line 258 "mcsolver.m"
  {
#line 258 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_19)) == (MR_mktag((MR_Integer) 0)));
#line 258 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 258 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_28;
#line 258 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Val_29;

#line 258 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 258 "mcsolver.m"
      {
#line 258 "mcsolver.m"
        check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_19, (MR_Integer) 0)));
#line 258 "mcsolver.m"
        check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 258 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 258 "mcsolver.m"
          {
#line 258 "mcsolver.m"
            check_hlds__mcsolver__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 0)));
#line 258 "mcsolver.m"
            check_hlds__mcsolver__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 1)));
#line 259 "mcsolver.m"
            {
#line 259 "mcsolver.m"
              MR_Word base;
#line 259 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 259 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__2_20 = base;
#line 259 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__Var_28));
#line 259 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__Val_29));
#line 259 "mcsolver.m"
            }
#line 259 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 258 "mcsolver.m"
          }
#line 258 "mcsolver.m"
      }
#line 258 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 258 "mcsolver.m"
  }
#line 258 "mcsolver.m"
}

#line 445 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__445__1_2_f_0(
#line 445 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_83,
#line 445 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_84)
#line 445 "mcsolver.m"
{
#line 445 "mcsolver.m"
  {
#line 445 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 445 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_85;
#line 445 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_86_86;

#line 447 "mcsolver.m"
    {
#line 447 "mcsolver.m"
      check_hlds__mcsolver__V_86_86 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__HeadVar__1_83);
    }
#line 447 "mcsolver.m"
    {
#line 447 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_85 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_86_86, check_hlds__mcsolver__HeadVar__2_84);
    }
#line 445 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_85;
#line 445 "mcsolver.m"
  }
#line 445 "mcsolver.m"
}

#line 438 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__438__1_2_f_0(
#line 438 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_76,
#line 438 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_77)
#line 438 "mcsolver.m"
{
#line 438 "mcsolver.m"
  {
#line 438 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_78;
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_76, (MR_Integer) 0)));
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_76, (MR_Integer) 1)));
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_81_81;
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 0)));
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Y_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 0)));
#line 439 "mcsolver.m"
    MR_Word check_hlds__mcsolver___VX_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 1)));
#line 439 "mcsolver.m"
    MR_Word check_hlds__mcsolver___VY_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 1)));

#line 439 "mcsolver.m"
    {
#line 439 "mcsolver.m"
      check_hlds__mcsolver__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__Y_110));
#line 439 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_77));
#line 439 "mcsolver.m"
    }
#line 439 "mcsolver.m"
    {
#line 439 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_78, 0) = ((MR_Box) (check_hlds__mcsolver__X_109));
#line 439 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_78, 1) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
#line 439 "mcsolver.m"
    }
#line 438 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_78;
#line 438 "mcsolver.m"
  }
#line 438 "mcsolver.m"
}

#line 431 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__431__1_2_f_0(
#line 431 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_71,
#line 431 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_72)
#line 431 "mcsolver.m"
{
#line 431 "mcsolver.m"
  {
#line 431 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 431 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_73;
#line 431 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_71, (MR_Integer) 0)));
#line 432 "mcsolver.m"
    MR_Word check_hlds__mcsolver___V_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_71, (MR_Integer) 1)));

#line 432 "mcsolver.m"
    {
#line 432 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_73, 0) = ((MR_Box) (check_hlds__mcsolver__X_104));
#line 432 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_73, 1) = ((MR_Box) (check_hlds__mcsolver__HeadVar__2_72));
#line 432 "mcsolver.m"
    }
#line 431 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_73;
#line 431 "mcsolver.m"
  }
#line 431 "mcsolver.m"
}

#line 420 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0_1(
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 420 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 420 "mcsolver.m"
{
#line 420 "mcsolver.m"
  {
#line 420 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 420 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 420 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__4_67;

#line 420 "mcsolver.m"
    {
#line 420 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__4_67 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__420__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 420 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__4_67));
#line 420 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 420 "mcsolver.m"
  }
#line 420 "mcsolver.m"
}

#line 418 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0(
#line 418 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 418 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_62)
#line 418 "mcsolver.m"
{
#line 418 "mcsolver.m"
  {
#line 418 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 418 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_63;
#line 418 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_64_64;
#line 418 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_68_68;
#line 420 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_HeadVar__3_63;

#line 420 "mcsolver.m"
    {
#line 420 "mcsolver.m"
      check_hlds__mcsolver__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 420 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[5]));
#line 420 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0_1));
#line 420 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 420 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 3) = ((MR_Box) (check_hlds__mcsolver__HeadVar__1_61));
#line 420 "mcsolver.m"
    }
#line 422 "mcsolver.m"
    {
#line 422 "mcsolver.m"
      check_hlds__mcsolver__V_68_68 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__HeadVar__1_61);
    }
#line 420 "mcsolver.m"
    {
#line 420 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_63 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__V_68_68, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_62)));
    }
#line 420 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__3_63 = ((MR_Word) check_hlds__mcsolver__conv1_HeadVar__3_63);
#line 418 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_63;
#line 418 "mcsolver.m"
  }
#line 418 "mcsolver.m"
}

#line 420 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__420__1_3_f_0(
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_61,
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_65,
#line 420 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_66)
#line 420 "mcsolver.m"
{
#line 420 "mcsolver.m"
  {
#line 420 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 420 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__4_67;

#line 421 "mcsolver.m"
    {
#line 421 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__4_67 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, check_hlds__mcsolver__HeadVar__3_66, ((MR_Box) (check_hlds__mcsolver__HeadVar__2_65)), ((MR_Box) (check_hlds__mcsolver__HeadVar__1_61)));
    }
#line 420 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__4_67;
#line 420 "mcsolver.m"
  }
#line 420 "mcsolver.m"
}

#line 405 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__405__1_2_f_0(
#line 405 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_48,
#line 405 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_49)
#line 405 "mcsolver.m"
{
#line 405 "mcsolver.m"
  {
#line 405 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_50;
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_48, (MR_Integer) 0)));
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_48, (MR_Integer) 1)));
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 0)));
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VX_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 1)));
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__YesPG_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, (MR_Integer) 0)));
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__NoPG_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_49, (MR_Integer) 1)));

#line 407 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__VX_94 == (MR_Integer) 1);
#line 405 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 408 "mcsolver.m"
      {
#line 408 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_53_53;

#line 408 "mcsolver.m"
        {
#line 408 "mcsolver.m"
          check_hlds__mcsolver__V_53_53 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__YesPG_97, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
#line 408 "mcsolver.m"
        {
#line 408 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_53_53));
#line 408 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__NoPG_98));
#line 408 "mcsolver.m"
        }
#line 408 "mcsolver.m"
      }
#line 405 "mcsolver.m"
    else
#line 410 "mcsolver.m"
      {
#line 410 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_55_55;

#line 410 "mcsolver.m"
        {
#line 410 "mcsolver.m"
          check_hlds__mcsolver__V_55_55 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__NoPG_98, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
#line 410 "mcsolver.m"
        {
#line 410 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__YesPG_97));
#line 410 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
#line 410 "mcsolver.m"
        }
#line 410 "mcsolver.m"
      }
#line 405 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_50;
#line 405 "mcsolver.m"
  }
#line 405 "mcsolver.m"
}

#line 394 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__394__1_2_f_0(
#line 394 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 394 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_36)
#line 394 "mcsolver.m"
{
#line 394 "mcsolver.m"
  {
#line 394 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_37;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_36, (MR_Integer) 0)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_36, (MR_Integer) 1)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_40_40;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_41_41;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_42_42;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_43_43;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 0)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VX_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 1)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Y_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 0)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__VY_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 1)));

#line 396 "mcsolver.m"
    {
#line 396 "mcsolver.m"
      check_hlds__mcsolver__V_41_41 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_89);
    }
#line 396 "mcsolver.m"
    {
#line 396 "mcsolver.m"
      check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__VX_90));
#line 396 "mcsolver.m"
    }
#line 396 "mcsolver.m"
    {
#line 396 "mcsolver.m"
      check_hlds__mcsolver__V_43_43 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__Y_91);
    }
#line 396 "mcsolver.m"
    {
#line 396 "mcsolver.m"
      check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__VY_92));
#line 396 "mcsolver.m"
    }
#line 396 "mcsolver.m"
    {
#line 396 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_37, 0) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 396 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_37, 1) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 396 "mcsolver.m"
    }
#line 394 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_37;
#line 394 "mcsolver.m"
  }
#line 394 "mcsolver.m"
}

#line 388 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__388__1_2_f_0(
#line 388 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_5,
#line 388 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_31)
#line 388 "mcsolver.m"
{
#line 388 "mcsolver.m"
  {
#line 388 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 388 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_32;
#line 388 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_33_33;
#line 388 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_31, (MR_Integer) 0)));
#line 388 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_31, (MR_Integer) 1)));

#line 389 "mcsolver.m"
    {
#line 389 "mcsolver.m"
      check_hlds__mcsolver__V_33_33 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_87);
    }
#line 389 "mcsolver.m"
    {
#line 389 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_32, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 389 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_32, 1) = ((MR_Box) (check_hlds__mcsolver__V_88));
#line 389 "mcsolver.m"
    }
#line 388 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_32;
#line 388 "mcsolver.m"
  }
#line 388 "mcsolver.m"
}

#line 377 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__2_2_f_0(
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_30)
#line 377 "mcsolver.m"
{
#line 377 "mcsolver.m"
  {
#line 377 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_31;

#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__3_31 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_30);
    }
#line 377 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_31;
#line 377 "mcsolver.m"
  }
#line 377 "mcsolver.m"
}

#line 377 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__1_1_f_0(
#line 377 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_13)
#line 377 "mcsolver.m"
{
#line 377 "mcsolver.m"
  {
#line 377 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_14;
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 0)));
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Value_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_13, (MR_Integer) 1)));

#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_14, 0) = ((MR_Box) (check_hlds__mcsolver__Var_19));
#line 377 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_14, 1) = ((MR_Box) (check_hlds__mcsolver__Value_20));
#line 377 "mcsolver.m"
    }
#line 377 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_14;
#line 377 "mcsolver.m"
  }
#line 377 "mcsolver.m"
}

#line 217 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0(
#line 217 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 217 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 217 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 217 "mcsolver.m"
{
#line 217 "mcsolver.m"
  {
#line 217 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 217 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_18 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 217 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_19 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 217 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_18 == check_hlds__mcsolver__CastY_19);
#line 217 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 4694 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 217 "mcsolver.m"
    else
#line 217 "mcsolver.m"
      {
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 4)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_14_14;

#line 217 "mcsolver.m"
        {
#line 217 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
        }
#line 4728 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
#line 217 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 217 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
#line 217 "mcsolver.m"
        else
#line 217 "mcsolver.m"
          {
#line 217 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_15_15;

#line 217 "mcsolver.m"
            {
#line 217 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
            }
#line 4748 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_15_15 == (MR_Integer) 0);
#line 217 "mcsolver.m"
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 217 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_15_15;
#line 217 "mcsolver.m"
            else
#line 217 "mcsolver.m"
              {
#line 217 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_16_16;

#line 217 "mcsolver.m"
                {
#line 217 "mcsolver.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
                }
#line 4768 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_16_16 == (MR_Integer) 0);
#line 217 "mcsolver.m"
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 217 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_16_16;
#line 217 "mcsolver.m"
                else
#line 217 "mcsolver.m"
                  {
#line 217 "mcsolver.m"
                    MR_Word check_hlds__mcsolver__V_17_17;
#line 173 "mcsolver.m"
                    MR_Integer check_hlds__mcsolver__CastX_30 = (MR_Integer) check_hlds__mcsolver__V_7_7;
#line 173 "mcsolver.m"
                    MR_Integer check_hlds__mcsolver__CastY_31 = (MR_Integer) check_hlds__mcsolver__V_12_12;

#line 173 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_30 == check_hlds__mcsolver__CastY_31);
#line 173 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 4791 "check_hlds.mcsolver.c"
                      {
#line 4793 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 217 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 4797 "check_hlds.mcsolver.c"
                        if (check_hlds__mcsolver__succeeded)
#line 4799 "check_hlds.mcsolver.c"
                          {
#line 4801 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__V_17_17 = (MR_Integer) 0;
#line 4803 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 4805 "check_hlds.mcsolver.c"
                          }
#line 4807 "check_hlds.mcsolver.c"
                      }
#line 173 "mcsolver.m"
                    else
#line 173 "mcsolver.m"
                      {
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 0)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 1)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 0)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 1)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_29_29;

#line 173 "mcsolver.m"
                        {
#line 173 "mcsolver.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_29_29, ((MR_Box) (check_hlds__mcsolver__V_25_25)), ((MR_Box) (check_hlds__mcsolver__V_27_27)));
                        }
#line 4829 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_29_29 == (MR_Integer) 0);
#line 173 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 173 "mcsolver.m"
                        if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
                          {
#line 173 "mcsolver.m"
                            check_hlds__mcsolver__V_17_17 = check_hlds__mcsolver__V_29_29;
#line 4839 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
#line 217 "mcsolver.m"
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 173 "mcsolver.m"
                          }
#line 173 "mcsolver.m"
                        else
#line 173 "mcsolver.m"
                          {
#line 173 "mcsolver.m"
                            {
#line 173 "mcsolver.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__V_26_26)), ((MR_Box) (check_hlds__mcsolver__V_28_28)));
                            }
#line 4854 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
#line 217 "mcsolver.m"
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 173 "mcsolver.m"
                          }
#line 173 "mcsolver.m"
                      }
#line 217 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
                      *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_17_17;
#line 217 "mcsolver.m"
                    else
#line 217 "mcsolver.m"
                      {
#line 217 "mcsolver.m"
                        {
#line 217 "mcsolver.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_8_8)), ((MR_Box) (check_hlds__mcsolver__V_13_13)));
#line 217 "mcsolver.m"
                          return;
                        }
#line 217 "mcsolver.m"
                      }
#line 217 "mcsolver.m"
                  }
#line 217 "mcsolver.m"
              }
#line 217 "mcsolver.m"
          }
#line 217 "mcsolver.m"
      }
#line 217 "mcsolver.m"
  }
#line 217 "mcsolver.m"
}

#line 217 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0(
#line 217 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 217 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 217 "mcsolver.m"
{
#line 217 "mcsolver.m"
  {
#line 217 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 217 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 217 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 217 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
#line 217 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 217 "mcsolver.m"
    else
#line 217 "mcsolver.m"
      {
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_17_17;
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_18_18;
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 4)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 217 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
#line 173 "mcsolver.m"
        MR_Integer check_hlds__mcsolver__CastX_23;
#line 173 "mcsolver.m"
        MR_Integer check_hlds__mcsolver__CastY_24;

#line 4951 "check_hlds.mcsolver.c"
        {
#line 4953 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
#line 217 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
          {
#line 4960 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[6];
#line 4962 "check_hlds.mcsolver.c"
            {
#line 4964 "check_hlds.mcsolver.c"
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
#line 217 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
              {
#line 4971 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 4973 "check_hlds.mcsolver.c"
                {
#line 4975 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
#line 217 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
                  {
#line 173 "mcsolver.m"
                    check_hlds__mcsolver__CastX_23 = (MR_Integer) check_hlds__mcsolver__V_6_6;
#line 173 "mcsolver.m"
                    check_hlds__mcsolver__CastY_24 = (MR_Integer) check_hlds__mcsolver__V_11_11;
#line 173 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_23 == check_hlds__mcsolver__CastY_24);
#line 173 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 173 "mcsolver.m"
                    else
#line 173 "mcsolver.m"
                      {
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__TypeInfo_10_26;
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 0)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 1)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 0)));
#line 173 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 1)));

#line 5007 "check_hlds.mcsolver.c"
                        {
#line 5009 "check_hlds.mcsolver.c"
                          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_19_19)), ((MR_Box) (check_hlds__mcsolver__V_21_21)));
                        }
#line 173 "mcsolver.m"
                        if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
                          {
#line 5016 "check_hlds.mcsolver.c"
                            check_hlds__mcsolver__TypeInfo_10_26 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
#line 5018 "check_hlds.mcsolver.c"
                            {
#line 5020 "check_hlds.mcsolver.c"
                              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_26, ((MR_Box) (check_hlds__mcsolver__V_20_20)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
                            }
#line 173 "mcsolver.m"
                          }
#line 173 "mcsolver.m"
                      }
#line 217 "mcsolver.m"
                    if (check_hlds__mcsolver__succeeded)
#line 217 "mcsolver.m"
                      {
#line 5031 "check_hlds.mcsolver.c"
                        check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[1];
#line 5033 "check_hlds.mcsolver.c"
                        {
#line 5035 "check_hlds.mcsolver.c"
                          return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                        }
#line 217 "mcsolver.m"
                      }
#line 217 "mcsolver.m"
                  }
#line 217 "mcsolver.m"
              }
#line 217 "mcsolver.m"
          }
#line 217 "mcsolver.m"
      }
#line 217 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 217 "mcsolver.m"
  }
#line 217 "mcsolver.m"
}

#line 173 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
#line 173 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 173 "mcsolver.m"
{
#line 173 "mcsolver.m"
  {
#line 173 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 173 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 173 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 173 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 173 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5079 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 173 "mcsolver.m"
    else
#line 173 "mcsolver.m"
      {
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 173 "mcsolver.m"
        {
#line 173 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
#line 5101 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 173 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 173 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 173 "mcsolver.m"
        else
#line 173 "mcsolver.m"
          {
#line 173 "mcsolver.m"
            {
#line 173 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
#line 173 "mcsolver.m"
              return;
            }
#line 173 "mcsolver.m"
          }
#line 173 "mcsolver.m"
      }
#line 173 "mcsolver.m"
  }
#line 173 "mcsolver.m"
}

#line 173 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 173 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 173 "mcsolver.m"
{
#line 173 "mcsolver.m"
  {
#line 173 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 173 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 173 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 173 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 173 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 173 "mcsolver.m"
    else
#line 173 "mcsolver.m"
      {
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_10_10;
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 5168 "check_hlds.mcsolver.c"
        {
#line 5170 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
#line 173 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 173 "mcsolver.m"
          {
#line 5177 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_10_10 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
#line 5179 "check_hlds.mcsolver.c"
            {
#line 5181 "check_hlds.mcsolver.c"
              return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_10, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
            }
#line 173 "mcsolver.m"
          }
#line 173 "mcsolver.m"
      }
#line 173 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 173 "mcsolver.m"
  }
#line 173 "mcsolver.m"
}

#line 188 "mcsolver.m"
void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0(
#line 188 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 188 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 188 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 188 "mcsolver.m"
{
#line 188 "mcsolver.m"
  {
#line 188 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 188 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_15 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 188 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_16 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 188 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_15 == check_hlds__mcsolver__CastY_16);
#line 188 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5219 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "mcsolver.m"
    else
#line 188 "mcsolver.m"
      {
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12;

#line 188 "mcsolver.m"
        {
#line 188 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
#line 5249 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_12_12 == (MR_Integer) 0);
#line 188 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 188 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_12_12;
#line 188 "mcsolver.m"
        else
#line 188 "mcsolver.m"
          {
#line 188 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_13_13;

#line 188 "mcsolver.m"
            {
#line 188 "mcsolver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_13_13, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
#line 5269 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_13_13 == (MR_Integer) 0);
#line 188 "mcsolver.m"
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 188 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_13_13;
#line 188 "mcsolver.m"
            else
#line 188 "mcsolver.m"
              {
#line 188 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_14_14;

#line 188 "mcsolver.m"
                {
#line 188 "mcsolver.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
#line 5289 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
#line 188 "mcsolver.m"
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 188 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
#line 188 "mcsolver.m"
                else
#line 188 "mcsolver.m"
                  {
#line 188 "mcsolver.m"
                    {
#line 188 "mcsolver.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
#line 188 "mcsolver.m"
                      return;
                    }
#line 188 "mcsolver.m"
                  }
#line 188 "mcsolver.m"
              }
#line 188 "mcsolver.m"
          }
#line 188 "mcsolver.m"
      }
#line 188 "mcsolver.m"
  }
#line 188 "mcsolver.m"
}

#line 188 "mcsolver.m"
MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0(
#line 188 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 188 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 188 "mcsolver.m"
{
#line 188 "mcsolver.m"
  {
#line 188 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 188 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_11 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 188 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_12 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 188 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_11 == check_hlds__mcsolver__CastY_12);
#line 188 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 188 "mcsolver.m"
    else
#line 188 "mcsolver.m"
      {
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_14_14;
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_15_15;
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
#line 188 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));

#line 5372 "check_hlds.mcsolver.c"
        {
#line 5374 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
        }
#line 188 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
          {
#line 5381 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_14_14 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 5383 "check_hlds.mcsolver.c"
            {
#line 5385 "check_hlds.mcsolver.c"
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
            }
#line 188 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
              {
#line 5392 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[7];
#line 5394 "check_hlds.mcsolver.c"
                {
#line 5396 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
                }
#line 188 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 188 "mcsolver.m"
                  {
#line 5403 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
#line 5405 "check_hlds.mcsolver.c"
                    {
#line 5407 "check_hlds.mcsolver.c"
                      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                    }
#line 188 "mcsolver.m"
                  }
#line 188 "mcsolver.m"
              }
#line 188 "mcsolver.m"
          }
#line 188 "mcsolver.m"
      }
#line 188 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 188 "mcsolver.m"
  }
#line 188 "mcsolver.m"
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

#line 147 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
#line 147 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 147 "mcsolver.m"
{
#line 147 "mcsolver.m"
  {
#line 147 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 147 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 147 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 147 "mcsolver.m"
    {
#line 147 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 147 "mcsolver.m"
      return;
    }
#line 147 "mcsolver.m"
  }
#line 147 "mcsolver.m"
}

#line 147 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 147 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 147 "mcsolver.m"
{
#line 147 "mcsolver.m"
  {
#line 147 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 147 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 147 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 147 "mcsolver.m"
    {
#line 147 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 147 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 147 "mcsolver.m"
  }
#line 147 "mcsolver.m"
}

#line 146 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
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
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 146 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 146 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 146 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5635 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 146 "mcsolver.m"
    else
#line 146 "mcsolver.m"
      {
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 146 "mcsolver.m"
        {
#line 146 "mcsolver.m"
          check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__V_8_8, check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
        }
#line 5657 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 146 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 146 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 146 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 146 "mcsolver.m"
        else
#line 146 "mcsolver.m"
          {
#line 146 "mcsolver.m"
            check_hlds__mcsolver____Compare____assgt_0_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_5_5, check_hlds__mcsolver__V_7_7);
#line 146 "mcsolver.m"
            return;
          }
#line 146 "mcsolver.m"
      }
#line 146 "mcsolver.m"
  }
#line 146 "mcsolver.m"
}

#line 146 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
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
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 146 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 146 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 146 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 146 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 146 "mcsolver.m"
    else
#line 146 "mcsolver.m"
      {
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 5718 "check_hlds.mcsolver.c"
        {
#line 5720 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_3_3, check_hlds__mcsolver__V_5_5);
        }
#line 146 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 5725 "check_hlds.mcsolver.c"
          {
#line 5727 "check_hlds.mcsolver.c"
            return check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
          }
#line 146 "mcsolver.m"
      }
#line 146 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 146 "mcsolver.m"
  }
#line 146 "mcsolver.m"
}

#line 183 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
#line 183 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 183 "mcsolver.m"
{
#line 183 "mcsolver.m"
  {
#line 183 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 183 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 183 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 183 "mcsolver.m"
    {
#line 183 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 183 "mcsolver.m"
      return;
    }
#line 183 "mcsolver.m"
  }
#line 183 "mcsolver.m"
}

#line 183 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 183 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 183 "mcsolver.m"
{
#line 183 "mcsolver.m"
  {
#line 183 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 183 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 183 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 183 "mcsolver.m"
    {
#line 183 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 183 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 183 "mcsolver.m"
  }
#line 183 "mcsolver.m"
}

#line 160 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
#line 160 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 160 "mcsolver.m"
{
#line 160 "mcsolver.m"
  {
#line 160 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 160 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 160 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 160 "mcsolver.m"
    {
#line 160 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 160 "mcsolver.m"
      return;
    }
#line 160 "mcsolver.m"
  }
#line 160 "mcsolver.m"
}

#line 160 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 160 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 160 "mcsolver.m"
{
#line 160 "mcsolver.m"
  {
#line 160 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 160 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 160 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 160 "mcsolver.m"
    {
#line 160 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 160 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 160 "mcsolver.m"
  }
#line 160 "mcsolver.m"
}

#line 164 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
#line 164 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 164 "mcsolver.m"
{
#line 164 "mcsolver.m"
  {
#line 164 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 164 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 164 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 164 "mcsolver.m"
    {
#line 164 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 164 "mcsolver.m"
      return;
    }
#line 164 "mcsolver.m"
  }
#line 164 "mcsolver.m"
}

#line 164 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 164 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 164 "mcsolver.m"
{
#line 164 "mcsolver.m"
  {
#line 164 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 164 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 164 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 164 "mcsolver.m"
    {
#line 164 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 164 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 164 "mcsolver.m"
  }
#line 164 "mcsolver.m"
}

#line 151 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
#line 151 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 151 "mcsolver.m"
{
#line 151 "mcsolver.m"
  {
#line 151 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 151 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_45 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 151 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_46 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 151 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_45 == check_hlds__mcsolver__CastY_46);
#line 151 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 5949 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "mcsolver.m"
    else
#line 151 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 151 "mcsolver.m"
        {
#line 151 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "mcsolver.m"
          if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "mcsolver.m"
              {
#line 151 "mcsolver.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_52_52)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
#line 151 "mcsolver.m"
                return;
              }
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
          else
#line 151 "mcsolver.m"
            if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5980 "check_hlds.mcsolver.c"
              *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
            else
#line 151 "mcsolver.m"
              if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5986 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
              else
#line 5990 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
        }
#line 151 "mcsolver.m"
      else
#line 151 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 151 "mcsolver.m"
          {
#line 151 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "mcsolver.m"
            if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6005 "check_hlds.mcsolver.c"
              *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
            else
#line 151 "mcsolver.m"
              if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 151 "mcsolver.m"
                {
#line 151 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "mcsolver.m"
                  {
#line 151 "mcsolver.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[5], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_53_53)), ((MR_Box) (check_hlds__mcsolver__V_44_44)));
#line 151 "mcsolver.m"
                    return;
                  }
#line 151 "mcsolver.m"
                }
#line 151 "mcsolver.m"
              else
#line 151 "mcsolver.m"
                if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6029 "check_hlds.mcsolver.c"
                  *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
                else
#line 6033 "check_hlds.mcsolver.c"
                  *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
          }
#line 151 "mcsolver.m"
        else
#line 151 "mcsolver.m"
          if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "mcsolver.m"
              if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6050 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
              else
#line 151 "mcsolver.m"
                if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6056 "check_hlds.mcsolver.c"
                  *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
                else
#line 151 "mcsolver.m"
                  if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 151 "mcsolver.m"
                    {
#line 151 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_8_8;

#line 151 "mcsolver.m"
                      {
#line 151 "mcsolver.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_55_55)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                      }
#line 6076 "check_hlds.mcsolver.c"
                      check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 151 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 151 "mcsolver.m"
                      if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
                        *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 151 "mcsolver.m"
                      else
#line 151 "mcsolver.m"
                        {
#line 151 "mcsolver.m"
                          {
#line 151 "mcsolver.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_54_54)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
#line 151 "mcsolver.m"
                            return;
                          }
#line 151 "mcsolver.m"
                        }
#line 151 "mcsolver.m"
                    }
#line 151 "mcsolver.m"
                  else
#line 6101 "check_hlds.mcsolver.c"
                    *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
          else
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "mcsolver.m"
              if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6114 "check_hlds.mcsolver.c"
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
              else
#line 151 "mcsolver.m"
                if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6120 "check_hlds.mcsolver.c"
                  *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "mcsolver.m"
                else
#line 151 "mcsolver.m"
                  if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6126 "check_hlds.mcsolver.c"
                    *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "mcsolver.m"
                  else
#line 151 "mcsolver.m"
                    {
#line 151 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "mcsolver.m"
                      {
#line 151 "mcsolver.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_56_56)), ((MR_Box) (check_hlds__mcsolver__V_33_33)));
#line 151 "mcsolver.m"
                        return;
                      }
#line 151 "mcsolver.m"
                    }
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
  }
#line 151 "mcsolver.m"
}

#line 151 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 151 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 151 "mcsolver.m"
{
#line 151 "mcsolver.m"
  {
#line 151 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 151 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 151 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 151 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
#line 151 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 151 "mcsolver.m"
    else
#line 151 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 151 "mcsolver.m"
        {
#line 151 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_15_15;
#line 151 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_8_8;

#line 151 "mcsolver.m"
          check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6196 "check_hlds.mcsolver.c"
              check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6198 "check_hlds.mcsolver.c"
              {
#line 6200 "check_hlds.mcsolver.c"
                return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
              }
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
        }
#line 151 "mcsolver.m"
      else
#line 151 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 151 "mcsolver.m"
          {
#line 151 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_16_16;
#line 151 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_12_12;

#line 151 "mcsolver.m"
            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 151 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
              {
#line 151 "mcsolver.m"
                check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6228 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[5];
#line 6230 "check_hlds.mcsolver.c"
                {
#line 6232 "check_hlds.mcsolver.c"
                  return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_11_11)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                }
#line 151 "mcsolver.m"
              }
#line 151 "mcsolver.m"
          }
#line 151 "mcsolver.m"
        else
#line 151 "mcsolver.m"
          if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__TypeInfo_17_17;
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__TypeInfo_18_18;
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_5_5;
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_6_6;

#line 151 "mcsolver.m"
              check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 151 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
                {
#line 151 "mcsolver.m"
                  check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "mcsolver.m"
                  check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 6268 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 6270 "check_hlds.mcsolver.c"
                  {
#line 6272 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
                  }
#line 151 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
                    {
#line 6279 "check_hlds.mcsolver.c"
                      check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6281 "check_hlds.mcsolver.c"
                      {
#line 6283 "check_hlds.mcsolver.c"
                        return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                      }
#line 151 "mcsolver.m"
                    }
#line 151 "mcsolver.m"
                }
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
          else
#line 151 "mcsolver.m"
            {
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__TypeInfo_19_19;
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_10_10;

#line 151 "mcsolver.m"
              check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 151 "mcsolver.m"
              if (check_hlds__mcsolver__succeeded)
#line 151 "mcsolver.m"
                {
#line 151 "mcsolver.m"
                  check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 6311 "check_hlds.mcsolver.c"
                  check_hlds__mcsolver__TypeInfo_19_19 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 6313 "check_hlds.mcsolver.c"
                  {
#line 6315 "check_hlds.mcsolver.c"
                    return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_19_19, ((MR_Box) (check_hlds__mcsolver__V_9_9)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                  }
#line 151 "mcsolver.m"
                }
#line 151 "mcsolver.m"
            }
#line 151 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 151 "mcsolver.m"
  }
#line 151 "mcsolver.m"
}

#line 141 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
#line 141 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
#line 141 "mcsolver.m"
{
#line 141 "mcsolver.m"
  {
#line 141 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 141 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
#line 141 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

#line 141 "mcsolver.m"
    {
#line 141 "mcsolver.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
#line 141 "mcsolver.m"
      return;
    }
#line 141 "mcsolver.m"
  }
#line 141 "mcsolver.m"
}

#line 141 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 141 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 141 "mcsolver.m"
{
#line 141 "mcsolver.m"
  {
#line 141 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 141 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
#line 141 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

#line 141 "mcsolver.m"
    {
#line 141 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
#line 141 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 141 "mcsolver.m"
  }
#line 141 "mcsolver.m"
}

#line 140 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
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
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
#line 140 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

#line 140 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
#line 140 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 6415 "check_hlds.mcsolver.c"
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
#line 140 "mcsolver.m"
    else
#line 140 "mcsolver.m"
      {
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_8_8;

#line 140 "mcsolver.m"
        {
#line 140 "mcsolver.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
#line 6437 "check_hlds.mcsolver.c"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
#line 140 "mcsolver.m"
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 140 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 140 "mcsolver.m"
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
#line 140 "mcsolver.m"
        else
#line 140 "mcsolver.m"
          {
#line 140 "mcsolver.m"
            MR_Integer check_hlds__mcsolver__V_13_13 = (MR_Integer) check_hlds__mcsolver__V_5_5;
#line 140 "mcsolver.m"
            MR_Integer check_hlds__mcsolver__V_14_14 = (MR_Integer) check_hlds__mcsolver__V_7_7;

#line 140 "mcsolver.m"
            {
#line 140 "mcsolver.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__V_14_14);
#line 140 "mcsolver.m"
              return;
            }
#line 140 "mcsolver.m"
          }
#line 140 "mcsolver.m"
      }
#line 140 "mcsolver.m"
  }
#line 140 "mcsolver.m"
}

#line 140 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
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
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
#line 140 "mcsolver.m"
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

#line 140 "mcsolver.m"
    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
#line 140 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 140 "mcsolver.m"
      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 140 "mcsolver.m"
    else
#line 140 "mcsolver.m"
      {
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

#line 6507 "check_hlds.mcsolver.c"
        {
#line 6509 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
#line 140 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 6514 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_4_4 == check_hlds__mcsolver__V_6_6);
#line 140 "mcsolver.m"
      }
#line 140 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 140 "mcsolver.m"
  }
#line 140 "mcsolver.m"
}

#line 777 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
#line 777 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs_1,
#line 777 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 777 "mcsolver.m"
{
#line 779 "mcsolver.m"
  while (MR_TRUE)
#line 779 "mcsolver.m"
    {
#line 779 "mcsolver.m"
      /* tailcall optimized into a loop */
#line 779 "mcsolver.m"
      {
#line 779 "mcsolver.m"
        MR_bool check_hlds__mcsolver__succeeded;

#line 779 "mcsolver.m"
        if ((check_hlds__mcsolver__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "mcsolver.m"
          check_hlds__mcsolver__succeeded = MR_TRUE;
#line 779 "mcsolver.m"
        else
#line 780 "mcsolver.m"
          {
#line 780 "mcsolver.m"
            MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 780 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 780 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_7_7;
#line 782 "mcsolver.m"
            MR_Box check_hlds__mcsolver__conv0_V_7_7;

#line 782 "mcsolver.m"
            {
#line 782 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_5)), check_hlds__mcsolver__Bs_1, &check_hlds__mcsolver__conv0_V_7_7);
            }
#line 782 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 782 "mcsolver.m"
              {
#line 782 "mcsolver.m"
                check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv0_V_7_7);
#line 782 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 782 "mcsolver.m"
              }
#line 780 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 780 "mcsolver.m"
              {
#line 782 "mcsolver.m"
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7_7 == (MR_Integer) 0);
#line 780 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 783 "mcsolver.m"
                  {
#line 783 "mcsolver.m"
                    /* direct tailcall eliminated */
#line 783 "mcsolver.m"
                    {
#line 783 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__HeadVar__2__tmp_copy_2 = check_hlds__mcsolver__Xs_6;

#line 783 "mcsolver.m"
                      check_hlds__mcsolver__HeadVar__2_2 = check_hlds__mcsolver__HeadVar__2__tmp_copy_2;
#line 783 "mcsolver.m"
                    }
#line 783 "mcsolver.m"
                    continue;
#line 783 "mcsolver.m"
                  }
#line 780 "mcsolver.m"
              }
#line 780 "mcsolver.m"
          }
#line 779 "mcsolver.m"
        return check_hlds__mcsolver__succeeded;
#line 779 "mcsolver.m"
      }
#line 779 "mcsolver.m"
      break;
#line 779 "mcsolver.m"
    }
#line 777 "mcsolver.m"
}

#line 755 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
#line 755 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 755 "mcsolver.m"
{
#line 755 "mcsolver.m"
  {
#line 755 "mcsolver.m"
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 760 "mcsolver.m"
    {
#line 760 "mcsolver.m"
      MR_Word base;
#line 760 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19 = base;
#line 760 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6));
#line 760 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9));
#line 760 "mcsolver.m"
    }
#line 760 "mcsolver.m"
    {
#line 760 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8);
    }
#line 760 "mcsolver.m"
    if ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
#line 760 "mcsolver.m"
      {
#line 760 "mcsolver.m"
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
#line 760 "mcsolver.m"
        return;
      }
#line 755 "mcsolver.m"
  }
#line 755 "mcsolver.m"
}

#line 748 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_6,
#line 748 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 748 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8,
#line 748 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 748 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr)
#line 748 "mcsolver.m"
{
#line 748 "mcsolver.m"
  {
#line 748 "mcsolver.m"
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s check_hlds__mcsolver__env;

#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5 = check_hlds__mcsolver__SCs_5;
#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6 = check_hlds__mcsolver__X_6;
#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7 = check_hlds__mcsolver__Bs0_7;
#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8 = check_hlds__mcsolver__Bs_8;
#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont = check_hlds__mcsolver__cont;
#line 748 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
#line 752 "mcsolver.m"
    {
#line 752 "mcsolver.m"
      (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6)));
    }
#line 754 "mcsolver.m"
    if ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
#line 753 "mcsolver.m"
      {
#line 753 "mcsolver.m"
        *((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8) = (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
#line 753 "mcsolver.m"
        {
#line 753 "mcsolver.m"
          ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
#line 753 "mcsolver.m"
          return;
        }
#line 753 "mcsolver.m"
      }
#line 754 "mcsolver.m"
    else
#line 755 "mcsolver.m"
      {
#line 755 "mcsolver.m"
        {
#line 755 "mcsolver.m"
          MR_Integer check_hlds__mcsolver__slot_0 = (MR_Integer) 0;

#line 755 "mcsolver.m"
          do
#line 755 "mcsolver.m"
            {
#line 755 "mcsolver.m"
              (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9 = ((&check_hlds__mcsolver_vector_common_8[0 + check_hlds__mcsolver__slot_0]))->check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
#line 755 "mcsolver.m"
              {
#line 755 "mcsolver.m"
                check_hlds__mcsolver__solve_var_4_p_0_1(&check_hlds__mcsolver__env);
              }
#line 755 "mcsolver.m"
              check_hlds__mcsolver__slot_0 = (check_hlds__mcsolver__slot_0 + (MR_Integer) 1);
#line 755 "mcsolver.m"
            }
#line 755 "mcsolver.m"
          while ((check_hlds__mcsolver__slot_0 < (MR_Integer) 2));
#line 755 "mcsolver.m"
        }
#line 755 "mcsolver.m"
      }
#line 748 "mcsolver.m"
  }
#line 748 "mcsolver.m"
}

#line 680 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
#line 680 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 680 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 680 "mcsolver.m"
{
#line 680 "mcsolver.m"
  {
#line 680 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 680 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 680 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__2_67;

#line 680 "mcsolver.m"
    {
#line 680 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__2_67 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__680__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 680 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__2_67));
#line 680 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 680 "mcsolver.m"
  }
#line 680 "mcsolver.m"
}

#line 668 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
#line 668 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 668 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 668 "mcsolver.m"
{
#line 668 "mcsolver.m"
  {
#line 668 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 668 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 668 "mcsolver.m"
    {
#line 668 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__669__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 668 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 668 "mcsolver.m"
  }
#line 668 "mcsolver.m"
}

#line 630 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
#line 630 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 630 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 630 "mcsolver.m"
{
#line 630 "mcsolver.m"
  {
#line 630 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 630 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 630 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__2_22;

#line 630 "mcsolver.m"
    {
#line 630 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__2_22 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__630__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 630 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__2_22));
#line 630 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 630 "mcsolver.m"
  }
#line 630 "mcsolver.m"
}

#line 685 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
#line 685 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 685 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 685 "mcsolver.m"
{
#line 685 "mcsolver.m"
  {
#line 685 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 685 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 685 "mcsolver.m"
    {
#line 685 "mcsolver.m"
      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__685__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 685 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 685 "mcsolver.m"
  }
#line 685 "mcsolver.m"
}

#line 660 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
#line 660 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 660 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 660 "mcsolver.m"
{
#line 660 "mcsolver.m"
  {
#line 660 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 660 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 660 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_49;

#line 660 "mcsolver.m"
    {
#line 660 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__2_49 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__660__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 660 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_49));
#line 660 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 660 "mcsolver.m"
  }
#line 660 "mcsolver.m"
}

#line 613 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_1,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_2,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_3,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
#line 613 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_5,
#line 613 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_6)
#line 613 "mcsolver.m"
{
#line 616 "mcsolver.m"
  {
#line 616 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 616 "mcsolver.m"
    if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 653 "mcsolver.m"
      {
#line 653 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Ys0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

#line 657 "mcsolver.m"
        if ((check_hlds__mcsolver__V_3 == (MR_Integer) 0))
#line 655 "mcsolver.m"
          {
#line 655 "mcsolver.m"
            *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 655 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 655 "mcsolver.m"
          }
#line 657 "mcsolver.m"
        else
#line 658 "mcsolver.m"
          {
#line 658 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_103_103 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 658 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeCtorInfo_104_104;
#line 658 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Ys_44;
#line 658 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_46_46;
#line 658 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_47_47;

#line 659 "mcsolver.m"
            {
#line 659 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__Ys0_41, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_44);
            }
#line 658 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 658 "mcsolver.m"
              {
#line 6966 "check_hlds.mcsolver.c"
                check_hlds__mcsolver__TypeCtorInfo_104_104 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 660 "mcsolver.m"
                check_hlds__mcsolver__V_47_47 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[14];
#line 660 "mcsolver.m"
                {
#line 660 "mcsolver.m"
                  check_hlds__mcsolver__V_46_46 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__TypeCtorInfo_104_104, check_hlds__mcsolver__V_47_47, check_hlds__mcsolver__Ys_44);
                }
#line 660 "mcsolver.m"
                {
#line 660 "mcsolver.m"
                  return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_46_46, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                }
#line 658 "mcsolver.m"
              }
#line 658 "mcsolver.m"
          }
#line 653 "mcsolver.m"
      }
#line 616 "mcsolver.m"
    else
#line 616 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__4_4)) == (MR_mktag((MR_Integer) 3))))
#line 683 "mcsolver.m"
        {
#line 683 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
#line 683 "mcsolver.m"
          MR_Word check_hlds__mcsolver__NotConflicting_89;
#line 683 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_94_94;
#line 683 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_113_113;
#line 683 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_114_114;
#line 685 "mcsolver.m"
          MR_Word check_hlds__mcsolver___Conflicts_88;

#line 685 "mcsolver.m"
          {
#line 685 "mcsolver.m"
            check_hlds__mcsolver__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 685 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[12]));
#line 685 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2));
#line 685 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 685 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 3) = ((MR_Box) (check_hlds__mcsolver__X_2));
#line 685 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 4) = ((MR_Box) (check_hlds__mcsolver__V_3));
#line 685 "mcsolver.m"
          }
#line 685 "mcsolver.m"
          {
#line 685 "mcsolver.m"
            mercury__list__filter_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__V_94_94, check_hlds__mcsolver__Assgtss_84, &check_hlds__mcsolver___Conflicts_88, &check_hlds__mcsolver__NotConflicting_89);
          }
#line 695 "mcsolver.m"
          check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__NotConflicting_89)) == (MR_mktag((MR_Integer) 1)));
#line 695 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 695 "mcsolver.m"
            {
#line 695 "mcsolver.m"
              check_hlds__mcsolver__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 0)));
#line 695 "mcsolver.m"
              check_hlds__mcsolver__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 1)));
#line 697 "mcsolver.m"
              if ((check_hlds__mcsolver__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "mcsolver.m"
                {
#line 696 "mcsolver.m"
                  return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_114_114, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                }
#line 697 "mcsolver.m"
              else
#line 699 "mcsolver.m"
                {
#line 699 "mcsolver.m"
                  *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 699 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = MR_TRUE;
#line 699 "mcsolver.m"
                }
#line 695 "mcsolver.m"
            }
#line 683 "mcsolver.m"
        }
#line 616 "mcsolver.m"
      else
#line 616 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 616 "mcsolver.m"
          {
#line 616 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
#line 616 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Zs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 1)));

#line 617 "mcsolver.m"
            {
#line 617 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__X_2)), ((MR_Box) (check_hlds__mcsolver__Y_10)));
            }
#line 632 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 625 "mcsolver.m"
              if ((check_hlds__mcsolver__V_3 == (MR_Integer) 0))
#line 626 "mcsolver.m"
                {
#line 626 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_19_19;

#line 630 "mcsolver.m"
                  {
#line 630 "mcsolver.m"
                    check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[15], check_hlds__mcsolver__Zs_11);
                  }
#line 630 "mcsolver.m"
                  {
#line 630 "mcsolver.m"
                    return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_19_19, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
#line 626 "mcsolver.m"
                }
#line 625 "mcsolver.m"
              else
#line 619 "mcsolver.m"
                {
#line 623 "mcsolver.m"
                  {
#line 623 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
#line 623 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
#line 619 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 619 "mcsolver.m"
                    {
#line 624 "mcsolver.m"
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 624 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 619 "mcsolver.m"
                    }
#line 619 "mcsolver.m"
                }
#line 632 "mcsolver.m"
            else
#line 640 "mcsolver.m"
              if ((check_hlds__mcsolver__V_3 == (MR_Integer) 0))
#line 647 "mcsolver.m"
                {
#line 645 "mcsolver.m"
                  {
#line 645 "mcsolver.m"
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
#line 647 "mcsolver.m"
                  if (check_hlds__mcsolver__succeeded)
#line 646 "mcsolver.m"
                    {
#line 646 "mcsolver.m"
                      MR_Word check_hlds__mcsolver__V_30_30;

#line 646 "mcsolver.m"
                      {
#line 646 "mcsolver.m"
                        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "mcsolver.m"
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
#line 646 "mcsolver.m"
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 646 "mcsolver.m"
                      }
#line 646 "mcsolver.m"
                      {
#line 646 "mcsolver.m"
                        return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                      }
#line 646 "mcsolver.m"
                    }
#line 647 "mcsolver.m"
                  else
#line 648 "mcsolver.m"
                    {
#line 648 "mcsolver.m"
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 648 "mcsolver.m"
                      check_hlds__mcsolver__succeeded = MR_TRUE;
#line 648 "mcsolver.m"
                    }
#line 647 "mcsolver.m"
                }
#line 640 "mcsolver.m"
              else
#line 635 "mcsolver.m"
                {
#line 635 "mcsolver.m"
                  MR_Word check_hlds__mcsolver__V_35_35;

#line 639 "mcsolver.m"
                  {
#line 639 "mcsolver.m"
                    check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "mcsolver.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
#line 639 "mcsolver.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) ((MR_Integer) 1));
#line 639 "mcsolver.m"
                  }
#line 639 "mcsolver.m"
                  {
#line 639 "mcsolver.m"
                    return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
#line 635 "mcsolver.m"
                }
#line 616 "mcsolver.m"
          }
#line 616 "mcsolver.m"
        else
#line 663 "mcsolver.m"
          {
#line 663 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Ys0_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

#line 677 "mcsolver.m"
            if ((check_hlds__mcsolver__V_3 == (MR_Integer) 0))
#line 665 "mcsolver.m"
              {
#line 665 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_58;
#line 665 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_69_69;
#line 665 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_115_115;
#line 665 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_116_116;

#line 668 "mcsolver.m"
                {
#line 668 "mcsolver.m"
                  check_hlds__mcsolver__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[3]));
#line 668 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4));
#line 668 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 668 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 3) = ((MR_Box) (check_hlds__mcsolver__Bs0_5));
#line 668 "mcsolver.m"
                }
#line 668 "mcsolver.m"
                {
#line 668 "mcsolver.m"
                  check_hlds__mcsolver__Ys_58 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_69_69, check_hlds__mcsolver__Ys0_55);
                }
#line 671 "mcsolver.m"
                check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__Ys_58)) == (MR_mktag((MR_Integer) 1)));
#line 671 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 671 "mcsolver.m"
                  {
#line 671 "mcsolver.m"
                    check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 0)));
#line 671 "mcsolver.m"
                    check_hlds__mcsolver__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 1)));
#line 673 "mcsolver.m"
                    if ((check_hlds__mcsolver__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "mcsolver.m"
                      {
#line 671 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_74_74;
#line 671 "mcsolver.m"
                        MR_Word check_hlds__mcsolver__V_75_75;

#line 672 "mcsolver.m"
                        {
#line 672 "mcsolver.m"
                          check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "mcsolver.m"
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_116_116));
#line 672 "mcsolver.m"
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) ((MR_Integer) 1));
#line 672 "mcsolver.m"
                        }
#line 672 "mcsolver.m"
                        {
#line 672 "mcsolver.m"
                          check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "mcsolver.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
#line 672 "mcsolver.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "mcsolver.m"
                        }
#line 672 "mcsolver.m"
                        {
#line 672 "mcsolver.m"
                          return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_74_74, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                        }
#line 671 "mcsolver.m"
                      }
#line 673 "mcsolver.m"
                    else
#line 675 "mcsolver.m"
                      {
#line 675 "mcsolver.m"
                        *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
#line 675 "mcsolver.m"
                        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 675 "mcsolver.m"
                      }
#line 671 "mcsolver.m"
                  }
#line 665 "mcsolver.m"
              }
#line 677 "mcsolver.m"
            else
#line 678 "mcsolver.m"
              {
#line 678 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeInfo_108_108 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 678 "mcsolver.m"
                MR_Word check_hlds__mcsolver__TypeCtorInfo_109_109;
#line 678 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_64_64;
#line 678 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_65_65;
#line 678 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_80;

#line 679 "mcsolver.m"
                {
#line 679 "mcsolver.m"
                  check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__Ys0_55, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_80);
                }
#line 678 "mcsolver.m"
                if (check_hlds__mcsolver__succeeded)
#line 678 "mcsolver.m"
                  {
#line 7313 "check_hlds.mcsolver.c"
                    check_hlds__mcsolver__TypeCtorInfo_109_109 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 680 "mcsolver.m"
                    check_hlds__mcsolver__V_65_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[16];
#line 680 "mcsolver.m"
                    {
#line 680 "mcsolver.m"
                      check_hlds__mcsolver__V_64_64 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__TypeCtorInfo_109_109, check_hlds__mcsolver__V_65_65, check_hlds__mcsolver__Ys_80);
                    }
#line 680 "mcsolver.m"
                    {
#line 680 "mcsolver.m"
                      return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                    }
#line 678 "mcsolver.m"
                  }
#line 678 "mcsolver.m"
              }
#line 663 "mcsolver.m"
          }
#line 616 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 616 "mcsolver.m"
  }
#line 613 "mcsolver.m"
}

#line 606 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 606 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 606 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 606 "mcsolver.m"
{
#line 606 "mcsolver.m"
  {
#line 606 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 606 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 606 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_6;

#line 606 "mcsolver.m"
    {
#line 606 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrt_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_6);
    }
#line 606 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 606 "mcsolver.m"
      {
#line 606 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_6));
#line 606 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 606 "mcsolver.m"
      }
#line 606 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 606 "mcsolver.m"
  }
#line 606 "mcsolver.m"
}

#line 602 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_7,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_8,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__V_9,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
#line 602 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_11,
#line 602 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_12)
#line 602 "mcsolver.m"
{
#line 605 "mcsolver.m"
  {
#line 605 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 605 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 606 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_Bs_12;

#line 606 "mcsolver.m"
    {
#line 606 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_7[0]));
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1));
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_7));
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 4) = ((MR_Box) (check_hlds__mcsolver__X_8));
#line 606 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 5) = ((MR_Box) (check_hlds__mcsolver__V_9));
#line 606 "mcsolver.m"
    }
#line 606 "mcsolver.m"
    {
#line 606 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__ComplexCstrts_10, ((MR_Box) (check_hlds__mcsolver__Bs0_11)), &check_hlds__mcsolver__conv1_Bs_12);
    }
#line 606 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 606 "mcsolver.m"
      {
#line 606 "mcsolver.m"
        *check_hlds__mcsolver__Bs_12 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_12);
#line 606 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 606 "mcsolver.m"
      }
#line 605 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 605 "mcsolver.m"
  }
#line 602 "mcsolver.m"
}

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 561 "mcsolver.m"
{
#line 561 "mcsolver.m"
  {
#line 561 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 561 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv3_Bs_9;

#line 561 "mcsolver.m"
    {
#line 561 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv3_Bs_9);
    }
#line 561 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_Bs_9));
#line 561 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
      }
#line 561 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
  }
#line 561 "mcsolver.m"
}

#line 566 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
#line 566 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_8,
#line 566 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_9)
#line 566 "mcsolver.m"
{
#line 569 "mcsolver.m"
  {
#line 569 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 569 "mcsolver.m"
    MR_Word check_hlds__mcsolver__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 569 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 581 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V0_10;
#line 571 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_V0_10;

#line 571 "mcsolver.m"
    {
#line 571 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, &check_hlds__mcsolver__conv0_V0_10);
    }
#line 571 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 571 "mcsolver.m"
      {
#line 571 "mcsolver.m"
        check_hlds__mcsolver__V0_10 = ((MR_Word) check_hlds__mcsolver__conv0_V0_10);
#line 571 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 571 "mcsolver.m"
      }
#line 581 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 578 "mcsolver.m"
      {
#line 579 "mcsolver.m"
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7 == check_hlds__mcsolver__V0_10);
#line 578 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 578 "mcsolver.m"
          {
#line 580 "mcsolver.m"
            *check_hlds__mcsolver__Bs_9 = check_hlds__mcsolver__Bs0_8;
#line 580 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 578 "mcsolver.m"
          }
#line 578 "mcsolver.m"
      }
#line 581 "mcsolver.m"
    else
#line 584 "mcsolver.m"
      {
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Bs1_12;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Assgts_13;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Bs2_14;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__ComplexCstrts_15;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_24_24;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_25_25;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_50_50;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_51_51;
#line 584 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_56_56;
#line 588 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_26_26;
#line 588 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_27_27;
#line 588 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_28_28;
#line 588 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_29_29;
#line 561 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv4_Bs2_14;
#line 591 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30;
#line 591 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31;
#line 591 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_32_32;
#line 591 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_33_33;
#line 730 "mcsolver.m"
        MR_Word check_hlds__mcsolver__CmplxCstrts_64;
#line 731 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_7_65;
#line 731 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_8_66;
#line 731 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv5_CmplxCstrts_64;

#line 586 "mcsolver.m"
        {
#line 586 "mcsolver.m"
          check_hlds__mcsolver__Bs1_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, ((MR_Box) (check_hlds__mcsolver__V_7)));
        }
#line 588 "mcsolver.m"
        check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
#line 588 "mcsolver.m"
        check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
#line 588 "mcsolver.m"
        check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
#line 588 "mcsolver.m"
        check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
#line 588 "mcsolver.m"
        check_hlds__mcsolver__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
#line 709 "mcsolver.m"
        check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 0)));
#line 709 "mcsolver.m"
        check_hlds__mcsolver__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 1)));
#line 709 "mcsolver.m"
        if ((check_hlds__mcsolver__V_7 == (MR_Integer) 0))
#line 716 "mcsolver.m"
          {
#line 716 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Assgts_45;
#line 717 "mcsolver.m"
            MR_Box check_hlds__mcsolver__conv1_Assgts_45;

#line 717 "mcsolver.m"
            {
#line 717 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_50_50, &check_hlds__mcsolver__conv1_Assgts_45);
            }
#line 717 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 717 "mcsolver.m"
              {
#line 717 "mcsolver.m"
                check_hlds__mcsolver__Assgts_45 = ((MR_Word) check_hlds__mcsolver__conv1_Assgts_45);
#line 717 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 717 "mcsolver.m"
              }
#line 716 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 716 "mcsolver.m"
              check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_45;
#line 716 "mcsolver.m"
            else
#line 720 "mcsolver.m"
              check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "mcsolver.m"
          }
#line 709 "mcsolver.m"
        else
#line 709 "mcsolver.m"
          {
#line 709 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Assgts_41;
#line 710 "mcsolver.m"
            MR_Box check_hlds__mcsolver__conv2_Assgts_41;

#line 710 "mcsolver.m"
            {
#line 710 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_51_51, &check_hlds__mcsolver__conv2_Assgts_41);
            }
#line 710 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 710 "mcsolver.m"
              {
#line 710 "mcsolver.m"
                check_hlds__mcsolver__Assgts_41 = ((MR_Word) check_hlds__mcsolver__conv2_Assgts_41);
#line 710 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 710 "mcsolver.m"
              }
#line 709 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 709 "mcsolver.m"
              check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_41;
#line 709 "mcsolver.m"
            else
#line 713 "mcsolver.m"
              check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "mcsolver.m"
          }
#line 561 "mcsolver.m"
        {
#line 561 "mcsolver.m"
          check_hlds__mcsolver__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 561 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 561 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgt_4_p_0_1));
#line 561 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 561 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
#line 561 "mcsolver.m"
        }
#line 561 "mcsolver.m"
        {
#line 561 "mcsolver.m"
          check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_56_56, check_hlds__mcsolver__Assgts_13, ((MR_Box) (check_hlds__mcsolver__Bs1_12)), &check_hlds__mcsolver__conv4_Bs2_14);
        }
#line 561 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
          {
#line 561 "mcsolver.m"
            check_hlds__mcsolver__Bs2_14 = ((MR_Word) check_hlds__mcsolver__conv4_Bs2_14);
#line 561 "mcsolver.m"
            check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
          }
#line 584 "mcsolver.m"
        if (check_hlds__mcsolver__succeeded)
#line 584 "mcsolver.m"
          {
#line 591 "mcsolver.m"
            check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
#line 591 "mcsolver.m"
            check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
#line 591 "mcsolver.m"
            check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
#line 591 "mcsolver.m"
            check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
#line 591 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
#line 7732 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_7_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 7734 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_8_66 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
#line 731 "mcsolver.m"
            {
#line 731 "mcsolver.m"
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0(check_hlds__mcsolver__TypeInfo_7_65, check_hlds__mcsolver__TypeInfo_8_66, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_25_25, &check_hlds__mcsolver__conv5_CmplxCstrts_64);
            }
#line 731 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 731 "mcsolver.m"
              {
#line 731 "mcsolver.m"
                check_hlds__mcsolver__CmplxCstrts_64 = ((MR_Word) check_hlds__mcsolver__conv5_CmplxCstrts_64);
#line 731 "mcsolver.m"
                check_hlds__mcsolver__succeeded = MR_TRUE;
#line 731 "mcsolver.m"
              }
#line 730 "mcsolver.m"
            if (check_hlds__mcsolver__succeeded)
#line 730 "mcsolver.m"
              check_hlds__mcsolver__ComplexCstrts_15 = check_hlds__mcsolver__CmplxCstrts_64;
#line 730 "mcsolver.m"
            else
#line 734 "mcsolver.m"
              check_hlds__mcsolver__ComplexCstrts_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "mcsolver.m"
            {
#line 592 "mcsolver.m"
              return check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrts_6_p_0(check_hlds__mcsolver__SCs_5, check_hlds__mcsolver__X_6, check_hlds__mcsolver__V_7, check_hlds__mcsolver__ComplexCstrts_15, check_hlds__mcsolver__Bs2_14, check_hlds__mcsolver__Bs_9);
            }
#line 584 "mcsolver.m"
          }
#line 584 "mcsolver.m"
      }
#line 569 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 569 "mcsolver.m"
  }
#line 566 "mcsolver.m"
}

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 561 "mcsolver.m"
{
#line 561 "mcsolver.m"
  {
#line 561 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 561 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

#line 561 "mcsolver.m"
    {
#line 561 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
#line 561 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
#line 561 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
      }
#line 561 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
  }
#line 561 "mcsolver.m"
}

#line 557 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__SCs_5,
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Assgts_6,
#line 557 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Bs0_7,
#line 557 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__Bs_8)
#line 557 "mcsolver.m"
{
#line 560 "mcsolver.m"
  {
#line 560 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_9_9;
#line 561 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_Bs_8;

#line 561 "mcsolver.m"
    {
#line 561 "mcsolver.m"
      check_hlds__mcsolver__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 561 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 561 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgts_4_p_0_1));
#line 561 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 561 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
#line 561 "mcsolver.m"
    }
#line 561 "mcsolver.m"
    {
#line 561 "mcsolver.m"
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_9_9, check_hlds__mcsolver__Assgts_6, ((MR_Box) (check_hlds__mcsolver__Bs0_7)), &check_hlds__mcsolver__conv1_Bs_8);
    }
#line 561 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        *check_hlds__mcsolver__Bs_8 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_8);
#line 561 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
      }
#line 560 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 560 "mcsolver.m"
  }
#line 557 "mcsolver.m"
}

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 468 "mcsolver.m"
{
#line 468 "mcsolver.m"
  {
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 468 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv5_HeadVar__3_3;

#line 468 "mcsolver.m"
    {
#line 468 "mcsolver.m"
      check_hlds__mcsolver__conv5_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 468 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv5_HeadVar__3_3));
#line 468 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
  }
#line 468 "mcsolver.m"
}

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 468 "mcsolver.m"
{
#line 468 "mcsolver.m"
  {
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 468 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv4_HeadVar__3_3;

#line 468 "mcsolver.m"
    {
#line 468 "mcsolver.m"
      check_hlds__mcsolver__conv4_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 468 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv4_HeadVar__3_3));
#line 468 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
  }
#line 468 "mcsolver.m"
}

#line 497 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 497 "mcsolver.m"
{
#line 497 "mcsolver.m"
  {
#line 497 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 497 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_29;

#line 497 "mcsolver.m"
    {
#line 497 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__3_29 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 497 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_29));
#line 497 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 497 "mcsolver.m"
  }
#line 497 "mcsolver.m"
}

#line 497 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 497 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 497 "mcsolver.m"
{
#line 497 "mcsolver.m"
  {
#line 497 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 497 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 497 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_23;

#line 497 "mcsolver.m"
    {
#line 497 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_23 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__497__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 497 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_23));
#line 497 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 497 "mcsolver.m"
  }
#line 497 "mcsolver.m"
}

#line 468 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 468 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 468 "mcsolver.m"
{
#line 468 "mcsolver.m"
  {
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 468 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_3;

#line 468 "mcsolver.m"
    {
#line 468 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 468 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_3));
#line 468 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 468 "mcsolver.m"
  }
#line 468 "mcsolver.m"
}

#line 484 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
#line 484 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_1,
#line 484 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
#line 484 "mcsolver.m"
{
#line 486 "mcsolver.m"
  {
#line 486 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 486 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_3;

#line 486 "mcsolver.m"
    if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 489 "mcsolver.m"
      {
#line 489 "mcsolver.m"
        MR_Word check_hlds__mcsolver__TypeInfo_7_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 489 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 489 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_11_11;
#line 489 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_33_33;

#line 468 "mcsolver.m"
        {
#line 468 "mcsolver.m"
          check_hlds__mcsolver__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 468 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1));
#line 468 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 468 "mcsolver.m"
        }
#line 468 "mcsolver.m"
        {
#line 468 "mcsolver.m"
          check_hlds__mcsolver__V_11_11 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__V_33_33, check_hlds__mcsolver__Xs_10);
        }
#line 490 "mcsolver.m"
        {
#line 490 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 490 "mcsolver.m"
        }
#line 489 "mcsolver.m"
      }
#line 486 "mcsolver.m"
    else
#line 486 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 495 "mcsolver.m"
        {
#line 495 "mcsolver.m"
          MR_Word check_hlds__mcsolver__TypeInfo_27_27 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
#line 495 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_19_19;
#line 495 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_20_20;
#line 495 "mcsolver.m"
          MR_Word check_hlds__mcsolver__V_21_21;

#line 497 "mcsolver.m"
          {
#line 497 "mcsolver.m"
            check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 497 "mcsolver.m"
          }
#line 497 "mcsolver.m"
          {
#line 497 "mcsolver.m"
            check_hlds__mcsolver__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[11]));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 497 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 3) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 497 "mcsolver.m"
          }
#line 496 "mcsolver.m"
          {
#line 496 "mcsolver.m"
            check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__V_20_20, check_hlds__mcsolver__Assgtss_16);
          }
#line 496 "mcsolver.m"
          {
#line 496 "mcsolver.m"
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "mcsolver.m"
            MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 496 "mcsolver.m"
          }
#line 495 "mcsolver.m"
        }
#line 486 "mcsolver.m"
      else
#line 486 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 486 "mcsolver.m"
          {
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_7_43;
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Ys_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_7_7;
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_8_8;
#line 486 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_42_42;
#line 462 "mcsolver.m"
            MR_Box check_hlds__mcsolver__conv3_V_7_7;

#line 462 "mcsolver.m"
            {
#line 462 "mcsolver.m"
              check_hlds__mcsolver__conv3_V_7_7 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__X_5)));
            }
#line 462 "mcsolver.m"
            check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv3_V_7_7);
#line 8183 "check_hlds.mcsolver.c"
            check_hlds__mcsolver__TypeInfo_7_43 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 468 "mcsolver.m"
            {
#line 468 "mcsolver.m"
              check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 468 "mcsolver.m"
            }
#line 468 "mcsolver.m"
            {
#line 468 "mcsolver.m"
              check_hlds__mcsolver__V_8_8 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__V_42_42, check_hlds__mcsolver__Ys_6);
            }
#line 487 "mcsolver.m"
            {
#line 487 "mcsolver.m"
              check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_7_7));
#line 487 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mcsolver__V_8_8));
#line 487 "mcsolver.m"
            }
#line 486 "mcsolver.m"
          }
#line 486 "mcsolver.m"
        else
#line 492 "mcsolver.m"
          {
#line 492 "mcsolver.m"
            MR_Word check_hlds__mcsolver__TypeInfo_7_49 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 492 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
#line 492 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_14_14;
#line 492 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_48_48;

#line 468 "mcsolver.m"
            {
#line 468 "mcsolver.m"
              check_hlds__mcsolver__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
#line 468 "mcsolver.m"
            }
#line 468 "mcsolver.m"
            {
#line 468 "mcsolver.m"
              check_hlds__mcsolver__V_14_14 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__V_48_48, check_hlds__mcsolver__Xs_13);
            }
#line 493 "mcsolver.m"
            {
#line 493 "mcsolver.m"
              check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "mcsolver.m"
              MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 493 "mcsolver.m"
            }
#line 492 "mcsolver.m"
          }
#line 486 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_3;
#line 486 "mcsolver.m"
  }
#line 484 "mcsolver.m"
}

#line 478 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 478 "mcsolver.m"
{
#line 478 "mcsolver.m"
  {
#line 478 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 478 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__4_25;

#line 478 "mcsolver.m"
    {
#line 478 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__4_25 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__2_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 478 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__4_25));
#line 478 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 478 "mcsolver.m"
  }
#line 478 "mcsolver.m"
}

#line 478 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 478 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 478 "mcsolver.m"
{
#line 478 "mcsolver.m"
  {
#line 478 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 478 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 478 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_15;

#line 478 "mcsolver.m"
    {
#line 478 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_15 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__478__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 478 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_15));
#line 478 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 478 "mcsolver.m"
  }
#line 478 "mcsolver.m"
}

#line 472 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
#line 472 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1)
#line 472 "mcsolver.m"
{
#line 474 "mcsolver.m"
  {
#line 474 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 474 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__2_2;

#line 474 "mcsolver.m"
    if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 475 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "mcsolver.m"
    else
#line 474 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 477 "mcsolver.m"
        {
#line 477 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Assgtss_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 478 "mcsolver.m"
          MR_Box check_hlds__mcsolver__conv2_HeadVar__2_2;

#line 478 "mcsolver.m"
          {
#line 478 "mcsolver.m"
            check_hlds__mcsolver__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], (MR_Word) &check_hlds__mcsolver_scalar_common_6[1], check_hlds__mcsolver__Assgtss_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 478 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) check_hlds__mcsolver__conv2_HeadVar__2_2);
#line 477 "mcsolver.m"
        }
#line 474 "mcsolver.m"
      else
#line 474 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 474 "mcsolver.m"
          {
#line 474 "mcsolver.m"
            MR_Word check_hlds__mcsolver__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Ys_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 474 "mcsolver.m"
            {
#line 474 "mcsolver.m"
              check_hlds__mcsolver__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__mcsolver__X_3));
#line 474 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_4));
#line 474 "mcsolver.m"
            }
#line 474 "mcsolver.m"
          }
#line 474 "mcsolver.m"
        else
#line 476 "mcsolver.m"
          check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__2_2;
#line 474 "mcsolver.m"
  }
#line 472 "mcsolver.m"
}

#line 460 "mcsolver.m"
static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
#line 460 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Eqvs_4,
#line 460 "mcsolver.m"
  MR_Word check_hlds__mcsolver__X_5)
#line 460 "mcsolver.m"
{
#line 462 "mcsolver.m"
  {
#line 462 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 462 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__3_3;
#line 462 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv0_HeadVar__3_3;

#line 462 "mcsolver.m"
    {
#line 462 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_3 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_4, ((MR_Box) (check_hlds__mcsolver__X_5)));
    }
#line 462 "mcsolver.m"
    check_hlds__mcsolver__HeadVar__3_3 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__3_3);
#line 462 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__3_3;
#line 462 "mcsolver.m"
  }
#line 460 "mcsolver.m"
}

#line 297 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 297 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 297 "mcsolver.m"
{
#line 297 "mcsolver.m"
  {
#line 297 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 297 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

#line 297 "mcsolver.m"
    {
#line 297 "mcsolver.m"
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
#line 297 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
#line 297 "mcsolver.m"
  }
#line 297 "mcsolver.m"
}

#line 272 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
#line 272 "mcsolver.m"
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
#line 272 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
#line 272 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3)
#line 272 "mcsolver.m"
{
#line 275 "mcsolver.m"
  {
#line 275 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 275 "mcsolver.m"
    if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 275 "mcsolver.m"
      {
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_43_43;
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_44_44;
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_45_45;
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_46_46;
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_47_47;
#line 275 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_48_48;

#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__Var_4));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) (check_hlds__mcsolver__Value_5));
#line 325 "mcsolver.m"
        }
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          check_hlds__mcsolver__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_45_45));
#line 325 "mcsolver.m"
        }
#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          MR_Word base;
#line 325 "mcsolver.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_47_47));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
#line 325 "mcsolver.m"
        }
#line 275 "mcsolver.m"
      }
#line 275 "mcsolver.m"
    else
#line 275 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 277 "mcsolver.m"
        {
#line 277 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));

#line 295 "mcsolver.m"
          if ((check_hlds__mcsolver__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "mcsolver.m"
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
#line 295 "mcsolver.m"
          else
#line 296 "mcsolver.m"
            {
#line 296 "mcsolver.m"
              MR_Word check_hlds__mcsolver__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 0)));
#line 296 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Xs_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 1)));
#line 296 "mcsolver.m"
              MR_Word check_hlds__mcsolver__V_61_61;
#line 297 "mcsolver.m"
              MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

#line 297 "mcsolver.m"
              {
#line 297 "mcsolver.m"
                check_hlds__mcsolver__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 297 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
#line 297 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 1) = ((MR_Box) (check_hlds__mcsolver__prepare_var_constraint_3_p_0_1));
#line 297 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 297 "mcsolver.m"
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 3) = ((MR_Box) (check_hlds__mcsolver__X_56));
#line 297 "mcsolver.m"
              }
#line 297 "mcsolver.m"
              {
#line 297 "mcsolver.m"
                mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_61_61, check_hlds__mcsolver__Xs_57, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
              }
#line 297 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
#line 296 "mcsolver.m"
            }
#line 277 "mcsolver.m"
        }
#line 275 "mcsolver.m"
      else
#line 275 "mcsolver.m"
        if (((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 279 "mcsolver.m"
          {
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Var1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__Var2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_74_74;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_75_75;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_76_76;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_78_78;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_80_80;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_81_81;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_82_82;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_84_84;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_86_86;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_87_87;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_88_88;
#line 279 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_89_89;

#line 302 "mcsolver.m"
            {
#line 302 "mcsolver.m"
              check_hlds__mcsolver__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 1) = ((MR_Box) ((MR_Integer) 1));
#line 302 "mcsolver.m"
            }
#line 302 "mcsolver.m"
            {
#line 302 "mcsolver.m"
              check_hlds__mcsolver__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 302 "mcsolver.m"
            }
#line 302 "mcsolver.m"
            {
#line 302 "mcsolver.m"
              check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_76_76));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) (check_hlds__mcsolver__V_78_78));
#line 302 "mcsolver.m"
            }
#line 303 "mcsolver.m"
            {
#line 303 "mcsolver.m"
              check_hlds__mcsolver__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "mcsolver.m"
            }
#line 303 "mcsolver.m"
            {
#line 303 "mcsolver.m"
              check_hlds__mcsolver__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "mcsolver.m"
            }
#line 303 "mcsolver.m"
            {
#line 303 "mcsolver.m"
              check_hlds__mcsolver__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__V_82_82));
#line 303 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__V_84_84));
#line 303 "mcsolver.m"
            }
#line 304 "mcsolver.m"
            check_hlds__mcsolver__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
#line 304 "mcsolver.m"
            check_hlds__mcsolver__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
#line 304 "mcsolver.m"
            check_hlds__mcsolver__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
#line 304 "mcsolver.m"
            check_hlds__mcsolver__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
#line 304 "mcsolver.m"
            {
#line 304 "mcsolver.m"
              check_hlds__mcsolver__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 0) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
#line 304 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 1) = ((MR_Box) (check_hlds__mcsolver__V_86_86));
#line 304 "mcsolver.m"
            }
#line 302 "mcsolver.m"
            {
#line 302 "mcsolver.m"
              check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (check_hlds__mcsolver__V_80_80));
#line 302 "mcsolver.m"
            }
#line 302 "mcsolver.m"
            {
#line 302 "mcsolver.m"
              MR_Word base;
#line 302 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_87_87));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_88_88));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_74_74));
#line 302 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_89_89));
#line 302 "mcsolver.m"
            }
#line 279 "mcsolver.m"
          }
#line 275 "mcsolver.m"
        else
#line 275 "mcsolver.m"
          if (((((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 283 "mcsolver.m"
            {
#line 283 "mcsolver.m"
              MR_Word check_hlds__mcsolver__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 284 "mcsolver.m"
              {
#line 284 "mcsolver.m"
                check_hlds__mcsolver__at_most_one_3_p_0(check_hlds__mcsolver__Vars_27, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 284 "mcsolver.m"
                return;
              }
#line 283 "mcsolver.m"
            }
#line 275 "mcsolver.m"
          else
#line 275 "mcsolver.m"
            if (((((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 281 "mcsolver.m"
              {
#line 281 "mcsolver.m"
                MR_Word check_hlds__mcsolver__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Ys_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));

#line 282 "mcsolver.m"
                {
#line 282 "mcsolver.m"
                  check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(check_hlds__mcsolver__X_21, check_hlds__mcsolver__Ys_22, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 282 "mcsolver.m"
                  return;
                }
#line 281 "mcsolver.m"
              }
#line 275 "mcsolver.m"
            else
#line 285 "mcsolver.m"
              {
#line 285 "mcsolver.m"
                MR_Word check_hlds__mcsolver__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

#line 286 "mcsolver.m"
                {
#line 286 "mcsolver.m"
                  check_hlds__mcsolver__exactly_one_3_p_0(check_hlds__mcsolver__Vars_32, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
#line 286 "mcsolver.m"
                  return;
                }
#line 285 "mcsolver.m"
              }
#line 275 "mcsolver.m"
  }
#line 272 "mcsolver.m"
}

#line 256 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
#line 256 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 256 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 256 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
#line 256 "mcsolver.m"
{
#line 256 "mcsolver.m"
  {
#line 256 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 256 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 256 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__2_17;

#line 256 "mcsolver.m"
    {
#line 256 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__256__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv2_HeadVar__2_17);
    }
#line 256 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 256 "mcsolver.m"
      {
#line 256 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__2_17));
#line 256 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 256 "mcsolver.m"
      }
#line 256 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 256 "mcsolver.m"
  }
#line 256 "mcsolver.m"
}

#line 236 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 236 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 236 "mcsolver.m"
{
#line 236 "mcsolver.m"
  {
#line 236 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 236 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

#line 236 "mcsolver.m"
    {
#line 236 "mcsolver.m"
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
#line 236 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
#line 236 "mcsolver.m"
  }
#line 236 "mcsolver.m"
}

#line 241 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
#line 241 "mcsolver.m"
  MR_Word check_hlds__mcsolver__Constraint_4,
#line 241 "mcsolver.m"
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
#line 241 "mcsolver.m"
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14)
#line 241 "mcsolver.m"
{
#line 246 "mcsolver.m"
  {
#line 246 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 246 "mcsolver.m"
    if (((MR_tag((MR_Word) check_hlds__mcsolver__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 246 "mcsolver.m"
      {
#line 246 "mcsolver.m"
        MR_Word check_hlds__mcsolver__VarConstraint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));

#line 247 "mcsolver.m"
        {
#line 247 "mcsolver.m"
          check_hlds__mcsolver__prepare_var_constraint_3_p_0(check_hlds__mcsolver__VarConstraint_6, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
#line 247 "mcsolver.m"
          return;
        }
#line 246 "mcsolver.m"
      }
#line 246 "mcsolver.m"
    else
#line 246 "mcsolver.m"
      if (((MR_tag((MR_Word) check_hlds__mcsolver__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 249 "mcsolver.m"
        {
#line 249 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
#line 236 "mcsolver.m"
          MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14;

#line 236 "mcsolver.m"
          {
#line 236 "mcsolver.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[11], check_hlds__mcsolver__Constraints_7, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
          }
#line 236 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
#line 249 "mcsolver.m"
        }
#line 246 "mcsolver.m"
      else
#line 252 "mcsolver.m"
        {
#line 252 "mcsolver.m"
          MR_Word check_hlds__mcsolver__Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
#line 264 "mcsolver.m"
          MR_Word check_hlds__mcsolver__DisjOfAssgts_12;

#line 256 "mcsolver.m"
          {
#line 256 "mcsolver.m"
            check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[12], check_hlds__mcsolver__Constraints_32, &check_hlds__mcsolver__DisjOfAssgts_12);
          }
#line 264 "mcsolver.m"
          if (check_hlds__mcsolver__succeeded)
#line 263 "mcsolver.m"
            {
#line 263 "mcsolver.m"
              check_hlds__mcsolver__disjunction_of_assignments_3_p_0(check_hlds__mcsolver__DisjOfAssgts_12, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
#line 263 "mcsolver.m"
              return;
            }
#line 264 "mcsolver.m"
          else
#line 265 "mcsolver.m"
            {
#line 265 "mcsolver.m"
              {
#line 265 "mcsolver.m"
                mercury__require__sorry_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.prepare_abstract_constraint\'/3", (MR_String) "Disjuction of constraints - general case.");
#line 265 "mcsolver.m"
                return;
              }
#line 265 "mcsolver.m"
            }
#line 252 "mcsolver.m"
        }
#line 246 "mcsolver.m"
  }
#line 241 "mcsolver.m"
}

#line 530 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 530 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 530 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 530 "mcsolver.m"
{
#line 530 "mcsolver.m"
  {
#line 530 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 530 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv4_HeadVar__4_19;

#line 530 "mcsolver.m"
    {
#line 530 "mcsolver.m"
      check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__530__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv4_HeadVar__4_19);
    }
#line 530 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv4_HeadVar__4_19));
#line 530 "mcsolver.m"
  }
#line 530 "mcsolver.m"
}

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 746 "mcsolver.m"
{
#line 746 "mcsolver.m"
  {
#line 746 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 746 "mcsolver.m"
    *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8));
#line 746 "mcsolver.m"
    {
#line 746 "mcsolver.m"
      ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr);
#line 746 "mcsolver.m"
      return;
    }
#line 746 "mcsolver.m"
  }
#line 746 "mcsolver.m"
}

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 746 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 746 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
#line 746 "mcsolver.m"
  MR_Cont check_hlds__mcsolver__cont,
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__cont_env_ptr)
#line 746 "mcsolver.m"
{
#line 746 "mcsolver.m"
  {
#line 746 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s check_hlds__mcsolver__env;

#line 746 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3 = check_hlds__mcsolver__wrapper_arg_3;
#line 746 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont = check_hlds__mcsolver__cont;
#line 746 "mcsolver.m"
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
#line 746 "mcsolver.m"
    {
#line 746 "mcsolver.m"
      MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

#line 746 "mcsolver.m"
      {
#line 746 "mcsolver.m"
        check_hlds__mcsolver__solve_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8, check_hlds__mcsolver__solve_2_p_0_2, &check_hlds__mcsolver__env);
      }
#line 746 "mcsolver.m"
    }
#line 746 "mcsolver.m"
  }
#line 746 "mcsolver.m"
}

#line 561 "mcsolver.m"
static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 561 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 561 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 561 "mcsolver.m"
{
#line 561 "mcsolver.m"
  {
#line 561 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 561 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

#line 561 "mcsolver.m"
    {
#line 561 "mcsolver.m"
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
#line 561 "mcsolver.m"
    if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
#line 561 "mcsolver.m"
        check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
      }
#line 561 "mcsolver.m"
    return check_hlds__mcsolver__succeeded;
#line 561 "mcsolver.m"
  }
#line 561 "mcsolver.m"
}

#line 746 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
#line 746 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 746 "mcsolver.m"
{
#line 746 "mcsolver.m"
  {
#line 746 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 746 "mcsolver.m"
    (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5 = ((MR_Word) (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5);
#line 746 "mcsolver.m"
    {
#line 746 "mcsolver.m"
      check_hlds__mcsolver__solve_2_p_0_4(check_hlds__mcsolver__env_ptr);
#line 746 "mcsolver.m"
      return;
    }
#line 746 "mcsolver.m"
  }
#line 746 "mcsolver.m"
}

#line 505 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
#line 505 "mcsolver.m"
  void * check_hlds__mcsolver__env_ptr_arg)
#line 505 "mcsolver.m"
{
#line 505 "mcsolver.m"
  {
#line 505 "mcsolver.m"
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

#line 505 "mcsolver.m"
    {
#line 529 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 529 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_67_67;
#line 529 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_68_68;
#line 529 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_69_69;
#line 530 "mcsolver.m"
      MR_Box check_hlds__mcsolver__conv5_Bindings_4;

#line 529 "mcsolver.m"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 529 "mcsolver.m"
      check_hlds__mcsolver__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 529 "mcsolver.m"
      check_hlds__mcsolver__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 529 "mcsolver.m"
      check_hlds__mcsolver__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 9182 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 9184 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 530 "mcsolver.m"
      {
#line 530 "mcsolver.m"
        MR_Word base;
#line 530 "mcsolver.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "mcsolver.m"
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56 = base;
#line 530 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[3]));
#line 530 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_6));
#line 530 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "mcsolver.m"
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50));
#line 530 "mcsolver.m"
      }
#line 537 "mcsolver.m"
      {
#line 537 "mcsolver.m"
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57 = mercury__map__keys_1_f_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5);
      }
#line 9209 "check_hlds.mcsolver.c"
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
#line 530 "mcsolver.m"
      {
#line 530 "mcsolver.m"
        mercury__list__foldl_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57, ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5)), &check_hlds__mcsolver__conv5_Bindings_4);
      }
#line 530 "mcsolver.m"
      *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4) = ((MR_Word) check_hlds__mcsolver__conv5_Bindings_4);
#line 530 "mcsolver.m"
      {
#line 530 "mcsolver.m"
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr);
#line 530 "mcsolver.m"
        return;
      }
#line 505 "mcsolver.m"
    }
#line 505 "mcsolver.m"
  }
#line 505 "mcsolver.m"
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
#line 505 "mcsolver.m"
    {
#line 505 "mcsolver.m"
      MR_bool check_hlds__mcsolver__succeeded;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__TypeInfo_13_44;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__TypeInfo_14_45;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_7_7;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__Bs1_15;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_16_16;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_17_17;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_30_30;
#line 505 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_40_40;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_18_18;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_19_19;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_20_20;
#line 519 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_21_21;
#line 561 "mcsolver.m"
      MR_Box check_hlds__mcsolver__conv1_Bs1_15;
#line 520 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_22_22;
#line 520 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_23_23;
#line 520 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_24_24;
#line 520 "mcsolver.m"
      MR_Word check_hlds__mcsolver__V_25_25;

#line 506 "mcsolver.m"
      {
#line 506 "mcsolver.m"
        check_hlds__mcsolver__V_7_7 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0);
      }
#line 519 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 519 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 519 "mcsolver.m"
      check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 519 "mcsolver.m"
      check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 519 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 561 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
#line 561 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_1));
#line 561 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 561 "mcsolver.m"
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
#line 561 "mcsolver.m"
      }
#line 561 "mcsolver.m"
      {
#line 561 "mcsolver.m"
        check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_7_7)), &check_hlds__mcsolver__conv1_Bs1_15);
      }
#line 561 "mcsolver.m"
      if (check_hlds__mcsolver__succeeded)
#line 561 "mcsolver.m"
        {
#line 561 "mcsolver.m"
          check_hlds__mcsolver__Bs1_15 = ((MR_Word) check_hlds__mcsolver__conv1_Bs1_15);
#line 561 "mcsolver.m"
          check_hlds__mcsolver__succeeded = MR_TRUE;
#line 561 "mcsolver.m"
        }
#line 505 "mcsolver.m"
      if (check_hlds__mcsolver__succeeded)
#line 505 "mcsolver.m"
        {
#line 520 "mcsolver.m"
          check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
#line 520 "mcsolver.m"
          check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
#line 520 "mcsolver.m"
          check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
#line 520 "mcsolver.m"
          check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
#line 520 "mcsolver.m"
          check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
#line 9355 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__TypeInfo_13_44 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 9357 "check_hlds.mcsolver.c"
          check_hlds__mcsolver__TypeInfo_14_45 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
#line 746 "mcsolver.m"
          {
#line 746 "mcsolver.m"
            check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 746 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[2]));
#line 746 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_3));
#line 746 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 746 "mcsolver.m"
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
#line 746 "mcsolver.m"
          }
#line 746 "mcsolver.m"
          {
#line 746 "mcsolver.m"
            mercury__list__foldl_4_p_7(check_hlds__mcsolver__TypeInfo_13_44, check_hlds__mcsolver__TypeInfo_14_45, check_hlds__mcsolver__V_40_40, check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__Bs1_15)), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5, check_hlds__mcsolver__solve_2_p_0_5, &check_hlds__mcsolver__env);
          }
#line 505 "mcsolver.m"
        }
#line 505 "mcsolver.m"
    }
#line 116 "mcsolver.m"
  }
#line 116 "mcsolver.m"
}

#line 445 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 445 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 445 "mcsolver.m"
{
#line 445 "mcsolver.m"
  {
#line 445 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 445 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 445 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv11_HeadVar__3_85;

#line 445 "mcsolver.m"
    {
#line 445 "mcsolver.m"
      check_hlds__mcsolver__conv11_HeadVar__3_85 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__445__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 445 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv11_HeadVar__3_85));
#line 445 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 445 "mcsolver.m"
  }
#line 445 "mcsolver.m"
}

#line 438 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 438 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 438 "mcsolver.m"
{
#line 438 "mcsolver.m"
  {
#line 438 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 438 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 438 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv9_HeadVar__3_78;

#line 438 "mcsolver.m"
    {
#line 438 "mcsolver.m"
      check_hlds__mcsolver__conv9_HeadVar__3_78 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__438__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 438 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv9_HeadVar__3_78));
#line 438 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 438 "mcsolver.m"
  }
#line 438 "mcsolver.m"
}

#line 431 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 431 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 431 "mcsolver.m"
{
#line 431 "mcsolver.m"
  {
#line 431 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 431 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 431 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv7_HeadVar__3_73;

#line 431 "mcsolver.m"
    {
#line 431 "mcsolver.m"
      check_hlds__mcsolver__conv7_HeadVar__3_73 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__431__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 431 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv7_HeadVar__3_73));
#line 431 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 431 "mcsolver.m"
  }
#line 431 "mcsolver.m"
}

#line 418 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 418 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 418 "mcsolver.m"
{
#line 418 "mcsolver.m"
  {
#line 418 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 418 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 418 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv5_HeadVar__3_63;

#line 418 "mcsolver.m"
    {
#line 418 "mcsolver.m"
      check_hlds__mcsolver__conv5_HeadVar__3_63 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__418__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 418 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv5_HeadVar__3_63));
#line 418 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 418 "mcsolver.m"
  }
#line 418 "mcsolver.m"
}

#line 405 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 405 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
#line 405 "mcsolver.m"
{
#line 405 "mcsolver.m"
  {
#line 405 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
#line 405 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 405 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv3_HeadVar__3_50;

#line 405 "mcsolver.m"
    {
#line 405 "mcsolver.m"
      check_hlds__mcsolver__conv3_HeadVar__3_50 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__405__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
#line 405 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_HeadVar__3_50));
#line 405 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_3;
#line 405 "mcsolver.m"
  }
#line 405 "mcsolver.m"
}

#line 401 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
#line 401 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 401 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 401 "mcsolver.m"
{
#line 401 "mcsolver.m"
  {
#line 401 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 401 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 401 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_3;

#line 401 "mcsolver.m"
    {
#line 401 "mcsolver.m"
      check_hlds__mcsolver__conv2_HeadVar__3_3 = check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 401 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_3));
#line 401 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 401 "mcsolver.m"
  }
#line 401 "mcsolver.m"
}

#line 394 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
#line 394 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 394 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 394 "mcsolver.m"
{
#line 394 "mcsolver.m"
  {
#line 394 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 394 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_37;

#line 394 "mcsolver.m"
    {
#line 394 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_37 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__394__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 394 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_37));
#line 394 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 394 "mcsolver.m"
  }
#line 394 "mcsolver.m"
}

#line 388 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
#line 388 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 388 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 388 "mcsolver.m"
{
#line 388 "mcsolver.m"
  {
#line 388 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 388 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 388 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_32;

#line 388 "mcsolver.m"
    {
#line 388 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__3_32 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__388__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 388 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_32));
#line 388 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 388 "mcsolver.m"
  }
#line 388 "mcsolver.m"
}

#line 112 "mcsolver.m"
MR_Word MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0(
#line 112 "mcsolver.m"
  MR_Word check_hlds__mcsolver__PCs_3)
#line 112 "mcsolver.m"
{
#line 383 "mcsolver.m"
  {
#line 383 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__SCs_4;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_128_128 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_129_129;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeCtorInfo_130_130;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_138_138;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__TypeInfo_144_144;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Eqvs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Assgts_6;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Impls_9;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__ComplexCstrts_13;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__PropGraph_14;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__ComplexCstrtsMap_17;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AssgtVars_22;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AndImplVars_25;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AndComplexCstrtVars_28;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__AllVars_29;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_30_30;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_35_35;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_44_44;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_45_45;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_46_46;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_57_57;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_58_58;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_59_59;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_69_69;
#line 383 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 385 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 385 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_122_122;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_123_123;
#line 394 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_124_124;
#line 401 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_125_125;
#line 401 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_126_126;
#line 401 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_127_127;
#line 405 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv4_PropGraph_14;
#line 418 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv6_ComplexCstrtsMap_17;
#line 431 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv8_AssgtVars_22;
#line 438 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv10_AndImplVars_25;
#line 445 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv12_AndComplexCstrtVars_28;

#line 388 "mcsolver.m"
    {
#line 388 "mcsolver.m"
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_1));
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 388 "mcsolver.m"
    }
#line 388 "mcsolver.m"
    {
#line 388 "mcsolver.m"
      check_hlds__mcsolver__Assgts_6 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_116_116);
    }
#line 9762 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeCtorInfo_129_129 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0;
#line 394 "mcsolver.m"
    {
#line 394 "mcsolver.m"
      check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 394 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[3]));
#line 394 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_2));
#line 394 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 394 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 394 "mcsolver.m"
    }
#line 394 "mcsolver.m"
    check_hlds__mcsolver__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 394 "mcsolver.m"
    check_hlds__mcsolver__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 394 "mcsolver.m"
    check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 394 "mcsolver.m"
    check_hlds__mcsolver__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 394 "mcsolver.m"
    {
#line 394 "mcsolver.m"
      check_hlds__mcsolver__Impls_9 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__V_44_44);
    }
#line 9791 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeCtorInfo_130_130 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;
#line 401 "mcsolver.m"
    {
#line 401 "mcsolver.m"
      check_hlds__mcsolver__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 401 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[4]));
#line 401 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_3));
#line 401 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 401 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 401 "mcsolver.m"
    }
#line 401 "mcsolver.m"
    check_hlds__mcsolver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
#line 401 "mcsolver.m"
    check_hlds__mcsolver__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
#line 401 "mcsolver.m"
    check_hlds__mcsolver__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
#line 401 "mcsolver.m"
    check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
#line 401 "mcsolver.m"
    {
#line 401 "mcsolver.m"
      check_hlds__mcsolver__ComplexCstrts_13 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__V_45_45, check_hlds__mcsolver__V_46_46);
    }
#line 9820 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeInfo_138_138 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
#line 413 "mcsolver.m"
    {
#line 413 "mcsolver.m"
      check_hlds__mcsolver__V_58_58 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
#line 413 "mcsolver.m"
    {
#line 413 "mcsolver.m"
      check_hlds__mcsolver__V_59_59 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
#line 413 "mcsolver.m"
    {
#line 413 "mcsolver.m"
      check_hlds__mcsolver__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 0) = ((MR_Box) (check_hlds__mcsolver__V_58_58));
#line 413 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 1) = ((MR_Box) (check_hlds__mcsolver__V_59_59));
#line 413 "mcsolver.m"
    }
#line 405 "mcsolver.m"
    {
#line 405 "mcsolver.m"
      check_hlds__mcsolver__conv4_PropGraph_14 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[6], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__V_57_57)));
    }
#line 405 "mcsolver.m"
    check_hlds__mcsolver__PropGraph_14 = ((MR_Word) check_hlds__mcsolver__conv4_PropGraph_14);
#line 426 "mcsolver.m"
    {
#line 426 "mcsolver.m"
      check_hlds__mcsolver__V_69_69 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_130_130);
    }
#line 418 "mcsolver.m"
    {
#line 418 "mcsolver.m"
      check_hlds__mcsolver__conv6_ComplexCstrtsMap_17 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[7], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__V_69_69)));
    }
#line 418 "mcsolver.m"
    check_hlds__mcsolver__ComplexCstrtsMap_17 = ((MR_Word) check_hlds__mcsolver__conv6_ComplexCstrtsMap_17);
#line 9861 "check_hlds.mcsolver.c"
    check_hlds__mcsolver__TypeInfo_144_144 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
#line 431 "mcsolver.m"
    {
#line 431 "mcsolver.m"
      check_hlds__mcsolver__conv8_AssgtVars_22 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[8], check_hlds__mcsolver__Assgts_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 431 "mcsolver.m"
    check_hlds__mcsolver__AssgtVars_22 = ((MR_Word) check_hlds__mcsolver__conv8_AssgtVars_22);
#line 438 "mcsolver.m"
    {
#line 438 "mcsolver.m"
      check_hlds__mcsolver__conv10_AndImplVars_25 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[9], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__AssgtVars_22)));
    }
#line 438 "mcsolver.m"
    check_hlds__mcsolver__AndImplVars_25 = ((MR_Word) check_hlds__mcsolver__conv10_AndImplVars_25);
#line 445 "mcsolver.m"
    {
#line 445 "mcsolver.m"
      check_hlds__mcsolver__conv12_AndComplexCstrtVars_28 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[10], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__AndImplVars_25)));
    }
#line 445 "mcsolver.m"
    check_hlds__mcsolver__AndComplexCstrtVars_28 = ((MR_Word) check_hlds__mcsolver__conv12_AndComplexCstrtVars_28);
#line 452 "mcsolver.m"
    {
#line 452 "mcsolver.m"
      check_hlds__mcsolver__AllVars_29 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__AndComplexCstrtVars_28);
    }
#line 455 "mcsolver.m"
    {
#line 455 "mcsolver.m"
      check_hlds__mcsolver__SCs_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 0) = ((MR_Box) (check_hlds__mcsolver__AllVars_29));
#line 455 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 1) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
#line 455 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 2) = ((MR_Box) (check_hlds__mcsolver__Assgts_6));
#line 455 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 3) = ((MR_Box) (check_hlds__mcsolver__PropGraph_14));
#line 455 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 4) = ((MR_Box) (check_hlds__mcsolver__ComplexCstrtsMap_17));
#line 455 "mcsolver.m"
    }
#line 383 "mcsolver.m"
    return check_hlds__mcsolver__SCs_4;
#line 383 "mcsolver.m"
  }
#line 112 "mcsolver.m"
}

#line 377 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 377 "mcsolver.m"
{
#line 377 "mcsolver.m"
  {
#line 377 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 377 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_31;

#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      check_hlds__mcsolver__conv1_HeadVar__3_31 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 377 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_31));
#line 377 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 377 "mcsolver.m"
  }
#line 377 "mcsolver.m"
}

#line 377 "mcsolver.m"
static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 377 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
#line 377 "mcsolver.m"
{
#line 377 "mcsolver.m"
  {
#line 377 "mcsolver.m"
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
#line 377 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 377 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_HeadVar__2_14;

#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      check_hlds__mcsolver__conv0_HeadVar__2_14 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__377__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
#line 377 "mcsolver.m"
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__2_14));
#line 377 "mcsolver.m"
    return check_hlds__mcsolver__wrapper_arg_2;
#line 377 "mcsolver.m"
  }
#line 377 "mcsolver.m"
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
#line 375 "mcsolver.m"
  {
#line 375 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__Assgtss_6;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_22_22;
#line 375 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;

#line 377 "mcsolver.m"
    {
#line 377 "mcsolver.m"
      check_hlds__mcsolver__Assgtss_6 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_6[0], check_hlds__mcsolver__DisjOfAssgts_4);
    }
#line 379 "mcsolver.m"
    {
#line 379 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "mcsolver.m"
      MR_hl_field(MR_mktag(3), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__Assgtss_6));
#line 379 "mcsolver.m"
    }
#line 379 "mcsolver.m"
    check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 0)));
#line 379 "mcsolver.m"
    check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 1)));
#line 379 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 2)));
#line 379 "mcsolver.m"
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 3)));
#line 379 "mcsolver.m"
    {
#line 379 "mcsolver.m"
      check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 379 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 379 "mcsolver.m"
    }
#line 378 "mcsolver.m"
    {
#line 378 "mcsolver.m"
      MR_Word base;
#line 378 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 378 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_10 = base;
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_22_22));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 378 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 378 "mcsolver.m"
    }
#line 375 "mcsolver.m"
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
#line 362 "mcsolver.m"
  {
#line 362 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 362 "mcsolver.m"
    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "mcsolver.m"
      {
#line 363 "mcsolver.m"
        {
#line 363 "mcsolver.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.exactly_one\'/3", (MR_String) "exactly_one of zero variables");
#line 363 "mcsolver.m"
          return;
        }
#line 362 "mcsolver.m"
      }
#line 362 "mcsolver.m"
    else
#line 362 "mcsolver.m"
      {
#line 362 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
#line 362 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

#line 362 "mcsolver.m"
        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "mcsolver.m"
          {
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_38_38;
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_39_39;
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_40_40;
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_41_41;
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_42_42;
#line 365 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_43_43;

#line 325 "mcsolver.m"
            {
#line 325 "mcsolver.m"
              check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__V_31_31));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 1));
#line 325 "mcsolver.m"
            }
#line 325 "mcsolver.m"
            check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
#line 325 "mcsolver.m"
            check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
#line 325 "mcsolver.m"
            check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
#line 325 "mcsolver.m"
            check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
#line 325 "mcsolver.m"
            {
#line 325 "mcsolver.m"
              check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 325 "mcsolver.m"
            }
#line 325 "mcsolver.m"
            {
#line 325 "mcsolver.m"
              MR_Word base;
#line 325 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 325 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 325 "mcsolver.m"
            }
#line 365 "mcsolver.m"
          }
#line 362 "mcsolver.m"
        else
#line 368 "mcsolver.m"
          {
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_14_14;
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_15_15;
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_16_16;
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_23_23;
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_24_24;
#line 368 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_25_25;

#line 370 "mcsolver.m"
            {
#line 370 "mcsolver.m"
              check_hlds__mcsolver__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "mcsolver.m"
              MR_hl_field(MR_mktag(2), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
#line 370 "mcsolver.m"
            }
#line 370 "mcsolver.m"
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
#line 370 "mcsolver.m"
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
#line 370 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
#line 370 "mcsolver.m"
            check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
#line 370 "mcsolver.m"
            {
#line 370 "mcsolver.m"
              check_hlds__mcsolver__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 370 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 1) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 370 "mcsolver.m"
            }
#line 369 "mcsolver.m"
            {
#line 369 "mcsolver.m"
              MR_Word base;
#line 369 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 369 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 369 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 369 "mcsolver.m"
            }
#line 368 "mcsolver.m"
          }
#line 362 "mcsolver.m"
      }
#line 362 "mcsolver.m"
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
#line 346 "mcsolver.m"
  {
#line 346 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 346 "mcsolver.m"
    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
#line 346 "mcsolver.m"
    else
#line 346 "mcsolver.m"
      {
#line 346 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
#line 346 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

#line 346 "mcsolver.m"
        if ((check_hlds__mcsolver__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
#line 346 "mcsolver.m"
        else
#line 346 "mcsolver.m"
          {
#line 346 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 1)));
#line 346 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 0)));

#line 346 "mcsolver.m"
            if ((check_hlds__mcsolver__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "mcsolver.m"
              {
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_42_42;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_43_43;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_44_44;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_46_46;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_48_48;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_49_49;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_50_50;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_52_52;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_54_54;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_55_55;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_56_56;
#line 308 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_57_57;

#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) ((MR_Integer) 1));
#line 309 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 309 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
#line 309 "mcsolver.m"
                }
#line 310 "mcsolver.m"
                {
#line 310 "mcsolver.m"
                  check_hlds__mcsolver__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 1) = ((MR_Box) ((MR_Integer) 1));
#line 310 "mcsolver.m"
                }
#line 310 "mcsolver.m"
                {
#line 310 "mcsolver.m"
                  check_hlds__mcsolver__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 310 "mcsolver.m"
                }
#line 310 "mcsolver.m"
                {
#line 310 "mcsolver.m"
                  check_hlds__mcsolver__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 0) = ((MR_Box) (check_hlds__mcsolver__V_50_50));
#line 310 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 1) = ((MR_Box) (check_hlds__mcsolver__V_52_52));
#line 310 "mcsolver.m"
                }
#line 311 "mcsolver.m"
                check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
#line 311 "mcsolver.m"
                check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
#line 311 "mcsolver.m"
                check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
#line 311 "mcsolver.m"
                check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
#line 311 "mcsolver.m"
                {
#line 311 "mcsolver.m"
                  check_hlds__mcsolver__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (check_hlds__mcsolver__V_49_49));
#line 311 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
#line 311 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  check_hlds__mcsolver__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
#line 309 "mcsolver.m"
                }
#line 309 "mcsolver.m"
                {
#line 309 "mcsolver.m"
                  MR_Word base;
#line 309 "mcsolver.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_56_56));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 309 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_57_57));
#line 309 "mcsolver.m"
                }
#line 308 "mcsolver.m"
              }
#line 346 "mcsolver.m"
            else
#line 353 "mcsolver.m"
              {
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_18_18;
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_19_19;
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_20_20;
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_25_25;
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_26_26;
#line 353 "mcsolver.m"
                MR_Word check_hlds__mcsolver__V_27_27;

#line 355 "mcsolver.m"
                {
#line 355 "mcsolver.m"
                  check_hlds__mcsolver__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
#line 355 "mcsolver.m"
                }
#line 355 "mcsolver.m"
                check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
#line 355 "mcsolver.m"
                check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
#line 355 "mcsolver.m"
                check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
#line 355 "mcsolver.m"
                check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
#line 355 "mcsolver.m"
                {
#line 355 "mcsolver.m"
                  check_hlds__mcsolver__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 355 "mcsolver.m"
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_20_20));
#line 355 "mcsolver.m"
                }
#line 354 "mcsolver.m"
                {
#line 354 "mcsolver.m"
                  MR_Word base;
#line 354 "mcsolver.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 354 "mcsolver.m"
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_27_27));
#line 354 "mcsolver.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 354 "mcsolver.m"
                }
#line 353 "mcsolver.m"
              }
#line 346 "mcsolver.m"
          }
#line 346 "mcsolver.m"
      }
#line 346 "mcsolver.m"
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
#line 331 "mcsolver.m"
  {
#line 331 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 331 "mcsolver.m"
    if ((check_hlds__mcsolver__Ys_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "mcsolver.m"
      {
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_38_38;
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_39_39;
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_40_40;
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_41_41;
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_42_42;
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_43_43;

#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 325 "mcsolver.m"
        }
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 325 "mcsolver.m"
        check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
#line 325 "mcsolver.m"
        }
#line 325 "mcsolver.m"
        {
#line 325 "mcsolver.m"
          MR_Word base;
#line 325 "mcsolver.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
#line 325 "mcsolver.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
#line 325 "mcsolver.m"
        }
#line 331 "mcsolver.m"
      }
#line 331 "mcsolver.m"
    else
#line 331 "mcsolver.m"
      {
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 1)));
#line 331 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 0)));

#line 331 "mcsolver.m"
        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "mcsolver.m"
          {
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_54_54;
#line 290 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_60_60;
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_61_61;
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_62_62;
#line 291 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_59_59;

#line 291 "mcsolver.m"
            {
#line 291 "mcsolver.m"
              check_hlds__mcsolver__V_54_54 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_55_55, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__V_31_31)));
            }
#line 291 "mcsolver.m"
            check_hlds__mcsolver__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 291 "mcsolver.m"
            check_hlds__mcsolver__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 291 "mcsolver.m"
            check_hlds__mcsolver__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 291 "mcsolver.m"
            check_hlds__mcsolver__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 291 "mcsolver.m"
            {
#line 291 "mcsolver.m"
              MR_Word base;
#line 291 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 291 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
#line 291 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_60_60));
#line 291 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_61_61));
#line 291 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_62_62));
#line 291 "mcsolver.m"
            }
#line 290 "mcsolver.m"
          }
#line 331 "mcsolver.m"
        else
#line 337 "mcsolver.m"
          {
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_16_16;
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_17_17;
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_18_18;
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_23_23;
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_24_24;
#line 337 "mcsolver.m"
            MR_Word check_hlds__mcsolver__V_25_25;

#line 339 "mcsolver.m"
            {
#line 339 "mcsolver.m"
              check_hlds__mcsolver__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 339 "mcsolver.m"
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_6));
#line 339 "mcsolver.m"
            }
#line 339 "mcsolver.m"
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
#line 339 "mcsolver.m"
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
#line 339 "mcsolver.m"
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
#line 339 "mcsolver.m"
            check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
#line 339 "mcsolver.m"
            {
#line 339 "mcsolver.m"
              check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 339 "mcsolver.m"
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 339 "mcsolver.m"
            }
#line 338 "mcsolver.m"
            {
#line 338 "mcsolver.m"
              MR_Word base;
#line 338 "mcsolver.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 338 "mcsolver.m"
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 338 "mcsolver.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 338 "mcsolver.m"
            }
#line 337 "mcsolver.m"
          }
#line 331 "mcsolver.m"
      }
#line 331 "mcsolver.m"
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
#line 324 "mcsolver.m"
  {
#line 324 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_14_14;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 324 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;

#line 325 "mcsolver.m"
    {
#line 325 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_6));
#line 325 "mcsolver.m"
    }
#line 325 "mcsolver.m"
    check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 325 "mcsolver.m"
    check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 325 "mcsolver.m"
    check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 325 "mcsolver.m"
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 325 "mcsolver.m"
    {
#line 325 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 325 "mcsolver.m"
    }
#line 325 "mcsolver.m"
    {
#line 325 "mcsolver.m"
      MR_Word base;
#line 325 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 325 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 325 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
#line 325 "mcsolver.m"
    }
#line 324 "mcsolver.m"
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
#line 315 "mcsolver.m"
  {
#line 315 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_29_29;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_30_30;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_35_35;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_36_36;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_37_37;
#line 315 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_38_38;

#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 316 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 316 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 316 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 317 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 1));
#line 317 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 317 "mcsolver.m"
    }
#line 318 "mcsolver.m"
    {
#line 318 "mcsolver.m"
      check_hlds__mcsolver__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 1) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 318 "mcsolver.m"
    }
#line 319 "mcsolver.m"
    {
#line 319 "mcsolver.m"
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 319 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 319 "mcsolver.m"
    }
#line 320 "mcsolver.m"
    check_hlds__mcsolver__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 320 "mcsolver.m"
    check_hlds__mcsolver__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 320 "mcsolver.m"
    check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 320 "mcsolver.m"
    check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 320 "mcsolver.m"
    {
#line 320 "mcsolver.m"
      check_hlds__mcsolver__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 0) = ((MR_Box) (check_hlds__mcsolver__V_30_30));
#line 320 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 1) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
#line 320 "mcsolver.m"
    }
#line 318 "mcsolver.m"
    {
#line 318 "mcsolver.m"
      check_hlds__mcsolver__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 318 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 1) = ((MR_Box) (check_hlds__mcsolver__V_29_29));
#line 318 "mcsolver.m"
    }
#line 317 "mcsolver.m"
    {
#line 317 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 317 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 317 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 316 "mcsolver.m"
    }
#line 316 "mcsolver.m"
    {
#line 316 "mcsolver.m"
      MR_Word base;
#line 316 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_36_36));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_37_37));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 316 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
#line 316 "mcsolver.m"
    }
#line 315 "mcsolver.m"
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
#line 308 "mcsolver.m"
  {
#line 308 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_25_25;
#line 308 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_26_26;

#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 309 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 309 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 309 "mcsolver.m"
    }
#line 310 "mcsolver.m"
    {
#line 310 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
#line 310 "mcsolver.m"
    }
#line 310 "mcsolver.m"
    {
#line 310 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 310 "mcsolver.m"
    }
#line 310 "mcsolver.m"
    {
#line 310 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 310 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 310 "mcsolver.m"
    }
#line 311 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 311 "mcsolver.m"
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 311 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 311 "mcsolver.m"
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 311 "mcsolver.m"
    {
#line 311 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 311 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 311 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 309 "mcsolver.m"
    }
#line 309 "mcsolver.m"
    {
#line 309 "mcsolver.m"
      MR_Word base;
#line 309 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 309 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 309 "mcsolver.m"
    }
#line 308 "mcsolver.m"
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
#line 301 "mcsolver.m"
  {
#line 301 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_21_21;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_23_23;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_24_24;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_25_25;
#line 301 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_26_26;

#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
#line 302 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 1));
#line 302 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
#line 302 "mcsolver.m"
    }
#line 303 "mcsolver.m"
    {
#line 303 "mcsolver.m"
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "mcsolver.m"
    }
#line 303 "mcsolver.m"
    {
#line 303 "mcsolver.m"
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "mcsolver.m"
    }
#line 303 "mcsolver.m"
    {
#line 303 "mcsolver.m"
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 303 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
#line 303 "mcsolver.m"
    }
#line 304 "mcsolver.m"
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 304 "mcsolver.m"
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 304 "mcsolver.m"
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 304 "mcsolver.m"
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 304 "mcsolver.m"
    {
#line 304 "mcsolver.m"
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 304 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
#line 304 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 302 "mcsolver.m"
    }
#line 302 "mcsolver.m"
    {
#line 302 "mcsolver.m"
      MR_Word base;
#line 302 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 302 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
#line 302 "mcsolver.m"
    }
#line 301 "mcsolver.m"
  }
#line 68 "mcsolver.m"
}

#line 297 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 297 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 297 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 297 "mcsolver.m"
{
#line 297 "mcsolver.m"
  {
#line 297 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 297 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

#line 297 "mcsolver.m"
    {
#line 297 "mcsolver.m"
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
#line 297 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
#line 297 "mcsolver.m"
  }
#line 297 "mcsolver.m"
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
#line 295 "mcsolver.m"
  {
#line 295 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;

#line 295 "mcsolver.m"
    if ((check_hlds__mcsolver__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
#line 295 "mcsolver.m"
    else
#line 296 "mcsolver.m"
      {
#line 296 "mcsolver.m"
        MR_Word check_hlds__mcsolver__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "mcsolver.m"
        MR_Word check_hlds__mcsolver__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "mcsolver.m"
        MR_Word check_hlds__mcsolver__V_12_12;
#line 297 "mcsolver.m"
        MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

#line 297 "mcsolver.m"
        {
#line 297 "mcsolver.m"
          check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 297 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
#line 297 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__equivalent_3_p_0_1));
#line 297 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 297 "mcsolver.m"
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 3) = ((MR_Box) (check_hlds__mcsolver__X_7));
#line 297 "mcsolver.m"
        }
#line 297 "mcsolver.m"
        {
#line 297 "mcsolver.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_12_12, check_hlds__mcsolver__Xs_8, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
        }
#line 297 "mcsolver.m"
        *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
#line 296 "mcsolver.m"
      }
#line 295 "mcsolver.m"
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
#line 290 "mcsolver.m"
  {
#line 290 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_11_11;
#line 290 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_17_17;
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_18_18;
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_19_19;
#line 291 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_16_16;

#line 291 "mcsolver.m"
    {
#line 291 "mcsolver.m"
      check_hlds__mcsolver__V_11_11 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__Y_6)));
    }
#line 291 "mcsolver.m"
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
#line 291 "mcsolver.m"
    check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
#line 291 "mcsolver.m"
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
#line 291 "mcsolver.m"
    check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
#line 291 "mcsolver.m"
    {
#line 291 "mcsolver.m"
      MR_Word base;
#line 291 "mcsolver.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mcsolver.m"
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
#line 291 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
#line 291 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
#line 291 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
#line 291 "mcsolver.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
#line 291 "mcsolver.m"
    }
#line 290 "mcsolver.m"
  }
#line 57 "mcsolver.m"
}

#line 236 "mcsolver.m"
static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__closure_arg,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
#line 236 "mcsolver.m"
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
#line 236 "mcsolver.m"
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
#line 236 "mcsolver.m"
{
#line 236 "mcsolver.m"
  {
#line 236 "mcsolver.m"
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
#line 236 "mcsolver.m"
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

#line 236 "mcsolver.m"
    {
#line 236 "mcsolver.m"
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
#line 236 "mcsolver.m"
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
#line 236 "mcsolver.m"
  }
#line 236 "mcsolver.m"
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
#line 235 "mcsolver.m"
  {
#line 235 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 236 "mcsolver.m"
    MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7;

#line 236 "mcsolver.m"
    {
#line 236 "mcsolver.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[4], check_hlds__mcsolver__Constraints_4, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_6)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
    }
#line 236 "mcsolver.m"
    *check_hlds__mcsolver__STATE_VARIABLE_PCs_7 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
#line 235 "mcsolver.m"
  }
#line 51 "mcsolver.m"
}

#line 46 "mcsolver.m"
MR_Word MR_CALL 
check_hlds__mcsolver__new_prep_cstrts_0_f_0(void)
#line 46 "mcsolver.m"
{
#line 228 "mcsolver.m"
  {
#line 228 "mcsolver.m"
    MR_bool check_hlds__mcsolver__succeeded;
#line 228 "mcsolver.m"
    MR_Word check_hlds__mcsolver__HeadVar__1_1;
#line 228 "mcsolver.m"
    MR_Word check_hlds__mcsolver__V_2_2;

#line 228 "mcsolver.m"
    {
#line 228 "mcsolver.m"
      check_hlds__mcsolver__V_2_2 = mercury__eqvclass__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0]);
    }
#line 228 "mcsolver.m"
    {
#line 228 "mcsolver.m"
      check_hlds__mcsolver__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__mcsolver__V_2_2));
#line 228 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "mcsolver.m"
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "mcsolver.m"
    }
#line 228 "mcsolver.m"
    return check_hlds__mcsolver__HeadVar__1_1;
#line 228 "mcsolver.m"
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
