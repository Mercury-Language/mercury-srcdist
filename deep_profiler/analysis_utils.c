/*
** Automatically generated from `analysis_utils.m'
** by the Mercury compiler,
** version rotd-2021-10-28
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


// :- module analysis_utils.
// :- implementation.

/*
INIT mercury__analysis_utils__init
ENDINIT
*/

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
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s {
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7;
  MR_bool analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded;
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

static const MR_DuArgLocn analysis_utils__analysis_utils__field_locns_cost_and_callees_1_0[4];

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0;

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1];

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1];

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1[1];

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1[1];

static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0;

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1;

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_ordinal_ordered_higher_order_0[2];

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_name_ordered_higher_order_0[2];

static const MR_Integer analysis_utils__analysis_utils__functor_number_map_higher_order_0[2];

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(
  MR_Float MaxDepth_15,
  MR_Word CostFn_17,
  MR_Integer LambdaHeadVar__1_43);

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(
  MR_Float MaxDepth_15,
  MR_Word CostFn_17,
  MR_Integer LambdaHeadVar__1_43);

static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(
  MR_Word FirstPDPtr_12,
  MR_Word HeadVar__2_16);

static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
  MR_Word Deep_5,
  MR_Word CSDPtr_6,
  MR_Integer * Count_7,
  MR_Word * MaybeCallee_8);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
  MR_Word Deep_6,
  MR_Word CliquePtr_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Map_0_21,
  MR_Word * STATE_VARIABLE_Map_22);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
  void * env_ptr_arg);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
  MR_Word Deep_6,
  MR_Word CSDPtr_7,
  MR_Word * HeadVar__3_3,
  MR_Word * Own_9,
  MR_Word * Inherit_10);

static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box analysis_utils_scalar_common_1[3][2];

static /* final */ const MR_Box analysis_utils_scalar_common_2[3][3];

static /* final */ const MR_Box analysis_utils_scalar_common_3[1][1];

static /* final */ const MR_Box analysis_utils_scalar_common_4[1][5];

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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Cannot find procedure representation"))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box analysis_utils_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0)
  }
};

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_callee_0_0[2] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
};

static const MR_ConstString analysis_utils__analysis_utils__field_names_callee_0_0[2] = {
  (MR_String) "c_clique",
  (MR_String) "c_csd"
};

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_callee_0_0 = {
  (MR_String) "callee",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis_utils__analysis_utils__field_types_callee_0_0,
  analysis_utils__analysis_utils__field_names_callee_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_callee_0_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_callee_0_0
};

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_callee_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_callee_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____callee_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____callee_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "callee",
  {     analysis_utils__analysis_utils__du_name_ordered_callee_0 },
  {     analysis_utils__analysis_utils__du_ptag_ordered_callee_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis_utils__analysis_utils__functor_number_map_callee_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_cost_and_callees_1_0[4] = {
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_higher_order_0)
};

static const MR_ConstString analysis_utils__analysis_utils__field_names_cost_and_callees_1_0[4] = {
  (MR_String) "cac_cost",
  (MR_String) "cac_exits",
  (MR_String) "cac_callees",
  (MR_String) "cac_call_site_is_ho"
};

static const MR_DuArgLocn analysis_utils__analysis_utils__field_locns_cost_and_callees_1_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0 = {
  (MR_String) "cost_and_callees",
  INT16_C(4),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis_utils__analysis_utils__field_types_cost_and_callees_1_0,
  analysis_utils__analysis_utils__field_names_cost_and_callees_1_0,
  analysis_utils__analysis_utils__field_locns_cost_and_callees_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0
};

static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_1_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_1_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {     analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1 },
  {     analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1,

};

static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0)
  }
};

