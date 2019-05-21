/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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

static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[8];

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[8];

static const MR_Integer mcov__mcov__functor_number_map_option_0[8];

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
mcov__IntroducedFrom__pred__proc_process_path_port_count__297__1_2_p_0(
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
  MR_Word mcov__HeadVar__2_22);

static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__206__1_2_p_0(
  MR_Word mcov__Modules_16,
  MR_Word mcov__HeadVar__2_49);

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
mcov__write_label_info_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__LabelInfo_6);

static void MR_CALL 
mcov__write_proc_label_for_user_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__ProcLabel_6);

static void MR_CALL 
mcov__write_proc_info_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__ProcInfo_6);

static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
  MR_Word mcov__ProcLabel_7,
  MR_String mcov__FileName_8,
  MR_Word mcov__PathPort_9,
  MR_Word mcov__LineNumberAndCount_10,
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17);

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

static MR_bool MR_CALL 
mcov__in_stdlib_or_mdbcomp_module_1_p_0(
  MR_Word mcov__HeadVar__1_1);

static MR_bool MR_CALL 
mcov__in_mdbcomp_module_1_p_0(
  MR_Word mcov__HeadVar__1_1);

static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
  MR_Word mcov__HeadVar__1_1);

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

static void MR_CALL 
mcov__long_usage_3_p_0(
  MR_Word mcov__OutStream_4);

static void MR_CALL 
mcov__write_tabbed_lines_4_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2);

static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
  MR_Word mcov__OptionTable_5,
  MR_Word mcov__Args_6);

static void MR_CALL 
mcov__short_usage_3_p_0(
  MR_Word mcov__OutStream_4);

static void MR_CALL 
mcov__write_coverage_test_6_p_0_7(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3);

