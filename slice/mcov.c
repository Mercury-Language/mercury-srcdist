/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module mcov. */
/* :- implementation. */

/*
INIT mercury__mcov__init
ENDINIT
*/

#include "mcov.mih"


#include "mdbcomp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
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


static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0;

static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4];

static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0;

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1];

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1];

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1];

static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_0;

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1;

static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_2[1];

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_2;

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[2];

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1];

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2];

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[3];

static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[3];

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[7];

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[7];

static const MR_Integer mcov__mcov__functor_number_map_option_0[7];

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

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
mcov____Unify____label_info_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____option_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2);

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__267__1_2_p_0(
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word mcov__HeadVar__2_22);

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__193__1_2_p_0(
  MR_Word mcov__Modules_12,
  MR_Word mcov__HeadVar__2_34);

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov____Compare____proc_info_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov____Compare____option_table_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov____Compare____option_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____option_0_0(
  MR_Word mcov__HeadVar__2_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov____Compare____module_restriction_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov____Compare____label_info_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3);

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static void MR_CALL 
mcov__option_default_2_p_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2,
  MR_Cont mcov__cont,
  void * mcov__cont_env_ptr);

static MR_bool MR_CALL 
mcov__long_option_2_p_0(
  MR_String mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2);

static MR_bool MR_CALL 
mcov__short_option_2_p_0(
  MR_Char mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2);

static void MR_CALL 
mcov__write_tabbed_lines_3_p_0(
  MR_Word mcov__HeadVar__1_1);

static void MR_CALL 
mcov__long_usage_2_p_0(void);

static void MR_CALL 
mcov__short_usage_2_p_0(void);

static void MR_CALL 
mcov__write_path_port_for_user_3_p_0(
  MR_Word mcov__HeadVar__1_1);

static void MR_CALL 
mcov__write_label_info_3_p_0(
  MR_Word mcov__LabelInfo_4);

static void MR_CALL 
mcov__write_proc_info_3_p_0(
  MR_Word mcov__ProcInfo_4);

static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
  MR_Word mcov__ProcLabel_7,
  MR_String mcov__FileName_8,
  MR_Word mcov__PathPort_9,
  MR_Word mcov__LineNumberAndCount_10,
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17);

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3,
  MR_Box * mcov__wrapper_arg_4);

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3);

static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
  MR_Word mcov__ProcInfoMap_4,
  MR_Word mcov__HeadVar__2_2,
  MR_Word * mcov__ProcInfo_7);

static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
  MR_Box mcov__closure_arg);

static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
  MR_Word mcov__PathPort_7,
  MR_Word mcov__LineNumberAndCount_8,
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
  MR_Integer * mcov__STATE_VARIABLE_Count_17);

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3,
  MR_Box * mcov__wrapper_arg_4,
  MR_Box mcov__wrapper_arg_5,
  MR_Box * mcov__wrapper_arg_6);

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
  MR_Word * mcov__STATE_VARIABLE_CountMap_5);

static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
  MR_Word mcov__HeadVar__1_1);

static void MR_CALL 
mcov__write_coverage_test_5_p_0_5(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3);

static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_3(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2);

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static void MR_CALL 
mcov__write_coverage_test_5_p_0(
  MR_Word mcov__Detailed_6,
  MR_Word mcov__RestrictToModules_7,
  MR_Word mcov__TraceCountMap_8);

static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
  MR_Word mcov__OptionTable_5,
  MR_Word mcov__Args_6);

static void MR_CALL 
main_2_p_0_3(
  void * mcov__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box * mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2,
  MR_Cont mcov__cont,
  void * mcov__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2);


static /* final */ const MR_Box mcov_scalar_common_1[13][3];

static /* final */ const MR_Box mcov_scalar_common_2[28][2];

static /* final */ const MR_Box mcov_scalar_common_3[6][5];

static /* final */ const MR_Box mcov_scalar_common_4[1][4];

static /* final */ const MR_Box mcov_scalar_common_5[3][6];

static /* final */ const MR_Box mcov_scalar_common_6[2][9];

static /* final */ const MR_Box mcov_scalar_common_7[3][1];


/* sealed */ struct mcov__vector_common_type_8_0_s {
  const MR_String mcov__vector_common_type_8_0__vct_8_f_0;
  const MR_Integer mcov__vector_common_type_8_0__vct_8_f_1;
  const MR_Word mcov__vector_common_type_8_0__vct_8_f_2;
};

static /* final */ const struct mcov__vector_common_type_8_0_s mcov_vector_common_8[16];

/* sealed */ struct mcov__vector_common_type_9_0_s {
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_0;
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[7];



static /* final */ const MR_Box mcov_scalar_common_1[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mcov_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mcov_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mcov_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mcov_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mcov_scalar_common_1[4])),
    ((MR_Box) (&mcov_scalar_common_1[5])),
    ((MR_Box) (&mcov_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mcov_scalar_common_3[3])),
    ((MR_Box) (mcov__do_coverage_testing_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mcov_scalar_common_4[0])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mcov_scalar_common_5[1])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mcov_scalar_common_5[2])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mcov_scalar_common_6[0])),
    ((MR_Box) (mcov__collect_proc_infos_counts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_2[28][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_label_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mcov_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\tin the reports.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\tInclude information about labels in the Mercury standard library")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "--no-ignore-stdlib")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\twere specified on the command line.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\tTake options from the specified file, and handle them as if they")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "--flags <file>, --flags-file <file>")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\tBy default the output will be printed to the standard output.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\tPrint output to the file specified by the argument.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "-o <file>, --output-file <file>")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\tMultiple module options accumulate.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\tRestrict the output to the module named by the argument.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "-m <module>, --module <module>")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\tif some other code has been executed in the same procedure.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\tPrint a report for each label that has not been executed, even")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "-d, --detailed")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\tPrint the name of each trace count file as it is added to the union")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "-v, --verbose")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\twithout doing any further processing")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\tPrint help about using mcov (on the standard output) and exit")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "-\?, -h, --help")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) " --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mcov_scalar_common_3[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_label_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0)),
    ((MR_Box) (&mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_7[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct mcov__vector_common_type_8_0_s mcov_vector_common_8[16] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "module",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 2 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "help",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "detailed",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "flags",
    (MR_Integer) -1,
    (MR_Integer) 5
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "ignore-stdlib",
    (MR_Integer) 1,
    (MR_Integer) 6
  },
  /* row 13 */
  {
    (MR_String) "verbose",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_String) "flags-file",
    (MR_Integer) -1,
    (MR_Integer) 5
  },
  /* row 15 */
  {
    (MR_String) "output-file",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
};

static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[7] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_7[1])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_7[1])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_7[1])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(3), &mcov_scalar_common_2[26])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(3), &mcov_scalar_common_2[27])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_7[2])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_label_info_0
  }
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0
};

