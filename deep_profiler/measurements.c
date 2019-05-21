/*
** Automatically generated from `measurements.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module measurements. */
/* :- implementation. */

/*
INIT mercury__measurements__init
ENDINIT
*/

#include "measurements.mih"


#include "array_util.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_0[1];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_1[1];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_1;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_1[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cost_0[2];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cost_0[2];

static const MR_Integer measurements__measurements__functor_number_map_cost_0[2];

static const MR_PseudoTypeInfo measurements__measurements__field_types_cs_cost_csq_0_0[2];

static const MR_ConstString measurements__measurements__field_names_cs_cost_csq_0_0[2];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cs_cost_csq_0_0;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cs_cost_csq_0_0[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cs_cost_csq_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cs_cost_csq_0[1];

static const MR_Integer measurements__measurements__functor_number_map_cs_cost_csq_0[1];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_1[1];

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_1[1];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_1;

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_2[2];

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_2[2];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_2;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_1[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_2[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_goal_cost_csq_0[3];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_goal_cost_csq_0[3];

static const MR_Integer measurements__measurements__functor_number_map_goal_cost_csq_0[3];

static const MR_PseudoTypeInfo measurements__measurements__field_types_inherit_prof_info_0_0[4];

static const MR_ConstString measurements__measurements__field_names_inherit_prof_info_0_0[4];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_inherit_prof_info_0_0;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_inherit_prof_info_0_0[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_inherit_prof_info_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_inherit_prof_info_0[1];

static const MR_Integer measurements__measurements__functor_number_map_inherit_prof_info_0[1];

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_0;

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_1;

static const MR_EnumFunctorDescPtr measurements__measurements__enum_value_ordered_is_active_0[2];

static const MR_EnumFunctorDescPtr measurements__measurements__enum_name_ordered_is_active_0[2];

static const MR_Integer measurements__measurements__functor_number_map_is_active_0[2];

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_0[8];

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_0[8];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_1[5];

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_1[5];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_1;

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_2[4];

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_2[4];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_2;

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_3[3];

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_3[3];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_3;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_1[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_2[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_3[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_own_prof_info_0[4];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_own_prof_info_0[4];

static const MR_Integer measurements__measurements__functor_number_map_own_prof_info_0[4];

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0[8];

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0[8];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0[1];

static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0[1];

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_0[3];

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_0[3];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_1[6];

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_1[6];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0[2];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0[2];

static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0[2];

static const MR_Integer measurements__measurements__functor_number_map_parallelism_amount_0[1];

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_parallelism_amount_0;

static const MR_PseudoTypeInfo measurements__measurements__field_types_proc_cost_csq_0_0[3];

static const MR_ConstString measurements__measurements__field_names_proc_cost_csq_0_0[3];

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_proc_cost_csq_0_0;

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_proc_cost_csq_0_0[1];

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_proc_cost_csq_0[1];

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_proc_cost_csq_0[1];

static const MR_Integer measurements__measurements__functor_number_map_proc_cost_csq_0[1];

static const MR_Integer measurements__measurements__functor_number_map_recursion_depth_0[1];

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_recursion_depth_0;

static const MR_FA_TypeInfo_Struct1 measurements__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static void MR_CALL 
measurements__IntroducedFrom__pred__add_coverage_arrays__936__1_4_p_0(
  MR_Integer measurements__LambdaHeadVar__1_19,
  MR_Integer measurements__LambdaHeadVar__2_20,
  MR_ArrayPtr measurements__LambdaHeadVar__3_21,
  MR_ArrayPtr * measurements__LambdaHeadVar__4_22);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2);

static void MR_CALL 
measurements____Compare____cost_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3);

static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2);

static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
  MR_Float measurements__Weight_7,
  MR_Float measurements__Value_8,
  MR_Float measurements__STATE_VARIABLE_WeightedSum_0_11,
  MR_Float * measurements__STATE_VARIABLE_WeightedSum_12,
  MR_Float measurements__STATE_VARIABLE_TotalWeight_0_13,
  MR_Float * measurements__STATE_VARIABLE_TotalWeight_14);

static void MR_CALL 
measurements__weighted_average_3_p_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3,
  MR_Box * measurements__wrapper_arg_4,
  MR_Box measurements__wrapper_arg_5,
  MR_Box * measurements__wrapper_arg_6);

static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
  MR_Word measurements__PEM_5,
  MR_Float measurements__SparkDelay_6,
  MR_Integer measurements__Depth_7);

static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
  MR_Word measurements__HeadVar__1_1);

static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3,
  MR_Box * measurements__wrapper_arg_4);

static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____cost_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2);

static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3);


static /* final */ const MR_Box measurements_scalar_common_1[4][2];

static /* final */ const MR_Box measurements_scalar_common_2[1][4];

static /* final */ const MR_Box measurements_scalar_common_3[5][3];

static /* final */ const MR_Box measurements_scalar_common_4[2][6];

static /* final */ const MR_Float measurements_scalar_common_5[2];

static /* final */ const MR_Box measurements_scalar_common_6[2][1];

static /* final */ const MR_Box measurements_scalar_common_7[1][7];

static /* final */ const MR_Box measurements_scalar_common_8[1][9];




static /* final */ const MR_Box measurements_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements_scalar_common_1[0]))
  },
  /* row 3 */
  {
    (MR_Box) &measurements_scalar_common_5[0],
    ((MR_Box) (&measurements_scalar_common_6[0]))
  },
};

