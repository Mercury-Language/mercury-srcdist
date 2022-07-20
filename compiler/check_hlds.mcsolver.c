/*
** Automatically generated from `mcsolver.m'
** by the Mercury compiler,
** version rotd-2022-07-20
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.mcsolver.
// :- implementation.

/*
INIT mercury__check_hlds__mcsolver__init
ENDINIT
*/

#include "check_hlds.mcsolver.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "eqvclass.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s {
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
  MR_Word * check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8;
  MR_Cont check_hlds__mcsolver__solve_var_4_p_0_env_0__cont;
  void * check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9;
  MR_Word check_hlds__mcsolver__solve_var_4_p_0_env_0__Var_19;
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
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Var_56;
  MR_Word check_hlds__mcsolver__solve_2_p_0_env_0__Var_57;
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

static const MR_DuArgLocn check_hlds__mcsolver__check_hlds__mcsolver__field_locns_assgt_0_0[2];

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

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__685__1_1_f_0(
  MR_Word LambdaHeadVar__1_75);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__674__1_2_p_0(
  MR_Word Bs0_5,
  MR_Word LambdaHeadVar__1_65);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__635__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__690__1_3_p_0(
  MR_Word X_2,
  MR_Word V_3,
  MR_Word LambdaHeadVar__1_95);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__665__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__551__1_4_p_0(
  MR_Word Val_6,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0(
  MR_Word Equivalences_6,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__2_2_f_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_28);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__1_2_f_0(
  MR_Word Eqvs_1,
  MR_Word LambdaHeadVar__1_22);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__2_3_f_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_24);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__1_2_f_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19);

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__259__1_2_p_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__450__1_2_f_0(
  MR_Word LambdaHeadVar__1_83,
  MR_Word LambdaHeadVar__2_84);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__442__1_2_f_0(
  MR_Word LambdaHeadVar__1_76,
  MR_Word LambdaHeadVar__2_77);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__435__1_2_f_0(
  MR_Word LambdaHeadVar__1_71,
  MR_Word LambdaHeadVar__2_72);

static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__424__1_3_f_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__408__1_2_f_0(
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_f_0(
  MR_Word Eqvs_5,
  MR_Word LambdaHeadVar__1_36);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__390__1_2_f_0(
  MR_Word Eqvs_5,
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__2_2_f_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_30);

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__1_1_f_0(
  MR_Word LambdaHeadVar__1_13);

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
  MR_Word SCs_5,
  MR_Word X_6,
  MR_Word Bs0_7,
  MR_Word * Bs_8,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
  MR_Word SCs_1,
  MR_Word X_2,
  MR_Word V_3,
  MR_Word HeadVar__4_4,
  MR_Word Bs0_5,
  MR_Word * Bs_6);

static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
  MR_Word Bs_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
  MR_Word SCs_5,
  MR_Word HeadVar__2_2,
  MR_Word Bs0_8,
  MR_Word * Bs_9);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
  MR_Word SCs_5,
  MR_Word Assgts_6,
  MR_Word Bs0_7,
  MR_Word * Bs_8);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
  MR_Word Eqvs_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
  MR_Word Eqvs_4,
  MR_Word X_5);

static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_PCs_0_13,
  MR_Word * STATE_VARIABLE_PCs_14);

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PCs_0_2,
  MR_Word * STATE_VARIABLE_PCs_3);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
  void * env_ptr_arg);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9];


struct check_hlds__mcsolver__vector_common_type_8_0_s {
  const MR_Word check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__mcsolver__vector_common_type_8_0_s check_hlds__mcsolver_vector_common_8[2];



static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[2]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_2[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[0])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[0])),
    ((MR_Box) (check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[5])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[6])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[7])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[8])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[9])),
    ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[0])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[7])),
    ((MR_Box) (check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[2])),
    ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[4])),
    ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_3[13][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_4[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_6[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[5]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[4])),
    ((MR_Box) (check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__mcsolver_scalar_common_2[13]))
  },
};

static /* final */ const MR_Box check_hlds__mcsolver_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_solver_cstrts_0)),
    ((MR_Box) (&check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0))
  },
};