static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4] = {
  (MR_String) "label_source_file",
  (MR_String) "label_line_number",
  (MR_String) "label_proc",
  (MR_String) "label_path_port"
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0 = {
  (MR_String) "label_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mcov__mcov__field_types_label_info_0_0,
  mcov__mcov__field_names_label_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_label_info_0_0
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____label_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____label_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "label_info",
  {     mcov__mcov__du_name_ordered_label_info_0 },
  {     mcov__mcov__du_ptag_ordered_label_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_label_info_0
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_0 = {
  (MR_String) "module_restriction_none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1 = {
  (MR_String) "module_restriction_no_stdlib",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_2[1] = {
  (MR_PseudoTypeInfo) &mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_2 = {
  (MR_String) "module_restriction_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mcov__mcov__field_types_module_restriction_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[2] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_0,
  &mcov__mcov__du_functor_desc_module_restriction_0_1
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_2
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mcov__mcov__du_stag_ordered_module_restriction_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_module_restriction_0_1
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[3] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_1,
  &mcov__mcov__du_functor_desc_module_restriction_0_0,
  &mcov__mcov__du_functor_desc_module_restriction_0_2
};

static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_module_restriction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____module_restriction_0_0_10001)),
  ((MR_Box) (mcov____Compare____module_restriction_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "module_restriction",
  {     mcov__mcov__du_name_ordered_module_restriction_0 },
  {     mcov__mcov__du_ptag_ordered_module_restriction_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_module_restriction_0
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1 = {
  (MR_String) "verbose",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2 = {
  (MR_String) "detailed",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3 = {
  (MR_String) "modules",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4 = {
  (MR_String) "output_filename",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5 = {
  (MR_String) "flags_file",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6 = {
  (MR_String) "ignore_stdlib",
  (MR_Integer) 6
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[7] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_6
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[7] = {
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_1
};

static const MR_Integer mcov__mcov__functor_number_map_option_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mcov____Unify____option_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option",
  {     mcov__mcov__enum_name_ordered_option_0 },
  {     mcov__mcov__enum_value_ordered_option_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mcov__mcov__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____option_table_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_table_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3] = {
  (MR_String) "proc_source_file",
  (MR_String) "proc_line_number",
  (MR_String) "proc_proc"
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_proc_info_0_0 = {
  (MR_String) "proc_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mcov__mcov__field_types_proc_info_0_0,
  mcov__mcov__field_names_proc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_proc_info_0_0
  }
};

static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____proc_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____proc_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "proc_info",
  {     mcov__mcov__du_name_ordered_proc_info_0 },
  {     mcov__mcov__du_ptag_ordered_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_proc_info_0
};

static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_trace_counts_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____trace_counts_list_0_0_10001)),
  ((MR_Box) (mcov____Compare____trace_counts_list_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "trace_counts_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____label_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____label_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____module_restriction_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____module_restriction_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____option_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____option_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____option_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____option_table_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____option_table_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____proc_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____proc_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mcov____Unify____trace_counts_list_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
  MR_Box * mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3)
{
  {
    MR_Word mcov__conv0_HeadVar__1_1;

    {
      mcov____Compare____trace_counts_list_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__267__1_2_p_0(
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word mcov__HeadVar__2_22)
{
  {
    MR_bool mcov__succeeded;

    {
      mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[0], ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14)), ((MR_Box) (mcov__HeadVar__2_22)));
    }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__193__1_2_p_0(
  MR_Word mcov__Modules_12,
  MR_Word mcov__HeadVar__2_34)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__ProcLabelInContext_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_34, (MR_Integer) 0)));
    MR_Word mcov__Module_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 0)));
    MR_Word mcov__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_34, (MR_Integer) 1)));
    MR_String mcov__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 1)));
    MR_Word mcov__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 2)));

    {
      mcov__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (mcov__Module_50)), mcov__Modules_12);
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[3], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

    {
      mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[3], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____proc_info_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_12 = (MR_Integer) mcov__HeadVar__2_2;
    MR_Integer mcov__CastY_13 = (MR_Integer) mcov__HeadVar__3_3;

    mcov__succeeded = (mcov__CastX_12 == mcov__CastY_13);
    if (mcov__succeeded)
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mcov__V_10_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_10_10, mcov__V_4_4, mcov__V_7_7);
        }
        mcov__succeeded = (mcov__V_10_10 == (MR_Integer) 0);
        mcov__succeeded = !(mcov__succeeded);
        if (mcov__succeeded)
          *mcov__HeadVar__1_1 = mcov__V_10_10;
        else
          {
            MR_Word mcov__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_11_11, mcov__V_5_5, mcov__V_8_8);
            }
            mcov__succeeded = (mcov__V_11_11 == (MR_Integer) 0);
            mcov__succeeded = !(mcov__succeeded);
            if (mcov__succeeded)
              *mcov__HeadVar__1_1 = mcov__V_11_11;
            else
              {
                mdbcomp__prim_data____Compare____proc_label_0_0(mcov__HeadVar__1_1, mcov__V_6_6, mcov__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_9 = (MR_Integer) mcov__HeadVar__1_1;
    MR_Integer mcov__CastY_10 = (MR_Integer) mcov__HeadVar__2_2;

    mcov__succeeded = (mcov__CastX_9 == mcov__CastY_10);
    if (mcov__succeeded)
      mcov__succeeded = MR_TRUE;
    else
      {
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
        MR_String mcov__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));

        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_6_6) == 0);
        if (mcov__succeeded)
          {
            mcov__succeeded = (mcov__V_4_4 == mcov__V_7_7);
            if (mcov__succeeded)
              {
                mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_8_8);
              }
          }
      }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____option_table_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_1[3], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

    {
      mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_1[3], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____option_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__Cast_HeadVar1_4 = (MR_Integer) mcov__HeadVar__2_2;
    MR_Integer mcov__Cast_HeadVar2_5 = (MR_Integer) mcov__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mcov__HeadVar__1_1, mcov__Cast_HeadVar1_4, mcov__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mcov____Unify____option_0_0(
  MR_Word mcov__HeadVar__2_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded = (mcov__HeadVar__2_1 == mcov__HeadVar__2_2);

    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____module_restriction_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_10 = (MR_Integer) mcov__HeadVar__2_2;
    MR_Integer mcov__CastY_11 = (MR_Integer) mcov__HeadVar__3_3;

    mcov__succeeded = (mcov__CastX_10 == mcov__CastY_11);
    if (mcov__succeeded)
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mcov__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mcov__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mcov__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mcov__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mcov__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mcov__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mcov__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mcov__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mcov__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mcov__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mcov__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mcov__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mcov__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mcov__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[2], mcov__HeadVar__1_1, ((MR_Box) (mcov__V_13_13)), ((MR_Box) (mcov__V_9_9)));
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
mcov____Unify____module_restriction_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_9 = (MR_Integer) mcov__HeadVar__1_1;
    MR_Integer mcov__CastY_10 = (MR_Integer) mcov__HeadVar__2_2;

    mcov__succeeded = (mcov__CastX_9 == mcov__CastY_10);
    if (mcov__succeeded)
      mcov__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mcov__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mcov__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mcov__CastX_3 = (MR_Integer) mcov__HeadVar__1_1;
                MR_Integer mcov__CastY_4 = (MR_Integer) mcov__HeadVar__2_2;

                mcov__succeeded = (mcov__CastY_4 == mcov__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mcov__CastX_5 = (MR_Integer) mcov__HeadVar__1_1;
                MR_Integer mcov__CastY_6 = (MR_Integer) mcov__HeadVar__2_2;

                mcov__succeeded = (mcov__CastY_6 == mcov__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mcov__TypeInfo_11_11;
            MR_Word mcov__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mcov__V_8_8;

            mcov__succeeded = ((MR_tag((MR_Word) mcov__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mcov__succeeded)
              {
                mcov__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));
                mcov__TypeInfo_11_11 = (MR_Word) &mcov_scalar_common_2[2];
                {
                  mcov__succeeded = mercury__builtin__unify_2_p_0(mcov__TypeInfo_11_11, ((MR_Box) (mcov__V_7_7)), ((MR_Box) (mcov__V_8_8)));
                }
              }
          }
          break;
      }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov____Compare____label_info_0_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2,
  MR_Word mcov__HeadVar__3_3)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_15 = (MR_Integer) mcov__HeadVar__2_2;
    MR_Integer mcov__CastY_16 = (MR_Integer) mcov__HeadVar__3_3;

    mcov__succeeded = (mcov__CastX_15 == mcov__CastY_16);
    if (mcov__succeeded)
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mcov__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));
        MR_String mcov__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mcov__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mcov__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mcov__V_12_12;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_12_12, mcov__V_4_4, mcov__V_8_8);
        }
        mcov__succeeded = (mcov__V_12_12 == (MR_Integer) 0);
        mcov__succeeded = !(mcov__succeeded);
        if (mcov__succeeded)
          *mcov__HeadVar__1_1 = mcov__V_12_12;
        else
          {
            MR_Word mcov__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_13_13, mcov__V_5_5, mcov__V_9_9);
            }
            mcov__succeeded = (mcov__V_13_13 == (MR_Integer) 0);
            mcov__succeeded = !(mcov__succeeded);
            if (mcov__succeeded)
              *mcov__HeadVar__1_1 = mcov__V_13_13;
            else
              {
                MR_Word mcov__V_14_14;

                {
                  mdbcomp__prim_data____Compare____proc_label_0_0(&mcov__V_14_14, mcov__V_6_6, mcov__V_10_10);
                }
                mcov__succeeded = (mcov__V_14_14 == (MR_Integer) 0);
                mcov__succeeded = !(mcov__succeeded);
                if (mcov__succeeded)
                  *mcov__HeadVar__1_1 = mcov__V_14_14;
                else
                  {
                    mdbcomp__trace_counts____Compare____path_port_0_0(mcov__HeadVar__1_1, mcov__V_7_7, mcov__V_11_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__CastX_11 = (MR_Integer) mcov__HeadVar__1_1;
    MR_Integer mcov__CastY_12 = (MR_Integer) mcov__HeadVar__2_2;

    mcov__succeeded = (mcov__CastX_11 == mcov__CastY_12);
    if (mcov__succeeded)
      mcov__succeeded = MR_TRUE;
    else
      {
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 3)));
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));

        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_7_7) == 0);
        if (mcov__succeeded)
          {
            mcov__succeeded = (mcov__V_4_4 == mcov__V_8_8);
            if (mcov__succeeded)
              {
                {
                  mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_9_9);
                }
                if (mcov__succeeded)
                  {
                    mcov__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mcov__V_6_6, mcov__V_10_10);
                  }
              }
          }
      }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__option_default_2_p_0(
  MR_Word * mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2,
  MR_Cont mcov__cont,
  void * mcov__cont_env_ptr)
{
  {
    MR_bool mcov__succeeded;

    {
      MR_Integer mcov__slot_0 = (MR_Integer) 0;

      do
        {
          *mcov__HeadVar__1_1 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_0;
          *mcov__HeadVar__2_2 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_1;
          {
            mcov__cont(mcov__cont_env_ptr);
          }
          mcov__slot_0 = (mcov__slot_0 + (MR_Integer) 1);
        }
      while ((mcov__slot_0 < (MR_Integer) 7));
    }
  }
}

