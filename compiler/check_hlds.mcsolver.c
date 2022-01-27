/*
** Automatically generated from `mcsolver.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.maybe_error.mih"
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



struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s {
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
  MR_Word * check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8;
  MR_Cont check_hlds__mcsolver__solve_var_4_p_0_env_0__cont;
  void * check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19;
};

struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s {
  MR_Box * check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3;
  MR_Cont check_hlds__mcsolver__solve_2_p_0_3_env_0__cont;
  void * check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr;
  MR_Word check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8;
};

struct check_hlds__mcsolver__solve_2_p_0_env_0_s {
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3;
  MR_Word * check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4;
  MR_Cont check_hlds__mcsolver__solve_2_p_0_env_0__cont;
  void * check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57;
  MR_Box check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2;

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0[4];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4];

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4];

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0;

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2];

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1];

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5];

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5];

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0;

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1];

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1];

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1];

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1];

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_66);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(
  MR_Word check_hlds__mcsolver__Bs0_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_70);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_21);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(
  MR_Word check_hlds__mcsolver__X_2,
  MR_Word check_hlds__mcsolver__V_3,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_95);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_48);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(
  MR_Word check_hlds__mcsolver__Val_6,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_15,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_16,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__3_17);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(
  MR_Word check_hlds__mcsolver__Equivalences_6,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_17,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_18,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__3_19);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
  MR_Word check_hlds__mcsolver__HeadVar__2_28);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_1,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_22);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
  MR_Word check_hlds__mcsolver__HeadVar__3_24);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_13,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_14);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_16,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__2_17);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_19,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__2_20);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_83,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_84);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_76,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_77);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_71,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_72);

static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_61,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_62);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_61,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_65,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_66);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_48,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_49);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_36);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_31);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
  MR_Word check_hlds__mcsolver__HeadVar__2_30);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_13);

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
  MR_Word check_hlds__mcsolver__Bs_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
  void * check_hlds__mcsolver__env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__X_6,
  MR_Word check_hlds__mcsolver__Bs0_7,
  MR_Word * check_hlds__mcsolver__Bs_8,
  MR_Cont check_hlds__mcsolver__cont,
  void * check_hlds__mcsolver__cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
  MR_Word check_hlds__mcsolver__SCs_1,
  MR_Word check_hlds__mcsolver__X_2,
  MR_Word check_hlds__mcsolver__V_3,
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
  MR_Word check_hlds__mcsolver__Bs0_5,
  MR_Word * check_hlds__mcsolver__Bs_6);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
  MR_Word check_hlds__mcsolver__SCs_7,
  MR_Word check_hlds__mcsolver__X_8,
  MR_Word check_hlds__mcsolver__V_9,
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
  MR_Word check_hlds__mcsolver__Bs0_11,
  MR_Word * check_hlds__mcsolver__Bs_12);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__Bs0_8,
  MR_Word * check_hlds__mcsolver__Bs_9);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__Assgts_6,
  MR_Word check_hlds__mcsolver__Bs0_7,
  MR_Word * check_hlds__mcsolver__Bs_8);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_4,
  MR_Word check_hlds__mcsolver__X_5);

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box * check_hlds__mcsolver__wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
  MR_Word check_hlds__mcsolver__Constraint_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
  void * check_hlds__mcsolver__env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
  MR_Cont check_hlds__mcsolver__cont,
  void * check_hlds__mcsolver__cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
  void * check_hlds__mcsolver__env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
  void * check_hlds__mcsolver__env_ptr_arg);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1);

static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9];


/* sealed */ struct check_hlds__mcsolver__vector_common_type_8_0_s {
  const MR_Word check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
    (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3
};

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

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0[4] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0,
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_eqv_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4] = {
  (MR_String) "prep_eqv_vars",
  (MR_String) "prep_assgts",
  (MR_String) "prep_impls",
  (MR_String) "prep_complex_cstrts"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0
};

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2] = {
  (MR_String) "prop_graph_yes",
  (MR_String) "prop_graph_no"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5] = {
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0,
  (MR_PseudoTypeInfo) &check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0
};

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0[5] = {
  (MR_String) "vars",
  (MR_String) "eqv_vars",
  (MR_String) "assgts",
  (MR_String) "prop_graph",
  (MR_String) "complex_cstrt_map"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

static const MR_Integer check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____assgts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____complex_cstrt_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____complex_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____complex_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____eqv_vars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____eqv_vars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impl_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____impl_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____impls_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____impls_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvar_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____mcvar_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____mcvars_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____mcvars_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prep_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____prep_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____prop_graph_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____prop_graph_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____solver_cstrts_0_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
  MR_Box * check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mcsolver__conv0_HeadVar__1_1;

    {
      check_hlds__mcsolver____Compare____solver_cstrts_0_0(&check_hlds__mcsolver__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), ((MR_Word) check_hlds__mcsolver__wrapper_arg_3));
    }
    *check_hlds__mcsolver__wrapper_arg_1 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_66)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_67;

    {
      check_hlds__mcsolver__LambdaHeadVar__2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_67, 0) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_66));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_67, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_67;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(
  MR_Word check_hlds__mcsolver__Bs0_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_70)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_112_112;
    MR_Box check_hlds__mcsolver__conv0_V_112_112;

    {
      check_hlds__mcsolver__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__Bs0_5, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_70)), &check_hlds__mcsolver__conv0_V_112_112);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        check_hlds__mcsolver__V_112_112 = ((MR_Word) check_hlds__mcsolver__conv0_V_112_112);
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == check_hlds__mcsolver__V_112_112);
    check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_21)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_22;

    {
      check_hlds__mcsolver__LambdaHeadVar__2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_22, 0) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_21));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_22, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_22;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(
  MR_Word check_hlds__mcsolver__X_2,
  MR_Word check_hlds__mcsolver__V_3,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_95)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_96_96;
    MR_Word check_hlds__mcsolver__V_97_97;

    {
      check_hlds__mcsolver__V_97_97 = mercury__bool__not_1_f_0(check_hlds__mcsolver__V_3);
    }
    {
      check_hlds__mcsolver__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 0) = ((MR_Box) (check_hlds__mcsolver__X_2));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_96_96, 1) = ((MR_Box) (check_hlds__mcsolver__V_97_97));
    }
    {
      check_hlds__mcsolver__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, ((MR_Box) (check_hlds__mcsolver__V_96_96)), check_hlds__mcsolver__LambdaHeadVar__1_95);
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_48)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_49;

    {
      check_hlds__mcsolver__LambdaHeadVar__2_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_49, 0) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_48));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_49, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_49;
  }
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(
  MR_Word check_hlds__mcsolver__Val_6,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_15,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_16,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__3_17)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    {
      mercury__map__set_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_15)), ((MR_Box) (check_hlds__mcsolver__Val_6)), check_hlds__mcsolver__LambdaHeadVar__2_16, check_hlds__mcsolver__LambdaHeadVar__3_17);
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_LambdaHeadVar__3_17;

    {
      check_hlds__mcsolver__IntroducedFrom__pred__bind_all__545__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv1_LambdaHeadVar__3_17);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(
  MR_Word check_hlds__mcsolver__Equivalences_6,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_17,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_18,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__3_19)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__TypeInfo_28_28 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
    MR_Word check_hlds__mcsolver__EquivVars_10;
    MR_Word check_hlds__mcsolver__Val_11;
    MR_Word check_hlds__mcsolver__V_20_20;
    MR_Word check_hlds__mcsolver__V_41_41;
    MR_Box check_hlds__mcsolver__conv0_Val_11;
    MR_Box check_hlds__mcsolver__conv2_LambdaHeadVar__3_19;

    {
      check_hlds__mcsolver__V_20_20 = mercury__eqvclass__get_equivalent_elements_2_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__Equivalences_6, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_17)));
    }
    {
      check_hlds__mcsolver__EquivVars_10 = mercury__set__to_sorted_list_1_f_0(check_hlds__mcsolver__TypeInfo_28_28, check_hlds__mcsolver__V_20_20);
    }
    {
      mercury__map__lookup_3_p_0(check_hlds__mcsolver__TypeInfo_28_28, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__mcsolver__LambdaHeadVar__2_18, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_17)), &check_hlds__mcsolver__conv0_Val_11);
    }
    check_hlds__mcsolver__Val_11 = ((MR_Word) check_hlds__mcsolver__conv0_Val_11);
    {
      check_hlds__mcsolver__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_41_41, 3) = ((MR_Box) (check_hlds__mcsolver__Val_11));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_41_41, check_hlds__mcsolver__EquivVars_10, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__2_18)), &check_hlds__mcsolver__conv2_LambdaHeadVar__3_19);
    }
    *check_hlds__mcsolver__LambdaHeadVar__3_19 = ((MR_Word) check_hlds__mcsolver__conv2_LambdaHeadVar__3_19);
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_21,
  MR_Word check_hlds__mcsolver__HeadVar__2_28)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__3_29;
    MR_Word check_hlds__mcsolver__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;

    {
      check_hlds__mcsolver__HeadVar__3_29 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__TypeCtorInfo_30_30, check_hlds__mcsolver__HeadVar__1_21, check_hlds__mcsolver__HeadVar__2_28);
    }
    return check_hlds__mcsolver__HeadVar__3_29;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_1,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_22)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_23;
    MR_Word check_hlds__mcsolver__V_24_24;
    MR_Word check_hlds__mcsolver__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_22, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__Val_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_22, (MR_Integer) 1)));
    MR_Box check_hlds__mcsolver__conv0_V_24_24;

    {
      check_hlds__mcsolver__conv0_V_24_24 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__Var_25)));
    }
    check_hlds__mcsolver__V_24_24 = ((MR_Word) check_hlds__mcsolver__conv0_V_24_24);
    {
      check_hlds__mcsolver__LambdaHeadVar__2_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_23, 1) = ((MR_Box) (check_hlds__mcsolver__Val_26));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_23;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
  MR_Word check_hlds__mcsolver__HeadVar__2_23,
  MR_Word check_hlds__mcsolver__HeadVar__3_24)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__4_25;
    MR_Box check_hlds__mcsolver__conv0_HeadVar__4_25;

    {
      check_hlds__mcsolver__conv0_HeadVar__4_25 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_23, ((MR_Box) (check_hlds__mcsolver__HeadVar__3_24)));
    }
    check_hlds__mcsolver__HeadVar__4_25 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__4_25);
    return check_hlds__mcsolver__HeadVar__4_25;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_13,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_14)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_15;
    MR_Word check_hlds__mcsolver__V_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_13, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__LambdaHeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_15, 0) = ((MR_Box) (check_hlds__mcsolver__V_18));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_15, 1) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__2_14));
    }
    return check_hlds__mcsolver__LambdaHeadVar__3_15;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__2_20;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv0_LambdaHeadVar__2_20);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__2_20));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_16,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__2_17)
{
  {
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__LambdaHeadVar__1_16)) == (MR_mktag((MR_Integer) 2)));
    MR_Word check_hlds__mcsolver__TypeCtorInfo_33_33;
    MR_Word check_hlds__mcsolver__TypeInfo_34_34;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__Fls_30;

    if (check_hlds__mcsolver__succeeded)
      {
        check_hlds__mcsolver__Fls_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__LambdaHeadVar__1_16, (MR_Integer) 0)));
        check_hlds__mcsolver__V_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[17];
        check_hlds__mcsolver__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;
        check_hlds__mcsolver__TypeInfo_34_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[0];
        {
          check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2(check_hlds__mcsolver__TypeCtorInfo_33_33, check_hlds__mcsolver__TypeInfo_34_34, check_hlds__mcsolver__V_18_18, check_hlds__mcsolver__Fls_30, check_hlds__mcsolver__LambdaHeadVar__2_17);
        }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_19,
  MR_Word * check_hlds__mcsolver__LambdaHeadVar__2_20)
{
  {
    MR_bool check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__LambdaHeadVar__1_19)) == (MR_mktag((MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_21_21;
    MR_Word check_hlds__mcsolver__Var_28;
    MR_Word check_hlds__mcsolver__Val_29;

    if (check_hlds__mcsolver__succeeded)
      {
        check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_19, (MR_Integer) 0)));
        check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__V_21_21)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 0)));
            check_hlds__mcsolver__Val_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mcsolver__LambdaHeadVar__2_20 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__Var_28));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__Val_29));
            }
            check_hlds__mcsolver__succeeded = MR_TRUE;
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_83,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_84)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_85;
    MR_Word check_hlds__mcsolver__V_86_86;

    {
      check_hlds__mcsolver__V_86_86 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__LambdaHeadVar__1_83);
    }
    {
      check_hlds__mcsolver__LambdaHeadVar__3_85 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_86_86, check_hlds__mcsolver__LambdaHeadVar__2_84);
    }
    return check_hlds__mcsolver__LambdaHeadVar__3_85;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_76,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_77)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_78;
    MR_Word check_hlds__mcsolver__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_76, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_76, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__V_81_81;
    MR_Word check_hlds__mcsolver__X_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__Y_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver___VX_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_79_79, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver___VY_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_80_80, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__Y_110));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__2_77));
    }
    {
      check_hlds__mcsolver__LambdaHeadVar__3_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_78, 0) = ((MR_Box) (check_hlds__mcsolver__X_109));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_78, 1) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
    }
    return check_hlds__mcsolver__LambdaHeadVar__3_78;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_71,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_72)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_73;
    MR_Word check_hlds__mcsolver__X_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_71, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver___V_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_71, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__LambdaHeadVar__3_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_73, 0) = ((MR_Box) (check_hlds__mcsolver__X_104));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__LambdaHeadVar__3_73, 1) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__2_72));
    }
    return check_hlds__mcsolver__LambdaHeadVar__3_73;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__3_67;

    {
      check_hlds__mcsolver__conv0_LambdaHeadVar__3_67 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__3_67));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_61,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_62)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_63;
    MR_Word check_hlds__mcsolver__V_64_64;
    MR_Word check_hlds__mcsolver__V_68_68;
    MR_Box check_hlds__mcsolver__conv1_LambdaHeadVar__3_63;

    {
      check_hlds__mcsolver__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_64_64, 3) = ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_61));
    }
    {
      check_hlds__mcsolver__V_68_68 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(check_hlds__mcsolver__LambdaHeadVar__1_61);
    }
    {
      check_hlds__mcsolver__conv1_LambdaHeadVar__3_63 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__V_68_68, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__2_62)));
    }
    check_hlds__mcsolver__LambdaHeadVar__3_63 = ((MR_Word) check_hlds__mcsolver__conv1_LambdaHeadVar__3_63);
    return check_hlds__mcsolver__LambdaHeadVar__3_63;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__419__1_3_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_61,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_65,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_66)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_67;

    {
      check_hlds__mcsolver__LambdaHeadVar__3_67 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, check_hlds__mcsolver__LambdaHeadVar__2_66, ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_65)), ((MR_Box) (check_hlds__mcsolver__LambdaHeadVar__1_61)));
    }
    return check_hlds__mcsolver__LambdaHeadVar__3_67;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_48,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__2_49)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__3_50;
    MR_Word check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_48, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_48, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__X_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__VX_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_51_51, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__YesPG_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_49, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__NoPG_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_49, (MR_Integer) 1)));

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__VX_94 == (MR_Integer) 1);
    if (check_hlds__mcsolver__succeeded)
      {
        MR_Word check_hlds__mcsolver__V_53_53;

        {
          check_hlds__mcsolver__V_53_53 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__YesPG_97, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
        {
          check_hlds__mcsolver__LambdaHeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_53_53));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__NoPG_98));
        }
      }
    else
      {
        MR_Word check_hlds__mcsolver__V_55_55;

        {
          check_hlds__mcsolver__V_55_55 = mercury__multi_map__set_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__NoPG_98, ((MR_Box) (check_hlds__mcsolver__X_93)), ((MR_Box) (check_hlds__mcsolver__V_52_52)));
        }
        {
          check_hlds__mcsolver__LambdaHeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__3_50, 0) = ((MR_Box) (check_hlds__mcsolver__YesPG_97));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__3_50, 1) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
        }
      }
    return check_hlds__mcsolver__LambdaHeadVar__3_50;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_36)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_37;
    MR_Word check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_36, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_36, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__V_40_40;
    MR_Word check_hlds__mcsolver__V_41_41;
    MR_Word check_hlds__mcsolver__V_42_42;
    MR_Word check_hlds__mcsolver__V_43_43;
    MR_Word check_hlds__mcsolver__X_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__VX_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_38_38, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__Y_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__VY_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__V_41_41 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_89);
    }
    {
      check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__VX_90));
    }
    {
      check_hlds__mcsolver__V_43_43 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__Y_91);
    }
    {
      check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__VY_92));
    }
    {
      check_hlds__mcsolver__LambdaHeadVar__2_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_37, 0) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_37, 1) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_37;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_5,
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_31)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_32;
    MR_Word check_hlds__mcsolver__V_33_33;
    MR_Word check_hlds__mcsolver__X_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_31, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_31, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__V_33_33 = check_hlds__mcsolver__eqv_var_2_f_0(check_hlds__mcsolver__Eqvs_5, check_hlds__mcsolver__X_87);
    }
    {
      check_hlds__mcsolver__LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_32, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_32, 1) = ((MR_Box) (check_hlds__mcsolver__V_88));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_12,
  MR_Word check_hlds__mcsolver__HeadVar__2_30)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__3_31;

    {
      check_hlds__mcsolver__HeadVar__3_31 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, check_hlds__mcsolver__HeadVar__1_12, check_hlds__mcsolver__HeadVar__2_30);
    }
    return check_hlds__mcsolver__HeadVar__3_31;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(
  MR_Word check_hlds__mcsolver__LambdaHeadVar__1_13)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__LambdaHeadVar__2_14;
    MR_Word check_hlds__mcsolver__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__Value_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__1_13, (MR_Integer) 1)));

    {
      check_hlds__mcsolver__LambdaHeadVar__2_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_14, 0) = ((MR_Box) (check_hlds__mcsolver__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__LambdaHeadVar__2_14, 1) = ((MR_Box) (check_hlds__mcsolver__Value_20));
    }
    return check_hlds__mcsolver__LambdaHeadVar__2_14;
  }
}