static /* final */ const struct check_hlds__mcsolver__vector_common_type_8_0_s check_hlds__mcsolver_vector_common_8[2] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__pair__pti_pair_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__pair__ti_pair_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__eqvclass__pti_eqvclass_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mcsolver__list__pti_list_1__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mcsolver__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__mcsolver____vpti_func_3__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0),
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__mcsolver____vpti_func_2__plain_check_hlds__mcsolver__type_ctor_info_assgt_0__plain_check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0),
    (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn check_hlds__mcsolver__check_hlds__mcsolver__field_locns_assgt_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0 = {
  (MR_String) "assign",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_assgt_0_0,
  NULL,
  check_hlds__mcsolver__check_hlds__mcsolver__field_locns_assgt_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_assgt_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_assgt_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgt",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_assgt_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_assgt_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_assgt_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____assgts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____assgts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "assgts",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_0 = {
  (MR_String) "eqv_disj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_1 = {
  (MR_String) "at_most_one",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_2 = {
  (MR_String) "exactly_one",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0)
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_complex_cstrt_0_3 = {
  (MR_String) "disj_of_assgts",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_complex_cstrt_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_complex_cstrt_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_complex_cstrt_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_complex_cstrt_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_complex_cstrt_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_TypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrt_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrts_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "complex_cstrts",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_eqv_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____eqv_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____eqv_vars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "eqv_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0)
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0 = {
  (MR_String) "implies",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_impl_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_impl_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_impl_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____impl_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impl_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impl",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_impl_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_impl_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_impl_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____impls_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____impls_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "impls",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvar_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvar_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvar",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_mcvars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mcsolver____Unify____mcvars_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____mcvars_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "mcvars",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_impl_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)
};

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0[4] = {
  (MR_String) "prep_eqv_vars",
  (MR_String) "prep_assgts",
  (MR_String) "prep_impls",
  (MR_String) "prep_complex_cstrts"
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0 = {
  (MR_String) "prep_cstrts",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_prep_cstrts_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_prep_cstrts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prep_cstrts_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prep_cstrts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prep_cstrts",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prep_cstrts_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prep_cstrts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prep_cstrts_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mcsolver__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_TypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0)
};

static const MR_ConstString check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0[2] = {
  (MR_String) "prop_graph_yes",
  (MR_String) "prop_graph_no"
};

static const MR_DuFunctorDesc check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0 = {
  (MR_String) "prop_graph",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_prop_graph_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_prop_graph_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_prop_graph_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_prop_graph_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____prop_graph_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____prop_graph_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "prop_graph",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_prop_graph_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_prop_graph_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_prop_graph_0,

};

static const MR_PseudoTypeInfo check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__eqvclass__ti_eqvclass_1term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__list__ti_list_1check_hlds__mcsolver__type_ctor_info_assgt_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0),
  (MR_PseudoTypeInfo) (&check_hlds__mcsolver__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0list__ti_list_1check_hlds__mcsolver__type_ctor_info_complex_cstrt_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mcsolver__check_hlds__mcsolver__field_types_solver_cstrts_0_0,
  check_hlds__mcsolver__check_hlds__mcsolver__field_names_solver_cstrts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0[1] = {
  &check_hlds__mcsolver__check_hlds__mcsolver__du_functor_desc_solver_cstrts_0_0
};

static const MR_DuPtagLayout check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mcsolver__check_hlds__mcsolver__du_stag_ordered_solver_cstrts_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001)),
  ((MR_Box) (check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001)),
  (MR_String) "check_hlds.mcsolver",
  (MR_String) "solver_cstrts",
  { check_hlds__mcsolver__check_hlds__mcsolver__du_name_ordered_solver_cstrts_0 },
  { check_hlds__mcsolver__check_hlds__mcsolver__du_ptag_ordered_solver_cstrts_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mcsolver__check_hlds__mcsolver__functor_number_map_solver_cstrts_0,

};

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__685__1_1_f_0(
  MR_Word LambdaHeadVar__1_75)
{
  MR_Word LambdaHeadVar__2_76;

  {
    LambdaHeadVar__2_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_76, 0) = ((MR_Box) (LambdaHeadVar__1_75));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return LambdaHeadVar__2_76;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__674__1_2_p_0(
  MR_Word Bs0_5,
  MR_Word LambdaHeadVar__1_65)
{
  MR_bool succeeded;
  MR_Word Var_112;
  MR_Box conv0_Var_112;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Bs0_5, ((MR_Box) (LambdaHeadVar__1_65)), &conv0_Var_112);
  if (succeeded)
  {
    Var_112 = ((MR_Word) (conv0_Var_112));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = ((MR_Integer) 0 == Var_112);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__635__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25;

  {
    LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 0) = ((MR_Box) (LambdaHeadVar__1_24));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return LambdaHeadVar__2_25;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__690__1_3_p_0(
  MR_Word X_2,
  MR_Word V_3,
  MR_Word LambdaHeadVar__1_95)
{
  MR_bool succeeded;
  MR_Word Var_96;
  MR_Word Var_97;

  Var_97 = mercury__bool__not_1_f_0(V_3);
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (X_2));
    MR_hl_field(MR_mktag(0), Var_96, 1) = (MR_Box) ((MR_Unsigned) (Var_97));
  }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), ((MR_Box) (Var_96)), LambdaHeadVar__1_95);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__665__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  MR_Word LambdaHeadVar__2_49;

  {
    LambdaHeadVar__2_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, 0) = ((MR_Box) (LambdaHeadVar__1_48));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return LambdaHeadVar__2_49;
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_all__551__1_4_p_0(
  MR_Word Val_6,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  mercury__map__set_4_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (LambdaHeadVar__1_15)), ((MR_Box) (Val_6)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_17;

  check_hlds__mcsolver__IntroducedFrom__pred__bind_all__551__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_17));
}