static /* final */ const MR_Box measurements_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&measurements_scalar_common_4[0])),
    ((MR_Box) (measurements__sum_own_infos_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&measurements_scalar_common_4[1])),
    ((MR_Box) (measurements__sum_inherit_infos_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&measurements_scalar_common_7[0])),
    ((MR_Box) (measurements__add_coverage_arrays_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&measurements_scalar_common_8[0])),
    ((MR_Box) (measurements__weighted_average_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Float measurements_scalar_common_5[2] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
  /* row 1 */
  (MR_Float) 1.0000000000000000,
};

static /* final */ const MR_Box measurements_scalar_common_6[2][1] = {
  /* row 0 */
  {
    (MR_Box) &measurements_scalar_common_5[0]
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box measurements_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_0 = {
  (MR_String) "cost_per_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_cost_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_1 = {
  (MR_String) "cost_total",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_cost_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_0[1] = {
  &measurements__measurements__du_functor_desc_cost_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_1[1] = {
  &measurements__measurements__du_functor_desc_cost_0_1
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cost_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_1
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cost_0[2] = {
  &measurements__measurements__du_functor_desc_cost_0_0,
  &measurements__measurements__du_functor_desc_cost_0_1
};

static const MR_Integer measurements__measurements__functor_number_map_cost_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_cost_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cost_0_0_10001)),
  ((MR_Box) (measurements____Compare____cost_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cost",
  {     measurements__measurements__du_name_ordered_cost_0 },
  {     measurements__measurements__du_ptag_ordered_cost_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_cost_0
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cs_cost_csq_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0
};

static const MR_ConstString measurements__measurements__field_names_cs_cost_csq_0_0[2] = {
  (MR_String) "cscc_calls",
  (MR_String) "cscc_csq_cost"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cs_cost_csq_0_0 = {
  (MR_String) "cs_cost_csq",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_cs_cost_csq_0_0,
  measurements__measurements__field_names_cs_cost_csq_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cs_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_cs_cost_csq_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cs_cost_csq_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cs_cost_csq_0_0
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cs_cost_csq_0[1] = {
  &measurements__measurements__du_functor_desc_cs_cost_csq_0_0
};

static const MR_Integer measurements__measurements__functor_number_map_cs_cost_csq_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_cs_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cs_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____cs_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cs_cost_csq",
  {     measurements__measurements__du_name_ordered_cs_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_cs_cost_csq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_cs_cost_csq_0
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_0 = {
  (MR_String) "dead_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_1[1] = {
  (MR_String) "tg_calls"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_1 = {
  (MR_String) "trivial_goal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_goal_cost_csq_0_1,
  measurements__measurements__field_names_goal_cost_csq_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_2[2] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_2[2] = {
  (MR_String) "ntg_avg_cost",
  (MR_String) "ntg_calls"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_2 = {
  (MR_String) "non_trivial_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  measurements__measurements__field_types_goal_cost_csq_0_2,
  measurements__measurements__field_names_goal_cost_csq_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_1[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_1
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_2[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_2
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_goal_cost_csq_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_2
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_goal_cost_csq_0[3] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_0,
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_2,
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_1
};

static const MR_Integer measurements__measurements__functor_number_map_goal_cost_csq_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_goal_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____goal_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____goal_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "goal_cost_csq",
  {     measurements__measurements__du_name_ordered_goal_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_goal_cost_csq_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_goal_cost_csq_0
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_inherit_prof_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_inherit_prof_info_0_0[4] = {
  (MR_String) "ipo_quanta",
  (MR_String) "ipo_callseqs",
  (MR_String) "ipo_allocs",
  (MR_String) "ipo_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_inherit_prof_info_0_0 = {
  (MR_String) "inherit_prof_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_inherit_prof_info_0_0,
  measurements__measurements__field_names_inherit_prof_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_inherit_prof_info_0_0[1] = {
  &measurements__measurements__du_functor_desc_inherit_prof_info_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_inherit_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_inherit_prof_info_0_0
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_inherit_prof_info_0[1] = {
  &measurements__measurements__du_functor_desc_inherit_prof_info_0_0
};

static const MR_Integer measurements__measurements__functor_number_map_inherit_prof_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_inherit_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____inherit_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____inherit_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "inherit_prof_info",
  {     measurements__measurements__du_name_ordered_inherit_prof_info_0 },
  {     measurements__measurements__du_ptag_ordered_inherit_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_inherit_prof_info_0
};

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_0 = {
  (MR_String) "is_active",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_1 = {
  (MR_String) "is_not_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr measurements__measurements__enum_value_ordered_is_active_0[2] = {
  &measurements__measurements__enum_functor_desc_is_active_0_0,
  &measurements__measurements__enum_functor_desc_is_active_0_1
};

static const MR_EnumFunctorDescPtr measurements__measurements__enum_name_ordered_is_active_0[2] = {
  &measurements__measurements__enum_functor_desc_is_active_0_0,
  &measurements__measurements__enum_functor_desc_is_active_0_1
};

static const MR_Integer measurements__measurements__functor_number_map_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurements____Unify____is_active_0_0_10001)),
  ((MR_Box) (measurements____Compare____is_active_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "is_active",
  {     measurements__measurements__enum_name_ordered_is_active_0 },
  {     measurements__measurements__enum_value_ordered_is_active_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_is_active_0
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_0[8] = {
  (MR_String) "opa_exits",
  (MR_String) "opa_fails",
  (MR_String) "opa_redos",
  (MR_String) "opa_excps",
  (MR_String) "opa_quanta",
  (MR_String) "opa_callseqs",
  (MR_String) "opa_allocs",
  (MR_String) "opa_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_0 = {
  (MR_String) "own_prof_all",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_own_prof_info_0_0,
  measurements__measurements__field_names_own_prof_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_1[5] = {
  (MR_String) "opd_exits",
  (MR_String) "opd_quanta",
  (MR_String) "opd_callseqs",
  (MR_String) "opd_allocs",
  (MR_String) "opd_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_1 = {
  (MR_String) "own_prof_det",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_own_prof_info_0_1,
  measurements__measurements__field_names_own_prof_info_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_2[4] = {
  (MR_String) "opfd_exits",
  (MR_String) "opfd_callseqs",
  (MR_String) "opfd_allocs",
  (MR_String) "opfd_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_2 = {
  (MR_String) "own_prof_fast_det",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  measurements__measurements__field_types_own_prof_info_0_2,
  measurements__measurements__field_names_own_prof_info_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_3[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_3[3] = {
  (MR_String) "opfns_exits",
  (MR_String) "opfns_fails",
  (MR_String) "opfns_callseqs"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_3 = {
  (MR_String) "own_prof_fast_nomem_semi",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  measurements__measurements__field_types_own_prof_info_0_3,
  measurements__measurements__field_names_own_prof_info_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_0[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_1[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_1
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_2[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_2
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_3[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_3
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_own_prof_info_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_3
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_own_prof_info_0[4] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_0,
  &measurements__measurements__du_functor_desc_own_prof_info_0_1,
  &measurements__measurements__du_functor_desc_own_prof_info_0_2,
  &measurements__measurements__du_functor_desc_own_prof_info_0_3
};

static const MR_Integer measurements__measurements__functor_number_map_own_prof_info_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_own_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____own_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____own_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "own_prof_info",
  {     measurements__measurements__du_name_ordered_own_prof_info_0 },
  {     measurements__measurements__du_ptag_ordered_own_prof_info_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_own_prof_info_0
};

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0
  }
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0
};

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0[8] = {
  (MR_String) "pemi_time_before_conj",
  (MR_String) "pemi_time_after_conj",
  (MR_String) "pemi_num_calls",
  (MR_String) "pemi_spark_cost",
  (MR_String) "pemi_spark_delay",
  (MR_String) "pemi_barrier_cost",
  (MR_String) "pemi_context_wakeup_delay",
  (MR_String) "pemi_internal"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0 = {
  (MR_String) "pem_incomplete",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0
};

static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallel_exec_metrics_incomplete_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_incomplete",
  {     measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0 },
  {     measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_0[3] = {
  (MR_String) "pemi_time_left_seq",
  (MR_String) "pemi_time_left_par",
  (MR_String) "pemi_time_left_signals"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0 = {
  (MR_String) "pem_left_most",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_1[6] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_1[6] = {
  (MR_String) "pemi_time_left",
  (MR_String) "pemi_time_signals",
  (MR_String) "pemi_time_waits",
  (MR_String) "pemi_time_right_seq",
  (MR_String) "pemi_time_right_par",
  (MR_String) "pemi_time_right_dead"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1 = {
  (MR_String) "pem_additional",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_1,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0[2] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1,
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0
};

static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_internal_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_internal_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_internal",
  {     measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0 },
  {     measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0
};

static const MR_Integer measurements__measurements__functor_number_map_parallelism_amount_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_parallelism_amount_0 = {
  (MR_String) "parallelism_amount",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_String) "pa_likely",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallelism_amount_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____parallelism_amount_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallelism_amount_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallelism_amount",
  {     &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  {     &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallelism_amount_0
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_proc_cost_csq_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0
};

static const MR_ConstString measurements__measurements__field_names_proc_cost_csq_0_0[3] = {
  (MR_String) "pcc_nr_calls",
  (MR_String) "pcc_r_calls",
  (MR_String) "pcc_csq"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_proc_cost_csq_0_0 = {
  (MR_String) "proc_cost_csq",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_proc_cost_csq_0_0,
  measurements__measurements__field_names_proc_cost_csq_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_proc_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_proc_cost_csq_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_proc_cost_csq_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_proc_cost_csq_0_0
  }
};

static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_proc_cost_csq_0[1] = {
  &measurements__measurements__du_functor_desc_proc_cost_csq_0_0
};

static const MR_Integer measurements__measurements__functor_number_map_proc_cost_csq_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_proc_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____proc_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____proc_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "proc_cost_csq",
  {     measurements__measurements__du_name_ordered_proc_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_proc_cost_csq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_proc_cost_csq_0
};

static const MR_Integer measurements__measurements__functor_number_map_recursion_depth_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_recursion_depth_0 = {
  (MR_String) "recursion_depth",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_recursion_depth_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____recursion_depth_0_0_10001)),
  ((MR_Box) (measurements____Compare____recursion_depth_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "recursion_depth",
  {     &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  {     &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_recursion_depth_0
};

static const MR_FA_TypeInfo_Struct1 measurements__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &measurements__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_static_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurements____Unify____static_coverage_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____static_coverage_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "static_coverage_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
measurements__IntroducedFrom__pred__add_coverage_arrays__936__1_4_p_0(
  MR_Integer measurements__LambdaHeadVar__1_19,
  MR_Integer measurements__LambdaHeadVar__2_20,
  MR_ArrayPtr measurements__LambdaHeadVar__3_21,
  MR_ArrayPtr * measurements__LambdaHeadVar__4_22)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer measurements__Value_13;
    MR_Integer measurements__Var_23;
    MR_Box measurements__conv0_Value_13;
    MR_ArrayPtr measurements__conv1_LambdaHeadVar__4_22;

    {
      mercury__array__lookup_3_p_0(measurements__TypeCtorInfo_33_33, (MR_ArrayPtr) measurements__LambdaHeadVar__3_21, measurements__LambdaHeadVar__1_19, &measurements__conv0_Value_13);
    }
    measurements__Value_13 = ((MR_Integer) measurements__conv0_Value_13);
    measurements__Var_23 = (measurements__Value_13 + measurements__LambdaHeadVar__2_20);
    {
      mercury__array__set_4_p_0(measurements__TypeCtorInfo_33_33, measurements__LambdaHeadVar__1_19, ((MR_Box) (measurements__Var_23)), (MR_ArrayPtr) measurements__LambdaHeadVar__3_21, &measurements__conv1_LambdaHeadVar__4_22);
    }
    *measurements__LambdaHeadVar__4_22 = (MR_ArrayPtr) measurements__conv1_LambdaHeadVar__4_22;
  }
}

void MR_CALL 
measurements____Compare____static_coverage_info_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__Cast_HeadVar1_4 = measurements__HeadVar__2_2;
    MR_Word measurements__Cast_HeadVar2_5 = measurements__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &measurements_scalar_common_1[2], measurements__HeadVar__1_1, ((MR_Box) (measurements__Cast_HeadVar1_4)), ((MR_Box) (measurements__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__Cast_HeadVar1_3 = measurements__HeadVar__1_1;
    MR_Word measurements__Cast_HeadVar2_4 = measurements__HeadVar__2_2;

    {
      measurements__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &measurements_scalar_common_1[2], ((MR_Box) (measurements__Cast_HeadVar1_3)), ((MR_Box) (measurements__Cast_HeadVar2_4)));
    }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____recursion_depth_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_6 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_7 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_6 == measurements__CastY_7);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurements__ArgX1_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);
        MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_Box) measurements__HeadVar__3_3);

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__ArgX1_4, measurements__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_5 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_6 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_5 == measurements__CastY_6);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
        MR_Float measurements__ArgY1_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____proc_cost_csq_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_12 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_13 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_12 == measurements__CastY_13);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer measurements__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurements__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer measurements__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer measurements__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word measurements__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word measurements__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word measurements__Var_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_10, measurements__ArgX1_4, measurements__ArgY1_5);
        }
        measurements__succeeded = (measurements__Var_10 == (MR_Integer) 0);
        measurements__succeeded = !(measurements__succeeded);
        if (measurements__succeeded)
          *measurements__HeadVar__1_1 = measurements__Var_10;
        else
          {
            MR_Word measurements__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_11, measurements__ArgX2_6, measurements__ArgY2_7);
            }
            measurements__succeeded = (measurements__Var_11 == (MR_Integer) 0);
            measurements__succeeded = !(measurements__succeeded);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = measurements__Var_11;
            else
              {
                MR_Integer measurements__CastX_25 = (MR_Integer) measurements__ArgX3_8;
                MR_Integer measurements__CastY_26 = (MR_Integer) measurements__ArgY3_9;

                measurements__succeeded = (measurements__CastX_25 == measurements__CastY_26);
                if (measurements__succeeded)
                  *measurements__HeadVar__1_1 = (MR_Integer) 0;
                else
                if (((MR_tag((MR_Word) measurements__ArgX3_8)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__Var_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgX3_8, (MR_Integer) 0)));

                    if (((MR_tag((MR_Word) measurements__ArgY3_9)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Float measurements__ArgY1_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY3_9, (MR_Integer) 0)));

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_29, measurements__ArgY1_18);
                        }
                      }
                    else
                      *measurements__HeadVar__1_1 = (MR_Integer) 1;
                  }
                else
                  {
                    MR_Float measurements__Var_30 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgX3_8, (MR_Integer) 0)));

                    if (((MR_tag((MR_Word) measurements__ArgY3_9)) == (MR_mktag((MR_Integer) 0))))
                      *measurements__HeadVar__1_1 = (MR_Integer) 2;
                    else
                      {
                        MR_Float measurements__ArgY1_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY3_9, (MR_Integer) 0)));

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_30, measurements__ArgY1_24);
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_9 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_10 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_9 == measurements__CastY_10);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Integer measurements__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer measurements__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurements__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer measurements__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word measurements__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word measurements__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer measurements__CastX_15;
        MR_Integer measurements__CastY_16;

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__ArgX2_5 == measurements__ArgY2_6);
            if (measurements__succeeded)
              {
                measurements__CastX_15 = (MR_Integer) measurements__ArgX3_7;
                measurements__CastY_16 = (MR_Integer) measurements__ArgY3_8;
                measurements__succeeded = (measurements__CastX_15 == measurements__CastY_16);
                if (measurements__succeeded)
                  measurements__succeeded = MR_TRUE;
                else
                if (((MR_tag((MR_Word) measurements__ArgX3_7)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__ArgX1_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgX3_7, (MR_Integer) 0)));
                    MR_Float measurements__ArgY1_12;

                    measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY3_8)) == (MR_mktag((MR_Integer) 0)));
                    if (measurements__succeeded)
                      {
                        measurements__ArgY1_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY3_8, (MR_Integer) 0)));
                        measurements__succeeded = (measurements__ArgX1_11 == measurements__ArgY1_12);
                      }
                  }
                else
                  {
                    MR_Float measurements__ArgX1_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgX3_7, (MR_Integer) 0)));
                    MR_Float measurements__ArgY1_14;

                    measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY3_8)) == (MR_mktag((MR_Integer) 1)));
                    if (measurements__succeeded)
                      {
                        measurements__ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY3_8, (MR_Integer) 0)));
                        measurements__succeeded = (measurements__ArgX1_13 == measurements__ArgY1_14);
                      }
                  }
              }
          }
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____parallelism_amount_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_6 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_7 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_6 == measurements__CastY_7);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurements__ArgX1_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);
        MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_Box) measurements__HeadVar__3_3);

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__ArgX1_4, measurements__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_5 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_6 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_5 == measurements__CastY_6);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
        MR_Float measurements__ArgY1_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
      }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_47 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_48 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_47 == measurements__CastY_48);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Float measurements__Var_58 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 5)));
        MR_Float measurements__Var_59 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float measurements__Var_60 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float measurements__Var_61 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float measurements__Var_62 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word measurements__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word measurements__ArgY1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));
            MR_Float measurements__ArgY2_33 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 1)));
            MR_Float measurements__ArgY3_35 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 2)));
            MR_Float measurements__ArgY4_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 3)));
            MR_Float measurements__ArgY5_39 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 4)));
            MR_Float measurements__ArgY6_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 5)));
            MR_Word measurements__Var_42;

            {
              measurements____Compare____parallel_exec_metrics_internal_0_0(&measurements__Var_42, measurements__Var_63, measurements__ArgY1_31);
            }
            measurements__succeeded = (measurements__Var_42 == (MR_Integer) 0);
            measurements__succeeded = !(measurements__succeeded);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = measurements__Var_42;
            else
              {
                MR_Word measurements__Var_43;

                {
                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_43, measurements__Var_62, measurements__ArgY2_33);
                }
                measurements__succeeded = (measurements__Var_43 == (MR_Integer) 0);
                measurements__succeeded = !(measurements__succeeded);
                if (measurements__succeeded)
                  *measurements__HeadVar__1_1 = measurements__Var_43;
                else
                  {
                    MR_Word measurements__Var_44;

                    {
                      mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_44, measurements__Var_61, measurements__ArgY3_35);
                    }
                    measurements__succeeded = (measurements__Var_44 == (MR_Integer) 0);
                    measurements__succeeded = !(measurements__succeeded);
                    if (measurements__succeeded)
                      *measurements__HeadVar__1_1 = measurements__Var_44;
                    else
                      {
                        MR_Word measurements__Var_45;

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_45, measurements__Var_60, measurements__ArgY4_37);
                        }
                        measurements__succeeded = (measurements__Var_45 == (MR_Integer) 0);
                        measurements__succeeded = !(measurements__succeeded);
                        if (measurements__succeeded)
                          *measurements__HeadVar__1_1 = measurements__Var_45;
                        else
                          {
                            MR_Word measurements__Var_46;

                            {
                              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_46, measurements__Var_59, measurements__ArgY5_39);
                            }
                            measurements__succeeded = (measurements__Var_46 == (MR_Integer) 0);
                            measurements__succeeded = !(measurements__succeeded);
                            if (measurements__succeeded)
                              *measurements__HeadVar__1_1 = measurements__Var_46;
                            else
                              {
                                mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_58, measurements__ArgY6_41);
                              }
                          }
                      }
                  }
              }
          }
        else
          *measurements__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Float measurements__Var_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float measurements__Var_65 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float measurements__Var_66 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *measurements__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
            MR_Float measurements__ArgY2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
            MR_Float measurements__ArgY3_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word measurements__Var_10;

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_10, measurements__Var_66, measurements__ArgY1_5);
            }
            measurements__succeeded = (measurements__Var_10 == (MR_Integer) 0);
            measurements__succeeded = !(measurements__succeeded);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = measurements__Var_10;
            else
              {
                MR_Word measurements__Var_11;

                {
                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_11, measurements__Var_65, measurements__ArgY2_7);
                }
                measurements__succeeded = (measurements__Var_11 == (MR_Integer) 0);
                measurements__succeeded = !(measurements__succeeded);
                if (measurements__succeeded)
                  *measurements__HeadVar__1_1 = measurements__Var_11;
                else
                  {
                    mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_64, measurements__ArgY3_9);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_21 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_22 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_21 == measurements__CastY_22);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word measurements__ArgY1_10;
        MR_Float measurements__ArgX2_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__ArgY2_12;
        MR_Float measurements__ArgX3_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__ArgY3_14;
        MR_Float measurements__ArgX4_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__ArgY4_16;
        MR_Float measurements__ArgX5_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__ArgY5_18;
        MR_Float measurements__ArgX6_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));
        MR_Float measurements__ArgY6_20;

        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (measurements__succeeded)
          {
            measurements__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
            measurements__ArgY2_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
            measurements__ArgY3_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
            measurements__ArgY4_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
            measurements__ArgY5_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
            measurements__ArgY6_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 5)));
            {
              measurements__succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(measurements__ArgX1_9, measurements__ArgY1_10);
            }
            if (measurements__succeeded)
              {
                measurements__succeeded = (measurements__ArgX2_11 == measurements__ArgY2_12);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX3_13 == measurements__ArgY3_14);
                    if (measurements__succeeded)
                      {
                        measurements__succeeded = (measurements__ArgX4_15 == measurements__ArgY4_16);
                        if (measurements__succeeded)
                          {
                            measurements__succeeded = (measurements__ArgX5_17 == measurements__ArgY5_18);
                            if (measurements__succeeded)
                              measurements__succeeded = (measurements__ArgX6_19 == measurements__ArgY6_20);
                          }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_4;
        MR_Float measurements__ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__ArgY2_6;
        MR_Float measurements__ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__ArgY3_8;

        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (measurements__succeeded)
          {
            measurements__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
            measurements__ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
            measurements__ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
            measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
            if (measurements__succeeded)
              {
                measurements__succeeded = (measurements__ArgX2_5 == measurements__ArgY2_6);
                if (measurements__succeeded)
                  measurements__succeeded = (measurements__ArgX3_7 == measurements__ArgY3_8);
              }
          }
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_27 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_28 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_27 == measurements__CastY_28);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurements__ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float measurements__ArgX2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float measurements__ArgY2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer measurements__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer measurements__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float measurements__ArgX4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float measurements__ArgY4_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
        MR_Float measurements__ArgX5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float measurements__ArgY5_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 4)));
        MR_Float measurements__ArgX6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
        MR_Float measurements__ArgY6_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 5)));
        MR_Float measurements__ArgX7_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
        MR_Float measurements__ArgY7_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word measurements__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word measurements__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word measurements__Var_20;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_20, measurements__ArgX1_4, measurements__ArgY1_5);
        }
        measurements__succeeded = (measurements__Var_20 == (MR_Integer) 0);
        measurements__succeeded = !(measurements__succeeded);
        if (measurements__succeeded)
          *measurements__HeadVar__1_1 = measurements__Var_20;
        else
          {
            MR_Word measurements__Var_21;

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_21, measurements__ArgX2_6, measurements__ArgY2_7);
            }
            measurements__succeeded = (measurements__Var_21 == (MR_Integer) 0);
            measurements__succeeded = !(measurements__succeeded);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = measurements__Var_21;
            else
              {
                MR_Word measurements__Var_22;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_22, measurements__ArgX3_8, measurements__ArgY3_9);
                }
                measurements__succeeded = (measurements__Var_22 == (MR_Integer) 0);
                measurements__succeeded = !(measurements__succeeded);
                if (measurements__succeeded)
                  *measurements__HeadVar__1_1 = measurements__Var_22;
                else
                  {
                    MR_Word measurements__Var_23;

                    {
                      mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_23, measurements__ArgX4_10, measurements__ArgY4_11);
                    }
                    measurements__succeeded = (measurements__Var_23 == (MR_Integer) 0);
                    measurements__succeeded = !(measurements__succeeded);
                    if (measurements__succeeded)
                      *measurements__HeadVar__1_1 = measurements__Var_23;
                    else
                      {
                        MR_Word measurements__Var_24;

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_24, measurements__ArgX5_12, measurements__ArgY5_13);
                        }
                        measurements__succeeded = (measurements__Var_24 == (MR_Integer) 0);
                        measurements__succeeded = !(measurements__succeeded);
                        if (measurements__succeeded)
                          *measurements__HeadVar__1_1 = measurements__Var_24;
                        else
                          {
                            MR_Word measurements__Var_25;

                            {
                              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_25, measurements__ArgX6_14, measurements__ArgY6_15);
                            }
                            measurements__succeeded = (measurements__Var_25 == (MR_Integer) 0);
                            measurements__succeeded = !(measurements__succeeded);
                            if (measurements__succeeded)
                              *measurements__HeadVar__1_1 = measurements__Var_25;
                            else
                              {
                                MR_Word measurements__Var_26;

                                {
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_26, measurements__ArgX7_16, measurements__ArgY7_17);
                                }
                                measurements__succeeded = (measurements__Var_26 == (MR_Integer) 0);
                                measurements__succeeded = !(measurements__succeeded);
                                if (measurements__succeeded)
                                  *measurements__HeadVar__1_1 = measurements__Var_26;
                                else
                                  {
                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &measurements_scalar_common_1[1], measurements__HeadVar__1_1, ((MR_Box) (measurements__ArgX8_18)), ((MR_Box) (measurements__ArgY8_19)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_19 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_20 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_19 == measurements__CastY_20);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Word measurements__TypeInfo_21_21;
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float measurements__ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer measurements__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer measurements__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float measurements__ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float measurements__ArgX5_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__ArgY5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float measurements__ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
        MR_Float measurements__ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
        MR_Float measurements__ArgX7_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
        MR_Float measurements__ArgY7_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word measurements__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word measurements__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__ArgX2_5 == measurements__ArgY2_6);
            if (measurements__succeeded)
              {
                measurements__succeeded = (measurements__ArgX3_7 == measurements__ArgY3_8);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX4_9 == measurements__ArgY4_10);
                    if (measurements__succeeded)
                      {
                        measurements__succeeded = (measurements__ArgX5_11 == measurements__ArgY5_12);
                        if (measurements__succeeded)
                          {
                            measurements__succeeded = (measurements__ArgX6_13 == measurements__ArgY6_14);
                            if (measurements__succeeded)
                              {
                                measurements__succeeded = (measurements__ArgX7_15 == measurements__ArgY7_16);
                                if (measurements__succeeded)
                                  {
                                    measurements__TypeInfo_21_21 = (MR_Word) &measurements_scalar_common_1[1];
                                    {
                                      measurements__succeeded = mercury__builtin__unify_2_p_0(measurements__TypeInfo_21_21, ((MR_Box) (measurements__ArgX8_17)), ((MR_Box) (measurements__ArgY8_18)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____own_prof_info_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_180 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_181 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_180 == measurements__CastY_181);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer measurements__Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
            MR_Integer measurements__Var_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
            MR_Integer measurements__Var_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
            MR_Integer measurements__Var_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
            MR_Integer measurements__Var_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer measurements__Var_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer measurements__Var_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer measurements__Var_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer measurements__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer measurements__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer measurements__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer measurements__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer measurements__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Integer measurements__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 5)));
                  MR_Integer measurements__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 6)));
                  MR_Integer measurements__ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 7)));
                  MR_Word measurements__Var_20;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_20, measurements__Var_209, measurements__ArgY1_5);
                  }
                  measurements__succeeded = (measurements__Var_20 == (MR_Integer) 0);
                  measurements__succeeded = !(measurements__succeeded);
                  if (measurements__succeeded)
                    *measurements__HeadVar__1_1 = measurements__Var_20;
                  else
                    {
                      MR_Word measurements__Var_21;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_21, measurements__Var_208, measurements__ArgY2_7);
                      }
                      measurements__succeeded = (measurements__Var_21 == (MR_Integer) 0);
                      measurements__succeeded = !(measurements__succeeded);
                      if (measurements__succeeded)
                        *measurements__HeadVar__1_1 = measurements__Var_21;
                      else
                        {
                          MR_Word measurements__Var_22;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_22, measurements__Var_207, measurements__ArgY3_9);
                          }
                          measurements__succeeded = (measurements__Var_22 == (MR_Integer) 0);
                          measurements__succeeded = !(measurements__succeeded);
                          if (measurements__succeeded)
                            *measurements__HeadVar__1_1 = measurements__Var_22;
                          else
                            {
                              MR_Word measurements__Var_23;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_23, measurements__Var_206, measurements__ArgY4_11);
                              }
                              measurements__succeeded = (measurements__Var_23 == (MR_Integer) 0);
                              measurements__succeeded = !(measurements__succeeded);
                              if (measurements__succeeded)
                                *measurements__HeadVar__1_1 = measurements__Var_23;
                              else
                                {
                                  MR_Word measurements__Var_24;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_24, measurements__Var_205, measurements__ArgY5_13);
                                  }
                                  measurements__succeeded = (measurements__Var_24 == (MR_Integer) 0);
                                  measurements__succeeded = !(measurements__succeeded);
                                  if (measurements__succeeded)
                                    *measurements__HeadVar__1_1 = measurements__Var_24;
                                  else
                                    {
                                      MR_Word measurements__Var_25;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_25, measurements__Var_204, measurements__ArgY6_15);
                                      }
                                      measurements__succeeded = (measurements__Var_25 == (MR_Integer) 0);
                                      measurements__succeeded = !(measurements__succeeded);
                                      if (measurements__succeeded)
                                        *measurements__HeadVar__1_1 = measurements__Var_25;
                                      else
                                        {
                                          MR_Word measurements__Var_26;

                                          {
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_26, measurements__Var_203, measurements__ArgY7_17);
                                          }
                                          measurements__succeeded = (measurements__Var_26 == (MR_Integer) 0);
                                          measurements__succeeded = !(measurements__succeeded);
                                          if (measurements__succeeded)
                                            *measurements__HeadVar__1_1 = measurements__Var_26;
                                          else
                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_202, measurements__ArgY8_19);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer measurements__Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
            MR_Integer measurements__Var_211 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer measurements__Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer measurements__Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer measurements__Var_214 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer measurements__ArgY1_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer measurements__ArgY2_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer measurements__ArgY3_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer measurements__ArgY4_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Integer measurements__ArgY5_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word measurements__Var_86;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_86, measurements__Var_214, measurements__ArgY1_77);
                  }
                  measurements__succeeded = (measurements__Var_86 == (MR_Integer) 0);
                  measurements__succeeded = !(measurements__succeeded);
                  if (measurements__succeeded)
                    *measurements__HeadVar__1_1 = measurements__Var_86;
                  else
                    {
                      MR_Word measurements__Var_87;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_87, measurements__Var_213, measurements__ArgY2_79);
                      }
                      measurements__succeeded = (measurements__Var_87 == (MR_Integer) 0);
                      measurements__succeeded = !(measurements__succeeded);
                      if (measurements__succeeded)
                        *measurements__HeadVar__1_1 = measurements__Var_87;
                      else
                        {
                          MR_Word measurements__Var_88;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_88, measurements__Var_212, measurements__ArgY3_81);
                          }
                          measurements__succeeded = (measurements__Var_88 == (MR_Integer) 0);
                          measurements__succeeded = !(measurements__succeeded);
                          if (measurements__succeeded)
                            *measurements__HeadVar__1_1 = measurements__Var_88;
                          else
                            {
                              MR_Word measurements__Var_89;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_89, measurements__Var_211, measurements__ArgY4_83);
                              }
                              measurements__succeeded = (measurements__Var_89 == (MR_Integer) 0);
                              measurements__succeeded = !(measurements__succeeded);
                              if (measurements__succeeded)
                                *measurements__HeadVar__1_1 = measurements__Var_89;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_210, measurements__ArgY5_85);
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer measurements__Var_215 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer measurements__Var_216 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer measurements__Var_217 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer measurements__Var_218 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer measurements__ArgY1_129 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer measurements__ArgY2_131 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer measurements__ArgY3_133 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Integer measurements__ArgY4_135 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word measurements__Var_136;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_136, measurements__Var_218, measurements__ArgY1_129);
                  }
                  measurements__succeeded = (measurements__Var_136 == (MR_Integer) 0);
                  measurements__succeeded = !(measurements__succeeded);
                  if (measurements__succeeded)
                    *measurements__HeadVar__1_1 = measurements__Var_136;
                  else
                    {
                      MR_Word measurements__Var_137;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_137, measurements__Var_217, measurements__ArgY2_131);
                      }
                      measurements__succeeded = (measurements__Var_137 == (MR_Integer) 0);
                      measurements__succeeded = !(measurements__succeeded);
                      if (measurements__succeeded)
                        *measurements__HeadVar__1_1 = measurements__Var_137;
                      else
                        {
                          MR_Word measurements__Var_138;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_138, measurements__Var_216, measurements__ArgY3_133);
                          }
                          measurements__succeeded = (measurements__Var_138 == (MR_Integer) 0);
                          measurements__succeeded = !(measurements__succeeded);
                          if (measurements__succeeded)
                            *measurements__HeadVar__1_1 = measurements__Var_138;
                          else
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_215, measurements__ArgY4_135);
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer measurements__Var_219 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer measurements__Var_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer measurements__Var_221 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer measurements__ArgY1_173 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer measurements__ArgY2_175 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer measurements__ArgY3_177 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word measurements__Var_178;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_178, measurements__Var_221, measurements__ArgY1_173);
                  }
                  measurements__succeeded = (measurements__Var_178 == (MR_Integer) 0);
                  measurements__succeeded = !(measurements__succeeded);
                  if (measurements__succeeded)
                    *measurements__HeadVar__1_1 = measurements__Var_178;
                  else
                    {
                      MR_Word measurements__Var_179;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_179, measurements__Var_220, measurements__ArgY2_175);
                      }
                      measurements__succeeded = (measurements__Var_179 == (MR_Integer) 0);
                      measurements__succeeded = !(measurements__succeeded);
                      if (measurements__succeeded)
                        *measurements__HeadVar__1_1 = measurements__Var_179;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_219, measurements__ArgY3_177);
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_43 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_44 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_43 == measurements__CastY_44);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer measurements__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer measurements__ArgY1_4;
            MR_Integer measurements__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer measurements__ArgY2_6;
            MR_Integer measurements__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer measurements__ArgY3_8;
            MR_Integer measurements__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer measurements__ArgY4_10;
            MR_Integer measurements__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
            MR_Integer measurements__ArgY5_12;
            MR_Integer measurements__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
            MR_Integer measurements__ArgY6_14;
            MR_Integer measurements__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
            MR_Integer measurements__ArgY7_16;
            MR_Integer measurements__ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
            MR_Integer measurements__ArgY8_18;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
                measurements__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
                measurements__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
                measurements__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
                measurements__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
                measurements__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
                measurements__ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
                measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX2_5 == measurements__ArgY2_6);
                    if (measurements__succeeded)
                      {
                        measurements__succeeded = (measurements__ArgX3_7 == measurements__ArgY3_8);
                        if (measurements__succeeded)
                          {
                            measurements__succeeded = (measurements__ArgX4_9 == measurements__ArgY4_10);
                            if (measurements__succeeded)
                              {
                                measurements__succeeded = (measurements__ArgX5_11 == measurements__ArgY5_12);
                                if (measurements__succeeded)
                                  {
                                    measurements__succeeded = (measurements__ArgX6_13 == measurements__ArgY6_14);
                                    if (measurements__succeeded)
                                      {
                                        measurements__succeeded = (measurements__ArgX7_15 == measurements__ArgY7_16);
                                        if (measurements__succeeded)
                                          measurements__succeeded = (measurements__ArgX8_17 == measurements__ArgY8_18);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer measurements__ArgX1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer measurements__ArgY1_20;
            MR_Integer measurements__ArgX2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer measurements__ArgY2_22;
            MR_Integer measurements__ArgX3_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer measurements__ArgY3_24;
            MR_Integer measurements__ArgX4_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer measurements__ArgY4_26;
            MR_Integer measurements__ArgX5_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
            MR_Integer measurements__ArgY5_28;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__ArgY2_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
                measurements__ArgY3_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
                measurements__ArgY4_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
                measurements__ArgY5_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
                measurements__succeeded = (measurements__ArgX1_19 == measurements__ArgY1_20);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX2_21 == measurements__ArgY2_22);
                    if (measurements__succeeded)
                      {
                        measurements__succeeded = (measurements__ArgX3_23 == measurements__ArgY3_24);
                        if (measurements__succeeded)
                          {
                            measurements__succeeded = (measurements__ArgX4_25 == measurements__ArgY4_26);
                            if (measurements__succeeded)
                              measurements__succeeded = (measurements__ArgX5_27 == measurements__ArgY5_28);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer measurements__ArgX1_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer measurements__ArgY1_30;
            MR_Integer measurements__ArgX2_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer measurements__ArgY2_32;
            MR_Integer measurements__ArgX3_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer measurements__ArgY3_34;
            MR_Integer measurements__ArgX4_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer measurements__ArgY4_36;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__ArgY2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
                measurements__ArgY3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 2)));
                measurements__ArgY4_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 3)));
                measurements__succeeded = (measurements__ArgX1_29 == measurements__ArgY1_30);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX2_31 == measurements__ArgY2_32);
                    if (measurements__succeeded)
                      {
                        measurements__succeeded = (measurements__ArgX3_33 == measurements__ArgY3_34);
                        if (measurements__succeeded)
                          measurements__succeeded = (measurements__ArgX4_35 == measurements__ArgY4_36);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer measurements__ArgX1_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer measurements__ArgY1_38;
            MR_Integer measurements__ArgX2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer measurements__ArgY2_40;
            MR_Integer measurements__ArgX3_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer measurements__ArgY3_42;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__ArgY2_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 1)));
                measurements__ArgY3_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 2)));
                measurements__succeeded = (measurements__ArgX1_37 == measurements__ArgY1_38);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__ArgX2_39 == measurements__ArgY2_40);
                    if (measurements__succeeded)
                      measurements__succeeded = (measurements__ArgX3_41 == measurements__ArgY3_42);
                  }
              }
          }
          break;
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____is_active_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Cast_HeadVar1_4 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__Cast_HeadVar2_5 = (MR_Integer) measurements__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Cast_HeadVar1_4, measurements__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
measurements____Unify____is_active_0_0(
  MR_Word measurements__HeadVar__2_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded = (measurements__HeadVar__2_1 == measurements__HeadVar__2_2);

    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____inherit_prof_info_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_15 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_16 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_15 == measurements__CastY_16);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer measurements__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurements__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer measurements__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer measurements__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer measurements__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer measurements__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer measurements__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer measurements__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word measurements__Var_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_12, measurements__ArgX1_4, measurements__ArgY1_5);
        }
        measurements__succeeded = (measurements__Var_12 == (MR_Integer) 0);
        measurements__succeeded = !(measurements__succeeded);
        if (measurements__succeeded)
          *measurements__HeadVar__1_1 = measurements__Var_12;
        else
          {
            MR_Word measurements__Var_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_13, measurements__ArgX2_6, measurements__ArgY2_7);
            }
            measurements__succeeded = (measurements__Var_13 == (MR_Integer) 0);
            measurements__succeeded = !(measurements__succeeded);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = measurements__Var_13;
            else
              {
                MR_Word measurements__Var_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__Var_14, measurements__ArgX3_8, measurements__ArgY3_9);
                }
                measurements__succeeded = (measurements__Var_14 == (MR_Integer) 0);
                measurements__succeeded = !(measurements__succeeded);
                if (measurements__succeeded)
                  *measurements__HeadVar__1_1 = measurements__Var_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__ArgX4_10, measurements__ArgY4_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_11 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_12 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_11 == measurements__CastY_12);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Integer measurements__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer measurements__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer measurements__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer measurements__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer measurements__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer measurements__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer measurements__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer measurements__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__ArgX2_5 == measurements__ArgY2_6);
            if (measurements__succeeded)
              {
                measurements__succeeded = (measurements__ArgX3_7 == measurements__ArgY3_8);
                if (measurements__succeeded)
                  measurements__succeeded = (measurements__ArgX4_9 == measurements__ArgY4_10);
              }
          }
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____goal_cost_csq_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_23 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_24 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_23 == measurements__CastY_24);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *measurements__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *measurements__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *measurements__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer measurements__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer measurements__ArgY1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_30, measurements__ArgY1_9);
                  }
                }
                break;
              case (MR_Integer) 2:
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer measurements__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word measurements__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word measurements__ArgY1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer measurements__ArgY2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word measurements__Var_22;
                  MR_Integer measurements__CastX_39 = (MR_Integer) measurements__Var_29;
                  MR_Integer measurements__CastY_40 = (MR_Integer) measurements__ArgY1_19;

                  measurements__succeeded = (measurements__CastX_39 == measurements__CastY_40);
                  if (measurements__succeeded)
                    {
                      measurements__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
                      measurements__succeeded = !(measurements__succeeded);
                      if (measurements__succeeded)
                        {
                          measurements__Var_22 = (MR_Integer) 0;
                          measurements__succeeded = MR_TRUE;
                        }
                    }
                  else
                  if (((MR_tag((MR_Word) measurements__Var_29)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Float measurements__Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Var_29, (MR_Integer) 0)));

                      if (((MR_tag((MR_Word) measurements__ArgY1_19)) == (MR_mktag((MR_Integer) 0))))
                        {
                          MR_Float measurements__ArgY1_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY1_19, (MR_Integer) 0)));

                          {
                            mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_22, measurements__Var_43, measurements__ArgY1_32);
                          }
                          measurements__succeeded = (measurements__Var_22 == (MR_Integer) 0);
                          measurements__succeeded = !(measurements__succeeded);
                        }
                      else
                        {
                          measurements__Var_22 = (MR_Integer) 1;
                          measurements__succeeded = MR_TRUE;
                        }
                    }
                  else
                    {
                      MR_Float measurements__Var_44 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Var_29, (MR_Integer) 0)));

                      if (((MR_tag((MR_Word) measurements__ArgY1_19)) == (MR_mktag((MR_Integer) 0))))
                        {
                          measurements__Var_22 = (MR_Integer) 2;
                          measurements__succeeded = MR_TRUE;
                        }
                      else
                        {
                          MR_Float measurements__ArgY1_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY1_19, (MR_Integer) 0)));

                          {
                            mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_22, measurements__Var_44, measurements__ArgY1_38);
                          }
                          measurements__succeeded = (measurements__Var_22 == (MR_Integer) 0);
                          measurements__succeeded = !(measurements__succeeded);
                        }
                    }
                  if (measurements__succeeded)
                    *measurements__HeadVar__1_1 = measurements__Var_22;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Var_28, measurements__ArgY2_21);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_11 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_12 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_11 == measurements__CastY_12);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer measurements__CastX_3 = (MR_Integer) measurements__HeadVar__1_1;
            MR_Integer measurements__CastY_4 = (MR_Integer) measurements__HeadVar__2_2;

            measurements__succeeded = (measurements__CastY_4 == measurements__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer measurements__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer measurements__ArgY1_6;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__succeeded = (measurements__ArgX1_5 == measurements__ArgY1_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word measurements__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word measurements__ArgY1_8;
            MR_Integer measurements__ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer measurements__ArgY2_10;
            MR_Integer measurements__CastX_17;
            MR_Integer measurements__CastY_18;

            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (measurements__succeeded)
              {
                measurements__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
                measurements__ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
                measurements__CastX_17 = (MR_Integer) measurements__ArgX1_7;
                measurements__CastY_18 = (MR_Integer) measurements__ArgY1_8;
                measurements__succeeded = (measurements__CastX_17 == measurements__CastY_18);
                if (measurements__succeeded)
                  measurements__succeeded = MR_TRUE;
                else
                if (((MR_tag((MR_Word) measurements__ArgX1_7)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__ArgX1_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgX1_7, (MR_Integer) 0)));
                    MR_Float measurements__ArgY1_14;

                    measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY1_8)) == (MR_mktag((MR_Integer) 0)));
                    if (measurements__succeeded)
                      {
                        measurements__ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY1_8, (MR_Integer) 0)));
                        measurements__succeeded = (measurements__ArgX1_13 == measurements__ArgY1_14);
                      }
                  }
                else
                  {
                    MR_Float measurements__ArgX1_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgX1_7, (MR_Integer) 0)));
                    MR_Float measurements__ArgY1_16;

                    measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY1_8)) == (MR_mktag((MR_Integer) 1)));
                    if (measurements__succeeded)
                      {
                        measurements__ArgY1_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY1_8, (MR_Integer) 0)));
                        measurements__succeeded = (measurements__ArgX1_15 == measurements__ArgY1_16);
                      }
                  }
                if (measurements__succeeded)
                  measurements__succeeded = (measurements__ArgX2_9 == measurements__ArgY2_10);
              }
          }
          break;
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements____Compare____cs_cost_csq_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_9 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_10 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_9 == measurements__CastY_10);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float measurements__ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word measurements__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word measurements__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word measurements__Var_8;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__Var_8, measurements__ArgX1_4, measurements__ArgY1_5);
        }
        measurements__succeeded = (measurements__Var_8 == (MR_Integer) 0);
        measurements__succeeded = !(measurements__succeeded);
        if (measurements__succeeded)
          *measurements__HeadVar__1_1 = measurements__Var_8;
        else
          {
            MR_Integer measurements__CastX_21 = (MR_Integer) measurements__ArgX2_6;
            MR_Integer measurements__CastY_22 = (MR_Integer) measurements__ArgY2_7;

            measurements__succeeded = (measurements__CastX_21 == measurements__CastY_22);
            if (measurements__succeeded)
              *measurements__HeadVar__1_1 = (MR_Integer) 0;
            else
            if (((MR_tag((MR_Word) measurements__ArgX2_6)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Float measurements__Var_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgX2_6, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) measurements__ArgY2_7)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY2_7, (MR_Integer) 0)));

                    {
                      mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_25, measurements__ArgY1_14);
                    }
                  }
                else
                  *measurements__HeadVar__1_1 = (MR_Integer) 1;
              }
            else
              {
                MR_Float measurements__Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgX2_6, (MR_Integer) 0)));

                if (((MR_tag((MR_Word) measurements__ArgY2_7)) == (MR_mktag((MR_Integer) 0))))
                  *measurements__HeadVar__1_1 = (MR_Integer) 2;
                else
                  {
                    MR_Float measurements__ArgY1_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY2_7, (MR_Integer) 0)));

                    {
                      mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_26, measurements__ArgY1_20);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_7 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_8 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_7 == measurements__CastY_8);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
      {
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word measurements__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word measurements__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer measurements__CastX_13;
        MR_Integer measurements__CastY_14;

        measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
        if (measurements__succeeded)
          {
            measurements__CastX_13 = (MR_Integer) measurements__ArgX2_5;
            measurements__CastY_14 = (MR_Integer) measurements__ArgY2_6;
            measurements__succeeded = (measurements__CastX_13 == measurements__CastY_14);
            if (measurements__succeeded)
              measurements__succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) measurements__ArgX2_5)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Float measurements__ArgX1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgX2_5, (MR_Integer) 0)));
                MR_Float measurements__ArgY1_10;

                measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY2_6)) == (MR_mktag((MR_Integer) 0)));
                if (measurements__succeeded)
                  {
                    measurements__ArgY1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__ArgY2_6, (MR_Integer) 0)));
                    measurements__succeeded = (measurements__ArgX1_9 == measurements__ArgY1_10);
                  }
              }
            else
              {
                MR_Float measurements__ArgX1_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgX2_5, (MR_Integer) 0)));
                MR_Float measurements__ArgY1_12;

                measurements__succeeded = ((MR_tag((MR_Word) measurements__ArgY2_6)) == (MR_mktag((MR_Integer) 1)));
                if (measurements__succeeded)
                  {
                    measurements__ArgY1_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__ArgY2_6, (MR_Integer) 0)));
                    measurements__succeeded = (measurements__ArgX1_11 == measurements__ArgY1_12);
                  }
              }
          }
      }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____cost_0_0(
  MR_Word * measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_12 = (MR_Integer) measurements__HeadVar__2_2;
    MR_Integer measurements__CastY_13 = (MR_Integer) measurements__HeadVar__3_3;

    measurements__succeeded = (measurements__CastX_12 == measurements__CastY_13);
    if (measurements__succeeded)
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Float measurements__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_16, measurements__ArgY1_5);
            }
          }
        else
          *measurements__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Float measurements__Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *measurements__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Float measurements__ArgY1_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__Var_17, measurements__ArgY1_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CastX_7 = (MR_Integer) measurements__HeadVar__1_1;
    MR_Integer measurements__CastY_8 = (MR_Integer) measurements__HeadVar__2_2;

    measurements__succeeded = (measurements__CastX_7 == measurements__CastY_8);
    if (measurements__succeeded)
      measurements__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_4;

        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (measurements__succeeded)
          {
            measurements__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
            measurements__succeeded = (measurements__ArgX1_3 == measurements__ArgY1_4);
          }
      }
    else
      {
        MR_Float measurements__ArgX1_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__ArgY1_6;

        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (measurements__succeeded)
          {
            measurements__ArgY1_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
            measurements__succeeded = (measurements__ArgX1_5 == measurements__ArgY1_6);
          }
      }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
  MR_Float measurements__Weight_7,
  MR_Float measurements__Value_8,
  MR_Float measurements__STATE_VARIABLE_WeightedSum_0_11,
  MR_Float * measurements__STATE_VARIABLE_WeightedSum_12,
  MR_Float measurements__STATE_VARIABLE_TotalWeight_0_13,
  MR_Float * measurements__STATE_VARIABLE_TotalWeight_14)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__Var_16 = (measurements__Weight_7 * measurements__Value_8);

    *measurements__STATE_VARIABLE_WeightedSum_12 = (measurements__STATE_VARIABLE_WeightedSum_0_11 + measurements__Var_16);
    *measurements__STATE_VARIABLE_TotalWeight_14 = (measurements__STATE_VARIABLE_TotalWeight_0_13 + measurements__Weight_7);
  }
}