const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0 = {
  (MR_String) "first_order_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1 = {
  (MR_String) "higher_order_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_ordinal_ordered_higher_order_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis_utils____Unify____higher_order_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____higher_order_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "higher_order",
  {     analysis_utils__analysis_utils__enum_name_ordered_higher_order_0 },
  {     analysis_utils__analysis_utils__enum_ordinal_ordered_higher_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis_utils__analysis_utils__functor_number_map_higher_order_0,

};

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(
  MR_Float MaxDepth_15,
  MR_Word CostFn_17,
  MR_Integer LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;
    MR_Integer DepthI_22;
    MR_Float Var_45;
    MR_Float Var_46;
    MR_Float Var_47;
    MR_Float Var_48;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_48;

    Var_46 = mercury__float__float_1_f_0(LambdaHeadVar__1_43);
    Var_45 = mercury__float__f_slash_2_f_0(MaxDepth_15, Var_46);
    DepthI_22 = mercury__float__round_to_int_1_f_0(Var_45);
    Var_47 = mercury__float__float_1_f_0(LambdaHeadVar__1_43);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), CostFn_17, (MR_Integer) 1))));
    conv1_Var_48 = func_0(((MR_Box) (CostFn_17)), ((MR_Box) (DepthI_22)));
    Var_48 = MR_unbox_float(conv1_Var_48);
    LambdaHeadVar__2_44 = measurements__build_cs_cost_csq_percall_2_f_0(Var_47, Var_48);
    return LambdaHeadVar__2_44;
  }
}

static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(
  MR_Float MaxDepth_15,
  MR_Word CostFn_17,
  MR_Integer LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;
    MR_Integer DepthI_22;
    MR_Float Var_45;
    MR_Float Var_46;
    MR_Float Var_47;
    MR_Float Var_48;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_48;

    Var_46 = mercury__float__float_1_f_0(LambdaHeadVar__1_43);
    Var_45 = mercury__float__f_slash_2_f_0(MaxDepth_15, Var_46);
    DepthI_22 = mercury__float__round_to_int_1_f_0(Var_45);
    Var_47 = mercury__float__float_1_f_0(LambdaHeadVar__1_43);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), CostFn_17, (MR_Integer) 1))));
    conv1_Var_48 = func_0(((MR_Box) (CostFn_17)), ((MR_Box) (DepthI_22)));
    Var_48 = MR_unbox_float(conv1_Var_48);
    LambdaHeadVar__2_44 = measurements__build_cs_cost_csq_percall_2_f_0(Var_47, Var_48);
    return LambdaHeadVar__2_44;
  }
}

