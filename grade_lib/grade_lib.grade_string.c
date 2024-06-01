/*
** Automatically generated from `grade_string.m'
** by the Mercury compiler,
** version rotd-2024-06-01
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


// :- module grade_lib.grade_string.
// :- implementation.

/*
INIT mercury__grade_lib__grade_string__init
ENDINIT
*/

#include "grade_lib.grade_string.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "grade_lib.grade_solver.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "grade_lib.grade_structure.mih"
#include "grade_lib.grade_vars.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_string__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_string__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_string__type_ctor_info_grade_component_entry_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_string__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo grade_lib__grade_string__grade_lib__grade_string__field_types_grade_component_entry_0_0[2];

static const MR_DuArgLocn grade_lib__grade_string__grade_lib__grade_string__field_locns_grade_component_entry_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_grade_component_entry_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_grade_component_entry_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_grade_component_entry_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_grade_component_entry_0[1];

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_grade_component_entry_0[1];

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_string__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_string__type_ctor_info_grade_component_entry_0;

static const MR_PseudoTypeInfo grade_lib__grade_string__grade_lib__grade_string__field_types_thread_safe_backend_0_0[1];

static const MR_DuArgLocn grade_lib__grade_string__grade_lib__grade_string__field_locns_thread_safe_backend_0_0[1];

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_0;

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_1;

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_1[1];

static const MR_DuPtagLayout grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_thread_safe_backend_0[2];

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_thread_safe_backend_0[2];

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_thread_safe_backend_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__enum_ordinal_ordered_which_grade_string_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__enum_name_ordered_which_grade_string_0[2];

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_which_grade_string_0[2];

static void MR_CALL 
grade_lib__grade_string____Compare____thread_safe_backend_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____thread_safe_backend_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_string__project_value_only_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ValueId_3);

static void MR_CALL 
grade_lib__grade_string__grade_string_to_succ_soln_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ComponentMap_0_2,
  MR_Word * STATE_VARIABLE_ComponentMap_3,
  MR_Word STATE_VARIABLE_RevErrorMsgs_0_4,
  MR_Word * STATE_VARIABLE_RevErrorMsgs_5);

static void MR_CALL 
grade_lib__grade_string__apply_setting_6_p_0(
  MR_String ComponentStr_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ComponentMap_0_17,
  MR_Word * STATE_VARIABLE_ComponentMap_18,
  MR_Word STATE_VARIABLE_RevErrorMsgs_0_19,
  MR_Word * STATE_VARIABLE_RevErrorMsgs_20);

static MR_String MR_CALL 
grade_lib__grade_string__deep_prof_version_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
grade_lib__grade_string__binary_compat_version_to_strs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
grade_lib__grade_string__merc_float_to_strs_2_f_0(
  MR_Word WhichGradeString_4,
  MR_Word MercFloat_5);

static MR_Word MR_CALL 
grade_lib__grade_string__low_tag_bits_use_to_strs_2_f_0(
  MR_Word WhichGradeString_4,
  MR_Word LowTagBits_5);

static MR_Word MR_CALL 
grade_lib__grade_string__merc_file_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
grade_lib__grade_string__mprof_to_str_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
grade_lib__grade_string__target_debug_to_strs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
grade_lib__grade_string__ssdebug_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
grade_lib__grade_string__llds_debug_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
grade_lib__grade_string__thread_safe_to_strs_2_f_0(
  MR_Word Backend_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
grade_lib__grade_string__grade_var_trail_to_strs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
grade_lib__grade_string__gc_to_strs_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
grade_lib__grade_string__thread_safe_c_gc_to_gc_1_f_0(
  MR_Word ThreadSafeGc_3);

static MR_Word MR_CALL 
grade_lib__grade_string__c_gc_to_gc_1_f_0(
  MR_Word CGc_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____thread_safe_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_string____Compare____thread_safe_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____which_grade_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_string____Compare____which_grade_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_string_scalar_common_1[3][3];

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_2[118][2];

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_7[1][9];

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_8[1][5];


struct grade_lib__grade_string__vector_common_type_3_0_s {
  const MR_Word grade_lib__grade_string__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_3_0_s grade_lib__grade_string_vector_common_3[5];

struct grade_lib__grade_string__vector_common_type_4_0_s {
  const MR_String grade_lib__grade_string__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_4_0_s grade_lib__grade_string_vector_common_4[10];

struct grade_lib__grade_string__vector_common_type_5_0_s {
  const MR_Word grade_lib__grade_string__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_5_0_s grade_lib__grade_string_vector_common_5[4];

struct grade_lib__grade_string__vector_common_type_6_0_s {
  const MR_Word grade_lib__grade_string__vector_common_type_6_0__vct_6_f_0;
  const MR_Word grade_lib__grade_string__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_6_0_s grade_lib__grade_string_vector_common_6[39];



static /* final */ const MR_Box grade_lib__grade_string_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_8[0])),
    ((MR_Box) (grade_lib__grade_string__grade_string_to_succ_soln_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_2[118][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "tsc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "tsw")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "rbmm")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "rbmmp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "rbmmd")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "rbmmdp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "mmos")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "dmmos")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "mmsc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "dmmsc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "threadscope")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "exts")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "stseg")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "hlc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "pregen")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "tags2")),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "agc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "gc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "gcd")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "tr")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "ssdebug")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "c_debug")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "file")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "notags")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "tags2")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "tags3")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "ubf")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "spf")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 44))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row  32 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row  35 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[34])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 22))
  },
  /* row  38 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[37])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) ((MR_Integer) 65))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row  42 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[41])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 18))
  },
  /* row  46 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[45])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Integer) 60))
  },
  /* row  49 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[33])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Integer) 61))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 34))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 36))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 29))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 21))
  },
  /* row  56 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[55])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 41))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 42))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 45))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 17))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 20))
  },
  /* row  63 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[62])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Integer) 49))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 46))
  },
  /* row  67 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[66])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 53))
  },
  /* row  69 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[68])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[67])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Integer) 50))
  },
  /* row  71 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[70])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[69])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 33))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 35))
  },
  /* row  74 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[46])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 38))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) ((MR_Integer) 73))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) ((MR_Integer) 76))
  },
  /* row  78 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[77])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row  80 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[79])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[78])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 52))
  },
  /* row  82 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[81])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[67])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Integer) 51))
  },
  /* row  84 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[83])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[83])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[69])))
  },
  /* row  86 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[70])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[82])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 47))
  },
  /* row  88 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[81])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[70])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Integer) 48))
  },
  /* row  91 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[90])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Integer) 67))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Integer) 70))
  },
  /* row  96 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[95])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Integer) 68))
  },
  /* row  98 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[97])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[96])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Integer) 69))
  },
  /* row 100 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[99])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[96])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Integer) 71))
  },
  /* row 102 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[101])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50])))
  },
  /* row 103 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[99])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[97])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[102])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 19))
  },
  /* row 106 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[105])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) ((MR_Integer) 75))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Integer) 63))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 28))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 55))
  },
  /* row 112 */
  {
    ((MR_Box) (&grade_lib__grade_string_scalar_common_2[75])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) 31))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 57))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 58))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "ssdebug12")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "v18")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_string__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&grade_lib__grade_string__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_string__type_ctor_info_grade_component_entry_0)),
    ((MR_Box) (&grade_lib__grade_string__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_string__type_ctor_info_grade_component_entry_0)),
    ((MR_Box) (&grade_lib__grade_string__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_string__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_string_scalar_common_8[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
};


static /* final */ const struct grade_lib__grade_string__vector_common_type_3_0_s grade_lib__grade_string_vector_common_3[5] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 4 },
  /* row   4 */   { (MR_Integer) 5 },
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_4_0_s grade_lib__grade_string_vector_common_4[10] = {
  /* row   0 */   { (MR_String) "none" },
  /* row   1 */   { (MR_String) "reg" },
  /* row   2 */   { (MR_String) "jump" },
  /* row   3 */   { (MR_String) "fast" },
  /* row   4 */   { (MR_String) "asm_jump" },
  /* row   5 */   { (MR_String) "asm_fast" },
  /* row   6 */   { (MR_String) "hlc" },
  /* row   7 */   { (MR_String) "none" },
  /* row   8 */   { (MR_String) "reg" },
  /* row   9 */   { (MR_String) "asm_fast" },
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_5_0_s grade_lib__grade_string_vector_common_5[4] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[9])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[10])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[7])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[8])) },
};