static void MR_CALL 
measurements__weighted_average_3_p_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3,
  MR_Box * measurements__wrapper_arg_4,
  MR_Box measurements__wrapper_arg_5,
  MR_Box * measurements__wrapper_arg_6)
{
  {
    MR_Box measurements__closure = measurements__closure_arg;
    MR_Float measurements__conv1_STATE_VARIABLE_WeightedSum_12;
    MR_Float measurements__conv0_STATE_VARIABLE_TotalWeight_14;

    {
      measurements__update_weighted_sum_6_p_0(MR_unbox_float(measurements__wrapper_arg_1), MR_unbox_float(measurements__wrapper_arg_2), MR_unbox_float(measurements__wrapper_arg_3), &measurements__conv1_STATE_VARIABLE_WeightedSum_12, MR_unbox_float(measurements__wrapper_arg_5), &measurements__conv0_STATE_VARIABLE_TotalWeight_14);
    }
    *measurements__wrapper_arg_4 = MR_box_float(measurements__conv1_STATE_VARIABLE_WeightedSum_12);
    *measurements__wrapper_arg_6 = MR_box_float(measurements__conv0_STATE_VARIABLE_TotalWeight_14);
  }
}

void MR_CALL 
measurements__weighted_average_3_p_0(
  MR_Word measurements__Weights_4,
  MR_Word measurements__Values_5,
  MR_Float * measurements__Average_6)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    MR_Float measurements__WeightedSum_7;
    MR_Float measurements__TotalWeight_8;
    MR_Box measurements__conv3_WeightedSum_7;
    MR_Box measurements__conv2_TotalWeight_8;
    MR_Float measurements__Var_12;
    MR_Float measurements__Var_13;

    {
      mercury__list__foldl2_corresponding_7_p_0(measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, (MR_Word) &measurements_scalar_common_3[4], measurements__Weights_4, measurements__Values_5, MR_box_float((MR_Float) 0.0000000000000000), &measurements__conv3_WeightedSum_7, MR_box_float((MR_Float) 0.0000000000000000), &measurements__conv2_TotalWeight_8);
    }
    measurements__WeightedSum_7 = MR_unbox_float(measurements__conv3_WeightedSum_7);
    measurements__TotalWeight_8 = MR_unbox_float(measurements__conv2_TotalWeight_8);
    {
      measurements__Var_12 = mercury__float__abs_1_f_0(measurements__TotalWeight_8);
    }
    {
      measurements__Var_13 = mercury__float__epsilon_0_f_0();
    }
    measurements__succeeded = (measurements__Var_12 < measurements__Var_13);
    if (measurements__succeeded)
      *measurements__Average_6 = (MR_Float) 0.0000000000000000;
    else
      {
        *measurements__Average_6 = mercury__float__f_slash_2_f_0(measurements__WeightedSum_7, measurements__TotalWeight_8);
      }
  }
}

