/*
** Automatically generated from `analysis_utils.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module analysis_utils. */
/* :- implementation. */

/*
INIT mercury__analysis_utils__init
ENDINIT
*/

#include "analysis_utils.mih"


#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s {
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7;
  MR_bool analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded;
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41;
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18;
  jmp_buf analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0;
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45;
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28;
  MR_Box analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28;
};

struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s {
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3;
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4;
  MR_bool analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded;
  jmp_buf analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0;
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6;
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_12;
  MR_Integer analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_14;
  MR_Integer analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_15;
  MR_Box analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6;
};


static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0;

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_callee_0_0[2];

static const MR_ConstString analysis_utils__analysis_utils__field_names_callee_0_0[2];

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_callee_0_0;

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_callee_0_0[1];

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_callee_0[1];

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_callee_0[1];

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_callee_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_cost_and_callees_1_0[4];

static const MR_ConstString analysis_utils__analysis_utils__field_names_cost_and_callees_1_0[4];

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0;

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1];

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1];

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1[1];

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1[1];

static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0;

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1;

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_value_ordered_higher_order_0[2];

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_name_ordered_higher_order_0[2];

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_higher_order_0[2];

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(
  MR_Float analysis_utils__MaxDepth_15,
  MR_Word analysis_utils__CostFn_17,
  MR_Integer analysis_utils__LambdaHeadVar__1_42);

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(
  MR_Float analysis_utils__MaxDepth_15,
  MR_Word analysis_utils__CostFn_17,
  MR_Integer analysis_utils__LambdaHeadVar__1_42);

static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(
  MR_Word analysis_utils__FirstPDPtr_12,
  MR_Word analysis_utils__HeadVar__2_16);

static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
  MR_Word analysis_utils__Deep_5,
  MR_Word analysis_utils__CSDPtr_6,
  MR_Integer * analysis_utils__Count_7,
  MR_Word * analysis_utils__MaybeCallee_8);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
  MR_Word analysis_utils__Deep_6,
  MR_Word analysis_utils__CliquePtr_7,
  MR_Word analysis_utils__HeadVar__3_3,
  MR_Word analysis_utils__STATE_VARIABLE_Map_0_21,
  MR_Word * analysis_utils__STATE_VARIABLE_Map_22);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
  void * analysis_utils__env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
  void * analysis_utils__env_ptr_arg);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1);

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1);

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3);

static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3,
  MR_Box * analysis_utils__wrapper_arg_4);

static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
  MR_Word analysis_utils__Deep_6,
  MR_Word analysis_utils__CSDPtr_7,
  MR_Word * analysis_utils__HeadVar__3_3,
  MR_Word * analysis_utils__Own_9,
  MR_Word * analysis_utils__Inherit_10);

static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1);

static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3);

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3);

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3,
  MR_Box analysis_utils__wrapper_arg_4);

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3);

static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3);


static /* final */ const MR_Box analysis_utils_scalar_common_1[3][2];

static /* final */ const MR_Box analysis_utils_scalar_common_2[3][3];

static /* final */ const MR_Box analysis_utils_scalar_common_3[1][5];

static /* final */ const MR_Box analysis_utils_scalar_common_4[1][1];

static /* final */ const MR_Box analysis_utils_scalar_common_5[2][8];

static /* final */ const MR_Box analysis_utils_scalar_common_6[2][7];

static /* final */ const MR_Box analysis_utils_scalar_common_7[1][6];




static /* final */ const MR_Box analysis_utils_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&analysis_utils_scalar_common_7[0])),
    ((MR_Box) (analysis_utils__build_recursive_call_site_counts_map_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Cannot find procedure representation"))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_callee_0_0[2] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_ConstString analysis_utils__analysis_utils__field_names_callee_0_0[2] = {
  (MR_String) "c_clique",
  (MR_String) "c_csd"
};

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_callee_0_0 = {
  (MR_String) "callee",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis_utils__analysis_utils__field_types_callee_0_0,
  analysis_utils__analysis_utils__field_names_callee_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_callee_0_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_callee_0_0
};

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_callee_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_callee_0_0
  }
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_callee_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_callee_0_0
};

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_callee_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_callee_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____callee_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____callee_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "callee",
  {     analysis_utils__analysis_utils__du_name_ordered_callee_0 },
  {     analysis_utils__analysis_utils__du_ptag_ordered_callee_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_callee_0
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_cost_and_callees_1_0[4] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &analysis_utils__analysis_utils__type_ctor_info_higher_order_0
};

static const MR_ConstString analysis_utils__analysis_utils__field_names_cost_and_callees_1_0[4] = {
  (MR_String) "cac_cost",
  (MR_String) "cac_exits",
  (MR_String) "cac_callees",
  (MR_String) "cac_call_site_is_ho"
};

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0 = {
  (MR_String) "cost_and_callees",
  (MR_Integer) 4,
  (MR_Integer) 4,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis_utils__analysis_utils__field_types_cost_and_callees_1_0,
  analysis_utils__analysis_utils__field_names_cost_and_callees_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0
};

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0
  }
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0
};

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_1_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_1_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {     analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1 },
  {     analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1
};

static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0 = {
  (MR_String) "first_order_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_value_ordered_higher_order_0[2] = {
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0,
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1
};

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_name_ordered_higher_order_0[2] = {
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0,
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1
};

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_higher_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_higher_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis_utils____Unify____higher_order_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____higher_order_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "higher_order",
  {     analysis_utils__analysis_utils__enum_name_ordered_higher_order_0 },
  {     analysis_utils__analysis_utils__enum_value_ordered_higher_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_higher_order_0
};

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(
  MR_Float analysis_utils__MaxDepth_15,
  MR_Word analysis_utils__CostFn_17,
  MR_Integer analysis_utils__LambdaHeadVar__1_42)
{
  {
    MR_Word analysis_utils__LambdaHeadVar__2_43;
    MR_Integer analysis_utils__DepthI_22;
    MR_Float analysis_utils__Var_44;
    MR_Float analysis_utils__Var_45;
    MR_Float analysis_utils__Var_46;
    MR_Float analysis_utils__Var_47;
    MR_Box MR_CALL (* analysis_utils__func_0)(MR_Box, MR_Box);
    MR_Box analysis_utils__conv1_Var_47;

    analysis_utils__Var_45 = mercury__float__float_1_f_0(analysis_utils__LambdaHeadVar__1_42);
    analysis_utils__Var_44 = mercury__float__f_slash_2_f_0(analysis_utils__MaxDepth_15, analysis_utils__Var_45);
    analysis_utils__DepthI_22 = mercury__float__round_to_int_1_f_0(analysis_utils__Var_44);
    analysis_utils__Var_46 = mercury__float__float_1_f_0(analysis_utils__LambdaHeadVar__1_42);
    analysis_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), analysis_utils__CostFn_17, (MR_Integer) 1)));
    analysis_utils__conv1_Var_47 = analysis_utils__func_0(((MR_Box) analysis_utils__CostFn_17), ((MR_Box) (analysis_utils__DepthI_22)));
    analysis_utils__Var_47 = MR_unbox_float(analysis_utils__conv1_Var_47);
    analysis_utils__LambdaHeadVar__2_43 = measurements__build_cs_cost_csq_percall_2_f_0(analysis_utils__Var_46, analysis_utils__Var_47);
    return analysis_utils__LambdaHeadVar__2_43;
  }
}

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(
  MR_Float analysis_utils__MaxDepth_15,
  MR_Word analysis_utils__CostFn_17,
  MR_Integer analysis_utils__LambdaHeadVar__1_42)
{
  {
    MR_Word analysis_utils__LambdaHeadVar__2_43;
    MR_Integer analysis_utils__DepthI_22;
    MR_Float analysis_utils__Var_44;
    MR_Float analysis_utils__Var_45;
    MR_Float analysis_utils__Var_46;
    MR_Float analysis_utils__Var_47;
    MR_Box MR_CALL (* analysis_utils__func_0)(MR_Box, MR_Box);
    MR_Box analysis_utils__conv1_Var_47;

    analysis_utils__Var_45 = mercury__float__float_1_f_0(analysis_utils__LambdaHeadVar__1_42);
    analysis_utils__Var_44 = mercury__float__f_slash_2_f_0(analysis_utils__MaxDepth_15, analysis_utils__Var_45);
    analysis_utils__DepthI_22 = mercury__float__round_to_int_1_f_0(analysis_utils__Var_44);
    analysis_utils__Var_46 = mercury__float__float_1_f_0(analysis_utils__LambdaHeadVar__1_42);
    analysis_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), analysis_utils__CostFn_17, (MR_Integer) 1)));
    analysis_utils__conv1_Var_47 = analysis_utils__func_0(((MR_Box) analysis_utils__CostFn_17), ((MR_Box) (analysis_utils__DepthI_22)));
    analysis_utils__Var_47 = MR_unbox_float(analysis_utils__conv1_Var_47);
    analysis_utils__LambdaHeadVar__2_43 = measurements__build_cs_cost_csq_percall_2_f_0(analysis_utils__Var_46, analysis_utils__Var_47);
    return analysis_utils__LambdaHeadVar__2_43;
  }
}