static MR_bool MR_CALL 
mcov__long_option_2_p_0(
  MR_String mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__slot_0;
    MR_String mcov__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    mcov__slot_0 = ((MR_hash_string4(mcov__HeadVar__1_1)) & (MR_Integer) 15);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        mcov__str_1 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_0;
        /* did we find a match? */
        if ((((mcov__str_1 != NULL)) && ((strcmp(mcov__str_1, mcov__HeadVar__1_1) == 0))))
          {
            /* we found a match; look up the results */
            *mcov__HeadVar__2_2 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_2;
            mcov__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            mcov__slot_0 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_1;
          }
      }
    while ((mcov__slot_0 >= (MR_Integer) 0));
    mcov__succeeded = MR_FALSE;
  label_0:;
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__short_option_2_p_0(
  MR_Char mcov__HeadVar__1_1,
  MR_Word * mcov__HeadVar__2_2)
{
  {
    MR_bool mcov__succeeded;

    switch (mcov__HeadVar__1_1) {
      default:
        mcov__succeeded = MR_FALSE;
        break;
      case (MR_Char) 63:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 0;
          mcov__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 100:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 2;
          mcov__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 104:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 0;
          mcov__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 109:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 3;
          mcov__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 111:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 4;
          mcov__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mcov__HeadVar__2_2 = (MR_Integer) 1;
          mcov__succeeded = MR_TRUE;
        }
        break;
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__write_tabbed_lines_3_p_0(
  MR_Word mcov__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mcov__succeeded;

        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mcov__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mcov__Strs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              mercury__io__write_string_3_p_0(mcov__Str_7);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Strs_8;

              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mcov__long_usage_2_p_0(void)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__Version_4;
    MR_String mcov__FullArch_5;
    MR_Word mcov__V_31_31;
    MR_String mcov__Str_83;
    MR_Word mcov__Strs_84;
    MR_String mcov__Str_101;
    MR_Word mcov__Strs_102;
    MR_String mcov__Str_119;
    MR_Word mcov__Strs_120;
    MR_String mcov__Str_137;
    MR_Word mcov__Strs_138;
    MR_String mcov__Str_155;
    MR_Word mcov__Strs_156;
    MR_String mcov__Str_173;
    MR_Word mcov__Strs_174;
    MR_String mcov__Str_191;
    MR_Word mcov__Strs_192;

    {
      mercury__library__version_2_p_0(&mcov__Version_4, &mcov__FullArch_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Name: mcov -- Mercury Coverage Testing Tool, version ");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Version_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
    {
      mercury__io__write_string_3_p_0(mcov__FullArch_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2015 The Mercury team\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Usage: mcov [<options>] <arguments>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tArguments are assumed to Mercury trace count files.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
    mcov__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_2[23]);
    mcov__Str_83 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__V_31_31, (MR_Integer) 0)));
    mcov__Strs_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__V_31_31, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_83);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_101 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_84, (MR_Integer) 0)));
    mcov__Strs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_84, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_101);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_119 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_102, (MR_Integer) 0)));
    mcov__Strs_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_102, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_119);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_137 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_120, (MR_Integer) 0)));
    mcov__Strs_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_120, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_137);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_155 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_138, (MR_Integer) 0)));
    mcov__Strs_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_138, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_155);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_173 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_156, (MR_Integer) 0)));
    mcov__Strs_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_156, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_173);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mcov__Str_191 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_174, (MR_Integer) 0)));
    mcov__Strs_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_174, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
    {
      mercury__io__write_string_3_p_0(mcov__Str_191);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mcov__write_tabbed_lines_3_p_0(mcov__Strs_192);
    }
  }
}