MR_Integer MR_CALL 
measurements__parallel_exec_metrics_get_num_calls_1_f_0(
  MR_Word measurements__Pem_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 2)));
    MR_Float measurements__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 0)));
    MR_Float measurements__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 1)));
    MR_Float measurements__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 3)));
    MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 4)));
    MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 5)));
    MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 6)));
    MR_Word measurements__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 7)));

    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__finalise_parallel_exec_metrics_1_f_0(
  MR_Word measurements__IncompleteMetrics_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__Metrics_4;
    MR_Float measurements__TimeBefore_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 0)));
    MR_Float measurements__TimeAfter_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 1)));
    MR_Integer measurements__NumCalls_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 2)));
    MR_Float measurements__SparkCost_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 3)));
    MR_Float measurements__SparkDelay_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 4)));
    MR_Float measurements__BarrierCost_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 5)));
    MR_Float measurements__ContextWakeupDelay_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 6)));
    MR_Word measurements__MaybeInternal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 7)));
    MR_Word measurements__Internal_13;
    MR_Float measurements__BeforeAndAfterTime_14;
    MR_Integer measurements__NumConjuncts_15;
    MR_Float measurements__InnerParTime_16;
    MR_Float measurements__FirstConjDeadTime_17;
    MR_Float measurements__FirstConjWakeupPenalty_18;
    MR_Float measurements__ParTime_19;
    MR_Float measurements__InnerSeqTime_20;
    MR_Float measurements__SeqTime_21;
    MR_Float measurements__FirstConjParTime_22;
    MR_Float measurements__FutureDeadTime_23;
    MR_Float measurements__SparkCosts_24;
    MR_Float measurements__BarrierCosts_25;
    MR_Float measurements__SignalCosts_26;
    MR_Float measurements__WaitCosts_27;
    MR_Float measurements__Var_32;
    MR_Float measurements__Var_33;
    MR_Integer measurements__Var_34;
    MR_Float measurements__Var_36;

    if ((measurements__MaybeInternal_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.finalise_parallel_exec_metrics\'/1", (MR_String) "cannot finalise empty parallel metrics");
        }
      }
    else
      measurements__Internal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__MaybeInternal_12, (MR_Integer) 0)));
    measurements__BeforeAndAfterTime_14 = (measurements__TimeBefore_5 + measurements__TimeAfter_6);
    {
      measurements__NumConjuncts_15 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(measurements__Internal_13);
    }
    {
      measurements__InnerParTime_16 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(measurements__Internal_13, measurements__SparkDelay_9, measurements__NumConjuncts_15);
    }
    measurements__Var_32 = (measurements__InnerParTime_16 + measurements__BeforeAndAfterTime_14);
    {
      measurements__InnerSeqTime_20 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(measurements__Internal_13);
    }
    measurements__SeqTime_21 = (measurements__InnerSeqTime_20 + measurements__BeforeAndAfterTime_14);
    {
      measurements__FirstConjParTime_22 = measurements__pem_get_first_conj_par_time_1_f_0(measurements__Internal_13);
    }
    measurements__FirstConjDeadTime_17 = (measurements__InnerParTime_16 - measurements__FirstConjParTime_22);
    measurements__succeeded = (measurements__FirstConjDeadTime_17 > ((MR_Float) 0.0000000000000000));
    if (measurements__succeeded)
      measurements__FirstConjWakeupPenalty_18 = measurements__ContextWakeupDelay_11;
    else
      measurements__FirstConjWakeupPenalty_18 = (MR_Float) 0.0000000000000000;
    measurements__ParTime_19 = (measurements__Var_32 + measurements__FirstConjWakeupPenalty_18);
    {
      measurements__FutureDeadTime_23 = measurements__pem_get_future_dead_time_1_f_0(measurements__Internal_13);
    }
    measurements__Var_34 = (measurements__NumConjuncts_15 - (MR_Integer) 1);
    {
      measurements__Var_33 = mercury__float__float_1_f_0(measurements__Var_34);
    }
    measurements__SparkCosts_24 = (measurements__Var_33 * measurements__SparkCost_8);
    {
      measurements__Var_36 = mercury__float__float_1_f_0(measurements__NumConjuncts_15);
    }
    measurements__BarrierCosts_25 = (measurements__Var_36 * measurements__BarrierCost_10);
    {
      measurements__SignalCosts_26 = measurements__pem_get_signal_costs_1_f_0(measurements__Internal_13);
    }
    {
      measurements__WaitCosts_27 = measurements__pem_get_wait_costs_1_f_0(measurements__Internal_13);
    }
    {
      measurements__Metrics_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 0) = ((MR_Box) (measurements__NumCalls_7));
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 1) = MR_box_float(measurements__SeqTime_21);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 2) = MR_box_float(measurements__ParTime_19);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 3) = MR_box_float(measurements__SparkCosts_24);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 4) = MR_box_float(measurements__BarrierCosts_25);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 5) = MR_box_float(measurements__SignalCosts_26);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 6) = MR_box_float(measurements__WaitCosts_27);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 7) = MR_box_float(measurements__FirstConjDeadTime_17);
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 8) = MR_box_float(measurements__FutureDeadTime_23);
    }
    return measurements__Metrics_4;
  }
}

static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;

    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__WaitsR_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__WaitsL_13;
        MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

        {
          measurements__WaitsL_13 = measurements__pem_get_wait_costs_1_f_0(measurements__Left_6);
        }
        measurements__HeadVar__2_2 = (measurements__WaitsR_8 + measurements__WaitsL_13);
      }
    else
      measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
    return measurements__HeadVar__2_2;
  }
}

static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;

    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__SignalsR_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__SignalsL_13;
        MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

        {
          measurements__SignalsL_13 = measurements__pem_get_signal_costs_1_f_0(measurements__Left_6);
        }
        measurements__HeadVar__2_2 = (measurements__SignalsR_7 + measurements__SignalsL_13);
      }
    else
      {
        MR_Float measurements__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

        measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
      }
    return measurements__HeadVar__2_2;
  }
}

static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;

    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__RightDeadTime_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));
        MR_Float measurements__LeftDeadTime_12;
        MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));

        {
          measurements__LeftDeadTime_12 = measurements__pem_get_future_dead_time_1_f_0(measurements__Left_6);
        }
        measurements__HeadVar__2_2 = (measurements__RightDeadTime_11 + measurements__LeftDeadTime_12);
      }
    else
      measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
    return measurements__HeadVar__2_2;
  }
}

static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool measurements__succeeded;
        MR_Float measurements__Time_2;

        if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
            MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
            MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
            MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
            MR_Float measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

            /* direct tailcall eliminated */
            {
              MR_Word measurements__next_value_of_HeadVar__1_1 = measurements__Left_6;

              measurements__HeadVar__1_1 = measurements__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        else
          {
            MR_Float measurements__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float measurements__Var_5;

            measurements__Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
            measurements__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          }
        return measurements__Time_2;
      }
      break;
    }
}

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__Time_2;

    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__MetricsLeft_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float measurements__TimeRight_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__TimeLeft_13;
        MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

        {
          measurements__TimeLeft_13 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(measurements__MetricsLeft_6);
        }
        measurements__Time_2 = (measurements__TimeLeft_13 + measurements__TimeRight_9);
      }
    else
      {
        MR_Float measurements__Var_4;
        MR_Float measurements__Var_5;

        measurements__Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
        measurements__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
        measurements__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
      }
    return measurements__Time_2;
  }
}

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
  MR_Word measurements__PEM_5,
  MR_Float measurements__SparkDelay_6,
  MR_Integer measurements__Depth_7)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__Time_8;

    if (((MR_tag((MR_Word) measurements__PEM_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__MetricsLeft_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 0)));
        MR_Float measurements__TimeRightPar_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 4)));
        MR_Float measurements__TimeRightDead_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 5)));
        MR_Float measurements__TimeRight_18;
        MR_Float measurements__TimeLeft_19;
        MR_Float measurements__Var_20 = (measurements__TimeRightPar_16 + measurements__TimeRightDead_17);
        MR_Float measurements__Var_21;
        MR_Float measurements__Var_22;
        MR_Integer measurements__Var_23 = (measurements__Depth_7 - (MR_Integer) 1);
        MR_Integer measurements__Var_25;
        MR_Float measurements__Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 1)));
        MR_Float measurements__Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 2)));
        MR_Float measurements__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 3)));

        {
          measurements__Var_22 = mercury__float__float_1_f_0(measurements__Var_23);
        }
        measurements__Var_21 = (measurements__SparkDelay_6 * measurements__Var_22);
        measurements__TimeRight_18 = (measurements__Var_20 + measurements__Var_21);
        measurements__Var_25 = (measurements__Depth_7 - (MR_Integer) 1);
        {
          measurements__TimeLeft_19 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(measurements__MetricsLeft_12, measurements__SparkDelay_6, measurements__Var_25);
        }
        {
          measurements__Time_8 = mercury__float__max_2_f_0(measurements__TimeLeft_19, measurements__TimeRight_18);
        }
      }
    else
      {
        MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 0)));
        MR_Float measurements__Var_11;

        measurements__Time_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 1)));
        measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 2)));
      }
    return measurements__Time_8;
  }
}

static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer measurements__Var_13;
        MR_Float measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float measurements__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float measurements__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float measurements__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float measurements__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

        {
          measurements__Var_13 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(measurements__Left_6);
        }
        measurements__HeadVar__2_2 = ((MR_Integer) 1 + measurements__Var_13);
      }
    else
      measurements__HeadVar__2_2 = (MR_Integer) 1;
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__init_empty_parallel_exec_metrics_7_f_0(
  MR_Float measurements__TimeBefore_9,
  MR_Float measurements__TimeAfter_10,
  MR_Integer measurements__NumCalls_11,
  MR_Float measurements__SparkCost_12,
  MR_Float measurements__SparkDelay_13,
  MR_Float measurements__BarrierCost_14,
  MR_Float measurements__ContextWakeupDelay_15)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__8_8;

    {
      measurements__HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 0) = MR_box_float(measurements__TimeBefore_9);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 1) = MR_box_float(measurements__TimeAfter_10);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 2) = ((MR_Box) (measurements__NumCalls_11));
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 3) = MR_box_float(measurements__SparkCost_12);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 4) = MR_box_float(measurements__SparkDelay_13);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 5) = MR_box_float(measurements__BarrierCost_14);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 6) = MR_box_float(measurements__ContextWakeupDelay_15);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return measurements__HeadVar__8_8;
  }
}