static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(
  MR_Word analysis_utils__FirstPDPtr_12,
  MR_Word analysis_utils__HeadVar__2_16)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Integer analysis_utils__Var_19 = (MR_Integer) analysis_utils__FirstPDPtr_12;
    MR_Integer analysis_utils__Var_20 = (MR_Integer) analysis_utils__HeadVar__2_16;

    analysis_utils__succeeded = (analysis_utils__Var_19 == analysis_utils__Var_20);
    return analysis_utils__succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____higher_order_0_0(
  MR_Word * analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2,
  MR_Word analysis_utils__HeadVar__3_3)
{
  {
    MR_Integer analysis_utils__Cast_HeadVar1_4 = (MR_Integer) analysis_utils__HeadVar__2_2;
    MR_Integer analysis_utils__Cast_HeadVar2_5 = (MR_Integer) analysis_utils__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__Cast_HeadVar1_4, analysis_utils__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0(
  MR_Word analysis_utils__HeadVar__2_1,
  MR_Word analysis_utils__HeadVar__2_2)
{
  {
    MR_bool analysis_utils__succeeded = (analysis_utils__HeadVar__2_1 == analysis_utils__HeadVar__2_2);

    return analysis_utils__succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0(
  MR_Word analysis_utils__TypeInfo_for_Callee_17,
  MR_Word * analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2,
  MR_Word analysis_utils__HeadVar__3_3)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Integer analysis_utils__CastX_15 = (MR_Integer) analysis_utils__HeadVar__2_2;
    MR_Integer analysis_utils__CastY_16 = (MR_Integer) analysis_utils__HeadVar__3_3;

    analysis_utils__succeeded = (analysis_utils__CastX_15 == analysis_utils__CastY_16);
    if (analysis_utils__succeeded)
      *analysis_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word analysis_utils__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer analysis_utils__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer analysis_utils__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word analysis_utils__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word analysis_utils__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word analysis_utils__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word analysis_utils__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word analysis_utils__Var_12;

      measurements____Compare____cs_cost_csq_0_0(&analysis_utils__Var_12, analysis_utils__ArgX1_4, analysis_utils__ArgY1_5);
      analysis_utils__succeeded = (analysis_utils__Var_12 == (MR_Integer) 0);
      analysis_utils__succeeded = !(analysis_utils__succeeded);
      if (analysis_utils__succeeded)
        *analysis_utils__HeadVar__1_1 = analysis_utils__Var_12;
      else
      {
        MR_Word analysis_utils__Var_13;

        mercury__private_builtin__builtin_compare_int_3_p_0(&analysis_utils__Var_13, analysis_utils__ArgX2_6, analysis_utils__ArgY2_7);
        analysis_utils__succeeded = (analysis_utils__Var_13 == (MR_Integer) 0);
        analysis_utils__succeeded = !(analysis_utils__succeeded);
        if (analysis_utils__succeeded)
          *analysis_utils__HeadVar__1_1 = analysis_utils__Var_13;
        else
        {
          MR_Word analysis_utils__Var_14;

          mercury__set_ordlist____Compare____set_ordlist_1_0(analysis_utils__TypeInfo_for_Callee_17, &analysis_utils__Var_14, analysis_utils__ArgX3_8, analysis_utils__ArgY3_9);
          analysis_utils__succeeded = (analysis_utils__Var_14 == (MR_Integer) 0);
          analysis_utils__succeeded = !(analysis_utils__succeeded);
          if (analysis_utils__succeeded)
            *analysis_utils__HeadVar__1_1 = analysis_utils__Var_14;
          else
          {
            MR_Integer analysis_utils__Var_23 = (MR_Integer) analysis_utils__ArgX4_10;
            MR_Integer analysis_utils__Var_24 = (MR_Integer) analysis_utils__ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__Var_23, analysis_utils__Var_24);
          }
        }
      }
    }
  }
}

void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0(
  MR_Word * analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2,
  MR_Word analysis_utils__HeadVar__3_3)
{
  {
    MR_Word analysis_utils__Cast_HeadVar1_4 = analysis_utils__HeadVar__2_2;
    MR_Word analysis_utils__Cast_HeadVar2_5 = analysis_utils__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &analysis_utils_scalar_common_1[1], analysis_utils__HeadVar__1_1, ((MR_Box) (analysis_utils__Cast_HeadVar1_4)), ((MR_Box) (analysis_utils__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0(
  MR_Word analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Word analysis_utils__Cast_HeadVar1_3 = analysis_utils__HeadVar__1_1;
    MR_Word analysis_utils__Cast_HeadVar2_4 = analysis_utils__HeadVar__2_2;

    analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_1_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, analysis_utils__Cast_HeadVar1_3, analysis_utils__Cast_HeadVar2_4);
    return analysis_utils__succeeded;
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0(
  MR_Word analysis_utils__TypeInfo_for_Callee_13,
  MR_Word analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Integer analysis_utils__CastX_11 = (MR_Integer) analysis_utils__HeadVar__1_1;
    MR_Integer analysis_utils__CastY_12 = (MR_Integer) analysis_utils__HeadVar__2_2;

    analysis_utils__succeeded = (analysis_utils__CastX_11 == analysis_utils__CastY_12);
    if (analysis_utils__succeeded)
      analysis_utils__succeeded = MR_TRUE;
    else
    {
      MR_Word analysis_utils__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer analysis_utils__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer analysis_utils__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word analysis_utils__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word analysis_utils__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word analysis_utils__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word analysis_utils__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 3)));

      analysis_utils__succeeded = measurements____Unify____cs_cost_csq_0_0(analysis_utils__ArgX1_3, analysis_utils__ArgY1_4);
      if (analysis_utils__succeeded)
      {
        analysis_utils__succeeded = (analysis_utils__ArgX2_5 == analysis_utils__ArgY2_6);
        if (analysis_utils__succeeded)
        {
          analysis_utils__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(analysis_utils__TypeInfo_for_Callee_13, analysis_utils__ArgX3_7, analysis_utils__ArgY3_8);
          if (analysis_utils__succeeded)
            analysis_utils__succeeded = (analysis_utils__ArgX4_9 == analysis_utils__ArgY4_10);
        }
      }
    }
    return analysis_utils__succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____callee_0_0(
  MR_Word * analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2,
  MR_Word analysis_utils__HeadVar__3_3)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Integer analysis_utils__CastX_9 = (MR_Integer) analysis_utils__HeadVar__2_2;
    MR_Integer analysis_utils__CastY_10 = (MR_Integer) analysis_utils__HeadVar__3_3;

    analysis_utils__succeeded = (analysis_utils__CastX_9 == analysis_utils__CastY_10);
    if (analysis_utils__succeeded)
      *analysis_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word analysis_utils__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word analysis_utils__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word analysis_utils__Var_8;
      MR_Integer analysis_utils__Var_13 = (MR_Integer) analysis_utils__ArgX1_4;
      MR_Integer analysis_utils__Var_14 = (MR_Integer) analysis_utils__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis_utils__Var_8, analysis_utils__Var_13, analysis_utils__Var_14);
      analysis_utils__succeeded = (analysis_utils__Var_8 == (MR_Integer) 0);
      analysis_utils__succeeded = !(analysis_utils__succeeded);
      if (analysis_utils__succeeded)
        *analysis_utils__HeadVar__1_1 = analysis_utils__Var_8;
      else
      {
        MR_Integer analysis_utils__Var_15 = (MR_Integer) analysis_utils__ArgX2_6;
        MR_Integer analysis_utils__Var_16 = (MR_Integer) analysis_utils__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__Var_15, analysis_utils__Var_16);
      }
    }
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0(
  MR_Word analysis_utils__HeadVar__1_1,
  MR_Word analysis_utils__HeadVar__2_2)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Integer analysis_utils__CastX_7 = (MR_Integer) analysis_utils__HeadVar__1_1;
    MR_Integer analysis_utils__CastY_8 = (MR_Integer) analysis_utils__HeadVar__2_2;

    analysis_utils__succeeded = (analysis_utils__CastX_7 == analysis_utils__CastY_8);
    if (analysis_utils__succeeded)
      analysis_utils__succeeded = MR_TRUE;
    else
    {
      MR_Word analysis_utils__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word analysis_utils__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word analysis_utils__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer analysis_utils__Var_11 = (MR_Integer) analysis_utils__ArgX1_3;
      MR_Integer analysis_utils__Var_12 = (MR_Integer) analysis_utils__ArgY1_4;
      MR_Integer analysis_utils__Var_13;
      MR_Integer analysis_utils__Var_14;

      analysis_utils__succeeded = (analysis_utils__Var_11 == analysis_utils__Var_12);
      if (analysis_utils__succeeded)
      {
        analysis_utils__Var_13 = (MR_Integer) analysis_utils__ArgX2_5;
        analysis_utils__Var_14 = (MR_Integer) analysis_utils__ArgY2_6;
        analysis_utils__succeeded = (analysis_utils__Var_13 == analysis_utils__Var_14);
      }
    }
    return analysis_utils__succeeded;
  }
}