static void MR_CALL 
mcov__short_usage_2_p_0(void)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__ProgName_4;
    MR_String mcov__Version_5;
    MR_String mcov__FullArch_6;
    MR_Word mcov__V_11_11;
    MR_Word mcov__V_14_14;
    MR_Word mcov__V_15_15;
    MR_Word mcov__V_17_17;
    MR_Word mcov__V_18_18;
    MR_Word mcov__V_20_20;
    MR_Word mcov__V_22_22;
    MR_Word mcov__V_24_24;
    MR_Word mcov__V_26_26;
    MR_Word mcov__V_27_27;
    MR_Word mcov__V_29_29;
    MR_Word mcov__V_31_31;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mcov", &mcov__ProgName_4);
    }
    {
      mercury__library__version_2_p_0(&mcov__Version_5, &mcov__FullArch_6);
    }
    {
      mcov__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_31_31, 0) = ((MR_Box) (mcov__ProgName_4));
      MR_hl_field(MR_mktag(1), mcov__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[25])));
    }
    {
      mcov__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_29_29, 0) = ((MR_Box) ((MR_String) "Use \140"));
      MR_hl_field(MR_mktag(1), mcov__V_29_29, 1) = ((MR_Box) (mcov__V_31_31));
    }
    {
      mcov__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_27_27, 0) = ((MR_Box) ((MR_String) " [<options>] [<files>]\n"));
      MR_hl_field(MR_mktag(1), mcov__V_27_27, 1) = ((MR_Box) (mcov__V_29_29));
    }
    {
      mcov__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_26_26, 0) = ((MR_Box) (mcov__ProgName_4));
      MR_hl_field(MR_mktag(1), mcov__V_26_26, 1) = ((MR_Box) (mcov__V_27_27));
    }
    {
      mcov__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_24_24, 0) = ((MR_Box) ((MR_String) "Usage: "));
      MR_hl_field(MR_mktag(1), mcov__V_24_24, 1) = ((MR_Box) (mcov__V_26_26));
    }
    {
      mcov__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_22_22, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2015 The Mercury team\n"));
      MR_hl_field(MR_mktag(1), mcov__V_22_22, 1) = ((MR_Box) (mcov__V_24_24));
    }
    {
      mcov__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_20_20, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n"));
      MR_hl_field(MR_mktag(1), mcov__V_20_20, 1) = ((MR_Box) (mcov__V_22_22));
    }
    {
      mcov__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_18_18, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), mcov__V_18_18, 1) = ((MR_Box) (mcov__V_20_20));
    }
    {
      mcov__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_17_17, 0) = ((MR_Box) (mcov__FullArch_6));
      MR_hl_field(MR_mktag(1), mcov__V_17_17, 1) = ((MR_Box) (mcov__V_18_18));
    }
    {
      mcov__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_15_15, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), mcov__V_15_15, 1) = ((MR_Box) (mcov__V_17_17));
    }
    {
      mcov__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_14_14, 0) = ((MR_Box) (mcov__Version_5));
      MR_hl_field(MR_mktag(1), mcov__V_14_14, 1) = ((MR_Box) (mcov__V_15_15));
    }
    {
      mcov__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__V_11_11, 0) = ((MR_Box) ((MR_String) "Mercury Coverage Testing Tool, version "));
      MR_hl_field(MR_mktag(1), mcov__V_11_11, 1) = ((MR_Box) (mcov__V_14_14));
    }
    {
      mercury__io__write_strings_3_p_0(mcov__V_11_11);
    }
  }
}