MR_Word MR_CALL 
measurements__init_parallel_exec_metrics_incomplete_6_f_0(
  MR_Word measurements__Metrics0_8,
  MR_Float measurements__TimeSignals_9,
  MR_Float measurements__TimeWaits_10,
  MR_Float measurements__TimeBSeq_11,
  MR_Float measurements__TimeBPar_12,
  MR_Float measurements__TimeBDead_13)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__Metrics_14;
    MR_Word measurements__MaybeInternal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 7)));
    MR_Word measurements__Internal_17;
    MR_Word measurements__Var_21;
    MR_Float measurements__Var_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 0)));
    MR_Float measurements__Var_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 1)));
    MR_Integer measurements__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 2)));
    MR_Float measurements__Var_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 3)));
    MR_Float measurements__Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 4)));
    MR_Float measurements__Var_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 5)));
    MR_Float measurements__Var_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 6)));

    if ((measurements__MaybeInternal0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          measurements__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 0) = MR_box_float(measurements__TimeBSeq_11);
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 1) = MR_box_float(measurements__TimeBPar_12);
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 2) = MR_box_float(measurements__TimeSignals_9);
        }
        measurements__succeeded = (measurements__TimeBDead_13 == ((MR_Float) 0.0000000000000000));
        if (measurements__succeeded)
          measurements__succeeded = (measurements__TimeWaits_10 == ((MR_Float) 0.0000000000000000));
        if (measurements__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.init_parallel_exec_metrics_incomplete\'/6", (MR_String) "TimeWaits != 0 or TimeBDead != 0");
            }
          }
      }
    else
      {
        MR_Word measurements__Internal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__MaybeInternal0_15, (MR_Integer) 0)));

        {
          measurements__Internal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 0) = ((MR_Box) (measurements__Internal0_16));
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 1) = MR_box_float(measurements__TimeSignals_9);
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 2) = MR_box_float(measurements__TimeWaits_10);
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 3) = MR_box_float(measurements__TimeBSeq_11);
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 4) = MR_box_float(measurements__TimeBPar_12);
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 5) = MR_box_float(measurements__TimeBDead_13);
        }
      }
    {
      measurements__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurements__Var_21, 0) = ((MR_Box) (measurements__Internal_17));
    }
    {
      measurements__Metrics_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 0) = MR_box_float(measurements__Var_22);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 1) = MR_box_float(measurements__Var_23);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 2) = ((MR_Box) (measurements__Var_24));
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 3) = MR_box_float(measurements__Var_25);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 4) = MR_box_float(measurements__Var_26);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 5) = MR_box_float(measurements__Var_27);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 6) = MR_box_float(measurements__Var_28);
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 7) = ((MR_Box) (measurements__Var_21));
    }
    return measurements__Metrics_14;
  }
}

MR_bool MR_CALL 
measurements__exceeded_desired_parallelism_2_p_0(
  MR_Float measurements__DesiredParallelism_3,
  MR_Word measurements__Parallelism_4)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__LikelyParallelism_5 = MR_unbox_float((MR_Box) measurements__Parallelism_4);

    measurements__succeeded = (measurements__DesiredParallelism_3 < measurements__LikelyParallelism_5);
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements__sub_computation_parallelism_3_p_0(
  MR_Word measurements__ParentParallelism_4,
  MR_Float measurements__Prob_5,
  MR_Word * measurements__Parallelism_6)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__ProbFloat_13;
    MR_Float measurements__ParLikely_14;
    MR_Float measurements__Likely_16;
    MR_Float measurements__Var_17;

    {
      measurements__ProbFloat_13 = measurement_units__probability_to_float_1_f_0(measurements__Prob_5);
    }
    measurements__ParLikely_14 = MR_unbox_float((MR_Box) measurements__ParentParallelism_4);
    measurements__Var_17 = (measurements__ProbFloat_13 * (MR_unbox_float((MR_Box) (MR_Word) (MR_Box) &measurements_scalar_common_5[1])));
    measurements__Likely_16 = (measurements__ParLikely_14 + measurements__Var_17);
    *measurements__Parallelism_6 = (MR_Word) MR_box_float(measurements__Likely_16);
  }
}

void MR_CALL 
measurements__sub_computation_parallelism_4_p_0(
  MR_Word measurements__ParentParallelism_5,
  MR_Float measurements__Prob_6,
  MR_Word measurements__ChildParallelism_7,
  MR_Word * measurements__Parallelism_8)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__ProbFloat_9;
    MR_Float measurements__ParLikely_10;
    MR_Float measurements__ChildLikely_11;
    MR_Float measurements__Likely_12;
    MR_Float measurements__Var_13;

    {
      measurements__ProbFloat_9 = measurement_units__probability_to_float_1_f_0(measurements__Prob_6);
    }
    measurements__ParLikely_10 = MR_unbox_float((MR_Box) measurements__ParentParallelism_5);
    measurements__ChildLikely_11 = MR_unbox_float((MR_Box) measurements__ChildParallelism_7);
    measurements__Var_13 = (measurements__ProbFloat_9 * measurements__ChildLikely_11);
    measurements__Likely_12 = (measurements__ParLikely_10 + measurements__Var_13);
    *measurements__Parallelism_8 = (MR_Word) MR_box_float(measurements__Likely_12);
  }
}

MR_Word MR_CALL 
measurements__some_parallelism_1_f_0(
  MR_Float measurements__Num_3)
{
  {
    MR_bool measurements__succeeded = (measurements__Num_3 < ((MR_Float) 1.0000000000000000));
    MR_Word measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__Num_3);

    if (measurements__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.some_parallelism\'/1", (MR_String) "Parallelism amount cannot ever be less than 1.0");
        }
      }
    else
      {
      }
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__no_parallelism_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) (MR_Box) &measurements_scalar_common_5[1];
  }
}

MR_Word MR_CALL 
measurements__static_coverage_maybe_get_coverage_points_1_f_0(
  MR_Word measurements__MaybeCoverage_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__MaybeCoverage_2 = measurements__MaybeCoverage_3;

    return measurements__MaybeCoverage_2;
  }
}

void MR_CALL 
measurements__array_to_static_coverage_2_p_0(
  MR_ArrayPtr measurements__Array_3,
  MR_Word * measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *measurements__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__Array_3));
    }
  }
}

static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3,
  MR_Box * measurements__wrapper_arg_4)
{
  {
    MR_Box measurements__closure = measurements__closure_arg;
    MR_ArrayPtr measurements__conv1_LambdaHeadVar__4_22;

    {
      measurements__IntroducedFrom__pred__add_coverage_arrays__936__1_4_p_0(((MR_Integer) measurements__wrapper_arg_1), ((MR_Integer) measurements__wrapper_arg_2), ((MR_ArrayPtr) measurements__wrapper_arg_3), &measurements__conv1_LambdaHeadVar__4_22);
    }
    *measurements__wrapper_arg_4 = ((MR_Box) (measurements__conv1_LambdaHeadVar__4_22));
  }
}

void MR_CALL 
measurements__add_coverage_arrays_3_p_0(
  MR_ArrayPtr measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2,
  MR_Word * measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;

    if ((measurements__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *measurements__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__HeadVar__1_1));
      }
    else
      {
        MR_ArrayPtr measurements__STATE_VARIABLE_Array_0_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
        MR_ArrayPtr measurements__STATE_VARIABLE_Array_15;
        MR_Word measurements__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer measurements__Min_7;
        MR_Integer measurements__Max_8;
        MR_Integer measurements__Var_35;
        MR_Integer measurements__Var_36;

        {
          mercury__array__bounds_3_p_0(measurements__TypeCtorInfo_31_31, (MR_ArrayPtr) measurements__HeadVar__1_1, &measurements__Min_7, &measurements__Max_8);
        }
        {
          mercury__array__bounds_3_p_0(measurements__TypeCtorInfo_31_31, (MR_ArrayPtr) measurements__STATE_VARIABLE_Array_0_14, &measurements__Var_35, &measurements__Var_36);
        }
        measurements__succeeded = (measurements__Min_7 == measurements__Var_35);
        if (measurements__succeeded)
          measurements__succeeded = (measurements__Max_8 == measurements__Var_36);
        if (measurements__succeeded)
          {
            MR_Word measurements__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_ArrayPtr measurements__STATE_VARIABLE_Array_16_16;
            MR_ArrayPtr measurements__conv0_STATE_VARIABLE_Array_16_16;
            MR_Box measurements__conv2_STATE_VARIABLE_Array_15;

            {
              measurements__conv0_STATE_VARIABLE_Array_16_16 = mercury__array__copy_1_f_0(measurements__TypeCtorInfo_32_32, (MR_ArrayPtr) measurements__STATE_VARIABLE_Array_0_14);
            }
            measurements__STATE_VARIABLE_Array_16_16 = (MR_ArrayPtr) measurements__conv0_STATE_VARIABLE_Array_16_16;
            {
              array_util__array_foldl_from_0_4_p_1(measurements__TypeCtorInfo_32_32, (MR_Word) &measurements_scalar_common_1[0], (MR_Word) &measurements_scalar_common_3[3], (MR_ArrayPtr) measurements__HeadVar__1_1, ((MR_Box) (measurements__STATE_VARIABLE_Array_16_16)), &measurements__conv2_STATE_VARIABLE_Array_15);
            }
            measurements__STATE_VARIABLE_Array_15 = ((MR_ArrayPtr) measurements__conv2_STATE_VARIABLE_Array_15);
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.add_coverage_arrays\'/3", (MR_String) "arrays\' bounds do not match");
              return;
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *measurements__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__STATE_VARIABLE_Array_15));
        }
      }
  }
}

MR_Word MR_CALL 
measurements__zero_static_coverage_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_bool MR_CALL 
measurements__recursion_depth_is_base_case_1_p_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__D_2 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
    MR_Float measurements__Var_4;

    measurements__succeeded = (measurements__D_2 < ((MR_Float) 0.50000000000000000));
    if (measurements__succeeded)
      {
        measurements__Var_4 = (MR_Float) -0.50000000000000000;
        measurements__succeeded = (measurements__D_2 >= measurements__Var_4);
      }
    return measurements__succeeded;
  }
}

void MR_CALL 
measurements__recursion_depth_descend_2_p_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word * measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__D_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
    MR_Float measurements__Var_4 = (measurements__D_3 - ((MR_Float) 1.0000000000000000));

    *measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__Var_4);
    measurements__succeeded = (measurements__D_3 >= ((MR_Float) 0.50000000000000000));
    if (measurements__succeeded)
      {
      }
    else
      {
        MR_String measurements__Var_9;
        MR_Float measurements__Var_13 = (measurements__D_3 - ((MR_Float) 1.0000000000000000));
        MR_String measurements__Var_16;

        {
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &measurements_scalar_common_6[1], (MR_Integer) 2, measurements__Var_13, &measurements__Var_16);
        }
        {
          measurements__Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "Recursion depth will be less than zero: ", measurements__Var_16);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.recursion_depth_descend\'/2", measurements__Var_9);
          return;
        }
      }
  }
}

MR_Integer MR_CALL 
measurements__recursion_depth_to_int_1_f_0(
  MR_Word measurements__D_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;
    MR_Float measurements__Var_4 = MR_unbox_float((MR_Box) measurements__D_3);

    {
      measurements__HeadVar__2_2 = mercury__float__round_to_int_1_f_0(measurements__Var_4);
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurements__recursion_depth_to_float_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__F_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);

    return measurements__F_3;
  }
}

MR_Word MR_CALL 
measurements__recursion_depth_from_float_1_f_0(
  MR_Float measurements__F_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__F_3);

    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__goal_cost_change_calls_2_f_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Integer measurements__Calls_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box measurements__conv0_HeadVar__3_3;

          {
            measurements__conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_goal_cost_csq_0, (MR_String) "measurements", (MR_String) "function \140measurements.goal_cost_change_calls\'/2", (MR_String) "Cannot compute new cost");
          }
          measurements__HeadVar__3_3 = ((MR_Word) measurements__conv0_HeadVar__3_3);
        }
        break;
      case (MR_Integer) 1:
        {
          measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Calls_2));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word measurements__Cost0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Calls0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word measurements__Cost_13;
          MR_Float measurements__Var_14;
          MR_Float measurements__Var_15;

          {
            measurements__Var_15 = mercury__float__float_1_f_0(measurements__Calls0_11);
          }
          if (((MR_tag((MR_Word) measurements__Cost0_10)) == (MR_mktag((MR_Integer) 0))))
            measurements__Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost0_10, (MR_Integer) 0)));
          else
            {
              MR_Float measurements__Total_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost0_10, (MR_Integer) 0)));

              {
                measurements__Var_14 = mercury__float__f_slash_2_f_0(measurements__Total_18, measurements__Var_15);
              }
            }
          {
            measurements__Cost_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), measurements__Cost_13, 0) = MR_box_float(measurements__Var_14);
          }
          {
            measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_13));
            MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Calls_2));
          }
        }
        break;
    }
    return measurements__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
measurements__goal_cost_get_calls_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 2:
        {
          MR_Word measurements__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurements__goal_cost_get_total_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
        {
          MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Calls_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Float measurements__Var_6;

          {
            measurements__Var_6 = mercury__float__float_1_f_0(measurements__Calls_5);
          }
          if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Float measurements__PC_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));

              measurements__HeadVar__2_2 = (measurements__Var_6 * measurements__PC_10);
            }
          else
            measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurements__goal_cost_get_percall_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
        {
          MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Calls_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));

          measurements__succeeded = (measurements__Calls_5 == (MR_Integer) 0);
          if (measurements__succeeded)
            measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
          else
            {
              MR_Float measurements__Var_6;

              {
                measurements__Var_6 = mercury__float__float_1_f_0(measurements__Calls_5);
              }
              if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
                measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));
              else
                {
                  MR_Float measurements__Total_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));

                  {
                    measurements__HeadVar__2_2 = mercury__float__f_slash_2_f_0(measurements__Total_8, measurements__Var_6);
                  }
                }
            }
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__add_goal_costs_branch_3_f_0(
  MR_Integer measurements__TotalCalls_5,
  MR_Word measurements__A_6,
  MR_Word measurements__B_7)
{
  {
    MR_bool measurements__succeeded = (measurements__TotalCalls_5 == (MR_Integer) 0);
    MR_Word measurements__R_8;

    if (measurements__succeeded)
      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer measurements__CallsA_9;
        MR_Integer measurements__CallsB_10;
        MR_Integer measurements__Calls_44;

        switch (MR_tag((MR_Word) measurements__A_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              measurements__CallsA_9 = (MR_Integer) 0;
              switch (MR_tag((MR_Word) measurements__B_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.add_goal_costs_branch\'/3", (MR_String) "TotalCalls \\= 0 for a dead goal");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word measurements__Cost_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));

                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_11));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              measurements__CallsA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__A_6, (MR_Integer) 0)));
              switch (MR_tag((MR_Word) measurements__B_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    measurements__CallsB_10 = (MR_Integer) 0;
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word measurements__Cost_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));

                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_20));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word measurements__CostA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__A_6, (MR_Integer) 0)));

              measurements__CallsA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__A_6, (MR_Integer) 1)));
              switch (MR_tag((MR_Word) measurements__B_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    measurements__CallsB_10 = (MR_Integer) 0;
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__CostA_12));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__CostA_12));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word measurements__CostB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));
                    MR_Float measurements__Var_14;
                    MR_Float measurements__Var_15;
                    MR_Integer measurements__Var_16;
                    MR_Word measurements__Cost_23;
                    MR_Float measurements__Sum_30;
                    MR_Float measurements__CostTotalA_31;
                    MR_Float measurements__CostTotalB_32;

                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
                    {
                      measurements__Var_14 = mercury__float__float_1_f_0(measurements__CallsA_9);
                    }
                    {
                      measurements__Var_15 = mercury__float__float_1_f_0(measurements__CallsB_10);
                    }
                    if (((MR_tag((MR_Word) measurements__CostA_12)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Float measurements__PC_36 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostA_12, (MR_Integer) 0)));

                        measurements__CostTotalA_31 = (measurements__Var_14 * measurements__PC_36);
                      }
                    else
                      measurements__CostTotalA_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostA_12, (MR_Integer) 0)));
                    if (((MR_tag((MR_Word) measurements__CostB_13)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_Float measurements__PC_40 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_13, (MR_Integer) 0)));

                        measurements__CostTotalB_32 = (measurements__Var_15 * measurements__PC_40);
                      }
                    else
                      measurements__CostTotalB_32 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_13, (MR_Integer) 0)));
                    measurements__Sum_30 = (measurements__CostTotalA_31 + measurements__CostTotalB_32);
                    {
                      measurements__Cost_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurements__Cost_23, 0) = MR_box_float(measurements__Sum_30);
                    }
                    measurements__Var_16 = (measurements__CallsA_9 + measurements__CallsB_10);
                    {
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_23));
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__Var_16));
                    }
                  }
                  break;
              }
            }
            break;
        }
        measurements__Calls_44 = (measurements__CallsA_9 + measurements__CallsB_10);
        measurements__succeeded = (measurements__Calls_44 == measurements__TotalCalls_5);
        if (measurements__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.check_total_calls\'/3", (MR_String) "TotalCalls \\= CallsA + CallsB");
            }
          }
      }
    return measurements__R_8;
  }
}