static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
  MR_Word analysis_utils__Deep_5,
  MR_Word analysis_utils__CSDPtr_6,
  MR_Integer * analysis_utils__Count_7,
  MR_Word * analysis_utils__MaybeCallee_8)
{
  {
    MR_bool analysis_utils__succeeded;

    analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6);
    if (analysis_utils__succeeded)
    {
      MR_Word analysis_utils__Own_9;

      profile__deep_lookup_csd_own_3_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6, &analysis_utils__Own_9);
      *analysis_utils__Count_7 = measurements__calls_1_f_0(analysis_utils__Own_9);
      profile__deep_lookup_clique_maybe_child_3_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6, analysis_utils__MaybeCallee_8);
    }
    else
    {
      *analysis_utils__Count_7 = (MR_Integer) 0;
      *analysis_utils__MaybeCallee_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2)
{
  {
    MR_Box analysis_utils__wrapper_arg_3;
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Integer analysis_utils__conv2_HeadVar__3_3;

    analysis_utils__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) analysis_utils__wrapper_arg_1), ((MR_Integer) analysis_utils__wrapper_arg_2));
    analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv2_HeadVar__3_3));
    return analysis_utils__wrapper_arg_3;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3)
{
  {
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Integer analysis_utils__conv1_Count_7;
    MR_Word analysis_utils__conv0_MaybeCallee_8;

    analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv1_Count_7, &analysis_utils__conv0_MaybeCallee_8);
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv1_Count_7));
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_MaybeCallee_8));
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    MR_builtin_longjmp((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 = ((MR_Word) (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28);
    analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(analysis_utils__env_ptr);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
    if (((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
    else
    {
      MR_Word analysis_utils__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28, (MR_Integer) 0)));

      (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45, ((MR_Box) ((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (analysis_utils__Var_50)));
    }
    if ((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
      analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(analysis_utils__env_ptr);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    if (MR_builtin_setjmp((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41, &(analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28, (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18, analysis_utils__build_recursive_call_site_counts_map_5_p_0_5, analysis_utils__env_ptr);
        (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
  MR_Word analysis_utils__Deep_6,
  MR_Word analysis_utils__CliquePtr_7,
  MR_Word analysis_utils__HeadVar__3_3,
  MR_Word analysis_utils__STATE_VARIABLE_Map_0_21,
  MR_Word * analysis_utils__STATE_VARIABLE_Map_22)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s analysis_utils__env;

    (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7 = analysis_utils__CliquePtr_7;
    {
      MR_Word analysis_utils__CSSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word analysis_utils__CSDSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) analysis_utils__CSDSlot_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word analysis_utils__TypeCtorInfo_39_39;
        MR_Word analysis_utils__TypeCtorInfo_40_40;
        MR_Integer analysis_utils__Count_12;
        MR_ArrayPtr analysis_utils__CSDPtrs_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), analysis_utils__CSDSlot_9, (MR_Integer) 1)));
        MR_Word analysis_utils__Counts_17;
        MR_Word analysis_utils__Var_23;
        MR_Word analysis_utils__Var_24;
        MR_Word analysis_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__CSDSlot_9, (MR_Integer) 0)));
        MR_Box analysis_utils__conv3_Count_12;

        {
          analysis_utils__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis_utils__Var_23, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_23, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_counts_map_5_p_0_1));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_23, 3) = ((MR_Box) (analysis_utils__Deep_6));
        }
        analysis_utils__TypeCtorInfo_39_39 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
        analysis_utils__Var_24 = mercury__array__to_list_1_f_0(analysis_utils__TypeCtorInfo_39_39, (MR_ArrayPtr) analysis_utils__CSDPtrs_16);
        analysis_utils__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41 = (MR_Word) &analysis_utils_scalar_common_1[2];
        mercury__list__map2_4_p_0(analysis_utils__TypeCtorInfo_39_39, analysis_utils__TypeCtorInfo_40_40, (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41, analysis_utils__Var_23, analysis_utils__Var_24, &analysis_utils__Counts_17, &(analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18);
        analysis_utils__conv3_Count_12 = mercury__list__foldl_3_f_0(analysis_utils__TypeCtorInfo_40_40, analysis_utils__TypeCtorInfo_40_40, (MR_Word) &analysis_utils_scalar_common_2[2], analysis_utils__Counts_17, ((MR_Box) ((MR_Integer) 0)));
        analysis_utils__Count_12 = ((MR_Integer) analysis_utils__conv3_Count_12);
        analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(&analysis_utils__env);
        if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
        {
          MR_Word analysis_utils__CSS_19;
          MR_Word analysis_utils__RevGoalPath_20;
          MR_Word analysis_utils__Var_31;
          MR_Integer analysis_utils__Var_32;
          MR_Word analysis_utils__Var_33;
          MR_Integer analysis_utils__Var_34;

          profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_6, analysis_utils__CSSPtr_8, &analysis_utils__CSS_19);
          analysis_utils__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 0)));
          analysis_utils__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 1)));
          analysis_utils__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 2)));
          analysis_utils__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 3)));
          analysis_utils__RevGoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 4)));
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (analysis_utils__RevGoalPath_20)), ((MR_Box) (analysis_utils__Count_12)), analysis_utils__STATE_VARIABLE_Map_0_21, analysis_utils__STATE_VARIABLE_Map_22);
        }
        else
          *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
      }
      else
      {
        MR_Word analysis_utils__CSDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSDSlot_9, (MR_Integer) 0)));

        (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11);
        if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
        {
          MR_Word analysis_utils__MaybeCallee_13;
          MR_Integer analysis_utils__Count_87;

          (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11);
          if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
          {
            MR_Word analysis_utils__Own_55;

            profile__deep_lookup_csd_own_3_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11, &analysis_utils__Own_55);
            analysis_utils__Count_87 = measurements__calls_1_f_0(analysis_utils__Own_55);
            profile__deep_lookup_clique_maybe_child_3_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11, &analysis_utils__MaybeCallee_13);
          }
          else
          {
            analysis_utils__Count_87 = (MR_Integer) 0;
            analysis_utils__MaybeCallee_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          if ((analysis_utils__MaybeCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
          else
          {
            MR_Word analysis_utils__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeCallee_13, (MR_Integer) 0)));

            (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, ((MR_Box) ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (analysis_utils__Var_58)));
          }
          if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
          {
            MR_Word analysis_utils__CSS_71;
            MR_Word analysis_utils__RevGoalPath_72;
            MR_Word analysis_utils__Var_67;
            MR_Integer analysis_utils__Var_68;
            MR_Word analysis_utils__Var_69;
            MR_Integer analysis_utils__Var_70;

            profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_6, analysis_utils__CSSPtr_8, &analysis_utils__CSS_71);
            analysis_utils__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 0)));
            analysis_utils__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 1)));
            analysis_utils__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 2)));
            analysis_utils__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 3)));
            analysis_utils__RevGoalPath_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 4)));
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (analysis_utils__RevGoalPath_72)), ((MR_Box) (analysis_utils__Count_87)), analysis_utils__STATE_VARIABLE_Map_0_21, analysis_utils__STATE_VARIABLE_Map_22);
          }
          else
            *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
        }
        else
          *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
      }
    }
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    MR_builtin_longjmp((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6 = ((MR_Word) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6);
    analysis_utils__cost_and_callees_is_recursive_2_p_0_2(analysis_utils__env_ptr);
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    {
      MR_Word analysis_utils__Var_10;

      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 0)));
      analysis_utils__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 1)));
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_14 = (MR_Integer) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3;
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_15 = (MR_Integer) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_12;
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = ((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_14 == (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_15);
      if ((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded)
        analysis_utils__cost_and_callees_is_recursive_2_p_0_1(analysis_utils__env_ptr);
    }
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
  void * analysis_utils__env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

    if (MR_builtin_setjmp((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word analysis_utils__Callees_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 2)));
          MR_Word analysis_utils__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 0)));
          MR_Integer analysis_utils__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 1)));
          MR_Word analysis_utils__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 3)));

          mercury__set__member_2_p_1((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, &(analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6, analysis_utils__Callees_5, analysis_utils__cost_and_callees_is_recursive_2_p_0_3, analysis_utils__env_ptr);
        }
        (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0(
  MR_Word analysis_utils__ParentCliquePtr_3,
  MR_Word analysis_utils__CostAndCallees_4)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s analysis_utils__env;

    (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3 = analysis_utils__ParentCliquePtr_3;
    (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4 = analysis_utils__CostAndCallees_4;
    analysis_utils__cost_and_callees_is_recursive_2_p_0_4(&analysis_utils__env);
    return (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1)
{
  {
    MR_Box analysis_utils__wrapper_arg_2;
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Word analysis_utils__conv2_LambdaHeadVar__2_43;

    analysis_utils__conv2_LambdaHeadVar__2_43 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Integer) analysis_utils__wrapper_arg_1));
    analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_LambdaHeadVar__2_43));
    return analysis_utils__wrapper_arg_2;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3)
{
  {
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Word analysis_utils__conv0_STATE_VARIABLE_Map_22;

    analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), &analysis_utils__conv0_STATE_VARIABLE_Map_22);
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_STATE_VARIABLE_Map_22));
  }
}