static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(
  MR_Word FirstPDPtr_12,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;
    MR_Integer Var_19 = (MR_Integer) (FirstPDPtr_12);
    MR_Integer Var_20 = (MR_Integer) (HeadVar__2_16);

    succeeded = (Var_19 == Var_20);
    return succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____higher_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&analysis_utils_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = analysis_utils____Unify____cost_and_callees_1_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0(
  MR_Word TypeInfo_for_Callee_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      measurements____Compare____cs_cost_csq_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__set_ordlist____Compare____set_ordlist_1_0(TypeInfo_for_Callee_17, &SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Integer Var_23 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_24 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_23 < Var_24);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_23 > Var_24);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0(
  MR_Word TypeInfo_for_Callee_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

      succeeded = measurements____Unify____cs_cost_csq_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_for_Callee_13, ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
analysis_utils____Compare____callee_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_15 < Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_15 > Var_16);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer Var_11 = (MR_Integer) (ArgX1_3);
      MR_Integer Var_12 = (MR_Integer) (ArgY1_4);
      MR_Integer Var_13;
      MR_Integer Var_14;

      succeeded = (Var_11 == Var_12);
      if (succeeded)
      {
        Var_13 = (MR_Integer) (ArgX2_5);
        Var_14 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_13 == Var_14);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
  MR_Word Deep_5,
  MR_Word CSDPtr_6,
  MR_Integer * Count_7,
  MR_Word * MaybeCallee_8)
{
  {
    MR_bool succeeded;

    succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_5, CSDPtr_6);
    if (succeeded)
    {
      MR_Word Own_9;

      profile__deep_lookup_csd_own_3_p_0(Deep_5, CSDPtr_6, &Own_9);
      *Count_7 = measurements__calls_1_f_0(Own_9);
      profile__deep_lookup_clique_maybe_child_3_p_0(Deep_5, CSDPtr_6, MaybeCallee_8);
    }
    else
    {
      *Count_7 = (MR_Integer) 0;
      *MaybeCallee_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_Count_7;
    MR_Word conv0_MaybeCallee_8;

    analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Count_7, &conv0_MaybeCallee_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_Count_7));
    *wrapper_arg_3 = ((MR_Box) (conv0_MaybeCallee_8));
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 = ((MR_Word) ((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28));
    analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(env_ptr);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0);
    if (((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 == (MR_Word) ((MR_Unsigned) 0U)))
      (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
    else
    {
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28, (MR_Integer) 0))));

      (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45, ((MR_Box) ((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (Var_50)));
    }
    if ((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
      analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&analysis_utils_scalar_common_1[2]), &(env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28, (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18, analysis_utils__build_recursive_call_site_counts_map_5_p_0_5, env_ptr);
        (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
  MR_Word Deep_6,
  MR_Word CliquePtr_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Map_0_21,
  MR_Word * STATE_VARIABLE_Map_22)
{
  {
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s env;

    (env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7 = CliquePtr_7;
    {
      MR_Word CSSPtr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word CSDSlot_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) CSDSlot_9)) == (MR_Integer) 1))
      {
        MR_Integer Count_12;
        MR_ArrayPtr CSDPtrs_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), CSDSlot_9, (MR_Integer) 1))));
        MR_Word Counts_17;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CSDSlot_9, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), CSDSlot_9, (MR_Integer) 0)));
        MR_Box conv3_Count_12;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_counts_map_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Deep_6));
        }
        Var_24 = mercury__array__to_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrs_16));
        mercury__list__map2_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&analysis_utils_scalar_common_1[2]), Var_23, Var_24, &Counts_17, &(env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18);
        conv3_Count_12 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&analysis_utils_scalar_common_2[2]), Counts_17, ((MR_Box) ((MR_Integer) 0)));
        Count_12 = ((MR_Integer) (conv3_Count_12));
        analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(&env);
        if ((env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
        {
          MR_Word CSS_19;
          MR_Word RevGoalPath_20;
          MR_Word Var_31;
          MR_Integer Var_32;
          MR_Word Var_33;
          MR_Integer Var_34;

          profile__deep_lookup_call_site_statics_3_p_0(Deep_6, CSSPtr_8, &CSS_19);
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_19, (MR_Integer) 0))));
          Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CSS_19, (MR_Integer) 1))));
          Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_19, (MR_Integer) 2))));
          Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CSS_19, (MR_Integer) 3))));
          RevGoalPath_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_19, (MR_Integer) 4))));
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (RevGoalPath_20)), ((MR_Box) (Count_12)), STATE_VARIABLE_Map_0_21, STATE_VARIABLE_Map_22);
        }
        else
          *STATE_VARIABLE_Map_22 = STATE_VARIABLE_Map_0_21;
      }
      else
      {
        MR_Word CSDPtr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSDSlot_9, (MR_Integer) 0))));

        (env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_6, CSDPtr_11);
        if ((env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
        {
          MR_Word MaybeCallee_13;
          MR_Integer Count_87;

          (env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_6, CSDPtr_11);
          if ((env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
          {
            MR_Word Own_55;

            profile__deep_lookup_csd_own_3_p_0(Deep_6, CSDPtr_11, &Own_55);
            Count_87 = measurements__calls_1_f_0(Own_55);
            profile__deep_lookup_clique_maybe_child_3_p_0(Deep_6, CSDPtr_11, &MaybeCallee_13);
          }
          else
          {
            Count_87 = (MR_Integer) 0;
            MaybeCallee_13 = (MR_Word) ((MR_Unsigned) 0U);
          }
          if ((MaybeCallee_13 == (MR_Word) ((MR_Unsigned) 0U)))
            (env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
          else
          {
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallee_13, (MR_Integer) 0))));

            (env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), ((MR_Box) ((env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (Var_58)));
          }
          if ((env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
          {
            MR_Word CSS_71;
            MR_Word RevGoalPath_72;
            MR_Word Var_67;
            MR_Integer Var_68;
            MR_Word Var_69;
            MR_Integer Var_70;

            profile__deep_lookup_call_site_statics_3_p_0(Deep_6, CSSPtr_8, &CSS_71);
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_71, (MR_Integer) 0))));
            Var_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CSS_71, (MR_Integer) 1))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_71, (MR_Integer) 2))));
            Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CSS_71, (MR_Integer) 3))));
            RevGoalPath_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_71, (MR_Integer) 4))));
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (RevGoalPath_72)), ((MR_Box) (Count_87)), STATE_VARIABLE_Map_0_21, STATE_VARIABLE_Map_22);
          }
          else
            *STATE_VARIABLE_Map_22 = STATE_VARIABLE_Map_0_21;
        }
        else
          *STATE_VARIABLE_Map_22 = STATE_VARIABLE_Map_0_21;
      }
    }
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6 = ((MR_Word) ((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6));
    analysis_utils__cost_and_callees_is_recursive_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_10;

      (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 1))));
      (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_14 = (MR_Integer) ((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3);
      (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_15 = (MR_Integer) ((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_12);
      (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = ((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_14 == (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Var_15);
      if ((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded)
        analysis_utils__cost_and_callees_is_recursive_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Callees_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 2))));
          MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 0))));
          MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 1))));
          MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 3)));

          mercury__set__member_2_p_1((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), &(env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6, Callees_5, analysis_utils__cost_and_callees_is_recursive_2_p_0_3, env_ptr);
        }
        (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0(
  MR_Word ParentCliquePtr_3,
  MR_Word CostAndCallees_4)
{
  {
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s env;

    (env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3 = ParentCliquePtr_3;
    (env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4 = CostAndCallees_4;
    analysis_utils__cost_and_callees_is_recursive_2_p_0_4(&env);
    return (env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded;
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_44;

    conv2_LambdaHeadVar__2_44 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__2_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_22;

    analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_22));
  }
}

void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1(
  MR_Word Deep_7,
  MR_Word CliquePtr_8,
  MR_Word PDPtr_9,
  MR_Word RecursionType_10,
  MR_Word MaybeDepth_11,
  MR_Word * MaybeRecursiveCallSiteCostMap_12)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RecursionType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_63;

          Var_63 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), RecursionType_10, (MR_Integer) 2)));
          MR_Word CostFn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RecursionType_10, (MR_Integer) 4))));

          if ((MaybeDepth_11 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis_utils.build_recursive_call_site_cost_map\'/6", (MR_String) "Expected valid depth for known recursion type");
              return;
            }
          else
          {
            MR_Word Depth0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepth_11, (MR_Integer) 0))));

            succeeded = measurements__recursion_depth_is_base_case_1_p_0(Depth0_18);
            if (succeeded)
            {
              MR_Word Var_41;

              Var_41 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRecursiveCallSiteCostMap_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
              }
            }
            else
            {
              MR_Word CallCountsMap_19;
              MR_Word RecursiveCallSiteCostMap_20;
              MR_Word Var_42;
              MR_Word SiteSlots_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Box conv1_CallCountsMap_19;

              analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_7, PDPtr_9, &SiteSlots_78);
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_1));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Deep_7));
                MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (CliquePtr_8));
              }
              Var_80 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
              mercury__list__foldl_4_p_0((MR_Word) (&analysis_utils_scalar_common_2[0]), (MR_Word) (&analysis_utils_scalar_common_2[1]), Var_79, SiteSlots_78, ((MR_Box) (Var_80)), &conv1_CallCountsMap_19);
              CallCountsMap_19 = ((MR_Word) (conv1_CallCountsMap_19));
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_2));
                MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_42, 3) = MR_box_float(MaxDepth_15);
                MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (CostFn_17));
              }
              RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), Var_42, CallCountsMap_19);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeRecursiveCallSiteCostMap_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RecursiveCallSiteCostMap_20));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Error_35;

          switch (MR_tag((MR_Word) RecursionType_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              Error_35 = (MR_String) "No average recursion depth for this recursion type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RecursionType_10, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Error_35 = (MR_String) "No average recursion depth for this recursion type";
                  break;
                case (MR_Integer) 1:
                  Error_35 = (MR_String) "Could not detect recursion type";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Errors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RecursionType_10, (MR_Integer) 1))));

                    Error_35 = mercury__string__join_list_2_f_0((MR_String) "; and ", Errors_37);
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_35));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Error_35;

          switch (MR_tag((MR_Word) RecursionType_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              Error_35 = (MR_String) "No average recursion depth for this recursion type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RecursionType_10, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Error_35 = (MR_String) "No average recursion depth for this recursion type";
                  break;
                case (MR_Integer) 1:
                  Error_35 = (MR_String) "Could not detect recursion type";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Errors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RecursionType_10, (MR_Integer) 1))));

                    Error_35 = mercury__string__join_list_2_f_0((MR_String) "; and ", Errors_37);
                  }
                  break;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRecursiveCallSiteCostMap_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_35));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_44;

    conv2_LambdaHeadVar__2_44 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__271__1_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_22;

    analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_22));
  }
}