static /* final */ const struct grade_lib__grade_string__vector_common_type_6_0_s grade_lib__grade_string_vector_common_6[39] = {
  /* row   0 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[30]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32]))
  },
  /* row   1 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[36]))
  },
  /* row   2 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[39]))
  },
  /* row   3 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[40]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[43]))
  },
  /* row   4 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[44]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[47]))
  },
  /* row   5 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[48]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row   6 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[51]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row   7 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[52]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row   8 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[53]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row   9 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[54]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row  10 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[57]))
  },
  /* row  11 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[58]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32]))
  },
  /* row  12 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[59]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32]))
  },
  /* row  13 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[60]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32]))
  },
  /* row  14 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[31]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[47]))
  },
  /* row  15 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[61]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[47]))
  },
  /* row  16 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[64]))
  },
  /* row  17 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[65]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[71]))
  },
  /* row  18 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[72]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row  19 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[73]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row  20 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[74]))
  },
  /* row  21 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[75]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row  22 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[76]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[80]))
  },
  /* row  23 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[65]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[84]))
  },
  /* row  24 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[65]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[85]))
  },
  /* row  25 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[65]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[86]))
  },
  /* row  26 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[87]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[93]))
  },
  /* row  27 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[94]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[98]))
  },
  /* row  28 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[94]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[100]))
  },
  /* row  29 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[94]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[103]))
  },
  /* row  30 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[94]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[104]))
  },
  /* row  31 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[33]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[107]))
  },
  /* row  32 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[108]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[32]))
  },
  /* row  33 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[109]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row  34 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[110]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[50]))
  },
  /* row  35 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[111]),
    (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[112]))
  },
  /* row  36 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[113]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row  37 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[114]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row  38 */
  {
    (MR_Word) (&grade_lib__grade_string_scalar_common_2[115]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
};




static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_string__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_string__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_string__type_ctor_info_grade_component_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_string__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo grade_lib__grade_string__grade_lib__grade_string__field_types_grade_component_entry_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn grade_lib__grade_string__grade_lib__grade_string__field_locns_grade_component_entry_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_grade_component_entry_0_0 = {
  (MR_String) "grade_component_entry",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_string__grade_lib__grade_string__field_types_grade_component_entry_0_0,
  NULL,
  grade_lib__grade_string__grade_lib__grade_string__field_locns_grade_component_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_grade_component_entry_0_0[1] = { &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_grade_component_entry_0_0 };

static const MR_DuPtagLayout grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_grade_component_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_grade_component_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_grade_component_entry_0[1] = { &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_grade_component_entry_0_0 };

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_grade_component_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_string____Unify____grade_component_entry_0_0_10001)),
  ((MR_Box) (grade_lib__grade_string____Compare____grade_component_entry_0_0_10001)),
  (MR_String) "grade_lib.grade_string",
  (MR_String) "grade_component_entry",
  { grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_grade_component_entry_0 },
  { grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_grade_component_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_string__grade_lib__grade_string__functor_number_map_grade_component_entry_0,

};

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_string__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_string__type_ctor_info_grade_component_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_TypeInfo) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0)
  }
};

const MR_TypeCtorInfo_Struct grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (grade_lib__grade_string____Unify____grade_component_map_0_0_10001)),
  ((MR_Box) (grade_lib__grade_string____Compare____grade_component_map_0_0_10001)),
  (MR_String) "grade_lib.grade_string",
  (MR_String) "grade_component_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&grade_lib__grade_string__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_string__type_ctor_info_grade_component_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo grade_lib__grade_string__grade_lib__grade_string__field_types_thread_safe_backend_0_0[1] = { (MR_PseudoTypeInfo) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_which_grade_string_0) };