MR_Word MR_CALL 
measurements__add_goal_costs_seq_2_f_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__HeadVar__2_2)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            measurements__HeadVar__3_3 = measurements__HeadVar__2_2;
            break;
          case (MR_Integer) 2:
            measurements__HeadVar__3_3 = measurements__HeadVar__2_2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
              break;
            case (MR_Integer) 1:
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word measurements__CostB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
                MR_Integer measurements__CallsB_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word measurements__Cost_16;
                MR_Float measurements__CostTotal_17;
                MR_Float measurements__Var_18;

                {
                  measurements__Var_18 = mercury__float__float_1_f_0(measurements__CallsB_15);
                }
                if (((MR_tag((MR_Word) measurements__CostB_14)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__PC_54 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_14, (MR_Integer) 0)));

                    measurements__CostTotal_17 = (measurements__Var_18 * measurements__PC_54);
                  }
                else
                  measurements__CostTotal_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_14, (MR_Integer) 0)));
                {
                  measurements__Cost_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), measurements__Cost_16, 0) = MR_box_float(measurements__CostTotal_17);
                }
                {
                  measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_16));
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Var_42));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word measurements__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
              break;
            case (MR_Integer) 1:
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word measurements__CostB_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
                MR_Integer measurements__CallsB_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word measurements__Cost_30;
                MR_Float measurements__CostTotal_32;
                MR_Float measurements__Var_33;
                MR_Float measurements__Var_34;
                MR_Float measurements__Var_35;
                MR_Float measurements__Var_36;

                {
                  measurements__Var_34 = mercury__float__float_1_f_0(measurements__Var_40);
                }
                if (((MR_tag((MR_Word) measurements__Var_41)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__PC_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Var_41, (MR_Integer) 0)));

                    measurements__Var_33 = (measurements__Var_34 * measurements__PC_46);
                  }
                else
                  measurements__Var_33 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Var_41, (MR_Integer) 0)));
                {
                  measurements__Var_36 = mercury__float__float_1_f_0(measurements__CallsB_29);
                }
                if (((MR_tag((MR_Word) measurements__CostB_28)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Float measurements__PC_50 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_28, (MR_Integer) 0)));

                    measurements__Var_35 = (measurements__Var_36 * measurements__PC_50);
                  }
                else
                  measurements__Var_35 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_28, (MR_Integer) 0)));
                measurements__CostTotal_32 = (measurements__Var_33 + measurements__Var_35);
                {
                  measurements__Cost_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), measurements__Cost_30, 0) = MR_box_float(measurements__CostTotal_32);
                }
                {
                  measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_30));
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Var_40));
                }
                measurements__succeeded = (measurements__Var_40 == (MR_Integer) 0);
                if (measurements__succeeded)
                  {
                    measurements__succeeded = (measurements__CostTotal_32 == ((MR_Float) 0.0000000000000000));
                    measurements__succeeded = !(measurements__succeeded);
                  }
                if (measurements__succeeded)
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.add_goal_costs_seq\'/2", (MR_String) "Calls = 0, Cost \\= 0");
                    }
                  }
                else
                  {
                  }
              }
              break;
          }
        }
        break;
    }
    return measurements__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurements__call_goal_cost_1_f_0(
  MR_Word measurements__CSCost_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__2_2;
    MR_Word measurements__Cost_4;
    MR_Integer measurements__Calls_5;
    MR_Float measurements__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 0)));
    MR_Word measurements__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 1)));
    MR_Float measurements__Var_7;

    {
      measurements__Calls_5 = mercury__float__round_to_int_1_f_0(measurements__Var_6);
    }
    measurements__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 0)));
    measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 1)));
    {
      measurements__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, 0) = ((MR_Box) (measurements__Cost_4));
      MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, 1) = ((MR_Box) (measurements__Calls_5));
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__call_goal_cost_2_f_0(
  MR_Integer measurements__Calls_4,
  MR_Float measurements__PercallCost_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;
    MR_Word measurements__Cost_6;

    {
      measurements__Cost_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__Cost_6, 0) = MR_box_float(measurements__PercallCost_5);
    }
    {
      measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_6));
      MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Calls_4));
    }
    return measurements__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurements__dead_goal_cost_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
measurements__atomic_goal_cost_1_f_0(
  MR_Integer measurements__Calls_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__2_2;

    {
      measurements__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, 0) = ((MR_Box) (measurements__Calls_3));
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__cs_cost_per_proc_call_2_f_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Word measurements__ParentCost_6)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;
    MR_Float measurements__CSCalls0_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__CSCost0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float measurements__CSCalls_7;
    MR_Word measurements__CSCost_8;
    MR_Integer measurements__TotalParentCalls_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 0)));
    MR_Float measurements__Var_10;
    MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 1)));
    MR_Word measurements__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 2)));

    {
      measurements__Var_10 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
    }
    {
      measurements__CSCalls_7 = mercury__float__f_slash_2_f_0(measurements__CSCalls0_4, measurements__Var_10);
    }
    if (((MR_tag((MR_Word) measurements__CSCost0_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__Percall_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost0_5, (MR_Integer) 0)));
        MR_Float measurements__Var_19;
        MR_Float measurements__Var_20;

        {
          measurements__Var_20 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
        }
        {
          measurements__Var_19 = mercury__float__f_slash_2_f_0(measurements__Percall_18, measurements__Var_20);
        }
        {
          measurements__CSCost_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), measurements__CSCost_8, 0) = MR_box_float(measurements__Var_19);
        }
      }
    else
      {
        MR_Float measurements__Total_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CSCost0_5, (MR_Integer) 0)));
        MR_Float measurements__Var_21;
        MR_Float measurements__Var_22;

        {
          measurements__Var_22 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
        }
        {
          measurements__Var_21 = mercury__float__f_slash_2_f_0(measurements__Total_17, measurements__Var_22);
        }
        {
          measurements__CSCost_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), measurements__CSCost_8, 0) = MR_box_float(measurements__Var_21);
        }
      }
    {
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__CSCalls_7);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__CSCost_8));
    }
    return measurements__HeadVar__3_3;
  }
}

void MR_CALL 
measurements__cs_cost_to_proc_cost_3_p_0(
  MR_Word measurements__HeadVar__1_1,
  MR_Integer measurements__TotalCalls_6,
  MR_Word * measurements__HeadVar__3_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__CSCalls_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__CSCost_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__NRCalls_7;
    MR_Integer measurements__RCalls_8;
    MR_Word measurements__PCost_9;
    MR_Integer measurements__Var_10;
    MR_Float measurements__Var_11;
    MR_Float measurements__Var_12;
    MR_Float measurements__Var_13;

    {
      measurements__NRCalls_7 = mercury__float__round_to_int_1_f_0(measurements__CSCalls_4);
    }
    {
      measurements__Var_10 = mercury__float__round_to_int_1_f_0(measurements__CSCalls_4);
    }
    measurements__RCalls_8 = (measurements__TotalCalls_6 - measurements__Var_10);
    if (((MR_tag((MR_Word) measurements__CSCost_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__PC_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_5, (MR_Integer) 0)));

        measurements__Var_12 = (measurements__CSCalls_4 * measurements__PC_18);
      }
    else
      measurements__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CSCost_5, (MR_Integer) 0)));
    measurements__Var_13 = (((MR_Float) 1.0000000000000000) * measurements__CSCalls_4);
    measurements__Var_11 = (measurements__Var_12 - measurements__Var_13);
    {
      measurements__PCost_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurements__PCost_9, 0) = MR_box_float(measurements__Var_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *measurements__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (measurements__NRCalls_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (measurements__RCalls_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (measurements__PCost_9));
    }
  }
}

MR_Float MR_CALL 
measurements__cs_cost_get_calls_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

    return measurements__Calls_3;
  }
}

MR_Float MR_CALL 
measurements__cs_cost_get_percall_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));
    else
      {
        MR_Float measurements__Total_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));

        {
          measurements__HeadVar__2_2 = mercury__float__f_slash_2_f_0(measurements__Total_6, measurements__Calls_3);
        }
      }
    return measurements__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurements__cs_cost_get_total_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__PC_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));

        measurements__HeadVar__2_2 = (measurements__Calls_3 * measurements__PC_8);
      }
    else
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_rec_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word measurements__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

    return measurements__RCalls_4;
  }
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_nonrec_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word measurements__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

    return measurements__NRCalls_3;
  }
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_total_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word measurements__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

    measurements__HeadVar__2_2 = (measurements__NRCalls_3 + measurements__RCalls_4);
    return measurements__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
measurements__proc_cost_get_total_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Float measurements__HeadVar__2_2;
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word measurements__Cost_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float measurements__Var_6;
    MR_Integer measurements__Var_7 = (measurements__NRCalls_3 + measurements__RCalls_4);

    {
      measurements__Var_6 = mercury__float__float_1_f_0(measurements__Var_7);
    }
    if (((MR_tag((MR_Word) measurements__Cost_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float measurements__PC_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_5, (MR_Integer) 0)));

        measurements__HeadVar__2_2 = (measurements__Var_6 * measurements__PC_11);
      }
    else
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_5, (MR_Integer) 0)));
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__zero_cs_cost_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) &measurements_scalar_common_1[3];
  }
}

MR_Word MR_CALL 
measurements__build_cs_cost_csq_percall_2_f_0(
  MR_Float measurements__Calls_4,
  MR_Float measurements__PercallCost_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;
    MR_Word measurements__Var_6;

    {
      measurements__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__Var_6, 0) = MR_box_float(measurements__PercallCost_5);
    }
    {
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__Calls_4);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Var_6));
    }
    return measurements__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurements__build_cs_cost_csq_2_f_0(
  MR_Integer measurements__Calls_4,
  MR_Float measurements__TotalCost_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__3_3;
    MR_Float measurements__Var_6;
    MR_Word measurements__Var_7;

    {
      measurements__Var_6 = mercury__float__float_1_f_0(measurements__Calls_4);
    }
    {
      measurements__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurements__Var_7, 0) = MR_box_float(measurements__TotalCost_5);
    }
    {
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__Var_6);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Var_7));
    }
    return measurements__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
measurements__build_proc_cost_csq_3_f_0(
  MR_Integer measurements__NonRecursiveCalls_5,
  MR_Integer measurements__RecursiveCalls_6,
  MR_Integer measurements__TotalCost_7)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__4_4;
    MR_Word measurements__Var_8;
    MR_Float measurements__Var_9;

    {
      measurements__Var_9 = mercury__float__float_1_f_0(measurements__TotalCost_7);
    }
    {
      measurements__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), measurements__Var_8, 0) = MR_box_float(measurements__Var_9);
    }
    {
      measurements__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 0) = ((MR_Box) (measurements__NonRecursiveCalls_5));
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 1) = ((MR_Box) (measurements__RecursiveCalls_6));
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 2) = ((MR_Box) (measurements__Var_8));
    }
    return measurements__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
measurements__compute_is_active_1_f_0(
  MR_Word measurements__Own_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__IsActive_4;

    switch (MR_tag((MR_Word) measurements__Own_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 0)));
          MR_Integer measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 1)));
          MR_Integer measurements__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 2)));
          MR_Integer measurements__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 3)));
          MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 4)));
          MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 5)));
          MR_Integer measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 6)));
          MR_Integer measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 7)));

          measurements__succeeded = (measurements__Var_21 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Var_22 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Var_23 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    measurements__succeeded = (measurements__Var_24 == (MR_Integer) 0);
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 0)));
          MR_Integer measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 1)));
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 2)));
          MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 3)));
          MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 4)));

          measurements__succeeded = (measurements__Var_20 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 0)));
          MR_Integer measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 1)));
          MR_Integer measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 2)));
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 3)));

          measurements__succeeded = (measurements__Var_19 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 0)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 1)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 2)));

          measurements__succeeded = (measurements__Var_17 == (MR_Integer) 0);
          if (measurements__succeeded)
            measurements__succeeded = (measurements__Var_18 == (MR_Integer) 0);
        }
        break;
    }
    if (measurements__succeeded)
      measurements__IsActive_4 = (MR_Integer) 1;
    else
      measurements__IsActive_4 = (MR_Integer) 0;
    return measurements__IsActive_4;
  }
}

MR_String MR_CALL 
measurements__own_to_string_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_String measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Exits_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Fails_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Redos_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Excps_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Quanta_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__CallSeqs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer measurements__Allocs_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          MR_Integer measurements__Words_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
          MR_String measurements__Var_12;
          MR_String measurements__Var_13;
          MR_String measurements__Var_14;
          MR_String measurements__Var_16;
          MR_String measurements__Var_17;
          MR_String measurements__Var_18;
          MR_String measurements__Var_20;
          MR_String measurements__Var_21;
          MR_String measurements__Var_22;
          MR_String measurements__Var_24;
          MR_String measurements__Var_25;
          MR_String measurements__Var_26;
          MR_String measurements__Var_28;
          MR_String measurements__Var_29;
          MR_String measurements__Var_30;
          MR_String measurements__Var_32;
          MR_String measurements__Var_33;
          MR_String measurements__Var_34;
          MR_String measurements__Var_36;
          MR_String measurements__Var_37;
          MR_String measurements__Var_38;
          MR_String measurements__Var_40;
          MR_String measurements__Var_41;

          {
            measurements__Var_13 = mercury__string__int_to_string_1_f_0(measurements__Exits_3);
          }
          {
            measurements__Var_17 = mercury__string__int_to_string_1_f_0(measurements__Fails_4);
          }
          {
            measurements__Var_21 = mercury__string__int_to_string_1_f_0(measurements__Redos_5);
          }
          {
            measurements__Var_25 = mercury__string__int_to_string_1_f_0(measurements__Excps_6);
          }
          {
            measurements__Var_29 = mercury__string__int_to_string_1_f_0(measurements__Quanta_7);
          }
          {
            measurements__Var_33 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_8);
          }
          {
            measurements__Var_37 = mercury__string__int_to_string_1_f_0(measurements__Allocs_9);
          }
          {
            measurements__Var_41 = mercury__string__int_to_string_1_f_0(measurements__Words_10);
          }
          {
            measurements__Var_40 = mercury__string__f_43_43_2_f_0(measurements__Var_41, (MR_String) ")");
          }
          {
            measurements__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_40);
          }
          {
            measurements__Var_36 = mercury__string__f_43_43_2_f_0(measurements__Var_37, measurements__Var_38);
          }
          {
            measurements__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_36);
          }
          {
            measurements__Var_32 = mercury__string__f_43_43_2_f_0(measurements__Var_33, measurements__Var_34);
          }
          {
            measurements__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_32);
          }
          {
            measurements__Var_28 = mercury__string__f_43_43_2_f_0(measurements__Var_29, measurements__Var_30);
          }
          {
            measurements__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_28);
          }
          {
            measurements__Var_24 = mercury__string__f_43_43_2_f_0(measurements__Var_25, measurements__Var_26);
          }
          {
            measurements__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_24);
          }
          {
            measurements__Var_20 = mercury__string__f_43_43_2_f_0(measurements__Var_21, measurements__Var_22);
          }
          {
            measurements__Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_20);
          }
          {
            measurements__Var_16 = mercury__string__f_43_43_2_f_0(measurements__Var_17, measurements__Var_18);
          }
          {
            measurements__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_16);
          }
          {
            measurements__Var_12 = mercury__string__f_43_43_2_f_0(measurements__Var_13, measurements__Var_14);
          }
          {
            measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "all(", measurements__Var_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Exits_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Quanta_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__CallSeqs_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Allocs_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Words_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_String measurements__Var_49;
          MR_String measurements__Var_50;
          MR_String measurements__Var_51;
          MR_String measurements__Var_53;
          MR_String measurements__Var_54;
          MR_String measurements__Var_55;
          MR_String measurements__Var_57;
          MR_String measurements__Var_58;
          MR_String measurements__Var_59;
          MR_String measurements__Var_61;
          MR_String measurements__Var_62;
          MR_String measurements__Var_63;
          MR_String measurements__Var_65;
          MR_String measurements__Var_66;

          {
            measurements__Var_50 = mercury__string__int_to_string_1_f_0(measurements__Exits_43);
          }
          {
            measurements__Var_54 = mercury__string__int_to_string_1_f_0(measurements__Quanta_44);
          }
          {
            measurements__Var_58 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_45);
          }
          {
            measurements__Var_62 = mercury__string__int_to_string_1_f_0(measurements__Allocs_46);
          }
          {
            measurements__Var_66 = mercury__string__int_to_string_1_f_0(measurements__Words_47);
          }
          {
            measurements__Var_65 = mercury__string__f_43_43_2_f_0(measurements__Var_66, (MR_String) ")");
          }
          {
            measurements__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_65);
          }
          {
            measurements__Var_61 = mercury__string__f_43_43_2_f_0(measurements__Var_62, measurements__Var_63);
          }
          {
            measurements__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_61);
          }
          {
            measurements__Var_57 = mercury__string__f_43_43_2_f_0(measurements__Var_58, measurements__Var_59);
          }
          {
            measurements__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_57);
          }
          {
            measurements__Var_53 = mercury__string__f_43_43_2_f_0(measurements__Var_54, measurements__Var_55);
          }
          {
            measurements__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_53);
          }
          {
            measurements__Var_49 = mercury__string__f_43_43_2_f_0(measurements__Var_50, measurements__Var_51);
          }
          {
            measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "det(", measurements__Var_49);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Exits_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__CallSeqs_69 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Allocs_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Words_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_String measurements__Var_73;
          MR_String measurements__Var_74;
          MR_String measurements__Var_75;
          MR_String measurements__Var_77;
          MR_String measurements__Var_78;
          MR_String measurements__Var_79;
          MR_String measurements__Var_81;
          MR_String measurements__Var_82;
          MR_String measurements__Var_83;
          MR_String measurements__Var_85;
          MR_String measurements__Var_86;

          {
            measurements__Var_74 = mercury__string__int_to_string_1_f_0(measurements__Exits_68);
          }
          {
            measurements__Var_78 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_69);
          }
          {
            measurements__Var_82 = mercury__string__int_to_string_1_f_0(measurements__Allocs_70);
          }
          {
            measurements__Var_86 = mercury__string__int_to_string_1_f_0(measurements__Words_71);
          }
          {
            measurements__Var_85 = mercury__string__f_43_43_2_f_0(measurements__Var_86, (MR_String) ")");
          }
          {
            measurements__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_85);
          }
          {
            measurements__Var_81 = mercury__string__f_43_43_2_f_0(measurements__Var_82, measurements__Var_83);
          }
          {
            measurements__Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_81);
          }
          {
            measurements__Var_77 = mercury__string__f_43_43_2_f_0(measurements__Var_78, measurements__Var_79);
          }
          {
            measurements__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_77);
          }
          {
            measurements__Var_73 = mercury__string__f_43_43_2_f_0(measurements__Var_74, measurements__Var_75);
          }
          {
            measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", measurements__Var_73);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Exits_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Fails_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__CallSeqs_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_String measurements__Var_92;
          MR_String measurements__Var_93;
          MR_String measurements__Var_94;
          MR_String measurements__Var_96;
          MR_String measurements__Var_97;
          MR_String measurements__Var_98;
          MR_String measurements__Var_100;
          MR_String measurements__Var_101;

          {
            measurements__Var_93 = mercury__string__int_to_string_1_f_0(measurements__Exits_88);
          }
          {
            measurements__Var_97 = mercury__string__int_to_string_1_f_0(measurements__Fails_89);
          }
          {
            measurements__Var_101 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_90);
          }
          {
            measurements__Var_100 = mercury__string__f_43_43_2_f_0(measurements__Var_101, (MR_String) ")");
          }
          {
            measurements__Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_100);
          }
          {
            measurements__Var_96 = mercury__string__f_43_43_2_f_0(measurements__Var_97, measurements__Var_98);
          }
          {
            measurements__Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__Var_96);
          }
          {
            measurements__Var_92 = mercury__string__f_43_43_2_f_0(measurements__Var_93, measurements__Var_94);
          }
          {
            measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", measurements__Var_92);
          }
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