static void MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0(
  MR_Word Equivalences_6,
  MR_Word LambdaHeadVar__1_17,
  MR_Word LambdaHeadVar__2_18,
  MR_Word * LambdaHeadVar__3_19)
{
  MR_Word EquivVars_10;
  MR_Word Val_11;
  MR_Word Var_20;
  MR_Word Var_38;
  MR_Box conv0_Val_11;
  MR_Box conv2_LambdaHeadVar__3_19;

  Var_20 = mercury__eqvclass__get_equivalent_elements_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Equivalences_6, ((MR_Box) (LambdaHeadVar__1_17)));
  EquivVars_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_20);
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), LambdaHeadVar__2_18, ((MR_Box) (LambdaHeadVar__1_17)), &conv0_Val_11);
  Val_11 = ((MR_Word) (conv0_Val_11));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[6]));
    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Val_11));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]), Var_38, EquivVars_10, ((MR_Box) (LambdaHeadVar__2_18)), &conv2_LambdaHeadVar__3_19);
  *LambdaHeadVar__3_19 = ((MR_Word) (conv2_LambdaHeadVar__3_19));
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__2_2_f_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_28)
{
  MR_Word HeadVar__3_29;

  HeadVar__3_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), HeadVar__1_21, HeadVar__2_28);
  return HeadVar__3_29;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__1_2_f_0(
  MR_Word Eqvs_1,
  MR_Word LambdaHeadVar__1_22)
{
  MR_Word LambdaHeadVar__2_23;
  MR_Word Var_24;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0))));
  MR_Word Val_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Box conv0_Var_24;

  conv0_Var_24 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Eqvs_1, ((MR_Box) (Var_25)));
  Var_24 = ((MR_Word) (conv0_Var_24));
  {
    LambdaHeadVar__2_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_23, 1) = (MR_Box) ((MR_Unsigned) (Val_26));
  }
  return LambdaHeadVar__2_23;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__2_3_f_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_24)
{
  MR_Word HeadVar__4_25;
  MR_Box conv0_HeadVar__4_25;

  conv0_HeadVar__4_25 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), HeadVar__1_12, HeadVar__2_23, ((MR_Box) (HeadVar__3_24)));
  HeadVar__4_25 = ((MR_Word) (conv0_HeadVar__4_25));
  return HeadVar__4_25;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__1_2_f_0(
  MR_Word LambdaHeadVar__1_13,
  MR_Word LambdaHeadVar__2_14)
{
  MR_Word LambdaHeadVar__3_15;
  MR_Word V_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 0))));

  {
    LambdaHeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_15, 0) = ((MR_Box) (V_18));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_15, 1) = ((MR_Box) (LambdaHeadVar__2_14));
  }
  return LambdaHeadVar__3_15;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_22;

  succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__259__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_22);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(
  MR_Word LambdaHeadVar__1_18,
  MR_Word * LambdaHeadVar__2_19)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_18)) == (MR_Integer) 2);
  MR_Word TypeCtorInfo_32_32;
  MR_Word TypeInfo_33_33;
  MR_Word Var_20;
  MR_Word Fls_29;

  if (succeeded)
  {
    Fls_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaHeadVar__1_18, (MR_Integer) 0))));
    Var_20 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[17]);
    TypeCtorInfo_32_32 = (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0);
    TypeInfo_33_33 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[0]);
    succeeded = mercury__list__map_3_p_2(TypeCtorInfo_32_32, TypeInfo_33_33, Var_20, Fls_29, LambdaHeadVar__2_19);
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__259__1_2_p_0(
  MR_Word LambdaHeadVar__1_21,
  MR_Word * LambdaHeadVar__2_22)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_21)) == (MR_Integer) 0);
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Val_28;

  if (succeeded)
  {
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
      Val_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Val_28));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__450__1_2_f_0(
  MR_Word LambdaHeadVar__1_83,
  MR_Word LambdaHeadVar__2_84)
{
  MR_Word LambdaHeadVar__3_85;
  MR_Word Var_86;

  Var_86 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(LambdaHeadVar__1_83);
  LambdaHeadVar__3_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_86, LambdaHeadVar__2_84);
  return LambdaHeadVar__3_85;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__442__1_2_f_0(
  MR_Word LambdaHeadVar__1_76,
  MR_Word LambdaHeadVar__2_77)
{
  MR_Word LambdaHeadVar__3_78;
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 0))));
  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 1))));
  MR_Word Var_81;
  MR_Word X_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
  MR_Word Y_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0))));

  {
    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Y_110));
    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (LambdaHeadVar__2_77));
  }
  {
    LambdaHeadVar__3_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_78, 0) = ((MR_Box) (X_109));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_78, 1) = ((MR_Box) (Var_81));
  }
  return LambdaHeadVar__3_78;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__435__1_2_f_0(
  MR_Word LambdaHeadVar__1_71,
  MR_Word LambdaHeadVar__2_72)
{
  MR_Word LambdaHeadVar__3_73;
  MR_Word X_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 0))));

  {
    LambdaHeadVar__3_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_73, 0) = ((MR_Box) (X_104));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__3_73, 1) = ((MR_Box) (LambdaHeadVar__2_72));
  }
  return LambdaHeadVar__3_73;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_67;

  conv0_LambdaHeadVar__3_67 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__424__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_67));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__2_62)
{
  MR_Word LambdaHeadVar__3_63;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_Box conv1_LambdaHeadVar__3_63;

  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[5]));
    MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (LambdaHeadVar__1_61));
  }
  Var_68 = check_hlds__mcsolver__complex_cstrt_vars_1_f_0(LambdaHeadVar__1_61);
  conv1_LambdaHeadVar__3_63 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]), Var_64, Var_68, ((MR_Box) (LambdaHeadVar__2_62)));
  LambdaHeadVar__3_63 = ((MR_Word) (conv1_LambdaHeadVar__3_63));
  return LambdaHeadVar__3_63;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__424__1_3_f_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word LambdaHeadVar__1_65,
  MR_Word LambdaHeadVar__2_66)
{
  MR_Word LambdaHeadVar__3_67;

  LambdaHeadVar__3_67 = mercury__multi_map__set_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0), LambdaHeadVar__2_66, ((MR_Box) (LambdaHeadVar__1_65)), ((MR_Box) (LambdaHeadVar__1_61)));
  return LambdaHeadVar__3_67;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__408__1_2_f_0(
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49)
{
  MR_bool succeeded;
  MR_Word LambdaHeadVar__3_50;
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 1))));
  MR_Word X_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
  MR_Word VX_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word YesPG_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, (MR_Integer) 0))));
  MR_Word NoPG_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_49, (MR_Integer) 1))));

  succeeded = (VX_94 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_53;

    Var_53 = mercury__multi_map__set_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), YesPG_97, ((MR_Box) (X_93)), ((MR_Box) (Var_52)));
    {
      LambdaHeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_50, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_50, 1) = ((MR_Box) (NoPG_98));
    }
  }
  else
  {
    MR_Word Var_55;

    Var_55 = mercury__multi_map__set_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), NoPG_98, ((MR_Box) (X_93)), ((MR_Box) (Var_52)));
    {
      LambdaHeadVar__3_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_50, 0) = ((MR_Box) (YesPG_97));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_50, 1) = ((MR_Box) (Var_55));
    }
  }
  return LambdaHeadVar__3_50;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_f_0(
  MR_Word Eqvs_5,
  MR_Word LambdaHeadVar__1_36)
{
  MR_Word LambdaHeadVar__2_37;
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 0))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 1))));
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word X_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
  MR_Word VX_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Y_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
  MR_Word VY_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Box conv0_Var_41;

  conv0_Var_41 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Eqvs_5, ((MR_Box) (X_89)));
  Var_41 = ((MR_Word) (conv0_Var_41));
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(0), Var_40, 1) = (MR_Box) ((MR_Unsigned) (VX_90));
  }
  Var_43 = check_hlds__mcsolver__eqv_var_2_f_0(Eqvs_5, Y_91);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(0), Var_42, 1) = (MR_Box) ((MR_Unsigned) (VY_92));
  }
  {
    LambdaHeadVar__2_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_37, 0) = ((MR_Box) (Var_40));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_37, 1) = ((MR_Box) (Var_42));
  }
  return LambdaHeadVar__2_37;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__390__1_2_f_0(
  MR_Word Eqvs_5,
  MR_Word LambdaHeadVar__1_31)
{
  MR_Word LambdaHeadVar__2_32;
  MR_Word Var_33;
  MR_Word X_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 0))));
  MR_Word V_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_31, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Box conv0_Var_33;

  conv0_Var_33 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Eqvs_5, ((MR_Box) (X_87)));
  Var_33 = ((MR_Word) (conv0_Var_33));
  {
    LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_32, 1) = (MR_Box) ((MR_Unsigned) (V_88));
  }
  return LambdaHeadVar__2_32;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__2_2_f_0(
  MR_Word HeadVar__1_12,
  MR_Word HeadVar__2_30)
{
  MR_Word HeadVar__3_31;

  HeadVar__3_31 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), HeadVar__1_12, HeadVar__2_30);
  return HeadVar__3_31;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__1_1_f_0(
  MR_Word LambdaHeadVar__1_13)
{
  MR_Word LambdaHeadVar__2_14;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 0))));
  MR_Word Value_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 1))));

  {
    LambdaHeadVar__2_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_14, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_14, 1) = (MR_Box) ((MR_Unsigned) (Value_20));
  }
  return LambdaHeadVar__2_14;
}