void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1(
  MR_Word analysis_utils__Deep_7,
  MR_Word analysis_utils__CliquePtr_8,
  MR_Word analysis_utils__PDPtr_9,
  MR_Word analysis_utils__RecursionType_10,
  MR_Word analysis_utils__MaybeDepth_11,
  MR_Word * analysis_utils__MaybeRecursiveCallSiteCostMap_12)
{
  {
    MR_bool analysis_utils__succeeded;

    switch (MR_tag((MR_Word) analysis_utils__RecursionType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word analysis_utils__Var_61;

          analysis_utils__Var_61 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__Var_61));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float analysis_utils__MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 2)));
          MR_Word analysis_utils__CostFn_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 4)));
          MR_Word analysis_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 0)));
          MR_Word analysis_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 1)));
          MR_Float analysis_utils___AvgRecCost_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 3)));

          if ((analysis_utils__MaybeDepth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "analysis_utils", (MR_String) "Expected valid depth for known recursion type");
              return;
            }
          }
          else
          {
            MR_Word analysis_utils__Depth0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeDepth_11, (MR_Integer) 0)));

            analysis_utils__succeeded = measurements__recursion_depth_is_base_case_1_p_0(analysis_utils__Depth0_18);
            if (analysis_utils__succeeded)
            {
              MR_Word analysis_utils__Var_40;

              analysis_utils__Var_40 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__Var_40));
              }
            }
            else
            {
              MR_Word analysis_utils__CallCountsMap_19;
              MR_Word analysis_utils__RecursiveCallSiteCostMap_20;
              MR_Word analysis_utils__Var_41;
              MR_Word analysis_utils__SiteSlots_76;
              MR_Word analysis_utils__Var_77;
              MR_Word analysis_utils__Var_78;
              MR_Box analysis_utils__conv1_CallCountsMap_19;

              analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(analysis_utils__Deep_7, analysis_utils__PDPtr_9, &analysis_utils__SiteSlots_76);
              {
                analysis_utils__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), analysis_utils__Var_77, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_77, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_1));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_77, 3) = ((MR_Box) (analysis_utils__Deep_7));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_77, 4) = ((MR_Box) (analysis_utils__CliquePtr_8));
              }
              analysis_utils__Var_78 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
              mercury__list__foldl_4_p_0((MR_Word) &analysis_utils_scalar_common_2[0], (MR_Word) &analysis_utils_scalar_common_2[1], analysis_utils__Var_77, analysis_utils__SiteSlots_76, ((MR_Box) (analysis_utils__Var_78)), &analysis_utils__conv1_CallCountsMap_19);
              analysis_utils__CallCountsMap_19 = ((MR_Word) analysis_utils__conv1_CallCountsMap_19);
              {
                analysis_utils__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_2));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 3) = MR_box_float(analysis_utils__MaxDepth_15);
                MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 4) = ((MR_Box) (analysis_utils__CostFn_17));
              }
              analysis_utils__RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, analysis_utils__Var_41, analysis_utils__CallCountsMap_19);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__RecursiveCallSiteCostMap_20));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String analysis_utils__Error_34;

          switch (MR_tag((MR_Word) analysis_utils__RecursionType_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              analysis_utils__Error_34 = (MR_String) "No average recursion depth for this recursion type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  analysis_utils__Error_34 = (MR_String) "No average recursion depth for this recursion type";
                  break;
                case (MR_Integer) 1:
                  analysis_utils__Error_34 = (MR_String) "Could not detect recursion type";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word analysis_utils__Errors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 1)));

                    analysis_utils__Error_34 = mercury__string__join_list_2_f_0((MR_String) "; and ", analysis_utils__Errors_36);
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis_utils__Error_34));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String analysis_utils__Error_34;

          switch (MR_tag((MR_Word) analysis_utils__RecursionType_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              analysis_utils__Error_34 = (MR_String) "No average recursion depth for this recursion type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  analysis_utils__Error_34 = (MR_String) "No average recursion depth for this recursion type";
                  break;
                case (MR_Integer) 1:
                  analysis_utils__Error_34 = (MR_String) "Could not detect recursion type";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word analysis_utils__Errors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 1)));

                    analysis_utils__Error_34 = mercury__string__join_list_2_f_0((MR_String) "; and ", analysis_utils__Errors_36);
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis_utils__Error_34));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1)
{
  {
    MR_Box analysis_utils__wrapper_arg_2;
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Word analysis_utils__conv2_LambdaHeadVar__2_43;

    analysis_utils__conv2_LambdaHeadVar__2_43 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Integer) analysis_utils__wrapper_arg_1));
    analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_LambdaHeadVar__2_43));
    return analysis_utils__wrapper_arg_2;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3)
{
  {
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Word analysis_utils__conv0_STATE_VARIABLE_Map_22;

    analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), &analysis_utils__conv0_STATE_VARIABLE_Map_22);
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_STATE_VARIABLE_Map_22));
  }
}