static void MR_CALL 
mcov__write_coverage_test_6_p_0_6(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_5(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box * mcov__wrapper_arg_2);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_3(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_2(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1);

static void MR_CALL 
mcov__write_coverage_test_6_p_0(
  MR_Word mcov__OutStream_7,
  MR_Word mcov__OptionTable_8,
  MR_Word mcov__RestrictToModules_9,
  MR_Word mcov__TraceCountMap_10);

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


static /* final */ const MR_Box mcov_scalar_common_1[13][3];

static /* final */ const MR_Box mcov_scalar_common_2[28][2];

static /* final */ const MR_Box mcov_scalar_common_3[2][9];

static /* final */ const MR_Box mcov_scalar_common_4[1][4];

static /* final */ const MR_Box mcov_scalar_common_5[6][5];

static /* final */ const MR_Box mcov_scalar_common_6[1][6];

static /* final */ const MR_Box mcov_scalar_common_7[2][7];

static /* final */ const MR_Box mcov_scalar_common_8[3][1];


/* sealed */ struct mcov__vector_common_type_9_0_s {
  const MR_String mcov__vector_common_type_9_0__vct_9_f_0;
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[64];

/* sealed */ struct mcov__vector_common_type_10_0_s {
  const MR_Word mcov__vector_common_type_10_0__vct_10_f_0;
  const MR_Word mcov__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct mcov__vector_common_type_10_0_s mcov_vector_common_10[8];



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
    ((MR_Box) (mcov__collect_proc_infos_counts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mcov_scalar_common_4[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mcov_scalar_common_4[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mcov_scalar_common_4[0])),
    ((MR_Box) (mcov__write_coverage_test_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mcov_scalar_common_5[1])),
    ((MR_Box) (mcov__do_coverage_testing_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mcov_scalar_common_5[2])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mcov_scalar_common_5[3])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mcov_scalar_common_5[4])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mcov_scalar_common_1[9])),
    ((MR_Box) (&mcov_scalar_common_1[10])),
    ((MR_Box) (&mcov_scalar_common_1[11]))
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
    ((MR_Box) ((MR_String) "\twithout doing any further processing.")),
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
    ((MR_Box) ((MR_String) " --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ">")),
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

static /* final */ const MR_Box mcov_scalar_common_3[2][9] = {
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

static /* final */ const MR_Box mcov_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_5[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
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

static /* final */ const MR_Box mcov_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mcov__mcov__type_ctor_info_label_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_8[3][1] = {
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


static /* final */ const struct mcov__vector_common_type_9_0_s mcov_vector_common_9[64] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "ignore-mdbcomp",
    (MR_Integer) 7
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    (MR_String) "help",
    (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    (MR_String) "detailed",
    (MR_Integer) 2
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_String) "flags",
    (MR_Integer) 5
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "ignore-stdlib",
    (MR_Integer) 6
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "flags-file",
    (MR_Integer) 5
  },
  /* row 31 */
  {
    (MR_String) "output-file",
    (MR_Integer) 4
  },
  /* row 32 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 33 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 34 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 35 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 36 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 37 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 38 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 40 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 41 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 42 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 43 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 44 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 45 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 46 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 47 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 49 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 50 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 51 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 53 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 54 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 55 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 56 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 57 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 58 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 59 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 60 */
  {
    (MR_String) "module",
    (MR_Integer) 3
  },
  /* row 61 */
  {
    (MR_String) "verbose",
    (MR_Integer) 1
  },
  /* row 62 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 63 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct mcov__vector_common_type_10_0_s mcov_vector_common_10[8] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_8[1])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_8[1])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_8[1])
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
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_8[2])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_8[2])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mcov__mcov__field_types_label_info_0_0,
  mcov__mcov__field_names_label_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_String) "module_restriction_default",
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

static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_1[1] = {
  (MR_PseudoTypeInfo) &mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1 = {
  (MR_String) "module_restriction_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mcov__mcov__field_types_module_restriction_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[1] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_0
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_1
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mcov__mcov__du_stag_ordered_module_restriction_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_module_restriction_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____module_restriction_0_0_10001)),
  ((MR_Box) (mcov____Compare____module_restriction_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "module_restriction",
  {     mcov__mcov__du_name_ordered_module_restriction_0 },
  {     mcov__mcov__du_ptag_ordered_module_restriction_0 },
  (MR_Integer) 2,
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

static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_7 = {
  (MR_String) "ignore_mdbcomp",
  (MR_Integer) 7
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[8] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_7
};

static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[8] = {
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_7,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_1
};

static const MR_Integer mcov__mcov__functor_number_map_option_0[8] = {
  (MR_Integer) 2,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mcov____Unify____option_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option",
  {     mcov__mcov__enum_name_ordered_option_0 },
  {     mcov__mcov__enum_value_ordered_option_0 },
  (MR_Integer) 8,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mcov__mcov__field_types_proc_info_0_0,
  mcov__mcov__field_names_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
mcov__IntroducedFrom__pred__proc_process_path_port_count__297__1_2_p_0(
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
mcov__IntroducedFrom__pred__write_coverage_test__206__1_2_p_0(
  MR_Word mcov__Modules_16,
  MR_Word mcov__HeadVar__2_49)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__ProcLabelInContext_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_49, (MR_Integer) 0)));
    MR_Word mcov__Module_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_64, (MR_Integer) 0)));
    MR_Word mcov__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_49, (MR_Integer) 1)));
    MR_String mcov__Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_64, (MR_Integer) 1)));
    MR_Word mcov__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_64, (MR_Integer) 2)));

    {
      mcov__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (mcov__Module_66)), mcov__Modules_16);
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
        MR_String mcov__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mcov__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mcov__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mcov__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mcov__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mcov__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mcov__Var_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__Var_10, mcov__ArgX1_4, mcov__ArgY1_5);
        }
        mcov__succeeded = (mcov__Var_10 == (MR_Integer) 0);
        mcov__succeeded = !(mcov__succeeded);
        if (mcov__succeeded)
          *mcov__HeadVar__1_1 = mcov__Var_10;
        else
          {
            MR_Word mcov__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__Var_11, mcov__ArgX2_6, mcov__ArgY2_7);
            }
            mcov__succeeded = (mcov__Var_11 == (MR_Integer) 0);
            mcov__succeeded = !(mcov__succeeded);
            if (mcov__succeeded)
              *mcov__HeadVar__1_1 = mcov__Var_11;
            else
              {
                mdbcomp__prim_data____Compare____proc_label_0_0(mcov__HeadVar__1_1, mcov__ArgX3_8, mcov__ArgY3_9);
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
        MR_String mcov__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mcov__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mcov__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mcov__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));

        mcov__succeeded = (strcmp(mcov__ArgX1_3, mcov__ArgY1_4) == 0);
        if (mcov__succeeded)
          {
            mcov__succeeded = (mcov__ArgX2_5 == mcov__ArgY2_6);
            if (mcov__succeeded)
              {
                mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__ArgX3_7, mcov__ArgY3_8);
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
    MR_Integer mcov__CastX_8 = (MR_Integer) mcov__HeadVar__2_2;
    MR_Integer mcov__CastY_9 = (MR_Integer) mcov__HeadVar__3_3;

    mcov__succeeded = (mcov__CastX_8 == mcov__CastY_9);
    if (mcov__succeeded)
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mcov__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mcov__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mcov__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mcov__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word mcov__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));

        if ((mcov__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mcov__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mcov__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[2], mcov__HeadVar__1_1, ((MR_Box) (mcov__Var_11)), ((MR_Box) (mcov__ArgY1_7)));
            }
          }
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
    MR_Integer mcov__CastX_7 = (MR_Integer) mcov__HeadVar__1_1;
    MR_Integer mcov__CastY_8 = (MR_Integer) mcov__HeadVar__2_2;

    mcov__succeeded = (mcov__CastX_7 == mcov__CastY_8);
    if (mcov__succeeded)
      mcov__succeeded = MR_TRUE;
    else
    if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mcov__CastX_3 = (MR_Integer) mcov__HeadVar__1_1;
        MR_Integer mcov__CastY_4 = (MR_Integer) mcov__HeadVar__2_2;

        mcov__succeeded = (mcov__CastY_4 == mcov__CastX_3);
      }
    else
      {
        MR_Word mcov__TypeInfo_9_9;
        MR_Word mcov__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mcov__ArgY1_6;

        mcov__succeeded = ((MR_tag((MR_Word) mcov__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mcov__succeeded)
          {
            mcov__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));
            mcov__TypeInfo_9_9 = (MR_Word) &mcov_scalar_common_2[2];
            {
              mcov__succeeded = mercury__builtin__unify_2_p_0(mcov__TypeInfo_9_9, ((MR_Box) (mcov__ArgX1_5)), ((MR_Box) (mcov__ArgY1_6)));
            }
          }
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
        MR_String mcov__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mcov__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mcov__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mcov__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mcov__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mcov__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mcov__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mcov__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mcov__Var_12;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__Var_12, mcov__ArgX1_4, mcov__ArgY1_5);
        }
        mcov__succeeded = (mcov__Var_12 == (MR_Integer) 0);
        mcov__succeeded = !(mcov__succeeded);
        if (mcov__succeeded)
          *mcov__HeadVar__1_1 = mcov__Var_12;
        else
          {
            MR_Word mcov__Var_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__Var_13, mcov__ArgX2_6, mcov__ArgY2_7);
            }
            mcov__succeeded = (mcov__Var_13 == (MR_Integer) 0);
            mcov__succeeded = !(mcov__succeeded);
            if (mcov__succeeded)
              *mcov__HeadVar__1_1 = mcov__Var_13;
            else
              {
                MR_Word mcov__Var_14;

                {
                  mdbcomp__prim_data____Compare____proc_label_0_0(&mcov__Var_14, mcov__ArgX3_8, mcov__ArgY3_9);
                }
                mcov__succeeded = (mcov__Var_14 == (MR_Integer) 0);
                mcov__succeeded = !(mcov__succeeded);
                if (mcov__succeeded)
                  *mcov__HeadVar__1_1 = mcov__Var_14;
                else
                  {
                    mdbcomp__trace_counts____Compare____path_port_0_0(mcov__HeadVar__1_1, mcov__ArgX4_10, mcov__ArgY4_11);
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
        MR_String mcov__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mcov__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mcov__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mcov__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mcov__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mcov__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mcov__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mcov__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));

        mcov__succeeded = (strcmp(mcov__ArgX1_3, mcov__ArgY1_4) == 0);
        if (mcov__succeeded)
          {
            mcov__succeeded = (mcov__ArgX2_5 == mcov__ArgY2_6);
            if (mcov__succeeded)
              {
                {
                  mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__ArgX3_7, mcov__ArgY3_8);
                }
                if (mcov__succeeded)
                  {
                    mcov__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mcov__ArgX4_9, mcov__ArgY4_10);
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
          *mcov__HeadVar__1_1 = ((&mcov_vector_common_10[0 + mcov__slot_0]))->mcov__vector_common_type_10_0__vct_10_f_0;
          *mcov__HeadVar__2_2 = ((&mcov_vector_common_10[0 + mcov__slot_0]))->mcov__vector_common_type_10_0__vct_10_f_1;
          {
            mcov__cont(mcov__cont_env_ptr);
          }
          mcov__slot_0 = (mcov__slot_0 + (MR_Integer) 1);
        }
      while ((mcov__slot_0 < (MR_Integer) 8));
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
    mcov__slot_0 = ((MR_hash_string4(mcov__HeadVar__1_1)) & (MR_Integer) 63);
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    mcov__str_1 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_0;
    /* did we find a match? */
    if ((((mcov__str_1 != NULL)) && ((strcmp(mcov__str_1, mcov__HeadVar__1_1) == 0))))
      {
        /* we found a match; look up the results */
        *mcov__HeadVar__2_2 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_1;
        mcov__succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
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
mcov__write_label_info_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__LabelInfo_6)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_6, (MR_Integer) 0)));
    MR_Integer mcov__LineNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_6, (MR_Integer) 1)));
    MR_Word mcov__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_6, (MR_Integer) 2)));
    MR_Word mcov__PathPort_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_6, (MR_Integer) 3)));
    MR_String mcov__Var_37;

    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__FileName_8);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) ":");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mcov_scalar_common_8[0], mcov__LineNumber_9, &mcov__Var_37);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_37);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) ": ");
    }
    {
      mcov__write_proc_label_for_user_4_p_0(mcov__OutStream_5, mcov__ProcLabel_10);
    }
    {
      mercury__io__write_char_4_p_0(mcov__OutStream_5, (MR_Char) 32);
    }
    switch (MR_tag((MR_Word) mcov__PathPort_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mcov__Port_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_11, (MR_Integer) 0)));
          MR_String mcov__PortStr_48;

          {
            mdbcomp__prim_data__string_to_trace_port_2_p_1(&mcov__PortStr_48, mcov__Port_46);
          }
          {
            mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__PortStr_48);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mcov__Path_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__PathPort_11, (MR_Integer) 0)));
          MR_Word mcov__Var_57;
          MR_Word mcov__Var_60;
          MR_String mcov__Var_61;

          {
            mcov__Var_61 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_53);
          }
          {
            mcov__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__Var_60, 0) = ((MR_Box) (mcov__Var_61));
            MR_hl_field(MR_mktag(1), mcov__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[25])));
          }
          {
            mcov__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__Var_57, 0) = ((MR_Box) ((MR_String) "<"));
            MR_hl_field(MR_mktag(1), mcov__Var_57, 1) = ((MR_Box) (mcov__Var_60));
          }
          {
            mercury__io__write_strings_4_p_0(mcov__OutStream_5, mcov__Var_57);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mcov__Port_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_11, (MR_Integer) 0)));
          MR_Word mcov__Path_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_11, (MR_Integer) 1)));
          MR_String mcov__PortStr_69;
          MR_Word mcov__Var_72;
          MR_Word mcov__Var_74;
          MR_Word mcov__Var_76;
          MR_String mcov__Var_77;

          {
            mdbcomp__prim_data__string_to_trace_port_2_p_1(&mcov__PortStr_69, mcov__Port_66);
          }
          {
            mcov__Var_77 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_67);
          }
          {
            mcov__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__Var_76, 0) = ((MR_Box) (mcov__Var_77));
            MR_hl_field(MR_mktag(1), mcov__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[25])));
          }
          {
            mcov__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__Var_74, 0) = ((MR_Box) ((MR_String) " <"));
            MR_hl_field(MR_mktag(1), mcov__Var_74, 1) = ((MR_Box) (mcov__Var_76));
          }
          {
            mcov__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mcov__Var_72, 0) = ((MR_Box) (mcov__PortStr_69));
            MR_hl_field(MR_mktag(1), mcov__Var_72, 1) = ((MR_Box) (mcov__Var_74));
          }
          {
            mercury__io__write_strings_4_p_0(mcov__OutStream_5, mcov__Var_72);
          }
        }
        break;
    }
    {
      mercury__io__nl_3_p_0(mcov__OutStream_5);
    }
  }
}