void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer CastX_30 = (MR_Integer) (ArgX4_13);
          MR_Integer CastY_31 = (MR_Integer) (ArgY4_14);

          succeeded = (CastX_30 == CastY_31);
          if (succeeded)
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX4_13, (MR_Integer) 0))));
            MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY4_14, (MR_Integer) 0))));
            MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX4_13, (MR_Integer) 1))));
            MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY4_14, (MR_Integer) 1))));
            MR_Word SubResult1_27;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), &SubResult1_27, ((MR_Box) (ArgX1_25)), ((MR_Box) (ArgY1_26)));
            succeeded = (SubResult1_27 != (MR_Integer) 0);
            if (succeeded)
            {
              SubResult4_15 = SubResult1_27;
              succeeded = (SubResult4_15 != (MR_Integer) 0);
            }
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX2_28)), ((MR_Box) (ArgY2_29)));
              succeeded = (SubResult4_15 != (MR_Integer) 0);
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer CastX_23;
    MR_Integer CastY_24;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          CastX_23 = (MR_Integer) (ArgX4_9);
          CastY_24 = (MR_Integer) (ArgY4_10);
          succeeded = (CastX_23 == CastY_24);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word TypeInfo_10_26;
            MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX4_9, (MR_Integer) 0))));
            MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY4_10, (MR_Integer) 0))));
            MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX4_9, (MR_Integer) 1))));
            MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY4_10, (MR_Integer) 1))));

            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
            if (succeeded)
            {
              TypeInfo_10_26 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_26, ((MR_Box) (ArgX2_21)), ((MR_Box) (ArgY2_22)));
            }
          }
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    check_hlds__mcsolver____Compare____assgt_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__mcsolver____Compare____assgt_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = check_hlds__mcsolver____Unify____assgt_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = check_hlds__mcsolver____Unify____assgt_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_45 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_46 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_45 == CastY_46);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (Var_55)), ((MR_Box) (ArgY1_5)));
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_54)), ((MR_Box) (ArgY2_8)));
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY1_22)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_56)), ((MR_Box) (ArgY1_33)));
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_53)), ((MR_Box) (ArgY1_44)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_17_17;
          MR_Word TypeInfo_18_18;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            TypeInfo_17_17 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_15_15 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_19_19;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_19_19 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_16_16 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s * env_ptr = (struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Var_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9));
  }
  (env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = check_hlds__mcsolver__solve_assgt_4_p_0((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5, (env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Var_19, (env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, (env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8);
  if ((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
    ((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((env_ptr)->check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mcsolver__solve_var_4_p_0(
  MR_Word SCs_5,
  MR_Word X_6,
  MR_Word Bs0_7,
  MR_Word * Bs_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mcsolver__solve_var_4_p_0_env_0_s env;

  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__SCs_5 = SCs_5;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6 = X_6;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7 = Bs0_7;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8 = Bs_8;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont = cont;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
  (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded = mercury__map__contains_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7, ((MR_Box) ((env).check_hlds__mcsolver__solve_var_4_p_0_env_0__X_6)));
  if ((env).check_hlds__mcsolver__solve_var_4_p_0_env_0__succeeded)
  {
    *((env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs_8) = (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__Bs0_7;
    ((env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont)((env).check_hlds__mcsolver__solve_var_4_p_0_env_0__cont_env_ptr);
  }
  else
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      (env).check_hlds__mcsolver__solve_var_4_p_0_env_0__V_9 = ((&check_hlds__mcsolver_vector_common_8[0 + slot_0]))->check_hlds__mcsolver__vector_common_type_8_0__vct_8_f_0;
      check_hlds__mcsolver__solve_var_4_p_0_1(&env);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 2));
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_76;

  conv2_LambdaHeadVar__2_76 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__685__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_76));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__674__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_25;

  conv1_LambdaHeadVar__2_25 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__635__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__mcsolver__IntroducedFrom__pred__solve_complex_cstrt__690__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_49;

  conv0_LambdaHeadVar__2_49 = check_hlds__mcsolver__IntroducedFrom__func__solve_complex_cstrt__665__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_complex_cstrt_6_p_0(
  MR_Word SCs_1,
  MR_Word X_2,
  MR_Word V_3,
  MR_Word HeadVar__4_4,
  MR_Word Bs0_5,
  MR_Word * Bs_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__4_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Zs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), ((MR_Box) (X_2)), ((MR_Box) (Y_10)));
        if (succeeded)
          switch (V_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_22;

                Var_22 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[15]), Zs_11);
                succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(SCs_1, Var_22, Bs0_5, Bs_6);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = check_hlds__mcsolver__all_no_2_p_0(Bs0_5, Zs_11);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  *Bs_6 = Bs0_5;
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        else
          switch (V_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = check_hlds__mcsolver__all_no_2_p_0(Bs0_5, Zs_11);
                if (succeeded)
                {
                  MR_Word Var_35;

                  {
                    Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Y_10));
                    MR_hl_field(MR_mktag(0), Var_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(SCs_1, Var_35, Bs0_5, Bs_6);
                }
                else
                {
                  *Bs_6 = Bs0_5;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_30;

                {
                  Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Y_10));
                  MR_hl_field(MR_mktag(0), Var_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(SCs_1, Var_30, Bs0_5, Bs_6);
              }
              break;
          }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ys0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

        switch (V_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Bs_6 = Bs0_5;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_104_104;
              MR_Word Ys_44;
              MR_Word Var_46;
              MR_Word Var_47;

              succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Ys0_41, ((MR_Box) (X_2)), &Ys_44);
              if (succeeded)
              {
                TypeCtorInfo_104_104 = (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0);
                Var_47 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[14]);
                Var_46 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), TypeCtorInfo_104_104, Var_47, Ys_44);
                succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(SCs_1, Var_46, Bs0_5, Bs_6);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Ys0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 0))));

        switch (V_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ys_58;
              MR_Word Var_64;
              MR_Word Var_115;
              MR_Word Var_116;

              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Bs0_5));
              }
              Ys_58 = mercury__list__filter_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_64, Ys0_55);
              succeeded = (Ys_58 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_58, (MR_Integer) 0))));
                Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_58, (MR_Integer) 1))));
                if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_68;
                  MR_Word Var_69;

                  {
                    Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(MR_mktag(0), Var_69, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(SCs_1, Var_68, Bs0_5, Bs_6);
                }
                else
                {
                  *Bs_6 = Bs0_5;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_109_109;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Ys_80;

              succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Ys0_55, ((MR_Box) (X_2)), &Ys_80);
              if (succeeded)
              {
                TypeCtorInfo_109_109 = (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0);
                Var_74 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[16]);
                Var_73 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), TypeCtorInfo_109_109, Var_74, Ys_80);
                succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(SCs_1, Var_73, Bs0_5, Bs_6);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Assgtss_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word NotConflicting_89;
        MR_Word Var_94;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word _Conflicts_88;

        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[12]));
          MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (check_hlds__mcsolver__solve_complex_cstrt_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (X_2));
          MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (V_3));
        }
        mercury__list__filter_4_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), Var_94, Assgtss_84, &_Conflicts_88, &NotConflicting_89);
        succeeded = (NotConflicting_89 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NotConflicting_89, (MR_Integer) 0))));
          Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NotConflicting_89, (MR_Integer) 1))));
          if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = check_hlds__mcsolver__solve_assgts_4_p_0(SCs_1, Var_114, Bs0_5, Bs_6);
          else
          {
            *Bs_6 = Bs0_5;
            succeeded = MR_TRUE;
          }
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__all_no_2_p_0(
  MR_Word Bs_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word X_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_7;
      MR_Box conv0_Var_7;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = mercury__map__elem_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (X_5)), Bs_1, &conv0_Var_7);
      if (succeeded)
      {
        Var_7 = ((MR_Word) (conv0_Var_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (Var_7 == (MR_Integer) 0);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Xs_6;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_Bs_6;

  succeeded = check_hlds__mcsolver__solve_complex_cstrt_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Bs_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv6_Bs_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_Bs_9;

  succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Bs_9);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv3_Bs_9));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgt_4_p_0(
  MR_Word SCs_5,
  MR_Word HeadVar__2_2,
  MR_Word Bs0_8,
  MR_Word * Bs_9)
{
  MR_bool succeeded;
  MR_Word X_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word V_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word V0_10;
  MR_Box conv0_V0_10;

  succeeded = mercury__map__elem_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (X_6)), Bs0_8, &conv0_V0_10);
  if (succeeded)
  {
    V0_10 = ((MR_Word) (conv0_V0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (V_7 == V0_10);
    if (succeeded)
    {
      *Bs_9 = Bs0_8;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word TypeCtorInfo_17_77;
    MR_Word TypeInfo_18_78;
    MR_Word Bs1_12;
    MR_Word Assgts_13;
    MR_Word Bs2_14;
    MR_Word ComplexCstrts_15;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_73;
    MR_Box conv4_Bs2_14;
    MR_Word CmplxCstrts_64;
    MR_Word TypeInfo_7_65;
    MR_Word TypeInfo_8_66;
    MR_Box conv5_CmplxCstrts_64;
    MR_Box conv7_Bs_9;

    Bs1_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (X_6)), Bs0_8, ((MR_Box) (V_7)));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCs_5, (MR_Integer) 3))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    switch (V_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Assgts_45;
          MR_Box conv1_Assgts_45;

          succeeded = mercury__map__elem_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), ((MR_Box) (X_6)), Var_50, &conv1_Assgts_45);
          if (succeeded)
          {
            Assgts_45 = ((MR_Word) (conv1_Assgts_45));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            Assgts_13 = Assgts_45;
          else
            Assgts_13 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Assgts_41;
          MR_Box conv2_Assgts_41;

          succeeded = mercury__map__elem_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), ((MR_Box) (X_6)), Var_51, &conv2_Assgts_41);
          if (succeeded)
          {
            Assgts_41 = ((MR_Word) (conv2_Assgts_41));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            Assgts_13 = Assgts_41;
          else
            Assgts_13 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgt_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (SCs_5));
    }
    succeeded = mercury__list__foldl_4_p_3((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]), Var_56, Assgts_13, ((MR_Box) (Bs1_12)), &conv4_Bs2_14);
    if (succeeded)
    {
      Bs2_14 = ((MR_Word) (conv4_Bs2_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCs_5, (MR_Integer) 4))));
      TypeInfo_7_65 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]);
      TypeInfo_8_66 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[3]);
      succeeded = mercury__map__elem_2_f_0(TypeInfo_7_65, TypeInfo_8_66, ((MR_Box) (X_6)), Var_25, &conv5_CmplxCstrts_64);
      if (succeeded)
      {
        CmplxCstrts_64 = ((MR_Word) (conv5_CmplxCstrts_64));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        ComplexCstrts_15 = CmplxCstrts_64;
      else
        ComplexCstrts_15 = (MR_Word) ((MR_Unsigned) 0U);
      TypeCtorInfo_17_77 = (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0);
      TypeInfo_18_78 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgt_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (SCs_5));
        MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (X_6));
        MR_hl_field(MR_mktag(0), Var_73, 5) = ((MR_Box) (V_7));
      }
      succeeded = mercury__list__foldl_4_p_3(TypeCtorInfo_17_77, TypeInfo_18_78, Var_73, ComplexCstrts_15, ((MR_Box) (Bs2_14)), &conv7_Bs_9);
      if (succeeded)
      {
        *Bs_9 = ((MR_Word) (conv7_Bs_9));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bs_9;

  succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Bs_9);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Bs_9));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_assgts_4_p_0(
  MR_Word SCs_5,
  MR_Word Assgts_6,
  MR_Word Bs0_7,
  MR_Word * Bs_8)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Box conv1_Bs_8;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (check_hlds__mcsolver__solve_assgts_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (SCs_5));
  }
  succeeded = mercury__list__foldl_4_p_3((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]), Var_9, Assgts_6, ((MR_Box) (Bs0_7)), &conv1_Bs_8);
  if (succeeded)
  {
    *Bs_8 = ((MR_Word) (conv1_Bs_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;

  conv5_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_29;

  conv2_HeadVar__3_29 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__2_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_29));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_23;

  conv1_LambdaHeadVar__2_23 = check_hlds__mcsolver__IntroducedFrom__func__eqv_complex_cstrt__502__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_23));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__mcsolver__eqv_var_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(
  MR_Word Eqvs_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Ys_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_7;
        MR_Word Var_8;
        MR_Word Var_37;
        MR_Box conv3_Var_7;

        conv3_Var_7 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Eqvs_1, ((MR_Box) (X_5)));
        Var_7 = ((MR_Word) (conv3_Var_7));
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_4));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Eqvs_1));
        }
        Var_8 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_37, Ys_6);
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
          MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Xs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Var_11;
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_1));
          MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Eqvs_1));
        }
        Var_11 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_30, Xs_10);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Var_14;
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_5));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Eqvs_1));
        }
        Var_14 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_41, Xs_13);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_14));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Assgtss_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_2));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Eqvs_1));
        }
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[11]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__mcsolver__eqv_complex_cstrt_2_f_0_3));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Var_21));
        }
        Var_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), Var_20, Assgtss_16);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (Var_19));
        }
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_25;

  conv1_HeadVar__4_25 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__2_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_25));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_15;

  conv0_LambdaHeadVar__3_15 = check_hlds__mcsolver__IntroducedFrom__func__complex_cstrt_vars__483__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_15));
  return wrapper_arg_3;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__complex_cstrt_vars_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Ys_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (X_3));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Ys_4));
        }
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      {
        MR_Word Assgtss_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
        MR_Box conv2_HeadVar__2_2;

        conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), (MR_Word) (&check_hlds__mcsolver_scalar_common_6[1]), Assgtss_7, ((MR_Box) ((MR_Unsigned) 0U)));
        HeadVar__2_2 = ((MR_Word) (conv2_HeadVar__2_2));
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__mcsolver__eqv_var_2_f_0(
  MR_Word Eqvs_4,
  MR_Word X_5)
{
  MR_Word HeadVar__3_3;
  MR_Box conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__eqvclass__get_minimum_element_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Eqvs_4, ((MR_Box) (X_5)));
  HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_19;

  succeeded = check_hlds__mcsolver__IntroducedFrom__pred__prepare_abstract_constraint__257__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_19);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_19));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PCs_14;

  check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PCs_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PCs_14));
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_PCs_0_13,
  MR_Word * STATE_VARIABLE_PCs_14)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Constraint_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarConstraint_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));

        check_hlds__mcsolver__prepare_var_constraint_3_p_0(VarConstraint_6, STATE_VARIABLE_PCs_0_13, STATE_VARIABLE_PCs_14);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Constraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constraint_4, (MR_Integer) 0))));
        MR_Word DisjOfAssgts_12;

        succeeded = mercury__list__map_3_p_2((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[1]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[12]), Constraints_31, &DisjOfAssgts_12);
        if (succeeded)
          check_hlds__mcsolver__disjunction_of_assignments_3_p_0(DisjOfAssgts_12, STATE_VARIABLE_PCs_0_13, STATE_VARIABLE_PCs_14);
        else
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.mcsolver.prepare_abstract_constraint\'/3", (MR_String) "Disjuction of constraints - general case.");
            return;
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraints_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Constraint_4, (MR_Integer) 0))));
        MR_Box conv1_STATE_VARIABLE_PCs_14;

        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[11]), Constraints_7, ((MR_Box) (STATE_VARIABLE_PCs_0_13)), &conv1_STATE_VARIABLE_PCs_14);
        *STATE_VARIABLE_PCs_14 = ((MR_Word) (conv1_STATE_VARIABLE_PCs_14));
      }
      break;
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PCs_9;

  check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PCs_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PCs_9));
}