static void MR_CALL 
mcov__write_path_port_for_user_3_p_0(
  MR_Word mcov__HeadVar__1_1)
{
  {
    MR_bool mcov__succeeded;

    switch (MR_tag((MR_Word) mcov__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mcov__Port_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mcov__PortStr_6;

          {
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_6, mcov__Port_4);
          }
          {
            mercury__io__write_string_3_p_0(mcov__PortStr_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mcov__Path_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mcov__V_14_14;
          MR_Word mcov__V_17_17;
          MR_String mcov__V_18_18;

          {
            mcov__V_18_18 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_10);
          }
          {
            mcov__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__V_17_17, 0) = ((MR_Box) (mcov__V_18_18));
            MR_hl_field(MR_mktag(1), mcov__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[24])));
          }
          {
            mcov__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__V_14_14, 0) = ((MR_Box) ((MR_String) "<"));
            MR_hl_field(MR_mktag(1), mcov__V_14_14, 1) = ((MR_Box) (mcov__V_17_17));
          }
          {
            mercury__io__write_strings_3_p_0(mcov__V_14_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mcov__Port_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mcov__Path_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__HeadVar__1_1, (MR_Integer) 1)));
          MR_String mcov__PortStr_25;
          MR_Word mcov__V_28_28;
          MR_Word mcov__V_30_30;
          MR_Word mcov__V_32_32;
          MR_String mcov__V_33_33;

          {
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_25, mcov__Port_22);
          }
          {
            mcov__V_33_33 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_23);
          }
          {
            mcov__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__V_32_32, 0) = ((MR_Box) (mcov__V_33_33));
            MR_hl_field(MR_mktag(1), mcov__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[24])));
          }
          {
            mcov__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__V_30_30, 0) = ((MR_Box) ((MR_String) " <"));
            MR_hl_field(MR_mktag(1), mcov__V_30_30, 1) = ((MR_Box) (mcov__V_32_32));
          }
          {
            mcov__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__V_28_28, 0) = ((MR_Box) (mcov__PortStr_25));
            MR_hl_field(MR_mktag(1), mcov__V_28_28, 1) = ((MR_Box) (mcov__V_30_30));
          }
          {
            mercury__io__write_strings_3_p_0(mcov__V_28_28);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mcov__write_label_info_3_p_0(
  MR_Word mcov__LabelInfo_4)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 0)));
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 1)));
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 2)));
    MR_Word mcov__PathPort_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 3)));
    MR_String mcov__V_32_32;
    MR_Word mcov__V_38_38;

    {
      mercury__io__write_string_3_p_0(mcov__FileName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    mcov__V_38_38 = (MR_Word) &mcov_scalar_common_7[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_38_38, mcov__LineNumber_7, &mcov__V_32_32);
    }
    {
      mercury__io__write_string_3_p_0(mcov__V_32_32);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    if (((MR_tag((MR_Word) mcov__ProcLabel_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mcov__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 1)));
        MR_String mcov__Name_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 3)));
        MR_Integer mcov__Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 4)));
        MR_Integer mcov__Mode_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 5)));
        MR_String mcov__PredOrFuncStr_50;
        MR_String mcov__QuotedName_51;
        MR_String mcov__V_79_79;
        MR_String mcov__V_88_88;
        MR_Word mcov___DefModuleSym_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 0)));
        MR_Word mcov___DeclModuleSym_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 2)));

        switch (mcov__PredOrFunc_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mcov__PredOrFuncStr_50 = (MR_String) "func";
            break;
          case (MR_Integer) 0:
            mcov__PredOrFuncStr_50 = (MR_String) "pred";
            break;
        }
        {
          mcov__QuotedName_51 = mercury__term_io__quoted_atom_1_f_0(mcov__Name_47);
        }
        {
          mercury__io__write_string_3_p_0(mcov__PredOrFuncStr_50);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__io__write_string_3_p_0(mcov__QuotedName_51);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_38_38, mcov__Arity_48, &mcov__V_79_79);
        }
        {
          mercury__io__write_string_3_p_0(mcov__V_79_79);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_38_38, mcov__Mode_49, &mcov__V_88_88);
        }
        {
          mercury__io__write_string_3_p_0(mcov__V_88_88);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/3", (MR_String) "special_pred");
          return;
        }
      }
    {
      mcov__write_path_port_for_user_3_p_0(mcov__PathPort_9);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
mcov__write_proc_info_3_p_0(
  MR_Word mcov__ProcInfo_4)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 0)));
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 1)));
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 2)));
    MR_String mcov__V_30_30;
    MR_Word mcov__V_36_36;

    {
      mercury__io__write_string_3_p_0(mcov__FileName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    mcov__V_36_36 = (MR_Word) &mcov_scalar_common_7[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_36_36, mcov__LineNumber_7, &mcov__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0(mcov__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
    if (((MR_tag((MR_Word) mcov__ProcLabel_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mcov__PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 1)));
        MR_String mcov__Name_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 3)));
        MR_Integer mcov__Arity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 4)));
        MR_Integer mcov__Mode_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 5)));
        MR_String mcov__PredOrFuncStr_48;
        MR_String mcov__QuotedName_49;
        MR_String mcov__V_77_77;
        MR_String mcov__V_86_86;
        MR_Word mcov___DefModuleSym_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 0)));
        MR_Word mcov___DeclModuleSym_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 2)));

        switch (mcov__PredOrFunc_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mcov__PredOrFuncStr_48 = (MR_String) "func";
            break;
          case (MR_Integer) 0:
            mcov__PredOrFuncStr_48 = (MR_String) "pred";
            break;
        }
        {
          mcov__QuotedName_49 = mercury__term_io__quoted_atom_1_f_0(mcov__Name_45);
        }
        {
          mercury__io__write_string_3_p_0(mcov__PredOrFuncStr_48);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        {
          mercury__io__write_string_3_p_0(mcov__QuotedName_49);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_36_36, mcov__Arity_46, &mcov__V_77_77);
        }
        {
          mercury__io__write_string_3_p_0(mcov__V_77_77);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_36_36, mcov__Mode_47, &mcov__V_86_86);
        }
        {
          mercury__io__write_string_3_p_0(mcov__V_86_86);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/3", (MR_String) "special_pred");
          return;
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
  MR_Word mcov__ProcLabel_7,
  MR_String mcov__FileName_8,
  MR_Word mcov__PathPort_9,
  MR_Word mcov__LineNumberAndCount_10,
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 0)));
    MR_Integer mcov__Count_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 1)));
    MR_Integer mcov___NumTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 2)));

    mcov__succeeded = (mcov__Count_13 == (MR_Integer) 0);
    if (mcov__succeeded)
      {
        if (((MR_tag((MR_Word) mcov__ProcLabel_7)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mcov__DefModuleSym_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 0)));
            MR_Word mcov__DeclModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 2)));
            MR_Word mcov__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 1)));
            MR_String mcov__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 3)));
            MR_Integer mcov__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 4)));
            MR_Integer mcov__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_20, mcov__DeclModuleSym_22);
            }
          }
        else
          {
            MR_Word mcov__TypeModuleSym_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 2)));
            MR_Word mcov__DefModuleSym_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 0)));
            MR_Word mcov__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 1)));
            MR_String mcov__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 3)));
            MR_Integer mcov__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 4)));
            MR_Integer mcov__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_31, mcov__TypeModuleSym_27);
            }
          }
      }
    if (mcov__succeeded)
      {
        MR_Word mcov__LabelInfo_15;

        {
          mcov__LabelInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 0) = ((MR_Box) (mcov__FileName_8));
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 1) = ((MR_Box) (mcov__LineNumber_12));
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 2) = ((MR_Box) (mcov__ProcLabel_7));
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 3) = ((MR_Box) (mcov__PathPort_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LabelInfo_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_16));
        }
      }
    else
      *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_16;
  }
}

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3,
  MR_Box * mcov__wrapper_arg_4)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17;

    {
      mcov__label_process_path_port_count_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))), ((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17);
    }
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17));
  }
}

