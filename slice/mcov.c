/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version rotd-2024-02-21
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


// :- module mcov.
// :- implementation.

/*
INIT mercury__mcov__init
ENDINIT
*/

#include "mcov.mih"


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
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mcov__main_2_p_0_4_env_0_s {
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mcov__main_2_p_0_4_env_0__cont;
  void * mcov__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0;

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4];

static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0;

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1];

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1];

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1];

static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_0;

static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_1[1];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1;

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[1];

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1];

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2];

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[2];

static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[2];

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_8;

static const MR_EnumFunctorDescPtr mcov__mcov__enum_ordinal_ordered_option_0[9];

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[9];

static const MR_Integer mcov__mcov__functor_number_map_option_0[9];

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3];

static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_proc_info_0_0;

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1];

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1];

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1];

static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1];

static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__309__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__218__1_2_p_0(
  MR_Word Modules_16,
  MR_Word HeadVar__2_48);

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov____Compare____proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov____Compare____module_restriction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov____Compare____label_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mcov__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mcov__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mcov__write_label_info_4_p_0(
  MR_Word OutStream_5,
  MR_Word LabelInfo_6);

static void MR_CALL 
mcov__write_path_port_for_user_4_p_0(
  MR_Word OutStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mcov__write_proc_info_4_p_0(
  MR_Word OutStream_5,
  MR_Word ProcInfo_6);

static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
  MR_Word ProcLabel_7,
  MR_String FileName_8,
  MR_Word PathPort_9,
  MR_Word LineNumberAndCount_10,
  MR_Word STATE_VARIABLE_ZeroLabelInfos_0_16,
  MR_Word * STATE_VARIABLE_ZeroLabelInfos_17);

static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
  MR_Word ProcInfoMap_4,
  MR_Word HeadVar__2_2,
  MR_Word * ProcInfo_7);

static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
  MR_Word PathPort_7,
  MR_Word LineNumberAndCount_8,
  MR_Word STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word * STATE_VARIABLE_MaybeCallInfo_15,
  MR_Integer STATE_VARIABLE_Count_0_16,
  MR_Integer * STATE_VARIABLE_Count_17);

static MR_bool MR_CALL 
mcov__in_stdlib_or_mdbcomp_module_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mcov__in_mdbcomp_module_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
  MR_Word OptionTable_5,
  MR_Word Args_6);

static void MR_CALL 
mcov__write_coverage_test_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mcov__write_coverage_test_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mcov__write_coverage_test_6_p_0(
  MR_Word OutStream_7,
  MR_Word OptionTable_8,
  MR_Word RestrictToModules_9,
  MR_Word TraceCountMap_10);

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ZeroLabelInfos_0_2,
  MR_Word * STATE_VARIABLE_ZeroLabelInfos_3);

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcInfoMap_0_2,
  MR_Word * STATE_VARIABLE_ProcInfoMap_3,
  MR_Word STATE_VARIABLE_CountMap_0_4,
  MR_Word * STATE_VARIABLE_CountMap_5);

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mcov_scalar_common_1[13][3];

static /* final */ const MR_Box mcov_scalar_common_2[33][2];

static /* final */ const MR_Box mcov_scalar_common_3[3][1];

static /* final */ const MR_Box mcov_scalar_common_4[2][9];

static /* final */ const MR_Box mcov_scalar_common_5[1][4];

static /* final */ const MR_Box mcov_scalar_common_6[6][5];

static /* final */ const MR_Box mcov_scalar_common_7[1][6];

static /* final */ const MR_Box mcov_scalar_common_8[2][7];


struct mcov__vector_common_type_9_0_s {
  const MR_String mcov__vector_common_type_9_0__vct_9_f_0;
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[64];

struct mcov__vector_common_type_10_0_s {
  const MR_Word mcov__vector_common_type_10_0__vct_10_f_0;
  const MR_Word mcov__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct mcov__vector_common_type_10_0_s mcov_vector_common_10[9];



static /* final */ const MR_Box mcov_scalar_common_1[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mcov_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mcov_scalar_common_4[0])),
    ((MR_Box) (mcov__collect_proc_infos_counts_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mcov_scalar_common_5[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mcov_scalar_common_5[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mcov_scalar_common_5[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mcov_scalar_common_6[1])),
    ((MR_Box) (mcov__do_coverage_testing_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mcov_scalar_common_6[2])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mcov_scalar_common_6[3])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mcov_scalar_common_6[4])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mcov_scalar_common_1[9])),
    ((MR_Box) (&mcov_scalar_common_1[10])),
    ((MR_Box) (&mcov_scalar_common_1[11]))
  },
};