static void MR_CALL 
check_hlds__mcsolver__prepare_var_constraint_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PCs_0_2,
  MR_Word * STATE_VARIABLE_PCs_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Value_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_4));
          MR_hl_field(MR_mktag(0), Var_43, 1) = (MR_Box) ((MR_Unsigned) (Value_5));
        }
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 1))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 2))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 3))));
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PCs_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_PCs_3 = STATE_VARIABLE_PCs_0_2;
        else
        {
          MR_Word X_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_10, (MR_Integer) 0))));
          MR_Word Xs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_10, (MR_Integer) 1))));
          MR_Word Var_60;
          MR_Box conv1_STATE_VARIABLE_PCs_3;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (check_hlds__mcsolver__prepare_var_constraint_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (X_55));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0), Var_60, Xs_56, ((MR_Box) (STATE_VARIABLE_PCs_0_2)), &conv1_STATE_VARIABLE_PCs_3);
          *STATE_VARIABLE_PCs_3 = ((MR_Word) (conv1_STATE_VARIABLE_PCs_3));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Var2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_76;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;

        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var1_15));
          MR_hl_field(MR_mktag(0), Var_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var2_16));
          MR_hl_field(MR_mktag(0), Var_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var2_16));
          MR_hl_field(MR_mktag(0), Var_80, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var1_15));
          MR_hl_field(MR_mktag(0), Var_82, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Var_82));
        }
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 0))));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 1))));
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 2))));
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_2, (MR_Integer) 3))));
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_78));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PCs_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_87));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Ys_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

            check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(X_21, Ys_22, STATE_VARIABLE_PCs_0_2, STATE_VARIABLE_PCs_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            check_hlds__mcsolver__at_most_one_3_p_0(Vars_27, STATE_VARIABLE_PCs_0_2, STATE_VARIABLE_PCs_3);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Vars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            check_hlds__mcsolver__exactly_one_3_p_0(Vars_32, STATE_VARIABLE_PCs_0_2, STATE_VARIABLE_PCs_3);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__3_19;

  check_hlds__mcsolver__IntroducedFrom__pred__bind_equivalent_vars__535__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_LambdaHeadVar__3_19);
  *wrapper_arg_3 = ((MR_Box) (conv4_LambdaHeadVar__3_19));
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s * env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3) = ((MR_Box) ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8));
  ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont)((env_ptr)->check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mcsolver__solve_2_p_0_3_env_0_s env;

  (env).check_hlds__mcsolver__solve_2_p_0_3_env_0__wrapper_arg_3 = wrapper_arg_3;
  (env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont = cont;
  (env).check_hlds__mcsolver__solve_2_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__mcsolver__solve_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &(env).check_hlds__mcsolver__solve_2_p_0_3_env_0__conv2_Bs_8, check_hlds__mcsolver__solve_2_p_0_2, &env);
  }
}