static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mcov__succeeded;

        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mcov__STATE_VARIABLE_ZeroLabelInfos_3 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_2;
        else
          {
            MR_Word mcov__Assoc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mcov__Assocs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mcov__LabelFilename_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 0)));
            MR_Word mcov__PathPortCountMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 1)));
            MR_String mcov__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 1)));
            MR_Word mcov__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 2)));
            MR_Word mcov__V_17_17;
            MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;
            MR_Word mcov___ModuleNameSym_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 0)));
            MR_Box mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18;

            {
              mcov__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 0) = ((MR_Box) (&mcov_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 1) = ((MR_Box) (mcov__collect_zero_count_local_labels_3_p_0_1));
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 3) = ((MR_Box) (mcov__ProcLabel_14));
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 4) = ((MR_Box) (mcov__FileName_13));
            }
            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[1], mcov__V_17_17, mcov__PathPortCountMap_11, ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_2)), &mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            }
            mcov__STATE_VARIABLE_ZeroLabelInfos_18_18 = ((MR_Word) mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            /* direct tailcall eliminated */
            {
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_8;
              MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;

              mcov__STATE_VARIABLE_ZeroLabelInfos_0_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2;
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
  MR_Word mcov__ProcInfoMap_4,
  MR_Word mcov__HeadVar__2_2,
  MR_Word * mcov__ProcInfo_7)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__TypeCtorInfo_8_8;
    MR_Word mcov__TypeCtorInfo_9_9;
    MR_Word mcov__ProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer mcov__Count_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
    MR_Box mcov__conv0_ProcInfo_7;

    mcov__succeeded = (mcov__Count_6 == (MR_Integer) 0);
    if (mcov__succeeded)
      {
        if (((MR_tag((MR_Word) mcov__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mcov__DefModuleSym_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 0)));
            MR_Word mcov__DeclModuleSym_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 2)));
            MR_Word mcov__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 1)));
            MR_String mcov__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 3)));
            MR_Integer mcov__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 4)));
            MR_Integer mcov__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_11, mcov__DeclModuleSym_13);
            }
          }
        else
          {
            MR_Word mcov__TypeModuleSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 2)));
            MR_Word mcov__DefModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 0)));
            MR_Word mcov__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 1)));
            MR_String mcov__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 3)));
            MR_Integer mcov__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 4)));
            MR_Integer mcov__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_22, mcov__TypeModuleSym_18);
            }
          }
        if (mcov__succeeded)
          {
            mcov__TypeCtorInfo_8_8 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
            mcov__TypeCtorInfo_9_9 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
            {
              mercury__map__lookup_3_p_0(mcov__TypeCtorInfo_8_8, mcov__TypeCtorInfo_9_9, mcov__ProcInfoMap_4, ((MR_Box) (mcov__ProcLabel_5)), &mcov__conv0_ProcInfo_7);
            }
            *mcov__ProcInfo_7 = ((MR_Word) mcov__conv0_ProcInfo_7);
            mcov__succeeded = MR_TRUE;
          }
      }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
  MR_Box mcov__closure_arg)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__IntroducedFrom__pred__proc_process_path_port_count__267__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
  MR_Word mcov__PathPort_7,
  MR_Word mcov__LineNumberAndCount_8,
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
  MR_Integer * mcov__STATE_VARIABLE_Count_17)
{
  {
    MR_bool mcov__succeeded;
    MR_Integer mcov__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 0)));
    MR_Integer mcov__CurCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 1)));
    MR_Integer mcov___NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 2)));
    MR_Word mcov__V_19_19;

    *mcov__STATE_VARIABLE_Count_17 = (mcov__STATE_VARIABLE_Count_0_16 + mcov__CurCount_12);
    mcov__succeeded = ((MR_tag((MR_Word) mcov__PathPort_7)) == (MR_mktag((MR_Integer) 0)));
    if (mcov__succeeded)
      {
        mcov__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_7, (MR_Integer) 0)));
        mcov__succeeded = (mcov__V_19_19 == (MR_Integer) 0);
      }
    if (mcov__succeeded)
      {
        MR_Word mcov__V_20_20;

        {
          mcov__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 0) = ((MR_Box) (&mcov_scalar_common_3[5]));
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 1) = ((MR_Box) (mcov__proc_process_path_port_count_6_p_0_1));
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 3) = ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14));
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__require_2_p_0(mcov__V_20_20, (MR_String) "proc_process_path_port_count: duplicate call port:");
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mcov__STATE_VARIABLE_MaybeCallInfo_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LineNumber_11));
        }
      }
    else
      *mcov__STATE_VARIABLE_MaybeCallInfo_15 = mcov__STATE_VARIABLE_MaybeCallInfo_0_14;
  }
}

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box mcov__wrapper_arg_3,
  MR_Box * mcov__wrapper_arg_4,
  MR_Box mcov__wrapper_arg_5,
  MR_Box * mcov__wrapper_arg_6)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15;
    MR_Integer mcov__conv0_STATE_VARIABLE_Count_17;

    {
      mcov__proc_process_path_port_count_6_p_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15, ((MR_Integer) mcov__wrapper_arg_5), &mcov__conv0_STATE_VARIABLE_Count_17);
    }
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15));
    *mcov__wrapper_arg_6 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_Count_17));
  }
}