void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0(
  MR_Word Deep_7,
  MR_Word CliquePtr_8,
  MR_Word PDPtr_9,
  MR_Word RecursionType_10,
  MR_Word MaybeDepth_11,
  MR_Word * MaybeRecursiveCallSiteCostMap_12)
{
  {
    MR_bool succeeded;

    if ((RecursionType_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_63;

      Var_63 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRecursiveCallSiteCostMap_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
      }
    }
    else
    {
      MR_Float MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), RecursionType_10, (MR_Integer) 2)));
      MR_Word CostFn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RecursionType_10, (MR_Integer) 4))));
      MR_Word Depth0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepth_11, (MR_Integer) 0))));

      succeeded = measurements__recursion_depth_is_base_case_1_p_0(Depth0_18);
      if (succeeded)
      {
        MR_Word Var_41;

        Var_41 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRecursiveCallSiteCostMap_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
        }
      }
      else
      {
        MR_Word CallCountsMap_19;
        MR_Word RecursiveCallSiteCostMap_20;
        MR_Word Var_42;
        MR_Word SiteSlots_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Box conv1_CallCountsMap_19;

        analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_7, PDPtr_9, &SiteSlots_85);
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (Deep_7));
          MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (CliquePtr_8));
        }
        Var_87 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        mercury__list__foldl_4_p_0((MR_Word) (&analysis_utils_scalar_common_2[0]), (MR_Word) (&analysis_utils_scalar_common_2[1]), Var_86, SiteSlots_85, ((MR_Box) (Var_87)), &conv1_CallCountsMap_19);
        CallCountsMap_19 = ((MR_Word) (conv1_CallCountsMap_19));
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = MR_box_float(MaxDepth_15);
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (CostFn_17));
        }
        RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), Var_42, CallCountsMap_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRecursiveCallSiteCostMap_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RecursiveCallSiteCostMap_20));
        }
      }
    }
  }
}

