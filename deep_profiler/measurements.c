/*
** Automatically generated from `measurements.m'
** by the Mercury compiler,
** version rotd-2022-04-30
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


// :- module measurements.
// :- implementation.

/*
INIT mercury__measurements__init
ENDINIT
*/

#include "measurements.mih"


#include "array.mih"
#include "array_util.mih"
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "ops.mih"
#include "pair.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_EnumFunctorDescPtr measurements__measurements__enum_ordinal_ordered_is_active_0[2];

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
measurements__IntroducedFrom__pred__add_coverage_arrays__958__1_4_p_0(
  MR_Integer LambdaHeadVar__1_19,
  MR_Integer LambdaHeadVar__2_20,
  MR_ArrayPtr LambdaHeadVar__3_21,
  MR_ArrayPtr * LambdaHeadVar__4_22);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
measurements____Compare____cost_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
  MR_Float Weight_7,
  MR_Float Value_8,
  MR_Float STATE_VARIABLE_WeightedSum_0_11,
  MR_Float * STATE_VARIABLE_WeightedSum_12,
  MR_Float STATE_VARIABLE_TotalWeight_0_13,
  MR_Float * STATE_VARIABLE_TotalWeight_14);

static void MR_CALL 
measurements__weighted_average_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
  MR_Word PEM_5,
  MR_Float SparkDelay_6,
  MR_Integer Depth_7);

static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____cost_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box measurements_scalar_common_1[4][2];

static /* final */ const MR_Box measurements_scalar_common_2[5][3];

static /* final */ const MR_Box measurements_scalar_common_3[1][4];

static /* final */ const MR_Box measurements_scalar_common_4[2][1];

static /* final */ const MR_Float measurements_scalar_common_5[2];

static /* final */ const MR_Box measurements_scalar_common_6[2][6];

static /* final */ const MR_Box measurements_scalar_common_7[1][7];

static /* final */ const MR_Box measurements_scalar_common_8[1][9];




static /* final */ const MR_Box measurements_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements_scalar_common_1[0]))
  },
  /* row   3 */
  {
    (MR_Box) (&measurements_scalar_common_5[1]),
    ((MR_Box) (&measurements_scalar_common_4[1]))
  },
};

static /* final */ const MR_Box measurements_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&measurements_scalar_common_6[0])),
    ((MR_Box) (measurements__sum_own_infos_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&measurements_scalar_common_6[1])),
    ((MR_Box) (measurements__sum_inherit_infos_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&measurements_scalar_common_7[0])),
    ((MR_Box) (measurements__add_coverage_arrays_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&measurements_scalar_common_8[0])),
    ((MR_Box) (measurements__weighted_average_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_4[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) (&measurements_scalar_common_5[1])
  },
};