void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0(
  MR_Word analysis_utils__Deep_7,
  MR_Word analysis_utils__CliquePtr_8,
  MR_Word analysis_utils__PDPtr_9,
  MR_Word analysis_utils__RecursionType_10,
  MR_Word analysis_utils__MaybeDepth_11,
  MR_Word * analysis_utils__MaybeRecursiveCallSiteCostMap_12)
{
  {
    MR_bool analysis_utils__succeeded;

    if ((analysis_utils__RecursionType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word analysis_utils__Var_61;

      analysis_utils__Var_61 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__Var_61));
      }
    }
    else
    {
      MR_Float analysis_utils__MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 2)));
      MR_Word analysis_utils__CostFn_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 4)));
      MR_Word analysis_utils__Depth0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeDepth_11, (MR_Integer) 0)));
      MR_Word analysis_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 0)));
      MR_Word analysis_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 1)));
      MR_Float analysis_utils___AvgRecCost_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 3)));

      analysis_utils__succeeded = measurements__recursion_depth_is_base_case_1_p_0(analysis_utils__Depth0_18);
      if (analysis_utils__succeeded)
      {
        MR_Word analysis_utils__Var_40;

        analysis_utils__Var_40 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__Var_40));
        }
      }
      else
      {
        MR_Word analysis_utils__CallCountsMap_19;
        MR_Word analysis_utils__RecursiveCallSiteCostMap_20;
        MR_Word analysis_utils__Var_41;
        MR_Word analysis_utils__SiteSlots_83;
        MR_Word analysis_utils__Var_84;
        MR_Word analysis_utils__Var_85;
        MR_Box analysis_utils__conv1_CallCountsMap_19;

        analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(analysis_utils__Deep_7, analysis_utils__PDPtr_9, &analysis_utils__SiteSlots_83);
        {
          analysis_utils__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis_utils__Var_84, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_84, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_1));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_84, 3) = ((MR_Box) (analysis_utils__Deep_7));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_84, 4) = ((MR_Box) (analysis_utils__CliquePtr_8));
        }
        analysis_utils__Var_85 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        mercury__list__foldl_4_p_0((MR_Word) &analysis_utils_scalar_common_2[0], (MR_Word) &analysis_utils_scalar_common_2[1], analysis_utils__Var_84, analysis_utils__SiteSlots_83, ((MR_Box) (analysis_utils__Var_85)), &analysis_utils__conv1_CallCountsMap_19);
        analysis_utils__CallCountsMap_19 = ((MR_Word) analysis_utils__conv1_CallCountsMap_19);
        {
          analysis_utils__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_2));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 3) = MR_box_float(analysis_utils__MaxDepth_15);
          MR_hl_field(MR_mktag(0), analysis_utils__Var_41, 4) = ((MR_Box) (analysis_utils__CostFn_17));
        }
        analysis_utils__RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, analysis_utils__Var_41, analysis_utils__CallCountsMap_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__RecursiveCallSiteCostMap_20));
        }
      }
    }
  }
}

void MR_CALL 
analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(
  MR_Word analysis_utils__Deep_4,
  MR_Word analysis_utils__PDPtr_5,
  MR_Word * analysis_utils__PairedSlots_6)
{
  {
    MR_Word analysis_utils__TypeCtorInfo_29_29;
    MR_Word analysis_utils__TypeCtorInfo_30_30;
    MR_Word analysis_utils__PD_7;
    MR_Word analysis_utils__PSPtr_8;
    MR_ArrayPtr analysis_utils__CSDArray_9;
    MR_Word analysis_utils__PS_10;
    MR_ArrayPtr analysis_utils__CSSArray_11;
    MR_Word analysis_utils__CSDSlots_12;
    MR_Word analysis_utils__CSSSlots_13;
    MR_Word analysis_utils__Var_15;
    MR_Word analysis_utils__Var_18;
    MR_String analysis_utils__Var_19;
    MR_String analysis_utils__Var_20;
    MR_String analysis_utils__Var_21;
    MR_String analysis_utils__Var_22;
    MR_String analysis_utils__Var_23;
    MR_Integer analysis_utils__Var_24;
    MR_Word analysis_utils__Var_25;
    MR_ArrayPtr analysis_utils__Var_26;
    MR_Word analysis_utils__Var_27;
    MR_Word analysis_utils__Var_28;

    profile__deep_lookup_proc_dynamics_3_p_0(analysis_utils__Deep_4, analysis_utils__PDPtr_5, &analysis_utils__PD_7);
    analysis_utils__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 0)));
    analysis_utils__CSDArray_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 1)));
    analysis_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 2)));
    profile__deep_lookup_proc_statics_3_p_0(analysis_utils__Deep_4, analysis_utils__PSPtr_8, &analysis_utils__PS_10);
    analysis_utils__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 0)));
    analysis_utils__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 1)));
    analysis_utils__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 2)));
    analysis_utils__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 3)));
    analysis_utils__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 4)));
    analysis_utils__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 5)));
    analysis_utils__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 6)));
    analysis_utils__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 7)));
    analysis_utils__CSSArray_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 8)));
    analysis_utils__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 9)));
    analysis_utils__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 10)));
    analysis_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 11)));
    analysis_utils__TypeCtorInfo_29_29 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
    mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_29_29, (MR_ArrayPtr) analysis_utils__CSDArray_9, &analysis_utils__CSDSlots_12);
    analysis_utils__TypeCtorInfo_30_30 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
    mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_30_30, (MR_ArrayPtr) analysis_utils__CSSArray_11, &analysis_utils__CSSSlots_13);
    mercury__assoc_list__from_corresponding_lists_3_p_0(analysis_utils__TypeCtorInfo_30_30, analysis_utils__TypeCtorInfo_29_29, analysis_utils__CSSSlots_13, analysis_utils__CSDSlots_12, analysis_utils__PairedSlots_6);
  }
}

static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box * analysis_utils__wrapper_arg_3,
  MR_Box * analysis_utils__wrapper_arg_4)
{
  {
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
    MR_Word analysis_utils__conv2_HeadVar__3_3;
    MR_Word analysis_utils__conv1_Own_9;
    MR_Word analysis_utils__conv0_Inherit_10;

    analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv2_HeadVar__3_3, &analysis_utils__conv1_Own_9, &analysis_utils__conv0_Inherit_10);
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_HeadVar__3_3));
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv1_Own_9));
    *analysis_utils__wrapper_arg_4 = ((MR_Box) (analysis_utils__conv0_Inherit_10));
  }
}