void MR_CALL 
analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * PairedSlots_6)
{
  {
    MR_Word PD_7;
    MR_Word PSPtr_8;
    MR_ArrayPtr CSDArray_9;
    MR_Word PS_10;
    MR_ArrayPtr CSSArray_11;
    MR_Word CSDSlots_12;
    MR_Word CSSSlots_13;

    profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, PDPtr_5, &PD_7);
    PSPtr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_7, (MR_Integer) 0))));
    CSDArray_9 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PD_7, (MR_Integer) 1))));
    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_8, &PS_10);
    CSSArray_11 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PS_10, (MR_Integer) 8))));
    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArray_9), &CSDSlots_12);
    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CSSArray_11), &CSSSlots_13);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), CSSSlots_13, CSDSlots_12, PairedSlots_6);
  }
}

static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_Own_9;
    MR_Word conv0_Inherit_10;

    analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3, &conv1_Own_9, &conv0_Inherit_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_3 = ((MR_Box) (conv1_Own_9));
    *wrapper_arg_4 = ((MR_Box) (conv0_Inherit_10));
  }
}

void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(
  MR_Word Deep_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CallSitesMap_0_25,
  MR_Word * STATE_VARIABLE_CallSitesMap_26)
{
  {
    MR_bool succeeded;
    MR_Word CSSPtr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Slot_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word CostCsq_13;
    MR_Word Callees_14;
    MR_Integer Exits_15;
    MR_Word CostAndCallees_21;
    MR_Word HigherOrder_22;
    MR_Word CSS_23;
    MR_Word RevGoalPath_24;
    MR_Word Var_41;
    MR_ArrayPtr Var_42;
    MR_Word Var_43;

    if (((MR_tag((MR_Word) Slot_7)) == (MR_Integer) 1))
    {
      MR_ArrayPtr CSDPtrsArray_17 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), Slot_7, (MR_Integer) 1))));
      MR_Word CSDPtrs_18;
      MR_Word Owns_19;
      MR_Word Inherits_20;
      MR_Word Var_27;
      MR_Integer Var_28;
      MR_Float Var_29;
      MR_Integer Var_30;
      MR_Integer Var_31;
      MR_Integer Var_32;
      MR_Word Own_45;
      MR_Word Inherit_46;

      mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrsArray_17), &CSDPtrs_18);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Deep_5));
      }
      mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_27, CSDPtrs_18, &Callees_14, &Owns_19, &Inherits_20);
      Own_45 = measurements__sum_own_infos_1_f_0(Owns_19);
      Inherit_46 = measurements__sum_inherit_infos_1_f_0(Inherits_20);
      Var_28 = measurements__calls_1_f_0(Own_45);
      Var_31 = measurements__callseqs_1_f_0(Own_45);
      Var_32 = measurements__inherit_callseqs_1_f_0(Inherit_46);
      Var_30 = (MR_Integer) ((MR_Unsigned) Var_31 + (MR_Unsigned) Var_32);
      Var_29 = mercury__float__float_1_f_0(Var_30);
      CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(Var_28, Var_29);
      Exits_15 = measurements__exits_1_f_0(Own_45);
    }
    else
    {
      MR_Word CSDPtr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Slot_7, (MR_Integer) 0))));

      succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_5, CSDPtr_9);
      if (succeeded)
      {
        MR_Word Callee_10;
        MR_Word Own_11;
        MR_Word Inherit_12;
        MR_Integer Var_33;
        MR_Float Var_34;
        MR_Integer Var_35;
        MR_Integer Var_36;
        MR_Integer Var_37;

        analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(Deep_5, CSDPtr_9, &Callee_10, &Own_11, &Inherit_12);
        Var_33 = measurements__calls_1_f_0(Own_11);
        Var_36 = measurements__callseqs_1_f_0(Own_11);
        Var_37 = measurements__inherit_callseqs_1_f_0(Inherit_12);
        Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) Var_37);
        Var_34 = mercury__float__float_1_f_0(Var_35);
        CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(Var_33, Var_34);
        {
          Callees_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Callees_14, 0) = ((MR_Box) (Callee_10));
          MR_hl_field(MR_mktag(1), Callees_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Exits_15 = measurements__exits_1_f_0(Own_11);
      }
      else
      {
        CostCsq_13 = measurements__build_cs_cost_csq_2_f_0((MR_Integer) 0, (MR_Float) 0.0000000000000000);
        Callees_14 = (MR_Word) ((MR_Unsigned) 0U);
        Exits_15 = (MR_Integer) 0;
      }
    }
    Var_41 = mercury__set__list_to_set_1_f_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), Callees_14);
    Var_42 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_5, (MR_Integer) 7))));
    profile__lookup_call_site_statics_3_p_0(Var_42, CSSPtr_6, &CSS_23);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_23, (MR_Integer) 2))));
    RevGoalPath_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_23, (MR_Integer) 4))));
    switch (MR_tag((MR_Word) Var_43)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Var_43)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HigherOrder_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HigherOrder_22 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HigherOrder_22 = (MR_Integer) 0;
        break;
    }
    {
      CostAndCallees_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CostAndCallees_21, 0) = ((MR_Box) (CostCsq_13));
      MR_hl_field(MR_mktag(0), CostAndCallees_21, 1) = ((MR_Box) (Exits_15));
      MR_hl_field(MR_mktag(0), CostAndCallees_21, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), CostAndCallees_21, 3) = (MR_Box) ((MR_Unsigned) (HigherOrder_22));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&analysis_utils_scalar_common_1[1]), ((MR_Box) (RevGoalPath_24)), ((MR_Box) (CostAndCallees_21)), STATE_VARIABLE_CallSitesMap_0_25, STATE_VARIABLE_CallSitesMap_26);
  }
}