void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_18 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_19 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_18 == check_hlds__mcsolver__CastY_19);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__mcsolver__V_14_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
        }
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
        if (check_hlds__mcsolver__succeeded)
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
        else
          {
            MR_Word check_hlds__mcsolver__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
            }
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_15_15 == (MR_Integer) 0);
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
            if (check_hlds__mcsolver__succeeded)
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_15_15;
            else
              {
                MR_Word check_hlds__mcsolver__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
                }
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_16_16 == (MR_Integer) 0);
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                if (check_hlds__mcsolver__succeeded)
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_16_16;
                else
                  {
                    MR_Word check_hlds__mcsolver__V_17_17;
                    MR_Integer check_hlds__mcsolver__CastX_30 = (MR_Integer) check_hlds__mcsolver__V_7_7;
                    MR_Integer check_hlds__mcsolver__CastY_31 = (MR_Integer) check_hlds__mcsolver__V_12_12;

                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_30 == check_hlds__mcsolver__CastY_31);
                    if (check_hlds__mcsolver__succeeded)
                      {
                        check_hlds__mcsolver__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                        if (check_hlds__mcsolver__succeeded)
                          {
                            check_hlds__mcsolver__V_17_17 = (MR_Integer) 0;
                            check_hlds__mcsolver__succeeded = MR_TRUE;
                          }
                      }
                    else
                      {
                        MR_Word check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 0)));
                        MR_Word check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_7_7, (MR_Integer) 1)));
                        MR_Word check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 0)));
                        MR_Word check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, (MR_Integer) 1)));
                        MR_Word check_hlds__mcsolver__V_29_29;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_29_29, ((MR_Box) (check_hlds__mcsolver__V_25_25)), ((MR_Box) (check_hlds__mcsolver__V_27_27)));
                        }
                        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_29_29 == (MR_Integer) 0);
                        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                        if (check_hlds__mcsolver__succeeded)
                          {
                            check_hlds__mcsolver__V_17_17 = check_hlds__mcsolver__V_29_29;
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                          }
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__V_26_26)), ((MR_Box) (check_hlds__mcsolver__V_28_28)));
                            }
                            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_17_17 == (MR_Integer) 0);
                            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                          }
                      }
                    if (check_hlds__mcsolver__succeeded)
                      *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_8_8)), ((MR_Box) (check_hlds__mcsolver__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
        MR_Word check_hlds__mcsolver__TypeInfo_17_17;
        MR_Word check_hlds__mcsolver__TypeInfo_18_18;
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer check_hlds__mcsolver__CastX_23;
        MR_Integer check_hlds__mcsolver__CastY_24;

        {
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[6];
            {
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__CastX_23 = (MR_Integer) check_hlds__mcsolver__V_6_6;
                    check_hlds__mcsolver__CastY_24 = (MR_Integer) check_hlds__mcsolver__V_11_11;
                    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_23 == check_hlds__mcsolver__CastY_24);
                    if (check_hlds__mcsolver__succeeded)
                      check_hlds__mcsolver__succeeded = MR_TRUE;
                    else
                      {
                        MR_Word check_hlds__mcsolver__TypeInfo_10_26;
                        MR_Word check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 0)));
                        MR_Word check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_6_6, (MR_Integer) 1)));
                        MR_Word check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 0)));
                        MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_11_11, (MR_Integer) 1)));

                        {
                          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_19_19)), ((MR_Box) (check_hlds__mcsolver__V_21_21)));
                        }
                        if (check_hlds__mcsolver__succeeded)
                          {
                            check_hlds__mcsolver__TypeInfo_10_26 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
                            {
                              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_26, ((MR_Box) (check_hlds__mcsolver__V_20_20)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
                            }
                          }
                      }
                    if (check_hlds__mcsolver__succeeded)
                      {
                        check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[1];
                        {
                          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
        if (check_hlds__mcsolver__succeeded)
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mcsolver__TypeInfo_10_10;
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[3], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__TypeInfo_10_10 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[3];
            {
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_10_10, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
            }
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_15 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_16 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_15 == check_hlds__mcsolver__CastY_16);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], &check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
        }
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_12_12 == (MR_Integer) 0);
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
        if (check_hlds__mcsolver__succeeded)
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_12_12;
        else
          {
            MR_Word check_hlds__mcsolver__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], &check_hlds__mcsolver__V_13_13, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
            }
            check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_13_13 == (MR_Integer) 0);
            check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
            if (check_hlds__mcsolver__succeeded)
              *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_13_13;
            else
              {
                MR_Word check_hlds__mcsolver__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], &check_hlds__mcsolver__V_14_14, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_14_14 == (MR_Integer) 0);
                check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                if (check_hlds__mcsolver__succeeded)
                  *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_11 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_12 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_11 == check_hlds__mcsolver__CastY_12);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mcsolver__TypeInfo_14_14;
        MR_Word check_hlds__mcsolver__TypeInfo_15_15;
        MR_Word check_hlds__mcsolver__TypeInfo_16_16;
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
        }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__TypeInfo_14_14 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
            {
              check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_14_14, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
            }
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[7];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_5_5)), ((MR_Box) (check_hlds__mcsolver__V_9_9)));
                }
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
                    {
                      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_6_6)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[7], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_8_8;

        {
          check_hlds__mcsolver____Compare____assgt_0_0(&check_hlds__mcsolver__V_8_8, check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
        }
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
        if (check_hlds__mcsolver__succeeded)
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
        else
          {
            check_hlds__mcsolver____Compare____assgt_0_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_5_5, check_hlds__mcsolver__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_3_3, check_hlds__mcsolver__V_5_5);
        }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__succeeded = check_hlds__mcsolver____Unify____assgt_0_0(check_hlds__mcsolver__V_4_4, check_hlds__mcsolver__V_6_6);
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[6], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[3], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_2[1], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_45 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_46 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_45 == check_hlds__mcsolver__CastY_46);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__mcsolver__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_55_55)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                  }
                  check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
                  check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                  if (check_hlds__mcsolver__succeeded)
                    *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_54_54)), ((MR_Box) (check_hlds__mcsolver__V_7_7)));
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__mcsolver__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_52_52)), ((MR_Box) (check_hlds__mcsolver__V_22_22)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[4], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_56_56)), ((MR_Box) (check_hlds__mcsolver__V_33_33)));
                  }
                }
                break;
              case (MR_Integer) 3:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word check_hlds__mcsolver__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[5], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__V_53_53)), ((MR_Box) (check_hlds__mcsolver__V_44_44)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_13 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_14 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_13 == check_hlds__mcsolver__CastY_14);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__mcsolver__TypeInfo_17_17;
            MR_Word check_hlds__mcsolver__TypeInfo_18_18;
            MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__mcsolver__V_5_5;
            MR_Word check_hlds__mcsolver__V_6_6;

            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__mcsolver__TypeInfo_17_17 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_17_17, ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
                }
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__TypeInfo_18_18 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
                    {
                      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_18_18, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__mcsolver__TypeInfo_15_15;
            MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__V_8_8;

            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mcsolver__TypeInfo_15_15 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_15_15, ((MR_Box) (check_hlds__mcsolver__V_7_7)), ((MR_Box) (check_hlds__mcsolver__V_8_8)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__mcsolver__TypeInfo_19_19;
            MR_Word check_hlds__mcsolver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__V_10_10;

            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mcsolver__TypeInfo_19_19 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_19_19, ((MR_Box) (check_hlds__mcsolver__V_9_9)), ((MR_Box) (check_hlds__mcsolver__V_10_10)));
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word check_hlds__mcsolver__TypeInfo_16_16;
            MR_Word check_hlds__mcsolver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__V_12_12;

            check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__mcsolver__TypeInfo_16_16 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[5];
                {
                  check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mcsolver__TypeInfo_16_16, ((MR_Box) (check_hlds__mcsolver__V_11_11)), ((MR_Box) (check_hlds__mcsolver__V_12_12)));
                }
              }
          }
          break;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_4 = check_hlds__mcsolver__HeadVar__2_2;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_5 = check_hlds__mcsolver__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__HeadVar__1_1, ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Cast_HeadVar1_3 = check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__Cast_HeadVar2_4 = check_hlds__mcsolver__HeadVar__2_2;

    {
      check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mcsolver__Cast_HeadVar2_4)));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
  MR_Word * check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_9 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;
    MR_Integer check_hlds__mcsolver__CastY_10 = (MR_Integer) check_hlds__mcsolver__HeadVar__3_3;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_9 == check_hlds__mcsolver__CastY_10);
    if (check_hlds__mcsolver__succeeded)
      *check_hlds__mcsolver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], &check_hlds__mcsolver__V_8_8, ((MR_Box) (check_hlds__mcsolver__V_4_4)), ((MR_Box) (check_hlds__mcsolver__V_6_6)));
        }
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_8_8 == (MR_Integer) 0);
        check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
        if (check_hlds__mcsolver__succeeded)
          *check_hlds__mcsolver__HeadVar__1_1 = check_hlds__mcsolver__V_8_8;
        else
          {
            MR_Integer check_hlds__mcsolver__V_13_13 = (MR_Integer) check_hlds__mcsolver__V_5_5;
            MR_Integer check_hlds__mcsolver__V_14_14 = (MR_Integer) check_hlds__mcsolver__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mcsolver__HeadVar__1_1, check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__V_14_14);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Integer check_hlds__mcsolver__CastX_7 = (MR_Integer) check_hlds__mcsolver__HeadVar__1_1;
    MR_Integer check_hlds__mcsolver__CastY_8 = (MR_Integer) check_hlds__mcsolver__HeadVar__2_2;

    check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__CastX_7 == check_hlds__mcsolver__CastY_8);
    if (check_hlds__mcsolver__succeeded)
      check_hlds__mcsolver__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mcsolver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__V_3_3)), ((MR_Box) (check_hlds__mcsolver__V_5_5)));
        }
        if (check_hlds__mcsolver__succeeded)
          check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_4_4 == check_hlds__mcsolver__V_6_6);
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
  MR_Word check_hlds__mcsolver__Bs_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mcsolver__succeeded;

        if ((check_hlds__mcsolver__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__mcsolver__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__mcsolver__V_7_7;
            MR_Box check_hlds__mcsolver__conv0_V_7_7;

            {
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_5)), check_hlds__mcsolver__Bs_1, &check_hlds__mcsolver__conv0_V_7_7);
            }
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv0_V_7_7);
                check_hlds__mcsolver__succeeded = MR_TRUE;
              }
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7_7 == (MR_Integer) 0);
                if (check_hlds__mcsolver__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__mcsolver__HeadVar__2__tmp_copy_2 = check_hlds__mcsolver__Xs_6;

                      check_hlds__mcsolver__HeadVar__2_2 = check_hlds__mcsolver__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__mcsolver__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
  void * check_hlds__mcsolver__env_ptr_arg)
{
  {
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9));
    }
    {
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_19_19, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8);
    }
    if ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
      {
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__X_6,
  MR_Word check_hlds__mcsolver__Bs0_7,
  MR_Word * check_hlds__mcsolver__Bs_8,
  MR_Cont check_hlds__mcsolver__cont,
  void * check_hlds__mcsolver__cont_env_ptr)
{
  {
    struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s check_hlds__mcsolver__env;

    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5 = check_hlds__mcsolver__SCs_5;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6 = check_hlds__mcsolver__X_6;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7 = check_hlds__mcsolver__Bs0_7;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8 = check_hlds__mcsolver__Bs_8;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont = check_hlds__mcsolver__cont;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
    {
      (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6)));
    }
    if ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
      {
        *((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8) = (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
        {
          ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
        }
      }
    else
      {
        {
          MR_Integer check_hlds__mcsolver__slot_0 = (MR_Integer) 0;

          do
            {
              (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9 = ((&check_hlds__mcsolver_vector_common_8[0 + check_hlds__mcsolver__slot_0]))->check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
              {
                check_hlds__mcsolver__solve_var_4_p_0_1(&check_hlds__mcsolver__env);
              }
              check_hlds__mcsolver__slot_0 = (check_hlds__mcsolver__slot_0 + (MR_Integer) 1);
            }
          while ((check_hlds__mcsolver__slot_0 < (MR_Integer) 2));
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv2_LambdaHeadVar__2_67;

    {
      check_hlds__mcsolver__conv2_LambdaHeadVar__2_67 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__679__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_LambdaHeadVar__2_67));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__668__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_LambdaHeadVar__2_22;

    {
      check_hlds__mcsolver__conv1_LambdaHeadVar__2_22 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__629__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_LambdaHeadVar__2_22));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__684__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__2_49;

    {
      check_hlds__mcsolver__conv0_LambdaHeadVar__2_49 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__659__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__2_49));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
  MR_Word check_hlds__mcsolver__SCs_1,
  MR_Word check_hlds__mcsolver__X_2,
  MR_Word check_hlds__mcsolver__V_3,
  MR_Word check_hlds__mcsolver__HeadVar__4_4,
  MR_Word check_hlds__mcsolver__Bs0_5,
  MR_Word * check_hlds__mcsolver__Bs_6)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mcsolver__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__Zs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 1)));

          {
            check_hlds__mcsolver__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], ((MR_Box) (check_hlds__mcsolver__X_2)), ((MR_Box) (check_hlds__mcsolver__Y_10)));
          }
          if (check_hlds__mcsolver__succeeded)
            switch (check_hlds__mcsolver__V_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__mcsolver__V_19_19;

                  {
                    check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[15], check_hlds__mcsolver__Zs_11);
                  }
                  {
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_19_19, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
                  check_hlds__mcsolver__succeeded = !(check_hlds__mcsolver__succeeded);
                  if (check_hlds__mcsolver__succeeded)
                    {
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
                      check_hlds__mcsolver__succeeded = MR_TRUE;
                    }
                }
                break;
            }
          else
            switch (check_hlds__mcsolver__V_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__all_no_2_p_0(check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Zs_11);
                  }
                  if (check_hlds__mcsolver__succeeded)
                    {
                      MR_Word check_hlds__mcsolver__V_30_30;

                      {
                        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
                        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                      }
                    }
                  else
                    {
                      *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
                      check_hlds__mcsolver__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__mcsolver__V_35_35;

                  {
                    check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (check_hlds__mcsolver__Y_10));
                    MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) ((MR_Integer) 1));
                  }
                  {
                    check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                  }
                }
                break;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mcsolver__Ys0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

          switch (check_hlds__mcsolver__V_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
                check_hlds__mcsolver__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__mcsolver__TypeInfo_103_103 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
                MR_Word check_hlds__mcsolver__TypeCtorInfo_104_104;
                MR_Word check_hlds__mcsolver__Ys_44;
                MR_Word check_hlds__mcsolver__V_46_46;
                MR_Word check_hlds__mcsolver__V_47_47;

                {
                  check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__Ys0_41, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_44);
                }
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__TypeCtorInfo_104_104 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
                    check_hlds__mcsolver__V_47_47 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[14];
                    {
                      check_hlds__mcsolver__V_46_46 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_103_103, check_hlds__mcsolver__TypeCtorInfo_104_104, check_hlds__mcsolver__V_47_47, check_hlds__mcsolver__Ys_44);
                    }
                    {
                      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_46_46, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                    }
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mcsolver__Ys0_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));

          switch (check_hlds__mcsolver__V_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__mcsolver__Ys_58;
                MR_Word check_hlds__mcsolver__V_69_69;
                MR_Word check_hlds__mcsolver__V_115_115;
                MR_Word check_hlds__mcsolver__V_116_116;

                {
                  check_hlds__mcsolver__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_69_69, 3) = ((MR_Box) (check_hlds__mcsolver__Bs0_5));
                }
                {
                  check_hlds__mcsolver__Ys_58 = mercury__list__filter_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_69_69, check_hlds__mcsolver__Ys0_55);
                }
                check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__Ys_58)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 0)));
                    check_hlds__mcsolver__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_58, (MR_Integer) 1)));
                    if ((check_hlds__mcsolver__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word check_hlds__mcsolver__V_74_74;
                        MR_Word check_hlds__mcsolver__V_75_75;

                        {
                          check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_116_116));
                          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) ((MR_Integer) 1));
                        }
                        {
                          check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
                          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_74_74, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                        }
                      }
                    else
                      {
                        *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
                        check_hlds__mcsolver__succeeded = MR_TRUE;
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__mcsolver__TypeInfo_108_108 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
                MR_Word check_hlds__mcsolver__TypeCtorInfo_109_109;
                MR_Word check_hlds__mcsolver__V_64_64;
                MR_Word check_hlds__mcsolver__V_65_65;
                MR_Word check_hlds__mcsolver__Ys_80;

                {
                  check_hlds__mcsolver__succeeded = mercury__list__delete_first_3_p_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__Ys0_55, ((MR_Box) (check_hlds__mcsolver__X_2)), &check_hlds__mcsolver__Ys_80);
                }
                if (check_hlds__mcsolver__succeeded)
                  {
                    check_hlds__mcsolver__TypeCtorInfo_109_109 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
                    check_hlds__mcsolver__V_65_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[16];
                    {
                      check_hlds__mcsolver__V_64_64 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_108_108, check_hlds__mcsolver__TypeCtorInfo_109_109, check_hlds__mcsolver__V_65_65, check_hlds__mcsolver__Ys_80);
                    }
                    {
                      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_64_64, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                    }
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__mcsolver__Assgtss_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__4_4, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__NotConflicting_89;
          MR_Word check_hlds__mcsolver__V_94_94;
          MR_Word check_hlds__mcsolver__V_113_113;
          MR_Word check_hlds__mcsolver__V_114_114;
          MR_Word check_hlds__mcsolver___Conflicts_88;

          {
            check_hlds__mcsolver__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[12]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 3) = ((MR_Box) (check_hlds__mcsolver__X_2));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_94_94, 4) = ((MR_Box) (check_hlds__mcsolver__V_3));
          }
          {
            mercury__list__filter_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], check_hlds__mcsolver__V_94_94, check_hlds__mcsolver__Assgtss_84, &check_hlds__mcsolver___Conflicts_88, &check_hlds__mcsolver__NotConflicting_89);
          }
          check_hlds__mcsolver__succeeded = ((MR_tag((MR_Word) check_hlds__mcsolver__NotConflicting_89)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__mcsolver__succeeded)
            {
              check_hlds__mcsolver__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 0)));
              check_hlds__mcsolver__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__NotConflicting_89, (MR_Integer) 1)));
              if ((check_hlds__mcsolver__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(check_hlds__mcsolver__SCs_1, check_hlds__mcsolver__V_114_114, check_hlds__mcsolver__Bs0_5, check_hlds__mcsolver__Bs_6);
                }
              else
                {
                  *check_hlds__mcsolver__Bs_6 = check_hlds__mcsolver__Bs0_5;
                  check_hlds__mcsolver__succeeded = MR_TRUE;
                }
            }
        }
        break;
    }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_Bs_6;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrt_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_6);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_6));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrts_6_p_0(
  MR_Word check_hlds__mcsolver__SCs_7,
  MR_Word check_hlds__mcsolver__X_8,
  MR_Word check_hlds__mcsolver__V_9,
  MR_Word check_hlds__mcsolver__ComplexCstrts_10,
  MR_Word check_hlds__mcsolver__Bs0_11,
  MR_Word * check_hlds__mcsolver__Bs_12)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_13_13;
    MR_Box check_hlds__mcsolver__conv1_Bs_12;

    {
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrts_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_7));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 4) = ((MR_Box) (check_hlds__mcsolver__X_8));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 5) = ((MR_Box) (check_hlds__mcsolver__V_9));
    }
    {
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_13_13, check_hlds__mcsolver__ComplexCstrts_10, ((MR_Box) (check_hlds__mcsolver__Bs0_11)), &check_hlds__mcsolver__conv1_Bs_12);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__Bs_12 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_12);
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv3_Bs_9;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv3_Bs_9);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_Bs_9));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__HeadVar__2_2,
  MR_Word check_hlds__mcsolver__Bs0_8,
  MR_Word * check_hlds__mcsolver__Bs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__X_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__V0_10;
    MR_Box check_hlds__mcsolver__conv0_V0_10;

    {
      check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, &check_hlds__mcsolver__conv0_V0_10);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        check_hlds__mcsolver__V0_10 = ((MR_Word) check_hlds__mcsolver__conv0_V0_10);
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    if (check_hlds__mcsolver__succeeded)
      {
        check_hlds__mcsolver__succeeded = (check_hlds__mcsolver__V_7 == check_hlds__mcsolver__V0_10);
        if (check_hlds__mcsolver__succeeded)
          {
            *check_hlds__mcsolver__Bs_9 = check_hlds__mcsolver__Bs0_8;
            check_hlds__mcsolver__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word check_hlds__mcsolver__Bs1_12;
        MR_Word check_hlds__mcsolver__Assgts_13;
        MR_Word check_hlds__mcsolver__Bs2_14;
        MR_Word check_hlds__mcsolver__ComplexCstrts_15;
        MR_Word check_hlds__mcsolver__V_24_24;
        MR_Word check_hlds__mcsolver__V_25_25;
        MR_Word check_hlds__mcsolver__V_50_50;
        MR_Word check_hlds__mcsolver__V_51_51;
        MR_Word check_hlds__mcsolver__V_56_56;
        MR_Word check_hlds__mcsolver__V_26_26;
        MR_Word check_hlds__mcsolver__V_27_27;
        MR_Word check_hlds__mcsolver__V_28_28;
        MR_Word check_hlds__mcsolver__V_29_29;
        MR_Box check_hlds__mcsolver__conv4_Bs2_14;
        MR_Word check_hlds__mcsolver__V_30_30;
        MR_Word check_hlds__mcsolver__V_31_31;
        MR_Word check_hlds__mcsolver__V_32_32;
        MR_Word check_hlds__mcsolver__V_33_33;
        MR_Word check_hlds__mcsolver__CmplxCstrts_64;
        MR_Word check_hlds__mcsolver__TypeInfo_7_65;
        MR_Word check_hlds__mcsolver__TypeInfo_8_66;
        MR_Box check_hlds__mcsolver__conv5_CmplxCstrts_64;

        {
          check_hlds__mcsolver__Bs1_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__Bs0_8, ((MR_Box) (check_hlds__mcsolver__V_7)));
        }
        check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
        check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
        check_hlds__mcsolver__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
        check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
        check_hlds__mcsolver__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
        check_hlds__mcsolver__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 0)));
        check_hlds__mcsolver__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, (MR_Integer) 1)));
        switch (check_hlds__mcsolver__V_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__mcsolver__Assgts_45;
              MR_Box check_hlds__mcsolver__conv1_Assgts_45;

              {
                check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_50_50, &check_hlds__mcsolver__conv1_Assgts_45);
              }
              if (check_hlds__mcsolver__succeeded)
                {
                  check_hlds__mcsolver__Assgts_45 = ((MR_Word) check_hlds__mcsolver__conv1_Assgts_45);
                  check_hlds__mcsolver__succeeded = MR_TRUE;
                }
              if (check_hlds__mcsolver__succeeded)
                check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_45;
              else
                check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__mcsolver__Assgts_41;
              MR_Box check_hlds__mcsolver__conv2_Assgts_41;

              {
                check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_51_51, &check_hlds__mcsolver__conv2_Assgts_41);
              }
              if (check_hlds__mcsolver__succeeded)
                {
                  check_hlds__mcsolver__Assgts_41 = ((MR_Word) check_hlds__mcsolver__conv2_Assgts_41);
                  check_hlds__mcsolver__succeeded = MR_TRUE;
                }
              if (check_hlds__mcsolver__succeeded)
                check_hlds__mcsolver__Assgts_13 = check_hlds__mcsolver__Assgts_41;
              else
                check_hlds__mcsolver__Assgts_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        {
          check_hlds__mcsolver__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgt_4_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_56_56, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
        }
        {
          check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_56_56, check_hlds__mcsolver__Assgts_13, ((MR_Box) (check_hlds__mcsolver__Bs1_12)), &check_hlds__mcsolver__conv4_Bs2_14);
        }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__Bs2_14 = ((MR_Word) check_hlds__mcsolver__conv4_Bs2_14);
            check_hlds__mcsolver__succeeded = MR_TRUE;
          }
        if (check_hlds__mcsolver__succeeded)
          {
            check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 0)));
            check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 1)));
            check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 2)));
            check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 3)));
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_5, (MR_Integer) 4)));
            check_hlds__mcsolver__TypeInfo_7_65 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
            check_hlds__mcsolver__TypeInfo_8_66 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[3];
            {
              check_hlds__mcsolver__succeeded = mercury__map__elem_2_f_0(check_hlds__mcsolver__TypeInfo_7_65, check_hlds__mcsolver__TypeInfo_8_66, ((MR_Box) (check_hlds__mcsolver__X_6)), check_hlds__mcsolver__V_25_25, &check_hlds__mcsolver__conv5_CmplxCstrts_64);
            }
            if (check_hlds__mcsolver__succeeded)
              {
                check_hlds__mcsolver__CmplxCstrts_64 = ((MR_Word) check_hlds__mcsolver__conv5_CmplxCstrts_64);
                check_hlds__mcsolver__succeeded = MR_TRUE;
              }
            if (check_hlds__mcsolver__succeeded)
              check_hlds__mcsolver__ComplexCstrts_15 = check_hlds__mcsolver__CmplxCstrts_64;
            else
              check_hlds__mcsolver__ComplexCstrts_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_complex_cstrts_6_p_0(check_hlds__mcsolver__SCs_5, check_hlds__mcsolver__X_6, check_hlds__mcsolver__V_7, check_hlds__mcsolver__ComplexCstrts_15, check_hlds__mcsolver__Bs2_14, check_hlds__mcsolver__Bs_9);
            }
          }
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
  MR_Word check_hlds__mcsolver__SCs_5,
  MR_Word check_hlds__mcsolver__Assgts_6,
  MR_Word check_hlds__mcsolver__Bs0_7,
  MR_Word * check_hlds__mcsolver__Bs_8)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_9_9;
    MR_Box check_hlds__mcsolver__conv1_Bs_8;

    {
      check_hlds__mcsolver__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgts_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_9_9, 3) = ((MR_Box) (check_hlds__mcsolver__SCs_5));
    }
    {
      check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_9_9, check_hlds__mcsolver__Assgts_6, ((MR_Box) (check_hlds__mcsolver__Bs0_7)), &check_hlds__mcsolver__conv1_Bs_8);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__Bs_8 = ((MR_Word) check_hlds__mcsolver__conv1_Bs_8);
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv5_HeadVar__3_3;

    {
      check_hlds__mcsolver__conv5_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv5_HeadVar__3_3));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv4_HeadVar__3_3;

    {
      check_hlds__mcsolver__conv4_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv4_HeadVar__3_3));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_29;

    {
      check_hlds__mcsolver__conv2_HeadVar__3_29 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_29));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_LambdaHeadVar__2_23;

    {
      check_hlds__mcsolver__conv1_LambdaHeadVar__2_23 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__496__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_LambdaHeadVar__2_23));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_HeadVar__3_3;

    {
      check_hlds__mcsolver__conv0_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_HeadVar__3_3));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_1,
  MR_Word check_hlds__mcsolver__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__3_3;

    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mcsolver__TypeInfo_7_43;
          MR_Word check_hlds__mcsolver__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__Ys_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word check_hlds__mcsolver__V_7_7;
          MR_Word check_hlds__mcsolver__V_8_8;
          MR_Word check_hlds__mcsolver__V_42_42;
          MR_Box check_hlds__mcsolver__conv3_V_7_7;

          {
            check_hlds__mcsolver__conv3_V_7_7 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_1, ((MR_Box) (check_hlds__mcsolver__X_5)));
          }
          check_hlds__mcsolver__V_7_7 = ((MR_Word) check_hlds__mcsolver__conv3_V_7_7);
          check_hlds__mcsolver__TypeInfo_7_43 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
          {
            check_hlds__mcsolver__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_42_42, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
          }
          {
            check_hlds__mcsolver__V_8_8 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__TypeInfo_7_43, check_hlds__mcsolver__V_42_42, check_hlds__mcsolver__Ys_6);
          }
          {
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_7_7));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__mcsolver__V_8_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mcsolver__TypeInfo_7_34 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
          MR_Word check_hlds__mcsolver__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__V_11_11;
          MR_Word check_hlds__mcsolver__V_33_33;

          {
            check_hlds__mcsolver__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_33_33, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
          }
          {
            check_hlds__mcsolver__V_11_11 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__TypeInfo_7_34, check_hlds__mcsolver__V_33_33, check_hlds__mcsolver__Xs_10);
          }
          {
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mcsolver__TypeInfo_7_49 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
          MR_Word check_hlds__mcsolver__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__V_14_14;
          MR_Word check_hlds__mcsolver__V_48_48;

          {
            check_hlds__mcsolver__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_48_48, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
          }
          {
            check_hlds__mcsolver__V_14_14 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__TypeInfo_7_49, check_hlds__mcsolver__V_48_48, check_hlds__mcsolver__Xs_13);
          }
          {
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__mcsolver__TypeInfo_27_27 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[2];
          MR_Word check_hlds__mcsolver__Assgtss_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__V_19_19;
          MR_Word check_hlds__mcsolver__V_20_20;
          MR_Word check_hlds__mcsolver__V_21_21;

          {
            check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_1));
          }
          {
            check_hlds__mcsolver__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[11]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_20_20, 3) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
          }
          {
            check_hlds__mcsolver__V_19_19 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__TypeInfo_27_27, check_hlds__mcsolver__V_20_20, check_hlds__mcsolver__Assgtss_16);
          }
          {
            check_hlds__mcsolver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
          }
        }
        break;
    }
    return check_hlds__mcsolver__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_HeadVar__4_25;

    {
      check_hlds__mcsolver__conv1_HeadVar__4_25 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__2_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__4_25));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__3_15;

    {
      check_hlds__mcsolver__conv0_LambdaHeadVar__3_15 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__477__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__3_15));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__2_2;

    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mcsolver__X_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__Ys_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

          {
            check_hlds__mcsolver__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__mcsolver__X_3));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_4));
          }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__mcsolver__Assgtss_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
          MR_Box check_hlds__mcsolver__conv2_HeadVar__2_2;

          {
            check_hlds__mcsolver__conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_1[4], (MR_Word) &check_hlds__mcsolver_scalar_common_6[1], check_hlds__mcsolver__Assgtss_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
          check_hlds__mcsolver__HeadVar__2_2 = ((MR_Word) check_hlds__mcsolver__conv2_HeadVar__2_2);
        }
        break;
    }
    return check_hlds__mcsolver__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
  MR_Word check_hlds__mcsolver__Eqvs_4,
  MR_Word check_hlds__mcsolver__X_5)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__3_3;
    MR_Box check_hlds__mcsolver__conv0_HeadVar__3_3;

    {
      check_hlds__mcsolver__conv0_HeadVar__3_3 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__Eqvs_4, ((MR_Box) (check_hlds__mcsolver__X_5)));
    }
    check_hlds__mcsolver__HeadVar__3_3 = ((MR_Word) check_hlds__mcsolver__conv0_HeadVar__3_3);
    return check_hlds__mcsolver__HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

    {
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mcsolver__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mcsolver__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__Value_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word check_hlds__mcsolver__V_43_43;
          MR_Word check_hlds__mcsolver__V_44_44;
          MR_Word check_hlds__mcsolver__V_45_45;
          MR_Word check_hlds__mcsolver__V_46_46;
          MR_Word check_hlds__mcsolver__V_47_47;
          MR_Word check_hlds__mcsolver__V_48_48;

          {
            check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__Var_4));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) (check_hlds__mcsolver__Value_5));
          }
          check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
          check_hlds__mcsolver__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
          check_hlds__mcsolver__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
          check_hlds__mcsolver__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
          {
            check_hlds__mcsolver__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_45_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_47_47));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mcsolver__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));

          if ((check_hlds__mcsolver__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
          else
            {
              MR_Word check_hlds__mcsolver__X_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 0)));
              MR_Word check_hlds__mcsolver__Xs_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Vars_10, (MR_Integer) 1)));
              MR_Word check_hlds__mcsolver__V_61_61;
              MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

              {
                check_hlds__mcsolver__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 1) = ((MR_Box) (check_hlds__mcsolver__prepare_var_constraint_3_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_61_61, 3) = ((MR_Box) (check_hlds__mcsolver__X_56));
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_61_61, check_hlds__mcsolver__Xs_57, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
              }
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mcsolver__Var1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__Var2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word check_hlds__mcsolver__V_74_74;
          MR_Word check_hlds__mcsolver__V_75_75;
          MR_Word check_hlds__mcsolver__V_76_76;
          MR_Word check_hlds__mcsolver__V_78_78;
          MR_Word check_hlds__mcsolver__V_80_80;
          MR_Word check_hlds__mcsolver__V_81_81;
          MR_Word check_hlds__mcsolver__V_82_82;
          MR_Word check_hlds__mcsolver__V_84_84;
          MR_Word check_hlds__mcsolver__V_86_86;
          MR_Word check_hlds__mcsolver__V_87_87;
          MR_Word check_hlds__mcsolver__V_88_88;
          MR_Word check_hlds__mcsolver__V_89_89;

          {
            check_hlds__mcsolver__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_76_76, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            check_hlds__mcsolver__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            check_hlds__mcsolver__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 0) = ((MR_Box) (check_hlds__mcsolver__V_76_76));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_75_75, 1) = ((MR_Box) (check_hlds__mcsolver__V_78_78));
          }
          {
            check_hlds__mcsolver__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 0) = ((MR_Box) (check_hlds__mcsolver__Var2_16));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_82_82, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            check_hlds__mcsolver__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 0) = ((MR_Box) (check_hlds__mcsolver__Var1_15));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_84_84, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            check_hlds__mcsolver__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 0) = ((MR_Box) (check_hlds__mcsolver__V_82_82));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_81_81, 1) = ((MR_Box) (check_hlds__mcsolver__V_84_84));
          }
          check_hlds__mcsolver__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 0)));
          check_hlds__mcsolver__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 1)));
          check_hlds__mcsolver__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 2)));
          check_hlds__mcsolver__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, (MR_Integer) 3)));
          {
            check_hlds__mcsolver__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 0) = ((MR_Box) (check_hlds__mcsolver__V_81_81));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_80_80, 1) = ((MR_Box) (check_hlds__mcsolver__V_86_86));
          }
          {
            check_hlds__mcsolver__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 0) = ((MR_Box) (check_hlds__mcsolver__V_75_75));
            MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_74_74, 1) = ((MR_Box) (check_hlds__mcsolver__V_80_80));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_87_87));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_88_88));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_74_74));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_89_89));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__mcsolver__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__mcsolver__Ys_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 2)));

              {
                check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(check_hlds__mcsolver__X_21, check_hlds__mcsolver__Ys_22, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__mcsolver__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__mcsolver__at_most_one_3_p_0(check_hlds__mcsolver__Vars_27, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__mcsolver__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__mcsolver__exactly_one_3_p_0(check_hlds__mcsolver__Vars_32, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2, check_hlds__mcsolver__STATE_VARIABLE_PCs_3);
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box * check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv2_LambdaHeadVar__2_17;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__255__1_2_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), &check_hlds__mcsolver__conv2_LambdaHeadVar__2_17);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_LambdaHeadVar__2_17));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

    {
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
  MR_Word check_hlds__mcsolver__Constraint_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    switch (MR_tag((MR_Word) check_hlds__mcsolver__Constraint_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__mcsolver__VarConstraint_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));

          {
            check_hlds__mcsolver__prepare_var_constraint_3_p_0(check_hlds__mcsolver__VarConstraint_6, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__mcsolver__Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
          MR_Word check_hlds__mcsolver__DisjOfAssgts_12;

          {
            check_hlds__mcsolver__succeeded = mercury__list__map_3_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[12], check_hlds__mcsolver__Constraints_32, &check_hlds__mcsolver__DisjOfAssgts_12);
          }
          if (check_hlds__mcsolver__succeeded)
            {
              check_hlds__mcsolver__disjunction_of_assignments_3_p_0(check_hlds__mcsolver__DisjOfAssgts_12, check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, check_hlds__mcsolver__STATE_VARIABLE_PCs_14);
            }
          else
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.prepare_abstract_constraint\'/3", (MR_String) "Disjuction of constraints - general case.");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__mcsolver__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mcsolver__Constraint_4, (MR_Integer) 0)));
          MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14;

          {
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[11], check_hlds__mcsolver__Constraints_7, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
          }
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_14);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv4_LambdaHeadVar__3_19;

    {
      check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__529__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv4_LambdaHeadVar__3_19);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv4_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
  void * check_hlds__mcsolver__env_ptr_arg)
{
  {
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

    *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8));
    {
      ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3,
  MR_Cont check_hlds__mcsolver__cont,
  void * check_hlds__mcsolver__cont_env_ptr)
{
  {
    struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s check_hlds__mcsolver__env;

    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3 = check_hlds__mcsolver__wrapper_arg_3;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont = check_hlds__mcsolver__cont;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
    {
      MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;

      {
        check_hlds__mcsolver__solve_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8, check_hlds__mcsolver__solve_2_p_0_2, &check_hlds__mcsolver__env);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_Bs_9;

    {
      check_hlds__mcsolver__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_Bs_9);
    }
    if (check_hlds__mcsolver__succeeded)
      {
        *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_Bs_9));
        check_hlds__mcsolver__succeeded = MR_TRUE;
      }
    return check_hlds__mcsolver__succeeded;
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
  void * check_hlds__mcsolver__env_ptr_arg)
{
  {
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

    (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5 = ((MR_Word) (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5);
    {
      check_hlds__mcsolver__solve_2_p_0_4(check_hlds__mcsolver__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
  void * check_hlds__mcsolver__env_ptr_arg)
{
  {
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s * check_hlds__mcsolver__env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) check_hlds__mcsolver__env_ptr_arg;

    {
      MR_Word check_hlds__mcsolver__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
      MR_Word check_hlds__mcsolver__V_67_67;
      MR_Word check_hlds__mcsolver__V_68_68;
      MR_Word check_hlds__mcsolver__V_69_69;
      MR_Box check_hlds__mcsolver__conv5_Bindings_4;

      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
      check_hlds__mcsolver__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
      check_hlds__mcsolver__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
      check_hlds__mcsolver__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_6));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50));
      }
      {
        (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57 = mercury__map__keys_1_f_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5);
      }
      (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
      {
        mercury__list__foldl_4_p_0((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_56_56, (check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__V_57_57, ((MR_Box) ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5)), &check_hlds__mcsolver__conv5_Bindings_4);
      }
      *((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4) = ((MR_Word) check_hlds__mcsolver__conv5_Bindings_4);
      {
        ((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont)((check_hlds__mcsolver__env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__solve_2_p_0(
  MR_Word check_hlds__mcsolver__SCs_3,
  MR_Word * check_hlds__mcsolver__Bindings_4,
  MR_Cont check_hlds__mcsolver__cont,
  void * check_hlds__mcsolver__cont_env_ptr)
{
  {
    struct check_hlds__mcsolver__solve_2_p_0_env_0_s check_hlds__mcsolver__env;

    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3 = check_hlds__mcsolver__SCs_3;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4 = check_hlds__mcsolver__Bindings_4;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__cont = check_hlds__mcsolver__cont;
    (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr = check_hlds__mcsolver__cont_env_ptr;
    {
      MR_bool check_hlds__mcsolver__succeeded;
      MR_Word check_hlds__mcsolver__TypeInfo_13_44;
      MR_Word check_hlds__mcsolver__TypeInfo_14_45;
      MR_Word check_hlds__mcsolver__V_7_7;
      MR_Word check_hlds__mcsolver__Bs1_15;
      MR_Word check_hlds__mcsolver__V_16_16;
      MR_Word check_hlds__mcsolver__V_17_17;
      MR_Word check_hlds__mcsolver__V_30_30;
      MR_Word check_hlds__mcsolver__V_40_40;
      MR_Word check_hlds__mcsolver__V_18_18;
      MR_Word check_hlds__mcsolver__V_19_19;
      MR_Word check_hlds__mcsolver__V_20_20;
      MR_Word check_hlds__mcsolver__V_21_21;
      MR_Box check_hlds__mcsolver__conv1_Bs1_15;
      MR_Word check_hlds__mcsolver__V_22_22;
      MR_Word check_hlds__mcsolver__V_23_23;
      MR_Word check_hlds__mcsolver__V_24_24;
      MR_Word check_hlds__mcsolver__V_25_25;

      {
        check_hlds__mcsolver__V_7_7 = mercury__map__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0);
      }
      check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
      check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
      check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
      check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
      check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
      {
        check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_1));
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
      }
      {
        check_hlds__mcsolver__succeeded = mercury__list__foldl_4_p_3((MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[2], check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_16_16, ((MR_Box) (check_hlds__mcsolver__V_7_7)), &check_hlds__mcsolver__conv1_Bs1_15);
      }
      if (check_hlds__mcsolver__succeeded)
        {
          check_hlds__mcsolver__Bs1_15 = ((MR_Word) check_hlds__mcsolver__conv1_Bs1_15);
          check_hlds__mcsolver__succeeded = MR_TRUE;
        }
      if (check_hlds__mcsolver__succeeded)
        {
          check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0)));
          check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1)));
          check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2)));
          check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3)));
          check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4)));
          check_hlds__mcsolver__TypeInfo_13_44 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
          check_hlds__mcsolver__TypeInfo_14_45 = (MR_Word) &check_hlds__mcsolver_scalar_common_2[2];
          {
            check_hlds__mcsolver__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_40_40, 3) = ((MR_Box) ((check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
          }
          {
            mercury__list__foldl_4_p_7(check_hlds__mcsolver__TypeInfo_13_44, check_hlds__mcsolver__TypeInfo_14_45, check_hlds__mcsolver__V_40_40, check_hlds__mcsolver__V_17_17, ((MR_Box) (check_hlds__mcsolver__Bs1_15)), &(check_hlds__mcsolver__env).check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5, check_hlds__mcsolver__solve_2_p_0_5, &check_hlds__mcsolver__env);
          }
        }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv11_LambdaHeadVar__3_85;

    {
      check_hlds__mcsolver__conv11_LambdaHeadVar__3_85 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__444__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv11_LambdaHeadVar__3_85));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv9_LambdaHeadVar__3_78;

    {
      check_hlds__mcsolver__conv9_LambdaHeadVar__3_78 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__437__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv9_LambdaHeadVar__3_78));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv7_LambdaHeadVar__3_73;

    {
      check_hlds__mcsolver__conv7_LambdaHeadVar__3_73 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__430__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv7_LambdaHeadVar__3_73));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv5_LambdaHeadVar__3_63;

    {
      check_hlds__mcsolver__conv5_LambdaHeadVar__3_63 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__417__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv5_LambdaHeadVar__3_63));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_3;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv3_LambdaHeadVar__3_50;

    {
      check_hlds__mcsolver__conv3_LambdaHeadVar__3_50 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__404__1_2_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2));
    }
    check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv3_LambdaHeadVar__3_50));
    return check_hlds__mcsolver__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv2_HeadVar__3_3;

    {
      check_hlds__mcsolver__conv2_HeadVar__3_3 = check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv2_HeadVar__3_3));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_LambdaHeadVar__2_37;

    {
      check_hlds__mcsolver__conv1_LambdaHeadVar__2_37 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__393__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_LambdaHeadVar__2_37));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__2_32;

    {
      check_hlds__mcsolver__conv0_LambdaHeadVar__2_32 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__387__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__2_32));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0(
  MR_Word check_hlds__mcsolver__PCs_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__SCs_4;
    MR_Word check_hlds__mcsolver__TypeCtorInfo_128_128 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0;
    MR_Word check_hlds__mcsolver__TypeCtorInfo_129_129;
    MR_Word check_hlds__mcsolver__TypeCtorInfo_130_130;
    MR_Word check_hlds__mcsolver__TypeInfo_138_138;
    MR_Word check_hlds__mcsolver__TypeInfo_144_144;
    MR_Word check_hlds__mcsolver__Eqvs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__Assgts_6;
    MR_Word check_hlds__mcsolver__Impls_9;
    MR_Word check_hlds__mcsolver__ComplexCstrts_13;
    MR_Word check_hlds__mcsolver__PropGraph_14;
    MR_Word check_hlds__mcsolver__ComplexCstrtsMap_17;
    MR_Word check_hlds__mcsolver__AssgtVars_22;
    MR_Word check_hlds__mcsolver__AndImplVars_25;
    MR_Word check_hlds__mcsolver__AndComplexCstrtVars_28;
    MR_Word check_hlds__mcsolver__AllVars_29;
    MR_Word check_hlds__mcsolver__V_30_30;
    MR_Word check_hlds__mcsolver__V_35_35;
    MR_Word check_hlds__mcsolver__V_44_44;
    MR_Word check_hlds__mcsolver__V_45_45;
    MR_Word check_hlds__mcsolver__V_46_46;
    MR_Word check_hlds__mcsolver__V_57_57;
    MR_Word check_hlds__mcsolver__V_58_58;
    MR_Word check_hlds__mcsolver__V_59_59;
    MR_Word check_hlds__mcsolver__V_69_69;
    MR_Word check_hlds__mcsolver__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
    MR_Word check_hlds__mcsolver__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
    MR_Word check_hlds__mcsolver__V_122_122;
    MR_Word check_hlds__mcsolver__V_123_123;
    MR_Word check_hlds__mcsolver__V_124_124;
    MR_Word check_hlds__mcsolver__V_125_125;
    MR_Word check_hlds__mcsolver__V_126_126;
    MR_Word check_hlds__mcsolver__V_127_127;
    MR_Box check_hlds__mcsolver__conv4_PropGraph_14;
    MR_Box check_hlds__mcsolver__conv6_ComplexCstrtsMap_17;
    MR_Box check_hlds__mcsolver__conv8_AssgtVars_22;
    MR_Box check_hlds__mcsolver__conv10_AndImplVars_25;
    MR_Box check_hlds__mcsolver__conv12_AndComplexCstrtVars_28;

    {
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
    }
    {
      check_hlds__mcsolver__Assgts_6 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__V_30_30, check_hlds__mcsolver__V_116_116);
    }
    check_hlds__mcsolver__TypeCtorInfo_129_129 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0;
    {
      check_hlds__mcsolver__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_35_35, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
    }
    check_hlds__mcsolver__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
    check_hlds__mcsolver__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
    check_hlds__mcsolver__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
    check_hlds__mcsolver__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__Impls_9 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__V_35_35, check_hlds__mcsolver__V_44_44);
    }
    check_hlds__mcsolver__TypeCtorInfo_130_130 = (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0;
    {
      check_hlds__mcsolver__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_45_45, 3) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
    }
    check_hlds__mcsolver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 0)));
    check_hlds__mcsolver__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 1)));
    check_hlds__mcsolver__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 2)));
    check_hlds__mcsolver__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__PCs_3, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__ComplexCstrts_13 = mercury__list__map_2_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__V_45_45, check_hlds__mcsolver__V_46_46);
    }
    check_hlds__mcsolver__TypeInfo_138_138 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[0];
    {
      check_hlds__mcsolver__V_58_58 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
    {
      check_hlds__mcsolver__V_59_59 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_128_128);
    }
    {
      check_hlds__mcsolver__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 0) = ((MR_Box) (check_hlds__mcsolver__V_58_58));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_57_57, 1) = ((MR_Box) (check_hlds__mcsolver__V_59_59));
    }
    {
      check_hlds__mcsolver__conv4_PropGraph_14 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[6], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__V_57_57)));
    }
    check_hlds__mcsolver__PropGraph_14 = ((MR_Word) check_hlds__mcsolver__conv4_PropGraph_14);
    {
      check_hlds__mcsolver__V_69_69 = mercury__multi_map__init_0_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__TypeCtorInfo_130_130);
    }
    {
      check_hlds__mcsolver__conv6_ComplexCstrtsMap_17 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, (MR_Word) &check_hlds__mcsolver_scalar_common_2[1], (MR_Word) &check_hlds__mcsolver_scalar_common_2[7], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__V_69_69)));
    }
    check_hlds__mcsolver__ComplexCstrtsMap_17 = ((MR_Word) check_hlds__mcsolver__conv6_ComplexCstrtsMap_17);
    check_hlds__mcsolver__TypeInfo_144_144 = (MR_Word) &check_hlds__mcsolver_scalar_common_1[4];
    {
      check_hlds__mcsolver__conv8_AssgtVars_22 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_128_128, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[8], check_hlds__mcsolver__Assgts_6, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    check_hlds__mcsolver__AssgtVars_22 = ((MR_Word) check_hlds__mcsolver__conv8_AssgtVars_22);
    {
      check_hlds__mcsolver__conv10_AndImplVars_25 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_129_129, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[9], check_hlds__mcsolver__Impls_9, ((MR_Box) (check_hlds__mcsolver__AssgtVars_22)));
    }
    check_hlds__mcsolver__AndImplVars_25 = ((MR_Word) check_hlds__mcsolver__conv10_AndImplVars_25);
    {
      check_hlds__mcsolver__conv12_AndComplexCstrtVars_28 = mercury__list__foldl_3_f_0(check_hlds__mcsolver__TypeCtorInfo_130_130, check_hlds__mcsolver__TypeInfo_144_144, (MR_Word) &check_hlds__mcsolver_scalar_common_2[10], check_hlds__mcsolver__ComplexCstrts_13, ((MR_Box) (check_hlds__mcsolver__AndImplVars_25)));
    }
    check_hlds__mcsolver__AndComplexCstrtVars_28 = ((MR_Word) check_hlds__mcsolver__conv12_AndComplexCstrtVars_28);
    {
      check_hlds__mcsolver__AllVars_29 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__mcsolver__TypeInfo_138_138, check_hlds__mcsolver__AndComplexCstrtVars_28);
    }
    {
      check_hlds__mcsolver__SCs_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 0) = ((MR_Box) (check_hlds__mcsolver__AllVars_29));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 1) = ((MR_Box) (check_hlds__mcsolver__Eqvs_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 2) = ((MR_Box) (check_hlds__mcsolver__Assgts_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 3) = ((MR_Box) (check_hlds__mcsolver__PropGraph_14));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__SCs_4, 4) = ((MR_Box) (check_hlds__mcsolver__ComplexCstrtsMap_17));
    }
    return check_hlds__mcsolver__SCs_4;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv1_HeadVar__3_31;

    {
      check_hlds__mcsolver__conv1_HeadVar__3_31 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv1_HeadVar__3_31));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1)
{
  {
    MR_Box check_hlds__mcsolver__wrapper_arg_2;
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_LambdaHeadVar__2_14;

    {
      check_hlds__mcsolver__conv0_LambdaHeadVar__2_14 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__376__1_1_f_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1));
    }
    check_hlds__mcsolver__wrapper_arg_2 = ((MR_Box) (check_hlds__mcsolver__conv0_LambdaHeadVar__2_14));
    return check_hlds__mcsolver__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0(
  MR_Word check_hlds__mcsolver__DisjOfAssgts_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_10)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__Assgtss_6;
    MR_Word check_hlds__mcsolver__V_16_16;
    MR_Word check_hlds__mcsolver__V_17_17;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__V_21_21;
    MR_Word check_hlds__mcsolver__V_22_22;
    MR_Word check_hlds__mcsolver__V_23_23;

    {
      check_hlds__mcsolver__Assgtss_6 = mercury__list__map_2_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[1], (MR_Word) &check_hlds__mcsolver_scalar_common_1[2], (MR_Word) &check_hlds__mcsolver_scalar_common_6[0], check_hlds__mcsolver__DisjOfAssgts_4);
    }
    {
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__Assgtss_6));
    }
    check_hlds__mcsolver__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 0)));
    check_hlds__mcsolver__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 1)));
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 2)));
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_9, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_22_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__exactly_one_3_p_0(
  MR_Word check_hlds__mcsolver__Xs_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_11)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mcsolver", (MR_String) "predicate \140check_hlds.mcsolver.exactly_one\'/3", (MR_String) "exactly_one of zero variables");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__mcsolver__V_38_38;
            MR_Word check_hlds__mcsolver__V_39_39;
            MR_Word check_hlds__mcsolver__V_40_40;
            MR_Word check_hlds__mcsolver__V_41_41;
            MR_Word check_hlds__mcsolver__V_42_42;
            MR_Word check_hlds__mcsolver__V_43_43;

            {
              check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__V_31_31));
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
            check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
            check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
            check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
            {
              check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
            }
          }
        else
          {
            MR_Word check_hlds__mcsolver__V_14_14;
            MR_Word check_hlds__mcsolver__V_15_15;
            MR_Word check_hlds__mcsolver__V_16_16;
            MR_Word check_hlds__mcsolver__V_23_23;
            MR_Word check_hlds__mcsolver__V_24_24;
            MR_Word check_hlds__mcsolver__V_25_25;

            {
              check_hlds__mcsolver__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
            }
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 0)));
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 1)));
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 2)));
            check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_10, (MR_Integer) 3)));
            {
              check_hlds__mcsolver__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_14_14, 1) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_11 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mcsolver__at_most_one_3_p_0(
  MR_Word check_hlds__mcsolver__Xs_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_14)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    if ((check_hlds__mcsolver__Xs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
    else
      {
        MR_Word check_hlds__mcsolver__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Xs_4, (MR_Integer) 0)));

        if ((check_hlds__mcsolver__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13;
        else
          {
            MR_Word check_hlds__mcsolver__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 1)));
            MR_Word check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_32_32, (MR_Integer) 0)));

            if ((check_hlds__mcsolver__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word check_hlds__mcsolver__V_42_42;
                MR_Word check_hlds__mcsolver__V_43_43;
                MR_Word check_hlds__mcsolver__V_44_44;
                MR_Word check_hlds__mcsolver__V_46_46;
                MR_Word check_hlds__mcsolver__V_48_48;
                MR_Word check_hlds__mcsolver__V_49_49;
                MR_Word check_hlds__mcsolver__V_50_50;
                MR_Word check_hlds__mcsolver__V_52_52;
                MR_Word check_hlds__mcsolver__V_54_54;
                MR_Word check_hlds__mcsolver__V_55_55;
                MR_Word check_hlds__mcsolver__V_56_56;
                MR_Word check_hlds__mcsolver__V_57_57;

                {
                  check_hlds__mcsolver__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_44_44, 1) = ((MR_Box) ((MR_Integer) 1));
                }
                {
                  check_hlds__mcsolver__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  check_hlds__mcsolver__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 0) = ((MR_Box) (check_hlds__mcsolver__V_44_44));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_43_43, 1) = ((MR_Box) (check_hlds__mcsolver__V_46_46));
                }
                {
                  check_hlds__mcsolver__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 0) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_50_50, 1) = ((MR_Box) ((MR_Integer) 1));
                }
                {
                  check_hlds__mcsolver__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 0) = ((MR_Box) (check_hlds__mcsolver__V_33_33));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  check_hlds__mcsolver__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 0) = ((MR_Box) (check_hlds__mcsolver__V_50_50));
                  MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_49_49, 1) = ((MR_Box) (check_hlds__mcsolver__V_52_52));
                }
                check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
                check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
                check_hlds__mcsolver__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
                check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
                {
                  check_hlds__mcsolver__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 0) = ((MR_Box) (check_hlds__mcsolver__V_49_49));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_48_48, 1) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
                }
                {
                  check_hlds__mcsolver__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 0) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_42_42, 1) = ((MR_Box) (check_hlds__mcsolver__V_48_48));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_55_55));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_56_56));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_57_57));
                }
              }
            else
              {
                MR_Word check_hlds__mcsolver__V_18_18;
                MR_Word check_hlds__mcsolver__V_19_19;
                MR_Word check_hlds__mcsolver__V_20_20;
                MR_Word check_hlds__mcsolver__V_25_25;
                MR_Word check_hlds__mcsolver__V_26_26;
                MR_Word check_hlds__mcsolver__V_27_27;

                {
                  check_hlds__mcsolver__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Xs_4));
                }
                check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 0)));
                check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 1)));
                check_hlds__mcsolver__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 2)));
                check_hlds__mcsolver__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_13, (MR_Integer) 3)));
                {
                  check_hlds__mcsolver__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
                  MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_20_20));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__mcsolver__STATE_VARIABLE_PCs_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_27_27));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
                }
              }
          }
      }
  }
}