static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
  MR_Word * mcov__STATE_VARIABLE_CountMap_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mcov__succeeded;

        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mcov__STATE_VARIABLE_CountMap_5 = mcov__STATE_VARIABLE_CountMap_0_4;
            *mcov__STATE_VARIABLE_ProcInfoMap_3 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
          }
        else
          {
            MR_Word mcov__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word mcov__Assoc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mcov__Assocs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mcov__LabelFilename_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 0)));
            MR_Word mcov__PathPortCountMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 1)));
            MR_String mcov__FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 1)));
            MR_Word mcov__ProcLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 2)));
            MR_Word mcov__MaybeCallInfo_21;
            MR_Integer mcov__CurCount_22;
            MR_Word mcov__STATE_VARIABLE_CountMap_34_34;
            MR_Word mcov__STATE_VARIABLE_ProcInfoMap_36_36;
            MR_Word mcov___ModuleNameSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 0)));
            MR_Box mcov__conv3_MaybeCallInfo_21;
            MR_Box mcov__conv2_CurCount_22;
            MR_Integer mcov__OldCount_23;
            MR_Box mcov__conv4_OldCount_23;

            {
              mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[0], mcov__TypeCtorInfo_48_48, (MR_Word) &mcov_scalar_common_1[12], mcov__PathPortCountMap_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mcov__conv3_MaybeCallInfo_21, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_CurCount_22);
            }
            mcov__MaybeCallInfo_21 = ((MR_Word) mcov__conv3_MaybeCallInfo_21);
            mcov__CurCount_22 = ((MR_Integer) mcov__conv2_CurCount_22);
            {
              mcov__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, mcov__STATE_VARIABLE_CountMap_0_4, ((MR_Box) (mcov__ProcLabel_20)), &mcov__conv4_OldCount_23);
            }
            if (mcov__succeeded)
              {
                mcov__OldCount_23 = ((MR_Integer) mcov__conv4_OldCount_23);
                mcov__succeeded = MR_TRUE;
              }
            if (mcov__succeeded)
              {
                MR_Integer mcov__V_33_33 = (mcov__OldCount_23 + mcov__CurCount_22);

                {
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__V_33_33)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
              }
            else
              {
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__CurCount_22)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
              }
            if ((mcov__MaybeCallInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mcov__STATE_VARIABLE_ProcInfoMap_36_36 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
            else
              {
                MR_Integer mcov__LineNumber_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__MaybeCallInfo_21, (MR_Integer) 0)));
                MR_Word mcov__ProcInfo_25;

                {
                  mcov__ProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 0) = ((MR_Box) (mcov__FileName_19));
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 1) = ((MR_Box) (mcov__LineNumber_24));
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 2) = ((MR_Box) (mcov__ProcLabel_20));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__ProcInfo_25)), mcov__STATE_VARIABLE_ProcInfoMap_0_2, &mcov__STATE_VARIABLE_ProcInfoMap_36_36);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_13;
              MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2 = mcov__STATE_VARIABLE_ProcInfoMap_36_36;
              MR_Word mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4 = mcov__STATE_VARIABLE_CountMap_34_34;

              mcov__STATE_VARIABLE_CountMap_0_4 = mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4;
              mcov__STATE_VARIABLE_ProcInfoMap_0_2 = mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2;
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
  MR_Word mcov__HeadVar__1_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__ProcLabelInContext_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mcov__Module_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 0)));
    MR_Word mcov__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mcov__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 1)));
    MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 2)));
    MR_String mcov__V_7_7;

    {
      mcov__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(mcov__Module_4, &mcov__V_7_7);
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__write_coverage_test_5_p_0_5(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__write_label_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__write_proc_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_3(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv0_ProcInfo_7;

    {
      mcov__succeeded = mcov__is_zero_count_local_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1), &mcov__conv0_ProcInfo_7);
    }
    if (mcov__succeeded)
      {
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_ProcInfo_7));
        mcov__succeeded = MR_TRUE;
      }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__IntroducedFrom__pred__write_coverage_test__193__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__in_stdlib_module_1_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__write_coverage_test_5_p_0(
  MR_Word mcov__Detailed_6,
  MR_Word mcov__RestrictToModules_7,
  MR_Word mcov__TraceCountMap_8)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__TraceCounts0_10;
    MR_Word mcov__TraceCounts_11;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mcov_scalar_common_1[0], mcov__TraceCountMap_8, &mcov__TraceCounts0_10);
    }
    switch (MR_tag((MR_Word) mcov__RestrictToModules_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mcov__RestrictToModules_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mcov__TraceCounts_11 = mcov__TraceCounts0_10;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__list__negated_filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], (MR_Word) &mcov_scalar_common_1[9], mcov__TraceCounts0_10, &mcov__TraceCounts_11);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mcov__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__RestrictToModules_7, (MR_Integer) 0)));
          MR_Word mcov__V_19_19;

          {
            mcov__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 0) = ((MR_Box) (&mcov_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_2));
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 3) = ((MR_Box) (mcov__Modules_12));
          }
          {
            mercury__list__filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], mcov__V_19_19, mcov__TraceCounts0_10, &mcov__TraceCounts_11);
          }
        }
        break;
    }
    switch (mcov__Detailed_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mcov__TypeCtorInfo_37_37;
          MR_Word mcov__TypeCtorInfo_11_55 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
          MR_Word mcov__TypeCtorInfo_12_56 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
          MR_Word mcov__TypeCtorInfo_13_57;
          MR_Word mcov__ZeroCountProcs_13;
          MR_Word mcov__SortedZeroCountProcs_14;
          MR_Word mcov__ProcInfoMap_49;
          MR_Word mcov__CountMap_50;
          MR_Word mcov__CountList_51;
          MR_Word mcov__V_52_52;
          MR_Word mcov__V_53_53;
          MR_Word mcov__V_54_54;
          MR_Box mcov__conv1_STATE_VARIABLE_IO_18;

          {
            mcov__V_52_52 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_12_56);
          }
          mcov__TypeCtorInfo_13_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            mcov__V_53_53 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_13_57);
          }
          {
            mcov__collect_proc_infos_counts_5_p_0(mcov__TraceCounts_11, mcov__V_52_52, &mcov__ProcInfoMap_49, mcov__V_53_53, &mcov__CountMap_50);
          }
          {
            mercury__map__to_assoc_list_2_p_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_13_57, mcov__CountMap_50, &mcov__CountList_51);
          }
          {
            mcov__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 0) = ((MR_Box) (&mcov_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_3));
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 3) = ((MR_Box) (mcov__ProcInfoMap_49));
          }
          {
            mercury__list__filter_map_3_p_0((MR_Word) &mcov_scalar_common_1[2], mcov__TypeCtorInfo_12_56, mcov__V_54_54, mcov__CountList_51, &mcov__ZeroCountProcs_13);
          }
          mcov__TypeCtorInfo_37_37 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
          {
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_37_37, mcov__ZeroCountProcs_13, &mcov__SortedZeroCountProcs_14);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Unexecuted procedures:\n\n");
          }
          {
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_37_37, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[10], mcov__SortedZeroCountProcs_14, ((MR_Box) ((MR_Integer) 0)), &mcov__conv1_STATE_VARIABLE_IO_18);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mcov__TypeCtorInfo_42_42;
          MR_Word mcov__ZeroCountLabels_15;
          MR_Word mcov__SortedZeroCountLabels_16;
          MR_Box mcov__conv2_STATE_VARIABLE_IO_18;

          {
            mcov__collect_zero_count_local_labels_3_p_0(mcov__TraceCounts_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mcov__ZeroCountLabels_15);
          }
          mcov__TypeCtorInfo_42_42 = (MR_Word) &mcov__mcov__type_ctor_info_label_info_0;
          {
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_42_42, mcov__ZeroCountLabels_15, &mcov__SortedZeroCountLabels_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Unexecuted labels:\n\n");
          }
          {
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_42_42, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[11], mcov__SortedZeroCountLabels_16, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_STATE_VARIABLE_IO_18);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_Box mcov__wrapper_arg_2;
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv0_HeadVar__2_2;

    {
      mcov__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) mcov__wrapper_arg_1));
    }
    mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_HeadVar__2_2));
    return mcov__wrapper_arg_2;
  }
}