static /* final */ const MR_Float measurements_scalar_common_5[2] = {
  /* row   0 */
  (MR_Float) 1.0000000000000000,
  /* row   1 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const MR_Box measurements_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_0 = {
  (MR_String) "cost_per_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_cost_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_1 = {
  (MR_String) "cost_total",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  measurements__measurements__field_types_cost_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_0[1] = {
  &measurements__measurements__du_functor_desc_cost_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_1[1] = {
  &measurements__measurements__du_functor_desc_cost_0_1
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cost_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cost_0_0_10001)),
  ((MR_Box) (measurements____Compare____cost_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cost",
  { measurements__measurements__du_name_ordered_cost_0 },
  { measurements__measurements__du_ptag_ordered_cost_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  measurements__measurements__functor_number_map_cost_0,

};

static const MR_PseudoTypeInfo measurements__measurements__field_types_cs_cost_csq_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cost_0)
};

static const MR_ConstString measurements__measurements__field_names_cs_cost_csq_0_0[2] = {
  (MR_String) "cscc_calls",
  (MR_String) "cscc_csq_cost"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cs_cost_csq_0_0 = {
  (MR_String) "cs_cost_csq",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_cs_cost_csq_0_0,
  measurements__measurements__field_names_cs_cost_csq_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cs_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_cs_cost_csq_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cs_cost_csq_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cs_cost_csq_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cs_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____cs_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cs_cost_csq",
  { measurements__measurements__du_name_ordered_cs_cost_csq_0 },
  { measurements__measurements__du_ptag_ordered_cs_cost_csq_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  measurements__measurements__functor_number_map_cs_cost_csq_0,

};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_0 = {
  (MR_String) "dead_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_1[1] = {
  (MR_String) "tg_calls"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_1 = {
  (MR_String) "trivial_goal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  measurements__measurements__field_types_goal_cost_csq_0_1,
  measurements__measurements__field_names_goal_cost_csq_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_2[2] = {
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cost_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_2[2] = {
  (MR_String) "ntg_avg_cost",
  (MR_String) "ntg_calls"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_2 = {
  (MR_String) "non_trivial_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  measurements__measurements__field_types_goal_cost_csq_0_2,
  measurements__measurements__field_names_goal_cost_csq_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____goal_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____goal_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "goal_cost_csq",
  { measurements__measurements__du_name_ordered_goal_cost_csq_0 },
  { measurements__measurements__du_ptag_ordered_goal_cost_csq_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  measurements__measurements__functor_number_map_goal_cost_csq_0,

};

static const MR_PseudoTypeInfo measurements__measurements__field_types_inherit_prof_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurements__measurements__field_names_inherit_prof_info_0_0[4] = {
  (MR_String) "ipo_quanta",
  (MR_String) "ipo_callseqs",
  (MR_String) "ipo_allocs",
  (MR_String) "ipo_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_inherit_prof_info_0_0 = {
  (MR_String) "inherit_prof_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_inherit_prof_info_0_0,
  measurements__measurements__field_names_inherit_prof_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_inherit_prof_info_0_0[1] = {
  &measurements__measurements__du_functor_desc_inherit_prof_info_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_inherit_prof_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_inherit_prof_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____inherit_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____inherit_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "inherit_prof_info",
  { measurements__measurements__du_name_ordered_inherit_prof_info_0 },
  { measurements__measurements__du_ptag_ordered_inherit_prof_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  measurements__measurements__functor_number_map_inherit_prof_info_0,

};

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_0 = {
  (MR_String) "is_active",
  INT32_C(0)
};

static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_1 = {
  (MR_String) "is_not_active",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr measurements__measurements__enum_ordinal_ordered_is_active_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurements____Unify____is_active_0_0_10001)),
  ((MR_Box) (measurements____Compare____is_active_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "is_active",
  { measurements__measurements__enum_name_ordered_is_active_0 },
  { measurements__measurements__enum_ordinal_ordered_is_active_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  measurements__measurements__functor_number_map_is_active_0,

};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_own_prof_info_0_0,
  measurements__measurements__field_names_own_prof_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  measurements__measurements__field_types_own_prof_info_0_1,
  measurements__measurements__field_names_own_prof_info_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_2[4] = {
  (MR_String) "opfd_exits",
  (MR_String) "opfd_callseqs",
  (MR_String) "opfd_allocs",
  (MR_String) "opfd_words"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_2 = {
  (MR_String) "own_prof_fast_det",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  measurements__measurements__field_types_own_prof_info_0_2,
  measurements__measurements__field_names_own_prof_info_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_3[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_3[3] = {
  (MR_String) "opfns_exits",
  (MR_String) "opfns_fails",
  (MR_String) "opfns_callseqs"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_3 = {
  (MR_String) "own_prof_fast_nomem_semi",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  measurements__measurements__field_types_own_prof_info_0_3,
  measurements__measurements__field_names_own_prof_info_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____own_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____own_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "own_prof_info",
  { measurements__measurements__du_name_ordered_own_prof_info_0 },
  { measurements__measurements__du_ptag_ordered_own_prof_info_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  measurements__measurements__functor_number_map_own_prof_info_0,

};

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0)
  }
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0)
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
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_incomplete",
  { measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0 },
  { measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0,

};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_0[3] = {
  (MR_String) "pemi_time_left_seq",
  (MR_String) "pemi_time_left_par",
  (MR_String) "pemi_time_left_signals"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0 = {
  (MR_String) "pem_left_most",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_1[6] = {
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_1,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_internal_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_internal_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_internal",
  { measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0 },
  { measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0,

};

static const MR_Integer measurements__measurements__functor_number_map_parallelism_amount_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_parallelism_amount_0 = {
  (MR_String) "parallelism_amount",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_String) "pa_likely",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallelism_amount_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____parallelism_amount_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallelism_amount_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallelism_amount",
  { &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  { &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  measurements__measurements__functor_number_map_parallelism_amount_0,

};

static const MR_PseudoTypeInfo measurements__measurements__field_types_proc_cost_csq_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cost_0)
};

static const MR_ConstString measurements__measurements__field_names_proc_cost_csq_0_0[3] = {
  (MR_String) "pcc_nr_calls",
  (MR_String) "pcc_r_calls",
  (MR_String) "pcc_csq"
};

static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_proc_cost_csq_0_0 = {
  (MR_String) "proc_cost_csq",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  measurements__measurements__field_types_proc_cost_csq_0_0,
  measurements__measurements__field_names_proc_cost_csq_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_proc_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_proc_cost_csq_0_0
};

static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_proc_cost_csq_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_proc_cost_csq_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____proc_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____proc_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "proc_cost_csq",
  { measurements__measurements__du_name_ordered_proc_cost_csq_0 },
  { measurements__measurements__du_ptag_ordered_proc_cost_csq_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  measurements__measurements__functor_number_map_proc_cost_csq_0,

};

static const MR_Integer measurements__measurements__functor_number_map_recursion_depth_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_recursion_depth_0 = {
  (MR_String) "recursion_depth",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_recursion_depth_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____recursion_depth_0_0_10001)),
  ((MR_Box) (measurements____Compare____recursion_depth_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "recursion_depth",
  { &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  { &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  measurements__measurements__functor_number_map_recursion_depth_0,

};

static const MR_FA_TypeInfo_Struct1 measurements__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&measurements__array__ti_array_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_static_coverage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurements____Unify____static_coverage_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____static_coverage_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "static_coverage_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
measurements__IntroducedFrom__pred__add_coverage_arrays__958__1_4_p_0(
  MR_Integer LambdaHeadVar__1_19,
  MR_Integer LambdaHeadVar__2_20,
  MR_ArrayPtr LambdaHeadVar__3_21,
  MR_ArrayPtr * LambdaHeadVar__4_22)
{
  MR_Integer Value_13;
  MR_Integer Var_23;
  MR_Box conv0_Value_13;
  MR_ArrayPtr conv1_LambdaHeadVar__4_22;

  mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (LambdaHeadVar__3_21), LambdaHeadVar__1_19, &conv0_Value_13);
  Value_13 = ((MR_Integer) (conv0_Value_13));
  Var_23 = (MR_Integer) ((MR_Unsigned) Value_13 + (MR_Unsigned) LambdaHeadVar__2_20);
  mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__1_19, ((MR_Box) (Var_23)), (MR_ArrayPtr) (LambdaHeadVar__3_21), &conv1_LambdaHeadVar__4_22);
  *LambdaHeadVar__4_22 = (MR_ArrayPtr) (conv1_LambdaHeadVar__4_22);
}

void MR_CALL 
measurements____Compare____static_coverage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&measurements_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&measurements_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
measurements____Compare____recursion_depth_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));
    MR_Float ArgY1_5 = MR_unbox_float((MR_Box) (HeadVar__3_3));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
    MR_Float ArgY1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
measurements____Compare____proc_cost_csq_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
        MR_Integer CastX_25 = (MR_Integer) (ArgX3_10);
        MR_Integer CastY_26 = (MR_Integer) (ArgY3_11);

        succeeded = (CastX_25 == CastY_26);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
        if (((MR_tag((MR_Word) ArgX3_10)) == (MR_Integer) 0))
        {
          MR_Float Var_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgX3_10, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) ArgY3_11)) == (MR_Integer) 0))
          {
            MR_Float ArgY1_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY3_11, (MR_Integer) 0)));

            mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_29, ArgY1_18);
          }
          else
            *HeadVar__1_1 = (MR_Integer) 1;
        }
        else
        {
          MR_Float Var_30 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgX3_10, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) ArgY3_11)) == (MR_Integer) 0))
            *HeadVar__1_1 = (MR_Integer) 2;
          else
          {
            MR_Float ArgY1_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY3_11, (MR_Integer) 0)));

            mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_30, ArgY1_24);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer CastX_15;
    MR_Integer CastY_16;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        CastX_15 = (MR_Integer) (ArgX3_7);
        CastY_16 = (MR_Integer) (ArgY3_8);
        succeeded = (CastX_15 == CastY_16);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ArgX3_7)) == (MR_Integer) 0))
        {
          MR_Float ArgX1_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 0)));
          MR_Float ArgY1_12;

          succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 0)));
            succeeded = (ArgX1_11 == ArgY1_12);
          }
        }
        else
        {
          MR_Float ArgX1_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgX3_7, (MR_Integer) 0)));
          MR_Float ArgY1_14;

          succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY3_8, (MR_Integer) 0)));
            succeeded = (ArgX1_13 == ArgY1_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
measurements____Compare____parallelism_amount_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));
    MR_Float ArgY1_5 = MR_unbox_float((MR_Box) (HeadVar__3_3));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
    MR_Float ArgY1_4 = MR_unbox_float((MR_Box) (HeadVar__2_2));

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_47 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_48 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_47 == CastY_48);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Float Var_58 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5)));
    MR_Float Var_59 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
    MR_Float Var_60 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float Var_61 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float Var_62 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Float ArgY2_34 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Float ArgY3_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
      MR_Float ArgY4_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
      MR_Float ArgY5_43 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4)));
      MR_Float ArgY6_46 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word SubResult1_32;

      measurements____Compare____parallel_exec_metrics_internal_0_0(&SubResult1_32, Var_63, ArgY1_31);
      succeeded = (SubResult1_32 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_32;
      else
      {
        MR_Word SubResult2_35;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult2_35, Var_62, ArgY2_34);
        succeeded = (SubResult2_35 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_35;
        else
        {
          MR_Word SubResult3_38;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult3_38, Var_61, ArgY3_37);
          succeeded = (SubResult3_38 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_38;
          else
          {
            MR_Word SubResult4_41;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_41, Var_60, ArgY4_40);
            succeeded = (SubResult4_41 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_41;
            else
            {
              MR_Word SubResult5_44;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult5_44, Var_59, ArgY5_43);
              succeeded = (SubResult5_44 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_44;
              else
                mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_58, ArgY6_46);
            }
          }
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Float Var_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float Var_65 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float Var_66 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, Var_66, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult2_9, Var_65, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_64, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_10;
    MR_Float ArgX2_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_12;
    MR_Float ArgX3_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_14;
    MR_Float ArgX4_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float ArgY4_16;
    MR_Float ArgX5_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
    MR_Float ArgY5_18;
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
    MR_Float ArgY6_20;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      ArgY3_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      ArgY4_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      ArgY5_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
      ArgY6_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5)));
      succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(ArgX1_9, ArgY1_10);
      if (succeeded)
      {
        succeeded = (ArgX2_11 == ArgY2_12);
        if (succeeded)
        {
          succeeded = (ArgX3_13 == ArgY3_14);
          if (succeeded)
          {
            succeeded = (ArgX4_15 == ArgY4_16);
            if (succeeded)
            {
              succeeded = (ArgX5_17 == ArgY5_18);
              if (succeeded)
                succeeded = (ArgX6_19 == ArgY6_20);
            }
          }
        }
      }
    }
  }
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4;
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6;
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
    MR_Float ArgX5_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
    MR_Float ArgY5_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
    MR_Float ArgY6_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
    MR_Float ArgX7_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
    MR_Float ArgY7_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&measurements_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    MR_Float ArgY5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
    MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
    MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
    MR_Float ArgX7_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
    MR_Float ArgY7_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_21_21 = (MR_Word) (&measurements_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
measurements____Compare____own_prof_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_180 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_181 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_180 == CastY_181);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
          MR_Integer Var_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
          MR_Integer Var_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
          MR_Integer Var_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
          MR_Integer Var_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
                MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
                MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
                MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
                MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
                MR_Word SubResult1_6;

                succeeded = (Var_209 < ArgY1_5);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_209 > ArgY1_5);
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
                  MR_Word SubResult2_9;

                  succeeded = (Var_208 < ArgY2_8);
                  if (succeeded)
                  {
                    SubResult2_9 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_208 > ArgY2_8);
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

                    succeeded = (Var_207 < ArgY3_11);
                    if (succeeded)
                    {
                      SubResult3_12 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_207 > ArgY3_11);
                      if (succeeded)
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_12 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                    {
                      MR_Word SubResult4_15;

                      succeeded = (Var_206 < ArgY4_14);
                      if (succeeded)
                      {
                        SubResult4_15 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_206 > ArgY4_14);
                        if (succeeded)
                        {
                          SubResult4_15 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_15 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_15;
                      else
                      {
                        MR_Word SubResult5_18;

                        succeeded = (Var_205 < ArgY5_17);
                        if (succeeded)
                        {
                          SubResult5_18 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_205 > ArgY5_17);
                          if (succeeded)
                          {
                            SubResult5_18 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult5_18 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult5_18;
                        else
                        {
                          MR_Word SubResult6_21;

                          succeeded = (Var_204 < ArgY6_20);
                          if (succeeded)
                          {
                            SubResult6_21 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_204 > ArgY6_20);
                            if (succeeded)
                            {
                              SubResult6_21 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult6_21 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult6_21;
                          else
                          {
                            MR_Word SubResult7_24;

                            succeeded = (Var_203 < ArgY7_23);
                            if (succeeded)
                            {
                              SubResult7_24 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_203 > ArgY7_23);
                              if (succeeded)
                              {
                                SubResult7_24 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult7_24 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult7_24;
                            else
                            {
                              succeeded = (Var_202 < ArgY8_26);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_202 > ArgY8_26);
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
                }
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
          MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
          MR_Integer Var_211 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_214 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Integer ArgY4_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                MR_Integer ArgY5_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
                MR_Word SubResult1_78;

                succeeded = (Var_214 < ArgY1_77);
                if (succeeded)
                {
                  SubResult1_78 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_214 > ArgY1_77);
                  if (succeeded)
                  {
                    SubResult1_78 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_78 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_78;
                else
                {
                  MR_Word SubResult2_81;

                  succeeded = (Var_213 < ArgY2_80);
                  if (succeeded)
                  {
                    SubResult2_81 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_213 > ArgY2_80);
                    if (succeeded)
                    {
                      SubResult2_81 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_81 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_81;
                  else
                  {
                    MR_Word SubResult3_84;

                    succeeded = (Var_212 < ArgY3_83);
                    if (succeeded)
                    {
                      SubResult3_84 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_212 > ArgY3_83);
                      if (succeeded)
                      {
                        SubResult3_84 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_84 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_84;
                    else
                    {
                      MR_Word SubResult4_87;

                      succeeded = (Var_211 < ArgY4_86);
                      if (succeeded)
                      {
                        SubResult4_87 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_211 > ArgY4_86);
                        if (succeeded)
                        {
                          SubResult4_87 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_87 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_87;
                      else
                      {
                        succeeded = (Var_210 < ArgY5_89);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_210 > ArgY5_89);
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
          MR_Integer Var_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_217 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_218 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Integer ArgY4_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_130;

                succeeded = (Var_218 < ArgY1_129);
                if (succeeded)
                {
                  SubResult1_130 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_218 > ArgY1_129);
                  if (succeeded)
                  {
                    SubResult1_130 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_130 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_130;
                else
                {
                  MR_Word SubResult2_133;

                  succeeded = (Var_217 < ArgY2_132);
                  if (succeeded)
                  {
                    SubResult2_133 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_217 > ArgY2_132);
                    if (succeeded)
                    {
                      SubResult2_133 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_133 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_133;
                  else
                  {
                    MR_Word SubResult3_136;

                    succeeded = (Var_216 < ArgY3_135);
                    if (succeeded)
                    {
                      SubResult3_136 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_216 > ArgY3_135);
                      if (succeeded)
                      {
                        SubResult3_136 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_136 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_136;
                    else
                    {
                      succeeded = (Var_215 < ArgY4_138);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_215 > ArgY4_138);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                  }
                }
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
          MR_Integer Var_219 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_221 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_173 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_174;

                succeeded = (Var_221 < ArgY1_173);
                if (succeeded)
                {
                  SubResult1_174 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_221 > ArgY1_173);
                  if (succeeded)
                  {
                    SubResult1_174 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_174 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_174;
                else
                {
                  MR_Word SubResult2_177;

                  succeeded = (Var_220 < ArgY2_176);
                  if (succeeded)
                  {
                    SubResult2_177 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_220 > ArgY2_176);
                    if (succeeded)
                    {
                      SubResult2_177 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_177 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_177;
                  else
                  {
                    succeeded = (Var_219 < ArgY3_179);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_219 > ArgY3_179);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_43 == CastY_44);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;
          MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_10;
          MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
          MR_Integer ArgY5_12;
          MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
          MR_Integer ArgY6_14;
          MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
          MR_Integer ArgY7_16;
          MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
          MR_Integer ArgY8_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
            ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
            ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
            ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                {
                  succeeded = (ArgX4_9 == ArgY4_10);
                  if (succeeded)
                  {
                    succeeded = (ArgX5_11 == ArgY5_12);
                    if (succeeded)
                    {
                      succeeded = (ArgX6_13 == ArgY6_14);
                      if (succeeded)
                      {
                        succeeded = (ArgX7_15 == ArgY7_16);
                        if (succeeded)
                          succeeded = (ArgX8_17 == ArgY8_18);
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
          MR_Integer ArgX1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_20;
          MR_Integer ArgX2_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_22;
          MR_Integer ArgX3_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_24;
          MR_Integer ArgX4_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_26;
          MR_Integer ArgX5_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
          MR_Integer ArgY5_28;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
            succeeded = (ArgX1_19 == ArgY1_20);
            if (succeeded)
            {
              succeeded = (ArgX2_21 == ArgY2_22);
              if (succeeded)
              {
                succeeded = (ArgX3_23 == ArgY3_24);
                if (succeeded)
                {
                  succeeded = (ArgX4_25 == ArgY4_26);
                  if (succeeded)
                    succeeded = (ArgX5_27 == ArgY5_28);
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_30;
          MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_32;
          MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_34;
          MR_Integer ArgX4_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_36;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (ArgX1_29 == ArgY1_30);
            if (succeeded)
            {
              succeeded = (ArgX2_31 == ArgY2_32);
              if (succeeded)
              {
                succeeded = (ArgX3_33 == ArgY3_34);
                if (succeeded)
                  succeeded = (ArgX4_35 == ArgY4_36);
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_38;
          MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_40;
          MR_Integer ArgX3_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_42;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_37 == ArgY1_38);
            if (succeeded)
            {
              succeeded = (ArgX2_39 == ArgY2_40);
              if (succeeded)
                succeeded = (ArgX3_41 == ArgY3_42);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
measurements____Compare____is_active_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
measurements____Unify____is_active_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
measurements____Compare____inherit_prof_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
measurements____Compare____goal_cost_csq_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_30 < ArgY1_9);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_30 > ArgY1_9);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_20;
                MR_Integer CastX_39 = (MR_Integer) (Var_29);
                MR_Integer CastY_40 = (MR_Integer) (ArgY1_19);

                succeeded = (CastX_39 == CastY_40);
                if (succeeded)
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_20 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
                else
                if (((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0))
                {
                  MR_Float Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) ArgY1_19)) == (MR_Integer) 0))
                  {
                    MR_Float ArgY1_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY1_19, (MR_Integer) 0)));

                    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_20, Var_43, ArgY1_32);
                    succeeded = (SubResult1_20 != (MR_Integer) 0);
                  }
                  else
                  {
                    SubResult1_20 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_Float Var_44 = MR_unbox_float((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));

                  if (((MR_tag((MR_Word) ArgY1_19)) == (MR_Integer) 0))
                  {
                    SubResult1_20 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Float ArgY1_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY1_19, (MR_Integer) 0)));

                    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_20, Var_44, ArgY1_38);
                    succeeded = (SubResult1_20 != (MR_Integer) 0);
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_20;
                else
                {
                  succeeded = (Var_28 < ArgY2_22);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_28 > ArgY2_22);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;
          MR_Integer CastX_17;
          MR_Integer CastY_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            CastX_17 = (MR_Integer) (ArgX1_7);
            CastY_18 = (MR_Integer) (ArgY1_8);
            succeeded = (CastX_17 == CastY_18);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) ArgX1_7)) == (MR_Integer) 0))
            {
              MR_Float ArgX1_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgX1_7, (MR_Integer) 0)));
              MR_Float ArgY1_14;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY1_8, (MR_Integer) 0)));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            else
            {
              MR_Float ArgX1_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgX1_7, (MR_Integer) 0)));
              MR_Float ArgY1_16;

              succeeded = ((MR_tag((MR_Word) ArgY1_8)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY1_8, (MR_Integer) 0)));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
measurements____Compare____cs_cost_csq_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer CastX_21 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_22 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_21 == CastY_22);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
      if (((MR_tag((MR_Word) ArgX2_7)) == (MR_Integer) 0))
      {
        MR_Float Var_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 0))
        {
          MR_Float ArgY1_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 0)));

          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_25, ArgY1_14);
        }
        else
          *HeadVar__1_1 = (MR_Integer) 1;
      }
      else
      {
        MR_Float Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgX2_7, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 0))
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Float ArgY1_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY2_8, (MR_Integer) 0)));

          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_26, ArgY1_20);
        }
      }
    }
  }
}

MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer CastX_13;
    MR_Integer CastY_14;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      CastX_13 = (MR_Integer) (ArgX2_5);
      CastY_14 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ArgX2_5)) == (MR_Integer) 0))
      {
        MR_Float ArgX1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 0)));
        MR_Float ArgY1_10;

        succeeded = ((MR_tag((MR_Word) ArgY2_6)) == (MR_Integer) 0);
        if (succeeded)
        {
          ArgY1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 0)));
          succeeded = (ArgX1_9 == ArgY1_10);
        }
      }
      else
      {
        MR_Float ArgX1_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgX2_5, (MR_Integer) 0)));
        MR_Float ArgY1_12;

        succeeded = ((MR_tag((MR_Word) ArgY2_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgY1_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), ArgY2_6, (MR_Integer) 0)));
          succeeded = (ArgX1_11 == ArgY1_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
measurements____Compare____cost_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Float Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Float Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Float ArgY1_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
  }
}

static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
  MR_Float Weight_7,
  MR_Float Value_8,
  MR_Float STATE_VARIABLE_WeightedSum_0_11,
  MR_Float * STATE_VARIABLE_WeightedSum_12,
  MR_Float STATE_VARIABLE_TotalWeight_0_13,
  MR_Float * STATE_VARIABLE_TotalWeight_14)
{
  MR_Float Var_16 = (Weight_7 * Value_8);

  *STATE_VARIABLE_WeightedSum_12 = (STATE_VARIABLE_WeightedSum_0_11 + Var_16);
  *STATE_VARIABLE_TotalWeight_14 = (STATE_VARIABLE_TotalWeight_0_13 + Weight_7);
}

static void MR_CALL 
measurements__weighted_average_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Float conv1_STATE_VARIABLE_WeightedSum_12;
  MR_Float conv0_STATE_VARIABLE_TotalWeight_14;

  measurements__update_weighted_sum_6_p_0(MR_unbox_float(wrapper_arg_1), MR_unbox_float(wrapper_arg_2), MR_unbox_float(wrapper_arg_3), &conv1_STATE_VARIABLE_WeightedSum_12, MR_unbox_float(wrapper_arg_5), &conv0_STATE_VARIABLE_TotalWeight_14);
  *wrapper_arg_4 = MR_box_float(conv1_STATE_VARIABLE_WeightedSum_12);
  *wrapper_arg_6 = MR_box_float(conv0_STATE_VARIABLE_TotalWeight_14);
}

void MR_CALL 
measurements__weighted_average_3_p_0(
  MR_Word Weights_4,
  MR_Word Values_5,
  MR_Float * Average_6)
{
  MR_bool succeeded;
  MR_Float WeightedSum_7;
  MR_Float TotalWeight_8;
  MR_Box conv3_WeightedSum_7;
  MR_Box conv2_TotalWeight_8;
  MR_Float Var_12;
  MR_Float Var_13;

  mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&measurements_scalar_common_2[4]), Weights_4, Values_5, MR_box_float((MR_Float) 0.0000000000000000), &conv3_WeightedSum_7, MR_box_float((MR_Float) 0.0000000000000000), &conv2_TotalWeight_8);
  WeightedSum_7 = MR_unbox_float(conv3_WeightedSum_7);
  TotalWeight_8 = MR_unbox_float(conv2_TotalWeight_8);
  Var_12 = mercury__float__abs_1_f_0(TotalWeight_8);
  Var_13 = mercury__float__epsilon_0_f_0();
  succeeded = (Var_12 < Var_13);
  if (succeeded)
    *Average_6 = (MR_Float) 0.0000000000000000;
  else
    *Average_6 = mercury__float__f_slash_2_f_0(WeightedSum_7, TotalWeight_8);
}

MR_Integer MR_CALL 
measurements__parallel_exec_metrics_get_num_calls_1_f_0(
  MR_Word Pem_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Pem_3, (MR_Integer) 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__finalise_parallel_exec_metrics_1_f_0(
  MR_Word IncompleteMetrics_3)
{
  MR_bool succeeded;
  MR_Word Metrics_4;
  MR_Float TimeBefore_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 0)));
  MR_Float TimeAfter_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 1)));
  MR_Integer NumCalls_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 2))));
  MR_Float SparkCost_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 3)));
  MR_Float SparkDelay_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 4)));
  MR_Float BarrierCost_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 5)));
  MR_Float ContextWakeupDelay_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 6)));
  MR_Word MaybeInternal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IncompleteMetrics_3, (MR_Integer) 7))));
  MR_Word Internal_13;
  MR_Float BeforeAndAfterTime_14;
  MR_Integer NumConjuncts_15;
  MR_Float InnerParTime_16;
  MR_Float FirstConjDeadTime_17;
  MR_Float FirstConjWakeupPenalty_18;
  MR_Float ParTime_19;
  MR_Float InnerSeqTime_20;
  MR_Float SeqTime_21;
  MR_Float FirstConjParTime_22;
  MR_Float FutureDeadTime_23;
  MR_Float SparkCosts_24;
  MR_Float BarrierCosts_25;
  MR_Float SignalCosts_26;
  MR_Float WaitCosts_27;
  MR_Float Var_31;
  MR_Float Var_32;
  MR_Integer Var_33;
  MR_Float Var_35;

  if ((MaybeInternal_12 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140measurements.finalise_parallel_exec_metrics\'/1", (MR_String) "cannot finalise empty parallel metrics");
  else
    Internal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInternal_12, (MR_Integer) 0))));
  BeforeAndAfterTime_14 = (TimeBefore_5 + TimeAfter_6);
  NumConjuncts_15 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(Internal_13);
  InnerParTime_16 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(Internal_13, SparkDelay_9, NumConjuncts_15);
  Var_31 = (InnerParTime_16 + BeforeAndAfterTime_14);
  InnerSeqTime_20 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(Internal_13);
  SeqTime_21 = (InnerSeqTime_20 + BeforeAndAfterTime_14);
  FirstConjParTime_22 = measurements__pem_get_first_conj_par_time_1_f_0(Internal_13);
  FirstConjDeadTime_17 = (InnerParTime_16 - FirstConjParTime_22);
  succeeded = (FirstConjDeadTime_17 > ((MR_Float) 0.0000000000000000));
  if (succeeded)
    FirstConjWakeupPenalty_18 = ContextWakeupDelay_11;
  else
    FirstConjWakeupPenalty_18 = (MR_Float) 0.0000000000000000;
  ParTime_19 = (Var_31 + FirstConjWakeupPenalty_18);
  FutureDeadTime_23 = measurements__pem_get_future_dead_time_1_f_0(Internal_13);
  Var_33 = (MR_Integer) ((MR_Unsigned) NumConjuncts_15 - (MR_Unsigned) 1);
  Var_32 = mercury__float__float_1_f_0(Var_33);
  SparkCosts_24 = (Var_32 * SparkCost_8);
  Var_35 = mercury__float__float_1_f_0(NumConjuncts_15);
  BarrierCosts_25 = (Var_35 * BarrierCost_10);
  SignalCosts_26 = measurements__pem_get_signal_costs_1_f_0(Internal_13);
  WaitCosts_27 = measurements__pem_get_wait_costs_1_f_0(Internal_13);
  {
    Metrics_4 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Metrics_4, 0) = ((MR_Box) (NumCalls_7));
    MR_hl_field(MR_mktag(0), Metrics_4, 1) = MR_box_float(SeqTime_21);
    MR_hl_field(MR_mktag(0), Metrics_4, 2) = MR_box_float(ParTime_19);
    MR_hl_field(MR_mktag(0), Metrics_4, 3) = MR_box_float(SparkCosts_24);
    MR_hl_field(MR_mktag(0), Metrics_4, 4) = MR_box_float(BarrierCosts_25);
    MR_hl_field(MR_mktag(0), Metrics_4, 5) = MR_box_float(SignalCosts_26);
    MR_hl_field(MR_mktag(0), Metrics_4, 6) = MR_box_float(WaitCosts_27);
    MR_hl_field(MR_mktag(0), Metrics_4, 7) = MR_box_float(FirstConjDeadTime_17);
    MR_hl_field(MR_mktag(0), Metrics_4, 8) = MR_box_float(FutureDeadTime_23);
  }
  return Metrics_4;
}

static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Left_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Float WaitsR_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float WaitsL_13;

    WaitsL_13 = measurements__pem_get_wait_costs_1_f_0(Left_6);
    HeadVar__2_2 = (WaitsR_8 + WaitsL_13);
  }
  else
    HeadVar__2_2 = (MR_Float) 0.0000000000000000;
  return HeadVar__2_2;
}

static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Left_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Float SignalsR_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float SignalsL_13;

    SignalsL_13 = measurements__pem_get_signal_costs_1_f_0(Left_6);
    HeadVar__2_2 = (SignalsR_7 + SignalsL_13);
  }
  else
    HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  return HeadVar__2_2;
}

static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Left_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Float RightDeadTime_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5)));
    MR_Float LeftDeadTime_12;

    LeftDeadTime_12 = measurements__pem_get_future_dead_time_1_f_0(Left_6);
    HeadVar__2_2 = (RightDeadTime_11 + LeftDeadTime_12);
  }
  else
    HeadVar__2_2 = (MR_Float) 0.0000000000000000;
  return HeadVar__2_2;
}

static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Float Time_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Left_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1 = Left_6;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    else
      Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    return Time_2;
    break;
  }
}

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float Time_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word MetricsLeft_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Float TimeRight_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float TimeLeft_13;

    TimeLeft_13 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(MetricsLeft_6);
    Time_2 = (TimeLeft_13 + TimeRight_9);
  }
  else
    Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  return Time_2;
}

static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
  MR_Word PEM_5,
  MR_Float SparkDelay_6,
  MR_Integer Depth_7)
{
  MR_Float Time_8;

  if (((MR_tag((MR_Word) PEM_5)) == (MR_Integer) 1))
  {
    MR_Word MetricsLeft_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PEM_5, (MR_Integer) 0))));
    MR_Float TimeRightPar_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), PEM_5, (MR_Integer) 4)));
    MR_Float TimeRightDead_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), PEM_5, (MR_Integer) 5)));
    MR_Float TimeRight_18;
    MR_Float TimeLeft_19;
    MR_Float Var_20 = (TimeRightPar_16 + TimeRightDead_17);
    MR_Float Var_21;
    MR_Float Var_22;
    MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Depth_7 - (MR_Unsigned) 1);
    MR_Integer Var_25;

    Var_22 = mercury__float__float_1_f_0(Var_23);
    Var_21 = (SparkDelay_6 * Var_22);
    TimeRight_18 = (Var_20 + Var_21);
    Var_25 = (MR_Integer) ((MR_Unsigned) Depth_7 - (MR_Unsigned) 1);
    TimeLeft_19 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(MetricsLeft_12, SparkDelay_6, Var_25);
    Time_8 = mercury__float__max_2_f_0(TimeLeft_19, TimeRight_18);
  }
  else
    Time_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), PEM_5, (MR_Integer) 1)));
  return Time_8;
}

static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Left_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_13;

    Var_13 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(Left_6);
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_13);
  }
  else
    HeadVar__2_2 = (MR_Integer) 1;
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__init_empty_parallel_exec_metrics_7_f_0(
  MR_Float TimeBefore_9,
  MR_Float TimeAfter_10,
  MR_Integer NumCalls_11,
  MR_Float SparkCost_12,
  MR_Float SparkDelay_13,
  MR_Float BarrierCost_14,
  MR_Float ContextWakeupDelay_15)
{
  MR_Word HeadVar__8_8;

  {
    HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 0) = MR_box_float(TimeBefore_9);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 1) = MR_box_float(TimeAfter_10);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 2) = ((MR_Box) (NumCalls_11));
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 3) = MR_box_float(SparkCost_12);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 4) = MR_box_float(SparkDelay_13);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 5) = MR_box_float(BarrierCost_14);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 6) = MR_box_float(ContextWakeupDelay_15);
    MR_hl_field(MR_mktag(0), HeadVar__8_8, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__8_8;
}

MR_Word MR_CALL 
measurements__init_parallel_exec_metrics_incomplete_6_f_0(
  MR_Word Metrics0_8,
  MR_Float TimeSignals_9,
  MR_Float TimeWaits_10,
  MR_Float TimeBSeq_11,
  MR_Float TimeBPar_12,
  MR_Float TimeBDead_13)
{
  MR_bool succeeded;
  MR_Word Metrics_14;
  MR_Word MaybeInternal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 7))));
  MR_Word Internal_17;
  MR_Word Var_20;
  MR_Float Var_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 0)));
  MR_Float Var_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 1)));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 2))));
  MR_Float Var_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 3)));
  MR_Float Var_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 4)));
  MR_Float Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 5)));
  MR_Float Var_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics0_8, (MR_Integer) 6)));

  if ((MaybeInternal0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      Internal_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_17, 0) = MR_box_float(TimeBSeq_11);
      MR_hl_field(MR_mktag(0), Internal_17, 1) = MR_box_float(TimeBPar_12);
      MR_hl_field(MR_mktag(0), Internal_17, 2) = MR_box_float(TimeSignals_9);
    }
    succeeded = (TimeBDead_13 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
      succeeded = (TimeWaits_10 == ((MR_Float) 0.0000000000000000));
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "function \140measurements.init_parallel_exec_metrics_incomplete\'/6", (MR_String) "TimeWaits != 0 or TimeBDead != 0");
  }
  else
  {
    MR_Word Internal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInternal0_15, (MR_Integer) 0))));

    {
      Internal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Internal_17, 0) = ((MR_Box) (Internal0_16));
      MR_hl_field(MR_mktag(1), Internal_17, 1) = MR_box_float(TimeSignals_9);
      MR_hl_field(MR_mktag(1), Internal_17, 2) = MR_box_float(TimeWaits_10);
      MR_hl_field(MR_mktag(1), Internal_17, 3) = MR_box_float(TimeBSeq_11);
      MR_hl_field(MR_mktag(1), Internal_17, 4) = MR_box_float(TimeBPar_12);
      MR_hl_field(MR_mktag(1), Internal_17, 5) = MR_box_float(TimeBDead_13);
    }
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Internal_17));
  }
  {
    Metrics_14 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Metrics_14, 0) = MR_box_float(Var_21);
    MR_hl_field(MR_mktag(0), Metrics_14, 1) = MR_box_float(Var_22);
    MR_hl_field(MR_mktag(0), Metrics_14, 2) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), Metrics_14, 3) = MR_box_float(Var_24);
    MR_hl_field(MR_mktag(0), Metrics_14, 4) = MR_box_float(Var_25);
    MR_hl_field(MR_mktag(0), Metrics_14, 5) = MR_box_float(Var_26);
    MR_hl_field(MR_mktag(0), Metrics_14, 6) = MR_box_float(Var_27);
    MR_hl_field(MR_mktag(0), Metrics_14, 7) = ((MR_Box) (Var_20));
  }
  return Metrics_14;
}

MR_bool MR_CALL 
measurements__exceeded_desired_parallelism_2_p_0(
  MR_Float DesiredParallelism_3,
  MR_Word Parallelism_4)
{
  MR_bool succeeded;
  MR_Float LikelyParallelism_5 = MR_unbox_float((MR_Box) (Parallelism_4));

  succeeded = (DesiredParallelism_3 < LikelyParallelism_5);
  return succeeded;
}

void MR_CALL 
measurements__sub_computation_parallelism_3_p_0(
  MR_Word ParentParallelism_4,
  MR_Float Prob_5,
  MR_Word * Parallelism_6)
{
  MR_Float ProbFloat_9;
  MR_Float ParLikely_10;
  MR_Float Likely_12;
  MR_Float Var_13;

  ProbFloat_9 = measurement_units__probability_to_float_1_f_0(Prob_5);
  ParLikely_10 = MR_unbox_float((MR_Box) (ParentParallelism_4));
  Var_13 = (ProbFloat_9 * (MR_unbox_float((MR_Box) ((MR_Word) ((MR_Box) (&measurements_scalar_common_5[0]))))));
  Likely_12 = (ParLikely_10 + Var_13);
  *Parallelism_6 = (MR_Word) (MR_box_float(Likely_12));
}

void MR_CALL 
measurements__sub_computation_parallelism_4_p_0(
  MR_Word ParentParallelism_5,
  MR_Float Prob_6,
  MR_Word ChildParallelism_7,
  MR_Word * Parallelism_8)
{
  MR_Float ProbFloat_9;
  MR_Float ParLikely_10;
  MR_Float ChildLikely_11;
  MR_Float Likely_12;
  MR_Float Var_13;

  ProbFloat_9 = measurement_units__probability_to_float_1_f_0(Prob_6);
  ParLikely_10 = MR_unbox_float((MR_Box) (ParentParallelism_5));
  ChildLikely_11 = MR_unbox_float((MR_Box) (ChildParallelism_7));
  Var_13 = (ProbFloat_9 * ChildLikely_11);
  Likely_12 = (ParLikely_10 + Var_13);
  *Parallelism_8 = (MR_Word) (MR_box_float(Likely_12));
}

MR_Word MR_CALL 
measurements__some_parallelism_1_f_0(
  MR_Float Num_3)
{
  MR_bool succeeded = (Num_3 < ((MR_Float) 1.0000000000000000));
  MR_Word HeadVar__2_2 = (MR_Word) (MR_box_float(Num_3));

  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140measurements.some_parallelism\'/1", (MR_String) "Parallelism amount cannot ever be less than 1.0");
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__no_parallelism_0_f_0(void)
{
  return (MR_Word) ((MR_Box) (&measurements_scalar_common_5[0]));
}

MR_Word MR_CALL 
measurements__static_coverage_maybe_get_coverage_points_1_f_0(
  MR_Word MaybeCoverage_3)
{
  MR_Word MaybeCoverage_2 = MaybeCoverage_3;

  return MaybeCoverage_2;
}

void MR_CALL 
measurements__array_to_static_coverage_2_p_0(
  MR_ArrayPtr Array_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Array_3));
  }
}

static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_LambdaHeadVar__4_22;

  measurements__IntroducedFrom__pred__add_coverage_arrays__958__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv1_LambdaHeadVar__4_22);
  *wrapper_arg_4 = ((MR_Box) (conv1_LambdaHeadVar__4_22));
}

void MR_CALL 
measurements__add_coverage_arrays_3_p_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar__1_1));
    }
  else
  {
    MR_ArrayPtr STATE_VARIABLE_Array_0_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_ArrayPtr STATE_VARIABLE_Array_15;
    MR_Integer Min_7;
    MR_Integer Max_8;
    MR_Integer Var_34;
    MR_Integer Var_35;

    mercury__array__bounds_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (HeadVar__1_1), &Min_7, &Max_8);
    mercury__array__bounds_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (STATE_VARIABLE_Array_0_14), &Var_34, &Var_35);
    succeeded = (Min_7 == Var_34);
    if (succeeded)
      succeeded = (Max_8 == Var_35);
    if (succeeded)
    {
      MR_ArrayPtr STATE_VARIABLE_Array_16_16;
      MR_ArrayPtr conv0_STATE_VARIABLE_Array_16_16;
      MR_Box conv2_STATE_VARIABLE_Array_15;

      conv0_STATE_VARIABLE_Array_16_16 = mercury__array__copy_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (STATE_VARIABLE_Array_0_14));
      STATE_VARIABLE_Array_16_16 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_Array_16_16);
      array_util__array_foldl_from_0_4_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&measurements_scalar_common_1[0]), (MR_Word) (&measurements_scalar_common_2[3]), (MR_ArrayPtr) (HeadVar__1_1), ((MR_Box) (STATE_VARIABLE_Array_16_16)), &conv2_STATE_VARIABLE_Array_15);
      STATE_VARIABLE_Array_15 = ((MR_ArrayPtr) (conv2_STATE_VARIABLE_Array_15));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140measurements.add_coverage_arrays\'/3", (MR_String) "arrays\' bounds do not match");
        return;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_Array_15));
    }
  }
}

MR_Word MR_CALL 
measurements__zero_static_coverage_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
measurements__recursion_depth_is_base_case_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Float D_2 = MR_unbox_float((MR_Box) (HeadVar__1_1));
  MR_Float Var_4;

  succeeded = (D_2 < ((MR_Float) 0.50000000000000000));
  if (succeeded)
  {
    Var_4 = (MR_Float) -0.50000000000000000;
    succeeded = (D_2 >= Var_4);
  }
  return succeeded;
}

void MR_CALL 
measurements__recursion_depth_descend_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float D_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));
  MR_Float Var_4 = (D_3 - ((MR_Float) 1.0000000000000000));

  *HeadVar__2_2 = (MR_Word) (MR_box_float(Var_4));
  succeeded = (D_3 >= ((MR_Float) 0.50000000000000000));
  if (!(succeeded))
  {
    MR_String Var_8;
    MR_Float Var_12 = (D_3 - ((MR_Float) 1.0000000000000000));
    MR_String Var_15;

    mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&measurements_scalar_common_4[0]), (MR_Integer) 2, Var_12, &Var_15);
    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Recursion depth will be less than zero: ", Var_15);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140measurements.recursion_depth_descend\'/2", Var_8);
      return;
    }
  }
}

MR_Integer MR_CALL 
measurements__recursion_depth_to_int_1_f_0(
  MR_Word D_3)
{
  MR_Integer HeadVar__2_2;
  MR_Float Var_4 = MR_unbox_float((MR_Box) (D_3));

  HeadVar__2_2 = mercury__float__round_to_int_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurements__recursion_depth_to_float_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float F_3 = MR_unbox_float((MR_Box) (HeadVar__1_1));

  return F_3;
}

MR_Word MR_CALL 
measurements__recursion_depth_from_float_1_f_0(
  MR_Float F_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (MR_box_float(F_3));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__goal_cost_change_calls_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2)
{
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box conv0_HeadVar__3_3;

        conv0_HeadVar__3_3 = mercury__require__unexpected_2_f_0((MR_Word) (&measurements__measurements__type_ctor_info_goal_cost_csq_0), (MR_String) "function \140measurements.goal_cost_change_calls\'/2", (MR_String) "Cannot compute new cost");
        HeadVar__3_3 = ((MR_Word) (conv0_HeadVar__3_3));
      }
      break;
    case (MR_Integer) 1:
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Calls_2));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cost0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Calls0_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Cost_12;
        MR_Float Var_13;
        MR_Float Var_14;

        Var_14 = mercury__float__float_1_f_0(Calls0_10);
        if (((MR_tag((MR_Word) Cost0_9)) == (MR_Integer) 0))
          Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost0_9, (MR_Integer) 0)));
        else
        {
          MR_Float Total_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost0_9, (MR_Integer) 0)));

          Var_13 = mercury__float__f_slash_2_f_0(Total_17, Var_14);
        }
        {
          Cost_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Cost_12, 0) = MR_box_float(Var_13);
        }
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Cost_12));
          MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = ((MR_Box) (Calls_2));
        }
      }
      break;
  }
  return HeadVar__3_3;
}

MR_Integer MR_CALL 
measurements__goal_cost_get_calls_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
      break;
  }
  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurements__goal_cost_get_total_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cost_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Calls_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Float Var_6;

        Var_6 = mercury__float__float_1_f_0(Calls_5);
        if (((MR_tag((MR_Word) Cost_4)) == (MR_Integer) 0))
        {
          MR_Float Percall_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost_4, (MR_Integer) 0)));

          HeadVar__2_2 = (Var_6 * Percall_10);
        }
        else
          HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost_4, (MR_Integer) 0)));
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurements__goal_cost_get_percall_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Float HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cost_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Calls_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));

        succeeded = (Calls_5 == (MR_Integer) 0);
        if (succeeded)
          HeadVar__2_2 = (MR_Float) 0.0000000000000000;
        else
        {
          MR_Float Var_6;

          Var_6 = mercury__float__float_1_f_0(Calls_5);
          if (((MR_tag((MR_Word) Cost_4)) == (MR_Integer) 0))
            HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost_4, (MR_Integer) 0)));
          else
          {
            MR_Float Total_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost_4, (MR_Integer) 0)));

            HeadVar__2_2 = mercury__float__f_slash_2_f_0(Total_8, Var_6);
          }
        }
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__add_goal_costs_branch_3_f_0(
  MR_Integer TotalCalls_5,
  MR_Word A_6,
  MR_Word B_7)
{
  MR_bool succeeded = (TotalCalls_5 == (MR_Integer) 0);
  MR_Word R_8;

  if (succeeded)
    R_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer CallsA_9;
    MR_Integer CallsB_10;
    MR_Integer Calls_34;

    switch (MR_tag((MR_Word) A_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CallsA_9 = (MR_Integer) 0;
          switch (MR_tag((MR_Word) B_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__require__unexpected_2_p_0((MR_String) "function \140measurements.add_goal_costs_branch\'/3", (MR_String) "TotalCalls \\= 0 for a dead goal");
              break;
            case (MR_Integer) 1:
              {
                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), B_7, (MR_Integer) 0))));
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), R_8, 0) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Cost_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 0))));

                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 1))));
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), R_8, 0) = ((MR_Box) (Cost_11));
                  MR_hl_field(MR_mktag(2), R_8, 1) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          CallsA_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), A_6, (MR_Integer) 0))));
          switch (MR_tag((MR_Word) B_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                CallsB_10 = (MR_Integer) 0;
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), R_8, 0) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), B_7, (MR_Integer) 0))));
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), R_8, 0) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Cost_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 0))));

                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 1))));
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), R_8, 0) = ((MR_Box) (Cost_19));
                  MR_hl_field(MR_mktag(2), R_8, 1) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CostA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), A_6, (MR_Integer) 0))));

          CallsA_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), A_6, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) B_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                CallsB_10 = (MR_Integer) 0;
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), R_8, 0) = ((MR_Box) (CostA_12));
                  MR_hl_field(MR_mktag(2), R_8, 1) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), B_7, (MR_Integer) 0))));
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), R_8, 0) = ((MR_Box) (CostA_12));
                  MR_hl_field(MR_mktag(2), R_8, 1) = ((MR_Box) (TotalCalls_5));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CostB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 0))));
                MR_Float Var_14;
                MR_Float Var_15;
                MR_Integer Var_16;
                MR_Word Cost_22;
                MR_Float Sum_23;
                MR_Float CostTotalA_24;
                MR_Float CostTotalB_25;

                CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), B_7, (MR_Integer) 1))));
                Var_14 = mercury__float__float_1_f_0(CallsA_9);
                Var_15 = mercury__float__float_1_f_0(CallsB_10);
                if (((MR_tag((MR_Word) CostA_12)) == (MR_Integer) 0))
                {
                  MR_Float Percall_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostA_12, (MR_Integer) 0)));

                  CostTotalA_24 = (Var_14 * Percall_29);
                }
                else
                  CostTotalA_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), CostA_12, (MR_Integer) 0)));
                if (((MR_tag((MR_Word) CostB_13)) == (MR_Integer) 0))
                {
                  MR_Float Percall_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostB_13, (MR_Integer) 0)));

                  CostTotalB_25 = (Var_15 * Percall_33);
                }
                else
                  CostTotalB_25 = MR_unbox_float((MR_hl_field(MR_mktag(1), CostB_13, (MR_Integer) 0)));
                Sum_23 = (CostTotalA_24 + CostTotalB_25);
                {
                  Cost_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Cost_22, 0) = MR_box_float(Sum_23);
                }
                Var_16 = (MR_Integer) ((MR_Unsigned) CallsA_9 + (MR_Unsigned) CallsB_10);
                {
                  R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), R_8, 0) = ((MR_Box) (Cost_22));
                  MR_hl_field(MR_mktag(2), R_8, 1) = ((MR_Box) (Var_16));
                }
              }
              break;
          }
        }
        break;
    }
    Calls_34 = (MR_Integer) ((MR_Unsigned) CallsA_9 + (MR_Unsigned) CallsB_10);
    succeeded = (Calls_34 == TotalCalls_5);
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140measurements.check_total_calls\'/3", (MR_String) "TotalCalls \\= CallsA + CallsB");
  }
  return R_8;
}

MR_Word MR_CALL 
measurements__add_goal_costs_seq_2_f_0(
  MR_Word GoalCostsA_4,
  MR_Word GoalCostsB_5)
{
  MR_bool succeeded;
  MR_Word GoalCosts_6;

  switch (MR_tag((MR_Word) GoalCostsA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GoalCosts_6 = GoalCostsB_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Integer CallsA_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GoalCostsA_4, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) GoalCostsB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            GoalCosts_6 = GoalCostsA_4;
            break;
          case (MR_Integer) 1:
            GoalCosts_6 = GoalCostsA_4;
            break;
          case (MR_Integer) 2:
            {
              MR_Word CostB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalCostsB_5, (MR_Integer) 0))));
              MR_Integer CallsB_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalCostsB_5, (MR_Integer) 1))));
              MR_Float CostTotal_11;
              MR_Word Cost_12;
              MR_Float Var_21;

              Var_21 = mercury__float__float_1_f_0(CallsB_10);
              if (((MR_tag((MR_Word) CostB_9)) == (MR_Integer) 0))
              {
                MR_Float Percall_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostB_9, (MR_Integer) 0)));

                CostTotal_11 = (Var_21 * Percall_46);
              }
              else
                CostTotal_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), CostB_9, (MR_Integer) 0)));
              {
                Cost_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Cost_12, 0) = MR_box_float(CostTotal_11);
              }
              {
                GoalCosts_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GoalCosts_6, 0) = ((MR_Box) (Cost_12));
                MR_hl_field(MR_mktag(2), GoalCosts_6, 1) = ((MR_Box) (CallsA_7));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CostA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalCostsA_4, (MR_Integer) 0))));
        MR_Integer CallsA_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalCostsA_4, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalCostsB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            GoalCosts_6 = GoalCostsA_4;
            break;
          case (MR_Integer) 1:
            GoalCosts_6 = GoalCostsA_4;
            break;
          case (MR_Integer) 2:
            {
              MR_Float Var_15;
              MR_Float Var_16;
              MR_Float Var_17;
              MR_Float Var_18;
              MR_Word CostB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalCostsB_5, (MR_Integer) 0))));
              MR_Integer CallsB_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalCostsB_5, (MR_Integer) 1))));
              MR_Float CostTotal_27;
              MR_Word Cost_28;

              Var_16 = mercury__float__float_1_f_0(CallsA_34);
              if (((MR_tag((MR_Word) CostA_13)) == (MR_Integer) 0))
              {
                MR_Float Percall_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostA_13, (MR_Integer) 0)));

                Var_15 = (Var_16 * Percall_38);
              }
              else
                Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), CostA_13, (MR_Integer) 0)));
              Var_18 = mercury__float__float_1_f_0(CallsB_26);
              if (((MR_tag((MR_Word) CostB_25)) == (MR_Integer) 0))
              {
                MR_Float Percall_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), CostB_25, (MR_Integer) 0)));

                Var_17 = (Var_18 * Percall_42);
              }
              else
                Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), CostB_25, (MR_Integer) 0)));
              CostTotal_27 = (Var_15 + Var_17);
              {
                Cost_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Cost_28, 0) = MR_box_float(CostTotal_27);
              }
              succeeded = (CallsA_34 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (CostTotal_27 == ((MR_Float) 0.0000000000000000));
                succeeded = !(succeeded);
              }
              if (succeeded)
                mercury__require__unexpected_2_p_0((MR_String) "function \140measurements.add_goal_costs_seq\'/2", (MR_String) "Calls = 0, Cost \\= 0");
              {
                GoalCosts_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GoalCosts_6, 0) = ((MR_Box) (Cost_28));
                MR_hl_field(MR_mktag(2), GoalCosts_6, 1) = ((MR_Box) (CallsA_34));
              }
            }
            break;
        }
      }
      break;
  }
  return GoalCosts_6;
}

MR_Word MR_CALL 
measurements__call_goal_cost_1_f_0(
  MR_Word CSCost_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Cost_4;
  MR_Integer Calls_5;
  MR_Float Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), CSCost_3, (MR_Integer) 0)));

  Calls_5 = mercury__float__round_to_int_1_f_0(Var_6);
  Cost_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSCost_3, (MR_Integer) 1))));
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Cost_4));
    MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = ((MR_Box) (Calls_5));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__call_goal_cost_2_f_0(
  MR_Integer Calls_4,
  MR_Float PercallCost_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Cost_6;

  {
    Cost_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Cost_6, 0) = MR_box_float(PercallCost_5);
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Cost_6));
    MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = ((MR_Box) (Calls_4));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
measurements__dead_goal_cost_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
measurements__atomic_goal_cost_1_f_0(
  MR_Integer Calls_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Calls_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__cs_cost_per_proc_call_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word ParentCost_6)
{
  MR_Word HeadVar__3_3;
  MR_Float CSCalls0_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Word CSCost0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Float CSCalls_7;
  MR_Word CSCost_8;
  MR_Integer TotalParentCalls_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ParentCost_6, (MR_Integer) 0))));
  MR_Float Var_10;

  Var_10 = mercury__float__float_1_f_0(TotalParentCalls_9);
  CSCalls_7 = mercury__float__f_slash_2_f_0(CSCalls0_4, Var_10);
  if (((MR_tag((MR_Word) CSCost0_5)) == (MR_Integer) 0))
  {
    MR_Float Percall_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), CSCost0_5, (MR_Integer) 0)));
    MR_Float Var_15;
    MR_Float Var_16;

    Var_16 = mercury__float__float_1_f_0(TotalParentCalls_9);
    Var_15 = mercury__float__f_slash_2_f_0(Percall_14, Var_16);
    {
      CSCost_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CSCost_8, 0) = MR_box_float(Var_15);
    }
  }
  else
  {
    MR_Float Total_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), CSCost0_5, (MR_Integer) 0)));
    MR_Float Var_17;
    MR_Float Var_18;

    Var_18 = mercury__float__float_1_f_0(TotalParentCalls_9);
    Var_17 = mercury__float__f_slash_2_f_0(Total_13, Var_18);
    {
      CSCost_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CSCost_8, 0) = MR_box_float(Var_17);
    }
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = MR_box_float(CSCalls_7);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (CSCost_8));
  }
  return HeadVar__3_3;
}

void MR_CALL 
measurements__cs_cost_to_proc_cost_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer TotalCalls_6,
  MR_Word * HeadVar__3_3)
{
  MR_Float CSCalls_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Word CSCost_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer NRCalls_7;
  MR_Integer RCalls_8;
  MR_Word PCost_9;
  MR_Integer Var_10;
  MR_Float Var_11;
  MR_Float Var_12;
  MR_Float Var_13;

  NRCalls_7 = mercury__float__round_to_int_1_f_0(CSCalls_4);
  Var_10 = mercury__float__round_to_int_1_f_0(CSCalls_4);
  RCalls_8 = (MR_Integer) ((MR_Unsigned) TotalCalls_6 - (MR_Unsigned) Var_10);
  if (((MR_tag((MR_Word) CSCost_5)) == (MR_Integer) 0))
  {
    MR_Float Percall_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), CSCost_5, (MR_Integer) 0)));

    Var_12 = (CSCalls_4 * Percall_18);
  }
  else
    Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), CSCost_5, (MR_Integer) 0)));
  Var_13 = (((MR_Float) 1.0000000000000000) * CSCalls_4);
  Var_11 = (Var_12 - Var_13);
  {
    PCost_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PCost_9, 0) = MR_box_float(Var_11);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NRCalls_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RCalls_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PCost_9));
  }
}

MR_Float MR_CALL 
measurements__cs_cost_get_calls_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

  return Calls_3;
}

MR_Float MR_CALL 
measurements__cs_cost_get_percall_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Word Cost_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) Cost_4)) == (MR_Integer) 0))
    HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost_4, (MR_Integer) 0)));
  else
  {
    MR_Float Total_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost_4, (MR_Integer) 0)));

    HeadVar__2_2 = mercury__float__f_slash_2_f_0(Total_6, Calls_3);
  }
  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurements__cs_cost_get_total_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Word Cost_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) Cost_4)) == (MR_Integer) 0))
  {
    MR_Float Percall_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost_4, (MR_Integer) 0)));

    HeadVar__2_2 = (Calls_3 * Percall_8);
  }
  else
    HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost_4, (MR_Integer) 0)));
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_rec_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer RCalls_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  return RCalls_4;
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_nonrec_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer NRCalls_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  return NRCalls_3;
}

MR_Integer MR_CALL 
measurements__proc_cost_get_calls_total_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;
  MR_Integer NRCalls_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer RCalls_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) NRCalls_3 + (MR_Unsigned) RCalls_4);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
measurements__proc_cost_get_total_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Integer NRCalls_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer RCalls_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Cost_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
  MR_Float Var_6;
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) NRCalls_3 + (MR_Unsigned) RCalls_4);

  Var_6 = mercury__float__float_1_f_0(Var_7);
  if (((MR_tag((MR_Word) Cost_5)) == (MR_Integer) 0))
  {
    MR_Float Percall_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), Cost_5, (MR_Integer) 0)));

    HeadVar__2_2 = (Var_6 * Percall_11);
  }
  else
    HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), Cost_5, (MR_Integer) 0)));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__zero_cs_cost_0_f_0(void)
{
  return (MR_Word) (&measurements_scalar_common_1[3]);
}

MR_Word MR_CALL 
measurements__build_cs_cost_csq_percall_2_f_0(
  MR_Float Calls_4,
  MR_Float PercallCost_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_6, 0) = MR_box_float(PercallCost_5);
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = MR_box_float(Calls_4);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
measurements__build_cs_cost_csq_2_f_0(
  MR_Integer Calls_4,
  MR_Float TotalCost_5)
{
  MR_Word HeadVar__3_3;
  MR_Float Var_6;
  MR_Word Var_7;

  Var_6 = mercury__float__float_1_f_0(Calls_4);
  {
    Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_7, 0) = MR_box_float(TotalCost_5);
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = MR_box_float(Var_6);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
measurements__build_proc_cost_csq_3_f_0(
  MR_Integer NonRecursiveCalls_5,
  MR_Integer RecursiveCalls_6,
  MR_Integer TotalCost_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Float Var_9;

  Var_9 = mercury__float__float_1_f_0(TotalCost_7);
  {
    Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_8, 0) = MR_box_float(Var_9);
  }
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (NonRecursiveCalls_5));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (RecursiveCalls_6));
    MR_hl_field(MR_mktag(0), HeadVar__4_4, 2) = ((MR_Box) (Var_8));
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
measurements__compute_is_active_1_f_0(
  MR_Word Own_3)
{
  MR_bool succeeded;
  MR_Word IsActive_4;

  switch (MR_tag((MR_Word) Own_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_3, (MR_Integer) 0))));
        MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_3, (MR_Integer) 1))));
        MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_3, (MR_Integer) 2))));
        MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_3, (MR_Integer) 3))));

        succeeded = (Var_21 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_22 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_23 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (Var_24 == (MR_Integer) 0);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_3, (MR_Integer) 0))));

        succeeded = (Var_20 == (MR_Integer) 0);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Own_3, (MR_Integer) 0))));

        succeeded = (Var_19 == (MR_Integer) 0);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Own_3, (MR_Integer) 0))));
        MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Own_3, (MR_Integer) 1))));

        succeeded = (Var_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Var_18 == (MR_Integer) 0);
      }
      break;
  }
  if (succeeded)
    IsActive_4 = (MR_Integer) 1;
  else
    IsActive_4 = (MR_Integer) 0;
  return IsActive_4;
}

MR_String MR_CALL 
measurements__own_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Exits_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Fails_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Redos_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Excps_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer Quanta_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
        MR_Integer CallSeqs_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
        MR_Integer Allocs_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
        MR_Integer Words_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
        MR_String Var_12;
        MR_String Var_13;
        MR_String Var_14;
        MR_String Var_16;
        MR_String Var_17;
        MR_String Var_18;
        MR_String Var_20;
        MR_String Var_21;
        MR_String Var_22;
        MR_String Var_24;
        MR_String Var_25;
        MR_String Var_26;
        MR_String Var_28;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_34;
        MR_String Var_36;
        MR_String Var_37;
        MR_String Var_38;
        MR_String Var_40;
        MR_String Var_41;

        Var_13 = mercury__string__int_to_string_1_f_0(Exits_3);
        Var_17 = mercury__string__int_to_string_1_f_0(Fails_4);
        Var_21 = mercury__string__int_to_string_1_f_0(Redos_5);
        Var_25 = mercury__string__int_to_string_1_f_0(Excps_6);
        Var_29 = mercury__string__int_to_string_1_f_0(Quanta_7);
        Var_33 = mercury__string__int_to_string_1_f_0(CallSeqs_8);
        Var_37 = mercury__string__int_to_string_1_f_0(Allocs_9);
        Var_41 = mercury__string__int_to_string_1_f_0(Words_10);
        Var_40 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ")");
        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
        Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_36);
        Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
        Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
        Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
        Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_28);
        Var_24 = mercury__string__f_43_43_2_f_0(Var_25, Var_26);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_24);
        Var_20 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
        Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_20);
        Var_16 = mercury__string__f_43_43_2_f_0(Var_17, Var_18);
        Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_16);
        Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "all(", Var_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Exits_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Quanta_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer CallSeqs_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Allocs_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer Words_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
        MR_String Var_49;
        MR_String Var_50;
        MR_String Var_51;
        MR_String Var_53;
        MR_String Var_54;
        MR_String Var_55;
        MR_String Var_57;
        MR_String Var_58;
        MR_String Var_59;
        MR_String Var_61;
        MR_String Var_62;
        MR_String Var_63;
        MR_String Var_65;
        MR_String Var_66;

        Var_50 = mercury__string__int_to_string_1_f_0(Exits_43);
        Var_54 = mercury__string__int_to_string_1_f_0(Quanta_44);
        Var_58 = mercury__string__int_to_string_1_f_0(CallSeqs_45);
        Var_62 = mercury__string__int_to_string_1_f_0(Allocs_46);
        Var_66 = mercury__string__int_to_string_1_f_0(Words_47);
        Var_65 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ")");
        Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_65);
        Var_61 = mercury__string__f_43_43_2_f_0(Var_62, Var_63);
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_61);
        Var_57 = mercury__string__f_43_43_2_f_0(Var_58, Var_59);
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_57);
        Var_53 = mercury__string__f_43_43_2_f_0(Var_54, Var_55);
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_53);
        Var_49 = mercury__string__f_43_43_2_f_0(Var_50, Var_51);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "det(", Var_49);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Exits_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer CallSeqs_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Allocs_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Words_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_String Var_73;
        MR_String Var_74;
        MR_String Var_75;
        MR_String Var_77;
        MR_String Var_78;
        MR_String Var_79;
        MR_String Var_81;
        MR_String Var_82;
        MR_String Var_83;
        MR_String Var_85;
        MR_String Var_86;

        Var_74 = mercury__string__int_to_string_1_f_0(Exits_68);
        Var_78 = mercury__string__int_to_string_1_f_0(CallSeqs_69);
        Var_82 = mercury__string__int_to_string_1_f_0(Allocs_70);
        Var_86 = mercury__string__int_to_string_1_f_0(Words_71);
        Var_85 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) ")");
        Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_85);
        Var_81 = mercury__string__f_43_43_2_f_0(Var_82, Var_83);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_81);
        Var_77 = mercury__string__f_43_43_2_f_0(Var_78, Var_79);
        Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_77);
        Var_73 = mercury__string__f_43_43_2_f_0(Var_74, Var_75);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", Var_73);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Exits_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Fails_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer CallSeqs_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
        MR_String Var_92;
        MR_String Var_93;
        MR_String Var_94;
        MR_String Var_96;
        MR_String Var_97;
        MR_String Var_98;
        MR_String Var_100;
        MR_String Var_101;

        Var_93 = mercury__string__int_to_string_1_f_0(Exits_88);
        Var_97 = mercury__string__int_to_string_1_f_0(Fails_89);
        Var_101 = mercury__string__int_to_string_1_f_0(CallSeqs_90);
        Var_100 = mercury__string__f_43_43_2_f_0(Var_101, (MR_String) ")");
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_100);
        Var_96 = mercury__string__f_43_43_2_f_0(Var_97, Var_98);
        Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
        Var_92 = mercury__string__f_43_43_2_f_0(Var_93, Var_94);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", Var_92);
      }
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
measurements__decompress_profile_10_p_0(
  MR_Word Own_11,
  MR_Integer * Calls_12,
  MR_Integer * Exits_13,
  MR_Integer * Fails_14,
  MR_Integer * Redos_15,
  MR_Integer * Excps_16,
  MR_Integer * Quanta_17,
  MR_Integer * CallSeqs_18,
  MR_Integer * Allocs_19,
  MR_Integer * Words_20)
{
  switch (MR_tag((MR_Word) Own_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_21;

        *Exits_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 0))));
        *Fails_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 1))));
        *Redos_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 2))));
        *Excps_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 3))));
        *Quanta_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 4))));
        *CallSeqs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 5))));
        *Allocs_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 6))));
        *Words_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Own_11, (MR_Integer) 7))));
        Var_21 = (MR_Integer) ((MR_Unsigned) *Exits_13 + (MR_Unsigned) *Fails_14);
        *Calls_12 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) *Redos_15);
      }
      break;
    case (MR_Integer) 1:
      {
        *Exits_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_11, (MR_Integer) 0))));
        *Quanta_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_11, (MR_Integer) 1))));
        *CallSeqs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_11, (MR_Integer) 2))));
        *Allocs_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_11, (MR_Integer) 3))));
        *Words_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Own_11, (MR_Integer) 4))));
        *Calls_12 = *Exits_13;
        *Fails_14 = (MR_Integer) 0;
        *Redos_15 = (MR_Integer) 0;
        *Excps_16 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        *Exits_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Own_11, (MR_Integer) 0))));
        *CallSeqs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Own_11, (MR_Integer) 1))));
        *Allocs_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Own_11, (MR_Integer) 2))));
        *Words_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Own_11, (MR_Integer) 3))));
        *Calls_12 = *Exits_13;
        *Fails_14 = (MR_Integer) 0;
        *Redos_15 = (MR_Integer) 0;
        *Excps_16 = (MR_Integer) 0;
        *Quanta_17 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        *Exits_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Own_11, (MR_Integer) 0))));
        *Fails_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Own_11, (MR_Integer) 1))));
        *CallSeqs_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Own_11, (MR_Integer) 2))));
        *Calls_12 = (MR_Integer) ((MR_Unsigned) *Exits_13 + (MR_Unsigned) *Fails_14);
        *Redos_15 = (MR_Integer) 0;
        *Excps_16 = (MR_Integer) 0;
        *Quanta_17 = (MR_Integer) 0;
        *Allocs_19 = (MR_Integer) 0;
        *Words_20 = (MR_Integer) 0;
      }
      break;
  }
}

MR_Word MR_CALL 
measurements__compress_profile_1_f_0(
  MR_Word PI0_3)
{
  MR_bool succeeded;
  MR_Word PI_4;

  switch (MR_tag((MR_Word) PI0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Exits_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 0))));
        MR_Integer Fails_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 1))));
        MR_Integer Redos_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 2))));
        MR_Integer Excps_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 3))));
        MR_Integer Quanta_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 4))));
        MR_Integer CallSeqs_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 5))));
        MR_Integer Allocs_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 6))));
        MR_Integer Words_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI0_3, (MR_Integer) 7))));

        succeeded = (Redos_7 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Excps_8 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Quanta_9 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Allocs_11 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Words_12 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
          {
            PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PI_4, 0) = ((MR_Box) (Exits_5));
            MR_hl_field(MR_mktag(3), PI_4, 1) = ((MR_Box) (Fails_6));
            MR_hl_field(MR_mktag(3), PI_4, 2) = ((MR_Box) (CallSeqs_10));
          }
        else
        {
          succeeded = (Fails_6 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Redos_7 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (Excps_8 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            succeeded = (Quanta_9 == (MR_Integer) 0);
            if (succeeded)
              {
                PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), PI_4, 0) = ((MR_Box) (Exits_5));
                MR_hl_field(MR_mktag(2), PI_4, 1) = ((MR_Box) (CallSeqs_10));
                MR_hl_field(MR_mktag(2), PI_4, 2) = ((MR_Box) (Allocs_11));
                MR_hl_field(MR_mktag(2), PI_4, 3) = ((MR_Box) (Words_12));
              }
            else
              {
                PI_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PI_4, 0) = ((MR_Box) (Exits_5));
                MR_hl_field(MR_mktag(1), PI_4, 1) = ((MR_Box) (Quanta_9));
                MR_hl_field(MR_mktag(1), PI_4, 2) = ((MR_Box) (CallSeqs_10));
                MR_hl_field(MR_mktag(1), PI_4, 3) = ((MR_Box) (Allocs_11));
                MR_hl_field(MR_mktag(1), PI_4, 4) = ((MR_Box) (Words_12));
              }
          }
          else
            PI_4 = PI0_3;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Exits_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI0_3, (MR_Integer) 0))));
        MR_Integer Quanta_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI0_3, (MR_Integer) 1))));
        MR_Integer CallSeqs_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI0_3, (MR_Integer) 2))));
        MR_Integer Allocs_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI0_3, (MR_Integer) 3))));
        MR_Integer Words_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI0_3, (MR_Integer) 4))));

        succeeded = (Allocs_21 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Words_22 == (MR_Integer) 0);
        if (succeeded)
          {
            PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PI_4, 0) = ((MR_Box) (Exits_18));
            MR_hl_field(MR_mktag(3), PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PI_4, 2) = ((MR_Box) (CallSeqs_20));
          }
        else
        {
          succeeded = (Quanta_19 == (MR_Integer) 0);
          if (succeeded)
            {
              PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), PI_4, 0) = ((MR_Box) (Exits_18));
              MR_hl_field(MR_mktag(2), PI_4, 1) = ((MR_Box) (CallSeqs_20));
              MR_hl_field(MR_mktag(2), PI_4, 2) = ((MR_Box) (Allocs_21));
              MR_hl_field(MR_mktag(2), PI_4, 3) = ((MR_Box) (Words_22));
            }
          else
            PI_4 = PI0_3;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Exits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI0_3, (MR_Integer) 0))));
        MR_Integer CallSeqs_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI0_3, (MR_Integer) 1))));
        MR_Integer Allocs_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI0_3, (MR_Integer) 2))));
        MR_Integer Words_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI0_3, (MR_Integer) 3))));

        succeeded = (Allocs_25 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Words_26 == (MR_Integer) 0);
        if (succeeded)
          {
            PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PI_4, 0) = ((MR_Box) (Exits_23));
            MR_hl_field(MR_mktag(3), PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PI_4, 2) = ((MR_Box) (CallSeqs_24));
          }
        else
          PI_4 = PI0_3;
      }
      break;
    case (MR_Integer) 3:
      PI_4 = PI0_3;
      break;
  }
  return PI_4;
}

static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_SumPI_6;

  conv0_SumPI_6 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_SumPI_6));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
measurements__sum_inherit_infos_1_f_0(
  MR_Word Inherits_3)
{
  MR_Word HeadVar__2_2;
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&measurements_scalar_common_2[2]), Inherits_3, ((MR_Box) (&measurements_scalar_common_3[0])));
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_SumPI_6;

  conv0_SumPI_6 = measurements__add_own_to_own_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_SumPI_6));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
measurements__sum_own_infos_1_f_0(
  MR_Word Owns_3)
{
  MR_Word HeadVar__2_2;
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements_scalar_common_2[1]), Owns_3, ((MR_Box) (MR_mkword(MR_mktag(3), &measurements_scalar_common_2[0]))));
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
measurements__add_own_to_own_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Exits_7;
  MR_Integer Fails_8;
  MR_Integer Redos_9;
  MR_Integer Excps_10;
  MR_Integer Quanta_11;
  MR_Integer CallSeqs_12;
  MR_Integer Allocs_13;
  MR_Integer Words_14;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Integer Var_27;
  MR_Integer Var_28;
  MR_Integer Var_29;
  MR_Integer Var_30;

  switch (MR_tag((MR_Word) PI2_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
      }
      break;
    case (MR_Integer) 1:
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI2_5, (MR_Integer) 0))));
        Var_18 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI2_5, (MR_Integer) 0))));
        Var_18 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI2_5, (MR_Integer) 0))));
        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI2_5, (MR_Integer) 1))));
      }
      break;
  }
  switch (MR_tag((MR_Word) PI1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 0))));
        Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 1))));
        Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 2))));
      }
      break;
    case (MR_Integer) 1:
      {
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 0))));
        Var_17 = (MR_Integer) 0;
        Var_19 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 0))));
        Var_17 = (MR_Integer) 0;
        Var_19 = measurements__redos_1_f_0(PI1_4);
      }
      break;
    case (MR_Integer) 3:
      {
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI1_4, (MR_Integer) 0))));
        Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI1_4, (MR_Integer) 1))));
        Var_19 = measurements__redos_1_f_0(PI1_4);
      }
      break;
  }
  Exits_7 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) Var_16);
  Fails_8 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) Var_18);
  Var_20 = measurements__redos_1_f_0(PI2_5);
  Redos_9 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) Var_20);
  Var_21 = measurements__excps_1_f_0(PI1_4);
  Var_22 = measurements__excps_1_f_0(PI2_5);
  Excps_10 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) Var_22);
  Var_23 = measurements__quanta_1_f_0(PI1_4);
  Var_24 = measurements__quanta_1_f_0(PI2_5);
  Quanta_11 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) Var_24);
  Var_25 = measurements__callseqs_1_f_0(PI1_4);
  Var_26 = measurements__callseqs_1_f_0(PI2_5);
  CallSeqs_12 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) Var_26);
  Var_27 = measurements__allocs_1_f_0(PI1_4);
  Var_28 = measurements__allocs_1_f_0(PI2_5);
  Allocs_13 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) Var_28);
  Var_29 = measurements__words_1_f_0(PI1_4);
  Var_30 = measurements__words_1_f_0(PI2_5);
  Words_14 = (MR_Integer) ((MR_Unsigned) Var_29 + (MR_Unsigned) Var_30);
  SumPI_6 = measurements__compress_profile_8_f_0(Exits_7, Fails_8, Redos_9, Excps_10, Quanta_11, CallSeqs_12, Allocs_13, Words_14);
  return SumPI_6;
}

MR_Word MR_CALL 
measurements__add_inherit_to_own_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Exits_7;
  MR_Integer Fails_8;
  MR_Integer Redos_9;
  MR_Integer Excps_10;
  MR_Integer Quanta_11;
  MR_Integer CallSeqs_12;
  MR_Integer Allocs_13;
  MR_Integer Words_14;
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 0))));
  MR_Integer Var_16;
  MR_Integer Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Integer Var_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) PI2_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Exits_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
        Fails_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
        Redos_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 2))));
        Excps_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 3))));
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 4))));
      }
      break;
    case (MR_Integer) 1:
      {
        Exits_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI2_5, (MR_Integer) 0))));
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI2_5, (MR_Integer) 1))));
        Fails_8 = (MR_Integer) 0;
        Redos_9 = (MR_Integer) 0;
        Excps_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        Exits_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI2_5, (MR_Integer) 0))));
        Fails_8 = (MR_Integer) 0;
        Redos_9 = (MR_Integer) 0;
        Excps_10 = (MR_Integer) 0;
        Var_16 = measurements__quanta_1_f_0(PI2_5);
      }
      break;
    case (MR_Integer) 3:
      {
        Exits_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI2_5, (MR_Integer) 0))));
        Fails_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI2_5, (MR_Integer) 1))));
        Redos_9 = (MR_Integer) 0;
        Excps_10 = (MR_Integer) 0;
        Var_16 = measurements__quanta_1_f_0(PI2_5);
      }
      break;
  }
  Quanta_11 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) Var_16);
  Var_18 = measurements__callseqs_1_f_0(PI2_5);
  CallSeqs_12 = (MR_Integer) ((MR_Unsigned) Var_83 + (MR_Unsigned) Var_18);
  Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 2))));
  Var_20 = measurements__allocs_1_f_0(PI2_5);
  Allocs_13 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) Var_20);
  Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 3))));
  Var_22 = measurements__words_1_f_0(PI2_5);
  Words_14 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) Var_22);
  SumPI_6 = measurements__compress_profile_8_f_0(Exits_7, Fails_8, Redos_9, Excps_10, Quanta_11, CallSeqs_12, Allocs_13, Words_14);
  return SumPI_6;
}

MR_Word MR_CALL 
measurements__compress_profile_8_f_0(
  MR_Integer Exits_10,
  MR_Integer Fails_11,
  MR_Integer Redos_12,
  MR_Integer Excps_13,
  MR_Integer Quanta_14,
  MR_Integer CallSeqs_15,
  MR_Integer Allocs_16,
  MR_Integer Words_17)
{
  MR_bool succeeded = (Redos_12 == (MR_Integer) 0);
  MR_Word PI_18;

  if (succeeded)
  {
    succeeded = (Excps_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Quanta_14 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Allocs_16 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Words_17 == (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
    {
      PI_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PI_18, 0) = ((MR_Box) (Exits_10));
      MR_hl_field(MR_mktag(3), PI_18, 1) = ((MR_Box) (Fails_11));
      MR_hl_field(MR_mktag(3), PI_18, 2) = ((MR_Box) (CallSeqs_15));
    }
  else
  {
    succeeded = (Fails_11 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Redos_12 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Excps_13 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      succeeded = (Quanta_14 == (MR_Integer) 0);
      if (succeeded)
        {
          PI_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), PI_18, 0) = ((MR_Box) (Exits_10));
          MR_hl_field(MR_mktag(2), PI_18, 1) = ((MR_Box) (CallSeqs_15));
          MR_hl_field(MR_mktag(2), PI_18, 2) = ((MR_Box) (Allocs_16));
          MR_hl_field(MR_mktag(2), PI_18, 3) = ((MR_Box) (Words_17));
        }
      else
        {
          PI_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PI_18, 0) = ((MR_Box) (Exits_10));
          MR_hl_field(MR_mktag(1), PI_18, 1) = ((MR_Box) (Quanta_14));
          MR_hl_field(MR_mktag(1), PI_18, 2) = ((MR_Box) (CallSeqs_15));
          MR_hl_field(MR_mktag(1), PI_18, 3) = ((MR_Box) (Allocs_16));
          MR_hl_field(MR_mktag(1), PI_18, 4) = ((MR_Box) (Words_17));
        }
    }
    else
      {
        PI_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PI_18, 0) = ((MR_Box) (Exits_10));
        MR_hl_field(MR_mktag(0), PI_18, 1) = ((MR_Box) (Fails_11));
        MR_hl_field(MR_mktag(0), PI_18, 2) = ((MR_Box) (Redos_12));
        MR_hl_field(MR_mktag(0), PI_18, 3) = ((MR_Box) (Excps_13));
        MR_hl_field(MR_mktag(0), PI_18, 4) = ((MR_Box) (Quanta_14));
        MR_hl_field(MR_mktag(0), PI_18, 5) = ((MR_Box) (CallSeqs_15));
        MR_hl_field(MR_mktag(0), PI_18, 6) = ((MR_Box) (Allocs_16));
        MR_hl_field(MR_mktag(0), PI_18, 7) = ((MR_Box) (Words_17));
      }
  }
  return PI_18;
}

MR_Word MR_CALL 
measurements__subtract_inherit_from_inherit_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Quanta_7;
  MR_Integer CallSeqs_8;
  MR_Integer Allocs_9;
  MR_Integer Words_10;
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
  MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 2))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 3))));
  MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 1))));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 2))));
  MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 3))));

  Quanta_7 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) Var_12);
  CallSeqs_8 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Var_22);
  Allocs_9 = (MR_Integer) ((MR_Unsigned) Var_20 - (MR_Unsigned) Var_23);
  Words_10 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Var_24);
  {
    SumPI_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SumPI_6, 0) = ((MR_Box) (Quanta_7));
    MR_hl_field(MR_mktag(0), SumPI_6, 1) = ((MR_Box) (CallSeqs_8));
    MR_hl_field(MR_mktag(0), SumPI_6, 2) = ((MR_Box) (Allocs_9));
    MR_hl_field(MR_mktag(0), SumPI_6, 3) = ((MR_Box) (Words_10));
  }
  return SumPI_6;
}

MR_Word MR_CALL 
measurements__subtract_own_from_inherit_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Quanta_7;
  MR_Integer CallSeqs_8;
  MR_Integer Allocs_9;
  MR_Integer Words_10;
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
  MR_Integer Var_12;
  MR_Integer Var_14;
  MR_Integer Var_16;
  MR_Integer Var_18;
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 2))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) PI1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 4))));
        Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 5))));
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 6))));
        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 7))));
      }
      break;
    case (MR_Integer) 1:
      {
        Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 1))));
        Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 2))));
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 3))));
        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 4))));
      }
      break;
    case (MR_Integer) 2:
      {
        Var_12 = (MR_Integer) 0;
        Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 1))));
        Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 2))));
        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 3))));
      }
      break;
    case (MR_Integer) 3:
      {
        Var_12 = (MR_Integer) 0;
        Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI1_4, (MR_Integer) 2))));
        Var_16 = (MR_Integer) 0;
        Var_18 = (MR_Integer) 0;
      }
      break;
  }
  Quanta_7 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) Var_12);
  CallSeqs_8 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Var_14);
  Allocs_9 = (MR_Integer) ((MR_Unsigned) Var_20 - (MR_Unsigned) Var_16);
  Words_10 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Var_18);
  {
    SumPI_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SumPI_6, 0) = ((MR_Box) (Quanta_7));
    MR_hl_field(MR_mktag(0), SumPI_6, 1) = ((MR_Box) (CallSeqs_8));
    MR_hl_field(MR_mktag(0), SumPI_6, 2) = ((MR_Box) (Allocs_9));
    MR_hl_field(MR_mktag(0), SumPI_6, 3) = ((MR_Box) (Words_10));
  }
  return SumPI_6;
}

MR_Word MR_CALL 
measurements__add_own_to_inherit_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Quanta_7;
  MR_Integer CallSeqs_8;
  MR_Integer Allocs_9;
  MR_Integer Words_10;
  MR_Integer Var_11;
  MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
  MR_Integer Var_13;
  MR_Integer Var_15;
  MR_Integer Var_17;
  MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
  MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 2))));
  MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) PI1_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 4))));
        Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 5))));
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 6))));
        Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 7))));
      }
      break;
    case (MR_Integer) 1:
      {
        Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 1))));
        Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 2))));
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 3))));
        Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PI1_4, (MR_Integer) 4))));
      }
      break;
    case (MR_Integer) 2:
      {
        Var_11 = (MR_Integer) 0;
        Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 1))));
        Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 2))));
        Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PI1_4, (MR_Integer) 3))));
      }
      break;
    case (MR_Integer) 3:
      {
        Var_11 = (MR_Integer) 0;
        Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), PI1_4, (MR_Integer) 2))));
        Var_15 = (MR_Integer) 0;
        Var_17 = (MR_Integer) 0;
      }
      break;
  }
  Quanta_7 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) Var_12);
  CallSeqs_8 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Var_39);
  Allocs_9 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) Var_40);
  Words_10 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) Var_41);
  {
    SumPI_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SumPI_6, 0) = ((MR_Box) (Quanta_7));
    MR_hl_field(MR_mktag(0), SumPI_6, 1) = ((MR_Box) (CallSeqs_8));
    MR_hl_field(MR_mktag(0), SumPI_6, 2) = ((MR_Box) (Allocs_9));
    MR_hl_field(MR_mktag(0), SumPI_6, 3) = ((MR_Box) (Words_10));
  }
  return SumPI_6;
}

MR_Word MR_CALL 
measurements__add_inherit_to_inherit_2_f_0(
  MR_Word PI1_4,
  MR_Word PI2_5)
{
  MR_Word SumPI_6;
  MR_Integer Quanta_7;
  MR_Integer CallSeqs_8;
  MR_Integer Allocs_9;
  MR_Integer Words_10;
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 0))));
  MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 1))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 2))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI1_4, (MR_Integer) 3))));
  MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 1))));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 2))));
  MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PI2_5, (MR_Integer) 3))));

  Quanta_7 = (MR_Integer) ((MR_Unsigned) Var_11 + (MR_Unsigned) Var_12);
  CallSeqs_8 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) Var_22);
  Allocs_9 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) Var_23);
  Words_10 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) Var_24);
  {
    SumPI_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SumPI_6, 0) = ((MR_Box) (Quanta_7));
    MR_hl_field(MR_mktag(0), SumPI_6, 1) = ((MR_Box) (CallSeqs_8));
    MR_hl_field(MR_mktag(0), SumPI_6, 2) = ((MR_Box) (Allocs_9));
    MR_hl_field(MR_mktag(0), SumPI_6, 3) = ((MR_Box) (Words_10));
  }
  return SumPI_6;
}

MR_bool MR_CALL 
measurements__is_zero_inherit_prof_info_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Var_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Var_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

  succeeded = (Var_2 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Var_3 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Var_4 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_5 == (MR_Integer) 0);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
measurements__zero_inherit_prof_info_0_f_0(void)
{
  return (MR_Word) (&measurements_scalar_common_3[0]);
}

MR_Integer MR_CALL 
measurements__inherit_words_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Words_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

  return Words_6;
}

MR_Integer MR_CALL 
measurements__inherit_allocs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Allocs_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

  return Allocs_5;
}

MR_Integer MR_CALL 
measurements__inherit_callseqs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer CallSeqs_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  return CallSeqs_4;
}

MR_Integer MR_CALL 
measurements__inherit_quanta_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Quanta_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

  return Quanta_3;
}

MR_bool MR_CALL 
measurements__is_zero_own_prof_info_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Var_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Var_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
        MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
        MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
        MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));

        succeeded = (Var_2 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_3 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_4 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_5 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Var_6 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (Var_7 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (Var_8 == (MR_Integer) 0);
                    if (succeeded)
                      succeeded = (Var_9 == (MR_Integer) 0);
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
        MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));

        succeeded = (Var_10 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_11 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_12 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_13 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_14 == (MR_Integer) 0);
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));

        succeeded = (Var_15 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_16 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_17 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (Var_18 == (MR_Integer) 0);
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));

        succeeded = (Var_19 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_20 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_21 == (MR_Integer) 0);
        }
      }
      break;
  }
  return succeeded;
}

MR_Word MR_CALL 
measurements__zero_own_prof_info_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(3), &measurements_scalar_common_2[0]));
}

MR_Integer MR_CALL 
measurements__words_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__allocs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__callseqs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer CallSeqs_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CallSeqs_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      break;
    case (MR_Integer) 1:
      CallSeqs_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      CallSeqs_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
      break;
    case (MR_Integer) 3:
      CallSeqs_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
      break;
  }
  return CallSeqs_2;
}

MR_Integer MR_CALL 
measurements__quanta_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__excps_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__redos_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__fails_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
      break;
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
measurements__exits_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Exits_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Exits_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
      Exits_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      Exits_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      Exits_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
      break;
  }
  return Exits_2;
}

MR_Integer MR_CALL 
measurements__calls_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Exits_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Fails_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Integer Redos_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
        MR_Integer Excps_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer Var_23;
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Exits_15 + (MR_Unsigned) Fails_16);

        Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Excps_18);
        HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) Redos_17);
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Exits_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
        MR_Integer Fails_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

        HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Exits_3 + (MR_Unsigned) Fails_4);
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____cost_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____cost_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____cost_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____cs_cost_csq_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____cs_cost_csq_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____goal_cost_csq_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____goal_cost_csq_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____inherit_prof_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____inherit_prof_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____is_active_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____is_active_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____own_prof_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____own_prof_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____parallel_exec_metrics_incomplete_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____parallel_exec_metrics_incomplete_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____parallel_exec_metrics_internal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____parallelism_amount_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____parallelism_amount_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____proc_cost_csq_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____proc_cost_csq_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____recursion_depth_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____recursion_depth_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = measurements____Unify____static_coverage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  measurements____Compare____static_coverage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module measurements.