void MR_CALL 
measurements__decompress_profile_10_p_0(
  MR_Word measurements__Own_11,
  MR_Integer * measurements__Calls_12,
  MR_Integer * measurements__Exits_13,
  MR_Integer * measurements__Fails_14,
  MR_Integer * measurements__Redos_15,
  MR_Integer * measurements__Excps_16,
  MR_Integer * measurements__Quanta_17,
  MR_Integer * measurements__CallSeqs_18,
  MR_Integer * measurements__Allocs_19,
  MR_Integer * measurements__Words_20)
{
  {
    MR_bool measurements__succeeded;

    switch (MR_tag((MR_Word) measurements__Own_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_21;

          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 0)));
          *measurements__Fails_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 1)));
          *measurements__Redos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 2)));
          *measurements__Excps_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 3)));
          *measurements__Quanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 4)));
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 5)));
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 6)));
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 7)));
          measurements__Var_21 = (*measurements__Exits_13 + *measurements__Fails_14);
          *measurements__Calls_12 = (measurements__Var_21 - *measurements__Redos_15);
        }
        break;
      case (MR_Integer) 1:
        {
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 0)));
          *measurements__Quanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 1)));
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 2)));
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 3)));
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 4)));
          *measurements__Calls_12 = *measurements__Exits_13;
          *measurements__Fails_14 = (MR_Integer) 0;
          *measurements__Redos_15 = (MR_Integer) 0;
          *measurements__Excps_16 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 0)));
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 1)));
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 2)));
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 3)));
          *measurements__Calls_12 = *measurements__Exits_13;
          *measurements__Fails_14 = (MR_Integer) 0;
          *measurements__Redos_15 = (MR_Integer) 0;
          *measurements__Excps_16 = (MR_Integer) 0;
          *measurements__Quanta_17 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 0)));
          *measurements__Fails_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 1)));
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 2)));
          *measurements__Calls_12 = (*measurements__Exits_13 + *measurements__Fails_14);
          *measurements__Redos_15 = (MR_Integer) 0;
          *measurements__Excps_16 = (MR_Integer) 0;
          *measurements__Quanta_17 = (MR_Integer) 0;
          *measurements__Allocs_19 = (MR_Integer) 0;
          *measurements__Words_20 = (MR_Integer) 0;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
measurements__compress_profile_1_f_0(
  MR_Word measurements__PI0_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__PI_4;

    switch (MR_tag((MR_Word) measurements__PI0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Exits_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 0)));
          MR_Integer measurements__Fails_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 1)));
          MR_Integer measurements__Redos_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 2)));
          MR_Integer measurements__Excps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 3)));
          MR_Integer measurements__Quanta_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 4)));
          MR_Integer measurements__CallSeqs_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 5)));
          MR_Integer measurements__Allocs_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 6)));
          MR_Integer measurements__Words_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 7)));

          measurements__succeeded = (measurements__Redos_7 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Excps_8 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Quanta_9 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    {
                      measurements__succeeded = (measurements__Allocs_11 == (MR_Integer) 0);
                      if (measurements__succeeded)
                        measurements__succeeded = (measurements__Words_12 == (MR_Integer) 0);
                    }
                }
            }
          if (measurements__succeeded)
            {
              measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
              MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) (measurements__Fails_6));
              MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_10));
            }
          else
            {
              measurements__succeeded = (measurements__Fails_6 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Redos_7 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    measurements__succeeded = (measurements__Excps_8 == (MR_Integer) 0);
                }
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Quanta_9 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    {
                      measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 1) = ((MR_Box) (measurements__CallSeqs_10));
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 2) = ((MR_Box) (measurements__Allocs_11));
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 3) = ((MR_Box) (measurements__Words_12));
                    }
                  else
                    {
                      measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 1) = ((MR_Box) (measurements__Quanta_9));
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_10));
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 3) = ((MR_Box) (measurements__Allocs_11));
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 4) = ((MR_Box) (measurements__Words_12));
                    }
                }
              else
                measurements__PI_4 = measurements__PI0_3;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Exits_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 0)));
          MR_Integer measurements__Quanta_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 1)));
          MR_Integer measurements__CallSeqs_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 2)));
          MR_Integer measurements__Allocs_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 3)));
          MR_Integer measurements__Words_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 4)));

          measurements__succeeded = (measurements__Allocs_21 == (MR_Integer) 0);
          if (measurements__succeeded)
            measurements__succeeded = (measurements__Words_22 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              {
                measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_18));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_20));
              }
            }
          else
            {
              measurements__succeeded = (measurements__Quanta_19 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_18));
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 1) = ((MR_Box) (measurements__CallSeqs_20));
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 2) = ((MR_Box) (measurements__Allocs_21));
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 3) = ((MR_Box) (measurements__Words_22));
                }
              else
                measurements__PI_4 = measurements__PI0_3;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Exits_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 0)));
          MR_Integer measurements__CallSeqs_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 1)));
          MR_Integer measurements__Allocs_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 2)));
          MR_Integer measurements__Words_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 3)));

          measurements__succeeded = (measurements__Allocs_25 == (MR_Integer) 0);
          if (measurements__succeeded)
            measurements__succeeded = (measurements__Words_26 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              {
                measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_23));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_24));
              }
            }
          else
            measurements__PI_4 = measurements__PI0_3;
        }
        break;
      case (MR_Integer) 3:
        measurements__PI_4 = measurements__PI0_3;
        break;
    }
    return measurements__PI_4;
  }
}

static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_Box measurements__wrapper_arg_3;
    MR_Box measurements__closure = measurements__closure_arg;
    MR_Word measurements__conv0_SumPI_6;

    {
      measurements__conv0_SumPI_6 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    measurements__wrapper_arg_3 = ((MR_Box) (measurements__conv0_SumPI_6));
    return measurements__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
measurements__sum_inherit_infos_1_f_0(
  MR_Word measurements__Inherits_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__2_2;
    MR_Word measurements__TypeCtorInfo_6_6 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
    MR_Box measurements__conv1_HeadVar__2_2;

    {
      measurements__conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0(measurements__TypeCtorInfo_6_6, measurements__TypeCtorInfo_6_6, (MR_Word) &measurements_scalar_common_3[2], measurements__Inherits_3, ((MR_Box) (&measurements_scalar_common_2[0])));
    }
    measurements__HeadVar__2_2 = ((MR_Word) measurements__conv1_HeadVar__2_2);
    return measurements__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
  MR_Box measurements__closure_arg,
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_Box measurements__wrapper_arg_3;
    MR_Box measurements__closure = measurements__closure_arg;
    MR_Word measurements__conv0_SumPI_6;

    {
      measurements__conv0_SumPI_6 = measurements__add_own_to_own_2_f_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    measurements__wrapper_arg_3 = ((MR_Box) (measurements__conv0_SumPI_6));
    return measurements__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
measurements__sum_own_infos_1_f_0(
  MR_Word measurements__Owns_3)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__HeadVar__2_2;
    MR_Word measurements__TypeCtorInfo_6_6 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
    MR_Box measurements__conv1_HeadVar__2_2;

    {
      measurements__conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0(measurements__TypeCtorInfo_6_6, measurements__TypeCtorInfo_6_6, (MR_Word) &measurements_scalar_common_3[1], measurements__Owns_3, ((MR_Box) (MR_mkword(MR_mktag(3), &measurements_scalar_common_3[0]))));
    }
    measurements__HeadVar__2_2 = ((MR_Word) measurements__conv1_HeadVar__2_2);
    return measurements__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
measurements__add_own_to_own_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Exits_7;
    MR_Integer measurements__Fails_8;
    MR_Integer measurements__Redos_9;
    MR_Integer measurements__Excps_10;
    MR_Integer measurements__Quanta_11;
    MR_Integer measurements__CallSeqs_12;
    MR_Integer measurements__Allocs_13;
    MR_Integer measurements__Words_14;
    MR_Integer measurements__Var_15;
    MR_Integer measurements__Var_16;
    MR_Integer measurements__Var_17;
    MR_Integer measurements__Var_18;
    MR_Integer measurements__Var_19;
    MR_Integer measurements__Var_20;
    MR_Integer measurements__Var_21;
    MR_Integer measurements__Var_22;
    MR_Integer measurements__Var_23;
    MR_Integer measurements__Var_24;
    MR_Integer measurements__Var_25;
    MR_Integer measurements__Var_26;
    MR_Integer measurements__Var_27;
    MR_Integer measurements__Var_28;
    MR_Integer measurements__Var_29;
    MR_Integer measurements__Var_30;

    switch (MR_tag((MR_Word) measurements__PI2_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_65;
          MR_Integer measurements__Var_66;
          MR_Integer measurements__Var_67;
          MR_Integer measurements__Var_68;
          MR_Integer measurements__Var_69;
          MR_Integer measurements__Var_70;

          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 4)));
          measurements__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 5)));
          measurements__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 6)));
          measurements__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_59;
          MR_Integer measurements__Var_60;
          MR_Integer measurements__Var_61;
          MR_Integer measurements__Var_62;

          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 4)));
          measurements__Var_18 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_55;
          MR_Integer measurements__Var_56;
          MR_Integer measurements__Var_57;

          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Var_18 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_53;

          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 2)));
        }
        break;
    }
    switch (MR_tag((MR_Word) measurements__PI1_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_46;
          MR_Integer measurements__Var_47;
          MR_Integer measurements__Var_48;
          MR_Integer measurements__Var_49;
          MR_Integer measurements__Var_50;

          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
          measurements__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
          measurements__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
          measurements__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
          measurements__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_39;
          MR_Integer measurements__Var_40;
          MR_Integer measurements__Var_41;
          MR_Integer measurements__Var_42;

          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
          measurements__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
          measurements__Var_17 = (MR_Integer) 0;
          measurements__Var_19 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_35;
          MR_Integer measurements__Var_36;
          MR_Integer measurements__Var_37;

          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
          measurements__Var_17 = (MR_Integer) 0;
          {
            measurements__Var_19 = measurements__redos_1_f_0(measurements__PI1_4);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_33;

          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
          {
            measurements__Var_19 = measurements__redos_1_f_0(measurements__PI1_4);
          }
        }
        break;
    }
    measurements__Exits_7 = (measurements__Var_15 + measurements__Var_16);
    measurements__Fails_8 = (measurements__Var_17 + measurements__Var_18);
    {
      measurements__Var_20 = measurements__redos_1_f_0(measurements__PI2_5);
    }
    measurements__Redos_9 = (measurements__Var_19 + measurements__Var_20);
    {
      measurements__Var_21 = measurements__excps_1_f_0(measurements__PI1_4);
    }
    {
      measurements__Var_22 = measurements__excps_1_f_0(measurements__PI2_5);
    }
    measurements__Excps_10 = (measurements__Var_21 + measurements__Var_22);
    {
      measurements__Var_23 = measurements__quanta_1_f_0(measurements__PI1_4);
    }
    {
      measurements__Var_24 = measurements__quanta_1_f_0(measurements__PI2_5);
    }
    measurements__Quanta_11 = (measurements__Var_23 + measurements__Var_24);
    {
      measurements__Var_25 = measurements__callseqs_1_f_0(measurements__PI1_4);
    }
    {
      measurements__Var_26 = measurements__callseqs_1_f_0(measurements__PI2_5);
    }
    measurements__CallSeqs_12 = (measurements__Var_25 + measurements__Var_26);
    {
      measurements__Var_27 = measurements__allocs_1_f_0(measurements__PI1_4);
    }
    {
      measurements__Var_28 = measurements__allocs_1_f_0(measurements__PI2_5);
    }
    measurements__Allocs_13 = (measurements__Var_27 + measurements__Var_28);
    {
      measurements__Var_29 = measurements__words_1_f_0(measurements__PI1_4);
    }
    {
      measurements__Var_30 = measurements__words_1_f_0(measurements__PI2_5);
    }
    measurements__Words_14 = (measurements__Var_29 + measurements__Var_30);
    {
      measurements__SumPI_6 = measurements__compress_profile_8_f_0(measurements__Exits_7, measurements__Fails_8, measurements__Redos_9, measurements__Excps_10, measurements__Quanta_11, measurements__CallSeqs_12, measurements__Allocs_13, measurements__Words_14);
    }
    return measurements__SumPI_6;
  }
}