static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
  MR_Word Deep_6,
  MR_Word CSDPtr_7,
  MR_Word * HeadVar__3_3,
  MR_Word * Own_9,
  MR_Word * Inherit_10)
{
  {
    MR_Word CalleeCliquePtr_8;
    MR_Word CSD_11;
    MR_Word PDPtr_12;
    MR_ArrayPtr Var_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_6, (MR_Integer) 5))));
    MR_ArrayPtr Var_14;
    MR_ArrayPtr Var_15;

    profile__lookup_call_site_dynamics_3_p_0(Var_13, CSDPtr_7, &CSD_11);
    Var_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_6, (MR_Integer) 18))));
    profile__lookup_csd_desc_3_p_0(Var_14, CSDPtr_7, Inherit_10);
    PDPtr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_11, (MR_Integer) 1))));
    Var_15 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), Deep_6, (MR_Integer) 9))));
    profile__lookup_clique_index_3_p_0(Var_15, PDPtr_12, &CalleeCliquePtr_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CalleeCliquePtr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CSDPtr_7));
    }
    *Own_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_11, (MR_Integer) 2))));
  }
}

void MR_CALL 
analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(
  MR_Word Deep_5,
  MR_Word CSSPtr_6,
  MR_Word STATE_VARIABLE_CallSitesMap_0_20,
  MR_Word * STATE_VARIABLE_CallSitesMap_21)
{
  {
    MR_Word CSS_8;
    MR_Word Own_9;
    MR_Word Inherit_10;
    MR_Word CostCsq_11;
    MR_Integer Exits_12;
    MR_Word KindAndCallee_13;
    MR_Word HigherOrder_14;
    MR_Word Callees_17;
    MR_Word CostAndCallees_18;
    MR_Word RevGoalPath_19;
    MR_Integer Var_22;
    MR_Float Var_23;
    MR_Integer Var_24;
    MR_Integer Var_25;
    MR_Integer Var_26;

    profile__deep_lookup_call_site_statics_3_p_0(Deep_5, CSSPtr_6, &CSS_8);
    profile__deep_lookup_css_own_3_p_0(Deep_5, CSSPtr_6, &Own_9);
    profile__deep_lookup_css_desc_3_p_0(Deep_5, CSSPtr_6, &Inherit_10);
    Var_22 = measurements__calls_1_f_0(Own_9);
    Var_25 = measurements__callseqs_1_f_0(Own_9);
    Var_26 = measurements__inherit_callseqs_1_f_0(Inherit_10);
    Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) Var_26);
    Var_23 = mercury__float__float_1_f_0(Var_24);
    CostCsq_11 = measurements__build_cs_cost_csq_2_f_0(Var_22, Var_23);
    Exits_12 = measurements__exits_1_f_0(Own_9);
    KindAndCallee_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_8, (MR_Integer) 2))));
    RevGoalPath_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_8, (MR_Integer) 4))));
    switch (MR_tag((MR_Word) KindAndCallee_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(KindAndCallee_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HigherOrder_14 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HigherOrder_14 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HigherOrder_14 = (MR_Integer) 0;
        break;
    }
    switch (MR_tag((MR_Word) KindAndCallee_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(KindAndCallee_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Callees_17 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
            break;
          case (MR_Integer) 1:
            Callees_17 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
            break;
          case (MR_Integer) 2:
            Callees_17 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
            break;
          case (MR_Integer) 3:
            Callees_17 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Callee_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KindAndCallee_13, (MR_Integer) 0))));

          Callees_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (Callee_16)));
        }
        break;
    }
    {
      CostAndCallees_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CostAndCallees_18, 0) = ((MR_Box) (CostCsq_11));
      MR_hl_field(MR_mktag(0), CostAndCallees_18, 1) = ((MR_Box) (Exits_12));
      MR_hl_field(MR_mktag(0), CostAndCallees_18, 2) = ((MR_Box) (Callees_17));
      MR_hl_field(MR_mktag(0), CostAndCallees_18, 3) = (MR_Box) ((MR_Unsigned) (HigherOrder_14));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&analysis_utils_scalar_common_1[0]), ((MR_Box) (RevGoalPath_19)), ((MR_Box) (CostAndCallees_18)), STATE_VARIABLE_CallSitesMap_0_20, STATE_VARIABLE_CallSitesMap_21);
  }
}