static const MR_DuArgLocn grade_lib__grade_string__grade_lib__grade_string__field_locns_thread_safe_backend_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_0 = {
  (MR_String) "tsb_llds",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_string__grade_lib__grade_string__field_types_thread_safe_backend_0_0,
  NULL,
  grade_lib__grade_string__grade_lib__grade_string__field_locns_thread_safe_backend_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_1 = {
  (MR_String) "tsb_mlds",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_0[1] = { &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_1 };

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_1[1] = { &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_0 };

static const MR_DuPtagLayout grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_thread_safe_backend_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_string__grade_lib__grade_string__du_stag_ordered_thread_safe_backend_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_thread_safe_backend_0[2] = {
  &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_0,
  &grade_lib__grade_string__grade_lib__grade_string__du_functor_desc_thread_safe_backend_0_1
};

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_thread_safe_backend_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_thread_safe_backend_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_string____Unify____thread_safe_backend_0_0_10001)),
  ((MR_Box) (grade_lib__grade_string____Compare____thread_safe_backend_0_0_10001)),
  (MR_String) "grade_lib.grade_string",
  (MR_String) "thread_safe_backend",
  { grade_lib__grade_string__grade_lib__grade_string__du_name_ordered_thread_safe_backend_0 },
  { grade_lib__grade_string__grade_lib__grade_string__du_ptag_ordered_thread_safe_backend_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_string__grade_lib__grade_string__functor_number_map_thread_safe_backend_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_0 = {
  (MR_String) "grade_string_user",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_1 = {
  (MR_String) "grade_string_link_check",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__enum_ordinal_ordered_which_grade_string_0[2] = {
  &grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_0,
  &grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_string__grade_lib__grade_string__enum_name_ordered_which_grade_string_0[2] = {
  &grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_1,
  &grade_lib__grade_string__grade_lib__grade_string__enum_functor_desc_which_grade_string_0_0
};

static const MR_Integer grade_lib__grade_string__grade_lib__grade_string__functor_number_map_which_grade_string_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_which_grade_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_string____Unify____which_grade_string_0_0_10001)),
  ((MR_Box) (grade_lib__grade_string____Compare____which_grade_string_0_0_10001)),
  (MR_String) "grade_lib.grade_string",
  (MR_String) "which_grade_string",
  { grade_lib__grade_string__grade_lib__grade_string__enum_name_ordered_which_grade_string_0 },
  { grade_lib__grade_string__grade_lib__grade_string__enum_ordinal_ordered_which_grade_string_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_string__grade_lib__grade_string__functor_number_map_which_grade_string_0,

};

void MR_CALL 
grade_lib__grade_string____Compare____which_grade_string_0_0(
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
grade_lib__grade_string____Unify____which_grade_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____thread_safe_backend_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____thread_safe_backend_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_string_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_string_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_entry_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_entry_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string__project_value_only_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ValueId_3)
{
  *ValueId_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 127);
}

static void MR_CALL 
grade_lib__grade_string__grade_string_to_succ_soln_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ValueId_3;

  grade_lib__grade_string__project_value_only_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ValueId_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_ValueId_3));
}

MR_Word MR_CALL 
grade_lib__grade_string__grade_string_to_succ_soln_1_f_0(
  MR_String GradeStr_3)
{
  MR_Word MaybeSuccMap_4;
  MR_Word ComponentStrs_5;
  MR_Word ComponentsMap_6;
  MR_Word RevErrorMsgs_7;
  MR_Word ErrorMsgs_8;
  MR_Word Var_13;

  ComponentStrs_5 = mercury__string__split_at_char_2_f_0((MR_Char) 46, GradeStr_3);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0));
  grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0(ComponentStrs_5, Var_13, &ComponentsMap_6, (MR_Word) ((MR_Unsigned) 0U), &RevErrorMsgs_7);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevErrorMsgs_7, &ErrorMsgs_8);
  if ((ErrorMsgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SuccMap_9;

    mercury__map__map_values_only_3_p_0((MR_Word) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_string_scalar_common_1[2]), ComponentsMap_6, &SuccMap_9);
    {
      MaybeSuccMap_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeSuccMap_4, 0) = ((MR_Box) (SuccMap_9));
    }
  }
  else
  {
    MR_String HeadErrorMsg_10 = ((MR_String) ((MR_hl_field(1, ErrorMsgs_8, (MR_Integer) 0))));
    MR_Word TailErrorMsgs_11 = ((MR_Word) ((MR_hl_field(1, ErrorMsgs_8, (MR_Integer) 1))));

    {
      MaybeSuccMap_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeSuccMap_4, 0) = ((MR_Box) (HeadErrorMsg_10));
      MR_hl_field(1, MaybeSuccMap_4, 1) = ((MR_Box) (TailErrorMsgs_11));
    }
  }
  return MaybeSuccMap_4;
}

static void MR_CALL 
grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ComponentMap_18;
  MR_Word conv0_STATE_VARIABLE_RevErrorMsgs_20;

  grade_lib__grade_string__apply_setting_6_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ComponentMap_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RevErrorMsgs_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ComponentMap_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RevErrorMsgs_20));
}