static MR_bool MR_CALL 
check_hlds__mcsolver__solve_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bs_9;

  succeeded = check_hlds__mcsolver__solve_assgt_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Bs_9);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Bs_9));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__mcsolver__solve_2_p_0_env_0_s * env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5 = ((MR_Word) ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5));
  check_hlds__mcsolver__solve_2_p_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__mcsolver__solve_2_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__mcsolver__solve_2_p_0_env_0_s * env_ptr = (struct check_hlds__mcsolver__solve_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0))));
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Box conv5_Bindings_4;

    (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4))));
    (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]);
    (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Var_56 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Equivalences_50));
    }
    (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Var_57 = mercury__map__keys_1_f_0((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeCtorInfo_31_73, (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5);
    (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]);
    mercury__list__foldl_4_p_0((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_30_72, (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__TypeInfo_32_74, (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Var_56, (env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Var_57, ((MR_Box) ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings0_5)), &conv5_Bindings_4);
    *((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4) = ((MR_Word) (conv5_Bindings_4));
    ((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont)((env_ptr)->check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr);
  }
}

void MR_CALL 
check_hlds__mcsolver__solve_2_p_0(
  MR_Word SCs_3,
  MR_Word * Bindings_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__mcsolver__solve_2_p_0_env_0_s env;

  (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3 = SCs_3;
  (env).check_hlds__mcsolver__solve_2_p_0_env_0__Bindings_4 = Bindings_4;
  (env).check_hlds__mcsolver__solve_2_p_0_env_0__cont = cont;
  (env).check_hlds__mcsolver__solve_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded;
    MR_Word TypeInfo_13_44;
    MR_Word TypeInfo_14_45;
    MR_Word Var_7;
    MR_Word Bs1_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_30;
    MR_Word Var_40;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv1_Bs1_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    Var_7 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4))));
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) ((env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
    }
    succeeded = mercury__list__foldl_4_p_3((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]), Var_30, Var_16, ((MR_Box) (Var_7)), &conv1_Bs1_15);
    if (succeeded)
    {
      Bs1_15 = ((MR_Word) (conv1_Bs1_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 2))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 3))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3, (MR_Integer) 4))));
      TypeInfo_13_44 = (MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]);
      TypeInfo_14_45 = (MR_Word) (&check_hlds__mcsolver_scalar_common_2[2]);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__mcsolver__solve_2_p_0_3));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) ((env).check_hlds__mcsolver__solve_2_p_0_env_0__SCs_3));
      }
      mercury__list__foldl_4_p_7(TypeInfo_13_44, TypeInfo_14_45, Var_40, Var_17, ((MR_Box) (Bs1_15)), &(env).check_hlds__mcsolver__solve_2_p_0_env_0__conv3_Bindings0_5, check_hlds__mcsolver__solve_2_p_0_5, &env);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv11_LambdaHeadVar__3_85;

  conv11_LambdaHeadVar__3_85 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__450__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv11_LambdaHeadVar__3_85));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv9_LambdaHeadVar__3_78;

  conv9_LambdaHeadVar__3_78 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__442__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv9_LambdaHeadVar__3_78));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__3_73;

  conv7_LambdaHeadVar__3_73 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__435__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv7_LambdaHeadVar__3_73));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_63;

  conv5_LambdaHeadVar__3_63 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__422__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_63));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__3_50;

  conv3_LambdaHeadVar__3_50 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__408__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv3_LambdaHeadVar__3_50));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = check_hlds__mcsolver__eqv_complex_cstrt_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_37;

  conv1_LambdaHeadVar__2_37 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__396__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_37));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = check_hlds__mcsolver__IntroducedFrom__func__make_solver_cstrts__390__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__mcsolver__make_solver_cstrts_1_f_0(
  MR_Word PCs_3)
{
  MR_Word SCs_4;
  MR_Word Eqvs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PCs_3, (MR_Integer) 0))));
  MR_Word Assgts_6;
  MR_Word Impls_9;
  MR_Word ComplexCstrts_13;
  MR_Word PropGraph_14;
  MR_Word ComplexCstrtsMap_17;
  MR_Word AssgtVars_22;
  MR_Word AndImplVars_25;
  MR_Word AndComplexCstrtVars_28;
  MR_Word AllVars_29;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_69;
  MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PCs_3, (MR_Integer) 1))));
  MR_Box conv4_PropGraph_14;
  MR_Box conv6_ComplexCstrtsMap_17;
  MR_Box conv8_AssgtVars_22;
  MR_Box conv10_AndImplVars_25;
  MR_Box conv12_AndComplexCstrtVars_28;

  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[2]));
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_1));
    MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Eqvs_5));
  }
  Assgts_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), Var_30, Var_116);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[3]));
    MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_2));
    MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Eqvs_5));
  }
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PCs_3, (MR_Integer) 2))));
  Impls_9 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0), Var_35, Var_44);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_3[4]));
    MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__mcsolver__make_solver_cstrts_1_f_0_3));
    MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Eqvs_5));
  }
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PCs_3, (MR_Integer) 3))));
  ComplexCstrts_13 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0), Var_45, Var_46);
  Var_58 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0));
  Var_59 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_59));
  }
  conv4_PropGraph_14 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prop_graph_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[6]), Impls_9, ((MR_Box) (Var_57)));
  PropGraph_14 = ((MR_Word) (conv4_PropGraph_14));
  Var_69 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0));
  conv6_ComplexCstrtsMap_17 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[1]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[7]), ComplexCstrts_13, ((MR_Box) (Var_69)));
  ComplexCstrtsMap_17 = ((MR_Word) (conv6_ComplexCstrtsMap_17));
  conv8_AssgtVars_22 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_assgt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[8]), Assgts_6, ((MR_Box) ((MR_Unsigned) 0U)));
  AssgtVars_22 = ((MR_Word) (conv8_AssgtVars_22));
  conv10_AndImplVars_25 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_impl_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[9]), Impls_9, ((MR_Box) (AssgtVars_22)));
  AndImplVars_25 = ((MR_Word) (conv10_AndImplVars_25));
  conv12_AndComplexCstrtVars_28 = mercury__list__foldl_3_f_0((MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_complex_cstrt_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[4]), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[10]), ComplexCstrts_13, ((MR_Box) (AndImplVars_25)));
  AndComplexCstrtVars_28 = ((MR_Word) (conv12_AndComplexCstrtVars_28));
  AllVars_29 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), AndComplexCstrtVars_28);
  {
    SCs_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SCs_4, 0) = ((MR_Box) (AllVars_29));
    MR_hl_field(MR_mktag(0), SCs_4, 1) = ((MR_Box) (Eqvs_5));
    MR_hl_field(MR_mktag(0), SCs_4, 2) = ((MR_Box) (Assgts_6));
    MR_hl_field(MR_mktag(0), SCs_4, 3) = ((MR_Box) (PropGraph_14));
    MR_hl_field(MR_mktag(0), SCs_4, 4) = ((MR_Box) (ComplexCstrtsMap_17));
  }
  return SCs_4;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_31;

  conv1_HeadVar__3_31 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__2_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_31));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  conv0_LambdaHeadVar__2_14 = check_hlds__mcsolver__IntroducedFrom__func__disjunction_of_assignments__378__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__mcsolver__disjunction_of_assignments_3_p_0(
  MR_Word DisjOfAssgts_4,
  MR_Word STATE_VARIABLE_PCs_0_9,
  MR_Word * STATE_VARIABLE_PCs_10)
{
  MR_Word Assgtss_6;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  Assgtss_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[1]), (MR_Word) (&check_hlds__mcsolver_scalar_common_1[2]), (MR_Word) (&check_hlds__mcsolver_scalar_common_6[0]), DisjOfAssgts_4);
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (Assgtss_6));
  }
  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_9, (MR_Integer) 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_9, (MR_Integer) 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_9, (MR_Integer) 2))));
  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_9, (MR_Integer) 3))));
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
check_hlds__mcsolver__exactly_one_3_p_0(
  MR_Word Xs_4,
  MR_Word STATE_VARIABLE_PCs_0_10,
  MR_Word * STATE_VARIABLE_PCs_11)
{
  if ((Xs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mcsolver.exactly_one\'/3", (MR_String) "exactly_one of zero variables");
      return;
    }
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_4, (MR_Integer) 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_4, (MR_Integer) 0))));

    if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), Var_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 1))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 2))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 3))));
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PCs_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_42));
      }
    }
    else
    {
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Xs_4));
      }
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 1))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 2))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_10, (MR_Integer) 3))));
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PCs_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      }
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__at_most_one_3_p_0(
  MR_Word Xs_4,
  MR_Word STATE_VARIABLE_PCs_0_13,
  MR_Word * STATE_VARIABLE_PCs_14)
{
  if ((Xs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_PCs_14 = STATE_VARIABLE_PCs_0_13;
  else
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_4, (MR_Integer) 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_4, (MR_Integer) 0))));

    if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PCs_14 = STATE_VARIABLE_PCs_0_13;
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));

      if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;

        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), Var_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), Var_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), Var_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Var_52));
        }
        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 0))));
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 1))));
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 2))));
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 3))));
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_48));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PCs_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;

        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Xs_4));
        }
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 1))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 2))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_13, (MR_Integer) 3))));
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_PCs_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__equivalent_to_disjunction_4_p_0(
  MR_Word X_5,
  MR_Word Ys_6,
  MR_Word STATE_VARIABLE_PCs_0_12,
  MR_Word * STATE_VARIABLE_PCs_13)
{
  if ((Ys_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (X_5));
      MR_hl_field(MR_mktag(0), Var_39, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 1))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 3))));
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PCs_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
    }
  }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_6, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ys_6, (MR_Integer) 0))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_54;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 0))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;

      Var_54 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_55, ((MR_Box) (X_5)), ((MR_Box) (Var_31)));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 1))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 2))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PCs_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (X_5));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Ys_6));
      }
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 1))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 2))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_12, (MR_Integer) 3))));
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PCs_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      }
    }
  }
}

