/*
** Automatically generated from `analysis_utils.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 327 "analysis_utils.m"
struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s {
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7;
#line 332 "analysis_utils.m"
  MR_bool analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded;
#line 92 "analysis_utils.c"
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41;
#line 94 "analysis_utils.c"
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18;
#line 353 "analysis_utils.m"
  jmp_buf analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0;
#line 353 "analysis_utils.m"
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45;
#line 353 "analysis_utils.m"
  MR_Word analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28;
#line 353 "analysis_utils.m"
  MR_Box analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28;
#line 327 "analysis_utils.m"
};

#line 103 "analysis_utils.m"
struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s {
#line 103 "analysis_utils.m"
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3;
#line 103 "analysis_utils.m"
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4;
#line 419 "analysis_utils.m"
  MR_bool analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded;
#line 419 "analysis_utils.m"
  jmp_buf analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0;
#line 419 "analysis_utils.m"
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6;
#line 419 "analysis_utils.m"
  MR_Word analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_12_12;
#line 419 "analysis_utils.m"
  MR_Integer analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_14_14;
#line 419 "analysis_utils.m"
  MR_Integer analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_15_15;
#line 421 "analysis_utils.m"
  MR_Box analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6;
#line 103 "analysis_utils.m"
};


#line 131 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 134 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0;

#line 137 "analysis_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

#line 140 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 143 "analysis_utils.c"
static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_callee_0_0[2];

#line 146 "analysis_utils.c"
static const MR_ConstString analysis_utils__analysis_utils__field_names_callee_0_0[2];

#line 149 "analysis_utils.c"
static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_callee_0_0;

#line 152 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_callee_0_0[1];

#line 155 "analysis_utils.c"
static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_callee_0[1];

#line 158 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_callee_0[1];

#line 161 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_callee_0[1];

#line 164 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 167 "analysis_utils.c"
static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_cost_and_callees_1_0[4];

#line 170 "analysis_utils.c"
static const MR_ConstString analysis_utils__analysis_utils__field_names_cost_and_callees_1_0[4];

#line 173 "analysis_utils.c"
static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0;

#line 176 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1];

#line 179 "analysis_utils.c"
static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1];

#line 182 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1[1];

#line 185 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1[1];

#line 188 "analysis_utils.c"
static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 191 "analysis_utils.c"
static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0;

#line 194 "analysis_utils.c"
static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1;

#line 197 "analysis_utils.c"
static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_value_ordered_higher_order_0[2];

#line 200 "analysis_utils.c"
static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_name_ordered_higher_order_0[2];

#line 203 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_higher_order_0[2];

#line 206 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
#line 209 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 211 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2);

#line 214 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
#line 217 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 219 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 221 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3);

#line 224 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
#line 227 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 229 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 231 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3);

#line 234 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
#line 237 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 239 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 241 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3,
#line 243 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_4);

#line 246 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
#line 249 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 251 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2);

#line 254 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
#line 257 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 259 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 261 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3);

#line 264 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
#line 267 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 269 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2);

#line 272 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
#line 275 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 277 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 279 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3);

#line 272 "analysis_utils.m"
static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_f_0(
#line 272 "analysis_utils.m"
  MR_Float analysis_utils__MaxDepth_15,
#line 272 "analysis_utils.m"
  MR_Word analysis_utils__CostFn_17,
#line 272 "analysis_utils.m"
  MR_Integer analysis_utils__HeadVar__3_42);

#line 272 "analysis_utils.m"
static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_f_0(
#line 272 "analysis_utils.m"
  MR_Float analysis_utils__MaxDepth_15,
#line 272 "analysis_utils.m"
  MR_Word analysis_utils__CostFn_17,
#line 272 "analysis_utils.m"
  MR_Integer analysis_utils__HeadVar__3_42);

#line 134 "analysis_utils.m"
static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_p_0(
#line 134 "analysis_utils.m"
  MR_Word analysis_utils__FirstPDPtr_12,
#line 134 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_16);

#line 375 "analysis_utils.m"
static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
#line 375 "analysis_utils.m"
  MR_Word analysis_utils__Deep_5,
#line 375 "analysis_utils.m"
  MR_Word analysis_utils__CSDPtr_6,
#line 375 "analysis_utils.m"
  MR_Integer * analysis_utils__Count_7,
#line 375 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeCallee_8);

#line 351 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2);

#line 349 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
#line 349 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 349 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 349 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 349 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3);

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 327 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__Deep_6,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__CliquePtr_7,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__STATE_VARIABLE_Map_0_21,
#line 327 "analysis_utils.m"
  MR_Word * analysis_utils__STATE_VARIABLE_Map_22);

#line 194 "analysis_utils.m"
static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
#line 194 "analysis_utils.m"
  MR_Word analysis_utils__Deep_6,
#line 194 "analysis_utils.m"
  MR_Word analysis_utils__CSDPtr_7,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__3_3,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__Own_9,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__Inherit_10);

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 421 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
#line 421 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg);

#line 272 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1);

#line 324 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2,
#line 324 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3);

#line 272 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1);

#line 324 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2,
#line 324 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3);

#line 179 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
#line 179 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 179 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_4);

#line 134 "analysis_utils.m"
static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
#line 134 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 134 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1);


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



#include "profile.mh"
#include "profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 638 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 647 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 656 "analysis_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 analysis_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 666 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__maybe__pti_maybe_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 674 "analysis_utils.c"
static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_callee_0_0[2] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 680 "analysis_utils.c"
static const MR_ConstString analysis_utils__analysis_utils__field_names_callee_0_0[2] = {
  (MR_String) "c_clique",
  (MR_String) "c_csd"
};

#line 686 "analysis_utils.c"
static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_callee_0_0 = {
  (MR_String) "callee",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis_utils__analysis_utils__field_types_callee_0_0,
  analysis_utils__analysis_utils__field_names_callee_0_0,
  NULL,
  NULL
};

#line 701 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_callee_0_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_callee_0_0
};

#line 706 "analysis_utils.c"
static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_callee_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_callee_0_0
  }
};

#line 715 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_callee_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_callee_0_0
};

#line 720 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_callee_0[1] = {
  (MR_Integer) 0
};

#line 725 "analysis_utils.c"
const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_callee_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____callee_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____callee_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "callee",
  {
    analysis_utils__analysis_utils__du_name_ordered_callee_0
  },
  {
    analysis_utils__analysis_utils__du_ptag_ordered_callee_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_callee_0
};

#line 746 "analysis_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 754 "analysis_utils.c"
static const MR_PseudoTypeInfo analysis_utils__analysis_utils__field_types_cost_and_callees_1_0[4] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &analysis_utils__set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &analysis_utils__analysis_utils__type_ctor_info_higher_order_0
};

#line 762 "analysis_utils.c"
static const MR_ConstString analysis_utils__analysis_utils__field_names_cost_and_callees_1_0[4] = {
  (MR_String) "cac_cost",
  (MR_String) "cac_exits",
  (MR_String) "cac_callees",
  (MR_String) "cac_call_site_is_ho"
};

#line 770 "analysis_utils.c"
static const MR_DuFunctorDesc analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0 = {
  (MR_String) "cost_and_callees",
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis_utils__analysis_utils__field_types_cost_and_callees_1_0,
  analysis_utils__analysis_utils__field_names_cost_and_callees_1_0,
  NULL,
  NULL
};

#line 785 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0
};

#line 790 "analysis_utils.c"
static const MR_DuPtagLayout analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis_utils__analysis_utils__du_stag_ordered_cost_and_callees_1_0
  }
};

#line 799 "analysis_utils.c"
static const MR_DuFunctorDescPtr analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1[1] = {
  &analysis_utils__analysis_utils__du_functor_desc_cost_and_callees_1_0
};

#line 804 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1[1] = {
  (MR_Integer) 0
};

#line 809 "analysis_utils.c"
const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_1_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_1_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {
    analysis_utils__analysis_utils__du_name_ordered_cost_and_callees_1
  },
  {
    analysis_utils__analysis_utils__du_ptag_ordered_cost_and_callees_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_cost_and_callees_1
};

#line 830 "analysis_utils.c"
static const MR_FA_TypeInfo_Struct1 analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 838 "analysis_utils.c"
const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis_utils____Unify____cost_and_callees_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____cost_and_callees_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "cost_and_callees",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &analysis_utils__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 859 "analysis_utils.c"
static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0 = {
  (MR_String) "first_order_call",
  (MR_Integer) 0
};

#line 865 "analysis_utils.c"
static const MR_EnumFunctorDesc analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 1
};

#line 871 "analysis_utils.c"
static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_value_ordered_higher_order_0[2] = {
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0,
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1
};

#line 877 "analysis_utils.c"
static const MR_EnumFunctorDescPtr analysis_utils__analysis_utils__enum_name_ordered_higher_order_0[2] = {
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_0,
  &analysis_utils__analysis_utils__enum_functor_desc_higher_order_0_1
};

#line 883 "analysis_utils.c"
static const MR_Integer analysis_utils__analysis_utils__functor_number_map_higher_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 889 "analysis_utils.c"
const MR_TypeCtorInfo_Struct analysis_utils__analysis_utils__type_ctor_info_higher_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis_utils____Unify____higher_order_0_0_10001)),
  ((MR_Box) (analysis_utils____Compare____higher_order_0_0_10001)),
  (MR_String) "analysis_utils",
  (MR_String) "higher_order",
  {
    analysis_utils__analysis_utils__enum_name_ordered_higher_order_0
  },
  {
    analysis_utils__analysis_utils__enum_value_ordered_higher_order_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis_utils__analysis_utils__functor_number_map_higher_order_0
};

#line 910 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0_10001(
#line 913 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 915 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2)
#line 917 "analysis_utils.c"
{
#line 919 "analysis_utils.c"
  {
#line 921 "analysis_utils.c"
    MR_bool analysis_utils__succeeded;

#line 924 "analysis_utils.c"
    {
#line 926 "analysis_utils.c"
      analysis_utils__succeeded = analysis_utils____Unify____callee_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    }
#line 929 "analysis_utils.c"
    return analysis_utils__succeeded;
#line 931 "analysis_utils.c"
  }
#line 933 "analysis_utils.c"
}

#line 936 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____callee_0_0_10001(
#line 939 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 941 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 943 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3)
#line 945 "analysis_utils.c"
{
#line 947 "analysis_utils.c"
  {
#line 949 "analysis_utils.c"
    MR_Word analysis_utils__conv0_HeadVar__1_1;

#line 952 "analysis_utils.c"
    {
#line 954 "analysis_utils.c"
      analysis_utils____Compare____callee_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    }
#line 957 "analysis_utils.c"
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
#line 959 "analysis_utils.c"
  }
#line 961 "analysis_utils.c"
}

#line 964 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0_10001(
#line 967 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 969 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 971 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3)
#line 973 "analysis_utils.c"
{
#line 975 "analysis_utils.c"
  {
#line 977 "analysis_utils.c"
    MR_bool analysis_utils__succeeded;

#line 980 "analysis_utils.c"
    {
#line 982 "analysis_utils.c"
      analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_1_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    }
#line 985 "analysis_utils.c"
    return analysis_utils__succeeded;
#line 987 "analysis_utils.c"
  }
#line 989 "analysis_utils.c"
}

#line 992 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0_10001(
#line 995 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 997 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 999 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3,
#line 1001 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_4)
#line 1003 "analysis_utils.c"
{
#line 1005 "analysis_utils.c"
  {
#line 1007 "analysis_utils.c"
    MR_Word analysis_utils__conv0_HeadVar__1_1;

#line 1010 "analysis_utils.c"
    {
#line 1012 "analysis_utils.c"
      analysis_utils____Compare____cost_and_callees_1_0(((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_3), ((MR_Word) analysis_utils__wrapper_arg_4));
    }
#line 1015 "analysis_utils.c"
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
#line 1017 "analysis_utils.c"
  }
#line 1019 "analysis_utils.c"
}

#line 1022 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0_10001(
#line 1025 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 1027 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2)
#line 1029 "analysis_utils.c"
{
#line 1031 "analysis_utils.c"
  {
#line 1033 "analysis_utils.c"
    MR_bool analysis_utils__succeeded;

#line 1036 "analysis_utils.c"
    {
#line 1038 "analysis_utils.c"
      analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    }
#line 1041 "analysis_utils.c"
    return analysis_utils__succeeded;
#line 1043 "analysis_utils.c"
  }
#line 1045 "analysis_utils.c"
}

#line 1048 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0_10001(
#line 1051 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 1053 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 1055 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3)
#line 1057 "analysis_utils.c"
{
#line 1059 "analysis_utils.c"
  {
#line 1061 "analysis_utils.c"
    MR_Word analysis_utils__conv0_HeadVar__1_1;

#line 1064 "analysis_utils.c"
    {
#line 1066 "analysis_utils.c"
      analysis_utils____Compare____cost_and_callees_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    }
#line 1069 "analysis_utils.c"
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
#line 1071 "analysis_utils.c"
  }
#line 1073 "analysis_utils.c"
}

#line 1076 "analysis_utils.c"
static MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0_10001(
#line 1079 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_1,
#line 1081 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2)
#line 1083 "analysis_utils.c"
{
#line 1085 "analysis_utils.c"
  {
#line 1087 "analysis_utils.c"
    MR_bool analysis_utils__succeeded;

#line 1090 "analysis_utils.c"
    {
#line 1092 "analysis_utils.c"
      analysis_utils__succeeded = analysis_utils____Unify____higher_order_0_0(((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2));
    }
#line 1095 "analysis_utils.c"
    return analysis_utils__succeeded;
#line 1097 "analysis_utils.c"
  }
#line 1099 "analysis_utils.c"
}

#line 1102 "analysis_utils.c"
static void MR_CALL 
analysis_utils____Compare____higher_order_0_0_10001(
#line 1105 "analysis_utils.c"
  MR_Box * analysis_utils__wrapper_arg_1,
#line 1107 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_2,
#line 1109 "analysis_utils.c"
  MR_Box analysis_utils__wrapper_arg_3)
#line 1111 "analysis_utils.c"
{
#line 1113 "analysis_utils.c"
  {
#line 1115 "analysis_utils.c"
    MR_Word analysis_utils__conv0_HeadVar__1_1;

#line 1118 "analysis_utils.c"
    {
#line 1120 "analysis_utils.c"
      analysis_utils____Compare____higher_order_0_0(&analysis_utils__conv0_HeadVar__1_1, ((MR_Word) analysis_utils__wrapper_arg_2), ((MR_Word) analysis_utils__wrapper_arg_3));
    }
#line 1123 "analysis_utils.c"
    *analysis_utils__wrapper_arg_1 = ((MR_Box) (analysis_utils__conv0_HeadVar__1_1));
#line 1125 "analysis_utils.c"
  }
#line 1127 "analysis_utils.c"
}

#line 272 "analysis_utils.m"
static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_f_0(
#line 272 "analysis_utils.m"
  MR_Float analysis_utils__MaxDepth_15,
#line 272 "analysis_utils.m"
  MR_Word analysis_utils__CostFn_17,
#line 272 "analysis_utils.m"
  MR_Integer analysis_utils__HeadVar__3_42)
#line 272 "analysis_utils.m"
{
#line 272 "analysis_utils.m"
  {
#line 272 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 272 "analysis_utils.m"
    MR_Word analysis_utils__HeadVar__4_43;
#line 272 "analysis_utils.m"
    MR_Integer analysis_utils__DepthI_22;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_44_44;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_45_45;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_46_46;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_47_47;
#line 274 "analysis_utils.m"
    MR_Box MR_CALL (* analysis_utils__func_0)(MR_Box, MR_Box);
#line 274 "analysis_utils.m"
    MR_Box analysis_utils__conv1_V_47_47;

#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__V_45_45 = mercury__float__float_1_f_0(analysis_utils__HeadVar__3_42);
    }
#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__V_44_44 = mercury__float__f_slash_2_f_0(analysis_utils__MaxDepth_15, analysis_utils__V_45_45);
    }
#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__DepthI_22 = mercury__float__round_to_int_1_f_0(analysis_utils__V_44_44);
    }
#line 274 "analysis_utils.m"
    {
#line 274 "analysis_utils.m"
      analysis_utils__V_46_46 = mercury__float__float_1_f_0(analysis_utils__HeadVar__3_42);
    }
#line 274 "analysis_utils.m"
    analysis_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), analysis_utils__CostFn_17, (MR_Integer) 1)));
#line 274 "analysis_utils.m"
    {
#line 274 "analysis_utils.m"
      analysis_utils__conv1_V_47_47 = analysis_utils__func_0(((MR_Box) analysis_utils__CostFn_17), ((MR_Box) (analysis_utils__DepthI_22)));
    }
#line 274 "analysis_utils.m"
    analysis_utils__V_47_47 = MR_unbox_float(analysis_utils__conv1_V_47_47);
#line 272 "analysis_utils.m"
    {
#line 272 "analysis_utils.m"
      return analysis_utils__HeadVar__4_43 = measurements__build_cs_cost_csq_percall_2_f_0(analysis_utils__V_46_46, analysis_utils__V_47_47);
    }
#line 272 "analysis_utils.m"
    return analysis_utils__HeadVar__4_43;
#line 272 "analysis_utils.m"
  }
#line 272 "analysis_utils.m"
}

#line 272 "analysis_utils.m"
static MR_Word MR_CALL 
analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_f_0(
#line 272 "analysis_utils.m"
  MR_Float analysis_utils__MaxDepth_15,
#line 272 "analysis_utils.m"
  MR_Word analysis_utils__CostFn_17,
#line 272 "analysis_utils.m"
  MR_Integer analysis_utils__HeadVar__3_42)
#line 272 "analysis_utils.m"
{
#line 272 "analysis_utils.m"
  {
#line 272 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 272 "analysis_utils.m"
    MR_Word analysis_utils__HeadVar__4_43;
#line 272 "analysis_utils.m"
    MR_Integer analysis_utils__DepthI_22;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_44_44;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_45_45;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_46_46;
#line 272 "analysis_utils.m"
    MR_Float analysis_utils__V_47_47;
#line 274 "analysis_utils.m"
    MR_Box MR_CALL (* analysis_utils__func_0)(MR_Box, MR_Box);
#line 274 "analysis_utils.m"
    MR_Box analysis_utils__conv1_V_47_47;

#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__V_45_45 = mercury__float__float_1_f_0(analysis_utils__HeadVar__3_42);
    }
#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__V_44_44 = mercury__float__f_slash_2_f_0(analysis_utils__MaxDepth_15, analysis_utils__V_45_45);
    }
#line 276 "analysis_utils.m"
    {
#line 276 "analysis_utils.m"
      analysis_utils__DepthI_22 = mercury__float__round_to_int_1_f_0(analysis_utils__V_44_44);
    }
#line 274 "analysis_utils.m"
    {
#line 274 "analysis_utils.m"
      analysis_utils__V_46_46 = mercury__float__float_1_f_0(analysis_utils__HeadVar__3_42);
    }
#line 274 "analysis_utils.m"
    analysis_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), analysis_utils__CostFn_17, (MR_Integer) 1)));
#line 274 "analysis_utils.m"
    {
#line 274 "analysis_utils.m"
      analysis_utils__conv1_V_47_47 = analysis_utils__func_0(((MR_Box) analysis_utils__CostFn_17), ((MR_Box) (analysis_utils__DepthI_22)));
    }
#line 274 "analysis_utils.m"
    analysis_utils__V_47_47 = MR_unbox_float(analysis_utils__conv1_V_47_47);
#line 272 "analysis_utils.m"
    {
#line 272 "analysis_utils.m"
      return analysis_utils__HeadVar__4_43 = measurements__build_cs_cost_csq_percall_2_f_0(analysis_utils__V_46_46, analysis_utils__V_47_47);
    }
#line 272 "analysis_utils.m"
    return analysis_utils__HeadVar__4_43;
#line 272 "analysis_utils.m"
  }
#line 272 "analysis_utils.m"
}

#line 134 "analysis_utils.m"
static MR_bool MR_CALL 
analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_p_0(
#line 134 "analysis_utils.m"
  MR_Word analysis_utils__FirstPDPtr_12,
#line 134 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_16)
#line 134 "analysis_utils.m"
{
#line 134 "analysis_utils.m"
  {
#line 134 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 134 "analysis_utils.m"
    MR_Integer analysis_utils__V_19_19 = (MR_Integer) analysis_utils__FirstPDPtr_12;
#line 134 "analysis_utils.m"
    MR_Integer analysis_utils__V_20_20 = (MR_Integer) analysis_utils__HeadVar__2_16;

#line 134 "analysis_utils.m"
    analysis_utils__succeeded = (analysis_utils__V_19_19 == analysis_utils__V_20_20);
#line 134 "analysis_utils.m"
    return analysis_utils__succeeded;
#line 134 "analysis_utils.m"
  }
#line 134 "analysis_utils.m"
}

#line 69 "analysis_utils.m"
void MR_CALL 
analysis_utils____Compare____higher_order_0_0(
#line 69 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__1_1,
#line 69 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2,
#line 69 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3)
#line 69 "analysis_utils.m"
{
#line 69 "analysis_utils.m"
  {
#line 69 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 69 "analysis_utils.m"
    MR_Integer analysis_utils__Cast_HeadVar1_4 = (MR_Integer) analysis_utils__HeadVar__2_2;
#line 69 "analysis_utils.m"
    MR_Integer analysis_utils__Cast_HeadVar2_5 = (MR_Integer) analysis_utils__HeadVar__3_3;

#line 69 "analysis_utils.m"
    {
#line 69 "analysis_utils.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__Cast_HeadVar1_4, analysis_utils__Cast_HeadVar2_5);
#line 69 "analysis_utils.m"
      return;
    }
#line 69 "analysis_utils.m"
  }
#line 69 "analysis_utils.m"
}

#line 69 "analysis_utils.m"
MR_bool MR_CALL 
analysis_utils____Unify____higher_order_0_0(
#line 69 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_1,
#line 69 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2)
#line 69 "analysis_utils.m"
{
#line 1344 "analysis_utils.c"
  {
#line 1346 "analysis_utils.c"
    MR_bool analysis_utils__succeeded = (analysis_utils__HeadVar__2_1 == analysis_utils__HeadVar__2_2);

#line 1349 "analysis_utils.c"
    return analysis_utils__succeeded;
#line 1351 "analysis_utils.c"
  }
#line 69 "analysis_utils.m"
}

#line 55 "analysis_utils.m"
void MR_CALL 
analysis_utils____Compare____cost_and_callees_1_0(
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__TypeInfo_for_Callee_17,
#line 55 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__1_1,
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2,
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3)
#line 55 "analysis_utils.m"
{
#line 55 "analysis_utils.m"
  {
#line 55 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 55 "analysis_utils.m"
    MR_Integer analysis_utils__CastX_15 = (MR_Integer) analysis_utils__HeadVar__2_2;
#line 55 "analysis_utils.m"
    MR_Integer analysis_utils__CastY_16 = (MR_Integer) analysis_utils__HeadVar__3_3;

#line 55 "analysis_utils.m"
    analysis_utils__succeeded = (analysis_utils__CastX_15 == analysis_utils__CastY_16);
#line 55 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 1382 "analysis_utils.c"
      *analysis_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "analysis_utils.m"
    else
#line 55 "analysis_utils.m"
      {
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "analysis_utils.m"
        MR_Integer analysis_utils__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "analysis_utils.m"
        MR_Integer analysis_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 3)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_12_12;

#line 55 "analysis_utils.m"
        {
#line 55 "analysis_utils.m"
          measurements____Compare____cs_cost_csq_0_0(&analysis_utils__V_12_12, analysis_utils__V_4_4, analysis_utils__V_8_8);
        }
#line 1412 "analysis_utils.c"
        analysis_utils__succeeded = (analysis_utils__V_12_12 == (MR_Integer) 0);
#line 55 "analysis_utils.m"
        analysis_utils__succeeded = !(analysis_utils__succeeded);
#line 55 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
          *analysis_utils__HeadVar__1_1 = analysis_utils__V_12_12;
#line 55 "analysis_utils.m"
        else
#line 55 "analysis_utils.m"
          {
#line 55 "analysis_utils.m"
            MR_Word analysis_utils__V_13_13;

#line 55 "analysis_utils.m"
            {
#line 55 "analysis_utils.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&analysis_utils__V_13_13, analysis_utils__V_5_5, analysis_utils__V_9_9);
            }
#line 1432 "analysis_utils.c"
            analysis_utils__succeeded = (analysis_utils__V_13_13 == (MR_Integer) 0);
#line 55 "analysis_utils.m"
            analysis_utils__succeeded = !(analysis_utils__succeeded);
#line 55 "analysis_utils.m"
            if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
              *analysis_utils__HeadVar__1_1 = analysis_utils__V_13_13;
#line 55 "analysis_utils.m"
            else
#line 55 "analysis_utils.m"
              {
#line 55 "analysis_utils.m"
                MR_Word analysis_utils__V_14_14;

#line 55 "analysis_utils.m"
                {
#line 55 "analysis_utils.m"
                  mercury__set_ordlist____Compare____set_ordlist_1_0(analysis_utils__TypeInfo_for_Callee_17, &analysis_utils__V_14_14, analysis_utils__V_6_6, analysis_utils__V_10_10);
                }
#line 1452 "analysis_utils.c"
                analysis_utils__succeeded = (analysis_utils__V_14_14 == (MR_Integer) 0);
#line 55 "analysis_utils.m"
                analysis_utils__succeeded = !(analysis_utils__succeeded);
#line 55 "analysis_utils.m"
                if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
                  *analysis_utils__HeadVar__1_1 = analysis_utils__V_14_14;
#line 55 "analysis_utils.m"
                else
#line 55 "analysis_utils.m"
                  {
#line 55 "analysis_utils.m"
                    MR_Integer analysis_utils__V_23_23 = (MR_Integer) analysis_utils__V_7_7;
#line 55 "analysis_utils.m"
                    MR_Integer analysis_utils__V_24_24 = (MR_Integer) analysis_utils__V_11_11;

#line 55 "analysis_utils.m"
                    {
#line 55 "analysis_utils.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__V_23_23, analysis_utils__V_24_24);
#line 55 "analysis_utils.m"
                      return;
                    }
#line 55 "analysis_utils.m"
                  }
#line 55 "analysis_utils.m"
              }
#line 55 "analysis_utils.m"
          }
#line 55 "analysis_utils.m"
      }
#line 55 "analysis_utils.m"
  }
#line 55 "analysis_utils.m"
}

#line 55 "analysis_utils.m"
MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_1_0(
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__TypeInfo_for_Callee_13,
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__1_1,
#line 55 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2)
#line 55 "analysis_utils.m"
{
#line 55 "analysis_utils.m"
  {
#line 55 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 55 "analysis_utils.m"
    MR_Integer analysis_utils__CastX_11 = (MR_Integer) analysis_utils__HeadVar__1_1;
#line 55 "analysis_utils.m"
    MR_Integer analysis_utils__CastY_12 = (MR_Integer) analysis_utils__HeadVar__2_2;

#line 55 "analysis_utils.m"
    analysis_utils__succeeded = (analysis_utils__CastX_11 == analysis_utils__CastY_12);
#line 55 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
      analysis_utils__succeeded = MR_TRUE;
#line 55 "analysis_utils.m"
    else
#line 55 "analysis_utils.m"
      {
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "analysis_utils.m"
        MR_Integer analysis_utils__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 3)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "analysis_utils.m"
        MR_Integer analysis_utils__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "analysis_utils.m"
        MR_Word analysis_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 3)));

#line 1536 "analysis_utils.c"
        {
#line 1538 "analysis_utils.c"
          analysis_utils__succeeded = measurements____Unify____cs_cost_csq_0_0(analysis_utils__V_3_3, analysis_utils__V_7_7);
        }
#line 55 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
          {
#line 1545 "analysis_utils.c"
            analysis_utils__succeeded = (analysis_utils__V_4_4 == analysis_utils__V_8_8);
#line 55 "analysis_utils.m"
            if (analysis_utils__succeeded)
#line 55 "analysis_utils.m"
              {
#line 1551 "analysis_utils.c"
                {
#line 1553 "analysis_utils.c"
                  analysis_utils__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(analysis_utils__TypeInfo_for_Callee_13, analysis_utils__V_5_5, analysis_utils__V_9_9);
                }
#line 55 "analysis_utils.m"
                if (analysis_utils__succeeded)
#line 1558 "analysis_utils.c"
                  analysis_utils__succeeded = (analysis_utils__V_6_6 == analysis_utils__V_10_10);
#line 55 "analysis_utils.m"
              }
#line 55 "analysis_utils.m"
          }
#line 55 "analysis_utils.m"
      }
#line 55 "analysis_utils.m"
    return analysis_utils__succeeded;
#line 55 "analysis_utils.m"
  }
#line 55 "analysis_utils.m"
}

#line 53 "analysis_utils.m"
void MR_CALL 
analysis_utils____Compare____cost_and_callees_0_0(
#line 53 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__1_1,
#line 53 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2,
#line 53 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3)
#line 53 "analysis_utils.m"
{
#line 53 "analysis_utils.m"
  {
#line 53 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 53 "analysis_utils.m"
    MR_Word analysis_utils__Cast_HeadVar1_4 = analysis_utils__HeadVar__2_2;
#line 53 "analysis_utils.m"
    MR_Word analysis_utils__Cast_HeadVar2_5 = analysis_utils__HeadVar__3_3;

#line 53 "analysis_utils.m"
    {
#line 53 "analysis_utils.m"
      mercury__builtin__compare_3_p_0((MR_Word) &analysis_utils_scalar_common_1[1], analysis_utils__HeadVar__1_1, ((MR_Box) (analysis_utils__Cast_HeadVar1_4)), ((MR_Box) (analysis_utils__Cast_HeadVar2_5)));
#line 53 "analysis_utils.m"
      return;
    }
#line 53 "analysis_utils.m"
  }
#line 53 "analysis_utils.m"
}

#line 53 "analysis_utils.m"
MR_bool MR_CALL 
analysis_utils____Unify____cost_and_callees_0_0(
#line 53 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__1_1,
#line 53 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2)
#line 53 "analysis_utils.m"
{
#line 53 "analysis_utils.m"
  {
#line 53 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 53 "analysis_utils.m"
    MR_Word analysis_utils__Cast_HeadVar1_3 = analysis_utils__HeadVar__1_1;
#line 53 "analysis_utils.m"
    MR_Word analysis_utils__Cast_HeadVar2_4 = analysis_utils__HeadVar__2_2;

#line 53 "analysis_utils.m"
    {
#line 53 "analysis_utils.m"
      return analysis_utils__succeeded = analysis_utils____Unify____cost_and_callees_1_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, analysis_utils__Cast_HeadVar1_3, analysis_utils__Cast_HeadVar2_4);
    }
#line 53 "analysis_utils.m"
    return analysis_utils__succeeded;
#line 53 "analysis_utils.m"
  }
#line 53 "analysis_utils.m"
}

#line 63 "analysis_utils.m"
void MR_CALL 
analysis_utils____Compare____callee_0_0(
#line 63 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__1_1,
#line 63 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2,
#line 63 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3)
#line 63 "analysis_utils.m"
{
#line 63 "analysis_utils.m"
  {
#line 63 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 63 "analysis_utils.m"
    MR_Integer analysis_utils__CastX_9 = (MR_Integer) analysis_utils__HeadVar__2_2;
#line 63 "analysis_utils.m"
    MR_Integer analysis_utils__CastY_10 = (MR_Integer) analysis_utils__HeadVar__3_3;

#line 63 "analysis_utils.m"
    analysis_utils__succeeded = (analysis_utils__CastX_9 == analysis_utils__CastY_10);
#line 63 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 1659 "analysis_utils.c"
      *analysis_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 63 "analysis_utils.m"
    else
#line 63 "analysis_utils.m"
      {
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_8_8;
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_13_13 = (MR_Integer) analysis_utils__V_4_4;
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_14_14 = (MR_Integer) analysis_utils__V_6_6;

#line 63 "analysis_utils.m"
        {
#line 63 "analysis_utils.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&analysis_utils__V_8_8, analysis_utils__V_13_13, analysis_utils__V_14_14);
        }
#line 1685 "analysis_utils.c"
        analysis_utils__succeeded = (analysis_utils__V_8_8 == (MR_Integer) 0);
#line 63 "analysis_utils.m"
        analysis_utils__succeeded = !(analysis_utils__succeeded);
#line 63 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 63 "analysis_utils.m"
          *analysis_utils__HeadVar__1_1 = analysis_utils__V_8_8;
#line 63 "analysis_utils.m"
        else
#line 63 "analysis_utils.m"
          {
#line 63 "analysis_utils.m"
            MR_Integer analysis_utils__V_15_15 = (MR_Integer) analysis_utils__V_5_5;
#line 63 "analysis_utils.m"
            MR_Integer analysis_utils__V_16_16 = (MR_Integer) analysis_utils__V_7_7;

#line 63 "analysis_utils.m"
            {
#line 63 "analysis_utils.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(analysis_utils__HeadVar__1_1, analysis_utils__V_15_15, analysis_utils__V_16_16);
#line 63 "analysis_utils.m"
              return;
            }
#line 63 "analysis_utils.m"
          }
#line 63 "analysis_utils.m"
      }
#line 63 "analysis_utils.m"
  }
#line 63 "analysis_utils.m"
}

#line 63 "analysis_utils.m"
MR_bool MR_CALL 
analysis_utils____Unify____callee_0_0(
#line 63 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__1_1,
#line 63 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2)
#line 63 "analysis_utils.m"
{
#line 63 "analysis_utils.m"
  {
#line 63 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 63 "analysis_utils.m"
    MR_Integer analysis_utils__CastX_7 = (MR_Integer) analysis_utils__HeadVar__1_1;
#line 63 "analysis_utils.m"
    MR_Integer analysis_utils__CastY_8 = (MR_Integer) analysis_utils__HeadVar__2_2;

#line 63 "analysis_utils.m"
    analysis_utils__succeeded = (analysis_utils__CastX_7 == analysis_utils__CastY_8);
#line 63 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 63 "analysis_utils.m"
      analysis_utils__succeeded = MR_TRUE;
#line 63 "analysis_utils.m"
    else
#line 63 "analysis_utils.m"
      {
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 63 "analysis_utils.m"
        MR_Word analysis_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_11_11 = (MR_Integer) analysis_utils__V_3_3;
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_12_12 = (MR_Integer) analysis_utils__V_5_5;
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_13_13;
#line 63 "analysis_utils.m"
        MR_Integer analysis_utils__V_14_14;

#line 1763 "analysis_utils.c"
        analysis_utils__succeeded = (analysis_utils__V_11_11 == analysis_utils__V_12_12);
#line 63 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 63 "analysis_utils.m"
          {
#line 1769 "analysis_utils.c"
            analysis_utils__V_13_13 = (MR_Integer) analysis_utils__V_4_4;
#line 1771 "analysis_utils.c"
            analysis_utils__V_14_14 = (MR_Integer) analysis_utils__V_6_6;
#line 1773 "analysis_utils.c"
            analysis_utils__succeeded = (analysis_utils__V_13_13 == analysis_utils__V_14_14);
#line 63 "analysis_utils.m"
          }
#line 63 "analysis_utils.m"
      }
#line 63 "analysis_utils.m"
    return analysis_utils__succeeded;
#line 63 "analysis_utils.m"
  }
#line 63 "analysis_utils.m"
}

#line 375 "analysis_utils.m"
static void MR_CALL 
analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(
#line 375 "analysis_utils.m"
  MR_Word analysis_utils__Deep_5,
#line 375 "analysis_utils.m"
  MR_Word analysis_utils__CSDPtr_6,
#line 375 "analysis_utils.m"
  MR_Integer * analysis_utils__Count_7,
#line 375 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeCallee_8)
#line 375 "analysis_utils.m"
{
#line 383 "analysis_utils.m"
  {
#line 383 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;

#line 379 "analysis_utils.m"
    {
#line 379 "analysis_utils.m"
      analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6);
    }
#line 383 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 380 "analysis_utils.m"
      {
#line 380 "analysis_utils.m"
        MR_Word analysis_utils__Own_9;

#line 380 "analysis_utils.m"
        {
#line 380 "analysis_utils.m"
          profile__deep_lookup_csd_own_3_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6, &analysis_utils__Own_9);
        }
#line 381 "analysis_utils.m"
        {
#line 381 "analysis_utils.m"
          *analysis_utils__Count_7 = measurements__calls_1_f_0(analysis_utils__Own_9);
        }
#line 382 "analysis_utils.m"
        {
#line 382 "analysis_utils.m"
          profile__deep_lookup_clique_maybe_child_3_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_6, analysis_utils__MaybeCallee_8);
#line 382 "analysis_utils.m"
          return;
        }
#line 380 "analysis_utils.m"
      }
#line 383 "analysis_utils.m"
    else
#line 384 "analysis_utils.m"
      {
#line 384 "analysis_utils.m"
        *analysis_utils__Count_7 = (MR_Integer) 0;
#line 385 "analysis_utils.m"
        *analysis_utils__MaybeCallee_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "analysis_utils.m"
      }
#line 383 "analysis_utils.m"
  }
#line 375 "analysis_utils.m"
}

#line 351 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_2(
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 351 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2)
#line 351 "analysis_utils.m"
{
#line 351 "analysis_utils.m"
  {
#line 351 "analysis_utils.m"
    MR_Box analysis_utils__wrapper_arg_3;
#line 351 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 351 "analysis_utils.m"
    MR_Integer analysis_utils__conv2_HeadVar__3_3;

#line 351 "analysis_utils.m"
    {
#line 351 "analysis_utils.m"
      analysis_utils__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) analysis_utils__wrapper_arg_1), ((MR_Integer) analysis_utils__wrapper_arg_2));
    }
#line 351 "analysis_utils.m"
    analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv2_HeadVar__3_3));
#line 351 "analysis_utils.m"
    return analysis_utils__wrapper_arg_3;
#line 351 "analysis_utils.m"
  }
#line 351 "analysis_utils.m"
}

#line 349 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_1(
#line 349 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 349 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 349 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 349 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3)
#line 349 "analysis_utils.m"
{
#line 349 "analysis_utils.m"
  {
#line 349 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 349 "analysis_utils.m"
    MR_Integer analysis_utils__conv1_Count_7;
#line 349 "analysis_utils.m"
    MR_Word analysis_utils__conv0_MaybeCallee_8;

#line 349 "analysis_utils.m"
    {
#line 349 "analysis_utils.m"
      analysis_utils__call_site_dynamic_get_count_and_callee_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv1_Count_7, &analysis_utils__conv0_MaybeCallee_8);
    }
#line 349 "analysis_utils.m"
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv1_Count_7));
#line 349 "analysis_utils.m"
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_MaybeCallee_8));
#line 349 "analysis_utils.m"
  }
#line 349 "analysis_utils.m"
}

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 353 "analysis_utils.m"
{
#line 353 "analysis_utils.m"
  {
#line 353 "analysis_utils.m"
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 353 "analysis_utils.m"
    MR_builtin_longjmp((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0, 1);
#line 353 "analysis_utils.m"
  }
#line 353 "analysis_utils.m"
}

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_5(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 353 "analysis_utils.m"
{
#line 353 "analysis_utils.m"
  {
#line 353 "analysis_utils.m"
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 353 "analysis_utils.m"
    (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 = ((MR_Word) (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28);
#line 353 "analysis_utils.m"
    {
#line 353 "analysis_utils.m"
      analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(analysis_utils__env_ptr);
#line 353 "analysis_utils.m"
      return;
    }
#line 353 "analysis_utils.m"
  }
#line 353 "analysis_utils.m"
}

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_4(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 353 "analysis_utils.m"
{
#line 353 "analysis_utils.m"
  {
#line 353 "analysis_utils.m"
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 1977 "analysis_utils.c"
    (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 372 "analysis_utils.m"
    if (((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
#line 372 "analysis_utils.m"
    else
#line 373 "analysis_utils.m"
      {
#line 373 "analysis_utils.m"
        MR_Word analysis_utils__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallee_28, (MR_Integer) 0)));

#line 373 "analysis_utils.m"
        {
#line 373 "analysis_utils.m"
          (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeCtorInfo_45_45, ((MR_Box) ((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (analysis_utils__V_50_50)));
        }
#line 373 "analysis_utils.m"
      }
#line 372 "analysis_utils.m"
    if ((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
#line 372 "analysis_utils.m"
      {
#line 372 "analysis_utils.m"
        analysis_utils__build_recursive_call_site_counts_map_5_p_0_3(analysis_utils__env_ptr);
#line 372 "analysis_utils.m"
        return;
      }
#line 353 "analysis_utils.m"
  }
#line 353 "analysis_utils.m"
}

#line 353 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(
#line 353 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 353 "analysis_utils.m"
{
#line 353 "analysis_utils.m"
  {
#line 353 "analysis_utils.m"
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 353 "analysis_utils.m"
    if (MR_builtin_setjmp((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__commit_0) == 0)
#line 353 "analysis_utils.m"
      {
#line 353 "analysis_utils.m"
        {
#line 353 "analysis_utils.m"
          mercury__list__member_2_p_1((analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41, &(analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__conv4_MaybeCallee_28, (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18, analysis_utils__build_recursive_call_site_counts_map_5_p_0_5, analysis_utils__env_ptr);
        }
#line 353 "analysis_utils.m"
        (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_FALSE;
#line 353 "analysis_utils.m"
      }
#line 353 "analysis_utils.m"
    else
#line 353 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
#line 353 "analysis_utils.m"
  }
#line 353 "analysis_utils.m"
}

#line 327 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_counts_map_5_p_0(
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__Deep_6,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__CliquePtr_7,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__3_3,
#line 327 "analysis_utils.m"
  MR_Word analysis_utils__STATE_VARIABLE_Map_0_21,
#line 327 "analysis_utils.m"
  MR_Word * analysis_utils__STATE_VARIABLE_Map_22)
#line 327 "analysis_utils.m"
{
#line 327 "analysis_utils.m"
  {
#line 327 "analysis_utils.m"
    struct analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0_s analysis_utils__env;

#line 327 "analysis_utils.m"
    (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7 = analysis_utils__CliquePtr_7;
#line 332 "analysis_utils.m"
    {
#line 332 "analysis_utils.m"
      MR_Word analysis_utils__CSSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 332 "analysis_utils.m"
      MR_Word analysis_utils__CSDSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__3_3, (MR_Integer) 1)));

#line 2074 "analysis_utils.c"
      if (((MR_tag((MR_Word) analysis_utils__CSDSlot_9)) == (MR_mktag((MR_Integer) 1))))
#line 2076 "analysis_utils.c"
        {
#line 2078 "analysis_utils.c"
          MR_Word analysis_utils__TypeCtorInfo_39_39;
#line 2080 "analysis_utils.c"
          MR_Word analysis_utils__TypeCtorInfo_40_40;
#line 2082 "analysis_utils.c"
          MR_Integer analysis_utils__Count_12;
#line 2084 "analysis_utils.c"
          MR_ArrayPtr analysis_utils__CSDPtrs_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), analysis_utils__CSDSlot_9, (MR_Integer) 1)));
#line 2086 "analysis_utils.c"
          MR_Word analysis_utils__Counts_17;
#line 2088 "analysis_utils.c"
          MR_Word analysis_utils__V_23_23;
#line 2090 "analysis_utils.c"
          MR_Word analysis_utils__V_24_24;
#line 348 "analysis_utils.m"
          MR_Word analysis_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__CSDSlot_9, (MR_Integer) 0)));
#line 351 "analysis_utils.m"
          MR_Box analysis_utils__conv3_Count_12;

#line 349 "analysis_utils.m"
          {
#line 349 "analysis_utils.m"
            analysis_utils__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 349 "analysis_utils.m"
            MR_hl_field(MR_mktag(0), analysis_utils__V_23_23, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[1]));
#line 349 "analysis_utils.m"
            MR_hl_field(MR_mktag(0), analysis_utils__V_23_23, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_counts_map_5_p_0_1));
#line 349 "analysis_utils.m"
            MR_hl_field(MR_mktag(0), analysis_utils__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 349 "analysis_utils.m"
            MR_hl_field(MR_mktag(0), analysis_utils__V_23_23, 3) = ((MR_Box) (analysis_utils__Deep_6));
#line 349 "analysis_utils.m"
          }
#line 2111 "analysis_utils.c"
          analysis_utils__TypeCtorInfo_39_39 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 349 "analysis_utils.m"
          {
#line 349 "analysis_utils.m"
            analysis_utils__V_24_24 = mercury__array__to_list_1_f_0(analysis_utils__TypeCtorInfo_39_39, (MR_ArrayPtr) analysis_utils__CSDPtrs_16);
          }
#line 2118 "analysis_utils.c"
          analysis_utils__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2120 "analysis_utils.c"
          (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41 = (MR_Word) &analysis_utils_scalar_common_1[2];
#line 349 "analysis_utils.m"
          {
#line 349 "analysis_utils.m"
            mercury__list__map2_4_p_0(analysis_utils__TypeCtorInfo_39_39, analysis_utils__TypeCtorInfo_40_40, (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__TypeInfo_41_41, analysis_utils__V_23_23, analysis_utils__V_24_24, &analysis_utils__Counts_17, &(analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__MaybeCallees_18);
          }
#line 351 "analysis_utils.m"
          {
#line 351 "analysis_utils.m"
            analysis_utils__conv3_Count_12 = mercury__list__foldl_3_f_0(analysis_utils__TypeCtorInfo_40_40, analysis_utils__TypeCtorInfo_40_40, (MR_Word) &analysis_utils_scalar_common_2[2], analysis_utils__Counts_17, ((MR_Box) ((MR_Integer) 0)));
          }
#line 351 "analysis_utils.m"
          analysis_utils__Count_12 = ((MR_Integer) analysis_utils__conv3_Count_12);
#line 353 "analysis_utils.m"
          {
#line 353 "analysis_utils.m"
            analysis_utils__build_recursive_call_site_counts_map_5_p_0_6(&analysis_utils__env);
          }
#line 2139 "analysis_utils.c"
          if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
#line 2141 "analysis_utils.c"
            {
#line 2143 "analysis_utils.c"
              MR_Word analysis_utils__CSS_19;
#line 2145 "analysis_utils.c"
              MR_Word analysis_utils__RevGoalPath_20;
#line 364 "analysis_utils.m"
              MR_Word analysis_utils__V_31_31;
#line 364 "analysis_utils.m"
              MR_Integer analysis_utils__V_32_32;
#line 364 "analysis_utils.m"
              MR_Word analysis_utils__V_33_33;
#line 364 "analysis_utils.m"
              MR_Integer analysis_utils__V_34_34;

#line 363 "analysis_utils.m"
              {
#line 363 "analysis_utils.m"
                profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_6, analysis_utils__CSSPtr_8, &analysis_utils__CSS_19);
              }
#line 364 "analysis_utils.m"
              analysis_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 0)));
#line 364 "analysis_utils.m"
              analysis_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 1)));
#line 364 "analysis_utils.m"
              analysis_utils__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 2)));
#line 364 "analysis_utils.m"
              analysis_utils__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 3)));
#line 364 "analysis_utils.m"
              analysis_utils__RevGoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_19, (MR_Integer) 4)));
#line 365 "analysis_utils.m"
              {
#line 365 "analysis_utils.m"
                mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (analysis_utils__RevGoalPath_20)), ((MR_Box) (analysis_utils__Count_12)), analysis_utils__STATE_VARIABLE_Map_0_21, analysis_utils__STATE_VARIABLE_Map_22);
#line 365 "analysis_utils.m"
                return;
              }
#line 2178 "analysis_utils.c"
            }
#line 2180 "analysis_utils.c"
          else
#line 367 "analysis_utils.m"
            *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
#line 2184 "analysis_utils.c"
        }
#line 2186 "analysis_utils.c"
      else
#line 2188 "analysis_utils.c"
        {
#line 2190 "analysis_utils.c"
          MR_Word analysis_utils__CSDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSDSlot_9, (MR_Integer) 0)));

#line 335 "analysis_utils.m"
          {
#line 335 "analysis_utils.m"
            (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11);
          }
#line 2198 "analysis_utils.c"
          if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
#line 2200 "analysis_utils.c"
            {
#line 2202 "analysis_utils.c"
              MR_Word analysis_utils__MaybeCallee_13;
#line 2204 "analysis_utils.c"
              MR_Integer analysis_utils__Count_87;

#line 379 "analysis_utils.m"
              {
#line 379 "analysis_utils.m"
                (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11);
              }
#line 383 "analysis_utils.m"
              if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
#line 380 "analysis_utils.m"
                {
#line 380 "analysis_utils.m"
                  MR_Word analysis_utils__Own_55;

#line 380 "analysis_utils.m"
                  {
#line 380 "analysis_utils.m"
                    profile__deep_lookup_csd_own_3_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11, &analysis_utils__Own_55);
                  }
#line 381 "analysis_utils.m"
                  {
#line 381 "analysis_utils.m"
                    analysis_utils__Count_87 = measurements__calls_1_f_0(analysis_utils__Own_55);
                  }
#line 382 "analysis_utils.m"
                  {
#line 382 "analysis_utils.m"
                    profile__deep_lookup_clique_maybe_child_3_p_0(analysis_utils__Deep_6, analysis_utils__CSDPtr_11, &analysis_utils__MaybeCallee_13);
                  }
#line 380 "analysis_utils.m"
                }
#line 383 "analysis_utils.m"
              else
#line 384 "analysis_utils.m"
                {
#line 384 "analysis_utils.m"
                  analysis_utils__Count_87 = (MR_Integer) 0;
#line 385 "analysis_utils.m"
                  analysis_utils__MaybeCallee_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "analysis_utils.m"
                }
#line 372 "analysis_utils.m"
              if ((analysis_utils__MaybeCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "analysis_utils.m"
                (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = MR_TRUE;
#line 372 "analysis_utils.m"
              else
#line 373 "analysis_utils.m"
                {
#line 373 "analysis_utils.m"
                  MR_Word analysis_utils__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeCallee_13, (MR_Integer) 0)));

#line 373 "analysis_utils.m"
                  {
#line 373 "analysis_utils.m"
                    (analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, ((MR_Box) ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__CliquePtr_7)), ((MR_Box) (analysis_utils__V_58_58)));
                  }
#line 373 "analysis_utils.m"
                }
#line 2264 "analysis_utils.c"
              if ((analysis_utils__env).analysis_utils__build_recursive_call_site_counts_map_5_p_0_env_0__succeeded)
#line 2266 "analysis_utils.c"
                {
#line 2268 "analysis_utils.c"
                  MR_Word analysis_utils__CSS_71;
#line 2270 "analysis_utils.c"
                  MR_Word analysis_utils__RevGoalPath_72;
#line 364 "analysis_utils.m"
                  MR_Word analysis_utils__V_67_67;
#line 364 "analysis_utils.m"
                  MR_Integer analysis_utils__V_68_68;
#line 364 "analysis_utils.m"
                  MR_Word analysis_utils__V_69_69;
#line 364 "analysis_utils.m"
                  MR_Integer analysis_utils__V_70_70;

#line 363 "analysis_utils.m"
                  {
#line 363 "analysis_utils.m"
                    profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_6, analysis_utils__CSSPtr_8, &analysis_utils__CSS_71);
                  }
#line 364 "analysis_utils.m"
                  analysis_utils__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 0)));
#line 364 "analysis_utils.m"
                  analysis_utils__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 1)));
#line 364 "analysis_utils.m"
                  analysis_utils__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 2)));
#line 364 "analysis_utils.m"
                  analysis_utils__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 3)));
#line 364 "analysis_utils.m"
                  analysis_utils__RevGoalPath_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_71, (MR_Integer) 4)));
#line 365 "analysis_utils.m"
                  {
#line 365 "analysis_utils.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (analysis_utils__RevGoalPath_72)), ((MR_Box) (analysis_utils__Count_87)), analysis_utils__STATE_VARIABLE_Map_0_21, analysis_utils__STATE_VARIABLE_Map_22);
#line 365 "analysis_utils.m"
                    return;
                  }
#line 2303 "analysis_utils.c"
                }
#line 2305 "analysis_utils.c"
              else
#line 367 "analysis_utils.m"
                *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
#line 2309 "analysis_utils.c"
            }
#line 2311 "analysis_utils.c"
          else
#line 367 "analysis_utils.m"
            *analysis_utils__STATE_VARIABLE_Map_22 = analysis_utils__STATE_VARIABLE_Map_0_21;
#line 2315 "analysis_utils.c"
        }
#line 332 "analysis_utils.m"
    }
#line 327 "analysis_utils.m"
  }
#line 327 "analysis_utils.m"
}

#line 194 "analysis_utils.m"
static void MR_CALL 
analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(
#line 194 "analysis_utils.m"
  MR_Word analysis_utils__Deep_6,
#line 194 "analysis_utils.m"
  MR_Word analysis_utils__CSDPtr_7,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__HeadVar__3_3,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__Own_9,
#line 194 "analysis_utils.m"
  MR_Word * analysis_utils__Inherit_10)
#line 194 "analysis_utils.m"
{
#line 199 "analysis_utils.m"
  {
#line 199 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 199 "analysis_utils.m"
    MR_Word analysis_utils__CalleeCliquePtr_8;
#line 199 "analysis_utils.m"
    MR_Word analysis_utils__CSD_11;
#line 199 "analysis_utils.m"
    MR_Word analysis_utils__PDPtr_12;
#line 199 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
#line 199 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_14_14;
#line 199 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_15_15;
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
#line 200 "analysis_utils.m"
    MR_String analysis_utils__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
#line 200 "analysis_utils.m"
    MR_String analysis_utils__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
#line 200 "analysis_utils.m"
    MR_String analysis_utils__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
#line 200 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
#line 200 "analysis_utils.m"
    MR_Word analysis_utils__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_44_44;
#line 201 "analysis_utils.m"
    MR_String analysis_utils__V_45_45;
#line 201 "analysis_utils.m"
    MR_String analysis_utils__V_46_46;
#line 201 "analysis_utils.m"
    MR_String analysis_utils__V_47_47;
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_48_48;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_49_49;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_50_50;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_51_51;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_52_52;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_53_53;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_54_54;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_55_55;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_56_56;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_57_57;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_58_58;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_59_59;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_60_60;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_61_61;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_62_62;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_63_63;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_64_64;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_65_65;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_66_66;
#line 201 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_67_67;
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_68_68;
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_69_69;
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_70_70;
#line 201 "analysis_utils.m"
    MR_Word analysis_utils__V_71_71;
#line 202 "analysis_utils.m"
    MR_Word analysis_utils__V_72_72;
#line 202 "analysis_utils.m"
    MR_Word analysis_utils__V_73_73;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_74_74;
#line 203 "analysis_utils.m"
    MR_String analysis_utils__V_75_75;
#line 203 "analysis_utils.m"
    MR_String analysis_utils__V_76_76;
#line 203 "analysis_utils.m"
    MR_String analysis_utils__V_77_77;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_78_78;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_79_79;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_80_80;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_81_81;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_82_82;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_83_83;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_84_84;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_85_85;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_86_86;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_87_87;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_88_88;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_89_89;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_90_90;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_91_91;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_92_92;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_93_93;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_94_94;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_95_95;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_96_96;
#line 203 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_97_97;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_98_98;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_99_99;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_100_100;
#line 203 "analysis_utils.m"
    MR_Word analysis_utils__V_101_101;
#line 204 "analysis_utils.m"
    MR_Word analysis_utils__V_102_102;
#line 204 "analysis_utils.m"
    MR_Word analysis_utils__V_103_103;

#line 200 "analysis_utils.m"
    {
#line 200 "analysis_utils.m"
      profile__lookup_call_site_dynamics_3_p_0(analysis_utils__V_13_13, analysis_utils__CSDPtr_7, &analysis_utils__CSD_11);
    }
#line 201 "analysis_utils.m"
    analysis_utils__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
#line 201 "analysis_utils.m"
    analysis_utils__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
#line 201 "analysis_utils.m"
    analysis_utils__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
#line 201 "analysis_utils.m"
    analysis_utils__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
#line 201 "analysis_utils.m"
    analysis_utils__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
#line 201 "analysis_utils.m"
    analysis_utils__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
#line 201 "analysis_utils.m"
    analysis_utils__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
#line 201 "analysis_utils.m"
    analysis_utils__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
#line 201 "analysis_utils.m"
    analysis_utils__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
#line 201 "analysis_utils.m"
    analysis_utils__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
#line 201 "analysis_utils.m"
    analysis_utils__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
#line 201 "analysis_utils.m"
    analysis_utils__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
#line 201 "analysis_utils.m"
    analysis_utils__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
#line 201 "analysis_utils.m"
    analysis_utils__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
#line 201 "analysis_utils.m"
    analysis_utils__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
#line 201 "analysis_utils.m"
    analysis_utils__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
#line 201 "analysis_utils.m"
    analysis_utils__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
#line 201 "analysis_utils.m"
    analysis_utils__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
#line 201 "analysis_utils.m"
    analysis_utils__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
#line 201 "analysis_utils.m"
    analysis_utils__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
#line 201 "analysis_utils.m"
    analysis_utils__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
#line 201 "analysis_utils.m"
    analysis_utils__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
#line 201 "analysis_utils.m"
    analysis_utils__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
#line 201 "analysis_utils.m"
    analysis_utils__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
#line 201 "analysis_utils.m"
    analysis_utils__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
#line 201 "analysis_utils.m"
    analysis_utils__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
#line 201 "analysis_utils.m"
    analysis_utils__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
#line 201 "analysis_utils.m"
    analysis_utils__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
#line 201 "analysis_utils.m"
    analysis_utils__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
#line 201 "analysis_utils.m"
    {
#line 201 "analysis_utils.m"
      profile__lookup_csd_desc_3_p_0(analysis_utils__V_14_14, analysis_utils__CSDPtr_7, analysis_utils__Inherit_10);
    }
#line 202 "analysis_utils.m"
    analysis_utils__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 0)));
#line 202 "analysis_utils.m"
    analysis_utils__PDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 1)));
#line 202 "analysis_utils.m"
    analysis_utils__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 2)));
#line 203 "analysis_utils.m"
    analysis_utils__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 0)));
#line 203 "analysis_utils.m"
    analysis_utils__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 1)));
#line 203 "analysis_utils.m"
    analysis_utils__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 2)));
#line 203 "analysis_utils.m"
    analysis_utils__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 3)));
#line 203 "analysis_utils.m"
    analysis_utils__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 4)));
#line 203 "analysis_utils.m"
    analysis_utils__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 5)));
#line 203 "analysis_utils.m"
    analysis_utils__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 6)));
#line 203 "analysis_utils.m"
    analysis_utils__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 7)));
#line 203 "analysis_utils.m"
    analysis_utils__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 8)));
#line 203 "analysis_utils.m"
    analysis_utils__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 9)));
#line 203 "analysis_utils.m"
    analysis_utils__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 10)));
#line 203 "analysis_utils.m"
    analysis_utils__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 11)));
#line 203 "analysis_utils.m"
    analysis_utils__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 12)));
#line 203 "analysis_utils.m"
    analysis_utils__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 13)));
#line 203 "analysis_utils.m"
    analysis_utils__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 14)));
#line 203 "analysis_utils.m"
    analysis_utils__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 15)));
#line 203 "analysis_utils.m"
    analysis_utils__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 16)));
#line 203 "analysis_utils.m"
    analysis_utils__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 17)));
#line 203 "analysis_utils.m"
    analysis_utils__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 18)));
#line 203 "analysis_utils.m"
    analysis_utils__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 19)));
#line 203 "analysis_utils.m"
    analysis_utils__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 20)));
#line 203 "analysis_utils.m"
    analysis_utils__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 21)));
#line 203 "analysis_utils.m"
    analysis_utils__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 22)));
#line 203 "analysis_utils.m"
    analysis_utils__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 23)));
#line 203 "analysis_utils.m"
    analysis_utils__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 24)));
#line 203 "analysis_utils.m"
    analysis_utils__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 25)));
#line 203 "analysis_utils.m"
    analysis_utils__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 26)));
#line 203 "analysis_utils.m"
    analysis_utils__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 27)));
#line 203 "analysis_utils.m"
    analysis_utils__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_6, (MR_Integer) 28)));
#line 203 "analysis_utils.m"
    {
#line 203 "analysis_utils.m"
      profile__lookup_clique_index_3_p_0(analysis_utils__V_15_15, analysis_utils__PDPtr_12, &analysis_utils__CalleeCliquePtr_8);
    }
#line 199 "analysis_utils.m"
    {
#line 199 "analysis_utils.m"
      MR_Word base;
#line 199 "analysis_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "analysis_utils.m"
      *analysis_utils__HeadVar__3_3 = base;
#line 199 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__CalleeCliquePtr_8));
#line 199 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (analysis_utils__CSDPtr_7));
#line 199 "analysis_utils.m"
    }
#line 204 "analysis_utils.m"
    analysis_utils__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 0)));
#line 204 "analysis_utils.m"
    analysis_utils__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 1)));
#line 204 "analysis_utils.m"
    *analysis_utils__Own_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSD_11, (MR_Integer) 2)));
#line 199 "analysis_utils.m"
  }
#line 194 "analysis_utils.m"
}

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_1(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 419 "analysis_utils.m"
{
#line 419 "analysis_utils.m"
  {
#line 419 "analysis_utils.m"
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 419 "analysis_utils.m"
    MR_builtin_longjmp((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0, 1);
#line 419 "analysis_utils.m"
  }
#line 419 "analysis_utils.m"
}

#line 421 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_3(
#line 421 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 421 "analysis_utils.m"
{
#line 421 "analysis_utils.m"
  {
#line 421 "analysis_utils.m"
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 421 "analysis_utils.m"
    (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6 = ((MR_Word) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6);
#line 421 "analysis_utils.m"
    {
#line 421 "analysis_utils.m"
      analysis_utils__cost_and_callees_is_recursive_2_p_0_2(analysis_utils__env_ptr);
#line 421 "analysis_utils.m"
      return;
    }
#line 421 "analysis_utils.m"
  }
#line 421 "analysis_utils.m"
}

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_2(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 419 "analysis_utils.m"
{
#line 419 "analysis_utils.m"
  {
#line 419 "analysis_utils.m"
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 419 "analysis_utils.m"
    {
#line 422 "analysis_utils.m"
      MR_Word analysis_utils__V_10_10;

#line 422 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 0)));
#line 422 "analysis_utils.m"
      analysis_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__Callee_6, (MR_Integer) 1)));
#line 422 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_14_14 = (MR_Integer) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3;
#line 422 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_15_15 = (MR_Integer) (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_12_12;
#line 422 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = ((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_14_14 == (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__V_15_15);
#line 422 "analysis_utils.m"
      if ((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded)
#line 422 "analysis_utils.m"
        {
#line 422 "analysis_utils.m"
          analysis_utils__cost_and_callees_is_recursive_2_p_0_1(analysis_utils__env_ptr);
#line 422 "analysis_utils.m"
          return;
        }
#line 419 "analysis_utils.m"
    }
#line 419 "analysis_utils.m"
  }
#line 419 "analysis_utils.m"
}

#line 419 "analysis_utils.m"
static void MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0_4(
#line 419 "analysis_utils.m"
  void * analysis_utils__env_ptr_arg)
#line 419 "analysis_utils.m"
{
#line 419 "analysis_utils.m"
  {
#line 419 "analysis_utils.m"
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s * analysis_utils__env_ptr = (struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s *) analysis_utils__env_ptr_arg;

#line 419 "analysis_utils.m"
    if (MR_builtin_setjmp((analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__commit_0) == 0)
#line 419 "analysis_utils.m"
      {
#line 419 "analysis_utils.m"
        {
#line 419 "analysis_utils.m"
          MR_Word analysis_utils__Callees_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 2)));
#line 420 "analysis_utils.m"
          MR_Word analysis_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 0)));
#line 420 "analysis_utils.m"
          MR_Integer analysis_utils__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 1)));
#line 420 "analysis_utils.m"
          MR_Word analysis_utils__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4, (MR_Integer) 3)));

#line 421 "analysis_utils.m"
          {
#line 421 "analysis_utils.m"
            mercury__set__member_2_p_1((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, &(analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__conv0_Callee_6, analysis_utils__Callees_5, analysis_utils__cost_and_callees_is_recursive_2_p_0_3, analysis_utils__env_ptr);
          }
#line 419 "analysis_utils.m"
        }
#line 419 "analysis_utils.m"
        (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_FALSE;
#line 419 "analysis_utils.m"
      }
#line 419 "analysis_utils.m"
    else
#line 419 "analysis_utils.m"
      (analysis_utils__env_ptr)->analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded = MR_TRUE;
#line 419 "analysis_utils.m"
  }
#line 419 "analysis_utils.m"
}

#line 103 "analysis_utils.m"
MR_bool MR_CALL 
analysis_utils__cost_and_callees_is_recursive_2_p_0(
#line 103 "analysis_utils.m"
  MR_Word analysis_utils__ParentCliquePtr_3,
#line 103 "analysis_utils.m"
  MR_Word analysis_utils__CostAndCallees_4)
#line 103 "analysis_utils.m"
{
#line 103 "analysis_utils.m"
  {
#line 103 "analysis_utils.m"
    struct analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0_s analysis_utils__env;

#line 103 "analysis_utils.m"
    (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__ParentCliquePtr_3 = analysis_utils__ParentCliquePtr_3;
#line 103 "analysis_utils.m"
    (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__CostAndCallees_4 = analysis_utils__CostAndCallees_4;
#line 419 "analysis_utils.m"
    {
#line 419 "analysis_utils.m"
      analysis_utils__cost_and_callees_is_recursive_2_p_0_4(&analysis_utils__env);
    }
#line 419 "analysis_utils.m"
    return (analysis_utils__env).analysis_utils__cost_and_callees_is_recursive_2_p_0_env_0__succeeded;
#line 103 "analysis_utils.m"
  }
#line 103 "analysis_utils.m"
}

#line 98 "analysis_utils.m"
void MR_CALL 
analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(
#line 98 "analysis_utils.m"
  MR_Word analysis_utils__Deep_4,
#line 98 "analysis_utils.m"
  MR_Word analysis_utils__PDPtr_5,
#line 98 "analysis_utils.m"
  MR_Word * analysis_utils__PairedSlots_6)
#line 98 "analysis_utils.m"
{
#line 407 "analysis_utils.m"
  {
#line 407 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__TypeCtorInfo_29_29;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__TypeCtorInfo_30_30;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__PD_7;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__PSPtr_8;
#line 407 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__CSDArray_9;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__PS_10;
#line 407 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__CSSArray_11;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__CSDSlots_12;
#line 407 "analysis_utils.m"
    MR_Word analysis_utils__CSSSlots_13;
#line 409 "analysis_utils.m"
    MR_Word analysis_utils__V_15_15;
#line 412 "analysis_utils.m"
    MR_Word analysis_utils__V_18_18;
#line 412 "analysis_utils.m"
    MR_String analysis_utils__V_19_19;
#line 412 "analysis_utils.m"
    MR_String analysis_utils__V_20_20;
#line 412 "analysis_utils.m"
    MR_String analysis_utils__V_21_21;
#line 412 "analysis_utils.m"
    MR_String analysis_utils__V_22_22;
#line 412 "analysis_utils.m"
    MR_String analysis_utils__V_23_23;
#line 412 "analysis_utils.m"
    MR_Integer analysis_utils__V_24_24;
#line 412 "analysis_utils.m"
    MR_Word analysis_utils__V_25_25;
#line 412 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_26_26;
#line 412 "analysis_utils.m"
    MR_Word analysis_utils__V_27_27;
#line 412 "analysis_utils.m"
    MR_Word analysis_utils__V_28_28;

#line 408 "analysis_utils.m"
    {
#line 408 "analysis_utils.m"
      profile__deep_lookup_proc_dynamics_3_p_0(analysis_utils__Deep_4, analysis_utils__PDPtr_5, &analysis_utils__PD_7);
    }
#line 409 "analysis_utils.m"
    analysis_utils__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 0)));
#line 409 "analysis_utils.m"
    analysis_utils__CSDArray_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 1)));
#line 409 "analysis_utils.m"
    analysis_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PD_7, (MR_Integer) 2)));
#line 411 "analysis_utils.m"
    {
#line 411 "analysis_utils.m"
      profile__deep_lookup_proc_statics_3_p_0(analysis_utils__Deep_4, analysis_utils__PSPtr_8, &analysis_utils__PS_10);
    }
#line 412 "analysis_utils.m"
    analysis_utils__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 0)));
#line 412 "analysis_utils.m"
    analysis_utils__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 1)));
#line 412 "analysis_utils.m"
    analysis_utils__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 2)));
#line 412 "analysis_utils.m"
    analysis_utils__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 3)));
#line 412 "analysis_utils.m"
    analysis_utils__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 4)));
#line 412 "analysis_utils.m"
    analysis_utils__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 5)));
#line 412 "analysis_utils.m"
    analysis_utils__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 6)));
#line 412 "analysis_utils.m"
    analysis_utils__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 7)));
#line 412 "analysis_utils.m"
    analysis_utils__CSSArray_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 8)));
#line 412 "analysis_utils.m"
    analysis_utils__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 9)));
#line 412 "analysis_utils.m"
    analysis_utils__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 10)));
#line 412 "analysis_utils.m"
    analysis_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_10, (MR_Integer) 11)));
#line 2957 "analysis_utils.c"
    analysis_utils__TypeCtorInfo_29_29 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 413 "analysis_utils.m"
    {
#line 413 "analysis_utils.m"
      mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_29_29, (MR_ArrayPtr) analysis_utils__CSDArray_9, &analysis_utils__CSDSlots_12);
    }
#line 2964 "analysis_utils.c"
    analysis_utils__TypeCtorInfo_30_30 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 414 "analysis_utils.m"
    {
#line 414 "analysis_utils.m"
      mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_30_30, (MR_ArrayPtr) analysis_utils__CSSArray_11, &analysis_utils__CSSSlots_13);
    }
#line 415 "analysis_utils.m"
    {
#line 415 "analysis_utils.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(analysis_utils__TypeCtorInfo_30_30, analysis_utils__TypeCtorInfo_29_29, analysis_utils__CSSSlots_13, analysis_utils__CSDSlots_12, analysis_utils__PairedSlots_6);
#line 415 "analysis_utils.m"
      return;
    }
#line 407 "analysis_utils.m"
  }
#line 98 "analysis_utils.m"
}

#line 272 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_2(
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1)
#line 272 "analysis_utils.m"
{
#line 272 "analysis_utils.m"
  {
#line 272 "analysis_utils.m"
    MR_Box analysis_utils__wrapper_arg_2;
#line 272 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 272 "analysis_utils.m"
    MR_Word analysis_utils__conv2_HeadVar__4_43;

#line 272 "analysis_utils.m"
    {
#line 272 "analysis_utils.m"
      analysis_utils__conv2_HeadVar__4_43 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Integer) analysis_utils__wrapper_arg_1));
    }
#line 272 "analysis_utils.m"
    analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_HeadVar__4_43));
#line 272 "analysis_utils.m"
    return analysis_utils__wrapper_arg_2;
#line 272 "analysis_utils.m"
  }
#line 272 "analysis_utils.m"
}

#line 324 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1_1(
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2,
#line 324 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3)
#line 324 "analysis_utils.m"
{
#line 324 "analysis_utils.m"
  {
#line 324 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 324 "analysis_utils.m"
    MR_Word analysis_utils__conv0_STATE_VARIABLE_Map_22;

#line 324 "analysis_utils.m"
    {
#line 324 "analysis_utils.m"
      analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), &analysis_utils__conv0_STATE_VARIABLE_Map_22);
    }
#line 324 "analysis_utils.m"
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_STATE_VARIABLE_Map_22));
#line 324 "analysis_utils.m"
  }
#line 324 "analysis_utils.m"
}

#line 94 "analysis_utils.m"
void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_1(
#line 94 "analysis_utils.m"
  MR_Word analysis_utils__Deep_7,
#line 94 "analysis_utils.m"
  MR_Word analysis_utils__CliquePtr_8,
#line 94 "analysis_utils.m"
  MR_Word analysis_utils__PDPtr_9,
#line 94 "analysis_utils.m"
  MR_Word analysis_utils__RecursionType_10,
#line 94 "analysis_utils.m"
  MR_Word analysis_utils__MaybeDepth_11,
#line 94 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeRecursiveCallSiteCostMap_12)
#line 94 "analysis_utils.m"
{
#line 260 "analysis_utils.m"
  {
#line 260 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;

#line 260 "analysis_utils.m"
    if ((analysis_utils__RecursionType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "analysis_utils.m"
      {
#line 260 "analysis_utils.m"
        MR_Word analysis_utils__V_61_61;

#line 261 "analysis_utils.m"
        {
#line 261 "analysis_utils.m"
          analysis_utils__V_61_61 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
        }
#line 261 "analysis_utils.m"
        {
#line 261 "analysis_utils.m"
          MR_Word base;
#line 261 "analysis_utils.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 261 "analysis_utils.m"
          *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 261 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__V_61_61));
#line 261 "analysis_utils.m"
        }
#line 260 "analysis_utils.m"
      }
#line 260 "analysis_utils.m"
    else
#line 260 "analysis_utils.m"
      if (((MR_tag((MR_Word) analysis_utils__RecursionType_10)) == (MR_mktag((MR_Integer) 1))))
#line 263 "analysis_utils.m"
        {
#line 263 "analysis_utils.m"
          MR_Float analysis_utils__MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 2)));
#line 263 "analysis_utils.m"
          MR_Word analysis_utils__CostFn_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 4)));
#line 263 "analysis_utils.m"
          MR_Word analysis_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 0)));
#line 263 "analysis_utils.m"
          MR_Word analysis_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 1)));
#line 263 "analysis_utils.m"
          MR_Float analysis_utils___AvgRecCost_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 3)));

#line 293 "analysis_utils.m"
          if ((analysis_utils__MaybeDepth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "analysis_utils.m"
            {
#line 295 "analysis_utils.m"
              {
#line 295 "analysis_utils.m"
                mercury__require__unexpected_2_p_0((MR_String) "analysis_utils", (MR_String) "Expected valid depth for known recursion type");
#line 295 "analysis_utils.m"
                return;
              }
#line 294 "analysis_utils.m"
            }
#line 293 "analysis_utils.m"
          else
#line 265 "analysis_utils.m"
            {
#line 265 "analysis_utils.m"
              MR_Word analysis_utils__Depth0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeDepth_11, (MR_Integer) 0)));

#line 266 "analysis_utils.m"
              {
#line 266 "analysis_utils.m"
                analysis_utils__succeeded = measurements__recursion_depth_is_base_case_1_p_0(analysis_utils__Depth0_18);
              }
#line 268 "analysis_utils.m"
              if (analysis_utils__succeeded)
#line 267 "analysis_utils.m"
                {
#line 267 "analysis_utils.m"
                  MR_Word analysis_utils__V_40_40;

#line 267 "analysis_utils.m"
                  {
#line 267 "analysis_utils.m"
                    analysis_utils__V_40_40 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
                  }
#line 267 "analysis_utils.m"
                  {
#line 267 "analysis_utils.m"
                    MR_Word base;
#line 267 "analysis_utils.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "analysis_utils.m"
                    *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 267 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__V_40_40));
#line 267 "analysis_utils.m"
                  }
#line 267 "analysis_utils.m"
                }
#line 268 "analysis_utils.m"
              else
#line 271 "analysis_utils.m"
                {
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__CallCountsMap_19;
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__RecursiveCallSiteCostMap_20;
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__V_41_41;
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__SiteSlots_76;
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__V_77_77;
#line 271 "analysis_utils.m"
                  MR_Word analysis_utils__V_78_78;
#line 324 "analysis_utils.m"
                  MR_Box analysis_utils__conv1_CallCountsMap_19;

#line 323 "analysis_utils.m"
                  {
#line 323 "analysis_utils.m"
                    analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(analysis_utils__Deep_7, analysis_utils__PDPtr_9, &analysis_utils__SiteSlots_76);
                  }
#line 324 "analysis_utils.m"
                  {
#line 324 "analysis_utils.m"
                    analysis_utils__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 324 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
#line 324 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_1));
#line 324 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 324 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 3) = ((MR_Box) (analysis_utils__Deep_7));
#line 324 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 4) = ((MR_Box) (analysis_utils__CliquePtr_8));
#line 324 "analysis_utils.m"
                  }
#line 324 "analysis_utils.m"
                  {
#line 324 "analysis_utils.m"
                    analysis_utils__V_78_78 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
                  }
#line 324 "analysis_utils.m"
                  {
#line 324 "analysis_utils.m"
                    mercury__list__foldl_4_p_0((MR_Word) &analysis_utils_scalar_common_2[0], (MR_Word) &analysis_utils_scalar_common_2[1], analysis_utils__V_77_77, analysis_utils__SiteSlots_76, ((MR_Box) (analysis_utils__V_78_78)), &analysis_utils__conv1_CallCountsMap_19);
                  }
#line 324 "analysis_utils.m"
                  analysis_utils__CallCountsMap_19 = ((MR_Word) analysis_utils__conv1_CallCountsMap_19);
#line 272 "analysis_utils.m"
                  {
#line 272 "analysis_utils.m"
                    analysis_utils__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 272 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
#line 272 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_1_2));
#line 272 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 3) = MR_box_float(analysis_utils__MaxDepth_15);
#line 272 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 4) = ((MR_Box) (analysis_utils__CostFn_17));
#line 272 "analysis_utils.m"
                  }
#line 272 "analysis_utils.m"
                  {
#line 272 "analysis_utils.m"
                    analysis_utils__RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, analysis_utils__V_41_41, analysis_utils__CallCountsMap_19);
                  }
#line 279 "analysis_utils.m"
                  {
#line 279 "analysis_utils.m"
                    MR_Word base;
#line 279 "analysis_utils.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "analysis_utils.m"
                    *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 279 "analysis_utils.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__RecursiveCallSiteCostMap_20));
#line 279 "analysis_utils.m"
                  }
#line 271 "analysis_utils.m"
                }
#line 265 "analysis_utils.m"
            }
#line 263 "analysis_utils.m"
        }
#line 260 "analysis_utils.m"
      else
#line 303 "analysis_utils.m"
        {
#line 303 "analysis_utils.m"
          MR_String analysis_utils__Error_34;

#line 309 "analysis_utils.m"
          if (((((MR_tag((MR_Word) analysis_utils__RecursionType_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 313 "analysis_utils.m"
            {
#line 313 "analysis_utils.m"
              MR_Word analysis_utils__Errors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 1)));

#line 314 "analysis_utils.m"
              {
#line 314 "analysis_utils.m"
                analysis_utils__Error_34 = mercury__string__join_list_2_f_0((MR_String) "; and ", analysis_utils__Errors_36);
              }
#line 313 "analysis_utils.m"
            }
#line 309 "analysis_utils.m"
          else
#line 309 "analysis_utils.m"
            if (((((MR_tag((MR_Word) analysis_utils__RecursionType_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), analysis_utils__RecursionType_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 311 "analysis_utils.m"
              analysis_utils__Error_34 = (MR_String) "Could not detect recursion type";
#line 309 "analysis_utils.m"
            else
#line 308 "analysis_utils.m"
              analysis_utils__Error_34 = (MR_String) "No average recursion depth for this recursion type";
#line 316 "analysis_utils.m"
          {
#line 316 "analysis_utils.m"
            MR_Word base;
#line 316 "analysis_utils.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "analysis_utils.m"
            *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 316 "analysis_utils.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis_utils__Error_34));
#line 316 "analysis_utils.m"
          }
#line 303 "analysis_utils.m"
        }
#line 260 "analysis_utils.m"
  }
#line 94 "analysis_utils.m"
}

#line 272 "analysis_utils.m"
static MR_Box MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_2(
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 272 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1)
#line 272 "analysis_utils.m"
{
#line 272 "analysis_utils.m"
  {
#line 272 "analysis_utils.m"
    MR_Box analysis_utils__wrapper_arg_2;
#line 272 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 272 "analysis_utils.m"
    MR_Word analysis_utils__conv2_HeadVar__4_43;

#line 272 "analysis_utils.m"
    {
#line 272 "analysis_utils.m"
      analysis_utils__conv2_HeadVar__4_43 = analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Integer) analysis_utils__wrapper_arg_1));
    }
#line 272 "analysis_utils.m"
    analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_HeadVar__4_43));
#line 272 "analysis_utils.m"
    return analysis_utils__wrapper_arg_2;
#line 272 "analysis_utils.m"
  }
#line 272 "analysis_utils.m"
}

#line 324 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0_1(
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 324 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_2,
#line 324 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3)
#line 324 "analysis_utils.m"
{
#line 324 "analysis_utils.m"
  {
#line 324 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 324 "analysis_utils.m"
    MR_Word analysis_utils__conv0_STATE_VARIABLE_Map_22;

#line 324 "analysis_utils.m"
    {
#line 324 "analysis_utils.m"
      analysis_utils__build_recursive_call_site_counts_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 4))), ((MR_Word) analysis_utils__wrapper_arg_1), ((MR_Word) analysis_utils__wrapper_arg_2), &analysis_utils__conv0_STATE_VARIABLE_Map_22);
    }
#line 324 "analysis_utils.m"
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv0_STATE_VARIABLE_Map_22));
#line 324 "analysis_utils.m"
  }
#line 324 "analysis_utils.m"
}

#line 91 "analysis_utils.m"
void MR_CALL 
analysis_utils__build_recursive_call_site_cost_map_6_p_0(
#line 91 "analysis_utils.m"
  MR_Word analysis_utils__Deep_7,
#line 91 "analysis_utils.m"
  MR_Word analysis_utils__CliquePtr_8,
#line 91 "analysis_utils.m"
  MR_Word analysis_utils__PDPtr_9,
#line 91 "analysis_utils.m"
  MR_Word analysis_utils__RecursionType_10,
#line 91 "analysis_utils.m"
  MR_Word analysis_utils__MaybeDepth_11,
#line 91 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeRecursiveCallSiteCostMap_12)
#line 91 "analysis_utils.m"
{
#line 260 "analysis_utils.m"
  {
#line 260 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;

#line 260 "analysis_utils.m"
    if ((analysis_utils__RecursionType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "analysis_utils.m"
      {
#line 260 "analysis_utils.m"
        MR_Word analysis_utils__V_61_61;

#line 261 "analysis_utils.m"
        {
#line 261 "analysis_utils.m"
          analysis_utils__V_61_61 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
        }
#line 261 "analysis_utils.m"
        {
#line 261 "analysis_utils.m"
          MR_Word base;
#line 261 "analysis_utils.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 261 "analysis_utils.m"
          *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 261 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__V_61_61));
#line 261 "analysis_utils.m"
        }
#line 260 "analysis_utils.m"
      }
#line 260 "analysis_utils.m"
    else
#line 263 "analysis_utils.m"
      {
#line 263 "analysis_utils.m"
        MR_Float analysis_utils__MaxDepth_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 2)));
#line 263 "analysis_utils.m"
        MR_Word analysis_utils__CostFn_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 4)));
#line 263 "analysis_utils.m"
        MR_Word analysis_utils__Depth0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__MaybeDepth_11, (MR_Integer) 0)));
#line 263 "analysis_utils.m"
        MR_Word analysis_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 0)));
#line 263 "analysis_utils.m"
        MR_Word analysis_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 1)));
#line 263 "analysis_utils.m"
        MR_Float analysis_utils___AvgRecCost_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), analysis_utils__RecursionType_10, (MR_Integer) 3)));

#line 266 "analysis_utils.m"
        {
#line 266 "analysis_utils.m"
          analysis_utils__succeeded = measurements__recursion_depth_is_base_case_1_p_0(analysis_utils__Depth0_18);
        }
#line 268 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 267 "analysis_utils.m"
          {
#line 267 "analysis_utils.m"
            MR_Word analysis_utils__V_40_40;

#line 267 "analysis_utils.m"
            {
#line 267 "analysis_utils.m"
              analysis_utils__V_40_40 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0);
            }
#line 267 "analysis_utils.m"
            {
#line 267 "analysis_utils.m"
              MR_Word base;
#line 267 "analysis_utils.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "analysis_utils.m"
              *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 267 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__V_40_40));
#line 267 "analysis_utils.m"
            }
#line 267 "analysis_utils.m"
          }
#line 268 "analysis_utils.m"
        else
#line 271 "analysis_utils.m"
          {
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__CallCountsMap_19;
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__RecursiveCallSiteCostMap_20;
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__V_41_41;
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__SiteSlots_76;
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__V_77_77;
#line 271 "analysis_utils.m"
            MR_Word analysis_utils__V_78_78;
#line 324 "analysis_utils.m"
            MR_Box analysis_utils__conv1_CallCountsMap_19;

#line 323 "analysis_utils.m"
            {
#line 323 "analysis_utils.m"
              analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(analysis_utils__Deep_7, analysis_utils__PDPtr_9, &analysis_utils__SiteSlots_76);
            }
#line 324 "analysis_utils.m"
            {
#line 324 "analysis_utils.m"
              analysis_utils__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 324 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[1]));
#line 324 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_1));
#line 324 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 324 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 3) = ((MR_Box) (analysis_utils__Deep_7));
#line 324 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_77_77, 4) = ((MR_Box) (analysis_utils__CliquePtr_8));
#line 324 "analysis_utils.m"
            }
#line 324 "analysis_utils.m"
            {
#line 324 "analysis_utils.m"
              analysis_utils__V_78_78 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
            }
#line 324 "analysis_utils.m"
            {
#line 324 "analysis_utils.m"
              mercury__list__foldl_4_p_0((MR_Word) &analysis_utils_scalar_common_2[0], (MR_Word) &analysis_utils_scalar_common_2[1], analysis_utils__V_77_77, analysis_utils__SiteSlots_76, ((MR_Box) (analysis_utils__V_78_78)), &analysis_utils__conv1_CallCountsMap_19);
            }
#line 324 "analysis_utils.m"
            analysis_utils__CallCountsMap_19 = ((MR_Word) analysis_utils__conv1_CallCountsMap_19);
#line 272 "analysis_utils.m"
            {
#line 272 "analysis_utils.m"
              analysis_utils__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 272 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 0) = ((MR_Box) (&analysis_utils_scalar_common_6[0]));
#line 272 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 1) = ((MR_Box) (analysis_utils__build_recursive_call_site_cost_map_6_p_0_2));
#line 272 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 272 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 3) = MR_box_float(analysis_utils__MaxDepth_15);
#line 272 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), analysis_utils__V_41_41, 4) = ((MR_Box) (analysis_utils__CostFn_17));
#line 272 "analysis_utils.m"
            }
#line 272 "analysis_utils.m"
            {
#line 272 "analysis_utils.m"
              analysis_utils__RecursiveCallSiteCostMap_20 = mercury__map__map_values_only_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, analysis_utils__V_41_41, analysis_utils__CallCountsMap_19);
            }
#line 279 "analysis_utils.m"
            {
#line 279 "analysis_utils.m"
              MR_Word base;
#line 279 "analysis_utils.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "analysis_utils.m"
              *analysis_utils__MaybeRecursiveCallSiteCostMap_12 = base;
#line 279 "analysis_utils.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__RecursiveCallSiteCostMap_20));
#line 279 "analysis_utils.m"
            }
#line 271 "analysis_utils.m"
          }
#line 263 "analysis_utils.m"
      }
#line 260 "analysis_utils.m"
  }
#line 91 "analysis_utils.m"
}

#line 179 "analysis_utils.m"
static void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1(
#line 179 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 179 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_2,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_3,
#line 179 "analysis_utils.m"
  MR_Box * analysis_utils__wrapper_arg_4)
#line 179 "analysis_utils.m"
{
#line 179 "analysis_utils.m"
  {
#line 179 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;
#line 179 "analysis_utils.m"
    MR_Word analysis_utils__conv2_HeadVar__3_3;
#line 179 "analysis_utils.m"
    MR_Word analysis_utils__conv1_Own_9;
#line 179 "analysis_utils.m"
    MR_Word analysis_utils__conv0_Inherit_10;

#line 179 "analysis_utils.m"
    {
#line 179 "analysis_utils.m"
      analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1), &analysis_utils__conv2_HeadVar__3_3, &analysis_utils__conv1_Own_9, &analysis_utils__conv0_Inherit_10);
    }
#line 179 "analysis_utils.m"
    *analysis_utils__wrapper_arg_2 = ((MR_Box) (analysis_utils__conv2_HeadVar__3_3));
#line 179 "analysis_utils.m"
    *analysis_utils__wrapper_arg_3 = ((MR_Box) (analysis_utils__conv1_Own_9));
#line 179 "analysis_utils.m"
    *analysis_utils__wrapper_arg_4 = ((MR_Box) (analysis_utils__conv0_Inherit_10));
#line 179 "analysis_utils.m"
  }
#line 179 "analysis_utils.m"
}

#line 78 "analysis_utils.m"
void MR_CALL 
analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(
#line 78 "analysis_utils.m"
  MR_Word analysis_utils__Deep_5,
#line 78 "analysis_utils.m"
  MR_Word analysis_utils__HeadVar__2_2,
#line 78 "analysis_utils.m"
  MR_Word analysis_utils__STATE_VARIABLE_CallSitesMap_0_25,
#line 78 "analysis_utils.m"
  MR_Word * analysis_utils__STATE_VARIABLE_CallSitesMap_26)
#line 78 "analysis_utils.m"
{
#line 161 "analysis_utils.m"
  {
#line 161 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__CSSPtr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__CostCsq_13;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__Callees_14;
#line 161 "analysis_utils.m"
    MR_Integer analysis_utils__Exits_15;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__CostAndCallees_21;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__HigherOrder_22;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__CSS_23;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__RevGoalPath_24;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__V_41_41;
#line 161 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_42_42;
#line 161 "analysis_utils.m"
    MR_Word analysis_utils__V_43_43;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_47_47;
#line 189 "analysis_utils.m"
    MR_String analysis_utils__V_48_48;
#line 189 "analysis_utils.m"
    MR_String analysis_utils__V_49_49;
#line 189 "analysis_utils.m"
    MR_String analysis_utils__V_50_50;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_51_51;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_52_52;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_53_53;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_54_54;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_55_55;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_56_56;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_57_57;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_58_58;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_59_59;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_60_60;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_61_61;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_62_62;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_63_63;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_64_64;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_65_65;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_66_66;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_67_67;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_68_68;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_69_69;
#line 189 "analysis_utils.m"
    MR_ArrayPtr analysis_utils__V_70_70;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_71_71;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_72_72;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_73_73;
#line 189 "analysis_utils.m"
    MR_Word analysis_utils__V_74_74;
#line 190 "analysis_utils.m"
    MR_Word analysis_utils__V_75_75;
#line 190 "analysis_utils.m"
    MR_Integer analysis_utils__V_76_76;
#line 190 "analysis_utils.m"
    MR_Integer analysis_utils__V_77_77;

#line 176 "analysis_utils.m"
    if (((MR_tag((MR_Word) analysis_utils__Slot_7)) == (MR_mktag((MR_Integer) 1))))
#line 177 "analysis_utils.m"
      {
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__TypeCtorInfo_83_83 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 177 "analysis_utils.m"
        MR_ArrayPtr analysis_utils__CSDPtrsArray_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), analysis_utils__Slot_7, (MR_Integer) 1)));
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__CSDPtrs_18;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__Owns_19;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__Inherits_20;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__V_27_27;
#line 177 "analysis_utils.m"
        MR_Integer analysis_utils__V_28_28;
#line 177 "analysis_utils.m"
        MR_Float analysis_utils__V_29_29;
#line 177 "analysis_utils.m"
        MR_Integer analysis_utils__V_30_30;
#line 177 "analysis_utils.m"
        MR_Integer analysis_utils__V_31_31;
#line 177 "analysis_utils.m"
        MR_Integer analysis_utils__V_32_32;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__Own_45;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__Inherit_46;
#line 177 "analysis_utils.m"
        MR_Word analysis_utils__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__Slot_7, (MR_Integer) 0)));

#line 178 "analysis_utils.m"
        {
#line 178 "analysis_utils.m"
          mercury__array__to_list_2_p_0(analysis_utils__TypeCtorInfo_83_83, (MR_ArrayPtr) analysis_utils__CSDPtrsArray_17, &analysis_utils__CSDPtrs_18);
        }
#line 179 "analysis_utils.m"
        {
#line 179 "analysis_utils.m"
          analysis_utils__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 179 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_27_27, 0) = ((MR_Box) (&analysis_utils_scalar_common_5[0]));
#line 179 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_27_27, 1) = ((MR_Box) (analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0_1));
#line 179 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 179 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_27_27, 3) = ((MR_Box) (analysis_utils__Deep_5));
#line 179 "analysis_utils.m"
        }
#line 179 "analysis_utils.m"
        {
#line 179 "analysis_utils.m"
          mercury__list__map3_5_p_0(analysis_utils__TypeCtorInfo_83_83, (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, analysis_utils__V_27_27, analysis_utils__CSDPtrs_18, &analysis_utils__Callees_14, &analysis_utils__Owns_19, &analysis_utils__Inherits_20);
        }
#line 181 "analysis_utils.m"
        {
#line 181 "analysis_utils.m"
          analysis_utils__Own_45 = measurements__sum_own_infos_1_f_0(analysis_utils__Owns_19);
        }
#line 182 "analysis_utils.m"
        {
#line 182 "analysis_utils.m"
          analysis_utils__Inherit_46 = measurements__sum_inherit_infos_1_f_0(analysis_utils__Inherits_20);
        }
#line 183 "analysis_utils.m"
        {
#line 183 "analysis_utils.m"
          analysis_utils__V_28_28 = measurements__calls_1_f_0(analysis_utils__Own_45);
        }
#line 184 "analysis_utils.m"
        {
#line 184 "analysis_utils.m"
          analysis_utils__V_31_31 = measurements__callseqs_1_f_0(analysis_utils__Own_45);
        }
#line 184 "analysis_utils.m"
        {
#line 184 "analysis_utils.m"
          analysis_utils__V_32_32 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_46);
        }
#line 184 "analysis_utils.m"
        analysis_utils__V_30_30 = (analysis_utils__V_31_31 + analysis_utils__V_32_32);
#line 183 "analysis_utils.m"
        {
#line 183 "analysis_utils.m"
          analysis_utils__V_29_29 = mercury__float__float_1_f_0(analysis_utils__V_30_30);
        }
#line 183 "analysis_utils.m"
        {
#line 183 "analysis_utils.m"
          analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__V_28_28, analysis_utils__V_29_29);
        }
#line 185 "analysis_utils.m"
        {
#line 185 "analysis_utils.m"
          analysis_utils__Exits_15 = measurements__exits_1_f_0(analysis_utils__Own_45);
        }
#line 177 "analysis_utils.m"
      }
#line 176 "analysis_utils.m"
    else
#line 163 "analysis_utils.m"
      {
#line 163 "analysis_utils.m"
        MR_Word analysis_utils__CSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Slot_7, (MR_Integer) 0)));

#line 164 "analysis_utils.m"
        {
#line 164 "analysis_utils.m"
          analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_9);
        }
#line 171 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 166 "analysis_utils.m"
          {
#line 166 "analysis_utils.m"
            MR_Word analysis_utils__Callee_10;
#line 166 "analysis_utils.m"
            MR_Word analysis_utils__Own_11;
#line 166 "analysis_utils.m"
            MR_Word analysis_utils__Inherit_12;
#line 166 "analysis_utils.m"
            MR_Integer analysis_utils__V_33_33;
#line 166 "analysis_utils.m"
            MR_Float analysis_utils__V_34_34;
#line 166 "analysis_utils.m"
            MR_Integer analysis_utils__V_35_35;
#line 166 "analysis_utils.m"
            MR_Integer analysis_utils__V_36_36;
#line 166 "analysis_utils.m"
            MR_Integer analysis_utils__V_37_37;

#line 165 "analysis_utils.m"
            {
#line 165 "analysis_utils.m"
              analysis_utils__call_site_dynamic_get_callee_and_costs_5_p_0(analysis_utils__Deep_5, analysis_utils__CSDPtr_9, &analysis_utils__Callee_10, &analysis_utils__Own_11, &analysis_utils__Inherit_12);
            }
#line 167 "analysis_utils.m"
            {
#line 167 "analysis_utils.m"
              analysis_utils__V_33_33 = measurements__calls_1_f_0(analysis_utils__Own_11);
            }
#line 168 "analysis_utils.m"
            {
#line 168 "analysis_utils.m"
              analysis_utils__V_36_36 = measurements__callseqs_1_f_0(analysis_utils__Own_11);
            }
#line 168 "analysis_utils.m"
            {
#line 168 "analysis_utils.m"
              analysis_utils__V_37_37 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_12);
            }
#line 168 "analysis_utils.m"
            analysis_utils__V_35_35 = (analysis_utils__V_36_36 + analysis_utils__V_37_37);
#line 167 "analysis_utils.m"
            {
#line 167 "analysis_utils.m"
              analysis_utils__V_34_34 = mercury__float__float_1_f_0(analysis_utils__V_35_35);
            }
#line 167 "analysis_utils.m"
            {
#line 167 "analysis_utils.m"
              analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__V_33_33, analysis_utils__V_34_34);
            }
#line 169 "analysis_utils.m"
            {
#line 169 "analysis_utils.m"
              analysis_utils__Callees_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "analysis_utils.m"
              MR_hl_field(MR_mktag(1), analysis_utils__Callees_14, 0) = ((MR_Box) (analysis_utils__Callee_10));
#line 169 "analysis_utils.m"
              MR_hl_field(MR_mktag(1), analysis_utils__Callees_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "analysis_utils.m"
            }
#line 170 "analysis_utils.m"
            {
#line 170 "analysis_utils.m"
              analysis_utils__Exits_15 = measurements__exits_1_f_0(analysis_utils__Own_11);
            }
#line 166 "analysis_utils.m"
          }
#line 171 "analysis_utils.m"
        else
#line 172 "analysis_utils.m"
          {
#line 172 "analysis_utils.m"
            {
#line 172 "analysis_utils.m"
              analysis_utils__CostCsq_13 = measurements__build_cs_cost_csq_2_f_0((MR_Integer) 0, (MR_Float) 0.0000000000000000);
            }
#line 173 "analysis_utils.m"
            analysis_utils__Callees_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "analysis_utils.m"
            analysis_utils__Exits_15 = (MR_Integer) 0;
#line 172 "analysis_utils.m"
          }
#line 163 "analysis_utils.m"
      }
#line 187 "analysis_utils.m"
    {
#line 187 "analysis_utils.m"
      analysis_utils__V_41_41 = mercury__set__set_1_f_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, analysis_utils__Callees_14);
    }
#line 189 "analysis_utils.m"
    analysis_utils__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 0)));
#line 189 "analysis_utils.m"
    analysis_utils__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 1)));
#line 189 "analysis_utils.m"
    analysis_utils__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 2)));
#line 189 "analysis_utils.m"
    analysis_utils__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 3)));
#line 189 "analysis_utils.m"
    analysis_utils__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 4)));
#line 189 "analysis_utils.m"
    analysis_utils__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 5)));
#line 189 "analysis_utils.m"
    analysis_utils__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 6)));
#line 189 "analysis_utils.m"
    analysis_utils__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 7)));
#line 189 "analysis_utils.m"
    analysis_utils__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 8)));
#line 189 "analysis_utils.m"
    analysis_utils__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 9)));
#line 189 "analysis_utils.m"
    analysis_utils__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 10)));
#line 189 "analysis_utils.m"
    analysis_utils__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 11)));
#line 189 "analysis_utils.m"
    analysis_utils__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 12)));
#line 189 "analysis_utils.m"
    analysis_utils__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 13)));
#line 189 "analysis_utils.m"
    analysis_utils__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 14)));
#line 189 "analysis_utils.m"
    analysis_utils__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 15)));
#line 189 "analysis_utils.m"
    analysis_utils__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 16)));
#line 189 "analysis_utils.m"
    analysis_utils__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 17)));
#line 189 "analysis_utils.m"
    analysis_utils__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 18)));
#line 189 "analysis_utils.m"
    analysis_utils__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 19)));
#line 189 "analysis_utils.m"
    analysis_utils__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 20)));
#line 189 "analysis_utils.m"
    analysis_utils__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 21)));
#line 189 "analysis_utils.m"
    analysis_utils__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 22)));
#line 189 "analysis_utils.m"
    analysis_utils__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 23)));
#line 189 "analysis_utils.m"
    analysis_utils__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 24)));
#line 189 "analysis_utils.m"
    analysis_utils__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 25)));
#line 189 "analysis_utils.m"
    analysis_utils__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 26)));
#line 189 "analysis_utils.m"
    analysis_utils__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 27)));
#line 189 "analysis_utils.m"
    analysis_utils__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__Deep_5, (MR_Integer) 28)));
#line 189 "analysis_utils.m"
    {
#line 189 "analysis_utils.m"
      profile__lookup_call_site_statics_3_p_0(analysis_utils__V_42_42, analysis_utils__CSSPtr_6, &analysis_utils__CSS_23);
    }
#line 190 "analysis_utils.m"
    analysis_utils__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 0)));
#line 190 "analysis_utils.m"
    analysis_utils__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 1)));
#line 190 "analysis_utils.m"
    analysis_utils__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 2)));
#line 190 "analysis_utils.m"
    analysis_utils__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 3)));
#line 190 "analysis_utils.m"
    analysis_utils__RevGoalPath_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_23, (MR_Integer) 4)));
#line 213 "analysis_utils.m"
    if ((((analysis_utils__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((MR_tag((MR_Word) analysis_utils__V_43_43)) == (MR_mktag((MR_Integer) 1))))))
#line 214 "analysis_utils.m"
      analysis_utils__HigherOrder_22 = (MR_Integer) 0;
#line 213 "analysis_utils.m"
    else
#line 220 "analysis_utils.m"
      analysis_utils__HigherOrder_22 = (MR_Integer) 1;
#line 187 "analysis_utils.m"
    {
#line 187 "analysis_utils.m"
      analysis_utils__CostAndCallees_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 0) = ((MR_Box) (analysis_utils__CostCsq_13));
#line 187 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 1) = ((MR_Box) (analysis_utils__Exits_15));
#line 187 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 2) = ((MR_Box) (analysis_utils__V_41_41));
#line 187 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_21, 3) = ((MR_Box) (analysis_utils__HigherOrder_22));
#line 187 "analysis_utils.m"
    }
#line 192 "analysis_utils.m"
    {
#line 192 "analysis_utils.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &analysis_utils_scalar_common_1[1], ((MR_Box) (analysis_utils__RevGoalPath_24)), ((MR_Box) (analysis_utils__CostAndCallees_21)), analysis_utils__STATE_VARIABLE_CallSitesMap_0_25, analysis_utils__STATE_VARIABLE_CallSitesMap_26);
#line 192 "analysis_utils.m"
      return;
    }
#line 161 "analysis_utils.m"
  }
#line 78 "analysis_utils.m"
}

#line 73 "analysis_utils.m"
void MR_CALL 
analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(
#line 73 "analysis_utils.m"
  MR_Word analysis_utils__Deep_5,
#line 73 "analysis_utils.m"
  MR_Word analysis_utils__CSSPtr_6,
#line 73 "analysis_utils.m"
  MR_Word analysis_utils__STATE_VARIABLE_CallSitesMap_0_20,
#line 73 "analysis_utils.m"
  MR_Word * analysis_utils__STATE_VARIABLE_CallSitesMap_21)
#line 73 "analysis_utils.m"
{
#line 234 "analysis_utils.m"
  {
#line 234 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__CSS_8;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__Own_9;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__Inherit_10;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__CostCsq_11;
#line 234 "analysis_utils.m"
    MR_Integer analysis_utils__Exits_12;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__KindAndCallee_13;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__HigherOrder_14;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__Callees_17;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__CostAndCallees_18;
#line 234 "analysis_utils.m"
    MR_Word analysis_utils__RevGoalPath_19;
#line 234 "analysis_utils.m"
    MR_Integer analysis_utils__V_22_22;
#line 234 "analysis_utils.m"
    MR_Float analysis_utils__V_23_23;
#line 234 "analysis_utils.m"
    MR_Integer analysis_utils__V_24_24;
#line 234 "analysis_utils.m"
    MR_Integer analysis_utils__V_25_25;
#line 234 "analysis_utils.m"
    MR_Integer analysis_utils__V_26_26;
#line 241 "analysis_utils.m"
    MR_Word analysis_utils__V_30_30;
#line 241 "analysis_utils.m"
    MR_Integer analysis_utils__V_31_31;
#line 241 "analysis_utils.m"
    MR_Integer analysis_utils__V_32_32;

#line 235 "analysis_utils.m"
    {
#line 235 "analysis_utils.m"
      profile__deep_lookup_call_site_statics_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__CSS_8);
    }
#line 236 "analysis_utils.m"
    {
#line 236 "analysis_utils.m"
      profile__deep_lookup_css_own_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__Own_9);
    }
#line 237 "analysis_utils.m"
    {
#line 237 "analysis_utils.m"
      profile__deep_lookup_css_desc_3_p_0(analysis_utils__Deep_5, analysis_utils__CSSPtr_6, &analysis_utils__Inherit_10);
    }
#line 238 "analysis_utils.m"
    {
#line 238 "analysis_utils.m"
      analysis_utils__V_22_22 = measurements__calls_1_f_0(analysis_utils__Own_9);
    }
#line 239 "analysis_utils.m"
    {
#line 239 "analysis_utils.m"
      analysis_utils__V_25_25 = measurements__callseqs_1_f_0(analysis_utils__Own_9);
    }
#line 239 "analysis_utils.m"
    {
#line 239 "analysis_utils.m"
      analysis_utils__V_26_26 = measurements__inherit_callseqs_1_f_0(analysis_utils__Inherit_10);
    }
#line 239 "analysis_utils.m"
    analysis_utils__V_24_24 = (analysis_utils__V_25_25 + analysis_utils__V_26_26);
#line 238 "analysis_utils.m"
    {
#line 238 "analysis_utils.m"
      analysis_utils__V_23_23 = mercury__float__float_1_f_0(analysis_utils__V_24_24);
    }
#line 238 "analysis_utils.m"
    {
#line 238 "analysis_utils.m"
      analysis_utils__CostCsq_11 = measurements__build_cs_cost_csq_2_f_0(analysis_utils__V_22_22, analysis_utils__V_23_23);
    }
#line 240 "analysis_utils.m"
    {
#line 240 "analysis_utils.m"
      analysis_utils__Exits_12 = measurements__exits_1_f_0(analysis_utils__Own_9);
    }
#line 241 "analysis_utils.m"
    analysis_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 0)));
#line 241 "analysis_utils.m"
    analysis_utils__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 1)));
#line 241 "analysis_utils.m"
    analysis_utils__KindAndCallee_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 2)));
#line 241 "analysis_utils.m"
    analysis_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 3)));
#line 241 "analysis_utils.m"
    analysis_utils__RevGoalPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__CSS_8, (MR_Integer) 4)));
#line 213 "analysis_utils.m"
    if ((((analysis_utils__KindAndCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((MR_tag((MR_Word) analysis_utils__KindAndCallee_13)) == (MR_mktag((MR_Integer) 1))))))
#line 214 "analysis_utils.m"
      analysis_utils__HigherOrder_14 = (MR_Integer) 0;
#line 213 "analysis_utils.m"
    else
#line 220 "analysis_utils.m"
      analysis_utils__HigherOrder_14 = (MR_Integer) 1;
#line 4135 "analysis_utils.c"
    if ((analysis_utils__KindAndCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4137 "analysis_utils.c"
      {
#line 249 "analysis_utils.m"
        {
#line 249 "analysis_utils.m"
          analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
        }
#line 4144 "analysis_utils.c"
      }
#line 4146 "analysis_utils.c"
    else
#line 4148 "analysis_utils.c"
      if ((analysis_utils__KindAndCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4150 "analysis_utils.c"
        {
#line 249 "analysis_utils.m"
          {
#line 249 "analysis_utils.m"
            analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
          }
#line 4157 "analysis_utils.c"
        }
#line 4159 "analysis_utils.c"
      else
#line 4161 "analysis_utils.c"
        if ((analysis_utils__KindAndCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4163 "analysis_utils.c"
          {
#line 249 "analysis_utils.m"
            {
#line 249 "analysis_utils.m"
              analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
            }
#line 4170 "analysis_utils.c"
          }
#line 4172 "analysis_utils.c"
        else
#line 4174 "analysis_utils.c"
          if ((analysis_utils__KindAndCallee_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4176 "analysis_utils.c"
            {
#line 249 "analysis_utils.m"
              {
#line 249 "analysis_utils.m"
                analysis_utils__Callees_17 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0);
              }
#line 4183 "analysis_utils.c"
            }
#line 4185 "analysis_utils.c"
          else
#line 4187 "analysis_utils.c"
            {
#line 4189 "analysis_utils.c"
              MR_Word analysis_utils__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis_utils__KindAndCallee_13, (MR_Integer) 0)));
#line 4191 "analysis_utils.c"
              MR_Word analysis_utils__V_27_27;
#line 226 "analysis_utils.m"
              MR_String analysis_utils__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis_utils__KindAndCallee_13, (MR_Integer) 1)));

#line 246 "analysis_utils.m"
              {
#line 246 "analysis_utils.m"
                analysis_utils__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "analysis_utils.m"
                MR_hl_field(MR_mktag(1), analysis_utils__V_27_27, 0) = ((MR_Box) (analysis_utils__Callee_16));
#line 246 "analysis_utils.m"
                MR_hl_field(MR_mktag(1), analysis_utils__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "analysis_utils.m"
              }
#line 246 "analysis_utils.m"
              {
#line 246 "analysis_utils.m"
                analysis_utils__Callees_17 = mercury__set__set_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, analysis_utils__V_27_27);
              }
#line 4211 "analysis_utils.c"
            }
#line 251 "analysis_utils.m"
    {
#line 251 "analysis_utils.m"
      analysis_utils__CostAndCallees_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 251 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 0) = ((MR_Box) (analysis_utils__CostCsq_11));
#line 251 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 1) = ((MR_Box) (analysis_utils__Exits_12));
#line 251 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 2) = ((MR_Box) (analysis_utils__Callees_17));
#line 251 "analysis_utils.m"
      MR_hl_field(MR_mktag(0), analysis_utils__CostAndCallees_18, 3) = ((MR_Box) (analysis_utils__HigherOrder_14));
#line 251 "analysis_utils.m"
    }
#line 253 "analysis_utils.m"
    {
#line 253 "analysis_utils.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &analysis_utils_scalar_common_1[0], ((MR_Box) (analysis_utils__RevGoalPath_19)), ((MR_Box) (analysis_utils__CostAndCallees_18)), analysis_utils__STATE_VARIABLE_CallSitesMap_0_20, analysis_utils__STATE_VARIABLE_CallSitesMap_21);
#line 253 "analysis_utils.m"
      return;
    }
#line 234 "analysis_utils.m"
  }
#line 73 "analysis_utils.m"
}

#line 48 "analysis_utils.m"
void MR_CALL 
analysis_utils__deep_get_maybe_procrep_3_p_0(
#line 48 "analysis_utils.m"
  MR_Word analysis_utils__Deep_4,
#line 48 "analysis_utils.m"
  MR_Word analysis_utils__PSPtr_5,
#line 48 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeProcRep_6)
#line 48 "analysis_utils.m"
{
#line 142 "analysis_utils.m"
  {
#line 142 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 142 "analysis_utils.m"
    MR_Word analysis_utils__MaybeProgRep_7;

#line 143 "analysis_utils.m"
    {
#line 143 "analysis_utils.m"
      profile__deep_get_maybe_progrep_2_p_0(analysis_utils__Deep_4, &analysis_utils__MaybeProgRep_7);
    }
#line 153 "analysis_utils.m"
    if (((MR_tag((MR_Word) analysis_utils__MaybeProgRep_7)) == (MR_mktag((MR_Integer) 1))))
#line 155 "analysis_utils.m"
      *analysis_utils__MaybeProcRep_6 = (MR_Word) analysis_utils__MaybeProgRep_7;
#line 153 "analysis_utils.m"
    else
#line 145 "analysis_utils.m"
      {
#line 145 "analysis_utils.m"
        MR_Word analysis_utils__ProgRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__MaybeProgRep_7, (MR_Integer) 0)));
#line 145 "analysis_utils.m"
        MR_Word analysis_utils__PS_9;
#line 145 "analysis_utils.m"
        MR_Word analysis_utils__ProcLabel_10;
#line 147 "analysis_utils.m"
        MR_String analysis_utils__V_14_14;
#line 147 "analysis_utils.m"
        MR_String analysis_utils__V_15_15;
#line 147 "analysis_utils.m"
        MR_String analysis_utils__V_16_16;
#line 147 "analysis_utils.m"
        MR_String analysis_utils__V_17_17;
#line 147 "analysis_utils.m"
        MR_String analysis_utils__V_18_18;
#line 147 "analysis_utils.m"
        MR_Integer analysis_utils__V_19_19;
#line 147 "analysis_utils.m"
        MR_Word analysis_utils__V_20_20;
#line 147 "analysis_utils.m"
        MR_ArrayPtr analysis_utils__V_21_21;
#line 147 "analysis_utils.m"
        MR_ArrayPtr analysis_utils__V_22_22;
#line 147 "analysis_utils.m"
        MR_Word analysis_utils__V_23_23;
#line 147 "analysis_utils.m"
        MR_Word analysis_utils__V_24_24;
#line 150 "analysis_utils.m"
        MR_Word analysis_utils__ProcRep_11;

#line 146 "analysis_utils.m"
        {
#line 146 "analysis_utils.m"
          profile__deep_lookup_proc_statics_3_p_0(analysis_utils__Deep_4, analysis_utils__PSPtr_5, &analysis_utils__PS_9);
        }
#line 147 "analysis_utils.m"
        analysis_utils__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 0)));
#line 147 "analysis_utils.m"
        analysis_utils__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 1)));
#line 147 "analysis_utils.m"
        analysis_utils__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 2)));
#line 147 "analysis_utils.m"
        analysis_utils__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 3)));
#line 147 "analysis_utils.m"
        analysis_utils__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 4)));
#line 147 "analysis_utils.m"
        analysis_utils__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 5)));
#line 147 "analysis_utils.m"
        analysis_utils__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 6)));
#line 147 "analysis_utils.m"
        analysis_utils__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 7)));
#line 147 "analysis_utils.m"
        analysis_utils__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 8)));
#line 147 "analysis_utils.m"
        analysis_utils__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 9)));
#line 147 "analysis_utils.m"
        analysis_utils__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 10)));
#line 147 "analysis_utils.m"
        analysis_utils__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__PS_9, (MR_Integer) 11)));
#line 148 "analysis_utils.m"
        {
#line 148 "analysis_utils.m"
          analysis_utils__succeeded = program_representation_utils__progrep_search_proc_3_p_0(analysis_utils__ProgRep_8, analysis_utils__ProcLabel_10, &analysis_utils__ProcRep_11);
        }
#line 150 "analysis_utils.m"
        if (analysis_utils__succeeded)
#line 149 "analysis_utils.m"
          {
#line 149 "analysis_utils.m"
            MR_Word base;
#line 149 "analysis_utils.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 149 "analysis_utils.m"
            *analysis_utils__MaybeProcRep_6 = base;
#line 149 "analysis_utils.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis_utils__ProcRep_11));
#line 149 "analysis_utils.m"
          }
#line 150 "analysis_utils.m"
        else
#line 151 "analysis_utils.m"
          {
#line 151 "analysis_utils.m"
            *analysis_utils__MaybeProcRep_6 = (MR_Word) MR_mkword(MR_mktag(1), &analysis_utils_scalar_common_4[0]);
#line 151 "analysis_utils.m"
          }
#line 145 "analysis_utils.m"
      }
#line 142 "analysis_utils.m"
  }
#line 48 "analysis_utils.m"
}

#line 134 "analysis_utils.m"
static MR_bool MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0_1(
#line 134 "analysis_utils.m"
  MR_Box analysis_utils__closure_arg,
#line 134 "analysis_utils.m"
  MR_Box analysis_utils__wrapper_arg_1)
#line 134 "analysis_utils.m"
{
#line 134 "analysis_utils.m"
  {
#line 134 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 134 "analysis_utils.m"
    MR_Box analysis_utils__closure = analysis_utils__closure_arg;

#line 134 "analysis_utils.m"
    {
#line 134 "analysis_utils.m"
      return analysis_utils__succeeded = analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__closure, (MR_Integer) 3))), ((MR_Word) analysis_utils__wrapper_arg_1));
    }
#line 134 "analysis_utils.m"
    return analysis_utils__succeeded;
#line 134 "analysis_utils.m"
  }
#line 134 "analysis_utils.m"
}

#line 39 "analysis_utils.m"
void MR_CALL 
analysis_utils__find_clique_first_and_other_procs_4_p_0(
#line 39 "analysis_utils.m"
  MR_Word analysis_utils__Deep_5,
#line 39 "analysis_utils.m"
  MR_Word analysis_utils__CliquePtr_6,
#line 39 "analysis_utils.m"
  MR_Word * analysis_utils__MaybeFirstPDPtr_7,
#line 39 "analysis_utils.m"
  MR_Word * analysis_utils__OtherPDPtrs_8)
#line 39 "analysis_utils.m"
{
#line 127 "analysis_utils.m"
  {
#line 127 "analysis_utils.m"
    MR_bool analysis_utils__succeeded;
#line 127 "analysis_utils.m"
    MR_Word analysis_utils__PDPtrs_9;
#line 127 "analysis_utils.m"
    MR_Word analysis_utils__EntryCSDPtr_10;

#line 128 "analysis_utils.m"
    {
#line 128 "analysis_utils.m"
      profile__deep_lookup_clique_members_3_p_0(analysis_utils__Deep_5, analysis_utils__CliquePtr_6, &analysis_utils__PDPtrs_9);
    }
#line 129 "analysis_utils.m"
    {
#line 129 "analysis_utils.m"
      profile__deep_lookup_clique_parents_3_p_0(analysis_utils__Deep_5, analysis_utils__CliquePtr_6, &analysis_utils__EntryCSDPtr_10);
    }
#line 130 "analysis_utils.m"
    {
#line 130 "analysis_utils.m"
      analysis_utils__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(analysis_utils__Deep_5, analysis_utils__EntryCSDPtr_10);
    }
#line 135 "analysis_utils.m"
    if (analysis_utils__succeeded)
#line 131 "analysis_utils.m"
      {
#line 131 "analysis_utils.m"
        MR_Word analysis_utils__EntryCSD_11;
#line 131 "analysis_utils.m"
        MR_Word analysis_utils__FirstPDPtr_12;
#line 131 "analysis_utils.m"
        MR_Word analysis_utils__V_13_13;
#line 132 "analysis_utils.m"
        MR_Word analysis_utils__V_14_14;
#line 132 "analysis_utils.m"
        MR_Word analysis_utils__V_15_15;

#line 131 "analysis_utils.m"
        {
#line 131 "analysis_utils.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(analysis_utils__Deep_5, analysis_utils__EntryCSDPtr_10, &analysis_utils__EntryCSD_11);
        }
#line 132 "analysis_utils.m"
        analysis_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 0)));
#line 132 "analysis_utils.m"
        analysis_utils__FirstPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 1)));
#line 132 "analysis_utils.m"
        analysis_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis_utils__EntryCSD_11, (MR_Integer) 2)));
#line 133 "analysis_utils.m"
        {
#line 133 "analysis_utils.m"
          MR_Word base;
#line 133 "analysis_utils.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "analysis_utils.m"
          *analysis_utils__MaybeFirstPDPtr_7 = base;
#line 133 "analysis_utils.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis_utils__FirstPDPtr_12));
#line 133 "analysis_utils.m"
        }
#line 134 "analysis_utils.m"
        {
#line 134 "analysis_utils.m"
          analysis_utils__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_13_13, 0) = ((MR_Box) (&analysis_utils_scalar_common_3[0]));
#line 134 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_13_13, 1) = ((MR_Box) (analysis_utils__find_clique_first_and_other_procs_4_p_0_1));
#line 134 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "analysis_utils.m"
          MR_hl_field(MR_mktag(0), analysis_utils__V_13_13, 3) = ((MR_Box) (analysis_utils__FirstPDPtr_12));
#line 134 "analysis_utils.m"
        }
#line 134 "analysis_utils.m"
        {
#line 134 "analysis_utils.m"
          mercury__list__negated_filter_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, analysis_utils__V_13_13, analysis_utils__PDPtrs_9, analysis_utils__OtherPDPtrs_8);
#line 134 "analysis_utils.m"
          return;
        }
#line 131 "analysis_utils.m"
      }
#line 135 "analysis_utils.m"
    else
#line 136 "analysis_utils.m"
      {
#line 136 "analysis_utils.m"
        *analysis_utils__MaybeFirstPDPtr_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 137 "analysis_utils.m"
        *analysis_utils__OtherPDPtrs_8 = analysis_utils__PDPtrs_9;
#line 136 "analysis_utils.m"
      }
#line 127 "analysis_utils.m"
  }
#line 39 "analysis_utils.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module analysis_utils. */