static void MR_CALL 
mcov__write_proc_label_for_user_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__ProcLabel_6)
{
  {
    MR_bool mcov__succeeded;

    if (((MR_tag((MR_Word) mcov__ProcLabel_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mcov__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 1)));
        MR_String mcov__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 3)));
        MR_Integer mcov__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 4)));
        MR_Integer mcov__Mode_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 5)));
        MR_String mcov__PredOrFuncStr_14;
        MR_String mcov__QuotedName_15;
        MR_String mcov__Var_45;
        MR_Word mcov__Var_51;
        MR_String mcov__Var_54;
        MR_Word mcov___DefModuleSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 0)));
        MR_Word mcov___DeclModuleSym_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_6, (MR_Integer) 2)));

        switch (mcov__PredOrFunc_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mcov__PredOrFuncStr_14 = (MR_String) "func";
            break;
          case (MR_Integer) 0:
            mcov__PredOrFuncStr_14 = (MR_String) "pred";
            break;
        }
        {
          mcov__QuotedName_15 = mercury__term_io__quoted_atom_1_f_0(mcov__Name_11);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__PredOrFuncStr_14);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) " ");
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__QuotedName_15);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) "/");
        }
        mcov__Var_51 = (MR_Word) &mcov_scalar_common_8[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__Var_51, mcov__Arity_12, &mcov__Var_45);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_45);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) "-");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__Var_51, mcov__Mode_13, &mcov__Var_54);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_54);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/4", (MR_String) "special_pred");
          return;
        }
      }
  }
}