void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(
  MR_Word analysis_utils__Deep_5,
  MR_Word analysis_utils__HeadVar__2_2,
  MR_Word analysis_utils__STATE_VARIABLE_CallSitesMap_0_25,
  MR_Word * analysis_utils__STATE_VARIABLE_CallSitesMap_26)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Word analysis_utils__CSSPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word analysis_utils__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word analysis_utils__CostCsq_13;
    MR_Word analysis_utils__Callees_14;
    MR_Integer analysis_utils__Exits_15;
    MR_Word analysis_utils__CostAndCallees_21;
    MR_Word analysis_utils__HigherOrder_22;
    MR_Word analysis_utils__CSS_23;
    MR_Word analysis_utils__RevGoalPath_24;
    MR_Word analysis_utils__Var_41;
    MR_ArrayPtr analysis_utils__Var_42;
    MR_Word analysis_utils__Var_43;
    MR_Word analysis_utils__Var_47;
    MR_String analysis_utils__Var_48;
    MR_String analysis_utils__Var_49;
    MR_String analysis_utils__Var_50;
    MR_Word analysis_utils__Var_51;
    MR_ArrayPtr analysis_utils__Var_52;
    MR_ArrayPtr analysis_utils__Var_53;
    MR_ArrayPtr analysis_utils__Var_54;
    MR_ArrayPtr analysis_utils__Var_55;
    MR_ArrayPtr analysis_utils__Var_56;
    MR_ArrayPtr analysis_utils__Var_57;
    MR_ArrayPtr analysis_utils__Var_58;
    MR_ArrayPtr analysis_utils__Var_59;
    MR_ArrayPtr analysis_utils__Var_60;
    MR_ArrayPtr analysis_utils__Var_61;
    MR_ArrayPtr analysis_utils__Var_62;
    MR_ArrayPtr analysis_utils__Var_63;
    MR_ArrayPtr analysis_utils__Var_64;
    MR_ArrayPtr analysis_utils__Var_65;
    MR_ArrayPtr analysis_utils__Var_66;
    MR_ArrayPtr analysis_utils__Var_67;
    MR_ArrayPtr analysis_utils__Var_68;
    MR_ArrayPtr analysis_utils__Var_69;
    MR_ArrayPtr analysis_utils__Var_70;
    MR_Word analysis_utils__Var_71;
    MR_Word analysis_utils__Var_72;
    MR_Word analysis_utils__Var_73;
    MR_Word analysis_utils__Var_74;
    MR_Word analysis_utils__Var_75;
    MR_Integer analysis_utils__Var_76;
    MR_Integer analysis_utils__Var_77;

    if (((MR_tag((MR_Word) analysis_utils__Slot_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word analysis_utils__TypeCtorInfo_83_83 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
      MR_ArrayPtr analysis_utils__CSDPtrsArray_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), analysis_utils__Slot_7, (MR_Integer) 1)));
      MR_Word analysis_utils__CSDPtrs_18;
      MR_Word analysis_utils__Owns_19;
      MR_Word analysis_utils__Inherits_20;
      MR_Word analysis_utils__Var_27;
      MR_Integer analysis_utils__Var_28;
      MR_Float analysis_utils__Var_29;
      MR_Integer analysis_utils__Var_30;
      MR_Integer analysis_utils__Var_31;
      MR_Integer analysis_utils__Var_32;
      MR_Word analysis_utils__Own_45;
      MR_Word analysis_utils__Inherit_46;
      MR_Word analysis_utils__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__Slot_7, (MR_Integer) 0)));

      mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_83_83, (MR_ArrayPtr) analysis_utils__CSDPtrsArray_17, &analysis_utils__CSDPtrs_18);
      {
        analysis_utils__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), analysis_utils__Var_27, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_27, 1) = ((MR_Box) (analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_27, 3) = ((MR_Box) (analysis_utils__Deep_5));
      }
      mercury__list__map3_5_p_0(analysis_utils__TypeCtorInfo_83_83, (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, analysis_utils__Var_27, analysis_utils__CSDPtrs_18, &analysis_utils__Callees_14, &analysis_utils__Owns_19, &analysis_utils__Inherits_20);
      analysis_utils__Own_45 = measurements__sum_own_infos_1_f_0(analysis_utils__Owns_19);
      analysis_utils__Inherit_46 = measurements__sum_inherit_infos_1_f_0(analysis_utils__Inherits_20);
      analysis_utils__Var_28 = measurements__calls_1_f_0(analysis_utils__Own_45);
      analysis_utils__Var_31 = measurements__callseqs_1_f_0(analysis_utils__Own_45);
      analysis_utils__Var_32 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_46);
      analysis_utils__Var_30 = (analysis_utils__Var_31 + analysis_utils__Var_32);
      analysis_utils__Var_29 = mercury__float__float_1_f_0(analysis_utils__Var_30);
      analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__Var_28, analysis_utils__Var_29);
      analysis_utils__Exits_15 = measurements__exits_1_f_0(analysis_utils__Own_45);
    }
    else
    {
      MR_Word analysis_utils__CSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Slot_7, (MR_Integer) 0)));

      analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_9);
      if (analysis_utils__succeeded)
      {
        MR_Word analysis_utils__Callee_10;
        MR_Word analysis_utils__Own_11;
        MR_Word analysis_utils__Inherit_12;
        MR_Integer analysis_utils__Var_33;
        MR_Float analysis_utils__Var_34;
        MR_Integer analysis_utils__Var_35;
        MR_Integer analysis_utils__Var_36;
        MR_Integer analysis_utils__Var_37;

        analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_9, &analysis_utils__Callee_10, &analysis_utils__Own_11, &analysis_utils__Inherit_12);
        analysis_utils__Var_33 = measurements__calls_1_f_0(analysis_utils__Own_11);
        analysis_utils__Var_36 = measurements__callseqs_1_f_0(analysis_utils__Own_11);
        analysis_utils__Var_37 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_12);
        analysis_utils__Var_35 = (analysis_utils__Var_36 + analysis_utils__Var_37);
        analysis_utils__Var_34 = mercury__float__float_1_f_0(analysis_utils__Var_35);
        analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__Var_33, analysis_utils__Var_34);
        {
          analysis_utils__Callees_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), analysis_utils__Callees_14, 0) = ((MR_Box) (analysis_utils__Callee_10));
          MR_hl_field(MR_mktag(1), analysis_utils__Callees_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        analysis_utils__Exits_15 = measurements__exits_1_f_0(analysis_utils__Own_11);
      }
      else
      {
        analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0((MR_Integer) 0, (MR_Float) 0.0000000000000000);
        analysis_utils__Callees_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        analysis_utils__Exits_15 = (MR_Integer) 0;
      }
    }
    analysis_utils__Var_41 = mercury__set__set_1_f_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, analysis_utils__Callees_14);
    analysis_utils__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 0)));
    analysis_utils__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 1)));
    analysis_utils__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 2)));
    analysis_utils__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 3)));
    analysis_utils__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 4)));
    analysis_utils__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 5)));
    analysis_utils__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 6)));
    analysis_utils__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 7)));
    analysis_utils__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 8)));
    analysis_utils__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 9)));
    analysis_utils__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 10)));
    analysis_utils__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 11)));
    analysis_utils__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 12)));
    analysis_utils__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 13)));
    analysis_utils__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 14)));
    analysis_utils__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 15)));
    analysis_utils__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 16)));
    analysis_utils__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 17)));
    analysis_utils__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 18)));
    analysis_utils__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 19)));
    analysis_utils__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 20)));
    analysis_utils__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 21)));
    analysis_utils__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 22)));
    analysis_utils__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 23)));
    analysis_utils__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 24)));
    analysis_utils__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 25)));
    analysis_utils__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 26)));
    analysis_utils__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 27)));
    analysis_utils__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 28)));
    profile__lookup_call_site_statics_3_p_0(analysis_utils__Var_42, analysis_utils__CSSPtr_6, &analysis_utils__CSS_23);
    analysis_utils__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 0)));
    analysis_utils__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 1)));
    analysis_utils__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 2)));
    analysis_utils__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 3)));
    analysis_utils__RevGoalPath_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 4)));
    switch (MR_tag((MR_Word) analysis_utils__Var_43)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(analysis_utils__Var_43)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            analysis_utils__HigherOrder_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            analysis_utils__HigherOrder_22 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        analysis_utils__HigherOrder_22 = (MR_Integer) 0;
        break;
    }
    {
      analysis_utils__CostAndCallees_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 0) = ((MR_Box) (analysis_utils__CostCsq_13));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 1) = ((MR_Box) (analysis_utils__Exits_15));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 2) = ((MR_Box) (analysis_utils__Var_41));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 3) = ((MR_Box) (analysis_utils__HigherOrder_22));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &analysis_utils_scalar_common_1[1], ((MR_Box) (analysis_utils__RevGoalPath_24)), ((MR_Box) (analysis_utils__CostAndCallees_21)), analysis_utils__STATE_VARIABLE_CallSitesMap_0_25, analysis_utils__STATE_VARIABLE_CallSitesMap_26);
  }
}