static void MR_CALL 
grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ComponentMap_0_2,
  MR_Word * STATE_VARIABLE_ComponentMap_3,
  MR_Word STATE_VARIABLE_RevErrorMsgs_0_4,
  MR_Word * STATE_VARIABLE_RevErrorMsgs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevErrorMsgs_5 = STATE_VARIABLE_RevErrorMsgs_0_4;
      *STATE_VARIABLE_ComponentMap_3 = STATE_VARIABLE_ComponentMap_0_2;
    }
    else
    {
      MR_String ComponentStr_12 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ComponentStrs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ComponentMap_26_26;
      MR_Word STATE_VARIABLE_RevErrorMsgs_27_27;
      MR_Word HeadSetting_16;
      MR_Word TailSettings_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ComponentMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_RevErrorMsgs_0_4;

      {
        MR_Integer case_num_0 = (MR_Integer) -1;

        switch (MR_nth_code_unit(ComponentStr_12, 0)) {
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 103:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "agc"))
                  case_num_0 = (MR_Integer) 0;
                break;
              case (MR_Integer) 115:
                if (MR_offset_strn_eq(2, 2, ComponentStr_12, (MR_String) "asm_"))
                  switch (MR_nth_code_unit(ComponentStr_12, 4)) {
                    case (MR_Integer) 102:
                      if (MR_offset_streq(5, ComponentStr_12, (MR_String) "asm_fast"))
                        case_num_0 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 106:
                      if (MR_offset_streq(5, ComponentStr_12, (MR_String) "asm_jump"))
                        case_num_0 = (MR_Integer) 2;
                      break;
                  }
                break;
            }
            break;
          case (MR_Integer) 99:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 95:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "c_debug"))
                  case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "csharp"))
                  case_num_0 = (MR_Integer) 4;
                break;
            }
            break;
          case (MR_Integer) 100:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 101:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 98:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "debug"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "decldebug"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                }
                break;
              case (MR_Integer) 109:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 109:
                    switch (MR_nth_code_unit(ComponentStr_12, 3)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 7;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(4, ComponentStr_12, (MR_String) "dmmos"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(4, ComponentStr_12, (MR_String) "dmmsc"))
                          case_num_0 = (MR_Integer) 7;
                        break;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(1, ComponentStr_12, (MR_String) "exts"))
              case_num_0 = (MR_Integer) 9;
            break;
          case (MR_Integer) 102:
            if (MR_offset_streq(1, ComponentStr_12, (MR_String) "fast"))
              case_num_0 = (MR_Integer) 10;
            break;
          case (MR_Integer) 103:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 99:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 100:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "gcd"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 104:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 103:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "hgc"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "hlc"))
                  case_num_0 = (MR_Integer) 14;
                break;
            }
            break;
          case (MR_Integer) 106:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "java"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "jump"))
                  case_num_0 = (MR_Integer) 16;
                break;
            }
            break;
          case (MR_Integer) 109:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "memprof"))
                  case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 109:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "mmos"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "mmsc"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 110:
            if (MR_offset_streq(1, ComponentStr_12, (MR_String) "none"))
              case_num_0 = (MR_Integer) 20;
            break;
          case (MR_Integer) 112:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "par"))
                  case_num_0 = (MR_Integer) 21;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "pregen"))
                      case_num_0 = (MR_Integer) 22;
                    break;
                  case (MR_Integer) 111:
                    switch (MR_nth_code_unit(ComponentStr_12, 3)) {
                      case (MR_Integer) 102:
                        switch (MR_nth_code_unit(ComponentStr_12, 4)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 23;
                            break;
                          case (MR_Integer) 97:
                            if (MR_offset_streq(5, ComponentStr_12, (MR_String) "profall"))
                              case_num_0 = (MR_Integer) 24;
                            break;
                          case (MR_Integer) 99:
                            if (MR_offset_streq(5, ComponentStr_12, (MR_String) "profcalls"))
                              case_num_0 = (MR_Integer) 25;
                            break;
                          case (MR_Integer) 100:
                            if (MR_offset_streq(5, ComponentStr_12, (MR_String) "profdeep"))
                              case_num_0 = (MR_Integer) 26;
                            break;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 98:
                if (MR_offset_strn_eq(2, 2, ComponentStr_12, (MR_String) "rbmm"))
                  switch (MR_nth_code_unit(ComponentStr_12, 4)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 27;
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(ComponentStr_12, 5)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 28;
                          break;
                        case (MR_Integer) 112:
                          if (MR_offset_streq(6, ComponentStr_12, (MR_String) "rbmmdp"))
                            case_num_0 = (MR_Integer) 29;
                          break;
                      }
                      break;
                    case (MR_Integer) 112:
                      if (MR_offset_streq(5, ComponentStr_12, (MR_String) "rbmmp"))
                        case_num_0 = (MR_Integer) 30;
                      break;
                  }
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "reg"))
                  case_num_0 = (MR_Integer) 31;
                break;
            }
            break;
          case (MR_Integer) 115:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 112:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "spf"))
                  case_num_0 = (MR_Integer) 32;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "ssdebug"))
                  case_num_0 = (MR_Integer) 33;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "stseg"))
                  case_num_0 = (MR_Integer) 34;
                break;
            }
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(ComponentStr_12, 1)) {
              case (MR_Integer) 104:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "threadscope"))
                  case_num_0 = (MR_Integer) 35;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(2, ComponentStr_12, (MR_String) "tr"))
                  case_num_0 = (MR_Integer) 36;
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(ComponentStr_12, 2)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "tsc"))
                      case_num_0 = (MR_Integer) 37;
                    break;
                  case (MR_Integer) 119:
                    if (MR_offset_streq(3, ComponentStr_12, (MR_String) "tsw"))
                      case_num_0 = (MR_Integer) 38;
                    break;
                }
                break;
            }
            break;
        }
        if ((case_num_0 < (MR_Integer) 0))
          succeeded = MR_FALSE;
        else
        {
          // we found a match; look up the results
          ;
          HeadSetting_16 = ((&grade_lib__grade_string_vector_common_6[0 + case_num_0]))->grade_lib__grade_string__vector_common_type_6_0__vct_6_f_0;
          TailSettings_17 = ((&grade_lib__grade_string_vector_common_6[0 + case_num_0]))->grade_lib__grade_string__vector_common_type_6_0__vct_6_f_1;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_ComponentMap_23_23;
        MR_Word STATE_VARIABLE_RevErrorMsgs_24_24;
        MR_Word Var_25;
        MR_Box conv3_STATE_VARIABLE_ComponentMap_26_26;
        MR_Box conv2_STATE_VARIABLE_RevErrorMsgs_27_27;

        grade_lib__grade_string__apply_setting_6_p_0(ComponentStr_12, HeadSetting_16, STATE_VARIABLE_ComponentMap_0_2, &STATE_VARIABLE_ComponentMap_23_23, STATE_VARIABLE_RevErrorMsgs_0_4, &STATE_VARIABLE_RevErrorMsgs_24_24);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&grade_lib__grade_string_scalar_common_7[0]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (grade_lib__grade_string__accumulate_grade_component_map_loop_5_p_0_1));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (ComponentStr_12));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&grade_lib__grade_string_scalar_common_1[0]), (MR_Word) (&grade_lib__grade_string_scalar_common_1[1]), (MR_Word) (&grade_lib__grade_string_scalar_common_2[0]), Var_25, TailSettings_17, ((MR_Box) (STATE_VARIABLE_ComponentMap_23_23)), &conv3_STATE_VARIABLE_ComponentMap_26_26, ((MR_Box) (STATE_VARIABLE_RevErrorMsgs_24_24)), &conv2_STATE_VARIABLE_RevErrorMsgs_27_27);
        STATE_VARIABLE_ComponentMap_26_26 = ((MR_Word) (conv3_STATE_VARIABLE_ComponentMap_26_26));
        STATE_VARIABLE_RevErrorMsgs_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_RevErrorMsgs_27_27));
      }
      else
      {
        MR_String ErrorMsg_18;

        ErrorMsg_18 = mercury__string__f_43_43_2_f_0((MR_String) "unknown grade component ", ComponentStr_12);
        {
          STATE_VARIABLE_RevErrorMsgs_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevErrorMsgs_27_27, 0) = ((MR_Box) (ErrorMsg_18));
          MR_hl_field(1, STATE_VARIABLE_RevErrorMsgs_27_27, 1) = ((MR_Box) (STATE_VARIABLE_RevErrorMsgs_0_4));
        }
        STATE_VARIABLE_ComponentMap_26_26 = STATE_VARIABLE_ComponentMap_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentStrs_13;
      next_value_of_STATE_VARIABLE_ComponentMap_0_2 = STATE_VARIABLE_ComponentMap_26_26;
      next_value_of_STATE_VARIABLE_RevErrorMsgs_0_4 = STATE_VARIABLE_RevErrorMsgs_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ComponentMap_0_2 = next_value_of_STATE_VARIABLE_ComponentMap_0_2;
      STATE_VARIABLE_RevErrorMsgs_0_4 = next_value_of_STATE_VARIABLE_RevErrorMsgs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