void MR_CALL 
check_hlds__mcsolver__assign_4_p_0(
  MR_Word X_5,
  MR_Word V_6,
  MR_Word STATE_VARIABLE_PCs_0_8,
  MR_Word * STATE_VARIABLE_PCs_9)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_12, 1) = (MR_Box) ((MR_Unsigned) (V_6));
  }
  Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 0))));
  Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 1))));
  Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 2))));
  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 3))));
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
check_hlds__mcsolver__different_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_PCs_0_8,
  MR_Word * STATE_VARIABLE_PCs_9)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_13));
  }
  Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 0))));
  Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 2))));
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 3))));
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
  }
}

void MR_CALL 
check_hlds__mcsolver__not_both_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_PCs_0_8,
  MR_Word * STATE_VARIABLE_PCs_9)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_21));
  }
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 3))));
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
  }
}

void MR_CALL 
check_hlds__mcsolver__implies_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_PCs_0_8,
  MR_Word * STATE_VARIABLE_PCs_9)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Y_6));
    MR_hl_field(MR_mktag(0), Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (X_5));
    MR_hl_field(MR_mktag(0), Var_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_21));
  }
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 3))));
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
  }
}

static void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PCs_9;

  check_hlds__mcsolver__equivalent_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PCs_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PCs_9));
}

void MR_CALL 
check_hlds__mcsolver__equivalent_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PCs_0_2,
  MR_Word * STATE_VARIABLE_PCs_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_PCs_3 = STATE_VARIABLE_PCs_0_2;
  else
  {
    MR_Word X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Xs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_PCs_3;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__mcsolver_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__mcsolver__equivalent_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (X_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0), Var_12, Xs_8, ((MR_Box) (STATE_VARIABLE_PCs_0_2)), &conv1_STATE_VARIABLE_PCs_3);
    *STATE_VARIABLE_PCs_3 = ((MR_Word) (conv1_STATE_VARIABLE_PCs_3));
  }
}