static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
  MR_Word analysis_utils__Deep_6,
  MR_Word analysis_utils__CSDPtr_7,
  MR_Word * analysis_utils__HeadVar__3_3,
  MR_Word * analysis_utils__Own_9,
  MR_Word * analysis_utils__Inherit_10)
{
  {
    MR_Word analysis_utils__CalleeCliquePtr_8;
    MR_Word analysis_utils__CSD_11;
    MR_Word analysis_utils__PDPtr_12;
    MR_ArrayPtr analysis_utils__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
    MR_ArrayPtr analysis_utils__Var_14;
    MR_ArrayPtr analysis_utils__Var_15;
    MR_Word analysis_utils__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
    MR_String analysis_utils__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
    MR_String analysis_utils__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
    MR_String analysis_utils__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
    MR_Word analysis_utils__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
    MR_ArrayPtr analysis_utils__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
    MR_ArrayPtr analysis_utils__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
    MR_ArrayPtr analysis_utils__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
    MR_ArrayPtr analysis_utils__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
    MR_ArrayPtr analysis_utils__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
    MR_ArrayPtr analysis_utils__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
    MR_ArrayPtr analysis_utils__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
    MR_ArrayPtr analysis_utils__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
    MR_ArrayPtr analysis_utils__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
    MR_ArrayPtr analysis_utils__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
    MR_ArrayPtr analysis_utils__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
    MR_ArrayPtr analysis_utils__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
    MR_ArrayPtr analysis_utils__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
    MR_ArrayPtr analysis_utils__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
    MR_ArrayPtr analysis_utils__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
    MR_ArrayPtr analysis_utils__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
    MR_ArrayPtr analysis_utils__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
    MR_ArrayPtr analysis_utils__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
    MR_ArrayPtr analysis_utils__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
    MR_Word analysis_utils__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
    MR_Word analysis_utils__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
    MR_Word analysis_utils__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
    MR_Word analysis_utils__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
    MR_Word analysis_utils__Var_44;
    MR_String analysis_utils__Var_45;
    MR_String analysis_utils__Var_46;
    MR_String analysis_utils__Var_47;
    MR_Word analysis_utils__Var_48;
    MR_ArrayPtr analysis_utils__Var_49;
    MR_ArrayPtr analysis_utils__Var_50;
    MR_ArrayPtr analysis_utils__Var_51;
    MR_ArrayPtr analysis_utils__Var_52;
    MR_ArrayPtr analysis_utils__Var_53;
    MR_ArrayPtr analysis_utils__Var_54;
    MR_ArrayPtr analysis_utils__Var_55;
    MR_ArrayPtr analysis_utils__Var_56;
    MR_ArrayPtr analysis_utils__Var_57;
    MR_ArrayPtr analysis_utils__Var_58;
    MR_ArrayPtr analysis_utils__Var_59;
    MR_ArrayPtr analysis_utils__Var_60;
    MR_ArrayPtr analysis_utils__Var_61;
    MR_ArrayPtr analysis_utils__Var_62;
    MR_ArrayPtr analysis_utils__Var_63;
    MR_ArrayPtr analysis_utils__Var_64;
    MR_ArrayPtr analysis_utils__Var_65;
    MR_ArrayPtr analysis_utils__Var_66;
    MR_ArrayPtr analysis_utils__Var_67;
    MR_Word analysis_utils__Var_68;
    MR_Word analysis_utils__Var_69;
    MR_Word analysis_utils__Var_70;
    MR_Word analysis_utils__Var_71;
    MR_Word analysis_utils__Var_72;
    MR_Word analysis_utils__Var_73;
    MR_Word analysis_utils__Var_74;
    MR_String analysis_utils__Var_75;
    MR_String analysis_utils__Var_76;
    MR_String analysis_utils__Var_77;
    MR_Word analysis_utils__Var_78;
    MR_ArrayPtr analysis_utils__Var_79;
    MR_ArrayPtr analysis_utils__Var_80;
    MR_ArrayPtr analysis_utils__Var_81;
    MR_ArrayPtr analysis_utils__Var_82;
    MR_ArrayPtr analysis_utils__Var_83;
    MR_ArrayPtr analysis_utils__Var_84;
    MR_ArrayPtr analysis_utils__Var_85;
    MR_ArrayPtr analysis_utils__Var_86;
    MR_ArrayPtr analysis_utils__Var_87;
    MR_ArrayPtr analysis_utils__Var_88;
    MR_ArrayPtr analysis_utils__Var_89;
    MR_ArrayPtr analysis_utils__Var_90;
    MR_ArrayPtr analysis_utils__Var_91;
    MR_ArrayPtr analysis_utils__Var_92;
    MR_ArrayPtr analysis_utils__Var_93;
    MR_ArrayPtr analysis_utils__Var_94;
    MR_ArrayPtr analysis_utils__Var_95;
    MR_ArrayPtr analysis_utils__Var_96;
    MR_ArrayPtr analysis_utils__Var_97;
    MR_Word analysis_utils__Var_98;
    MR_Word analysis_utils__Var_99;
    MR_Word analysis_utils__Var_100;
    MR_Word analysis_utils__Var_101;
    MR_Word analysis_utils__Var_102;
    MR_Word analysis_utils__Var_103;

    profile__lookup_call_site_dynamics_3_p_0(analysis_utils__Var_13, analysis_utils__CSDPtr_7, &analysis_utils__CSD_11);
    analysis_utils__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
    analysis_utils__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
    analysis_utils__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
    analysis_utils__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
    analysis_utils__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
    analysis_utils__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
    analysis_utils__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
    analysis_utils__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
    analysis_utils__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
    analysis_utils__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
    analysis_utils__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
    analysis_utils__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
    analysis_utils__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
    analysis_utils__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
    analysis_utils__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
    analysis_utils__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
    analysis_utils__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
    analysis_utils__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
    analysis_utils__Var_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
    analysis_utils__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
    analysis_utils__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
    analysis_utils__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
    analysis_utils__Var_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
    analysis_utils__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
    analysis_utils__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
    analysis_utils__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
    analysis_utils__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
    analysis_utils__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
    analysis_utils__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
    profile__lookup_csd_desc_3_p_0(analysis_utils__Var_14, analysis_utils__CSDPtr_7, analysis_utils__Inherit_10);
    analysis_utils__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 0)));
    analysis_utils__PDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 1)));
    analysis_utils__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 2)));
    analysis_utils__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
    analysis_utils__Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
    analysis_utils__Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
    analysis_utils__Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
    analysis_utils__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
    analysis_utils__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
    analysis_utils__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
    analysis_utils__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
    analysis_utils__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
    analysis_utils__Var_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
    analysis_utils__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
    analysis_utils__Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
    analysis_utils__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
    analysis_utils__Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
    analysis_utils__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
    analysis_utils__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
    analysis_utils__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
    analysis_utils__Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
    analysis_utils__Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
    analysis_utils__Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
    analysis_utils__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
    analysis_utils__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
    analysis_utils__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
    analysis_utils__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
    analysis_utils__Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
    analysis_utils__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
    analysis_utils__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
    analysis_utils__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
    analysis_utils__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
    profile__lookup_clique_index_3_p_0(analysis_utils__Var_15, analysis_utils__PDPtr_12, &analysis_utils__CalleeCliquePtr_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *analysis_utils__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__CalleeCliquePtr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (analysis_utils__CSDPtr_7));
    }
    analysis_utils__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 0)));
    analysis_utils__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 1)));
    *analysis_utils__Own_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 2)));
  }
}

void MR_CALL 
analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(
  MR_Word analysis_utils__Deep_5,
  MR_Word analysis_utils__CSSPtr_6,
  MR_Word analysis_utils__STATE_VARIABLE_CallSitesMap_0_20,
  MR_Word * analysis_utils__STATE_VARIABLE_CallSitesMap_21)
{
  {
    MR_Word analysis_utils__CSS_8;
    MR_Word analysis_utils__Own_9;
    MR_Word analysis_utils__Inherit_10;
    MR_Word analysis_utils__CostCsq_11;
    MR_Integer analysis_utils__Exits_12;
    MR_Word analysis_utils__KindAndCallee_13;
    MR_Word analysis_utils__HigherOrder_14;
    MR_Word analysis_utils__Callees_17;
    MR_Word analysis_utils__CostAndCallees_18;
    MR_Word analysis_utils__RevGoalPath_19;
    MR_Integer analysis_utils__Var_22;
    MR_Float analysis_utils__Var_23;
    MR_Integer analysis_utils__Var_24;
    MR_Integer analysis_utils__Var_25;
    MR_Integer analysis_utils__Var_26;
    MR_Word analysis_utils__Var_30;
    MR_Integer analysis_utils__Var_31;
    MR_Integer analysis_utils__Var_32;

    profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__CSS_8);
    profile__deep_lookup_css_own_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__Own_9);
    profile__deep_lookup_css_desc_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__Inherit_10);
    analysis_utils__Var_22 = measurements__calls_1_f_0(analysis_utils__Own_9);
    analysis_utils__Var_25 = measurements__callseqs_1_f_0(analysis_utils__Own_9);
    analysis_utils__Var_26 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_10);
    analysis_utils__Var_24 = (analysis_utils__Var_25 + analysis_utils__Var_26);
    analysis_utils__Var_23 = mercury__float__float_1_f_0(analysis_utils__Var_24);
    analysis_utils__CostCsq_11 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__Var_22, analysis_utils__Var_23);
    analysis_utils__Exits_12 = measurements__exits_1_f_0(analysis_utils__Own_9);
    analysis_utils__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 0)));
    analysis_utils__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 1)));
    analysis_utils__KindAndCallee_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 2)));
    analysis_utils__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 3)));
    analysis_utils__RevGoalPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 4)));
    switch (MR_tag((MR_Word) analysis_utils__KindAndCallee_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(analysis_utils__KindAndCallee_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            analysis_utils__HigherOrder_14 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            analysis_utils__HigherOrder_14 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        analysis_utils__HigherOrder_14 = (MR_Integer) 0;
        break;
    }
    switch (MR_tag((MR_Word) analysis_utils__KindAndCallee_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(analysis_utils__KindAndCallee_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
            }
            break;
          case (MR_Integer) 1:
            {
              analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
            }
            break;
          case (MR_Integer) 2:
            {
              analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
            }
            break;
          case (MR_Integer) 3:
            {
              analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word analysis_utils__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__KindAndCallee_13, (MR_Integer) 0)));
          MR_Word analysis_utils__Var_27;
          MR_String analysis_utils__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis_utils__KindAndCallee_13, (MR_Integer) 1)));

          {
            analysis_utils__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), analysis_utils__Var_27, 0) = ((MR_Box) (analysis_utils__Callee_16));
            MR_hl_field(MR_mktag(1), analysis_utils__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          analysis_utils__Callees_17 = mercury__set__set_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, analysis_utils__Var_27);
        }
        break;
    }
    {
      analysis_utils__CostAndCallees_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 0) = ((MR_Box) (analysis_utils__CostCsq_11));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 1) = ((MR_Box) (analysis_utils__Exits_12));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 2) = ((MR_Box) (analysis_utils__Callees_17));
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 3) = ((MR_Box) (analysis_utils__HigherOrder_14));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &analysis_utils_scalar_common_1[0], ((MR_Box) (analysis_utils__RevGoalPath_19)), ((MR_Box) (analysis_utils__CostAndCallees_18)), analysis_utils__STATE_VARIABLE_CallSitesMap_0_20, analysis_utils__STATE_VARIABLE_CallSitesMap_21);
  }
}