MR_Word MR_CALL 
measurements__add_inherit_to_own_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Exits_7;
    MR_Integer measurements__Fails_8;
    MR_Integer measurements__Redos_9;
    MR_Integer measurements__Excps_10;
    MR_Integer measurements__Quanta_11;
    MR_Integer measurements__CallSeqs_12;
    MR_Integer measurements__Allocs_13;
    MR_Integer measurements__Words_14;
    MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
    MR_Integer measurements__Var_16;
    MR_Integer measurements__Var_18;
    MR_Integer measurements__Var_19;
    MR_Integer measurements__Var_20;
    MR_Integer measurements__Var_21;
    MR_Integer measurements__Var_22;
    MR_Integer measurements__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
    MR_Integer measurements__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
    MR_Integer measurements__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
    MR_Integer measurements__Var_92;
    MR_Integer measurements__Var_93;
    MR_Integer measurements__Var_94;
    MR_Integer measurements__Var_96;
    MR_Integer measurements__Var_97;
    MR_Integer measurements__Var_98;

    switch (MR_tag((MR_Word) measurements__PI2_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_40;
          MR_Integer measurements__Var_41;
          MR_Integer measurements__Var_42;

          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Fails_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Redos_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Excps_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 4)));
          measurements__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 5)));
          measurements__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 6)));
          measurements__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_32;
          MR_Integer measurements__Var_33;
          MR_Integer measurements__Var_34;

          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 4)));
          measurements__Fails_8 = (MR_Integer) 0;
          measurements__Redos_9 = (MR_Integer) 0;
          measurements__Excps_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_27;
          MR_Integer measurements__Var_28;
          MR_Integer measurements__Var_29;

          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 3)));
          measurements__Fails_8 = (MR_Integer) 0;
          measurements__Redos_9 = (MR_Integer) 0;
          measurements__Excps_10 = (MR_Integer) 0;
          {
            measurements__Var_16 = measurements__quanta_1_f_0(measurements__PI2_5);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_25;

          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 0)));
          measurements__Fails_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 1)));
          measurements__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 2)));
          measurements__Redos_9 = (MR_Integer) 0;
          measurements__Excps_10 = (MR_Integer) 0;
          {
            measurements__Var_16 = measurements__quanta_1_f_0(measurements__PI2_5);
          }
        }
        break;
    }
    measurements__Quanta_11 = (measurements__Var_15 + measurements__Var_16);
    {
      measurements__Var_18 = measurements__callseqs_1_f_0(measurements__PI2_5);
    }
    measurements__CallSeqs_12 = (measurements__Var_84 + measurements__Var_18);
    measurements__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
    measurements__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
    measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
    measurements__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
    {
      measurements__Var_20 = measurements__allocs_1_f_0(measurements__PI2_5);
    }
    measurements__Allocs_13 = (measurements__Var_19 + measurements__Var_20);
    measurements__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
    measurements__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
    measurements__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
    measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
    {
      measurements__Var_22 = measurements__words_1_f_0(measurements__PI2_5);
    }
    measurements__Words_14 = (measurements__Var_21 + measurements__Var_22);
    {
      measurements__SumPI_6 = measurements__compress_profile_8_f_0(measurements__Exits_7, measurements__Fails_8, measurements__Redos_9, measurements__Excps_10, measurements__Quanta_11, measurements__CallSeqs_12, measurements__Allocs_13, measurements__Words_14);
    }
    return measurements__SumPI_6;
  }
}

MR_Word MR_CALL 
measurements__compress_profile_8_f_0(
  MR_Integer measurements__Exits_10,
  MR_Integer measurements__Fails_11,
  MR_Integer measurements__Redos_12,
  MR_Integer measurements__Excps_13,
  MR_Integer measurements__Quanta_14,
  MR_Integer measurements__CallSeqs_15,
  MR_Integer measurements__Allocs_16,
  MR_Integer measurements__Words_17)
{
  {
    MR_bool measurements__succeeded = (measurements__Redos_12 == (MR_Integer) 0);
    MR_Word measurements__PI_18;

    if (measurements__succeeded)
      {
        measurements__succeeded = (measurements__Excps_13 == (MR_Integer) 0);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__Quanta_14 == (MR_Integer) 0);
            if (measurements__succeeded)
              {
                measurements__succeeded = (measurements__Allocs_16 == (MR_Integer) 0);
                if (measurements__succeeded)
                  measurements__succeeded = (measurements__Words_17 == (MR_Integer) 0);
              }
          }
      }
    if (measurements__succeeded)
      {
        measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
        MR_hl_field(MR_mktag(3), measurements__PI_18, 1) = ((MR_Box) (measurements__Fails_11));
        MR_hl_field(MR_mktag(3), measurements__PI_18, 2) = ((MR_Box) (measurements__CallSeqs_15));
      }
    else
      {
        measurements__succeeded = (measurements__Fails_11 == (MR_Integer) 0);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__Redos_12 == (MR_Integer) 0);
            if (measurements__succeeded)
              measurements__succeeded = (measurements__Excps_13 == (MR_Integer) 0);
          }
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__Quanta_14 == (MR_Integer) 0);
            if (measurements__succeeded)
              {
                measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
                MR_hl_field(MR_mktag(2), measurements__PI_18, 1) = ((MR_Box) (measurements__CallSeqs_15));
                MR_hl_field(MR_mktag(2), measurements__PI_18, 2) = ((MR_Box) (measurements__Allocs_16));
                MR_hl_field(MR_mktag(2), measurements__PI_18, 3) = ((MR_Box) (measurements__Words_17));
              }
            else
              {
                measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
                MR_hl_field(MR_mktag(1), measurements__PI_18, 1) = ((MR_Box) (measurements__Quanta_14));
                MR_hl_field(MR_mktag(1), measurements__PI_18, 2) = ((MR_Box) (measurements__CallSeqs_15));
                MR_hl_field(MR_mktag(1), measurements__PI_18, 3) = ((MR_Box) (measurements__Allocs_16));
                MR_hl_field(MR_mktag(1), measurements__PI_18, 4) = ((MR_Box) (measurements__Words_17));
              }
          }
        else
          {
            measurements__PI_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 1) = ((MR_Box) (measurements__Fails_11));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 2) = ((MR_Box) (measurements__Redos_12));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 3) = ((MR_Box) (measurements__Excps_13));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 4) = ((MR_Box) (measurements__Quanta_14));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 5) = ((MR_Box) (measurements__CallSeqs_15));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 6) = ((MR_Box) (measurements__Allocs_16));
            MR_hl_field(MR_mktag(0), measurements__PI_18, 7) = ((MR_Box) (measurements__Words_17));
          }
      }
    return measurements__PI_18;
  }
}

MR_Word MR_CALL 
measurements__subtract_inherit_from_inherit_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Quanta_7;
    MR_Integer measurements__CallSeqs_8;
    MR_Integer measurements__Allocs_9;
    MR_Integer measurements__Words_10;
    MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
    MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
    MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
    MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
    MR_Integer measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
    MR_Integer measurements__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
    MR_Integer measurements__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
    MR_Integer measurements__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

    measurements__Quanta_7 = (measurements__Var_11 - measurements__Var_12);
    measurements__CallSeqs_8 = (measurements__Var_20 - measurements__Var_24);
    measurements__Allocs_9 = (measurements__Var_21 - measurements__Var_25);
    measurements__Words_10 = (measurements__Var_22 - measurements__Var_26);
    {
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
    }
    return measurements__SumPI_6;
  }
}

MR_Word MR_CALL 
measurements__subtract_own_from_inherit_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Quanta_7;
    MR_Integer measurements__CallSeqs_8;
    MR_Integer measurements__Allocs_9;
    MR_Integer measurements__Words_10;
    MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
    MR_Integer measurements__Var_12;
    MR_Integer measurements__Var_14;
    MR_Integer measurements__Var_16;
    MR_Integer measurements__Var_18;
    MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
    MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
    MR_Integer measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) measurements__PI1_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
          MR_Integer measurements__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
          MR_Integer measurements__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
          MR_Integer measurements__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

          measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));

          measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_50;

          measurements__Var_12 = (MR_Integer) 0;
          measurements__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_47;
          MR_Integer measurements__Var_48;

          measurements__Var_12 = (MR_Integer) 0;
          measurements__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_16 = (MR_Integer) 0;
          measurements__Var_18 = (MR_Integer) 0;
        }
        break;
    }
    measurements__Quanta_7 = (measurements__Var_11 - measurements__Var_12);
    measurements__CallSeqs_8 = (measurements__Var_20 - measurements__Var_14);
    measurements__Allocs_9 = (measurements__Var_21 - measurements__Var_16);
    measurements__Words_10 = (measurements__Var_22 - measurements__Var_18);
    {
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
    }
    return measurements__SumPI_6;
  }
}

MR_Word MR_CALL 
measurements__add_own_to_inherit_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Quanta_7;
    MR_Integer measurements__CallSeqs_8;
    MR_Integer measurements__Allocs_9;
    MR_Integer measurements__Words_10;
    MR_Integer measurements__Var_11;
    MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
    MR_Integer measurements__Var_13;
    MR_Integer measurements__Var_15;
    MR_Integer measurements__Var_17;
    MR_Integer measurements__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
    MR_Integer measurements__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
    MR_Integer measurements__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) measurements__PI1_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
          MR_Integer measurements__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
          MR_Integer measurements__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
          MR_Integer measurements__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

          measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));

          measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_46;

          measurements__Var_11 = (MR_Integer) 0;
          measurements__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_43;
          MR_Integer measurements__Var_44;

          measurements__Var_11 = (MR_Integer) 0;
          measurements__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
          measurements__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
          measurements__Var_15 = (MR_Integer) 0;
          measurements__Var_17 = (MR_Integer) 0;
        }
        break;
    }
    measurements__Quanta_7 = (measurements__Var_11 + measurements__Var_12);
    measurements__CallSeqs_8 = (measurements__Var_13 + measurements__Var_40);
    measurements__Allocs_9 = (measurements__Var_15 + measurements__Var_41);
    measurements__Words_10 = (measurements__Var_17 + measurements__Var_42);
    {
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
    }
    return measurements__SumPI_6;
  }
}

MR_Word MR_CALL 
measurements__add_inherit_to_inherit_2_f_0(
  MR_Word measurements__PI1_4,
  MR_Word measurements__PI2_5)
{
  {
    MR_bool measurements__succeeded;
    MR_Word measurements__SumPI_6;
    MR_Integer measurements__Quanta_7;
    MR_Integer measurements__CallSeqs_8;
    MR_Integer measurements__Allocs_9;
    MR_Integer measurements__Words_10;
    MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
    MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
    MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
    MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
    MR_Integer measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
    MR_Integer measurements__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
    MR_Integer measurements__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
    MR_Integer measurements__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

    measurements__Quanta_7 = (measurements__Var_11 + measurements__Var_12);
    measurements__CallSeqs_8 = (measurements__Var_20 + measurements__Var_24);
    measurements__Allocs_9 = (measurements__Var_21 + measurements__Var_25);
    measurements__Words_10 = (measurements__Var_22 + measurements__Var_26);
    {
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
    }
    return measurements__SumPI_6;
  }
}

MR_bool MR_CALL 
measurements__is_zero_inherit_prof_info_1_p_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

    measurements__succeeded = (measurements__Var_2 == (MR_Integer) 0);
    if (measurements__succeeded)
      {
        measurements__succeeded = (measurements__Var_3 == (MR_Integer) 0);
        if (measurements__succeeded)
          {
            measurements__succeeded = (measurements__Var_4 == (MR_Integer) 0);
            if (measurements__succeeded)
              measurements__succeeded = (measurements__Var_5 == (MR_Integer) 0);
          }
      }
    return measurements__succeeded;
  }
}

MR_Word MR_CALL 
measurements__zero_inherit_prof_info_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) &measurements_scalar_common_2[0];
  }
}

MR_Integer MR_CALL 
measurements__inherit_words_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Words_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
    MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

    return measurements__Words_6;
  }
}

MR_Integer MR_CALL 
measurements__inherit_allocs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Allocs_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

    return measurements__Allocs_5;
  }
}

MR_Integer MR_CALL 
measurements__inherit_callseqs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CallSeqs_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

    return measurements__CallSeqs_4;
  }
}

MR_Integer MR_CALL 
measurements__inherit_quanta_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Quanta_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

    return measurements__Quanta_3;
  }
}

MR_bool MR_CALL 
measurements__is_zero_own_prof_info_1_p_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          MR_Integer measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));

          measurements__succeeded = (measurements__Var_2 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Var_3 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Var_4 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    {
                      measurements__succeeded = (measurements__Var_5 == (MR_Integer) 0);
                      if (measurements__succeeded)
                        {
                          measurements__succeeded = (measurements__Var_6 == (MR_Integer) 0);
                          if (measurements__succeeded)
                            {
                              measurements__succeeded = (measurements__Var_7 == (MR_Integer) 0);
                              if (measurements__succeeded)
                                {
                                  measurements__succeeded = (measurements__Var_8 == (MR_Integer) 0);
                                  if (measurements__succeeded)
                                    measurements__succeeded = (measurements__Var_9 == (MR_Integer) 0);
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));

          measurements__succeeded = (measurements__Var_10 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Var_11 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Var_12 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    {
                      measurements__succeeded = (measurements__Var_13 == (MR_Integer) 0);
                      if (measurements__succeeded)
                        measurements__succeeded = (measurements__Var_14 == (MR_Integer) 0);
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));

          measurements__succeeded = (measurements__Var_15 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Var_16 == (MR_Integer) 0);
              if (measurements__succeeded)
                {
                  measurements__succeeded = (measurements__Var_17 == (MR_Integer) 0);
                  if (measurements__succeeded)
                    measurements__succeeded = (measurements__Var_18 == (MR_Integer) 0);
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));

          measurements__succeeded = (measurements__Var_19 == (MR_Integer) 0);
          if (measurements__succeeded)
            {
              measurements__succeeded = (measurements__Var_20 == (MR_Integer) 0);
              if (measurements__succeeded)
                measurements__succeeded = (measurements__Var_21 == (MR_Integer) 0);
            }
        }
        break;
    }
    return measurements__succeeded;
  }
}

MR_Word MR_CALL 
measurements__zero_own_prof_info_0_f_0(void)
{
  {
    MR_bool measurements__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &measurements_scalar_common_3[0]);
  }
}

MR_Integer MR_CALL 
measurements__words_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__allocs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer measurements__Var_22;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_14;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_9;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__callseqs_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__CallSeqs_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_13;
          MR_Integer measurements__Var_14;

          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_8;
          MR_Integer measurements__Var_9;

          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));

          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
    }
    return measurements__CallSeqs_2;
  }
}

MR_Integer MR_CALL 
measurements__quanta_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_20;
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_12;
          MR_Integer measurements__Var_13;
          MR_Integer measurements__Var_14;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__excps_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Var_19;
          MR_Integer measurements__Var_20;
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__redos_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_18;
          MR_Integer measurements__Var_19;
          MR_Integer measurements__Var_20;
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__fails_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_17;
          MR_Integer measurements__Var_18;
          MR_Integer measurements__Var_19;
          MR_Integer measurements__Var_20;
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        measurements__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Var_5;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
measurements__exits_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__Exits_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Var_16;
          MR_Integer measurements__Var_17;
          MR_Integer measurements__Var_18;
          MR_Integer measurements__Var_19;
          MR_Integer measurements__Var_20;
          MR_Integer measurements__Var_21;
          MR_Integer measurements__Var_22;

          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_11;
          MR_Integer measurements__Var_12;
          MR_Integer measurements__Var_13;
          MR_Integer measurements__Var_14;

          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_7;
          MR_Integer measurements__Var_8;
          MR_Integer measurements__Var_9;

          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Var_4;
          MR_Integer measurements__Var_5;

          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
    }
    return measurements__Exits_2;
  }
}

MR_Integer MR_CALL 
measurements__calls_1_f_0(
  MR_Word measurements__HeadVar__1_1)
{
  {
    MR_bool measurements__succeeded;
    MR_Integer measurements__HeadVar__2_2;

    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer measurements__Exits_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Fails_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Redos_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
          MR_Integer measurements__Excps_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer measurements__Var_23;
          MR_Integer measurements__Var_24 = (measurements__Exits_15 + measurements__Fails_16);
          MR_Integer measurements__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
          MR_Integer measurements__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
          MR_Integer measurements__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
          MR_Integer measurements__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));

          measurements__Var_23 = (measurements__Var_24 + measurements__Excps_18);
          measurements__HeadVar__2_2 = (measurements__Var_23 - measurements__Redos_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer measurements__Var_11;
          MR_Integer measurements__Var_12;
          MR_Integer measurements__Var_13;
          MR_Integer measurements__Var_14;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
          measurements__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer measurements__Var_7;
          MR_Integer measurements__Var_8;
          MR_Integer measurements__Var_9;

          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
          measurements__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
          measurements__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
          measurements__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer measurements__Exits_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer measurements__Fails_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer measurements__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));

          measurements__HeadVar__2_2 = (measurements__Exits_3 + measurements__Fails_4);
        }
        break;
    }
    return measurements__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____cost_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____cost_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____cost_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____cs_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____cs_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____goal_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____goal_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____inherit_prof_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____inherit_prof_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____is_active_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____is_active_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____own_prof_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____own_prof_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____parallel_exec_metrics_incomplete_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____parallel_exec_metrics_incomplete_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____parallel_exec_metrics_internal_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____parallelism_amount_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____parallelism_amount_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____proc_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____proc_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____recursion_depth_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____recursion_depth_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
  MR_Box measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2)
{
  {
    MR_bool measurements__succeeded;

    {
      measurements__succeeded = measurements____Unify____static_coverage_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
    return measurements__succeeded;
  }
}

static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
  MR_Box * measurements__wrapper_arg_1,
  MR_Box measurements__wrapper_arg_2,
  MR_Box measurements__wrapper_arg_3)
{
  {
    MR_Word measurements__conv0_HeadVar__1_1;

    {
      measurements____Compare____static_coverage_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
  }
}

void mercury__measurements__init(void)
{
}

void mercury__measurements__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_cost_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_cs_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_goal_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_inherit_prof_info_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_is_active_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_own_prof_info_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallel_exec_metrics_incomplete_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallelism_amount_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_proc_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_recursion_depth_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_static_coverage_info_0);
}

void mercury__measurements__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__measurements__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module measurements. */