static void MR_CALL 
mcov__write_proc_info_4_p_0(
  MR_Word mcov__OutStream_5,
  MR_Word mcov__ProcInfo_6)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_6, (MR_Integer) 0)));
    MR_Integer mcov__LineNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_6, (MR_Integer) 1)));
    MR_Word mcov__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_6, (MR_Integer) 2)));
    MR_String mcov__Var_33;
    MR_Word mcov__Var_39;

    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__FileName_8);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) ":");
    }
    mcov__Var_39 = (MR_Word) &mcov_scalar_common_8[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__Var_39, mcov__LineNumber_9, &mcov__Var_33);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_33);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) ": ");
    }
    if (((MR_tag((MR_Word) mcov__ProcLabel_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mcov__PredOrFunc_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 1)));
        MR_String mcov__Name_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 3)));
        MR_Integer mcov__Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 4)));
        MR_Integer mcov__Mode_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 5)));
        MR_String mcov__PredOrFuncStr_52;
        MR_String mcov__QuotedName_53;
        MR_String mcov__Var_81;
        MR_String mcov__Var_90;
        MR_Word mcov___DefModuleSym_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 0)));
        MR_Word mcov___DeclModuleSym_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_10, (MR_Integer) 2)));

        switch (mcov__PredOrFunc_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mcov__PredOrFuncStr_52 = (MR_String) "func";
            break;
          case (MR_Integer) 0:
            mcov__PredOrFuncStr_52 = (MR_String) "pred";
            break;
        }
        {
          mcov__QuotedName_53 = mercury__term_io__quoted_atom_1_f_0(mcov__Name_49);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__PredOrFuncStr_52);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) " ");
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__QuotedName_53);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) "/");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__Var_39, mcov__Arity_50, &mcov__Var_81);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_81);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, (MR_String) "-");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__Var_39, mcov__Mode_51, &mcov__Var_90);
        }
        {
          mercury__io__write_string_4_p_0(mcov__OutStream_5, mcov__Var_90);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/4", (MR_String) "special_pred");
          return;
        }
      }
    {
      mercury__io__nl_3_p_0(mcov__OutStream_5);
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
            MR_Word mcov__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 1)));
            MR_String mcov__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 3)));
            MR_Integer mcov__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 4)));
            MR_Integer mcov__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_20, mcov__DeclModuleSym_22);
            }
          }
        else
          {
            MR_Word mcov__TypeModuleSym_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 2)));
            MR_Word mcov__DefModuleSym_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 0)));
            MR_Word mcov__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 1)));
            MR_String mcov__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 3)));
            MR_Integer mcov__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 4)));
            MR_Integer mcov__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 5)));

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
            MR_Word mcov__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 1)));
            MR_String mcov__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 3)));
            MR_Integer mcov__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 4)));
            MR_Integer mcov__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 5)));

            {
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_11, mcov__DeclModuleSym_13);
            }
          }
        else
          {
            MR_Word mcov__TypeModuleSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 2)));
            MR_Word mcov__DefModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 0)));
            MR_Word mcov__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 1)));
            MR_String mcov__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 3)));
            MR_Integer mcov__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 4)));
            MR_Integer mcov__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 5)));

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
      mcov__succeeded = mcov__IntroducedFrom__pred__proc_process_path_port_count__297__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))));
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
    MR_Word mcov__Var_19;

    *mcov__STATE_VARIABLE_Count_17 = (mcov__STATE_VARIABLE_Count_0_16 + mcov__CurCount_12);
    mcov__succeeded = ((MR_tag((MR_Word) mcov__PathPort_7)) == (MR_mktag((MR_Integer) 0)));
    if (mcov__succeeded)
      {
        mcov__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_7, (MR_Integer) 0)));
        mcov__succeeded = (mcov__Var_19 == (MR_Integer) 0);
      }
    if (mcov__succeeded)
      {
        MR_Word mcov__Var_20;

        {
          mcov__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mcov__Var_20, 0) = ((MR_Box) (&mcov_scalar_common_5[5]));
          MR_hl_field(MR_mktag(0), mcov__Var_20, 1) = ((MR_Box) (mcov__proc_process_path_port_count_6_p_0_1));
          MR_hl_field(MR_mktag(0), mcov__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mcov__Var_20, 3) = ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14));
          MR_hl_field(MR_mktag(0), mcov__Var_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__require_2_p_0(mcov__Var_20, (MR_String) "proc_process_path_port_count: duplicate call port:");
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

static MR_bool MR_CALL 
mcov__in_stdlib_or_mdbcomp_module_1_p_0(
  MR_Word mcov__HeadVar__1_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__ProcLabelInContext_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mcov__Module_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 0)));
    MR_Word mcov__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mcov__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 1)));
    MR_Word mcov__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 2)));

    {
      MR_String mcov__Var_7;

      {
        mcov__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(mcov__Module_4, &mcov__Var_7);
      }
    }
    if (!(mcov__succeeded))
      {
        mcov__succeeded = mdbcomp__builtin_modules__is_mdbcomp_module_name_1_p_0(mcov__Module_4);
      }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__in_mdbcomp_module_1_p_0(
  MR_Word mcov__HeadVar__1_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__ProcLabelInContext_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mcov__Module_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 0)));
    MR_Word mcov__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mcov__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 1)));
    MR_Word mcov__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 2)));

    {
      mcov__succeeded = mdbcomp__builtin_modules__is_mdbcomp_module_name_1_p_0(mcov__Module_4);
    }
    return mcov__succeeded;
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
    MR_Word mcov__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mcov__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 1)));
    MR_Word mcov__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 2)));
    MR_String mcov__Var_7;

    {
      mcov__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(mcov__Module_4, &mcov__Var_7);
    }
    return mcov__succeeded;
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
    MR_Word mcov__TypeCtorInfo_31_31;
    MR_Word mcov__Args0_4;
    MR_Word mcov__Args_6;
    MR_Word mcov__GetoptResult_7;

    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mcov__Args0_4);
    }
    mcov__TypeCtorInfo_31_31 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
    {
      mercury__getopt_io__process_options_6_p_0(mcov__TypeCtorInfo_31_31, (MR_Word) MR_mkword(MR_mktag(2), &mcov_scalar_common_1[12]), mcov__Args0_4, &mcov__Args_6, &mcov__GetoptResult_7);
    }
    if (((MR_tag((MR_Word) mcov__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mcov__GetoptErrorMsg_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__GetoptResult_7, (MR_Integer) 0)));
        MR_Word mcov__Stderr_37;

        {
          mercury__io__stderr_stream_3_p_0(&mcov__Stderr_37);
        }
        {
          mercury__io__write_string_4_p_0(mcov__Stderr_37, mcov__GetoptErrorMsg_10);
        }
        {
          mercury__io__write_string_4_p_0(mcov__Stderr_37, (MR_String) "\n");
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      {
        MR_Word mcov__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__GetoptResult_7, (MR_Integer) 0)));
        MR_Word mcov__Var_32;

        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_31_31, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mcov__Var_32);
        }
        mcov__succeeded = ((MR_Integer) 1 == mcov__Var_32);
        if (mcov__succeeded)
          {
            MR_Word mcov__StdOutStream_9;

            {
              mercury__io__stdout_stream_3_p_0(&mcov__StdOutStream_9);
            }
            {
              mcov__long_usage_3_p_0(mcov__StdOutStream_9);
            }
          }
        else
          {
            mcov__do_coverage_testing_4_p_0(mcov__OptionTable_8, mcov__Args_6);
          }
      }
  }
}