void MR_CALL 
check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__Ys_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_13)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    if ((check_hlds__mcsolver__Ys_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__mcsolver__V_38_38;
        MR_Word check_hlds__mcsolver__V_39_39;
        MR_Word check_hlds__mcsolver__V_40_40;
        MR_Word check_hlds__mcsolver__V_41_41;
        MR_Word check_hlds__mcsolver__V_42_42;
        MR_Word check_hlds__mcsolver__V_43_43;

        {
          check_hlds__mcsolver__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        check_hlds__mcsolver__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
        check_hlds__mcsolver__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
        check_hlds__mcsolver__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
        check_hlds__mcsolver__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
        {
          check_hlds__mcsolver__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 0) = ((MR_Box) (check_hlds__mcsolver__V_39_39));
          MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_38_38, 1) = ((MR_Box) (check_hlds__mcsolver__V_40_40));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_41_41));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_42_42));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_43_43));
        }
      }
    else
      {
        MR_Word check_hlds__mcsolver__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__Ys_6, (MR_Integer) 0)));

        if ((check_hlds__mcsolver__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__mcsolver__V_54_54;
            MR_Word check_hlds__mcsolver__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
            MR_Word check_hlds__mcsolver__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
            MR_Word check_hlds__mcsolver__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
            MR_Word check_hlds__mcsolver__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
            MR_Word check_hlds__mcsolver__V_60_60;
            MR_Word check_hlds__mcsolver__V_61_61;
            MR_Word check_hlds__mcsolver__V_62_62;
            MR_Word check_hlds__mcsolver__V_59_59;

            {
              check_hlds__mcsolver__V_54_54 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_55_55, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__V_31_31)));
            }
            check_hlds__mcsolver__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
            check_hlds__mcsolver__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
            check_hlds__mcsolver__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
            check_hlds__mcsolver__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_54_54));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_60_60));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_61_61));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_62_62));
            }
          }
        else
          {
            MR_Word check_hlds__mcsolver__V_16_16;
            MR_Word check_hlds__mcsolver__V_17_17;
            MR_Word check_hlds__mcsolver__V_18_18;
            MR_Word check_hlds__mcsolver__V_23_23;
            MR_Word check_hlds__mcsolver__V_24_24;
            MR_Word check_hlds__mcsolver__V_25_25;

            {
              check_hlds__mcsolver__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
              MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__Ys_6));
            }
            check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 0)));
            check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 1)));
            check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 2)));
            check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_12, (MR_Integer) 3)));
            {
              check_hlds__mcsolver__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 0) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
              MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_16_16, 1) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__mcsolver__STATE_VARIABLE_PCs_13 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__mcsolver__assign_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__V_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_11_11;
    MR_Word check_hlds__mcsolver__V_12_12;
    MR_Word check_hlds__mcsolver__V_13_13;
    MR_Word check_hlds__mcsolver__V_14_14;
    MR_Word check_hlds__mcsolver__V_15_15;
    MR_Word check_hlds__mcsolver__V_16_16;

    {
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_6));
    }
    check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_14_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_16_16));
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__different_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__Y_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_11_11;
    MR_Word check_hlds__mcsolver__V_12_12;
    MR_Word check_hlds__mcsolver__V_13_13;
    MR_Word check_hlds__mcsolver__V_15_15;
    MR_Word check_hlds__mcsolver__V_17_17;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__V_19_19;
    MR_Word check_hlds__mcsolver__V_21_21;
    MR_Word check_hlds__mcsolver__V_23_23;
    MR_Word check_hlds__mcsolver__V_24_24;
    MR_Word check_hlds__mcsolver__V_29_29;
    MR_Word check_hlds__mcsolver__V_30_30;
    MR_Word check_hlds__mcsolver__V_35_35;
    MR_Word check_hlds__mcsolver__V_36_36;
    MR_Word check_hlds__mcsolver__V_37_37;
    MR_Word check_hlds__mcsolver__V_38_38;

    {
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
    }
    {
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
    }
    {
      check_hlds__mcsolver__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 0) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_24_24, 1) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
    }
    {
      check_hlds__mcsolver__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 0) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_30_30, 1) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
    }
    check_hlds__mcsolver__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    check_hlds__mcsolver__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    check_hlds__mcsolver__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    check_hlds__mcsolver__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 0) = ((MR_Box) (check_hlds__mcsolver__V_30_30));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_29_29, 1) = ((MR_Box) (check_hlds__mcsolver__V_35_35));
    }
    {
      check_hlds__mcsolver__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_23_23, 1) = ((MR_Box) (check_hlds__mcsolver__V_29_29));
    }
    {
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
    }
    {
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_36_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_37_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_38_38));
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__not_both_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__Y_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_11_11;
    MR_Word check_hlds__mcsolver__V_12_12;
    MR_Word check_hlds__mcsolver__V_13_13;
    MR_Word check_hlds__mcsolver__V_15_15;
    MR_Word check_hlds__mcsolver__V_17_17;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__V_19_19;
    MR_Word check_hlds__mcsolver__V_21_21;
    MR_Word check_hlds__mcsolver__V_23_23;
    MR_Word check_hlds__mcsolver__V_24_24;
    MR_Word check_hlds__mcsolver__V_25_25;
    MR_Word check_hlds__mcsolver__V_26_26;

    {
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
    }
    {
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
    }
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
    }
    {
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__implies_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__Y_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_11_11;
    MR_Word check_hlds__mcsolver__V_12_12;
    MR_Word check_hlds__mcsolver__V_13_13;
    MR_Word check_hlds__mcsolver__V_15_15;
    MR_Word check_hlds__mcsolver__V_17_17;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__V_19_19;
    MR_Word check_hlds__mcsolver__V_21_21;
    MR_Word check_hlds__mcsolver__V_23_23;
    MR_Word check_hlds__mcsolver__V_24_24;
    MR_Word check_hlds__mcsolver__V_25_25;
    MR_Word check_hlds__mcsolver__V_26_26;

    {
      check_hlds__mcsolver__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_13_13, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_15_15, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (check_hlds__mcsolver__V_13_13));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__V_15_15));
    }
    {
      check_hlds__mcsolver__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 0) = ((MR_Box) (check_hlds__mcsolver__Y_6));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 0) = ((MR_Box) (check_hlds__mcsolver__X_5));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_21_21, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__mcsolver__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 0) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_18_18, 1) = ((MR_Box) (check_hlds__mcsolver__V_21_21));
    }
    check_hlds__mcsolver__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    check_hlds__mcsolver__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    check_hlds__mcsolver__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    check_hlds__mcsolver__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    {
      check_hlds__mcsolver__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 0) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_17_17, 1) = ((MR_Box) (check_hlds__mcsolver__V_23_23));
    }
    {
      check_hlds__mcsolver__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 0) = ((MR_Box) (check_hlds__mcsolver__V_12_12));
      MR_hl_field(MR_mktag(1), check_hlds__mcsolver__V_11_11, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_24_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_25_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_26_26));
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9;

    {
      check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_9));
  }
}

