/*
** Automatically generated from `autopar_costs.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module mdprof_fb.automatic_parallelism.autopar_costs. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_costs__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "random.mih"
#include "report.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"



#line 257 "autopar_costs.m"
struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0_s {
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8;
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11;
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13;
#line 257 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14;
#line 257 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont;
#line 257 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont_env_ptr;
#line 300 "autopar_costs.m"
  MR_bool mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded;
#line 264 "autopar_costs.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostPercall_15;
#line 290 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__ArgNum_16;
#line 290 "autopar_costs.m"
  MR_bool mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cond_0;
#line 257 "autopar_costs.m"
};

#line 226 "autopar_costs.m"
struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0_s {
#line 226 "autopar_costs.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__wrapper_arg_1;
#line 226 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont;
#line 226 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont_env_ptr;
#line 226 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__conv2_Use_14;
#line 226 "autopar_costs.m"
};


#line 136 "mdprof_fb.automatic_parallelism.autopar_costs.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 139 "mdprof_fb.automatic_parallelism.autopar_costs.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__analysis_utils__pti_cost_and_callees_1__plain_analysis_utils__type_ctor_info_callee_0;

#line 305 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_p_0(
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_10,
#line 305 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_11,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_12,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_13,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_14,
#line 305 "autopar_costs.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Cost_15,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_16,
#line 305 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_17,
#line 305 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_25);

#line 266 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
#line 266 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg);

#line 257 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_8,
#line 257 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_12,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13,
#line 257 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_14,
#line 257 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__cont,
#line 257 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr);

#line 245 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_p_0(
#line 245 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__A_4,
#line 245 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__B_5,
#line 245 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Ealiest_6);

#line 232 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_3(
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2,
#line 232 "autopar_costs.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_3);

#line 226 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_1(
#line 226 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg);

#line 226 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_2(
#line 226 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
#line 226 "autopar_costs.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
#line 226 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__cont,
#line 226 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr);

#line 210 "autopar_costs.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_7,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8,
#line 210 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11);

#line 136 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
#line 136 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 136 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
#line 136 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3);

#line 116 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
#line 116 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 116 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
#line 116 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3);

#line 204 "autopar_costs.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
#line 204 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][10];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_4[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_5[1][3];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__analysis_utils__pti_cost_and_callees_1__plain_analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_4[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 372 "mdprof_fb.automatic_parallelism.autopar_costs.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 380 "mdprof_fb.automatic_parallelism.autopar_costs.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__analysis_utils__pti_cost_and_callees_1__plain_analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_PseudoTypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 305 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_p_0(
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_10,
#line 305 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_11,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_12,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_13,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_14,
#line 305 "autopar_costs.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Cost_15,
#line 305 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_16,
#line 305 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_17,
#line 305 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_25)
#line 305 "autopar_costs.m"
{
#line 311 "autopar_costs.m"
  {
#line 311 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Deep_19;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_20;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_21;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_23;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_26_26;
#line 311 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_34_34;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_35_35;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_36_36;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_37_37;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_38_38;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_39_39;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_40_40;
#line 313 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_41_41;

#line 312 "autopar_costs.m"
    {
#line 312 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_26_26 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
    }
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__Deep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 0)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 1)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 2)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 3)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 4)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 5)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 6)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 7)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 8)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 9)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 10)));
#line 313 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_10, (MR_Integer) 11)));
#line 315 "autopar_costs.m"
    {
#line 315 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Info_10, &mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_21);
    }
#line 316 "autopar_costs.m"
    {
#line 316 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Deep_19));
#line 316 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_21));
#line 316 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_14));
#line 316 "autopar_costs.m"
    }
#line 319 "autopar_costs.m"
    {
#line 319 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
#line 318 "autopar_costs.m"
    {
#line 318 "autopar_costs.m"
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_20, mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_16, mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_11, mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_12, mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_13, mdprof_fb__automatic_parallelism__autopar_costs__Cost_15, mdprof_fb__automatic_parallelism__autopar_costs__V_27_27, mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_22, &mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_23);
    }
#line 322 "autopar_costs.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_23)) == (MR_mktag((MR_Integer) 1))))
#line 323 "autopar_costs.m"
      {
#line 323 "autopar_costs.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_costs__Error_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_23, (MR_Integer) 0)));
#line 323 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;
#line 323 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;

#line 324 "autopar_costs.m"
        {
#line 324 "autopar_costs.m"
          var_use_analysis__pessimistic_var_use_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_14, mdprof_fb__automatic_parallelism__autopar_costs__Cost_15, mdprof_fb__automatic_parallelism__autopar_costs__Use_17);
        }
#line 325 "autopar_costs.m"
        {
#line 325 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "autopar_costs.m"
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__V_28_28, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_16));
#line 325 "autopar_costs.m"
        }
#line 326 "autopar_costs.m"
        {
#line 326 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "autopar_costs.m"
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 326 "autopar_costs.m"
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Error_24));
#line 326 "autopar_costs.m"
        }
#line 325 "autopar_costs.m"
        {
#line 325 "autopar_costs.m"
          message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_costs__V_28_28, mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_26_26, mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_25);
#line 325 "autopar_costs.m"
          return;
        }
#line 323 "autopar_costs.m"
      }
#line 322 "autopar_costs.m"
    else
#line 321 "autopar_costs.m"
      {
#line 321 "autopar_costs.m"
        *mdprof_fb__automatic_parallelism__autopar_costs__Use_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_23, (MR_Integer) 0)));
#line 321 "autopar_costs.m"
        *mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_25 = mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Messages_26_26;
#line 321 "autopar_costs.m"
      }
#line 311 "autopar_costs.m"
  }
#line 305 "autopar_costs.m"
}

#line 266 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
#line 266 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg)
#line 266 "autopar_costs.m"
{
#line 266 "autopar_costs.m"
  {
#line 266 "autopar_costs.m"
    struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0_s * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0_s *) mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg;

#line 266 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cond_0 = MR_TRUE;
#line 266 "autopar_costs.m"
    {
#line 266 "autopar_costs.m"
      MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HigherOrder_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 3)));
#line 266 "autopar_costs.m"
      MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 0)));
#line 266 "autopar_costs.m"
      MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 1)));
#line 266 "autopar_costs.m"
      MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 2)));

#line 271 "autopar_costs.m"
      if ((mdprof_fb__automatic_parallelism__autopar_costs__HigherOrder_17 == (MR_Integer) 0))
#line 272 "autopar_costs.m"
        {
#line 272 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Callee_19;
#line 272 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_20;
#line 272 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_21;
#line 272 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_22;
#line 272 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Messages_23;
#line 275 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_18;
#line 273 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 2)));
#line 273 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 0)));
#line 273 "autopar_costs.m"
          MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 1)));
#line 273 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11, (MR_Integer) 3)));
#line 273 "autopar_costs.m"
          MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_18;
#line 279 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_48_48;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_49_49;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_50_50;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_51_51;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_52_52;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_53_53;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_54_54;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_55_55;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_56_56;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_57_57;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_58_58;
#line 280 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_59_59;
#line 285 "autopar_costs.m"
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25;

#line 273 "autopar_costs.m"
          {
#line 273 "autopar_costs.m"
            (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, mdprof_fb__automatic_parallelism__autopar_costs__V_28_28, &mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_18);
          }
#line 273 "autopar_costs.m"
          if ((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded)
#line 273 "autopar_costs.m"
            {
#line 273 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_18 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_18);
#line 273 "autopar_costs.m"
              (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded = MR_TRUE;
#line 273 "autopar_costs.m"
            }
#line 275 "autopar_costs.m"
          if ((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded)
#line 274 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__Callee_19 = mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_18;
#line 275 "autopar_costs.m"
          else
#line 276 "autopar_costs.m"
            {
#line 276 "autopar_costs.m"
              {
#line 276 "autopar_costs.m"
                mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", (MR_String) "first-order call site has wrong number of CSDs");
#line 276 "autopar_costs.m"
                return;
              }
#line 276 "autopar_costs.m"
            }
#line 279 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Callee_19, (MR_Integer) 0)));
#line 279 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Callee_19, (MR_Integer) 1)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 0)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 1)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 2)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 3)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 4)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 5)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 6)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 7)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 8)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 9)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 10)));
#line 280 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (MR_Integer) 11)));
#line 281 "autopar_costs.m"
          {
#line 281 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_21, &mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_22);
          }
#line 283 "autopar_costs.m"
          {
#line 283 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_9_p_0((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__ArgNum_16, mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_21, mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_22, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostPercall_15, mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_20, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14, &mdprof_fb__automatic_parallelism__autopar_costs__Messages_23);
          }
#line 286 "autopar_costs.m"
          {
#line 286 "autopar_costs.m"
            mercury__io__stderr_stream_3_p_0(&mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25);
          }
#line 287 "autopar_costs.m"
          {
#line 287 "autopar_costs.m"
            message__write_out_messages_4_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25, mdprof_fb__automatic_parallelism__autopar_costs__Messages_23);
          }
#line 272 "autopar_costs.m"
        }
#line 271 "autopar_costs.m"
      else
#line 270 "autopar_costs.m"
        {
#line 270 "autopar_costs.m"
          var_use_analysis__pessimistic_var_use_info_3_p_0((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostPercall_15, (mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14);
        }
#line 266 "autopar_costs.m"
      {
#line 266 "autopar_costs.m"
        ((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont)((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont_env_ptr);
#line 266 "autopar_costs.m"
        return;
      }
#line 266 "autopar_costs.m"
    }
#line 266 "autopar_costs.m"
  }
#line 266 "autopar_costs.m"
}

#line 257 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_8,
#line 257 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_12,
#line 257 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13,
#line 257 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_14,
#line 257 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__cont,
#line 257 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr)
#line 257 "autopar_costs.m"
{
#line 257 "autopar_costs.m"
  {
#line 257 "autopar_costs.m"
    struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0_s mdprof_fb__automatic_parallelism__autopar_costs__env;

#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Info_8 = mdprof_fb__automatic_parallelism__autopar_costs__Info_8;
#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostAndCallee_11 = mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11;
#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13 = mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13;
#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14 = mdprof_fb__automatic_parallelism__autopar_costs__Use_14;
#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont = mdprof_fb__automatic_parallelism__autopar_costs__cont;
#line 257 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont_env_ptr = mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr;
#line 300 "autopar_costs.m"
    {
#line 263 "autopar_costs.m"
      MR_Float mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;

#line 263 "autopar_costs.m"
      {
#line 263 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = measurements__cs_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Cost_12);
      }
#line 263 "autopar_costs.m"
      (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded = (((MR_Float) 0.0000000000000000) < mdprof_fb__automatic_parallelism__autopar_costs__V_27_27);
#line 300 "autopar_costs.m"
      if ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded)
#line 264 "autopar_costs.m"
        {
#line 264 "autopar_costs.m"
          {
#line 264 "autopar_costs.m"
            (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostPercall_15 = measurements__cs_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Cost_12);
          }
#line 290 "autopar_costs.m"
          (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cond_0 = MR_FALSE;
#line 265 "autopar_costs.m"
          {
#line 265 "autopar_costs.m"
            mercury__list__member_index0_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_9)), mdprof_fb__automatic_parallelism__autopar_costs__Args_10, &(mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__ArgNum_16, mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1, &mdprof_fb__automatic_parallelism__autopar_costs__env);
          }
#line 290 "autopar_costs.m"
          if (!((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cond_0))
#line 291 "autopar_costs.m"
            {
#line 291 "autopar_costs.m"
              {
#line 291 "autopar_costs.m"
                MR_Word base;
#line 291 "autopar_costs.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "autopar_costs.m"
                *((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14) = base;
#line 291 "autopar_costs.m"
                MR_hl_field(MR_mktag(0), base, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 291 "autopar_costs.m"
                MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__CostPercall_15);
#line 291 "autopar_costs.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13));
#line 291 "autopar_costs.m"
              }
#line 292 "autopar_costs.m"
              (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded = ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13 == (MR_Integer) 1);
#line 294 "autopar_costs.m"
              if ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__succeeded)
#line 293 "autopar_costs.m"
                {
#line 293 "autopar_costs.m"
                }
#line 294 "autopar_costs.m"
              else
#line 295 "autopar_costs.m"
                {
#line 295 "autopar_costs.m"
                  {
#line 295 "autopar_costs.m"
                    mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", (MR_String) "Var use type most be consumption if \\+ member(Var, Args)");
#line 295 "autopar_costs.m"
                    return;
                  }
#line 295 "autopar_costs.m"
                }
#line 291 "autopar_costs.m"
              {
#line 291 "autopar_costs.m"
                ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont)((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont_env_ptr);
#line 291 "autopar_costs.m"
                return;
              }
#line 291 "autopar_costs.m"
            }
#line 264 "autopar_costs.m"
        }
#line 300 "autopar_costs.m"
      else
#line 302 "autopar_costs.m"
        {
#line 302 "autopar_costs.m"
          {
#line 302 "autopar_costs.m"
            var_use_analysis__pessimistic_var_use_info_3_p_0((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__VarUseType_13, (MR_Float) 0.0000000000000000, (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__Use_14);
          }
#line 302 "autopar_costs.m"
          {
#line 302 "autopar_costs.m"
            ((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont)((mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_env_0__cont_env_ptr);
#line 302 "autopar_costs.m"
            return;
          }
#line 302 "autopar_costs.m"
        }
#line 300 "autopar_costs.m"
    }
#line 257 "autopar_costs.m"
  }
#line 257 "autopar_costs.m"
}

#line 245 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_p_0(
#line 245 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__A_4,
#line 245 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__B_5,
#line 245 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Ealiest_6)
#line 245 "autopar_costs.m"
{
#line 248 "autopar_costs.m"
  {
#line 248 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 248 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__TimeA_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__A_4, (MR_Integer) 0)));
#line 248 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__TimeB_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__B_5, (MR_Integer) 0)));
#line 249 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__A_4, (MR_Integer) 1)));
#line 249 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__A_4, (MR_Integer) 2)));
#line 250 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__B_5, (MR_Integer) 1)));
#line 250 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__B_5, (MR_Integer) 2)));

#line 251 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__TimeA_7 < mdprof_fb__automatic_parallelism__autopar_costs__TimeB_8);
#line 253 "autopar_costs.m"
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 252 "autopar_costs.m"
      *mdprof_fb__automatic_parallelism__autopar_costs__Ealiest_6 = mdprof_fb__automatic_parallelism__autopar_costs__A_4;
#line 253 "autopar_costs.m"
    else
#line 254 "autopar_costs.m"
      *mdprof_fb__automatic_parallelism__autopar_costs__Ealiest_6 = mdprof_fb__automatic_parallelism__autopar_costs__B_5;
#line 248 "autopar_costs.m"
  }
#line 245 "autopar_costs.m"
}

#line 232 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_3(
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
#line 232 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2,
#line 232 "autopar_costs.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_3)
#line 232 "autopar_costs.m"
{
#line 232 "autopar_costs.m"
  {
#line 232 "autopar_costs.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure = mdprof_fb__automatic_parallelism__autopar_costs__closure_arg;
#line 232 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__conv3_Ealiest_6;

#line 232 "autopar_costs.m"
    {
#line 232 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__earliest_use_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_costs__conv3_Ealiest_6);
    }
#line 232 "autopar_costs.m"
    *mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__conv3_Ealiest_6));
#line 232 "autopar_costs.m"
  }
#line 232 "autopar_costs.m"
}

#line 226 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_1(
#line 226 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg)
#line 226 "autopar_costs.m"
{
#line 226 "autopar_costs.m"
  {
#line 226 "autopar_costs.m"
    struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0_s * mdprof_fb__automatic_parallelism__autopar_costs__env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0_s *) mdprof_fb__automatic_parallelism__autopar_costs__env_ptr_arg;

#line 226 "autopar_costs.m"
    *((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__conv2_Use_14));
#line 226 "autopar_costs.m"
    {
#line 226 "autopar_costs.m"
      ((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont)((mdprof_fb__automatic_parallelism__autopar_costs__env_ptr)->mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont_env_ptr);
#line 226 "autopar_costs.m"
      return;
    }
#line 226 "autopar_costs.m"
  }
#line 226 "autopar_costs.m"
}

#line 226 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_2(
#line 226 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
#line 226 "autopar_costs.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
#line 226 "autopar_costs.m"
  MR_Cont mdprof_fb__automatic_parallelism__autopar_costs__cont,
#line 226 "autopar_costs.m"
  void * mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr)
#line 226 "autopar_costs.m"
{
#line 226 "autopar_costs.m"
  {
#line 226 "autopar_costs.m"
    struct mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0_s mdprof_fb__automatic_parallelism__autopar_costs__env;

#line 226 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__wrapper_arg_1 = mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1;
#line 226 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont = mdprof_fb__automatic_parallelism__autopar_costs__cont;
#line 226 "autopar_costs.m"
    (mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__cont_env_ptr = mdprof_fb__automatic_parallelism__autopar_costs__cont_env_ptr;
#line 226 "autopar_costs.m"
    {
#line 226 "autopar_costs.m"
      MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure = mdprof_fb__automatic_parallelism__autopar_costs__closure_arg;

#line 226 "autopar_costs.m"
      {
#line 226 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 8))), &(mdprof_fb__automatic_parallelism__autopar_costs__env).mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_6_f_0_2_env_0__conv2_Use_14, mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_1, &mdprof_fb__automatic_parallelism__autopar_costs__env);
      }
#line 226 "autopar_costs.m"
    }
#line 226 "autopar_costs.m"
  }
#line 226 "autopar_costs.m"
}

#line 210 "autopar_costs.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_7,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8,
#line 210 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
#line 210 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11)
#line 210 "autopar_costs.m"
{
#line 213 "autopar_costs.m"
  {
#line 213 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Use_12;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 3)));
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_16;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Uses_17;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 4)));
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_78_78;
#line 213 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_79_79;
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 0)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 1)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 2)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 5)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 6)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 7)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 8)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 9)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 10)));
#line 214 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 11)));
#line 215 "autopar_costs.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14;
#line 221 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15;
#line 217 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_70_70;
#line 217 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_54_54;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_55_55;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_56_56;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_57_57;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_58_58;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_59_59;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_60_60;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_61_61;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_62_62;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_63_63;
#line 218 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_64_64;
#line 218 "autopar_costs.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15;

#line 215 "autopar_costs.m"
    {
#line 215 "autopar_costs.m"
      mercury__map__lookup_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[1], mdprof_fb__automatic_parallelism__autopar_costs__V_35_35, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8)), &mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14);
    }
#line 215 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14);
#line 217 "autopar_costs.m"
    {
#line 217 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_13, mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14);
    }
#line 217 "autopar_costs.m"
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 217 "autopar_costs.m"
      {
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 0)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 1)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 2)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 3)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 4)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 5)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 6)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 7)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 8)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 9)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 10)));
#line 218 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 11)));
#line 1166 "mdprof_fb.automatic_parallelism.autopar_costs.c"
        mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_70_70 = (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0;
#line 218 "autopar_costs.m"
        {
#line 218 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__succeeded = mercury__map__search_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68, mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_70_70, mdprof_fb__automatic_parallelism__autopar_costs__V_24_24, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8)), &mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15);
        }
#line 218 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 218 "autopar_costs.m"
          {
#line 218 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15);
#line 218 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__succeeded = MR_TRUE;
#line 218 "autopar_costs.m"
          }
#line 217 "autopar_costs.m"
      }
#line 221 "autopar_costs.m"
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 220 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__Cost_16 = mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15;
#line 221 "autopar_costs.m"
    else
#line 222 "autopar_costs.m"
      {
#line 222 "autopar_costs.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_65_65;
#line 222 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_66_66;
#line 222 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_67_67;

#line 222 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__Cost_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 0)));
#line 222 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 1)));
#line 222 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 2)));
#line 222 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 3)));
#line 222 "autopar_costs.m"
      }
#line 226 "autopar_costs.m"
    {
#line 226 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[0]));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0_2));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Info_7));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_9));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Args_10));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Cost_16));
#line 226 "autopar_costs.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, 8) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11));
#line 226 "autopar_costs.m"
    }
#line 1234 "mdprof_fb.automatic_parallelism.autopar_costs.c"
    mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0;
#line 225 "autopar_costs.m"
    {
#line 225 "autopar_costs.m"
      mercury__solutions__solutions_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72, mdprof_fb__automatic_parallelism__autopar_costs__V_25_25, &mdprof_fb__automatic_parallelism__autopar_costs__Uses_17);
    }
#line 231 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 0)));
#line 231 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 1)));
#line 233 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11 == (MR_Integer) 1))
#line 230 "autopar_costs.m"
      {
#line 232 "autopar_costs.m"
        MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv4_Use_12;

#line 232 "autopar_costs.m"
        {
#line 232 "autopar_costs.m"
          mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72, mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_5[0], mdprof_fb__automatic_parallelism__autopar_costs__V_78_78, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_79_79)), &mdprof_fb__automatic_parallelism__autopar_costs__conv4_Use_12);
        }
#line 232 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__Use_12 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv4_Use_12);
#line 230 "autopar_costs.m"
      }
#line 233 "autopar_costs.m"
    else
#line 239 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__Use_12 = mdprof_fb__automatic_parallelism__autopar_costs__V_79_79;
#line 239 "autopar_costs.m"
    else
#line 240 "autopar_costs.m"
      {
#line 241 "autopar_costs.m"
        {
#line 241 "autopar_costs.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "Too many solutions ");
        }
#line 240 "autopar_costs.m"
      }
#line 213 "autopar_costs.m"
    return mdprof_fb__automatic_parallelism__autopar_costs__Use_12;
#line 213 "autopar_costs.m"
  }
#line 210 "autopar_costs.m"
}

#line 136 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
#line 136 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 136 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
#line 136 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
#line 136 "autopar_costs.m"
{
#line 139 "autopar_costs.m"
  {
#line 139 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 139 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "autopar_costs.m"
      {
#line 179 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
#line 181 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 180 "autopar_costs.m"
          {
#line 180 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 181 "autopar_costs.m"
        else
#line 182 "autopar_costs.m"
          {
#line 182 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
#line 181 "autopar_costs.m"
      }
#line 139 "autopar_costs.m"
    else
#line 140 "autopar_costs.m"
      {
#line 140 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
#line 140 "autopar_costs.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_10;
#line 140 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 0)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 1)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 2)));
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20;
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21;
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22;
#line 141 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23;

#line 141 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 3)));
#line 141 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 4)));
#line 141 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 5)));
#line 141 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 6)));
#line 141 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 7)));
#line 142 "autopar_costs.m"
        {
#line 142 "autopar_costs.m"
          coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__Before_10);
        }
#line 143 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 == (MR_Integer) 0);
#line 146 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 145 "autopar_costs.m"
          {
#line 145 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 146 "autopar_costs.m"
        else
#line 149 "autopar_costs.m"
          {
#line 149 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11;
#line 149 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12;
#line 149 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_14_14;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_30_30;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 150 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;

#line 149 "autopar_costs.m"
            {
#line 149 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_2, &mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11);
            }
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 0)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 1)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 2)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 3)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 4)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 5)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 6)));
#line 150 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 7)));
#line 151 "autopar_costs.m"
            {
#line 151 "autopar_costs.m"
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12, mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11);
            }
#line 149 "autopar_costs.m"
          }
#line 140 "autopar_costs.m"
      }
#line 139 "autopar_costs.m"
  }
#line 136 "autopar_costs.m"
}

#line 116 "autopar_costs.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
#line 116 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 116 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
#line 116 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
#line 116 "autopar_costs.m"
{
#line 119 "autopar_costs.m"
  {
#line 119 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 119 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "autopar_costs.m"
      {
#line 179 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
#line 181 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 180 "autopar_costs.m"
          {
#line 180 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 181 "autopar_costs.m"
        else
#line 182 "autopar_costs.m"
          {
#line 182 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
#line 181 "autopar_costs.m"
      }
#line 119 "autopar_costs.m"
    else
#line 120 "autopar_costs.m"
      {
#line 120 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
#line 120 "autopar_costs.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_10;
#line 120 "autopar_costs.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__After_11;
#line 120 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 0)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 1)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 2)));
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26;
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 121 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;

#line 121 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 3)));
#line 121 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 4)));
#line 121 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 5)));
#line 121 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 6)));
#line 121 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 7)));
#line 122 "autopar_costs.m"
        {
#line 122 "autopar_costs.m"
          coverage__get_coverage_before_and_after_det_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__Before_10, &mdprof_fb__automatic_parallelism__autopar_costs__After_11);
        }
#line 123 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 == (MR_Integer) 0);
#line 126 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 125 "autopar_costs.m"
          {
#line 125 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 126 "autopar_costs.m"
        else
#line 127 "autopar_costs.m"
          {
#line 127 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Failures_13 = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 - mdprof_fb__automatic_parallelism__autopar_costs__After_11);
#line 127 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14;
#line 127 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15;
#line 127 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16;
#line 127 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17;
#line 127 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_30_30;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_33_33;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_34_34;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_35_35;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_36_36;
#line 130 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_37_37;

#line 129 "autopar_costs.m"
            {
#line 129 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__Failures_13, &mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14);
            }
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 0)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 1)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 2)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 3)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 4)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 5)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 6)));
#line 130 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_19_19, (MR_Integer) 7)));
#line 131 "autopar_costs.m"
            {
#line 131 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__After_11);
            }
#line 132 "autopar_costs.m"
            {
#line 132 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Before_10, mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14, mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16);
            }
#line 133 "autopar_costs.m"
            {
#line 133 "autopar_costs.m"
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15, mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17);
            }
#line 127 "autopar_costs.m"
          }
#line 120 "autopar_costs.m"
      }
#line 119 "autopar_costs.m"
  }
#line 116 "autopar_costs.m"
}

#line 66 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(
#line 66 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_3,
#line 66 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4)
#line 66 "autopar_costs.m"
{
#line 332 "autopar_costs.m"
  {
#line 332 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 332 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5;
#line 332 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 2)));
#line 332 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 11)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 0)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 1)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 3)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 4)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 5)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 6)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 7)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 8)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 9)));
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 10)));
#line 333 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 0)));
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_33_33;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_34_34;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_35_35;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_36_36;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_37_37;
#line 333 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_38_38;
#line 333 "autopar_costs.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__V_39_39;
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_40_40;
#line 333 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_41_41;

#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 1)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 2)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 3)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 4)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 5)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 6)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 7)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 8)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 9)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 10)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 11)));
#line 333 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_18_18, (MR_Integer) 12)));
#line 337 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5 == (MR_Integer) 0))
#line 338 "autopar_costs.m"
      {
#line 338 "autopar_costs.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_costs__Module_9;

#line 341 "autopar_costs.m"
        if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__V_29_29)) == (MR_mktag((MR_Integer) 0))))
#line 340 "autopar_costs.m"
          {
#line 340 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 0)));
#line 340 "autopar_costs.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_costs__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 1)));
#line 340 "autopar_costs.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_costs__V_10_10;
#line 340 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_11_11;
#line 340 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_12_12;

#line 340 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__Module_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 2)));
#line 340 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 3)));
#line 340 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 4)));
#line 340 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 5)));
#line 340 "autopar_costs.m"
          }
#line 341 "autopar_costs.m"
        else
#line 341 "autopar_costs.m"
          {
#line 341 "autopar_costs.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_costs__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 0)));
#line 341 "autopar_costs.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_costs__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 1)));
#line 341 "autopar_costs.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_costs__V_15_15;
#line 341 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_16_16;
#line 341 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_17_17;

#line 341 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__Module_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 2)));
#line 341 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 3)));
#line 341 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 4)));
#line 341 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__V_29_29, (MR_Integer) 5)));
#line 341 "autopar_costs.m"
          }
#line 343 "autopar_costs.m"
        {
#line 343 "autopar_costs.m"
          MR_Word base;
#line 343 "autopar_costs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 343 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4 = base;
#line 343 "autopar_costs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Module_9));
#line 343 "autopar_costs.m"
        }
#line 338 "autopar_costs.m"
      }
#line 337 "autopar_costs.m"
    else
#line 336 "autopar_costs.m"
      *mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 332 "autopar_costs.m"
  }
#line 66 "autopar_costs.m"
}

#line 61 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(
#line 61 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3,
#line 61 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4)
#line 61 "autopar_costs.m"
{
#line 351 "autopar_costs.m"
  {
#line 351 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 351 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "autopar_costs.m"
      {
#line 351 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17;

#line 352 "autopar_costs.m"
        {
#line 352 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        }
#line 352 "autopar_costs.m"
        {
#line 352 "autopar_costs.m"
          MR_Word base;
#line 352 "autopar_costs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
#line 352 "autopar_costs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_17_17));
#line 352 "autopar_costs.m"
        }
#line 351 "autopar_costs.m"
      }
#line 351 "autopar_costs.m"
    else
#line 351 "autopar_costs.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3)) == (MR_mktag((MR_Integer) 1))))
#line 354 "autopar_costs.m"
      {
#line 354 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_15_15;

#line 359 "autopar_costs.m"
        {
#line 359 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
        }
#line 359 "autopar_costs.m"
        {
#line 359 "autopar_costs.m"
          MR_Word base;
#line 359 "autopar_costs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
#line 359 "autopar_costs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_15_15));
#line 359 "autopar_costs.m"
        }
#line 354 "autopar_costs.m"
      }
#line 351 "autopar_costs.m"
    else
#line 366 "autopar_costs.m"
      *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 351 "autopar_costs.m"
  }
#line 61 "autopar_costs.m"
}

#line 59 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(
#line 59 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3,
#line 59 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4)
#line 59 "autopar_costs.m"
{
#line 351 "autopar_costs.m"
  {
#line 351 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 351 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "autopar_costs.m"
      {
#line 351 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17;

#line 352 "autopar_costs.m"
        {
#line 352 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        }
#line 352 "autopar_costs.m"
        {
#line 352 "autopar_costs.m"
          MR_Word base;
#line 352 "autopar_costs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
#line 352 "autopar_costs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_17_17));
#line 352 "autopar_costs.m"
        }
#line 351 "autopar_costs.m"
      }
#line 351 "autopar_costs.m"
    else
#line 354 "autopar_costs.m"
      {
#line 354 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_15_15;

#line 359 "autopar_costs.m"
        {
#line 359 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
        }
#line 359 "autopar_costs.m"
        {
#line 359 "autopar_costs.m"
          MR_Word base;
#line 359 "autopar_costs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
#line 359 "autopar_costs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_15_15));
#line 359 "autopar_costs.m"
        }
#line 354 "autopar_costs.m"
      }
#line 351 "autopar_costs.m"
  }
#line 59 "autopar_costs.m"
}

#line 204 "autopar_costs.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
#line 204 "autopar_costs.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg)
#line 204 "autopar_costs.m"
{
#line 204 "autopar_costs.m"
  {
#line 204 "autopar_costs.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1;
#line 204 "autopar_costs.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure = mdprof_fb__automatic_parallelism__autopar_costs__closure_arg;
#line 204 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__conv0_Use_12;

#line 204 "autopar_costs.m"
    {
#line 204 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__conv0_Use_12 = mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 7))));
    }
#line 204 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__conv0_Use_12));
#line 204 "autopar_costs.m"
    return mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1;
#line 204 "autopar_costs.m"
  }
#line 204 "autopar_costs.m"
}

#line 49 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(
#line 49 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__AtomicGoal_8,
#line 49 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_9,
#line 49 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_10,
#line 49 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11,
#line 49 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_12,
#line 49 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_0_18,
#line 49 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_19)
#line 49 "autopar_costs.m"
{
#line 188 "autopar_costs.m"
  {
#line 188 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 188 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14;
#line 188 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16;

#line 189 "autopar_costs.m"
    {
#line 189 "autopar_costs.m"
      program_representation_utils__atomic_goal_is_call_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__AtomicGoal_8, &mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14);
    }
#line 202 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "autopar_costs.m"
      {
#line 191 "autopar_costs.m"
        MR_Float mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15;
#line 191 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22;

#line 195 "autopar_costs.m"
        if ((mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11 == (MR_Integer) 1))
#line 194 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15 = (MR_Float) 0.0000000000000000;
#line 195 "autopar_costs.m"
        else
#line 199 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15 = (MR_Float) 1.0000000000000000;
#line 201 "autopar_costs.m"
        {
#line 201 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 201 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_22_22, 0) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15);
#line 201 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_22_22, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 201 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_22_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11));
#line 201 "autopar_costs.m"
        }
#line 201 "autopar_costs.m"
        {
#line 201 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16 = mercury__lazy__val_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__V_22_22)));
        }
#line 191 "autopar_costs.m"
      }
#line 202 "autopar_costs.m"
    else
#line 203 "autopar_costs.m"
      {
#line 203 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14, (MR_Integer) 0)));
#line 203 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20;

#line 204 "autopar_costs.m"
        {
#line 204 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[0]));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Info_10));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_9));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_12));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Args_17));
#line 204 "autopar_costs.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_20_20, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11));
#line 204 "autopar_costs.m"
        }
#line 204 "autopar_costs.m"
        {
#line 204 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16 = mercury__lazy__delay_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, mdprof_fb__automatic_parallelism__autopar_costs__V_20_20);
        }
#line 203 "autopar_costs.m"
      }
#line 208 "autopar_costs.m"
    {
#line 208 "autopar_costs.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_costs__Var_12, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16)), mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_0_18, mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_19);
#line 208 "autopar_costs.m"
      return;
    }
#line 188 "autopar_costs.m"
  }
#line 49 "autopar_costs.m"
}

#line 44 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(
#line 44 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cond_5,
#line 44 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Then_6,
#line 44 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Else_7,
#line 44 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Cost_8)
#line 44 "autopar_costs.m"
{
#line 167 "autopar_costs.m"
  {
#line 167 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12;
#line 167 "autopar_costs.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_13;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 2)));
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_16_16;
#line 167 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17;
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 0)));
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 1)));
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 0)));
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 1)));
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 2)));
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26;
#line 168 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_30_30;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_33_33;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_34_34;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_35_35;
#line 169 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_36_36;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_37_37;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_38_38;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_39_39;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_40_40;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_41_41;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_42_42;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_43_43;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_44_44;
#line 170 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_45_45;

#line 168 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 3)));
#line 168 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 4)));
#line 168 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 5)));
#line 168 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 6)));
#line 168 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, (MR_Integer) 7)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 0)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 1)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 2)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 0)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 1)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 2)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 3)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 4)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 5)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 6)));
#line 169 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 7)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 0)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 1)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 2)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 0)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 1)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 2)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 3)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 4)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 5)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 6)));
#line 170 "autopar_costs.m"
    mdprof_fb__automatic_parallelism__autopar_costs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 7)));
#line 172 "autopar_costs.m"
    {
#line 172 "autopar_costs.m"
      coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12, &mdprof_fb__automatic_parallelism__autopar_costs__Before_13);
    }
#line 173 "autopar_costs.m"
    {
#line 173 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Before_13, mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10, mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11);
    }
#line 174 "autopar_costs.m"
    {
#line 174 "autopar_costs.m"
      *mdprof_fb__automatic_parallelism__autopar_costs__Cost_8 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9, mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14);
    }
#line 167 "autopar_costs.m"
  }
#line 44 "autopar_costs.m"
}

#line 41 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(
#line 41 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 41 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2,
#line 41 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
#line 41 "autopar_costs.m"
{
#line 154 "autopar_costs.m"
  {
#line 154 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 154 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "autopar_costs.m"
      {
#line 179 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 == (MR_Integer) 0);
#line 181 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 180 "autopar_costs.m"
          {
#line 180 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 181 "autopar_costs.m"
        else
#line 182 "autopar_costs.m"
          {
#line 182 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2);
          }
#line 181 "autopar_costs.m"
      }
#line 154 "autopar_costs.m"
    else
#line 155 "autopar_costs.m"
      {
#line 155 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));

#line 156 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 == (MR_Integer) 0);
#line 159 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 158 "autopar_costs.m"
          {
#line 158 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 159 "autopar_costs.m"
        else
#line 160 "autopar_costs.m"
          {
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
#line 160 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 2)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 2)));
#line 160 "autopar_costs.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__V_15_15;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_16_16;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 0)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 1)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 0)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 1)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 0)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 1)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 2)));
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 160 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_30_30;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_33_33;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_34_34;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_35_35;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_36_36;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_37_37;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_38_38;
#line 163 "autopar_costs.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_39_39;

#line 160 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 3)));
#line 160 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 4)));
#line 160 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 5)));
#line 160 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 6)));
#line 160 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 7)));
#line 161 "autopar_costs.m"
            {
#line 161 "autopar_costs.m"
              coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10);
            }
#line 162 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 - mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10);
#line 162 "autopar_costs.m"
            {
#line 162 "autopar_costs.m"
              mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Cases_6, mdprof_fb__automatic_parallelism__autopar_costs__V_15_15, &mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11);
            }
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 0)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 1)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 2)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 0)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 1)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_16_16, (MR_Integer) 2)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 0)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 1)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 2)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 3)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 4)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 5)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 6)));
#line 163 "autopar_costs.m"
            mdprof_fb__automatic_parallelism__autopar_costs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_17_17, (MR_Integer) 7)));
#line 164 "autopar_costs.m"
            {
#line 164 "autopar_costs.m"
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2, mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12, mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11);
            }
#line 160 "autopar_costs.m"
          }
#line 155 "autopar_costs.m"
      }
#line 154 "autopar_costs.m"
  }
#line 41 "autopar_costs.m"
}

#line 38 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_4_p_0(
#line 38 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Detism_5,
#line 38 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6,
#line 38 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_7,
#line 38 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Cost_8)
#line 38 "autopar_costs.m"
{
#line 102 "autopar_costs.m"
  {
#line 102 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
#line 102 "autopar_costs.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9;

#line 103 "autopar_costs.m"
    {
#line 103 "autopar_costs.m"
      mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9 = mdbcomp__program_representation__detism_get_solutions_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Detism_5);
    }
#line 111 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9 == (MR_Integer) 2))
#line 113 "autopar_costs.m"
      {
#line 113 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_7, mdprof_fb__automatic_parallelism__autopar_costs__Cost_8);
#line 113 "autopar_costs.m"
        return;
      }
#line 111 "autopar_costs.m"
    else
#line 110 "autopar_costs.m"
      {
#line 110 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_7, mdprof_fb__automatic_parallelism__autopar_costs__Cost_8);
#line 110 "autopar_costs.m"
        return;
      }
#line 102 "autopar_costs.m"
  }
#line 38 "autopar_costs.m"
}

#line 35 "autopar_costs.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(
#line 35 "autopar_costs.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
#line 35 "autopar_costs.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
#line 35 "autopar_costs.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
#line 35 "autopar_costs.m"
{
#line 94 "autopar_costs.m"
  {
#line 94 "autopar_costs.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

#line 94 "autopar_costs.m"
    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "autopar_costs.m"
      {
#line 179 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
#line 181 "autopar_costs.m"
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
#line 180 "autopar_costs.m"
          {
#line 180 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
#line 181 "autopar_costs.m"
        else
#line 182 "autopar_costs.m"
          {
#line 182 "autopar_costs.m"
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
#line 181 "autopar_costs.m"
      }
#line 94 "autopar_costs.m"
    else
#line 95 "autopar_costs.m"
      {
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
#line 95 "autopar_costs.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__After_10;
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11;
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12;
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 2)));
#line 95 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_14_14;
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 0)));
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 1)));
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 0)));
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 1)));
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 2)));
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_20_20;
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_21_21;
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_22_22;
#line 96 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_23_23;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_24_24;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_25_25;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_26_26;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_27_27;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_28_28;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_29_29;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_30_30;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_31_31;
#line 99 "autopar_costs.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__V_32_32;

#line 96 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 3)));
#line 96 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 4)));
#line 96 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 5)));
#line 96 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 6)));
#line 96 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_13_13, (MR_Integer) 7)));
#line 97 "autopar_costs.m"
        {
#line 97 "autopar_costs.m"
          coverage__get_coverage_after_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__After_10);
        }
#line 98 "autopar_costs.m"
        {
#line 98 "autopar_costs.m"
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Conjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__After_10, &mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11);
        }
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 0)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 1)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 2)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 0)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 1)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 2)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 3)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 4)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 5)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 6)));
#line 99 "autopar_costs.m"
        mdprof_fb__automatic_parallelism__autopar_costs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__V_14_14, (MR_Integer) 7)));
#line 100 "autopar_costs.m"
        {
#line 100 "autopar_costs.m"
          *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12, mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11);
        }
#line 95 "autopar_costs.m"
      }
#line 94 "autopar_costs.m"
  }
#line 35 "autopar_costs.m"
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_type_tables(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_fb.automatic_parallelism.autopar_costs. */