static void MR_CALL 
mcov__long_usage_3_p_0(
  MR_Word mcov__OutStream_4)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__Version_6;
    MR_String mcov__FullArch_7;
    MR_Word mcov__Var_31;
    MR_String mcov__Str_85;
    MR_Word mcov__Strs_86;
    MR_String mcov__Str_105;
    MR_Word mcov__Strs_106;
    MR_String mcov__Str_125;
    MR_Word mcov__Strs_126;
    MR_String mcov__Str_145;
    MR_Word mcov__Strs_146;
    MR_String mcov__Str_165;
    MR_Word mcov__Strs_166;
    MR_String mcov__Str_185;
    MR_Word mcov__Strs_186;
    MR_String mcov__Str_205;
    MR_Word mcov__Strs_206;

    {
      mercury__library__version_2_p_0(&mcov__Version_6, &mcov__FullArch_7);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "Name: mcov -- Mercury Coverage Testing Tool, version ");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Version_6);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) ", on ");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__FullArch_7);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "Copyright: Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "           Copyright (C) 2015-2016 The Mercury team\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "Usage: mcov [<options>] <arguments>\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "Arguments:\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\tArguments are assumed to Mercury trace count files.\n");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "Options:\n");
    }
    mcov__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_2[23]);
    mcov__Str_85 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Var_31, (MR_Integer) 0)));
    mcov__Strs_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Var_31, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_85);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_105 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_86, (MR_Integer) 0)));
    mcov__Strs_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_86, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_105);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_125 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_106, (MR_Integer) 0)));
    mcov__Strs_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_106, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_125);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_145 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_126, (MR_Integer) 0)));
    mcov__Strs_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_126, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_145);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_165 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_146, (MR_Integer) 0)));
    mcov__Strs_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_146, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_165);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_185 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_166, (MR_Integer) 0)));
    mcov__Strs_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_166, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_185);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    mcov__Str_205 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__Strs_186, (MR_Integer) 0)));
    mcov__Strs_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__Strs_186, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\t");
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, mcov__Str_205);
    }
    {
      mercury__io__write_string_4_p_0(mcov__OutStream_4, (MR_String) "\n");
    }
    {
      mcov__write_tabbed_lines_4_p_0(mcov__OutStream_4, mcov__Strs_206);
    }
  }
}