grade_lib__grade_string__apply_setting_6_p_0(
  MR_String ComponentStr_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ComponentMap_0_17,
  MR_Word * STATE_VARIABLE_ComponentMap_18,
  MR_Word STATE_VARIABLE_RevErrorMsgs_0_19,
  MR_Word * STATE_VARIABLE_RevErrorMsgs_20)
{
  MR_bool succeeded;
  MR_Word VarId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ValueId_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word OldEntry_12;
  MR_Box conv0_OldEntry_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0), STATE_VARIABLE_ComponentMap_0_17, ((MR_Box) (VarId_8)), &conv0_OldEntry_12);
  if (succeeded)
  {
    OldEntry_12 = ((MR_Word) (conv0_OldEntry_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldValueId_13 = ((MR_Unsigned) ((MR_hl_field(0, OldEntry_12, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_String OldComponentStr_14 = ((MR_String) ((MR_hl_field(0, OldEntry_12, (MR_Integer) 1))));

    succeeded = (OldValueId_13 == ValueId_9);
    if (succeeded)
      *STATE_VARIABLE_RevErrorMsgs_20 = STATE_VARIABLE_RevErrorMsgs_0_19;
    else
    {
      MR_String ErrorMsg_15;
      MR_String Var_32;
      MR_String Var_34;
      MR_String Var_35;

      Var_32 = mercury__string__f_43_43_2_f_0(ComponentStr_7, (MR_String) " are incompatible");
      Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " and ", Var_32);
      Var_35 = mercury__string__f_43_43_2_f_0(OldComponentStr_14, Var_34);
      ErrorMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "grade components ", Var_35);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevErrorMsgs_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorMsg_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrorMsgs_0_19));
      }
    }
    *STATE_VARIABLE_ComponentMap_18 = STATE_VARIABLE_ComponentMap_0_17;
  }
  else
  {
    MR_Word Entry_16;

    {
      Entry_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_16, 0) = (MR_Box) ((MR_Unsigned) (ValueId_9));
      MR_hl_field(0, Entry_16, 1) = ((MR_Box) (ComponentStr_7));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0), ((MR_Box) (VarId_8)), ((MR_Box) (Entry_16)), STATE_VARIABLE_ComponentMap_0_17, STATE_VARIABLE_ComponentMap_18);
    *STATE_VARIABLE_RevErrorMsgs_20 = STATE_VARIABLE_RevErrorMsgs_0_19;
  }
}