void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0(
  MR_Word check_hlds__mcsolver__HeadVar__1_1,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_3)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;

    if ((check_hlds__mcsolver__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2;
    else
      {
        MR_Word check_hlds__mcsolver__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__mcsolver__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mcsolver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mcsolver__V_12_12;
        MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3;

        {
          check_hlds__mcsolver__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 1) = ((MR_Box) (check_hlds__mcsolver__equivalent_3_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__mcsolver__V_12_12, 3) = ((MR_Box) (check_hlds__mcsolver__X_7));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, check_hlds__mcsolver__V_12_12, check_hlds__mcsolver__Xs_8, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_2)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
        }
        *check_hlds__mcsolver__STATE_VARIABLE_PCs_3 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_3);
      }
  }
}

void MR_CALL 
check_hlds__mcsolver__equivalent_4_p_0(
  MR_Word check_hlds__mcsolver__X_5,
  MR_Word check_hlds__mcsolver__Y_6,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_9)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__V_11_11;
    MR_Word check_hlds__mcsolver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__mcsolver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__mcsolver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__mcsolver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__mcsolver__V_17_17;
    MR_Word check_hlds__mcsolver__V_18_18;
    MR_Word check_hlds__mcsolver__V_19_19;
    MR_Word check_hlds__mcsolver__V_16_16;

    {
      check_hlds__mcsolver__V_11_11 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0], check_hlds__mcsolver__V_12_12, ((MR_Box) (check_hlds__mcsolver__X_5)), ((MR_Box) (check_hlds__mcsolver__Y_6)));
    }
    check_hlds__mcsolver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 0)));
    check_hlds__mcsolver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 1)));
    check_hlds__mcsolver__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 2)));
    check_hlds__mcsolver__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mcsolver__STATE_VARIABLE_PCs_0_8, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__mcsolver__STATE_VARIABLE_PCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mcsolver__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__V_17_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mcsolver__V_18_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mcsolver__V_19_19));
    }
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
  MR_Box check_hlds__mcsolver__closure_arg,
  MR_Box check_hlds__mcsolver__wrapper_arg_1,
  MR_Box check_hlds__mcsolver__wrapper_arg_2,
  MR_Box * check_hlds__mcsolver__wrapper_arg_3)
{
  {
    MR_Box check_hlds__mcsolver__closure = check_hlds__mcsolver__closure_arg;
    MR_Word check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14;

    {
      check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) check_hlds__mcsolver__wrapper_arg_1), ((MR_Word) check_hlds__mcsolver__wrapper_arg_2), &check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14);
    }
    *check_hlds__mcsolver__wrapper_arg_3 = ((MR_Box) (check_hlds__mcsolver__conv0_STATE_VARIABLE_PCs_14));
  }
}