void MR_CALL 
check_hlds__mcsolver__equivalent_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_PCs_0_8,
  MR_Word * STATE_VARIABLE_PCs_9)
{
  MR_Word Var_11;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 0))));
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  Var_11 = mercury__eqvclass__ensure_equivalence_3_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]), Var_12, ((MR_Box) (X_5)), ((MR_Box) (Y_6)));
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 2))));
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PCs_0_8, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PCs_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
  }
}

static void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PCs_14;

  check_hlds__mcsolver__prepare_abstract_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PCs_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PCs_14));
}

void MR_CALL 
check_hlds__mcsolver__prepare_abstract_constraints_3_p_0(
  MR_Word Constraints_4,
  MR_Word STATE_VARIABLE_PCs_0_6,
  MR_Word * STATE_VARIABLE_PCs_7)
{
  MR_Box conv1_STATE_VARIABLE_PCs_7;

  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&check_hlds__mcsolver__check_hlds__mcsolver__type_ctor_info_prep_cstrts_0), (MR_Word) (&check_hlds__mcsolver_scalar_common_2[4]), Constraints_4, ((MR_Box) (STATE_VARIABLE_PCs_0_6)), &conv1_STATE_VARIABLE_PCs_7);
  *STATE_VARIABLE_PCs_7 = ((MR_Word) (conv1_STATE_VARIABLE_PCs_7));
}

MR_Word MR_CALL 
check_hlds__mcsolver__new_prep_cstrts_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mercury__eqvclass__init_0_f_0((MR_Word) (&check_hlds__mcsolver_scalar_common_1[0]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____assgt_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____assgt_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____assgts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____assgts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____assgts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____assgts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____complex_cstrt_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____complex_cstrt_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____complex_cstrt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____complex_cstrt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____complex_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____complex_cstrts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____complex_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____complex_cstrts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____eqv_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____eqv_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____eqv_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____eqv_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____impl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____impl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____impls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____impls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____impls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____impls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____mcvar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____mcvar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____mcvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____mcvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____mcvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____mcvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prep_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____prep_cstrts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prep_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____prep_cstrts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____prop_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____prop_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____prop_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____prop_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mcsolver____Unify____solver_cstrts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mcsolver____Unify____solver_cstrts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mcsolver____Compare____solver_cstrts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mcsolver____Compare____solver_cstrts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mcsolver__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mcsolver.