static /* final */ const MR_Box mcov_scalar_common_2[33][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_label_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mcov_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "\140mcov\' outputs a test coverage report.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "Arguments are assumed to Mercury trace count files.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\tin the reports.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\tInclude information about labels in the Mercury standard library")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "--no-ignore-stdlib")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "\twere specified on the command line.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "\tTake options from the specified file, and handle them as if they")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "--flags <file>, --flags-file <file>")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "\tBy default the output will be printed to the standard output.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "\tPrint output to the file specified by the argument.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "-o <file>, --output-file <file>")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\tMultiple module options accumulate.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\tRestrict the output to the module named by the argument.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "-m <module>, --module <module>")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\tif some other code has been executed in the same procedure.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\tPrint a report for each label that has not been executed, even")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "-d, --detailed")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\tPrint the name of each trace count file as it is added to the union.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "-v, --verbose")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\tPrint version information.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "--version")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "\twithout doing any further processing.")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "\tPrint help about using mcov (on the standard output) and exit")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "-\?, -h, --help")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2014-2016, 2020-2024 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mcov_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box mcov_scalar_common_4[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0)),
    ((MR_Box) (&mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_6[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_8[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_label_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[64] = {
  /* row   0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   1 */
  {
    (MR_String) "ignore-mdbcomp",
    (MR_Integer) 8
  },
  /* row   2 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  21 */
  {
    (MR_String) "help",
    (MR_Integer) 0
  },
  /* row  22 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    (MR_String) "detailed",
    (MR_Integer) 3
  },
  /* row  25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    (MR_String) "flags",
    (MR_Integer) 6
  },
  /* row  27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    (MR_String) "ignore-stdlib",
    (MR_Integer) 7
  },
  /* row  29 */
  {
    (MR_String) "version",
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_String) "flags-file",
    (MR_Integer) 6
  },
  /* row  31 */
  {
    (MR_String) "output-file",
    (MR_Integer) 5
  },
  /* row  32 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  33 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  34 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  35 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  36 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  37 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  38 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  39 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  40 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  41 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  42 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  43 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  44 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  45 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  46 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  47 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  48 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  49 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  50 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  51 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  52 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  53 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  54 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  55 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  56 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  57 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  58 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  59 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  60 */
  {
    (MR_String) "module",
    (MR_Integer) 4
  },
  /* row  61 */
  {
    (MR_String) "verbose",
    (MR_Integer) 2
  },
  /* row  62 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  63 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct mcov__vector_common_type_10_0_s mcov_vector_common_10[9] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[1]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[1]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[1]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[1]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(3, &mcov_scalar_common_2[31]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(3, &mcov_scalar_common_2[32]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) ((MR_Unsigned) 20U)
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[2]))
  },
  /* row   8 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &mcov_scalar_common_3[2]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mcov__mcov__type_ctor_info_label_info_0) }
};

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0),
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_PseudoTypeInfo) (&mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&mcov__mcov__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
  (MR_PseudoTypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)
};

static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4] = {
  (MR_String) "label_source_file",
  (MR_String) "label_line_number",
  (MR_String) "label_proc",
  (MR_String) "label_path_port"
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0 = {
  (MR_String) "label_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mcov__mcov__field_types_label_info_0_0,
  mcov__mcov__field_names_label_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1] = { &mcov__mcov__du_functor_desc_label_info_0_0 };

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_label_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1] = { &mcov__mcov__du_functor_desc_label_info_0_0 };

static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_label_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____label_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____label_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "label_info",
  { mcov__mcov__du_name_ordered_label_info_0 },
  { mcov__mcov__du_ptag_ordered_label_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mcov__mcov__functor_number_map_label_info_0,

};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_0 = {
  (MR_String) "module_restriction_default",
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

static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_1[1] = { (MR_PseudoTypeInfo) (&mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1 = {
  (MR_String) "module_restriction_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mcov__mcov__field_types_module_restriction_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[1] = { &mcov__mcov__du_functor_desc_module_restriction_0_0 };

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1] = { &mcov__mcov__du_functor_desc_module_restriction_0_1 };

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mcov__mcov__du_stag_ordered_module_restriction_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_module_restriction_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[2] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_0,
  &mcov__mcov__du_functor_desc_module_restriction_0_1
};

static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_module_restriction_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____module_restriction_0_0_10001)),
  ((MR_Box) (mcov____Compare____module_restriction_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "module_restriction",
  { mcov__mcov__du_name_ordered_module_restriction_0 },
  { mcov__mcov__du_ptag_ordered_module_restriction_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mcov__mcov__functor_number_map_module_restriction_0,

};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2 = {
  (MR_String) "verbose",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3 = {
  (MR_String) "detailed",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4 = {
  (MR_String) "modules",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5 = {
  (MR_String) "output_filename",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6 = {
  (MR_String) "flags_file",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_7 = {
  (MR_String) "ignore_stdlib",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_8 = {
  (MR_String) "ignore_mdbcomp",
  INT32_C(8)
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_ordinal_ordered_option_0[9] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_7,
  &mcov__mcov__enum_functor_desc_option_0_8
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[9] = {
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_8,
  &mcov__mcov__enum_functor_desc_option_0_7,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_1
};

static const MR_Integer mcov__mcov__functor_number_map_option_0[9] = {
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mcov____Unify____option_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option",
  { mcov__mcov__enum_name_ordered_option_0 },
  { mcov__mcov__enum_ordinal_ordered_option_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  mcov__mcov__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mcov__mcov__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____option_table_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_table_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)
};

static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3] = {
  (MR_String) "proc_source_file",
  (MR_String) "proc_line_number",
  (MR_String) "proc_proc"
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_proc_info_0_0 = {
  (MR_String) "proc_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mcov__mcov__field_types_proc_info_0_0,
  mcov__mcov__field_names_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1] = { &mcov__mcov__du_functor_desc_proc_info_0_0 };

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1] = { &mcov__mcov__du_functor_desc_proc_info_0_0 };

static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____proc_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____proc_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "proc_info",
  { mcov__mcov__du_name_ordered_proc_info_0 },
  { mcov__mcov__du_ptag_ordered_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mcov__mcov__functor_number_map_proc_info_0,

};

static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0),
    (MR_TypeInfo) (&mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0) }
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_trace_counts_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____trace_counts_list_0_0_10001)),
  ((MR_Box) (mcov____Compare____trace_counts_list_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "trace_counts_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__309__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mcov_scalar_common_2[0]), ((MR_Box) (STATE_VARIABLE_MaybeCallInfo_0_14)), ((MR_Box) (HeadVar__2_22)));
  return succeeded;
}

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__218__1_2_p_0(
  MR_Word Modules_16,
  MR_Word HeadVar__2_48)
{
  MR_bool succeeded;
  MR_Word ProcLabelInContext_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_48, (MR_Integer) 0))));
  MR_Word Module_52 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_50, (MR_Integer) 0))));

  succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Module_52)), Modules_16);
  return succeeded;
}

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mcov_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mcov_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____proc_info_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        mdbcomp__prim_data____Compare____proc_label_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
mcov____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mcov_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mcov_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____option_0_0(
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

static MR_bool MR_CALL 
mcov____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mcov____Compare____module_restriction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mcov_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mcov_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
mcov____Compare____label_info_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        mdbcomp__prim_data____Compare____proc_label_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mdbcomp__trace_counts____Compare____path_port_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mcov__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mcov_vector_common_10[0 + slot_0]))->mcov__vector_common_type_10_0__vct_10_f_0;
    *HeadVar__2_2 = ((&mcov_vector_common_10[0 + slot_0]))->mcov__vector_common_type_10_0__vct_10_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 9));
}

static MR_bool MR_CALL 
mcov__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 63);
  MR_String str_1 = ((&mcov_vector_common_9[0 + slot_0]))->mcov__vector_common_type_9_0__vct_9_f_0;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
  {
    // we found a match; look up the results
    ;
    *HeadVar__2_2 = ((&mcov_vector_common_9[0 + slot_0]))->mcov__vector_common_type_9_0__vct_9_f_1;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mcov__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 63:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 100:
      {
        *HeadVar__2_2 = (MR_Integer) 3;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 104:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 109:
      {
        *HeadVar__2_2 = (MR_Integer) 4;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 111:
      {
        *HeadVar__2_2 = (MR_Integer) 5;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 118:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
mcov__write_label_info_4_p_0(
  MR_Word OutStream_5,
  MR_Word LabelInfo_6)
{
  MR_String FileName_8 = ((MR_String) ((MR_hl_field(0, LabelInfo_6, (MR_Integer) 0))));
  MR_Integer LineNumber_9 = ((MR_Integer) ((MR_hl_field(0, LabelInfo_6, (MR_Integer) 1))));
  MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, LabelInfo_6, (MR_Integer) 2))));
  MR_Word PathPort_11 = ((MR_Word) ((MR_hl_field(0, LabelInfo_6, (MR_Integer) 3))));
  MR_String Var_29;

  mercury__io__write_string_4_p_0(OutStream_5, FileName_8);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ":");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), LineNumber_9, &Var_29);
  mercury__io__write_string_4_p_0(OutStream_5, Var_29);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ": ");
  if (((MR_tag((MR_Word) ProcLabel_10)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String Name_40 = ((MR_String) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 3))));
    MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 4))));
    MR_Integer Mode_42 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 5))));
    MR_String PredOrFuncStr_43;
    MR_String QuotedName_44;
    MR_String Var_71;
    MR_String Var_80;

    switch (PredOrFunc_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PredOrFuncStr_43 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        PredOrFuncStr_43 = (MR_String) "pred";
        break;
    }
    QuotedName_44 = mercury__term_io__quoted_atom_1_f_0(Name_40);
    mercury__io__write_string_4_p_0(OutStream_5, PredOrFuncStr_43);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutStream_5, QuotedName_44);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), Arity_41, &Var_71);
    mercury__io__write_string_4_p_0(OutStream_5, Var_71);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "-");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), Mode_42, &Var_80);
    mercury__io__write_string_4_p_0(OutStream_5, Var_80);
  }
  else
    {
      mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/4", (MR_String) "special_pred");
      return;
    }
  mercury__io__write_char_4_p_0(OutStream_5, (MR_Char) 32);
  mcov__write_path_port_for_user_4_p_0(OutStream_5, PathPort_11);
  mercury__io__nl_3_p_0(OutStream_5);
}

static void MR_CALL 
mcov__write_path_port_for_user_4_p_0(
  MR_Word OutStream_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Port_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String PortStr_8;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_8, Port_6);
        mercury__io__write_string_4_p_0(OutStream_1, PortStr_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Path_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Var_17;
        MR_Word Var_20;
        MR_String Var_21;

        Var_21 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_13);
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[4])));
        }
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) ((MR_String) "<"));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
        }
        mercury__io__write_strings_4_p_0(OutStream_1, Var_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Port_26 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word Path_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
        MR_String PortStr_29;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_36;
        MR_String Var_37;

        mdbcomp__prim_data__string_to_trace_port_2_p_1(&PortStr_29, Port_26);
        Var_37 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(Path_27);
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &mcov_scalar_common_2[4])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) " <"));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (PortStr_29));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
        }
        mercury__io__write_strings_4_p_0(OutStream_1, Var_32);
      }
      break;
  }
}

static void MR_CALL 
mcov__write_proc_info_4_p_0(
  MR_Word OutStream_5,
  MR_Word ProcInfo_6)
{
  MR_String FileName_8 = ((MR_String) ((MR_hl_field(0, ProcInfo_6, (MR_Integer) 0))));
  MR_Integer LineNumber_9 = ((MR_Integer) ((MR_hl_field(0, ProcInfo_6, (MR_Integer) 1))));
  MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(0, ProcInfo_6, (MR_Integer) 2))));
  MR_String Var_25;

  mercury__io__write_string_4_p_0(OutStream_5, FileName_8);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ":");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), LineNumber_9, &Var_25);
  mercury__io__write_string_4_p_0(OutStream_5, Var_25);
  mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ": ");
  if (((MR_tag((MR_Word) ProcLabel_10)) == (MR_Integer) 0))
  {
    MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String Name_36 = ((MR_String) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 3))));
    MR_Integer Arity_37 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 4))));
    MR_Integer Mode_38 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_10, (MR_Integer) 5))));
    MR_String PredOrFuncStr_39;
    MR_String QuotedName_40;
    MR_String Var_67;
    MR_String Var_76;

    switch (PredOrFunc_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PredOrFuncStr_39 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        PredOrFuncStr_39 = (MR_String) "pred";
        break;
    }
    QuotedName_40 = mercury__term_io__quoted_atom_1_f_0(Name_36);
    mercury__io__write_string_4_p_0(OutStream_5, PredOrFuncStr_39);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) " ");
    mercury__io__write_string_4_p_0(OutStream_5, QuotedName_40);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), Arity_37, &Var_67);
    mercury__io__write_string_4_p_0(OutStream_5, Var_67);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "-");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mcov_scalar_common_3[0]), Mode_38, &Var_76);
    mercury__io__write_string_4_p_0(OutStream_5, Var_76);
  }
  else
    {
      mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/4", (MR_String) "special_pred");
      return;
    }
  mercury__io__nl_3_p_0(OutStream_5);
}

static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
  MR_Word ProcLabel_7,
  MR_String FileName_8,
  MR_Word PathPort_9,
  MR_Word LineNumberAndCount_10,
  MR_Word STATE_VARIABLE_ZeroLabelInfos_0_16,
  MR_Word * STATE_VARIABLE_ZeroLabelInfos_17)
{
  MR_bool succeeded;
  MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(0, LineNumberAndCount_10, (MR_Integer) 0))));
  MR_Integer Count_13 = ((MR_Integer) ((MR_hl_field(0, LineNumberAndCount_10, (MR_Integer) 1))));

  succeeded = (Count_13 == (MR_Integer) 0);
  if (succeeded)
  {
    if (((MR_tag((MR_Word) ProcLabel_7)) == (MR_Integer) 0))
    {
      MR_Word DefModuleSym_18 = ((MR_Word) ((MR_hl_field(0, ProcLabel_7, (MR_Integer) 0))));
      MR_Word DeclModuleSym_20 = ((MR_Word) ((MR_hl_field(0, ProcLabel_7, (MR_Integer) 2))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefModuleSym_18, DeclModuleSym_20);
    }
    else
    {
      MR_Word TypeModuleSym_25 = ((MR_Word) ((MR_hl_field(1, ProcLabel_7, (MR_Integer) 2))));
      MR_Word DefModuleSym_29 = ((MR_Word) ((MR_hl_field(1, ProcLabel_7, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefModuleSym_29, TypeModuleSym_25);
    }
  }
  if (succeeded)
  {
    MR_Word LabelInfo_15;

    {
      LabelInfo_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LabelInfo_15, 0) = ((MR_Box) (FileName_8));
      MR_hl_field(0, LabelInfo_15, 1) = ((MR_Box) (LineNumber_12));
      MR_hl_field(0, LabelInfo_15, 2) = ((MR_Box) (ProcLabel_7));
      MR_hl_field(0, LabelInfo_15, 3) = ((MR_Box) (PathPort_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ZeroLabelInfos_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LabelInfo_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ZeroLabelInfos_0_16));
    }
  }
  else
    *STATE_VARIABLE_ZeroLabelInfos_17 = STATE_VARIABLE_ZeroLabelInfos_0_16;
}

static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
  MR_Word ProcInfoMap_4,
  MR_Word HeadVar__2_2,
  MR_Word * ProcInfo_7)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_8_8;
  MR_Word TypeCtorInfo_9_9;
  MR_Word ProcLabel_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Count_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Box conv0_ProcInfo_7;

  succeeded = (Count_6 == (MR_Integer) 0);
  if (succeeded)
  {
    if (((MR_tag((MR_Word) ProcLabel_5)) == (MR_Integer) 0))
    {
      MR_Word DefModuleSym_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 0))));
      MR_Word DeclModuleSym_12 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 2))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefModuleSym_10, DeclModuleSym_12);
    }
    else
    {
      MR_Word TypeModuleSym_17 = ((MR_Word) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 2))));
      MR_Word DefModuleSym_21 = ((MR_Word) ((MR_hl_field(1, ProcLabel_5, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefModuleSym_21, TypeModuleSym_17);
    }
    if (succeeded)
    {
      TypeCtorInfo_8_8 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0);
      TypeCtorInfo_9_9 = (MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_8_8, TypeCtorInfo_9_9, ProcInfoMap_4, ((MR_Box) (ProcLabel_5)), &conv0_ProcInfo_7);
      *ProcInfo_7 = ((MR_Word) (conv0_ProcInfo_7));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mcov__IntroducedFrom__pred__proc_process_path_port_count__309__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
  MR_Word PathPort_7,
  MR_Word LineNumberAndCount_8,
  MR_Word STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word * STATE_VARIABLE_MaybeCallInfo_15,
  MR_Integer STATE_VARIABLE_Count_0_16,
  MR_Integer * STATE_VARIABLE_Count_17)
{
  MR_bool succeeded;
  MR_Integer LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, LineNumberAndCount_8, (MR_Integer) 0))));
  MR_Integer CurCount_12 = ((MR_Integer) ((MR_hl_field(0, LineNumberAndCount_8, (MR_Integer) 1))));
  MR_Word Var_19;

  *STATE_VARIABLE_Count_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_16 + (MR_Unsigned) CurCount_12);
  succeeded = ((MR_tag((MR_Word) PathPort_7)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_19 = ((MR_Unsigned) ((MR_hl_field(0, PathPort_7, (MR_Integer) 0))) & (MR_Integer) 15);
    succeeded = (Var_19 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&mcov_scalar_common_6[5]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (mcov__proc_process_path_port_count_6_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (STATE_VARIABLE_MaybeCallInfo_0_14));
      MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__require_2_p_0(Var_20, (MR_String) "proc_process_path_port_count: duplicate call port:");
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeCallInfo_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LineNumber_11));
    }
  }
  else
    *STATE_VARIABLE_MaybeCallInfo_15 = STATE_VARIABLE_MaybeCallInfo_0_14;
}

static MR_bool MR_CALL 
mcov__in_stdlib_or_mdbcomp_module_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word ProcLabelInContext_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Module_4 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_2, (MR_Integer) 0))));

  {
    MR_String Var_7;

    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(Module_4, &Var_7);
  }
  if (!(succeeded))
    succeeded = mdbcomp__builtin_modules__is_mdbcomp_module_name_1_p_0(Module_4);
  return succeeded;
}

static MR_bool MR_CALL 
mcov__in_mdbcomp_module_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word ProcLabelInContext_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Module_4 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_2, (MR_Integer) 0))));

  succeeded = mdbcomp__builtin_modules__is_mdbcomp_module_name_1_p_0(Module_4);
  return succeeded;
}

static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word ProcLabelInContext_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Module_4 = ((MR_Word) ((MR_hl_field(0, ProcLabelInContext_2, (MR_Integer) 0))));
  MR_String Var_7;

  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(Module_4, &Var_7);
  return succeeded;
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mcov__main_2_p_0_4_env_0_s * env_ptr = (struct mcov__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mcov__main_2_p_0_4_env_0__cont)((env_ptr)->mcov__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mcov__main_2_p_0_4_env_0_s env;

  (env).mcov__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mcov__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mcov__main_2_p_0_4_env_0__cont = cont;
  (env).mcov__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mcov__option_default_2_p_0(&(env).mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mcov__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mcov__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Args0_4;
  MR_Word Args_6;
  MR_Word GetoptResult_7;

  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&Args0_4);
  mercury__getopt__process_options_io_6_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mcov_scalar_common_1[12])), Args0_4, &Args_6, &GetoptResult_7);
  if (((MR_tag((MR_Word) GetoptResult_7)) == (MR_Integer) 1))
  {
    MR_Word GetoptError_10 = ((MR_Word) ((MR_hl_field(1, GetoptResult_7, (MR_Integer) 0))));
    MR_String GetoptErrorMsg_11;
    MR_Word Stderr_40;

    GetoptErrorMsg_11 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), GetoptError_10);
    mercury__io__stderr_stream_3_p_0(&Stderr_40);
    mercury__io__write_string_4_p_0(Stderr_40, GetoptErrorMsg_11);
    mercury__io__write_string_4_p_0(Stderr_40, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word OptionTable_8 = ((MR_Word) ((MR_hl_field(0, GetoptResult_7, (MR_Integer) 0))));
    MR_Word Var_38;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &Var_38);
    succeeded = ((MR_Integer) 1 == Var_38);
    if (succeeded)
    {
      MR_Word StdOutStream_9;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_9);
      mercury__io__write_string_4_p_0(StdOutStream_9, (MR_String) "Name: mcov - Mercury coverage testing tool\n");
      mercury__io__write_strings_4_p_0(StdOutStream_9, (MR_Word) (MR_mkword(1, &mcov_scalar_common_2[30])));
      mercury__io__write_string_4_p_0(StdOutStream_9, (MR_String) "Usage: mcov [<options>] <arguments>\n");
      mercury__io__write_string_4_p_0(StdOutStream_9, (MR_String) "\nDescription:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_9, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mcov_scalar_common_2[5])));
      mercury__io__write_string_4_p_0(StdOutStream_9, (MR_String) "\nArguments:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_9, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mcov_scalar_common_2[6])));
      mercury__io__write_string_4_p_0(StdOutStream_9, (MR_String) "\nOptions:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_9, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mcov_scalar_common_2[28])));
    }
    else
    {
      MR_Word Var_39;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &Var_39);
      succeeded = ((MR_Integer) 1 == Var_39);
      if (succeeded)
      {
        MR_Word StdOutStream_30;
        MR_String Version_74;
        MR_String Package_75;

        mercury__io__stdout_stream_3_p_0(&StdOutStream_30);
        Version_74 = mercury__library__mercury_version_0_f_0();
        mercury__io__write_string_4_p_0(StdOutStream_30, (MR_String) "Mercury coverage testing tool, version ");
        mercury__io__write_string_4_p_0(StdOutStream_30, Version_74);
        Package_75 = mercury__library__package_version_0_f_0();
        succeeded = (strcmp(Package_75, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__nl_3_p_0(StdOutStream_30);
        else
        {
          mercury__io__write_string_4_p_0(StdOutStream_30, (MR_String) " (");
          mercury__io__write_string_4_p_0(StdOutStream_30, Package_75);
          mercury__io__write_string_4_p_0(StdOutStream_30, (MR_String) ")\n");
        }
        mercury__io__write_strings_4_p_0(StdOutStream_30, (MR_Word) (MR_mkword(1, &mcov_scalar_common_2[30])));
      }
      else
        mcov__do_coverage_testing_4_p_0(OptionTable_8, Args_6);
    }
  }
}

static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
  MR_Word OptionTable_5,
  MR_Word Args_6)
{
  MR_bool succeeded;
  MR_Word StdOutStream_8;
  MR_Word StdErrStream_9;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_8);
  mercury__io__stderr_stream_3_p_0(&StdErrStream_9);
  if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ProgName_78;

    mercury__io__progname_base_4_p_0((MR_String) "mcov", &ProgName_78);
    mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "Usage: ");
    mercury__io__write_string_4_p_0(StdErrStream_9, ProgName_78);
    mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) " [<options>] [<files>]\n");
    mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "Use \140");
    mercury__io__write_string_4_p_0(StdErrStream_9, ProgName_78);
    mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) " --help\' for more information.\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word Verbose_12;
    MR_Word ShowProgress_13;
    MR_Word FileTypes_15;
    MR_Word TraceCounts_16;
    MR_Word MaybeReadError_17;
    MR_Integer _NumTests_14;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 2)), &Verbose_12);
    switch (Verbose_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ShowProgress_13 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          ShowProgress_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ShowProgress_13, 0) = ((MR_Box) (StdOutStream_8));
        }
        break;
    }
    mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(ShowProgress_13, Args_6, &_NumTests_14, &FileTypes_15, &TraceCounts_16, &MaybeReadError_17);
    if ((MaybeReadError_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word FileTypeList_19;
      MR_Word Modules_23;
      MR_Word RestrictToModules_24;
      MR_String OutputFile_28;
      MR_Word BaseType_20;
      MR_Word Var_40;
      MR_Word Var_41;

      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0), FileTypes_15, &FileTypeList_19);
      succeeded = (FileTypeList_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(1, FileTypeList_19, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(1, FileTypeList_19, (MR_Integer) 1))));
        succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
          if (succeeded)
            BaseType_20 = (MR_Word) ((MR_Word) (Var_40));
        }
      }
      if (succeeded)
      {
        MR_Word Kind_21 = ((MR_Unsigned) ((MR_hl_field(0, BaseType_20, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Kind_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "Warning: the original trace count files did not include all labels.\n");
            break;
        }
      }
      else
        mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "Warning: reporting on a mixture of trace file types and/or programs.\n");
      mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 4)), &Modules_23);
      if ((Modules_23 == (MR_Word) ((MR_Unsigned) 0U)))
        RestrictToModules_24 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ModuleSyms_27;
        MR_Word Var_48;

        ModuleSyms_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mcov_scalar_common_1[8]), Modules_23);
        Var_48 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleSyms_27);
        {
          RestrictToModules_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RestrictToModules_24, 0) = ((MR_Box) (Var_48));
        }
      }
      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_5, ((MR_Box) ((MR_Integer) 5)), &OutputFile_28);
      succeeded = (strcmp(OutputFile_28, (MR_String) "") == 0);
      if (succeeded)
        mcov__write_coverage_test_6_p_0(StdOutStream_8, OptionTable_5, RestrictToModules_24, TraceCounts_16);
      else
      {
        MR_Word OpenRes_29;

        mercury__io__open_output_4_p_0(OutputFile_28, &OpenRes_29);
        if (((MR_tag((MR_Word) OpenRes_29)) == (MR_Integer) 1))
        {
          MR_Word OpenError_31 = ((MR_Word) ((MR_hl_field(1, OpenRes_29, (MR_Integer) 0))));
          MR_String OpenErrorMsg_32;

          mercury__io__error_message_2_p_0(OpenError_31, &OpenErrorMsg_32);
          mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "Error opening file \140");
          mercury__io__write_string_4_p_0(StdErrStream_9, OutputFile_28);
          mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "\': ");
          mercury__io__write_string_4_p_0(StdErrStream_9, OpenErrorMsg_32);
          mercury__io__write_string_4_p_0(StdErrStream_9, (MR_String) "\n");
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word FileStream_30 = ((MR_Word) ((MR_hl_field(0, OpenRes_29, (MR_Integer) 0))));

          mcov__write_coverage_test_6_p_0(FileStream_30, OptionTable_5, RestrictToModules_24, TraceCounts_16);
          mercury__io__close_output_3_p_0(FileStream_30);
        }
      }
    }
    else
    {
      MR_String ReadErrorMsg_18 = ((MR_String) ((MR_hl_field(1, MaybeReadError_17, (MR_Integer) 0))));
      MR_Word Stderr_98;

      mercury__io__stderr_stream_3_p_0(&Stderr_98);
      mercury__io__write_string_4_p_0(Stderr_98, ReadErrorMsg_18);
      mercury__io__write_string_4_p_0(Stderr_98, (MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mcov__write_label_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mcov__write_proc_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_ProcInfo_7;

  succeeded = mcov__is_zero_count_local_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ProcInfo_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_ProcInfo_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mcov__IntroducedFrom__pred__write_coverage_test__218__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mcov__in_stdlib_or_mdbcomp_module_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mcov__in_stdlib_module_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mcov__in_mdbcomp_module_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0(
  MR_Word OutStream_7,
  MR_Word OptionTable_8,
  MR_Word RestrictToModules_9,
  MR_Word TraceCountMap_10)
{
  MR_bool succeeded;
  MR_Word TraceCounts0_12;
  MR_Word TraceCounts_15;
  MR_Word Detailed_17;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0), (MR_Word) (&mcov_scalar_common_1[0]), TraceCountMap_10, &TraceCounts0_12);
  if ((RestrictToModules_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IgnoreStdlib_13;
    MR_Word IgnoreMdbcomp_14;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 7)), &IgnoreStdlib_13);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 8)), &IgnoreMdbcomp_14);
    switch (IgnoreStdlib_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (IgnoreMdbcomp_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TraceCounts_15 = TraceCounts0_12;
            break;
          case (MR_Integer) 1:
            mercury__list__negated_filter_3_p_0((MR_Word) (&mcov_scalar_common_1[1]), (MR_Word) (&mcov_scalar_common_1[5]), TraceCounts0_12, &TraceCounts_15);
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (IgnoreMdbcomp_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__list__negated_filter_3_p_0((MR_Word) (&mcov_scalar_common_1[1]), (MR_Word) (&mcov_scalar_common_1[6]), TraceCounts0_12, &TraceCounts_15);
            break;
          case (MR_Integer) 1:
            mercury__list__negated_filter_3_p_0((MR_Word) (&mcov_scalar_common_1[1]), (MR_Word) (&mcov_scalar_common_1[7]), TraceCounts0_12, &TraceCounts_15);
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(1, RestrictToModules_9, (MR_Integer) 0))));
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&mcov_scalar_common_6[0]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_4));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) (Modules_16));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mcov_scalar_common_1[1]), Var_29, TraceCounts0_12, &TraceCounts_15);
  }
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mcov__mcov__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &Detailed_17);
  switch (Detailed_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ZeroCountProcs_18;
        MR_Word SortedZeroCountProcs_19;
        MR_Word Var_33;
        MR_Word ProcInfoMap_62;
        MR_Word CountMap_63;
        MR_Word CountList_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Box conv1_STATE_VARIABLE_IO_23;

        Var_65 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0));
        Var_66 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        mcov__collect_proc_infos_counts_5_p_0(TraceCounts_15, Var_65, &ProcInfoMap_62, Var_66, &CountMap_63);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CountMap_63, &CountList_64);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&mcov_scalar_common_7[0]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_5));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (ProcInfoMap_62));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&mcov_scalar_common_1[2]), (MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0), Var_67, CountList_64, &ZeroCountProcs_18);
        mercury__list__sort_2_p_0((MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0), ZeroCountProcs_18, &SortedZeroCountProcs_19);
        mercury__io__write_string_4_p_0(OutStream_7, (MR_String) "Unexecuted procedures:\n\n");
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mcov_scalar_common_8[0]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_6));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (OutStream_7));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, SortedZeroCountProcs_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ZeroCountLabels_20;
        MR_Word SortedZeroCountLabels_21;
        MR_Word Var_38;
        MR_Box conv2_STATE_VARIABLE_IO_23;

        mcov__collect_zero_count_local_labels_3_p_0(TraceCounts_15, (MR_Word) ((MR_Unsigned) 0U), &ZeroCountLabels_20);
        mercury__list__sort_2_p_0((MR_Word) (&mcov__mcov__type_ctor_info_label_info_0), ZeroCountLabels_20, &SortedZeroCountLabels_21);
        mercury__io__write_string_4_p_0(OutStream_7, (MR_String) "Unexecuted labels:\n\n");
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&mcov_scalar_common_8[1]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_7));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (OutStream_7));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mcov__mcov__type_ctor_info_label_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, SortedZeroCountLabels_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
      }
      break;
  }
}

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ZeroLabelInfos_17;

  mcov__label_process_path_port_count_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ZeroLabelInfos_17);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ZeroLabelInfos_17));
}

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ZeroLabelInfos_0_2,
  MR_Word * STATE_VARIABLE_ZeroLabelInfos_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ZeroLabelInfos_3 = STATE_VARIABLE_ZeroLabelInfos_0_2;
    else
    {
      MR_Word Assoc_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Assocs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LabelFilename_10 = ((MR_Word) ((MR_hl_field(0, Assoc_7, (MR_Integer) 0))));
      MR_Word PathPortCountMap_11 = ((MR_Word) ((MR_hl_field(0, Assoc_7, (MR_Integer) 1))));
      MR_String FileName_13 = ((MR_String) ((MR_hl_field(0, LabelFilename_10, (MR_Integer) 1))));
      MR_Word ProcLabel_14 = ((MR_Word) ((MR_hl_field(0, LabelFilename_10, (MR_Integer) 2))));
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_ZeroLabelInfos_18_18;
      MR_Box conv1_STATE_VARIABLE_ZeroLabelInfos_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ZeroLabelInfos_0_2;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (&mcov_scalar_common_4[1]));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (mcov__collect_zero_count_local_labels_3_p_0_1));
        MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProcLabel_14));
        MR_hl_field(0, Var_17, 4) = ((MR_Box) (FileName_13));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mcov_scalar_common_2[1]), Var_17, PathPortCountMap_11, ((MR_Box) (STATE_VARIABLE_ZeroLabelInfos_0_2)), &conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
      STATE_VARIABLE_ZeroLabelInfos_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_ZeroLabelInfos_18_18));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Assocs_8;
      next_value_of_STATE_VARIABLE_ZeroLabelInfos_0_2 = STATE_VARIABLE_ZeroLabelInfos_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ZeroLabelInfos_0_2 = next_value_of_STATE_VARIABLE_ZeroLabelInfos_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeCallInfo_15;
  MR_Integer conv0_STATE_VARIABLE_Count_17;

  mcov__proc_process_path_port_count_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeCallInfo_15, ((MR_Integer) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Count_17);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeCallInfo_15));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Count_17));
}

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcInfoMap_0_2,
  MR_Word * STATE_VARIABLE_ProcInfoMap_3,
  MR_Word STATE_VARIABLE_CountMap_0_4,
  MR_Word * STATE_VARIABLE_CountMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CountMap_5 = STATE_VARIABLE_CountMap_0_4;
      *STATE_VARIABLE_ProcInfoMap_3 = STATE_VARIABLE_ProcInfoMap_0_2;
    }
    else
    {
      MR_Word Assoc_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Assocs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LabelFilename_16 = ((MR_Word) ((MR_hl_field(0, Assoc_12, (MR_Integer) 0))));
      MR_Word PathPortCountMap_17 = ((MR_Word) ((MR_hl_field(0, Assoc_12, (MR_Integer) 1))));
      MR_String FileName_19 = ((MR_String) ((MR_hl_field(0, LabelFilename_16, (MR_Integer) 1))));
      MR_Word ProcLabel_20 = ((MR_Word) ((MR_hl_field(0, LabelFilename_16, (MR_Integer) 2))));
      MR_Word MaybeCallInfo_21;
      MR_Integer CurCount_22;
      MR_Word STATE_VARIABLE_CountMap_34_34;
      MR_Word STATE_VARIABLE_ProcInfoMap_36_36;
      MR_Box conv3_MaybeCallInfo_21;
      MR_Box conv2_CurCount_22;
      MR_Integer OldCount_23;
      MR_Box conv4_OldCount_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcInfoMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_CountMap_0_4;

      mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0), (MR_Word) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0), (MR_Word) (&mcov_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mcov_scalar_common_1[4]), PathPortCountMap_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_MaybeCallInfo_21, ((MR_Box) ((MR_Integer) 0)), &conv2_CurCount_22);
      MaybeCallInfo_21 = ((MR_Word) (conv3_MaybeCallInfo_21));
      CurCount_22 = ((MR_Integer) (conv2_CurCount_22));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_CountMap_0_4, ((MR_Box) (ProcLabel_20)), &conv4_OldCount_23);
      if (succeeded)
      {
        OldCount_23 = ((MR_Integer) (conv4_OldCount_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) OldCount_23 + (MR_Unsigned) CurCount_22);

        mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcLabel_20)), ((MR_Box) (Var_33)), STATE_VARIABLE_CountMap_0_4, &STATE_VARIABLE_CountMap_34_34);
      }
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ProcLabel_20)), ((MR_Box) (CurCount_22)), STATE_VARIABLE_CountMap_0_4, &STATE_VARIABLE_CountMap_34_34);
      if ((MaybeCallInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ProcInfoMap_36_36 = STATE_VARIABLE_ProcInfoMap_0_2;
      else
      {
        MR_Integer LineNumber_24 = ((MR_Integer) ((MR_hl_field(1, MaybeCallInfo_21, (MR_Integer) 0))));
        MR_Word ProcInfo_25;

        {
          ProcInfo_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcInfo_25, 0) = ((MR_Box) (FileName_19));
          MR_hl_field(0, ProcInfo_25, 1) = ((MR_Box) (LineNumber_24));
          MR_hl_field(0, ProcInfo_25, 2) = ((MR_Box) (ProcLabel_20));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mcov__mcov__type_ctor_info_proc_info_0), ((MR_Box) (ProcLabel_20)), ((MR_Box) (ProcInfo_25)), STATE_VARIABLE_ProcInfoMap_0_2, &STATE_VARIABLE_ProcInfoMap_36_36);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Assocs_13;
      next_value_of_STATE_VARIABLE_ProcInfoMap_0_2 = STATE_VARIABLE_ProcInfoMap_36_36;
      next_value_of_STATE_VARIABLE_CountMap_0_4 = STATE_VARIABLE_CountMap_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcInfoMap_0_2 = next_value_of_STATE_VARIABLE_ProcInfoMap_0_2;
      STATE_VARIABLE_CountMap_0_4 = next_value_of_STATE_VARIABLE_CountMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____label_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____label_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____module_restriction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____module_restriction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mcov____Unify____trace_counts_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mcov____Compare____trace_counts_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mcov__init(void)
{
}

void mercury__mcov__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_label_info_0);
	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_module_restriction_0);
	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_option_table_0);
	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_proc_info_0);
	MR_register_type_ctor_info(&mcov__mcov__type_ctor_info_trace_counts_list_0);
}

void mercury__mcov__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mcov__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mcov.