void MR_CALL 
analysis_utils__deep_get_maybe_procrep_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * MaybeProcRep_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeProgRep_7;

    profile__deep_get_maybe_progrep_2_p_0(Deep_4, &MaybeProgRep_7);
    if (((MR_tag((MR_Word) MaybeProgRep_7)) == (MR_Integer) 1))
      *MaybeProcRep_6 = (MR_Word) (MaybeProgRep_7);
    else
    {
      MR_Word ProgRep_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeProgRep_7, (MR_Integer) 0))));
      MR_Word PS_9;
      MR_Word ProcLabel_10;
      MR_Word ProcRep_11;

      profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_9);
      ProcLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PS_9, (MR_Integer) 0))));
      succeeded = program_representation_utils__progrep_search_proc_3_p_0(ProgRep_8, ProcLabel_10, &ProcRep_11);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeProcRep_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcRep_11));
        }
      else
        *MaybeProcRep_6 = (MR_Word) (MR_mkword(MR_mktag(1), &analysis_utils_scalar_common_3[0]));
    }
  }
}

static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__133__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0(
  MR_Word Deep_5,
  MR_Word CliquePtr_6,
  MR_Word * MaybeFirstPDPtr_7,
  MR_Word * OtherPDPtrs_8)
{
  {
    MR_bool succeeded;
    MR_Word PDPtrs_9;
    MR_Word EntryCSDPtr_10;

    profile__deep_lookup_clique_members_3_p_0(Deep_5, CliquePtr_6, &PDPtrs_9);
    profile__deep_lookup_clique_parents_3_p_0(Deep_5, CliquePtr_6, &EntryCSDPtr_10);
    succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_5, EntryCSDPtr_10);
    if (succeeded)
    {
      MR_Word EntryCSD_11;
      MR_Word FirstPDPtr_12;
      MR_Word Var_13;

      profile__deep_lookup_call_site_dynamics_3_p_0(Deep_5, EntryCSDPtr_10, &EntryCSD_11);
      FirstPDPtr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryCSD_11, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFirstPDPtr_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstPDPtr_12));
      }
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&analysis_utils_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (analysis_utils__find_clique_first_and_other_procs_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (FirstPDPtr_12));
      }
      mercury__list__negated_filter_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), Var_13, PDPtrs_9, OtherPDPtrs_8);
    }
    else
    {
      *MaybeFirstPDPtr_7 = (MR_Word) ((MR_Unsigned) 0U);
      *OtherPDPtrs_8 = PDPtrs_9;
    }
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis_utils____Unify____callee_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis_utils____Compare____callee_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = analysis_utils____Unify____cost_and_callees_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis_utils____Compare____cost_and_callees_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis_utils____Unify____cost_and_callees_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis_utils____Compare____cost_and_callees_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = analysis_utils____Unify____higher_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    analysis_utils____Compare____higher_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module analysis_utils.