static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
  MR_Word mcov__OptionTable_5,
  MR_Word mcov__Args_6)
{
  {
    MR_bool mcov__succeeded;

    if ((mcov__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mcov__short_usage_2_p_0();
      }
    else
      {
        MR_Word mcov__TypeCtorInfo_63_63 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
        MR_Word mcov__Verbose_10;
        MR_Word mcov__FileTypes_12;
        MR_Word mcov__TraceCounts_13;
        MR_Word mcov__MaybeReadError_14;
        MR_Word mcov__StdErr_15;
        MR_Integer mcov___NumTests_11;

        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 1)), &mcov__Verbose_10);
        }
        {
          mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mcov__Verbose_10, mcov__Args_6, &mcov___NumTests_11, &mcov__FileTypes_12, &mcov__TraceCounts_13, &mcov__MaybeReadError_14);
        }
        {
          mercury__io__stderr_stream_3_p_0(&mcov__StdErr_15);
        }
        if ((mcov__MaybeReadError_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mcov__FileTypeList_17;
            MR_Word mcov__Detailed_21;
            MR_Word mcov__Modules_22;
            MR_Word mcov__RestrictToModules_24;
            MR_String mcov__OutputFile_28;
            MR_Word mcov__BaseType_18;
            MR_Word mcov__V_38_38;
            MR_Word mcov__V_39_39;

            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mcov__FileTypes_12, &mcov__FileTypeList_17);
            }
            mcov__succeeded = ((MR_tag((MR_Word) mcov__FileTypeList_17)) == (MR_mktag((MR_Integer) 1)));
            if (mcov__succeeded)
              {
                mcov__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_17, (MR_Integer) 0)));
                mcov__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_17, (MR_Integer) 1)));
                mcov__succeeded = (mcov__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mcov__succeeded)
                  {
                    mcov__succeeded = ((MR_tag((MR_Word) mcov__V_38_38)) == (MR_mktag((MR_Integer) 0)));
                    if (mcov__succeeded)
                      mcov__BaseType_18 = (MR_Word) MR_body(((MR_Word) mcov__V_38_38), (MR_Integer) 0);
                  }
              }
            if (mcov__succeeded)
              {
                MR_Word mcov__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__BaseType_18, (MR_Integer) 0)));
                MR_String mcov___Program_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__BaseType_18, (MR_Integer) 1)));

                switch (mcov__Kind_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Warning: the original trace count files did not include all labels.\n");
                      }
                    }
                    break;
                }
              }
            else
              {
                {
                  mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Warning: reporting on a mixture of trace file types and/or programs.\n");
                }
              }
            {
              mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 2)), &mcov__Detailed_21);
            }
            {
              mercury__getopt_io__lookup_accumulating_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 3)), &mcov__Modules_22);
            }
            if ((mcov__Modules_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mcov__IgnoreStdLib_23;

                {
                  mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 6)), &mcov__IgnoreStdLib_23);
                }
                switch (mcov__IgnoreStdLib_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
              }
            else
              {
                MR_Word mcov__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
                MR_Word mcov__ModuleSyms_27;
                MR_Word mcov__V_47_47;

                {
                  mcov__ModuleSyms_27 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mcov__TypeCtorInfo_66_66, (MR_Word) &mcov_scalar_common_1[8], mcov__Modules_22);
                }
                {
                  mcov__V_47_47 = mercury__set__list_to_set_1_f_0(mcov__TypeCtorInfo_66_66, mcov__ModuleSyms_27);
                }
                {
                  mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mcov__RestrictToModules_24, 0) = ((MR_Box) (mcov__V_47_47));
                }
              }
            {
              mercury__getopt_io__lookup_string_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 4)), &mcov__OutputFile_28);
            }
            mcov__succeeded = (strcmp(mcov__OutputFile_28, (MR_String) "") == 0);
            if (mcov__succeeded)
              {
                mcov__write_coverage_test_5_p_0(mcov__Detailed_21, mcov__RestrictToModules_24, mcov__TraceCounts_13);
              }
            else
              {
                MR_Word mcov__OpenRes_29;

                {
                  mercury__io__tell_4_p_0(mcov__OutputFile_28, &mcov__OpenRes_29);
                }
                if ((mcov__OpenRes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    mcov__write_coverage_test_5_p_0(mcov__Detailed_21, mcov__RestrictToModules_24, mcov__TraceCounts_13);
                  }
                else
                  {
                    MR_Word mcov__OpenError_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__OpenRes_29, (MR_Integer) 0)));
                    MR_String mcov__OpenErrorMsg_31;

                    {
                      mercury__io__error_message_2_p_0(mcov__OpenError_30, &mcov__OpenErrorMsg_31);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Error opening file \140");
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, mcov__OutputFile_28);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "\': ");
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, mcov__OpenErrorMsg_31);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "\n");
                    }
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                  }
              }
          }
        else
          {
            MR_String mcov__ReadErrorMsg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__MaybeReadError_14, (MR_Integer) 0)));
            MR_Word mcov__Stderr_80;

            {
              mercury__io__stderr_stream_3_p_0(&mcov__Stderr_80);
            }
            {
              mercury__io__write_string_4_p_0(mcov__Stderr_80, mcov__ReadErrorMsg_16);
            }
            {
              mercury__io__write_string_4_p_0(mcov__Stderr_80, (MR_String) "\n");
            }
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
      }
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mcov__env_ptr_arg)
{
  {
    struct mcov__main_2_p_0_4_env_0_s * mcov__env_ptr = (struct mcov__main_2_p_0_4_env_0_s *) mcov__env_ptr_arg;

    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont)((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box * mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2,
  MR_Cont mcov__cont,
  void * mcov__cont_env_ptr)
{
  {
    struct mcov__main_2_p_0_4_env_0_s mcov__env;

    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_1 = mcov__wrapper_arg_1;
    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_2 = mcov__wrapper_arg_2;
    (mcov__env).mcov__main_2_p_0_4_env_0__cont = mcov__cont;
    (mcov__env).mcov__main_2_p_0_4_env_0__cont_env_ptr = mcov__cont_env_ptr;
    {
      MR_Box mcov__closure = mcov__closure_arg;

      {
        mcov__option_default_2_p_0(&(mcov__env).mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mcov__env).mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mcov__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv1_HeadVar__2_2;

    {
      mcov__succeeded = mcov__long_option_2_p_0(((MR_String) mcov__wrapper_arg_1), &mcov__conv1_HeadVar__2_2);
    }
    if (mcov__succeeded)
      {
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv1_HeadVar__2_2));
        mcov__succeeded = MR_TRUE;
      }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;
    MR_Word mcov__conv0_HeadVar__2_2;

    {
      mcov__succeeded = mcov__short_option_2_p_0(((MR_Char) (MR_Word) mcov__wrapper_arg_1), &mcov__conv0_HeadVar__2_2);
    }
    if (mcov__succeeded)
      {
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_HeadVar__2_2));
        mcov__succeeded = MR_TRUE;
      }
    return mcov__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__TypeCtorInfo_29_29;
    MR_Word mcov__Args0_4;
    MR_Word mcov__Args_6;
    MR_Word mcov__GetoptResult_7;

    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mcov__Args0_4);
    }
    mcov__TypeCtorInfo_29_29 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
    {
      mercury__getopt_io__process_options_6_p_0(mcov__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(2), &mcov_scalar_common_1[7]), mcov__Args0_4, &mcov__Args_6, &mcov__GetoptResult_7);
    }
    if (((MR_tag((MR_Word) mcov__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mcov__GetoptErrorMsg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__GetoptResult_7, (MR_Integer) 0)));
        MR_Word mcov__Stderr_35;

        {
          mercury__io__stderr_stream_3_p_0(&mcov__Stderr_35);
        }
        {
          mercury__io__write_string_4_p_0(mcov__Stderr_35, mcov__GetoptErrorMsg_9);
        }
        {
          mercury__io__write_string_4_p_0(mcov__Stderr_35, (MR_String) "\n");
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      {
        MR_Word mcov__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__GetoptResult_7, (MR_Integer) 0)));
        MR_Word mcov__V_30_30;

        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_29_29, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mcov__V_30_30);
        }
        mcov__succeeded = ((MR_Integer) 1 == mcov__V_30_30);
        if (mcov__succeeded)
          {
            mcov__long_usage_2_p_0();
          }
        else
          {
            mcov__do_coverage_testing_4_p_0(mcov__OptionTable_8, mcov__Args_6);
          }
      }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mcov. */