MR_String MR_CALL 
grade_lib__grade_string__grade_structure_to_grade_string_2_f_0(
  MR_Word WhichGradeString_4,
  MR_Word GradeStructure_5)
{
  MR_String GradeStr_6;

  switch (MR_tag((MR_Word) GradeStructure_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GradeComponents_10;
        MR_Word LldsGrade_11 = (MR_Word) ((MR_Word) (GradeStructure_5));
        MR_Word GccConf_12 = ((((MR_Unsigned) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 0))) >> 2)) & (MR_Integer) 7);
        MR_Word StackLen_13 = ((MR_Unsigned) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word LLDSTSMinModel_14 = ((MR_Word) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 1))));
        MR_Word MercFile_15 = ((((MR_Unsigned) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
        MR_Word LowTagBits_16 = ((((MR_Unsigned) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 3);
        MR_Word MercFloat_17 = ((MR_Unsigned) ((MR_hl_field(0, LldsGrade_11, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word BinaryCompatStrs_18;
        MR_Word ThreadSafeStrs_25;
        MR_Word MinimalModelStrs_26;
        MR_Word GcStrs_28;
        MR_Word TrailStrs_29;
        MR_Word LLDSPerfProfStrs_30;
        MR_Word TermSizeProfStrs_33;
        MR_Word DebugStrs_34;
        MR_Word RBMMStrs_35;
        MR_Word TScopeProfStrs_38;
        MR_Word StackLenStrs_43;
        MR_Word LowTagBitStrs_44;
        MR_Word MercFloatStrs_45;
        MR_Word MercFileStrs_46;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_String BaseStr_140;

        BinaryCompatStrs_18 = grade_lib__grade_string__binary_compat_version_to_strs_1_f_0(WhichGradeString_4);
        BaseStr_140 = ((&grade_lib__grade_string_vector_common_4[0 + GccConf_12]))->grade_lib__grade_string__vector_common_type_4_0__vct_4_f_0;
        switch (MR_tag((MR_Word) LLDSTSMinModel_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CGc_19 = ((((MR_Unsigned) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 7);
              MR_Word Trail_20 = ((MR_Unsigned) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word LLDSPerfProf_21 = ((MR_Word) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 1))));
              MR_Word TermSizeProf_22 = ((((MR_Unsigned) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 2))) >> 2)) & (MR_Integer) 3);
              MR_Word Debug_23 = ((MR_Unsigned) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word LLDSRBMM_24 = ((MR_Word) ((MR_hl_field(0, LLDSTSMinModel_14, (MR_Integer) 3))));
              MR_Word Gc_27;

              ThreadSafeStrs_25 = (MR_Word) ((MR_Unsigned) 0U);
              MinimalModelStrs_26 = (MR_Word) ((MR_Unsigned) 0U);
              Gc_27 = grade_lib__grade_string__c_gc_to_gc_1_f_0(CGc_19);
              GcStrs_28 = grade_lib__grade_string__gc_to_strs_1_f_0(Gc_27);
              TrailStrs_29 = grade_lib__grade_string__grade_var_trail_to_strs_1_f_0(Trail_20);
              switch (MR_tag((MR_Word) LLDSPerfProf_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(LLDSPerfProf_21)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      LLDSPerfProfStrs_30 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Var_64;
                        MR_String Var_66;

                        Var_66 = grade_lib__grade_string__deep_prof_version_to_string_1_f_0(WhichGradeString_4);
                        Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "profdeep", Var_66);
                        {
                          LLDSPerfProfStrs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, LLDSPerfProfStrs_30, 0) = ((MR_Box) (Var_64));
                          MR_hl_field(1, LLDSPerfProfStrs_30, 1) = ((MR_Box) (ThreadSafeStrs_25));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MprofTime_31 = ((((MR_Unsigned) ((MR_hl_field(1, LLDSPerfProf_21, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                    MR_Word MprofMemory_32 = ((MR_Unsigned) ((MR_hl_field(1, LLDSPerfProf_21, (MR_Integer) 0))) & (MR_Integer) 1);
                    MR_String Var_68;

                    Var_68 = grade_lib__grade_string__mprof_to_str_2_f_0(MprofTime_31, MprofMemory_32);
                    {
                      LLDSPerfProfStrs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, LLDSPerfProfStrs_30, 0) = ((MR_Box) (Var_68));
                      MR_hl_field(1, LLDSPerfProfStrs_30, 1) = ((MR_Box) (ThreadSafeStrs_25));
                    }
                  }
                  break;
              }
              switch (TermSizeProf_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  TermSizeProfStrs_33 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[1]));
                  break;
                case (MR_Integer) 0:
                  TermSizeProfStrs_33 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 2:
                  TermSizeProfStrs_33 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[2]));
                  break;
              }
              DebugStrs_34 = grade_lib__grade_string__llds_debug_to_strs_2_f_0(WhichGradeString_4, Debug_23);
              if ((LLDSRBMM_24 == (MR_Word) ((MR_Unsigned) 0U)))
                RBMMStrs_35 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word RBMMDebug_36 = ((((MR_Unsigned) ((MR_hl_field(1, LLDSRBMM_24, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                MR_Word RBMMProf_37 = ((MR_Unsigned) ((MR_hl_field(1, LLDSRBMM_24, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (RBMMDebug_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (RBMMProf_37) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        RBMMStrs_35 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[3]));
                        break;
                      case (MR_Integer) 1:
                        RBMMStrs_35 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[4]));
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    switch (RBMMProf_37) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        RBMMStrs_35 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[5]));
                        break;
                      case (MR_Integer) 1:
                        RBMMStrs_35 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[6]));
                        break;
                    }
                    break;
                }
              }
              TScopeProfStrs_38 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MinModelKind_39 = ((((MR_Unsigned) ((MR_hl_field(1, LLDSTSMinModel_14, (MR_Integer) 0))) >> 3)) & (MR_Integer) 3);
              MR_Word LLDSMMGc_40 = ((((MR_Unsigned) ((MR_hl_field(1, LLDSTSMinModel_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              MR_Word Debug_136 = ((MR_Unsigned) ((MR_hl_field(1, LLDSTSMinModel_14, (MR_Integer) 0))) & (MR_Integer) 3);

              ThreadSafeStrs_25 = (MR_Word) ((MR_Unsigned) 0U);
              MinimalModelStrs_26 = ((&grade_lib__grade_string_vector_common_5[0 + MinModelKind_39]))->grade_lib__grade_string__vector_common_type_5_0__vct_5_f_0;
              switch (LLDSMMGc_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  GcStrs_28 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[18]));
                  break;
                case (MR_Integer) 1:
                  GcStrs_28 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[19]));
                  break;
              }
              TrailStrs_29 = (MR_Word) ((MR_Unsigned) 0U);
              LLDSPerfProfStrs_30 = (MR_Word) ((MR_Unsigned) 0U);
              TermSizeProfStrs_33 = (MR_Word) ((MR_Unsigned) 0U);
              DebugStrs_34 = grade_lib__grade_string__llds_debug_to_strs_2_f_0(WhichGradeString_4, Debug_136);
              TScopeProfStrs_38 = (MR_Word) ((MR_Unsigned) 0U);
              RBMMStrs_35 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ThreadSafeGc_41 = ((((MR_Unsigned) ((MR_hl_field(2, LLDSTSMinModel_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
              MR_Word TScopeProf_42 = ((MR_Unsigned) ((MR_hl_field(2, LLDSTSMinModel_14, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Trail_138 = ((((MR_Unsigned) ((MR_hl_field(2, LLDSTSMinModel_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              MR_Word Gc_139;
              MR_String Str_209;

              switch (WhichGradeString_4) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Str_209 = (MR_String) "par1";
                  break;
                case (MR_Integer) 0:
                  Str_209 = (MR_String) "par";
                  break;
              }
              {
                ThreadSafeStrs_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ThreadSafeStrs_25, 0) = ((MR_Box) (Str_209));
                MR_hl_field(1, ThreadSafeStrs_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              MinimalModelStrs_26 = (MR_Word) ((MR_Unsigned) 0U);
              Gc_139 = grade_lib__grade_string__thread_safe_c_gc_to_gc_1_f_0(ThreadSafeGc_41);
              GcStrs_28 = grade_lib__grade_string__gc_to_strs_1_f_0(Gc_139);
              TrailStrs_29 = grade_lib__grade_string__grade_var_trail_to_strs_1_f_0(Trail_138);
              LLDSPerfProfStrs_30 = (MR_Word) ((MR_Unsigned) 0U);
              TermSizeProfStrs_33 = (MR_Word) ((MR_Unsigned) 0U);
              DebugStrs_34 = (MR_Word) ((MR_Unsigned) 0U);
              RBMMStrs_35 = (MR_Word) ((MR_Unsigned) 0U);
              switch (TScopeProf_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  TScopeProfStrs_38 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  TScopeProfStrs_38 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[11]));
                  break;
              }
            }
            break;
        }
        switch (StackLen_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            StackLenStrs_43 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[12]));
            break;
          case (MR_Integer) 1:
            StackLenStrs_43 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[13]));
            break;
          case (MR_Integer) 0:
            StackLenStrs_43 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        LowTagBitStrs_44 = grade_lib__grade_string__low_tag_bits_use_to_strs_2_f_0(WhichGradeString_4, LowTagBits_16);
        MercFloatStrs_45 = grade_lib__grade_string__merc_float_to_strs_2_f_0(WhichGradeString_4, MercFloat_17);
        MercFileStrs_46 = grade_lib__grade_string__merc_file_to_strs_2_f_0(WhichGradeString_4, MercFile_15);
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (BaseStr_140));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RBMMStrs_35, TScopeProfStrs_38);
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StackLenStrs_43, Var_112);
        Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DebugStrs_34, Var_111);
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercFileStrs_46, Var_110);
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MinimalModelStrs_26, Var_109);
        Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TrailStrs_29, Var_108);
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TermSizeProfStrs_33, Var_107);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LLDSPerfProfStrs_30, Var_106);
        Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GcStrs_28, Var_105);
        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThreadSafeStrs_25, Var_104);
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercFloatStrs_45, Var_103);
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LowTagBitStrs_44, Var_102);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_99, Var_101);
        GradeComponents_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BinaryCompatStrs_18, Var_98);
        switch (WhichGradeString_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) "_", GradeComponents_10);
            break;
          case (MR_Integer) 0:
            GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) ".", GradeComponents_10);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MldsGrade_47 = (MR_Word) (MR_body((MR_Word) (GradeStructure_5), (MR_Integer) 1));
        MR_Word MldsTarget_48 = ((MR_Word) ((MR_hl_field(0, MldsGrade_47, (MR_Integer) 0))));
        MR_Word TargetDebug_49 = ((MR_Unsigned) ((MR_hl_field(0, MldsGrade_47, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word TargetDebugStrs_50;
        MR_Word GradeComponents_235;

        TargetDebugStrs_50 = grade_lib__grade_string__target_debug_to_strs_1_f_0(TargetDebug_49);
        switch (MR_tag((MR_Word) MldsTarget_48)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MldsCThreadSafe_51 = ((MR_Word) ((MR_hl_field(0, MldsTarget_48, (MR_Integer) 0))));
              MR_Word MldsPerfProfStrs_54;
              MR_Word SSDebugStrs_55;
              MR_Word Var_119;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word MercFile_157 = ((((MR_Unsigned) ((MR_hl_field(0, MldsTarget_48, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
              MR_Word LowTagBits_158 = ((((MR_Unsigned) ((MR_hl_field(0, MldsTarget_48, (MR_Integer) 1))) >> 2)) & (MR_Integer) 3);
              MR_Word MercFloat_159 = ((MR_Unsigned) ((MR_hl_field(0, MldsTarget_48, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word BinaryCompatStrs_160;
              MR_Word Trail_162 = ((((MR_Unsigned) ((MR_hl_field(0, MldsTarget_48, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
              MR_Word ThreadSafeStrs_163;
              MR_Word GcStrs_165;
              MR_Word TrailStrs_166;
              MR_Word LowTagBitStrs_170;
              MR_Word MercFloatStrs_171;
              MR_Word MercFileStrs_172;

              BinaryCompatStrs_160 = grade_lib__grade_string__binary_compat_version_to_strs_1_f_0(WhichGradeString_4);
              TrailStrs_166 = grade_lib__grade_string__grade_var_trail_to_strs_1_f_0(Trail_162);
              LowTagBitStrs_170 = grade_lib__grade_string__low_tag_bits_use_to_strs_2_f_0(WhichGradeString_4, LowTagBits_158);
              MercFloatStrs_171 = grade_lib__grade_string__merc_float_to_strs_2_f_0(WhichGradeString_4, MercFloat_159);
              if (((MR_tag((MR_Word) MldsCThreadSafe_51)) == (MR_Integer) 0))
              {
                MR_Word MldsPerfProf_52 = ((MR_Word) ((MR_hl_field(0, MldsCThreadSafe_51, (MR_Integer) 1))));
                MR_Word SSDebug_53 = ((MR_Unsigned) ((MR_hl_field(0, MldsCThreadSafe_51, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word CGc_145 = ((MR_Unsigned) ((MR_hl_field(0, MldsCThreadSafe_51, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word Gc_146;

                ThreadSafeStrs_163 = (MR_Word) ((MR_Unsigned) 0U);
                Gc_146 = grade_lib__grade_string__c_gc_to_gc_1_f_0(CGc_145);
                GcStrs_165 = grade_lib__grade_string__gc_to_strs_1_f_0(Gc_146);
                if ((MldsPerfProf_52 == (MR_Word) ((MR_Unsigned) 0U)))
                  MldsPerfProfStrs_54 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_String Var_115;
                  MR_Word MprofTime_141 = ((((MR_Unsigned) ((MR_hl_field(1, MldsPerfProf_52, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                  MR_Word MprofMemory_142 = ((MR_Unsigned) ((MR_hl_field(1, MldsPerfProf_52, (MR_Integer) 0))) & (MR_Integer) 1);

                  Var_115 = grade_lib__grade_string__mprof_to_str_2_f_0(MprofTime_141, MprofMemory_142);
                  {
                    MldsPerfProfStrs_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MldsPerfProfStrs_54, 0) = ((MR_Box) (Var_115));
                    MR_hl_field(1, MldsPerfProfStrs_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                SSDebugStrs_55 = grade_lib__grade_string__ssdebug_to_strs_2_f_0(WhichGradeString_4, SSDebug_53);
              }
              else
              {
                MR_Word Gc_149;
                MR_Word ThreadSafeGc_150 = ((MR_Unsigned) ((MR_hl_field(1, MldsCThreadSafe_51, (MR_Integer) 0))) & (MR_Integer) 3);

                ThreadSafeStrs_163 = grade_lib__grade_string__thread_safe_to_strs_2_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1);
                Gc_149 = grade_lib__grade_string__thread_safe_c_gc_to_gc_1_f_0(ThreadSafeGc_150);
                GcStrs_165 = grade_lib__grade_string__gc_to_strs_1_f_0(Gc_149);
                MldsPerfProfStrs_54 = (MR_Word) ((MR_Unsigned) 0U);
                SSDebugStrs_55 = (MR_Word) ((MR_Unsigned) 0U);
              }
              MercFileStrs_172 = grade_lib__grade_string__merc_file_to_strs_2_f_0(WhichGradeString_4, MercFile_157);
              Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MldsPerfProfStrs_54, MercFileStrs_172);
              Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TrailStrs_166, Var_129);
              Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GcStrs_165, Var_128);
              Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetDebugStrs_50, Var_127);
              Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SSDebugStrs_55, Var_126);
              Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThreadSafeStrs_163, Var_125);
              Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercFloatStrs_171, Var_124);
              Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LowTagBitStrs_170, Var_123);
              Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[14])), Var_122);
              GradeComponents_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BinaryCompatStrs_160, Var_119);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_130;
              MR_Word SSDebug_173 = ((MR_Unsigned) ((MR_hl_field(1, MldsTarget_48, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word SSDebugStrs_174;

              SSDebugStrs_174 = grade_lib__grade_string__ssdebug_to_strs_2_f_0(WhichGradeString_4, SSDebug_173);
              {
                Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_130, 0) = ((MR_Box) ((MR_String) "csharp"));
                MR_hl_field(1, Var_130, 1) = ((MR_Box) (SSDebugStrs_174));
              }
              GradeComponents_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, TargetDebugStrs_50);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_132;
              MR_Word SSDebug_175 = ((MR_Unsigned) ((MR_hl_field(2, MldsTarget_48, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word SSDebugStrs_176;

              SSDebugStrs_176 = grade_lib__grade_string__ssdebug_to_strs_2_f_0(WhichGradeString_4, SSDebug_175);
              {
                Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_132, 0) = ((MR_Box) ((MR_String) "java"));
                MR_hl_field(1, Var_132, 1) = ((MR_Box) (SSDebugStrs_176));
              }
              GradeComponents_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_132, TargetDebugStrs_50);
            }
            break;
        }
        switch (WhichGradeString_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) "_", GradeComponents_235);
            break;
          case (MR_Integer) 0:
            GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) ".", GradeComponents_235);
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PregenGrade_7 = ((MR_Word) ((MR_hl_field(2, GradeStructure_5, (MR_Integer) 0))));
        MR_Word PregenKind_8 = (MR_Word) (PregenGrade_7);
        MR_String BaseStr_9 = ((&grade_lib__grade_string_vector_common_4[6 + PregenKind_8]))->grade_lib__grade_string__vector_common_type_4_0__vct_4_f_0;

        switch (WhichGradeString_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word GradeComponents_238;

              {
                GradeComponents_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GradeComponents_238, 0) = ((MR_Box) (BaseStr_9));
                MR_hl_field(1, GradeComponents_238, 1) = ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[16])));
              }
              GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) "_", GradeComponents_238);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word GradeComponents_240;

              {
                GradeComponents_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GradeComponents_240, 0) = ((MR_Box) (BaseStr_9));
                MR_hl_field(1, GradeComponents_240, 1) = ((MR_Box) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[15])));
              }
              GradeStr_6 = mercury__string__join_list_2_f_0((MR_String) ".", GradeComponents_240);
            }
            break;
        }
      }
      break;
  }
  return GradeStr_6;
}

static MR_String MR_CALL 
grade_lib__grade_string__deep_prof_version_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "4";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "";
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
grade_lib__grade_string__binary_compat_version_to_strs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[117]));
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
grade_lib__grade_string__merc_float_to_strs_2_f_0(
  MR_Word WhichGradeString_4,
  MR_Word MercFloat_5)
{
  MR_Word Strs_6;

  switch (MercFloat_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Strs_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      switch (WhichGradeString_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Strs_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[28]));
          break;
        case (MR_Integer) 0:
          Strs_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 2:
      Strs_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[29]));
      break;
  }
  return Strs_6;
}

static MR_Word MR_CALL 
grade_lib__grade_string__low_tag_bits_use_to_strs_2_f_0(
  MR_Word WhichGradeString_4,
  MR_Word LowTagBits_5)
{
  MR_Word Strs_6;

  switch (WhichGradeString_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (LowTagBits_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Strs_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[25]));
          break;
        case (MR_Integer) 1:
          Strs_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[26]));
          break;
        case (MR_Integer) 2:
          Strs_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[27]));
          break;
      }
      break;
    case (MR_Integer) 0:
      Strs_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return Strs_6;
}

static MR_Word MR_CALL 
grade_lib__grade_string__merc_file_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[24]));
          break;
      }
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return HeadVar__3_3;
}