void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0(
  MR_Word check_hlds__mcsolver__Constraints_4,
  MR_Word check_hlds__mcsolver__STATE_VARIABLE_PCs_0_6,
  MR_Word * check_hlds__mcsolver__STATE_VARIABLE_PCs_7)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Box check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7;

    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0, (MR_Word) &check_hlds__mcsolver_scalar_common_2[4], check_hlds__mcsolver__Constraints_4, ((MR_Box) (check_hlds__mcsolver__STATE_VARIABLE_PCs_0_6)), &check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
    }
    *check_hlds__mcsolver__STATE_VARIABLE_PCs_7 = ((MR_Word) check_hlds__mcsolver__conv1_STATE_VARIABLE_PCs_7);
  }
}

MR_Word MR_CALL 
check_hlds__mcsolver__new_prep_cstrts_0_f_0(void)
{
  {
    MR_bool check_hlds__mcsolver__succeeded;
    MR_Word check_hlds__mcsolver__HeadVar__1_1;
    MR_Word check_hlds__mcsolver__V_2_2;

    {
      check_hlds__mcsolver__V_2_2 = mercury__eqvclass__init_0_f_0((MR_Word) &check_hlds__mcsolver_scalar_common_1[0]);
    }
    {
      check_hlds__mcsolver__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__mcsolver__V_2_2));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__mcsolver__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return check_hlds__mcsolver__HeadVar__1_1;
  }
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