static void MR_CALL 
mcov__write_tabbed_lines_4_p_0(
  MR_Word mcov__HeadVar__1_1,
  MR_Word mcov__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mcov__succeeded;

        if ((mcov__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mcov__Str_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mcov__Strs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(mcov__HeadVar__1_1, (MR_String) "\t");
            }
            {
              mercury__io__write_string_4_p_0(mcov__HeadVar__1_1, mcov__Str_10);
            }
            {
              mercury__io__write_string_4_p_0(mcov__HeadVar__1_1, (MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word mcov__next_value_of_HeadVar__2_2 = mcov__Strs_11;

              mcov__HeadVar__2_2 = mcov__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
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
    MR_Word mcov__StdOutStream_8;
    MR_Word mcov__StdErrStream_9;

    {
      mercury__io__stdout_stream_3_p_0(&mcov__StdOutStream_8);
    }
    {
      mercury__io__stderr_stream_3_p_0(&mcov__StdErrStream_9);
    }
    if ((mcov__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mcov__short_usage_3_p_0(mcov__StdOutStream_8);
      }
    else
      {
        MR_Word mcov__TypeCtorInfo_63_63 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
        MR_Word mcov__Verbose_12;
        MR_Word mcov__FileTypes_14;
        MR_Word mcov__TraceCounts_15;
        MR_Word mcov__MaybeReadError_16;
        MR_Integer mcov___NumTests_13;

        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 1)), &mcov__Verbose_12);
        }
        {
          mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mcov__Verbose_12, mcov__Args_6, &mcov___NumTests_13, &mcov__FileTypes_14, &mcov__TraceCounts_15, &mcov__MaybeReadError_16);
        }
        if ((mcov__MaybeReadError_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mcov__FileTypeList_18;
            MR_Word mcov__Modules_22;
            MR_Word mcov__RestrictToModules_23;
            MR_String mcov__OutputFile_27;
            MR_Word mcov__BaseType_19;
            MR_Word mcov__Var_39;
            MR_Word mcov__Var_40;

            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mcov__FileTypes_14, &mcov__FileTypeList_18);
            }
            mcov__succeeded = ((MR_tag((MR_Word) mcov__FileTypeList_18)) == (MR_mktag((MR_Integer) 1)));
            if (mcov__succeeded)
              {
                mcov__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_18, (MR_Integer) 0)));
                mcov__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_18, (MR_Integer) 1)));
                mcov__succeeded = (mcov__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mcov__succeeded)
                  {
                    mcov__succeeded = ((MR_tag((MR_Word) mcov__Var_39)) == (MR_mktag((MR_Integer) 0)));
                    if (mcov__succeeded)
                      mcov__BaseType_19 = (MR_Word) MR_body(((MR_Word) mcov__Var_39), (MR_Integer) 0);
                  }
              }
            if (mcov__succeeded)
              {
                MR_Word mcov__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__BaseType_19, (MR_Integer) 0)));
                MR_String mcov___Program_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__BaseType_19, (MR_Integer) 1)));

                switch (mcov__Kind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_4_p_0(mcov__StdErrStream_9, (MR_String) "Warning: the original trace count files did not include all labels.\n");
                      }
                    }
                    break;
                }
              }
            else
              {
                {
                  mercury__io__write_string_4_p_0(mcov__StdErrStream_9, (MR_String) "Warning: reporting on a mixture of trace file types and/or programs.\n");
                }
              }
            {
              mercury__getopt_io__lookup_accumulating_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 3)), &mcov__Modules_22);
            }
            if ((mcov__Modules_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mcov__RestrictToModules_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word mcov__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
                MR_Word mcov__ModuleSyms_26;
                MR_Word mcov__Var_47;

                {
                  mcov__ModuleSyms_26 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mcov__TypeCtorInfo_66_66, (MR_Word) &mcov_scalar_common_1[8], mcov__Modules_22);
                }
                {
                  mcov__Var_47 = mercury__set__list_to_set_1_f_0(mcov__TypeCtorInfo_66_66, mcov__ModuleSyms_26);
                }
                {
                  mcov__RestrictToModules_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mcov__RestrictToModules_23, 0) = ((MR_Box) (mcov__Var_47));
                }
              }
            {
              mercury__getopt_io__lookup_string_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 4)), &mcov__OutputFile_27);
            }
            mcov__succeeded = (strcmp(mcov__OutputFile_27, (MR_String) "") == 0);
            if (mcov__succeeded)
              {
                mcov__write_coverage_test_6_p_0(mcov__StdOutStream_8, mcov__OptionTable_5, mcov__RestrictToModules_23, mcov__TraceCounts_15);
              }
            else
              {
                MR_Word mcov__OpenRes_28;

                {
                  mercury__io__open_output_4_p_0(mcov__OutputFile_27, &mcov__OpenRes_28);
                }
                if (((MR_tag((MR_Word) mcov__OpenRes_28)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word mcov__OpenError_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__OpenRes_28, (MR_Integer) 0)));
                    MR_String mcov__OpenErrorMsg_31;

                    {
                      mercury__io__error_message_2_p_0(mcov__OpenError_30, &mcov__OpenErrorMsg_31);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErrStream_9, (MR_String) "Error opening file \140");
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErrStream_9, mcov__OutputFile_27);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErrStream_9, (MR_String) "\': ");
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErrStream_9, mcov__OpenErrorMsg_31);
                    }
                    {
                      mercury__io__write_string_4_p_0(mcov__StdErrStream_9, (MR_String) "\n");
                    }
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                  }
                else
                  {
                    MR_Word mcov__FileStream_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__OpenRes_28, (MR_Integer) 0)));

                    {
                      mcov__write_coverage_test_6_p_0(mcov__FileStream_29, mcov__OptionTable_5, mcov__RestrictToModules_23, mcov__TraceCounts_15);
                    }
                    {
                      mercury__io__close_output_3_p_0(mcov__FileStream_29);
                    }
                  }
              }
          }
        else
          {
            MR_String mcov__ReadErrorMsg_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__MaybeReadError_16, (MR_Integer) 0)));
            MR_Word mcov__Stderr_80;

            {
              mercury__io__stderr_stream_3_p_0(&mcov__Stderr_80);
            }
            {
              mercury__io__write_string_4_p_0(mcov__Stderr_80, mcov__ReadErrorMsg_17);
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
mcov__short_usage_3_p_0(
  MR_Word mcov__OutStream_4)
{
  {
    MR_bool mcov__succeeded;
    MR_String mcov__ProgName_6;
    MR_String mcov__Version_7;
    MR_String mcov__FullArch_8;
    MR_Word mcov__Var_13;
    MR_Word mcov__Var_16;
    MR_Word mcov__Var_17;
    MR_Word mcov__Var_19;
    MR_Word mcov__Var_20;
    MR_Word mcov__Var_22;
    MR_Word mcov__Var_24;
    MR_Word mcov__Var_26;
    MR_Word mcov__Var_28;
    MR_Word mcov__Var_29;
    MR_Word mcov__Var_31;
    MR_Word mcov__Var_33;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mcov", &mcov__ProgName_6);
    }
    {
      mercury__library__version_2_p_0(&mcov__Version_7, &mcov__FullArch_8);
    }
    {
      mcov__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_33, 0) = ((MR_Box) (mcov__ProgName_6));
      MR_hl_field(MR_mktag(1), mcov__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[24])));
    }
    {
      mcov__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_31, 0) = ((MR_Box) ((MR_String) "Use \140"));
      MR_hl_field(MR_mktag(1), mcov__Var_31, 1) = ((MR_Box) (mcov__Var_33));
    }
    {
      mcov__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_29, 0) = ((MR_Box) ((MR_String) " [<options>] [<files>]\n"));
      MR_hl_field(MR_mktag(1), mcov__Var_29, 1) = ((MR_Box) (mcov__Var_31));
    }
    {
      mcov__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_28, 0) = ((MR_Box) (mcov__ProgName_6));
      MR_hl_field(MR_mktag(1), mcov__Var_28, 1) = ((MR_Box) (mcov__Var_29));
    }
    {
      mcov__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_26, 0) = ((MR_Box) ((MR_String) "Usage: "));
      MR_hl_field(MR_mktag(1), mcov__Var_26, 1) = ((MR_Box) (mcov__Var_28));
    }
    {
      mcov__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_24, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2015-2016 The Mercury team\n"));
      MR_hl_field(MR_mktag(1), mcov__Var_24, 1) = ((MR_Box) (mcov__Var_26));
    }
    {
      mcov__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_22, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n"));
      MR_hl_field(MR_mktag(1), mcov__Var_22, 1) = ((MR_Box) (mcov__Var_24));
    }
    {
      mcov__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_20, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), mcov__Var_20, 1) = ((MR_Box) (mcov__Var_22));
    }
    {
      mcov__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_19, 0) = ((MR_Box) (mcov__FullArch_8));
      MR_hl_field(MR_mktag(1), mcov__Var_19, 1) = ((MR_Box) (mcov__Var_20));
    }
    {
      mcov__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_17, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), mcov__Var_17, 1) = ((MR_Box) (mcov__Var_19));
    }
    {
      mcov__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_16, 0) = ((MR_Box) (mcov__Version_7));
      MR_hl_field(MR_mktag(1), mcov__Var_16, 1) = ((MR_Box) (mcov__Var_17));
    }
    {
      mcov__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mcov__Var_13, 0) = ((MR_Box) ((MR_String) "Mercury Coverage Testing Tool, version "));
      MR_hl_field(MR_mktag(1), mcov__Var_13, 1) = ((MR_Box) (mcov__Var_16));
    }
    {
      mercury__io__write_strings_4_p_0(mcov__OutStream_4, mcov__Var_13);
    }
  }
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0_7(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__write_label_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0_6(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1,
  MR_Box mcov__wrapper_arg_2,
  MR_Box * mcov__wrapper_arg_3)
{
  {
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__write_proc_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_5(
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
mcov__write_coverage_test_6_p_0_4(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__IntroducedFrom__pred__write_coverage_test__206__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_3(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__in_stdlib_or_mdbcomp_module_1_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
    return mcov__succeeded;
  }
}

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_2(
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

static MR_bool MR_CALL 
mcov__write_coverage_test_6_p_0_1(
  MR_Box mcov__closure_arg,
  MR_Box mcov__wrapper_arg_1)
{
  {
    MR_bool mcov__succeeded;
    MR_Box mcov__closure = mcov__closure_arg;

    {
      mcov__succeeded = mcov__in_mdbcomp_module_1_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
    return mcov__succeeded;
  }
}

static void MR_CALL 
mcov__write_coverage_test_6_p_0(
  MR_Word mcov__OutStream_7,
  MR_Word mcov__OptionTable_8,
  MR_Word mcov__RestrictToModules_9,
  MR_Word mcov__TraceCountMap_10)
{
  {
    MR_bool mcov__succeeded;
    MR_Word mcov__TraceCounts0_12;
    MR_Word mcov__TraceCounts_15;
    MR_Word mcov__Detailed_17;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mcov_scalar_common_1[0], mcov__TraceCountMap_10, &mcov__TraceCounts0_12);
    }
    if ((mcov__RestrictToModules_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mcov__TypeCtorInfo_42_42 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
        MR_Word mcov__IgnoreStdlib_13;
        MR_Word mcov__IgnoreMdbcomp_14;

        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_42_42, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 6)), &mcov__IgnoreStdlib_13);
        }
        {
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_42_42, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 7)), &mcov__IgnoreMdbcomp_14);
        }
        switch (mcov__IgnoreStdlib_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (mcov__IgnoreMdbcomp_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mcov__TraceCounts_15 = mcov__TraceCounts0_12;
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__list__negated_filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], (MR_Word) &mcov_scalar_common_1[5], mcov__TraceCounts0_12, &mcov__TraceCounts_15);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (mcov__IgnoreMdbcomp_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__list__negated_filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], (MR_Word) &mcov_scalar_common_1[6], mcov__TraceCounts0_12, &mcov__TraceCounts_15);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__list__negated_filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], (MR_Word) &mcov_scalar_common_1[7], mcov__TraceCounts0_12, &mcov__TraceCounts_15);
                  }
                }
                break;
            }
            break;
        }
      }
    else
      {
        MR_Word mcov__Modules_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__RestrictToModules_9, (MR_Integer) 0)));
        MR_Word mcov__Var_24;

        {
          mcov__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mcov__Var_24, 0) = ((MR_Box) (&mcov_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), mcov__Var_24, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_4));
          MR_hl_field(MR_mktag(0), mcov__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mcov__Var_24, 3) = ((MR_Box) (mcov__Modules_16));
        }
        {
          mercury__list__filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], mcov__Var_24, mcov__TraceCounts0_12, &mcov__TraceCounts_15);
        }
      }
    {
      mercury__getopt_io__lookup_bool_option_3_p_0((MR_Word) &mcov__mcov__type_ctor_info_option_0, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &mcov__Detailed_17);
    }
    switch (mcov__Detailed_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mcov__TypeCtorInfo_53_53;
          MR_Word mcov__TypeCtorInfo_11_71 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
          MR_Word mcov__TypeCtorInfo_12_72 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
          MR_Word mcov__TypeCtorInfo_13_73;
          MR_Word mcov__ZeroCountProcs_18;
          MR_Word mcov__SortedZeroCountProcs_19;
          MR_Word mcov__Var_38;
          MR_Word mcov__ProcInfoMap_65;
          MR_Word mcov__CountMap_66;
          MR_Word mcov__CountList_67;
          MR_Word mcov__Var_68;
          MR_Word mcov__Var_69;
          MR_Word mcov__Var_70;
          MR_Box mcov__conv1_STATE_VARIABLE_IO_23;

          {
            mcov__Var_68 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_71, mcov__TypeCtorInfo_12_72);
          }
          mcov__TypeCtorInfo_13_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            mcov__Var_69 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_71, mcov__TypeCtorInfo_13_73);
          }
          {
            mcov__collect_proc_infos_counts_5_p_0(mcov__TraceCounts_15, mcov__Var_68, &mcov__ProcInfoMap_65, mcov__Var_69, &mcov__CountMap_66);
          }
          {
            mercury__map__to_assoc_list_2_p_0(mcov__TypeCtorInfo_11_71, mcov__TypeCtorInfo_13_73, mcov__CountMap_66, &mcov__CountList_67);
          }
          {
            mcov__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mcov__Var_70, 0) = ((MR_Box) (&mcov_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), mcov__Var_70, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_5));
            MR_hl_field(MR_mktag(0), mcov__Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mcov__Var_70, 3) = ((MR_Box) (mcov__ProcInfoMap_65));
          }
          {
            mercury__list__filter_map_3_p_0((MR_Word) &mcov_scalar_common_1[2], mcov__TypeCtorInfo_12_72, mcov__Var_70, mcov__CountList_67, &mcov__ZeroCountProcs_18);
          }
          mcov__TypeCtorInfo_53_53 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
          {
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_53_53, mcov__ZeroCountProcs_18, &mcov__SortedZeroCountProcs_19);
          }
          {
            mercury__io__write_string_4_p_0(mcov__OutStream_7, (MR_String) "Unexecuted procedures:\n\n");
          }
          {
            mcov__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mcov__Var_38, 0) = ((MR_Box) (&mcov_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), mcov__Var_38, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_6));
            MR_hl_field(MR_mktag(0), mcov__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mcov__Var_38, 3) = ((MR_Box) (mcov__OutStream_7));
          }
          {
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_53_53, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mcov__Var_38, mcov__SortedZeroCountProcs_19, ((MR_Box) ((MR_Integer) 0)), &mcov__conv1_STATE_VARIABLE_IO_23);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mcov__TypeCtorInfo_58_58;
          MR_Word mcov__ZeroCountLabels_20;
          MR_Word mcov__SortedZeroCountLabels_21;
          MR_Word mcov__Var_34;
          MR_Box mcov__conv2_STATE_VARIABLE_IO_23;

          {
            mcov__collect_zero_count_local_labels_3_p_0(mcov__TraceCounts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mcov__ZeroCountLabels_20);
          }
          mcov__TypeCtorInfo_58_58 = (MR_Word) &mcov__mcov__type_ctor_info_label_info_0;
          {
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_58_58, mcov__ZeroCountLabels_20, &mcov__SortedZeroCountLabels_21);
          }
          {
            mercury__io__write_string_4_p_0(mcov__OutStream_7, (MR_String) "Unexecuted labels:\n\n");
          }
          {
            mcov__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mcov__Var_34, 0) = ((MR_Box) (&mcov_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), mcov__Var_34, 1) = ((MR_Box) (mcov__write_coverage_test_6_p_0_7));
            MR_hl_field(MR_mktag(0), mcov__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mcov__Var_34, 3) = ((MR_Box) (mcov__OutStream_7));
          }
          {
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_58_58, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mcov__Var_34, mcov__SortedZeroCountLabels_21, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_STATE_VARIABLE_IO_23);
          }
        }
        break;
    }
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
            MR_Word mcov__Var_17;
            MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;
            MR_Word mcov___ModuleNameSym_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 0)));
            MR_Box mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18;

            {
              mcov__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mcov__Var_17, 0) = ((MR_Box) (&mcov_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), mcov__Var_17, 1) = ((MR_Box) (mcov__collect_zero_count_local_labels_3_p_0_1));
              MR_hl_field(MR_mktag(0), mcov__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mcov__Var_17, 3) = ((MR_Box) (mcov__ProcLabel_14));
              MR_hl_field(MR_mktag(0), mcov__Var_17, 4) = ((MR_Box) (mcov__FileName_13));
            }
            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[1], mcov__Var_17, mcov__PathPortCountMap_11, ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_2)), &mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            }
            mcov__STATE_VARIABLE_ZeroLabelInfos_18_18 = ((MR_Word) mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            /* direct tailcall eliminated */
            {
              MR_Word mcov__next_value_of_HeadVar__1_1 = mcov__Assocs_8;
              MR_Word mcov__next_value_of_STATE_VARIABLE_ZeroLabelInfos_0_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;

              mcov__STATE_VARIABLE_ZeroLabelInfos_0_2 = mcov__next_value_of_STATE_VARIABLE_ZeroLabelInfos_0_2;
              mcov__HeadVar__1_1 = mcov__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
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
              mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[0], mcov__TypeCtorInfo_48_48, (MR_Word) &mcov_scalar_common_1[4], mcov__PathPortCountMap_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mcov__conv3_MaybeCallInfo_21, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_CurCount_22);
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
                MR_Integer mcov__Var_33 = (mcov__OldCount_23 + mcov__CurCount_22);

                {
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__Var_33)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
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
              MR_Word mcov__next_value_of_HeadVar__1_1 = mcov__Assocs_13;
              MR_Word mcov__next_value_of_STATE_VARIABLE_ProcInfoMap_0_2 = mcov__STATE_VARIABLE_ProcInfoMap_36_36;
              MR_Word mcov__next_value_of_STATE_VARIABLE_CountMap_0_4 = mcov__STATE_VARIABLE_CountMap_34_34;

              mcov__STATE_VARIABLE_CountMap_0_4 = mcov__next_value_of_STATE_VARIABLE_CountMap_0_4;
              mcov__STATE_VARIABLE_ProcInfoMap_0_2 = mcov__next_value_of_STATE_VARIABLE_ProcInfoMap_0_2;
              mcov__HeadVar__1_1 = mcov__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

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

/* :- end_module mcov. */