static MR_String MR_CALL 
grade_lib__grade_string__mprof_to_str_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_String) "profcalls";
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_String) "memprof";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_String) "prof";
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_String) "profall";
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
grade_lib__grade_string__target_debug_to_strs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[23]));
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
grade_lib__grade_string__ssdebug_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      switch (HeadVar__1_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[116]));
          break;
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[22]));
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
grade_lib__grade_string__llds_debug_to_strs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_6;
        MR_String Var_8;

        switch (HeadVar__1_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_8 = (MR_String) "12";
            break;
          case (MR_Integer) 0:
            Var_8 = (MR_String) "";
            break;
        }
        Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "debug", Var_8);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_11;
        MR_String Var_13;

        switch (HeadVar__1_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Var_13 = (MR_String) "12";
            break;
          case (MR_Integer) 0:
            Var_13 = (MR_String) "";
            break;
        }
        Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "decldebug", Var_13);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
grade_lib__grade_string__thread_safe_to_strs_2_f_0(
  MR_Word Backend_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String Str_10;

        if ((Backend_1 == (MR_Word) ((MR_Unsigned) 0U)))
          Str_10 = (MR_String) "par";
        else
        {
          MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(1, Backend_1, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Str_10 = (MR_String) "par1";
              break;
            case (MR_Integer) 0:
              Str_10 = (MR_String) "par";
              break;
          }
        }
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Str_10));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_string.thread_safe_to_strs\'/2", (MR_String) "grade_var_thread_safe_target_native");
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
grade_lib__grade_string__grade_var_trail_to_strs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[21]));
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
grade_lib__grade_string__gc_to_strs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[17]));
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[18]));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[19]));
      break;
    case (MR_Integer) 5:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &grade_lib__grade_string_scalar_common_2[20]));
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      mercury__require__unexpected_2_p_0((MR_String) "function \140grade_lib.grade_string.gc_to_strs\'/1", (MR_String) "grade_var_gc_target_native");
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
grade_lib__grade_string__thread_safe_c_gc_to_gc_1_f_0(
  MR_Word ThreadSafeGc_3)
{
  MR_Word Gc_4;

  switch (ThreadSafeGc_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Gc_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Gc_4 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      Gc_4 = (MR_Integer) 0;
      break;
  }
  return Gc_4;
}

static MR_Word MR_CALL 
grade_lib__grade_string__c_gc_to_gc_1_f_0(
  MR_Word CGc_3)
{
  MR_Word Gc_4 = ((&grade_lib__grade_string_vector_common_3[0 + CGc_3]))->grade_lib__grade_string__vector_common_type_3_0__vct_3_f_0;

  return Gc_4;
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_string____Unify____grade_component_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_string____Compare____grade_component_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____grade_component_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_string____Unify____grade_component_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____grade_component_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_string____Compare____grade_component_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____thread_safe_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_string____Unify____thread_safe_backend_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____thread_safe_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_string____Compare____thread_safe_backend_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_string____Unify____which_grade_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_string____Unify____which_grade_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_string____Compare____which_grade_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_string____Compare____which_grade_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__grade_lib__grade_string__init(void)
{
}

void mercury__grade_lib__grade_string__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_entry_0);
	MR_register_type_ctor_info(&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_grade_component_map_0);
	MR_register_type_ctor_info(&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_thread_safe_backend_0);
	MR_register_type_ctor_info(&grade_lib__grade_string__grade_lib__grade_string__type_ctor_info_which_grade_string_0);
}

void mercury__grade_lib__grade_string__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_string__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_string.