void MR_CALL 
analysis_utils__deep_get_maybe_procrep_3_p_0(
  MR_Word analysis_utils__Deep_4,
  MR_Word analysis_utils__PSPtr_5,
  MR_Word * analysis_utils__MaybeProcRep_6)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Word analysis_utils__MaybeProgRep_7;

    profile__deep_get_maybe_progrep_2_p_0(analysis_utils__Deep_4, &analysis_utils__MaybeProgRep_7);
    if (((MR_tag((MR_Word) analysis_utils__MaybeProgRep_7)) == (MR_mktag((MR_Integer) 1))))
      *analysis_utils__MaybeProcRep_6 = (MR_Word) analysis_utils__MaybeProgRep_7;
    else
    {
      MR_Word analysis_utils__ProgRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__MaybeProgRep_7, (MR_Integer) 0)));
      MR_Word analysis_utils__PS_9;
      MR_Word analysis_utils__ProcLabel_10;
      MR_String analysis_utils__Var_14;
      MR_String analysis_utils__Var_15;
      MR_String analysis_utils__Var_16;
      MR_String analysis_utils__Var_17;
      MR_String analysis_utils__Var_18;
      MR_Integer analysis_utils__Var_19;
      MR_Word analysis_utils__Var_20;
      MR_ArrayPtr analysis_utils__Var_21;
      MR_ArrayPtr analysis_utils__Var_22;
      MR_Word analysis_utils__Var_23;
      MR_Word analysis_utils__Var_24;
      MR_Word analysis_utils__ProcRep_11;

      profile__deep_lookup_proc_statics_3_p_0(analysis_utils__Deep_4, analysis_utils__PSPtr_5, &analysis_utils__PS_9);
      analysis_utils__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 0)));
      analysis_utils__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 1)));
      analysis_utils__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 2)));
      analysis_utils__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 3)));
      analysis_utils__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 4)));
      analysis_utils__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 5)));
      analysis_utils__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 6)));
      analysis_utils__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 7)));
      analysis_utils__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 8)));
      analysis_utils__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 9)));
      analysis_utils__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 10)));
      analysis_utils__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 11)));
      analysis_utils__succeeded = program_representation_utils__progrep_search_proc_3_p_0(analysis_utils__ProgRep_8, analysis_utils__ProcLabel_10, &analysis_utils__ProcRep_11);
      if (analysis_utils__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *analysis_utils__MaybeProcRep_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__ProcRep_11));
        }
      else
      {
        *analysis_utils__MaybeProcRep_6 = (MR_Word) MR_mkword(MR_mktag(1), &analysis_utils_scalar_common_4[0]);
      }
    }
  }
}

static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
  MR_Box analysis_utils__closure_arg,
  MR_Box analysis_utils__wrapper_arg_1)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;

    analysis_utils__succeeded = analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1));
    return analysis_utils__succeeded;
  }
}

void MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0(
  MR_Word analysis_utils__Deep_5,
  MR_Word analysis_utils__CliquePtr_6,
  MR_Word * analysis_utils__MaybeFirstPDPtr_7,
  MR_Word * analysis_utils__OtherPDPtrs_8)
{
  {
    MR_bool analysis_utils__succeeded;
    MR_Word analysis_utils__PDPtrs_9;
    MR_Word analysis_utils__EntryCSDPtr_10;

    profile__deep_lookup_clique_members_3_p_0(analysis_utils__Deep_5, analysis_utils__CliquePtr_6, &analysis_utils__PDPtrs_9);
    profile__deep_lookup_clique_parents_3_p_0(analysis_utils__Deep_5, analysis_utils__CliquePtr_6, &analysis_utils__EntryCSDPtr_10);
    analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__EntryCSDPtr_10);
    if (analysis_utils__succeeded)
    {
      MR_Word analysis_utils__EntryCSD_11;
      MR_Word analysis_utils__FirstPDPtr_12;
      MR_Word analysis_utils__Var_13;
      MR_Word analysis_utils__Var_14;
      MR_Word analysis_utils__Var_15;

      profile__deep_lookup_call_site_dynamics_3_p_0(analysis_utils__Deep_5, analysis_utils__EntryCSDPtr_10, &analysis_utils__EntryCSD_11);
      analysis_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 0)));
      analysis_utils__FirstPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 1)));
      analysis_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 2)));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *analysis_utils__MaybeFirstPDPtr_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis_utils__FirstPDPtr_12));
      }
      {
        analysis_utils__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), analysis_utils__Var_13, 0) = ((MR_Box) (&analysis_utils_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_13, 1) = ((MR_Box) (analysis_utils__find_clique_first_and_other_procs_4_p_0_1));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), analysis_utils__Var_13, 3) = ((MR_Box) (analysis_utils__FirstPDPtr_12));
      }
      mercury__list__negated_filter_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, analysis_utils__Var_13, analysis_utils__PDPtrs_9, analysis_utils__OtherPDPtrs_8);
    }
    else
    {
      *analysis_utils__MaybeFirstPDPtr_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *analysis_utils__OtherPDPtrs_8 = analysis_utils__PDPtrs_9;
    }
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2)
{
  {
    MR_bool analysis_utils__succeeded;

    analysis_utils__succeeded = analysis_utils____Unify____callee_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    return analysis_utils__succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3)
{
  {
    MR_Word analysis_utils__conv0_HeadVar__1_1;

    analysis_utils____Compare____callee_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3)
{
  {
    MR_bool analysis_utils__succeeded;

    analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_1_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    return analysis_utils__succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box * analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3,
  MR_Box analysis_utils__wrapper_arg_4)
{
  {
    MR_Word analysis_utils__conv0_HeadVar__1_1;

    analysis_utils____Compare____cost_and_callees_1_0(((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_3), ((MR_Word) analysis_utils__wrapper_arg_4));
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2)
{
  {
    MR_bool analysis_utils__succeeded;

    analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    return analysis_utils__succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3)
{
  {
    MR_Word analysis_utils__conv0_HeadVar__1_1;

    analysis_utils____Compare____cost_and_callees_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
  MR_Box analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2)
{
  {
    MR_bool analysis_utils__succeeded;

    analysis_utils__succeeded = analysis_utils____Unify____higher_order_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    return analysis_utils__succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
  MR_Box * analysis_utils__wrapper_arg_1,
  MR_Box analysis_utils__wrapper_arg_2,
  MR_Box analysis_utils__wrapper_arg_3)
{
  {
    MR_Word analysis_utils__conv0_HeadVar__1_1;

    analysis_utils____Compare____higher_order_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
  }
}

void mercury__analysis_utils__init(void)
{
}

void mercury__analysis_utils__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis_utils__analysis_utils__type_ctor_info_callee_0);
	MR_register_type_ctor_info(&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1);
	MR_register_type_ctor_info(&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_0);
	MR_register_type_ctor_info(&analysis_utils__analysis_utils__type_ctor_info_higher_order_0);
}

void mercury__analysis_utils__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis_utils__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module analysis_utils. */
