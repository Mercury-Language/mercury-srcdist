/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"



#line 51 "mcov.m"
struct mcov__main_2_p_0_4_env_0_s {
#line 51 "mcov.m"
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_1;
#line 51 "mcov.m"
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_2;
#line 51 "mcov.m"
  MR_Cont mcov__main_2_p_0_4_env_0__cont;
#line 51 "mcov.m"
  void * mcov__main_2_p_0_4_env_0__cont_env_ptr;
#line 51 "mcov.m"
  MR_Word mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 51 "mcov.m"
  MR_Word mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 51 "mcov.m"
};


#line 93 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 96 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 99 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 102 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0;

#line 105 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0;

#line 108 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 111 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0;

#line 114 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4];

#line 117 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4];

#line 120 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0;

#line 123 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1];

#line 126 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1];

#line 129 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1];

#line 132 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1];

#line 135 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0;

#line 138 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1;

#line 141 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2;

#line 144 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3;

#line 147 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[4];

#line 150 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[4];

#line 153 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_option_0[4];

#line 156 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 159 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3];

#line 162 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3];

#line 165 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_proc_info_0_0;

#line 168 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1];

#line 171 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1];

#line 174 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1];

#line 177 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1];

#line 180 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 183 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 186 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
#line 189 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 191 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 194 "mcov.c"
static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
#line 197 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 199 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 201 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 204 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
#line 207 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 209 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 212 "mcov.c"
static void MR_CALL 
mcov____Compare____option_0_0_10001(
#line 215 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 217 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 219 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 222 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
#line 225 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 227 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 230 "mcov.c"
static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
#line 233 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 235 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 237 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 240 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
#line 243 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 245 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 248 "mcov.c"
static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
#line 251 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 253 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 255 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 258 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
#line 261 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 263 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 266 "mcov.c"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
#line 269 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 271 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 273 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 225 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__225__1_2_p_0(
#line 225 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 225 "mcov.m"
  MR_Word mcov__HeadVar__2_22);

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__158__1_2_p_0(
#line 158 "mcov.m"
  MR_Word mcov__Modules_12,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_31);

#line 145 "mcov.m"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
#line 145 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 145 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 130 "mcov.m"
static void MR_CALL 
mcov____Compare____proc_info_0_0(
#line 130 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 130 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 375 "mcov.m"
static void MR_CALL 
mcov____Compare____option_table_0_0(
#line 375 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 375 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 369 "mcov.m"
static void MR_CALL 
mcov____Compare____option_0_0(
#line 369 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 369 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_0_0(
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_1,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 137 "mcov.m"
static void MR_CALL 
mcov____Compare____label_info_0_0(
#line 137 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 137 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 379 "mcov.m"
static void MR_CALL 
mcov__option_default_2_p_0(
#line 379 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 379 "mcov.m"
  MR_Word * mcov__HeadVar__2_2,
#line 379 "mcov.m"
  MR_Cont mcov__cont,
#line 379 "mcov.m"
  void * mcov__cont_env_ptr);

#line 378 "mcov.m"
static MR_bool MR_CALL 
mcov__long_option_2_p_0(
#line 378 "mcov.m"
  MR_String mcov__HeadVar__1_1,
#line 378 "mcov.m"
  MR_Word * mcov__HeadVar__2_2);

#line 377 "mcov.m"
static MR_bool MR_CALL 
mcov__short_option_2_p_0(
#line 377 "mcov.m"
  MR_Char mcov__HeadVar__1_1,
#line 377 "mcov.m"
  MR_Word * mcov__HeadVar__2_2);

#line 350 "mcov.m"
static void MR_CALL 
mcov__usage_2_p_0(void);

#line 301 "mcov.m"
static void MR_CALL 
mcov__write_label_info_3_p_0(
#line 301 "mcov.m"
  MR_Word mcov__LabelInfo_4);

#line 290 "mcov.m"
static void MR_CALL 
mcov__write_proc_info_3_p_0(
#line 290 "mcov.m"
  MR_Word mcov__ProcInfo_4);

#line 253 "mcov.m"
static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
#line 253 "mcov.m"
  MR_Word mcov__ProcLabel_7,
#line 253 "mcov.m"
  MR_String mcov__FileName_8,
#line 253 "mcov.m"
  MR_Word mcov__PathPort_9,
#line 253 "mcov.m"
  MR_Word mcov__LineNumberAndCount_10,
#line 253 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
#line 253 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17);

#line 249 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
#line 249 "mcov.m"
  MR_Box mcov__closure_arg,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 249 "mcov.m"
  MR_Box * mcov__wrapper_arg_4);

#line 242 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
#line 242 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 242 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
#line 242 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3);

#line 232 "mcov.m"
static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
#line 232 "mcov.m"
  MR_Word mcov__ProcInfoMap_4,
#line 232 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 232 "mcov.m"
  MR_Word * mcov__ProcInfo_7);

#line 225 "mcov.m"
static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
#line 225 "mcov.m"
  MR_Box mcov__closure_arg);

#line 217 "mcov.m"
static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
#line 217 "mcov.m"
  MR_Word mcov__PathPort_7,
#line 217 "mcov.m"
  MR_Word mcov__LineNumberAndCount_8,
#line 217 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 217 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
#line 217 "mcov.m"
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
#line 217 "mcov.m"
  MR_Integer * mcov__STATE_VARIABLE_Count_17);

#line 201 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
#line 201 "mcov.m"
  MR_Box mcov__closure_arg,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 201 "mcov.m"
  MR_Box * mcov__wrapper_arg_4,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_5,
#line 201 "mcov.m"
  MR_Box * mcov__wrapper_arg_6);

#line 193 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
#line 193 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 193 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
#line 193 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
#line 193 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
#line 193 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_CountMap_5);

#line 171 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
#line 171 "mcov.m"
  MR_Box mcov__closure_arg,
#line 171 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 171 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 171 "mcov.m"
  MR_Box * mcov__wrapper_arg_3);

#line 165 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_3(
#line 165 "mcov.m"
  MR_Box mcov__closure_arg,
#line 165 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 165 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 165 "mcov.m"
  MR_Box * mcov__wrapper_arg_3);

#line 190 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
#line 190 "mcov.m"
  MR_Box mcov__closure_arg,
#line 190 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 190 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
#line 158 "mcov.m"
  MR_Box mcov__closure_arg,
#line 158 "mcov.m"
  MR_Box mcov__wrapper_arg_1);

#line 148 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0(
#line 148 "mcov.m"
  MR_Word mcov__Detailed_6,
#line 148 "mcov.m"
  MR_Word mcov__RestrictToModules_7,
#line 148 "mcov.m"
  MR_Word mcov__TraceCountMap_8);

#line 86 "mcov.m"
static MR_Box MR_CALL 
main_2_p_0_5(
#line 86 "mcov.m"
  MR_Box mcov__closure_arg,
#line 86 "mcov.m"
  MR_Box mcov__wrapper_arg_1);

#line 51 "mcov.m"
static void MR_CALL 
main_2_p_0_3(
#line 51 "mcov.m"
  void * mcov__env_ptr_arg);

#line 51 "mcov.m"
static void MR_CALL 
main_2_p_0_4(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2,
#line 51 "mcov.m"
  MR_Cont mcov__cont,
#line 51 "mcov.m"
  void * mcov__cont_env_ptr);

#line 51 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);

#line 51 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);


static /* final */ const MR_Box mcov_scalar_common_1[12][3];

static /* final */ const MR_Box mcov_scalar_common_2[17][2];

static /* final */ const MR_Box mcov_scalar_common_3[6][5];

static /* final */ const MR_Box mcov_scalar_common_4[3][6];

static /* final */ const MR_Box mcov_scalar_common_5[2][9];

static /* final */ const MR_Box mcov_scalar_common_6[1][1];


#line 381 "mcov.m"
/* sealed */ struct mcov__vector_common_type_7_0_s {
#line 381 "mcov.m"
  const MR_Word mcov__vector_common_type_7_0__vct_7_f_0;
#line 381 "mcov.m"
  const MR_Word mcov__vector_common_type_7_0__vct_7_f_1;
#line 381 "mcov.m"
};

static /* final */ const struct mcov__vector_common_type_7_0_s mcov_vector_common_7[4];



static /* final */ const MR_Box mcov_scalar_common_1[12][3] = {
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
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
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
    ((MR_Box) (main_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mcov_scalar_common_4[1])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mcov_scalar_common_4[2])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mcov_scalar_common_5[0])),
    ((MR_Box) (mcov__collect_proc_infos_counts_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_2[17][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mcov_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "of the output file.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "The argument of the -o or --output-file option gives the name\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "will be restricted to the modules named by their arguments.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "If one or more -m or --module options are given, then the output\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "file1, file2, etc should be trace count files.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "to be printed as it is added to the union.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "The -v or --verbose option causes each trace count file name\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "has been executed in the same procedure.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "each label that has not been executed, even if some other code\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "The -d or --detailed option causes the printing of a report for\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Usage: mcov [-d] [-v] [-m module] [-o output_file] file1 file2 ...\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
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
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
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

static /* final */ const MR_Box mcov_scalar_common_4[3][6] = {
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

static /* final */ const MR_Box mcov_scalar_common_5[2][9] = {
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

static /* final */ const MR_Box mcov_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct mcov__vector_common_type_7_0_s mcov_vector_common_7[4] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_6[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(3), &mcov_scalar_common_2[15])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(3), &mcov_scalar_common_2[16])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_6[0])
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 973 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 981 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 990 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 999 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_proc_info_0
  }
};

#line 1008 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1017 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1025 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_label_info_0
  }
};

#line 1033 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0
};

#line 1041 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4] = {
  (MR_String) "label_source_file",
  (MR_String) "label_line_number",
  (MR_String) "label_proc",
  (MR_String) "label_path_port"
};

#line 1049 "mcov.c"
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
  NULL
};

#line 1064 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

#line 1069 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_label_info_0_0
  }
};

#line 1078 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

#line 1083 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1] = {
  (MR_Integer) 0
};

#line 1088 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____label_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____label_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "label_info",
  {
    mcov__mcov__du_name_ordered_label_info_0
  },
  {
    mcov__mcov__du_ptag_ordered_label_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_label_info_0
};

#line 1109 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0 = {
  (MR_String) "detailed",
  (MR_Integer) 0
};

#line 1115 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1 = {
  (MR_String) "modules",
  (MR_Integer) 1
};

#line 1121 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2 = {
  (MR_String) "output_filename",
  (MR_Integer) 2
};

#line 1127 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3 = {
  (MR_String) "verbose",
  (MR_Integer) 3
};

#line 1133 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[4] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3
};

#line 1141 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[4] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3
};

#line 1149 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_option_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1157 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mcov____Unify____option_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option",
  {
    mcov__mcov__enum_name_ordered_option_0
  },
  {
    mcov__mcov__enum_value_ordered_option_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_option_0
};

#line 1178 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mcov__mcov__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1187 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____option_table_0_0_10001)),
  ((MR_Box) (mcov____Compare____option_table_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1208 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 1215 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3] = {
  (MR_String) "proc_source_file",
  (MR_String) "proc_line_number",
  (MR_String) "proc_proc"
};

#line 1222 "mcov.c"
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
  NULL
};

#line 1237 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

#line 1242 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_proc_info_0_0
  }
};

#line 1251 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

#line 1256 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1261 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mcov____Unify____proc_info_0_0_10001)),
  ((MR_Box) (mcov____Compare____proc_info_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "proc_info",
  {
    mcov__mcov__du_name_ordered_proc_info_0
  },
  {
    mcov__mcov__du_ptag_ordered_proc_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mcov__mcov__functor_number_map_proc_info_0
};

#line 1282 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1291 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1299 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_trace_counts_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mcov____Unify____trace_counts_list_0_0_10001)),
  ((MR_Box) (mcov____Compare____trace_counts_list_0_0_10001)),
  (MR_String) "mcov",
  (MR_String) "trace_counts_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1320 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
#line 1323 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1325 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1327 "mcov.c"
{
#line 1329 "mcov.c"
  {
#line 1331 "mcov.c"
    MR_bool mcov__succeeded;

#line 1334 "mcov.c"
    {
#line 1336 "mcov.c"
      mcov__succeeded = mcov____Unify____label_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1339 "mcov.c"
    return mcov__succeeded;
#line 1341 "mcov.c"
  }
#line 1343 "mcov.c"
}

#line 1346 "mcov.c"
static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
#line 1349 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1351 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1353 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1355 "mcov.c"
{
#line 1357 "mcov.c"
  {
#line 1359 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1362 "mcov.c"
    {
#line 1364 "mcov.c"
      mcov____Compare____label_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1367 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1369 "mcov.c"
  }
#line 1371 "mcov.c"
}

#line 1374 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
#line 1377 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1379 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1381 "mcov.c"
{
#line 1383 "mcov.c"
  {
#line 1385 "mcov.c"
    MR_bool mcov__succeeded;

#line 1388 "mcov.c"
    {
#line 1390 "mcov.c"
      mcov__succeeded = mcov____Unify____option_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1393 "mcov.c"
    return mcov__succeeded;
#line 1395 "mcov.c"
  }
#line 1397 "mcov.c"
}

#line 1400 "mcov.c"
static void MR_CALL 
mcov____Compare____option_0_0_10001(
#line 1403 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1405 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1407 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1409 "mcov.c"
{
#line 1411 "mcov.c"
  {
#line 1413 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1416 "mcov.c"
    {
#line 1418 "mcov.c"
      mcov____Compare____option_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1421 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1423 "mcov.c"
  }
#line 1425 "mcov.c"
}

#line 1428 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
#line 1431 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1433 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1435 "mcov.c"
{
#line 1437 "mcov.c"
  {
#line 1439 "mcov.c"
    MR_bool mcov__succeeded;

#line 1442 "mcov.c"
    {
#line 1444 "mcov.c"
      mcov__succeeded = mcov____Unify____option_table_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1447 "mcov.c"
    return mcov__succeeded;
#line 1449 "mcov.c"
  }
#line 1451 "mcov.c"
}

#line 1454 "mcov.c"
static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
#line 1457 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1459 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1461 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1463 "mcov.c"
{
#line 1465 "mcov.c"
  {
#line 1467 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1470 "mcov.c"
    {
#line 1472 "mcov.c"
      mcov____Compare____option_table_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1475 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1477 "mcov.c"
  }
#line 1479 "mcov.c"
}

#line 1482 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
#line 1485 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1487 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1489 "mcov.c"
{
#line 1491 "mcov.c"
  {
#line 1493 "mcov.c"
    MR_bool mcov__succeeded;

#line 1496 "mcov.c"
    {
#line 1498 "mcov.c"
      mcov__succeeded = mcov____Unify____proc_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1501 "mcov.c"
    return mcov__succeeded;
#line 1503 "mcov.c"
  }
#line 1505 "mcov.c"
}

#line 1508 "mcov.c"
static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
#line 1511 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1513 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1515 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1517 "mcov.c"
{
#line 1519 "mcov.c"
  {
#line 1521 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1524 "mcov.c"
    {
#line 1526 "mcov.c"
      mcov____Compare____proc_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1529 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1531 "mcov.c"
  }
#line 1533 "mcov.c"
}

#line 1536 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
#line 1539 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1541 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1543 "mcov.c"
{
#line 1545 "mcov.c"
  {
#line 1547 "mcov.c"
    MR_bool mcov__succeeded;

#line 1550 "mcov.c"
    {
#line 1552 "mcov.c"
      mcov__succeeded = mcov____Unify____trace_counts_list_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1555 "mcov.c"
    return mcov__succeeded;
#line 1557 "mcov.c"
  }
#line 1559 "mcov.c"
}

#line 1562 "mcov.c"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
#line 1565 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1567 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1569 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1571 "mcov.c"
{
#line 1573 "mcov.c"
  {
#line 1575 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1578 "mcov.c"
    {
#line 1580 "mcov.c"
      mcov____Compare____trace_counts_list_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1583 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1585 "mcov.c"
  }
#line 1587 "mcov.c"
}

#line 225 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__225__1_2_p_0(
#line 225 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 225 "mcov.m"
  MR_Word mcov__HeadVar__2_22)
#line 225 "mcov.m"
{
#line 225 "mcov.m"
  {
#line 225 "mcov.m"
    MR_bool mcov__succeeded;

#line 225 "mcov.m"
    {
#line 225 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[0], ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14)), ((MR_Box) (mcov__HeadVar__2_22)));
    }
#line 225 "mcov.m"
    return mcov__succeeded;
#line 225 "mcov.m"
  }
#line 225 "mcov.m"
}

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__158__1_2_p_0(
#line 158 "mcov.m"
  MR_Word mcov__Modules_12,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_31)
#line 158 "mcov.m"
{
#line 158 "mcov.m"
  {
#line 158 "mcov.m"
    MR_bool mcov__succeeded;
#line 158 "mcov.m"
    MR_Word mcov__ProcLabelInContext_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_31, (MR_Integer) 0)));
#line 158 "mcov.m"
    MR_Word mcov__Module_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_45, (MR_Integer) 0)));
#line 177 "mcov.m"
    MR_Word mcov__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_31, (MR_Integer) 1)));
#line 178 "mcov.m"
    MR_String mcov__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_45, (MR_Integer) 1)));
#line 178 "mcov.m"
    MR_Word mcov__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_45, (MR_Integer) 2)));

#line 179 "mcov.m"
    {
#line 179 "mcov.m"
      return mcov__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (mcov__Module_47)), mcov__Modules_12);
    }
#line 158 "mcov.m"
    return mcov__succeeded;
#line 158 "mcov.m"
  }
#line 158 "mcov.m"
}

#line 145 "mcov.m"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
#line 145 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 145 "mcov.m"
{
#line 145 "mcov.m"
  {
#line 145 "mcov.m"
    MR_bool mcov__succeeded;
#line 145 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
#line 145 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

#line 145 "mcov.m"
    {
#line 145 "mcov.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[2], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
#line 145 "mcov.m"
      return;
    }
#line 145 "mcov.m"
  }
#line 145 "mcov.m"
}

#line 145 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 145 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 145 "mcov.m"
{
#line 145 "mcov.m"
  {
#line 145 "mcov.m"
    MR_bool mcov__succeeded;
#line 145 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
#line 145 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

#line 145 "mcov.m"
    {
#line 145 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[2], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
#line 145 "mcov.m"
    return mcov__succeeded;
#line 145 "mcov.m"
  }
#line 145 "mcov.m"
}

#line 130 "mcov.m"
static void MR_CALL 
mcov____Compare____proc_info_0_0(
#line 130 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 130 "mcov.m"
{
#line 130 "mcov.m"
  {
#line 130 "mcov.m"
    MR_bool mcov__succeeded;
#line 130 "mcov.m"
    MR_Integer mcov__CastX_12 = (MR_Integer) mcov__HeadVar__2_2;
#line 130 "mcov.m"
    MR_Integer mcov__CastY_13 = (MR_Integer) mcov__HeadVar__3_3;

#line 130 "mcov.m"
    mcov__succeeded = (mcov__CastX_12 == mcov__CastY_13);
#line 130 "mcov.m"
    if (mcov__succeeded)
#line 1738 "mcov.c"
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "mcov.m"
    else
#line 130 "mcov.m"
      {
#line 130 "mcov.m"
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "mcov.m"
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "mcov.m"
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "mcov.m"
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "mcov.m"
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "mcov.m"
        MR_Word mcov__V_10_10;

#line 130 "mcov.m"
        {
#line 130 "mcov.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_10_10, mcov__V_4_4, mcov__V_7_7);
        }
#line 1764 "mcov.c"
        mcov__succeeded = (mcov__V_10_10 == (MR_Integer) 0);
#line 130 "mcov.m"
        mcov__succeeded = !(mcov__succeeded);
#line 130 "mcov.m"
        if (mcov__succeeded)
#line 130 "mcov.m"
          *mcov__HeadVar__1_1 = mcov__V_10_10;
#line 130 "mcov.m"
        else
#line 130 "mcov.m"
          {
#line 130 "mcov.m"
            MR_Word mcov__V_11_11;

#line 130 "mcov.m"
            {
#line 130 "mcov.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_11_11, mcov__V_5_5, mcov__V_8_8);
            }
#line 1784 "mcov.c"
            mcov__succeeded = (mcov__V_11_11 == (MR_Integer) 0);
#line 130 "mcov.m"
            mcov__succeeded = !(mcov__succeeded);
#line 130 "mcov.m"
            if (mcov__succeeded)
#line 130 "mcov.m"
              *mcov__HeadVar__1_1 = mcov__V_11_11;
#line 130 "mcov.m"
            else
#line 130 "mcov.m"
              {
#line 130 "mcov.m"
                mdbcomp__prim_data____Compare____proc_label_0_0(mcov__HeadVar__1_1, mcov__V_6_6, mcov__V_9_9);
#line 130 "mcov.m"
                return;
              }
#line 130 "mcov.m"
          }
#line 130 "mcov.m"
      }
#line 130 "mcov.m"
  }
#line 130 "mcov.m"
}

#line 130 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 130 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 130 "mcov.m"
{
#line 130 "mcov.m"
  {
#line 130 "mcov.m"
    MR_bool mcov__succeeded;
#line 130 "mcov.m"
    MR_Integer mcov__CastX_9 = (MR_Integer) mcov__HeadVar__1_1;
#line 130 "mcov.m"
    MR_Integer mcov__CastY_10 = (MR_Integer) mcov__HeadVar__2_2;

#line 130 "mcov.m"
    mcov__succeeded = (mcov__CastX_9 == mcov__CastY_10);
#line 130 "mcov.m"
    if (mcov__succeeded)
#line 130 "mcov.m"
      mcov__succeeded = MR_TRUE;
#line 130 "mcov.m"
    else
#line 130 "mcov.m"
      {
#line 130 "mcov.m"
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "mcov.m"
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "mcov.m"
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "mcov.m"
        MR_String mcov__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "mcov.m"
        MR_Integer mcov__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "mcov.m"
        MR_Word mcov__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));

#line 1851 "mcov.c"
        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_6_6) == 0);
#line 130 "mcov.m"
        if (mcov__succeeded)
#line 130 "mcov.m"
          {
#line 1857 "mcov.c"
            mcov__succeeded = (mcov__V_4_4 == mcov__V_7_7);
#line 130 "mcov.m"
            if (mcov__succeeded)
#line 1861 "mcov.c"
              {
#line 1863 "mcov.c"
                return mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_8_8);
              }
#line 130 "mcov.m"
          }
#line 130 "mcov.m"
      }
#line 130 "mcov.m"
    return mcov__succeeded;
#line 130 "mcov.m"
  }
#line 130 "mcov.m"
}

#line 375 "mcov.m"
static void MR_CALL 
mcov____Compare____option_table_0_0(
#line 375 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 375 "mcov.m"
{
#line 375 "mcov.m"
  {
#line 375 "mcov.m"
    MR_bool mcov__succeeded;
#line 375 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
#line 375 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

#line 375 "mcov.m"
    {
#line 375 "mcov.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_1[3], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
#line 375 "mcov.m"
      return;
    }
#line 375 "mcov.m"
  }
#line 375 "mcov.m"
}

#line 375 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 375 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 375 "mcov.m"
{
#line 375 "mcov.m"
  {
#line 375 "mcov.m"
    MR_bool mcov__succeeded;
#line 375 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
#line 375 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

#line 375 "mcov.m"
    {
#line 375 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_1[3], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
#line 375 "mcov.m"
    return mcov__succeeded;
#line 375 "mcov.m"
  }
#line 375 "mcov.m"
}

#line 369 "mcov.m"
static void MR_CALL 
mcov____Compare____option_0_0(
#line 369 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 369 "mcov.m"
{
#line 369 "mcov.m"
  {
#line 369 "mcov.m"
    MR_bool mcov__succeeded;
#line 369 "mcov.m"
    MR_Integer mcov__Cast_HeadVar1_4 = (MR_Integer) mcov__HeadVar__2_2;
#line 369 "mcov.m"
    MR_Integer mcov__Cast_HeadVar2_5 = (MR_Integer) mcov__HeadVar__3_3;

#line 369 "mcov.m"
    {
#line 369 "mcov.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mcov__HeadVar__1_1, mcov__Cast_HeadVar1_4, mcov__Cast_HeadVar2_5);
#line 369 "mcov.m"
      return;
    }
#line 369 "mcov.m"
  }
#line 369 "mcov.m"
}

#line 369 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_0_0(
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_1,
#line 369 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 369 "mcov.m"
{
#line 1980 "mcov.c"
  {
#line 1982 "mcov.c"
    MR_bool mcov__succeeded = (mcov__HeadVar__2_1 == mcov__HeadVar__2_2);

#line 1985 "mcov.c"
    return mcov__succeeded;
#line 1987 "mcov.c"
  }
#line 369 "mcov.m"
}

#line 137 "mcov.m"
static void MR_CALL 
mcov____Compare____label_info_0_0(
#line 137 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 137 "mcov.m"
{
#line 137 "mcov.m"
  {
#line 137 "mcov.m"
    MR_bool mcov__succeeded;
#line 137 "mcov.m"
    MR_Integer mcov__CastX_15 = (MR_Integer) mcov__HeadVar__2_2;
#line 137 "mcov.m"
    MR_Integer mcov__CastY_16 = (MR_Integer) mcov__HeadVar__3_3;

#line 137 "mcov.m"
    mcov__succeeded = (mcov__CastX_15 == mcov__CastY_16);
#line 137 "mcov.m"
    if (mcov__succeeded)
#line 2016 "mcov.c"
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "mcov.m"
    else
#line 137 "mcov.m"
      {
#line 137 "mcov.m"
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "mcov.m"
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 137 "mcov.m"
        MR_Word mcov__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));
#line 137 "mcov.m"
        MR_String mcov__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "mcov.m"
        MR_Integer mcov__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "mcov.m"
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
#line 137 "mcov.m"
        MR_Word mcov__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 3)));
#line 137 "mcov.m"
        MR_Word mcov__V_12_12;

#line 137 "mcov.m"
        {
#line 137 "mcov.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_12_12, mcov__V_4_4, mcov__V_8_8);
        }
#line 2046 "mcov.c"
        mcov__succeeded = (mcov__V_12_12 == (MR_Integer) 0);
#line 137 "mcov.m"
        mcov__succeeded = !(mcov__succeeded);
#line 137 "mcov.m"
        if (mcov__succeeded)
#line 137 "mcov.m"
          *mcov__HeadVar__1_1 = mcov__V_12_12;
#line 137 "mcov.m"
        else
#line 137 "mcov.m"
          {
#line 137 "mcov.m"
            MR_Word mcov__V_13_13;

#line 137 "mcov.m"
            {
#line 137 "mcov.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_13_13, mcov__V_5_5, mcov__V_9_9);
            }
#line 2066 "mcov.c"
            mcov__succeeded = (mcov__V_13_13 == (MR_Integer) 0);
#line 137 "mcov.m"
            mcov__succeeded = !(mcov__succeeded);
#line 137 "mcov.m"
            if (mcov__succeeded)
#line 137 "mcov.m"
              *mcov__HeadVar__1_1 = mcov__V_13_13;
#line 137 "mcov.m"
            else
#line 137 "mcov.m"
              {
#line 137 "mcov.m"
                MR_Word mcov__V_14_14;

#line 137 "mcov.m"
                {
#line 137 "mcov.m"
                  mdbcomp__prim_data____Compare____proc_label_0_0(&mcov__V_14_14, mcov__V_6_6, mcov__V_10_10);
                }
#line 2086 "mcov.c"
                mcov__succeeded = (mcov__V_14_14 == (MR_Integer) 0);
#line 137 "mcov.m"
                mcov__succeeded = !(mcov__succeeded);
#line 137 "mcov.m"
                if (mcov__succeeded)
#line 137 "mcov.m"
                  *mcov__HeadVar__1_1 = mcov__V_14_14;
#line 137 "mcov.m"
                else
#line 137 "mcov.m"
                  {
#line 137 "mcov.m"
                    mdbcomp__trace_counts____Compare____path_port_0_0(mcov__HeadVar__1_1, mcov__V_7_7, mcov__V_11_11);
#line 137 "mcov.m"
                    return;
                  }
#line 137 "mcov.m"
              }
#line 137 "mcov.m"
          }
#line 137 "mcov.m"
      }
#line 137 "mcov.m"
  }
#line 137 "mcov.m"
}

#line 137 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 137 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 137 "mcov.m"
{
#line 137 "mcov.m"
  {
#line 137 "mcov.m"
    MR_bool mcov__succeeded;
#line 137 "mcov.m"
    MR_Integer mcov__CastX_11 = (MR_Integer) mcov__HeadVar__1_1;
#line 137 "mcov.m"
    MR_Integer mcov__CastY_12 = (MR_Integer) mcov__HeadVar__2_2;

#line 137 "mcov.m"
    mcov__succeeded = (mcov__CastX_11 == mcov__CastY_12);
#line 137 "mcov.m"
    if (mcov__succeeded)
#line 137 "mcov.m"
      mcov__succeeded = MR_TRUE;
#line 137 "mcov.m"
    else
#line 137 "mcov.m"
      {
#line 137 "mcov.m"
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "mcov.m"
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "mcov.m"
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
#line 137 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 3)));
#line 137 "mcov.m"
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "mcov.m"
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "mcov.m"
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 137 "mcov.m"
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));

#line 2159 "mcov.c"
        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_7_7) == 0);
#line 137 "mcov.m"
        if (mcov__succeeded)
#line 137 "mcov.m"
          {
#line 2165 "mcov.c"
            mcov__succeeded = (mcov__V_4_4 == mcov__V_8_8);
#line 137 "mcov.m"
            if (mcov__succeeded)
#line 137 "mcov.m"
              {
#line 2171 "mcov.c"
                {
#line 2173 "mcov.c"
                  mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_9_9);
                }
#line 137 "mcov.m"
                if (mcov__succeeded)
#line 2178 "mcov.c"
                  {
#line 2180 "mcov.c"
                    return mcov__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mcov__V_6_6, mcov__V_10_10);
                  }
#line 137 "mcov.m"
              }
#line 137 "mcov.m"
          }
#line 137 "mcov.m"
      }
#line 137 "mcov.m"
    return mcov__succeeded;
#line 137 "mcov.m"
  }
#line 137 "mcov.m"
}

#line 379 "mcov.m"
static void MR_CALL 
mcov__option_default_2_p_0(
#line 379 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 379 "mcov.m"
  MR_Word * mcov__HeadVar__2_2,
#line 379 "mcov.m"
  MR_Cont mcov__cont,
#line 379 "mcov.m"
  void * mcov__cont_env_ptr)
#line 379 "mcov.m"
{
#line 381 "mcov.m"
  {
#line 381 "mcov.m"
    MR_bool mcov__succeeded;

#line 381 "mcov.m"
    {
#line 381 "mcov.m"
      MR_Integer mcov__slot_0 = (MR_Integer) 0;

#line 381 "mcov.m"
      do
#line 381 "mcov.m"
        {
#line 381 "mcov.m"
          *mcov__HeadVar__1_1 = ((&mcov_vector_common_7[0 + mcov__slot_0]))->mcov__vector_common_type_7_0__vct_7_f_0;
#line 381 "mcov.m"
          *mcov__HeadVar__2_2 = ((&mcov_vector_common_7[0 + mcov__slot_0]))->mcov__vector_common_type_7_0__vct_7_f_1;
#line 381 "mcov.m"
          {
#line 381 "mcov.m"
            mcov__cont(mcov__cont_env_ptr);
          }
#line 381 "mcov.m"
          mcov__slot_0 = (mcov__slot_0 + (MR_Integer) 1);
#line 381 "mcov.m"
        }
#line 381 "mcov.m"
      while ((mcov__slot_0 < (MR_Integer) 4));
#line 381 "mcov.m"
    }
#line 381 "mcov.m"
  }
#line 379 "mcov.m"
}

#line 378 "mcov.m"
static MR_bool MR_CALL 
mcov__long_option_2_p_0(
#line 378 "mcov.m"
  MR_String mcov__HeadVar__1_1,
#line 378 "mcov.m"
  MR_Word * mcov__HeadVar__2_2)
#line 378 "mcov.m"
{
#line 391 "mcov.m"
  {
#line 391 "mcov.m"
    MR_bool mcov__succeeded;

#line 391 "mcov.m"
    if ((strcmp(mcov__HeadVar__1_1, (MR_String) "module") == 0))
#line 392 "mcov.m"
      {
#line 392 "mcov.m"
        *mcov__HeadVar__2_2 = (MR_Integer) 1;
#line 392 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 392 "mcov.m"
      }
#line 391 "mcov.m"
    else
#line 391 "mcov.m"
      if ((strcmp(mcov__HeadVar__1_1, (MR_String) "verbose") == 0))
#line 394 "mcov.m"
        {
#line 394 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 3;
#line 394 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 394 "mcov.m"
        }
#line 391 "mcov.m"
      else
#line 391 "mcov.m"
        if ((strcmp(mcov__HeadVar__1_1, (MR_String) "detailed") == 0))
#line 391 "mcov.m"
          {
#line 391 "mcov.m"
            *mcov__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "mcov.m"
            mcov__succeeded = MR_TRUE;
#line 391 "mcov.m"
          }
#line 391 "mcov.m"
        else
#line 391 "mcov.m"
          if ((strcmp(mcov__HeadVar__1_1, (MR_String) "output-file") == 0))
#line 393 "mcov.m"
            {
#line 393 "mcov.m"
              *mcov__HeadVar__2_2 = (MR_Integer) 2;
#line 393 "mcov.m"
              mcov__succeeded = MR_TRUE;
#line 393 "mcov.m"
            }
#line 391 "mcov.m"
          else
#line 391 "mcov.m"
            mcov__succeeded = MR_FALSE;
#line 391 "mcov.m"
    return mcov__succeeded;
#line 391 "mcov.m"
  }
#line 378 "mcov.m"
}

#line 377 "mcov.m"
static MR_bool MR_CALL 
mcov__short_option_2_p_0(
#line 377 "mcov.m"
  MR_Char mcov__HeadVar__1_1,
#line 377 "mcov.m"
  MR_Word * mcov__HeadVar__2_2)
#line 377 "mcov.m"
{
#line 386 "mcov.m"
  {
#line 386 "mcov.m"
    MR_bool mcov__succeeded;

#line 386 "mcov.m"
    if ((mcov__HeadVar__1_1 == (MR_Char) 100))
#line 386 "mcov.m"
      {
#line 386 "mcov.m"
        *mcov__HeadVar__2_2 = (MR_Integer) 0;
#line 386 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 386 "mcov.m"
      }
#line 386 "mcov.m"
    else
#line 386 "mcov.m"
      if ((mcov__HeadVar__1_1 == (MR_Char) 109))
#line 387 "mcov.m"
        {
#line 387 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 1;
#line 387 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 387 "mcov.m"
        }
#line 386 "mcov.m"
      else
#line 386 "mcov.m"
        if ((mcov__HeadVar__1_1 == (MR_Char) 111))
#line 388 "mcov.m"
          {
#line 388 "mcov.m"
            *mcov__HeadVar__2_2 = (MR_Integer) 2;
#line 388 "mcov.m"
            mcov__succeeded = MR_TRUE;
#line 388 "mcov.m"
          }
#line 386 "mcov.m"
        else
#line 386 "mcov.m"
          if ((mcov__HeadVar__1_1 == (MR_Char) 118))
#line 389 "mcov.m"
            {
#line 389 "mcov.m"
              *mcov__HeadVar__2_2 = (MR_Integer) 3;
#line 389 "mcov.m"
              mcov__succeeded = MR_TRUE;
#line 389 "mcov.m"
            }
#line 386 "mcov.m"
          else
#line 386 "mcov.m"
            mcov__succeeded = MR_FALSE;
#line 386 "mcov.m"
    return mcov__succeeded;
#line 386 "mcov.m"
  }
#line 377 "mcov.m"
}

#line 350 "mcov.m"
static void MR_CALL 
mcov__usage_2_p_0(void)
#line 350 "mcov.m"
{
#line 352 "mcov.m"
  {
#line 352 "mcov.m"
    MR_bool mcov__succeeded;

#line 353 "mcov.m"
    {
#line 353 "mcov.m"
      mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_2[13]));
#line 353 "mcov.m"
      return;
    }
#line 352 "mcov.m"
  }
#line 350 "mcov.m"
}

#line 301 "mcov.m"
static void MR_CALL 
mcov__write_label_info_3_p_0(
#line 301 "mcov.m"
  MR_Word mcov__LabelInfo_4)
#line 301 "mcov.m"
{
#line 303 "mcov.m"
  {
#line 303 "mcov.m"
    MR_bool mcov__succeeded;
#line 303 "mcov.m"
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 0)));
#line 303 "mcov.m"
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 1)));
#line 303 "mcov.m"
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 2)));
#line 303 "mcov.m"
    MR_Word mcov__PathPort_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 3)));

#line 305 "mcov.m"
    {
#line 305 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__FileName_6);
    }
#line 306 "mcov.m"
    {
#line 306 "mcov.m"
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
#line 307 "mcov.m"
    {
#line 307 "mcov.m"
      mercury__io__write_int_3_p_0(mcov__LineNumber_7);
    }
#line 308 "mcov.m"
    {
#line 308 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 318 "mcov.m"
    if (((MR_tag((MR_Word) mcov__ProcLabel_8)) == (MR_mktag((MR_Integer) 0))))
#line 318 "mcov.m"
      {
#line 318 "mcov.m"
        MR_Word mcov__PredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 1)));
#line 318 "mcov.m"
        MR_String mcov__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 3)));
#line 318 "mcov.m"
        MR_Integer mcov__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 4)));
#line 318 "mcov.m"
        MR_Integer mcov__Mode_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 5)));
#line 317 "mcov.m"
        MR_Word mcov___DefModuleSym_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 0)));
#line 317 "mcov.m"
        MR_Word mcov___DeclModuleSym_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 2)));

#line 322 "mcov.m"
        if ((mcov__PredOrFunc_26 == (MR_Integer) 1))
#line 323 "mcov.m"
          {
#line 324 "mcov.m"
            {
#line 324 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "func ");
            }
#line 323 "mcov.m"
          }
#line 322 "mcov.m"
        else
#line 320 "mcov.m"
          {
#line 321 "mcov.m"
            {
#line 321 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "pred ");
            }
#line 320 "mcov.m"
          }
#line 326 "mcov.m"
        {
#line 326 "mcov.m"
          mercury__term_io__quote_atom_3_p_0(mcov__Name_28);
        }
#line 327 "mcov.m"
        {
#line 327 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 328 "mcov.m"
        {
#line 328 "mcov.m"
          mercury__io__write_int_3_p_0(mcov__Arity_29);
        }
#line 329 "mcov.m"
        {
#line 329 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 330 "mcov.m"
        {
#line 330 "mcov.m"
          mercury__io__write_int_3_p_0(mcov__Mode_30);
        }
#line 318 "mcov.m"
      }
#line 318 "mcov.m"
    else
#line 333 "mcov.m"
      {
#line 334 "mcov.m"
        {
#line 334 "mcov.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label_for_user: special_pred");
#line 334 "mcov.m"
          return;
        }
#line 333 "mcov.m"
      }
#line 339 "mcov.m"
    if (((MR_tag((MR_Word) mcov__PathPort_9)) == (MR_mktag((MR_Integer) 1))))
#line 342 "mcov.m"
      {
#line 342 "mcov.m"
        MR_Word mcov__Path_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__PathPort_9, (MR_Integer) 0)));
#line 342 "mcov.m"
        MR_Word mcov__V_59_59;
#line 342 "mcov.m"
        MR_Word mcov__V_62_62;
#line 342 "mcov.m"
        MR_String mcov__V_63_63;

#line 343 "mcov.m"
        {
#line 343 "mcov.m"
          mcov__V_63_63 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_55);
        }
#line 343 "mcov.m"
        {
#line 343 "mcov.m"
          mcov__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "mcov.m"
          MR_hl_field(MR_mktag(1), mcov__V_62_62, 0) = ((MR_Box) (mcov__V_63_63));
#line 343 "mcov.m"
          MR_hl_field(MR_mktag(1), mcov__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[14])));
#line 343 "mcov.m"
        }
#line 343 "mcov.m"
        {
#line 343 "mcov.m"
          mcov__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "mcov.m"
          MR_hl_field(MR_mktag(1), mcov__V_59_59, 0) = ((MR_Box) ((MR_String) "<"));
#line 343 "mcov.m"
          MR_hl_field(MR_mktag(1), mcov__V_59_59, 1) = ((MR_Box) (mcov__V_62_62));
#line 343 "mcov.m"
        }
#line 343 "mcov.m"
        {
#line 343 "mcov.m"
          mercury__io__write_strings_3_p_0(mcov__V_59_59);
        }
#line 342 "mcov.m"
      }
#line 339 "mcov.m"
    else
#line 339 "mcov.m"
      if (((MR_tag((MR_Word) mcov__PathPort_9)) == (MR_mktag((MR_Integer) 2))))
#line 344 "mcov.m"
        {
#line 344 "mcov.m"
          MR_Word mcov__Port_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_9, (MR_Integer) 0)));
#line 344 "mcov.m"
          MR_Word mcov__Path_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_9, (MR_Integer) 1)));
#line 344 "mcov.m"
          MR_String mcov__PortStr_70;
#line 344 "mcov.m"
          MR_Word mcov__V_73_73;
#line 344 "mcov.m"
          MR_Word mcov__V_75_75;
#line 344 "mcov.m"
          MR_Word mcov__V_77_77;
#line 344 "mcov.m"
          MR_String mcov__V_78_78;

#line 345 "mcov.m"
          {
#line 345 "mcov.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_70, mcov__Port_67);
          }
#line 346 "mcov.m"
          {
#line 346 "mcov.m"
            mcov__V_78_78 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_68);
          }
#line 346 "mcov.m"
          {
#line 346 "mcov.m"
            mcov__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_77_77, 0) = ((MR_Box) (mcov__V_78_78));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[14])));
#line 346 "mcov.m"
          }
#line 346 "mcov.m"
          {
#line 346 "mcov.m"
            mcov__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_75_75, 0) = ((MR_Box) ((MR_String) " <"));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_75_75, 1) = ((MR_Box) (mcov__V_77_77));
#line 346 "mcov.m"
          }
#line 346 "mcov.m"
          {
#line 346 "mcov.m"
            mcov__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_73_73, 0) = ((MR_Box) (mcov__PortStr_70));
#line 346 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_73_73, 1) = ((MR_Box) (mcov__V_75_75));
#line 346 "mcov.m"
          }
#line 346 "mcov.m"
          {
#line 346 "mcov.m"
            mercury__io__write_strings_3_p_0(mcov__V_73_73);
          }
#line 344 "mcov.m"
        }
#line 339 "mcov.m"
      else
#line 339 "mcov.m"
        {
#line 339 "mcov.m"
          MR_Word mcov__Port_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_9, (MR_Integer) 0)));
#line 339 "mcov.m"
          MR_String mcov__PortStr_51;

#line 340 "mcov.m"
          {
#line 340 "mcov.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_51, mcov__Port_49);
          }
#line 341 "mcov.m"
          {
#line 341 "mcov.m"
            mercury__io__write_string_3_p_0(mcov__PortStr_51);
          }
#line 339 "mcov.m"
        }
#line 311 "mcov.m"
    {
#line 311 "mcov.m"
      mercury__io__nl_2_p_0();
#line 311 "mcov.m"
      return;
    }
#line 303 "mcov.m"
  }
#line 301 "mcov.m"
}

#line 290 "mcov.m"
static void MR_CALL 
mcov__write_proc_info_3_p_0(
#line 290 "mcov.m"
  MR_Word mcov__ProcInfo_4)
#line 290 "mcov.m"
{
#line 292 "mcov.m"
  {
#line 292 "mcov.m"
    MR_bool mcov__succeeded;
#line 292 "mcov.m"
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 0)));
#line 292 "mcov.m"
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 1)));
#line 292 "mcov.m"
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 2)));

#line 294 "mcov.m"
    {
#line 294 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__FileName_6);
    }
#line 295 "mcov.m"
    {
#line 295 "mcov.m"
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
#line 296 "mcov.m"
    {
#line 296 "mcov.m"
      mercury__io__write_int_3_p_0(mcov__LineNumber_7);
    }
#line 297 "mcov.m"
    {
#line 297 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 318 "mcov.m"
    if (((MR_tag((MR_Word) mcov__ProcLabel_8)) == (MR_mktag((MR_Integer) 0))))
#line 318 "mcov.m"
      {
#line 318 "mcov.m"
        MR_Word mcov__PredOrFunc_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 1)));
#line 318 "mcov.m"
        MR_String mcov__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 3)));
#line 318 "mcov.m"
        MR_Integer mcov__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 4)));
#line 318 "mcov.m"
        MR_Integer mcov__Mode_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 5)));
#line 317 "mcov.m"
        MR_Word mcov___DefModuleSym_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 0)));
#line 317 "mcov.m"
        MR_Word mcov___DeclModuleSym_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_8, (MR_Integer) 2)));

#line 322 "mcov.m"
        if ((mcov__PredOrFunc_24 == (MR_Integer) 1))
#line 323 "mcov.m"
          {
#line 324 "mcov.m"
            {
#line 324 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "func ");
            }
#line 323 "mcov.m"
          }
#line 322 "mcov.m"
        else
#line 320 "mcov.m"
          {
#line 321 "mcov.m"
            {
#line 321 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "pred ");
            }
#line 320 "mcov.m"
          }
#line 326 "mcov.m"
        {
#line 326 "mcov.m"
          mercury__term_io__quote_atom_3_p_0(mcov__Name_26);
        }
#line 327 "mcov.m"
        {
#line 327 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 328 "mcov.m"
        {
#line 328 "mcov.m"
          mercury__io__write_int_3_p_0(mcov__Arity_27);
        }
#line 329 "mcov.m"
        {
#line 329 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 330 "mcov.m"
        {
#line 330 "mcov.m"
          mercury__io__write_int_3_p_0(mcov__Mode_28);
        }
#line 318 "mcov.m"
      }
#line 318 "mcov.m"
    else
#line 333 "mcov.m"
      {
#line 334 "mcov.m"
        {
#line 334 "mcov.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label_for_user: special_pred");
#line 334 "mcov.m"
          return;
        }
#line 333 "mcov.m"
      }
#line 299 "mcov.m"
    {
#line 299 "mcov.m"
      mercury__io__nl_2_p_0();
#line 299 "mcov.m"
      return;
    }
#line 292 "mcov.m"
  }
#line 290 "mcov.m"
}

#line 253 "mcov.m"
static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
#line 253 "mcov.m"
  MR_Word mcov__ProcLabel_7,
#line 253 "mcov.m"
  MR_String mcov__FileName_8,
#line 253 "mcov.m"
  MR_Word mcov__PathPort_9,
#line 253 "mcov.m"
  MR_Word mcov__LineNumberAndCount_10,
#line 253 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
#line 253 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17)
#line 253 "mcov.m"
{
#line 258 "mcov.m"
  {
#line 258 "mcov.m"
    MR_bool mcov__succeeded;
#line 258 "mcov.m"
    MR_Integer mcov__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 0)));
#line 258 "mcov.m"
    MR_Integer mcov__Count_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 1)));
#line 259 "mcov.m"
    MR_Integer mcov___NumTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 2)));

#line 261 "mcov.m"
    mcov__succeeded = (mcov__Count_13 == (MR_Integer) 0);
#line 261 "mcov.m"
    if (mcov__succeeded)
#line 280 "mcov.m"
      {
#line 280 "mcov.m"
        if (((MR_tag((MR_Word) mcov__ProcLabel_7)) == (MR_mktag((MR_Integer) 0))))
#line 280 "mcov.m"
          {
#line 280 "mcov.m"
            MR_Word mcov__DefModuleSym_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 0)));
#line 280 "mcov.m"
            MR_Word mcov__DeclModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 2)));
#line 279 "mcov.m"
            MR_Word mcov__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 1)));
#line 279 "mcov.m"
            MR_String mcov__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 3)));
#line 279 "mcov.m"
            MR_Integer mcov__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 4)));
#line 279 "mcov.m"
            MR_Integer mcov__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 5)));

#line 281 "mcov.m"
            {
#line 281 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_20, mcov__DeclModuleSym_22);
            }
#line 280 "mcov.m"
          }
#line 280 "mcov.m"
        else
#line 284 "mcov.m"
          {
#line 284 "mcov.m"
            MR_Word mcov__TypeModuleSym_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 2)));
#line 284 "mcov.m"
            MR_Word mcov__DefModuleSym_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 0)));
#line 283 "mcov.m"
            MR_Word mcov__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 1)));
#line 283 "mcov.m"
            MR_String mcov__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 3)));
#line 283 "mcov.m"
            MR_Integer mcov__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 4)));
#line 283 "mcov.m"
            MR_Integer mcov__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 5)));

#line 285 "mcov.m"
            {
#line 285 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_31, mcov__TypeModuleSym_27);
            }
#line 284 "mcov.m"
          }
#line 280 "mcov.m"
      }
#line 266 "mcov.m"
    if (mcov__succeeded)
#line 264 "mcov.m"
      {
#line 264 "mcov.m"
        MR_Word mcov__LabelInfo_15;

#line 264 "mcov.m"
        {
#line 264 "mcov.m"
          mcov__LabelInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 264 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 0) = ((MR_Box) (mcov__FileName_8));
#line 264 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 1) = ((MR_Box) (mcov__LineNumber_12));
#line 264 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 2) = ((MR_Box) (mcov__ProcLabel_7));
#line 264 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 3) = ((MR_Box) (mcov__PathPort_9));
#line 264 "mcov.m"
        }
#line 265 "mcov.m"
        {
#line 265 "mcov.m"
          MR_Word base;
#line 265 "mcov.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "mcov.m"
          *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = base;
#line 265 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LabelInfo_15));
#line 265 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_16));
#line 265 "mcov.m"
        }
#line 264 "mcov.m"
      }
#line 266 "mcov.m"
    else
#line 265 "mcov.m"
      *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_16;
#line 258 "mcov.m"
  }
#line 253 "mcov.m"
}

#line 249 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
#line 249 "mcov.m"
  MR_Box mcov__closure_arg,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 249 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 249 "mcov.m"
  MR_Box * mcov__wrapper_arg_4)
#line 249 "mcov.m"
{
#line 249 "mcov.m"
  {
#line 249 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 249 "mcov.m"
    MR_Word mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17;

#line 249 "mcov.m"
    {
#line 249 "mcov.m"
      mcov__label_process_path_port_count_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))), ((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17);
    }
#line 249 "mcov.m"
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17));
#line 249 "mcov.m"
  }
#line 249 "mcov.m"
}

#line 242 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
#line 242 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 242 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
#line 242 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3)
#line 242 "mcov.m"
{
#line 245 "mcov.m"
  while (MR_TRUE)
#line 245 "mcov.m"
    {
#line 245 "mcov.m"
      /* tailcall optimized into a loop */
#line 245 "mcov.m"
      {
#line 245 "mcov.m"
        MR_bool mcov__succeeded;

#line 245 "mcov.m"
        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "mcov.m"
          *mcov__STATE_VARIABLE_ZeroLabelInfos_3 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_2;
#line 245 "mcov.m"
        else
#line 246 "mcov.m"
          {
#line 246 "mcov.m"
            MR_Word mcov__Assoc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "mcov.m"
            MR_Word mcov__Assocs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "mcov.m"
            MR_Word mcov__LabelFilename_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 0)));
#line 246 "mcov.m"
            MR_Word mcov__PathPortCountMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 1)));
#line 246 "mcov.m"
            MR_String mcov__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 1)));
#line 246 "mcov.m"
            MR_Word mcov__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 2)));
#line 246 "mcov.m"
            MR_Word mcov__V_17_17;
#line 246 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;
#line 248 "mcov.m"
            MR_Word mcov___ModuleNameSym_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 0)));
#line 249 "mcov.m"
            MR_Box mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18;

#line 249 "mcov.m"
            {
#line 249 "mcov.m"
              mcov__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 249 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 0) = ((MR_Box) (&mcov_scalar_common_5[1]));
#line 249 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 1) = ((MR_Box) (mcov__collect_zero_count_local_labels_3_p_0_1));
#line 249 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 249 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 3) = ((MR_Box) (mcov__ProcLabel_14));
#line 249 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 4) = ((MR_Box) (mcov__FileName_13));
#line 249 "mcov.m"
            }
#line 249 "mcov.m"
            {
#line 249 "mcov.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[1], mcov__V_17_17, mcov__PathPortCountMap_11, ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_2)), &mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            }
#line 249 "mcov.m"
            mcov__STATE_VARIABLE_ZeroLabelInfos_18_18 = ((MR_Word) mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
#line 251 "mcov.m"
            /* direct tailcall eliminated */
#line 251 "mcov.m"
            {
#line 251 "mcov.m"
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_8;
#line 251 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;

#line 251 "mcov.m"
              mcov__STATE_VARIABLE_ZeroLabelInfos_0_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2;
#line 251 "mcov.m"
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
#line 251 "mcov.m"
            }
#line 251 "mcov.m"
            continue;
#line 246 "mcov.m"
          }
#line 245 "mcov.m"
      }
#line 245 "mcov.m"
      break;
#line 245 "mcov.m"
    }
#line 242 "mcov.m"
}

#line 232 "mcov.m"
static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
#line 232 "mcov.m"
  MR_Word mcov__ProcInfoMap_4,
#line 232 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 232 "mcov.m"
  MR_Word * mcov__ProcInfo_7)
#line 232 "mcov.m"
{
#line 235 "mcov.m"
  {
#line 235 "mcov.m"
    MR_bool mcov__succeeded;
#line 235 "mcov.m"
    MR_Word mcov__TypeCtorInfo_8_8;
#line 235 "mcov.m"
    MR_Word mcov__TypeCtorInfo_9_9;
#line 235 "mcov.m"
    MR_Word mcov__ProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "mcov.m"
    MR_Integer mcov__Count_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "mcov.m"
    MR_Box mcov__conv0_ProcInfo_7;

#line 236 "mcov.m"
    mcov__succeeded = (mcov__Count_6 == (MR_Integer) 0);
#line 235 "mcov.m"
    if (mcov__succeeded)
#line 235 "mcov.m"
      {
#line 280 "mcov.m"
        if (((MR_tag((MR_Word) mcov__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
#line 280 "mcov.m"
          {
#line 280 "mcov.m"
            MR_Word mcov__DefModuleSym_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 0)));
#line 280 "mcov.m"
            MR_Word mcov__DeclModuleSym_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 2)));
#line 279 "mcov.m"
            MR_Word mcov__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 1)));
#line 279 "mcov.m"
            MR_String mcov__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 3)));
#line 279 "mcov.m"
            MR_Integer mcov__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 4)));
#line 279 "mcov.m"
            MR_Integer mcov__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 5)));

#line 281 "mcov.m"
            {
#line 281 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_11, mcov__DeclModuleSym_13);
            }
#line 280 "mcov.m"
          }
#line 280 "mcov.m"
        else
#line 284 "mcov.m"
          {
#line 284 "mcov.m"
            MR_Word mcov__TypeModuleSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 2)));
#line 284 "mcov.m"
            MR_Word mcov__DefModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 0)));
#line 283 "mcov.m"
            MR_Word mcov__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 1)));
#line 283 "mcov.m"
            MR_String mcov__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 3)));
#line 283 "mcov.m"
            MR_Integer mcov__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 4)));
#line 283 "mcov.m"
            MR_Integer mcov__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 5)));

#line 285 "mcov.m"
            {
#line 285 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_22, mcov__TypeModuleSym_18);
            }
#line 284 "mcov.m"
          }
#line 235 "mcov.m"
        if (mcov__succeeded)
#line 235 "mcov.m"
          {
#line 3153 "mcov.c"
            mcov__TypeCtorInfo_8_8 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 3155 "mcov.c"
            mcov__TypeCtorInfo_9_9 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 238 "mcov.m"
            {
#line 238 "mcov.m"
              mercury__map__lookup_3_p_0(mcov__TypeCtorInfo_8_8, mcov__TypeCtorInfo_9_9, mcov__ProcInfoMap_4, ((MR_Box) (mcov__ProcLabel_5)), &mcov__conv0_ProcInfo_7);
            }
#line 238 "mcov.m"
            *mcov__ProcInfo_7 = ((MR_Word) mcov__conv0_ProcInfo_7);
#line 238 "mcov.m"
            mcov__succeeded = MR_TRUE;
#line 235 "mcov.m"
          }
#line 235 "mcov.m"
      }
#line 235 "mcov.m"
    return mcov__succeeded;
#line 235 "mcov.m"
  }
#line 232 "mcov.m"
}

#line 225 "mcov.m"
static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
#line 225 "mcov.m"
  MR_Box mcov__closure_arg)
#line 225 "mcov.m"
{
#line 225 "mcov.m"
  {
#line 225 "mcov.m"
    MR_bool mcov__succeeded;
#line 225 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 225 "mcov.m"
    {
#line 225 "mcov.m"
      return mcov__succeeded = mcov__IntroducedFrom__pred__proc_process_path_port_count__225__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))));
    }
#line 225 "mcov.m"
    return mcov__succeeded;
#line 225 "mcov.m"
  }
#line 225 "mcov.m"
}

#line 217 "mcov.m"
static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
#line 217 "mcov.m"
  MR_Word mcov__PathPort_7,
#line 217 "mcov.m"
  MR_Word mcov__LineNumberAndCount_8,
#line 217 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 217 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
#line 217 "mcov.m"
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
#line 217 "mcov.m"
  MR_Integer * mcov__STATE_VARIABLE_Count_17)
#line 217 "mcov.m"
{
#line 221 "mcov.m"
  {
#line 221 "mcov.m"
    MR_bool mcov__succeeded;
#line 221 "mcov.m"
    MR_Integer mcov__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 0)));
#line 221 "mcov.m"
    MR_Integer mcov__CurCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 1)));
#line 222 "mcov.m"
    MR_Integer mcov___NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 2)));
#line 224 "mcov.m"
    MR_Word mcov__V_19_19;

#line 223 "mcov.m"
    *mcov__STATE_VARIABLE_Count_17 = (mcov__STATE_VARIABLE_Count_0_16 + mcov__CurCount_12);
#line 224 "mcov.m"
    mcov__succeeded = ((MR_tag((MR_Word) mcov__PathPort_7)) == (MR_mktag((MR_Integer) 0)));
#line 224 "mcov.m"
    if (mcov__succeeded)
#line 224 "mcov.m"
      {
#line 224 "mcov.m"
        mcov__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_7, (MR_Integer) 0)));
#line 224 "mcov.m"
        mcov__succeeded = (mcov__V_19_19 == (MR_Integer) 0);
#line 224 "mcov.m"
      }
#line 228 "mcov.m"
    if (mcov__succeeded)
#line 226 "mcov.m"
      {
#line 226 "mcov.m"
        MR_Word mcov__V_20_20;

#line 225 "mcov.m"
        {
#line 225 "mcov.m"
          mcov__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 225 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 0) = ((MR_Box) (&mcov_scalar_common_3[5]));
#line 225 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 1) = ((MR_Box) (mcov__proc_process_path_port_count_6_p_0_1));
#line 225 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 225 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 3) = ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14));
#line 225 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "mcov.m"
        }
#line 225 "mcov.m"
        {
#line 225 "mcov.m"
          mercury__require__require_2_p_0(mcov__V_20_20, (MR_String) "proc_process_path_port_count: duplicate call port:");
        }
#line 227 "mcov.m"
        {
#line 227 "mcov.m"
          MR_Word base;
#line 227 "mcov.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "mcov.m"
          *mcov__STATE_VARIABLE_MaybeCallInfo_15 = base;
#line 227 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LineNumber_11));
#line 227 "mcov.m"
        }
#line 226 "mcov.m"
      }
#line 228 "mcov.m"
    else
#line 227 "mcov.m"
      *mcov__STATE_VARIABLE_MaybeCallInfo_15 = mcov__STATE_VARIABLE_MaybeCallInfo_0_14;
#line 221 "mcov.m"
  }
#line 217 "mcov.m"
}

#line 201 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
#line 201 "mcov.m"
  MR_Box mcov__closure_arg,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 201 "mcov.m"
  MR_Box * mcov__wrapper_arg_4,
#line 201 "mcov.m"
  MR_Box mcov__wrapper_arg_5,
#line 201 "mcov.m"
  MR_Box * mcov__wrapper_arg_6)
#line 201 "mcov.m"
{
#line 201 "mcov.m"
  {
#line 201 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 201 "mcov.m"
    MR_Word mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15;
#line 201 "mcov.m"
    MR_Integer mcov__conv0_STATE_VARIABLE_Count_17;

#line 201 "mcov.m"
    {
#line 201 "mcov.m"
      mcov__proc_process_path_port_count_6_p_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15, ((MR_Integer) mcov__wrapper_arg_5), &mcov__conv0_STATE_VARIABLE_Count_17);
    }
#line 201 "mcov.m"
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15));
#line 201 "mcov.m"
    *mcov__wrapper_arg_6 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_Count_17));
#line 201 "mcov.m"
  }
#line 201 "mcov.m"
}

#line 193 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
#line 193 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 193 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
#line 193 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
#line 193 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
#line 193 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_CountMap_5)
#line 193 "mcov.m"
{
#line 197 "mcov.m"
  while (MR_TRUE)
#line 197 "mcov.m"
    {
#line 197 "mcov.m"
      /* tailcall optimized into a loop */
#line 197 "mcov.m"
      {
#line 197 "mcov.m"
        MR_bool mcov__succeeded;

#line 197 "mcov.m"
        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "mcov.m"
          {
#line 197 "mcov.m"
            *mcov__STATE_VARIABLE_CountMap_5 = mcov__STATE_VARIABLE_CountMap_0_4;
#line 197 "mcov.m"
            *mcov__STATE_VARIABLE_ProcInfoMap_3 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
#line 197 "mcov.m"
          }
#line 197 "mcov.m"
        else
#line 198 "mcov.m"
          {
#line 198 "mcov.m"
            MR_Word mcov__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 198 "mcov.m"
            MR_Word mcov__Assoc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "mcov.m"
            MR_Word mcov__Assocs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 198 "mcov.m"
            MR_Word mcov__LabelFilename_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 0)));
#line 198 "mcov.m"
            MR_Word mcov__PathPortCountMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 1)));
#line 198 "mcov.m"
            MR_String mcov__FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 1)));
#line 198 "mcov.m"
            MR_Word mcov__ProcLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 2)));
#line 198 "mcov.m"
            MR_Word mcov__MaybeCallInfo_21;
#line 198 "mcov.m"
            MR_Integer mcov__CurCount_22;
#line 198 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_CountMap_34_34;
#line 198 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_ProcInfoMap_36_36;
#line 200 "mcov.m"
            MR_Word mcov___ModuleNameSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 0)));
#line 201 "mcov.m"
            MR_Box mcov__conv3_MaybeCallInfo_21;
#line 201 "mcov.m"
            MR_Box mcov__conv2_CurCount_22;
#line 205 "mcov.m"
            MR_Integer mcov__OldCount_23;
#line 203 "mcov.m"
            MR_Box mcov__conv4_OldCount_23;

#line 201 "mcov.m"
            {
#line 201 "mcov.m"
              mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[0], mcov__TypeCtorInfo_48_48, (MR_Word) &mcov_scalar_common_1[11], mcov__PathPortCountMap_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mcov__conv3_MaybeCallInfo_21, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_CurCount_22);
            }
#line 201 "mcov.m"
            mcov__MaybeCallInfo_21 = ((MR_Word) mcov__conv3_MaybeCallInfo_21);
#line 201 "mcov.m"
            mcov__CurCount_22 = ((MR_Integer) mcov__conv2_CurCount_22);
#line 203 "mcov.m"
            {
#line 203 "mcov.m"
              mcov__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, mcov__STATE_VARIABLE_CountMap_0_4, ((MR_Box) (mcov__ProcLabel_20)), &mcov__conv4_OldCount_23);
            }
#line 203 "mcov.m"
            if (mcov__succeeded)
#line 203 "mcov.m"
              {
#line 203 "mcov.m"
                mcov__OldCount_23 = ((MR_Integer) mcov__conv4_OldCount_23);
#line 203 "mcov.m"
                mcov__succeeded = MR_TRUE;
#line 203 "mcov.m"
              }
#line 205 "mcov.m"
            if (mcov__succeeded)
#line 204 "mcov.m"
              {
#line 204 "mcov.m"
                MR_Integer mcov__V_33_33 = (mcov__OldCount_23 + mcov__CurCount_22);

#line 204 "mcov.m"
                {
#line 204 "mcov.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__V_33_33)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
#line 204 "mcov.m"
              }
#line 205 "mcov.m"
            else
#line 206 "mcov.m"
              {
#line 206 "mcov.m"
                {
#line 206 "mcov.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__CurCount_22)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
#line 206 "mcov.m"
              }
#line 210 "mcov.m"
            if ((mcov__MaybeCallInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "mcov.m"
              mcov__STATE_VARIABLE_ProcInfoMap_36_36 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
#line 210 "mcov.m"
            else
#line 211 "mcov.m"
              {
#line 211 "mcov.m"
                MR_Integer mcov__LineNumber_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__MaybeCallInfo_21, (MR_Integer) 0)));
#line 211 "mcov.m"
                MR_Word mcov__ProcInfo_25;

#line 212 "mcov.m"
                {
#line 212 "mcov.m"
                  mcov__ProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 212 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 0) = ((MR_Box) (mcov__FileName_19));
#line 212 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 1) = ((MR_Box) (mcov__LineNumber_24));
#line 212 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 2) = ((MR_Box) (mcov__ProcLabel_20));
#line 212 "mcov.m"
                }
#line 213 "mcov.m"
                {
#line 213 "mcov.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__ProcInfo_25)), mcov__STATE_VARIABLE_ProcInfoMap_0_2, &mcov__STATE_VARIABLE_ProcInfoMap_36_36);
                }
#line 211 "mcov.m"
              }
#line 215 "mcov.m"
            /* direct tailcall eliminated */
#line 215 "mcov.m"
            {
#line 215 "mcov.m"
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_13;
#line 215 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2 = mcov__STATE_VARIABLE_ProcInfoMap_36_36;
#line 215 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4 = mcov__STATE_VARIABLE_CountMap_34_34;

#line 215 "mcov.m"
              mcov__STATE_VARIABLE_CountMap_0_4 = mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4;
#line 215 "mcov.m"
              mcov__STATE_VARIABLE_ProcInfoMap_0_2 = mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2;
#line 215 "mcov.m"
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
#line 215 "mcov.m"
            }
#line 215 "mcov.m"
            continue;
#line 198 "mcov.m"
          }
#line 197 "mcov.m"
      }
#line 197 "mcov.m"
      break;
#line 197 "mcov.m"
    }
#line 193 "mcov.m"
}

#line 171 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
#line 171 "mcov.m"
  MR_Box mcov__closure_arg,
#line 171 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 171 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 171 "mcov.m"
  MR_Box * mcov__wrapper_arg_3)
#line 171 "mcov.m"
{
#line 171 "mcov.m"
  {
#line 171 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 171 "mcov.m"
    {
#line 171 "mcov.m"
      mcov__write_label_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
#line 171 "mcov.m"
      return;
    }
#line 171 "mcov.m"
  }
#line 171 "mcov.m"
}

#line 165 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_3(
#line 165 "mcov.m"
  MR_Box mcov__closure_arg,
#line 165 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 165 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 165 "mcov.m"
  MR_Box * mcov__wrapper_arg_3)
#line 165 "mcov.m"
{
#line 165 "mcov.m"
  {
#line 165 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 165 "mcov.m"
    {
#line 165 "mcov.m"
      mcov__write_proc_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
#line 165 "mcov.m"
      return;
    }
#line 165 "mcov.m"
  }
#line 165 "mcov.m"
}

#line 190 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
#line 190 "mcov.m"
  MR_Box mcov__closure_arg,
#line 190 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 190 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 190 "mcov.m"
{
#line 190 "mcov.m"
  {
#line 190 "mcov.m"
    MR_bool mcov__succeeded;
#line 190 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 190 "mcov.m"
    MR_Word mcov__conv0_ProcInfo_7;

#line 190 "mcov.m"
    {
#line 190 "mcov.m"
      mcov__succeeded = mcov__is_zero_count_local_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1), &mcov__conv0_ProcInfo_7);
    }
#line 190 "mcov.m"
    if (mcov__succeeded)
#line 190 "mcov.m"
      {
#line 190 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_ProcInfo_7));
#line 190 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 190 "mcov.m"
      }
#line 190 "mcov.m"
    return mcov__succeeded;
#line 190 "mcov.m"
  }
#line 190 "mcov.m"
}

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
#line 158 "mcov.m"
  MR_Box mcov__closure_arg,
#line 158 "mcov.m"
  MR_Box mcov__wrapper_arg_1)
#line 158 "mcov.m"
{
#line 158 "mcov.m"
  {
#line 158 "mcov.m"
    MR_bool mcov__succeeded;
#line 158 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 158 "mcov.m"
    {
#line 158 "mcov.m"
      return mcov__succeeded = mcov__IntroducedFrom__pred__write_coverage_test__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
#line 158 "mcov.m"
    return mcov__succeeded;
#line 158 "mcov.m"
  }
#line 158 "mcov.m"
}

#line 148 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0(
#line 148 "mcov.m"
  MR_Word mcov__Detailed_6,
#line 148 "mcov.m"
  MR_Word mcov__RestrictToModules_7,
#line 148 "mcov.m"
  MR_Word mcov__TraceCountMap_8)
#line 148 "mcov.m"
{
#line 151 "mcov.m"
  {
#line 151 "mcov.m"
    MR_bool mcov__succeeded;
#line 151 "mcov.m"
    MR_Word mcov__TraceCounts0_10;
#line 151 "mcov.m"
    MR_Word mcov__TraceCounts_11;

#line 152 "mcov.m"
    {
#line 152 "mcov.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mcov_scalar_common_1[0], mcov__TraceCountMap_8, &mcov__TraceCounts0_10);
    }
#line 156 "mcov.m"
    if ((mcov__RestrictToModules_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "mcov.m"
      mcov__TraceCounts_11 = mcov__TraceCounts0_10;
#line 156 "mcov.m"
    else
#line 157 "mcov.m"
      {
#line 157 "mcov.m"
        MR_Word mcov__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__RestrictToModules_7, (MR_Integer) 0)));
#line 157 "mcov.m"
        MR_Word mcov__V_19_19;

#line 158 "mcov.m"
        {
#line 158 "mcov.m"
          mcov__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_19_19, 0) = ((MR_Box) (&mcov_scalar_common_3[4]));
#line 158 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_19_19, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_1));
#line 158 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_19_19, 3) = ((MR_Box) (mcov__Modules_12));
#line 158 "mcov.m"
        }
#line 158 "mcov.m"
        {
#line 158 "mcov.m"
          mercury__list__filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], mcov__V_19_19, mcov__TraceCounts0_10, &mcov__TraceCounts_11);
        }
#line 157 "mcov.m"
      }
#line 166 "mcov.m"
    if ((mcov__Detailed_6 == (MR_Integer) 0))
#line 161 "mcov.m"
      {
#line 161 "mcov.m"
        MR_Word mcov__TypeCtorInfo_34_34;
#line 161 "mcov.m"
        MR_Word mcov__TypeCtorInfo_11_52 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 161 "mcov.m"
        MR_Word mcov__TypeCtorInfo_12_53 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 161 "mcov.m"
        MR_Word mcov__TypeCtorInfo_13_54;
#line 161 "mcov.m"
        MR_Word mcov__ZeroCountProcs_13;
#line 161 "mcov.m"
        MR_Word mcov__SortedZeroCountProcs_14;
#line 161 "mcov.m"
        MR_Word mcov__ProcInfoMap_46;
#line 161 "mcov.m"
        MR_Word mcov__CountMap_47;
#line 161 "mcov.m"
        MR_Word mcov__CountList_48;
#line 161 "mcov.m"
        MR_Word mcov__V_49_49;
#line 161 "mcov.m"
        MR_Word mcov__V_50_50;
#line 161 "mcov.m"
        MR_Word mcov__V_51_51;
#line 165 "mcov.m"
        MR_Box mcov__conv1_STATE_VARIABLE_IO_18;

#line 187 "mcov.m"
        {
#line 187 "mcov.m"
          mcov__V_49_49 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_52, mcov__TypeCtorInfo_12_53);
        }
#line 3751 "mcov.c"
        mcov__TypeCtorInfo_13_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 188 "mcov.m"
        {
#line 188 "mcov.m"
          mcov__V_50_50 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_52, mcov__TypeCtorInfo_13_54);
        }
#line 187 "mcov.m"
        {
#line 187 "mcov.m"
          mcov__collect_proc_infos_counts_5_p_0(mcov__TraceCounts_11, mcov__V_49_49, &mcov__ProcInfoMap_46, mcov__V_50_50, &mcov__CountMap_47);
        }
#line 189 "mcov.m"
        {
#line 189 "mcov.m"
          mercury__map__to_assoc_list_2_p_0(mcov__TypeCtorInfo_11_52, mcov__TypeCtorInfo_13_54, mcov__CountMap_47, &mcov__CountList_48);
        }
#line 190 "mcov.m"
        {
#line 190 "mcov.m"
          mcov__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 190 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_51_51, 0) = ((MR_Box) (&mcov_scalar_common_4[0]));
#line 190 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_51_51, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_2));
#line 190 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 190 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_51_51, 3) = ((MR_Box) (mcov__ProcInfoMap_46));
#line 190 "mcov.m"
        }
#line 190 "mcov.m"
        {
#line 190 "mcov.m"
          mercury__list__filter_map_3_p_0((MR_Word) &mcov_scalar_common_1[2], mcov__TypeCtorInfo_12_53, mcov__V_51_51, mcov__CountList_48, &mcov__ZeroCountProcs_13);
        }
#line 3787 "mcov.c"
        mcov__TypeCtorInfo_34_34 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 163 "mcov.m"
        {
#line 163 "mcov.m"
          mercury__list__sort_2_p_0(mcov__TypeCtorInfo_34_34, mcov__ZeroCountProcs_13, &mcov__SortedZeroCountProcs_14);
        }
#line 164 "mcov.m"
        {
#line 164 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "Unexecuted procedures:\n\n");
        }
#line 165 "mcov.m"
        {
#line 165 "mcov.m"
          mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_34_34, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[9], mcov__SortedZeroCountProcs_14, ((MR_Box) ((MR_Integer) 0)), &mcov__conv1_STATE_VARIABLE_IO_18);
        }
#line 161 "mcov.m"
      }
#line 166 "mcov.m"
    else
#line 167 "mcov.m"
      {
#line 167 "mcov.m"
        MR_Word mcov__TypeCtorInfo_39_39;
#line 167 "mcov.m"
        MR_Word mcov__ZeroCountLabels_15;
#line 167 "mcov.m"
        MR_Word mcov__SortedZeroCountLabels_16;
#line 171 "mcov.m"
        MR_Box mcov__conv2_STATE_VARIABLE_IO_18;

#line 168 "mcov.m"
        {
#line 168 "mcov.m"
          mcov__collect_zero_count_local_labels_3_p_0(mcov__TraceCounts_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mcov__ZeroCountLabels_15);
        }
#line 3824 "mcov.c"
        mcov__TypeCtorInfo_39_39 = (MR_Word) &mcov__mcov__type_ctor_info_label_info_0;
#line 169 "mcov.m"
        {
#line 169 "mcov.m"
          mercury__list__sort_2_p_0(mcov__TypeCtorInfo_39_39, mcov__ZeroCountLabels_15, &mcov__SortedZeroCountLabels_16);
        }
#line 170 "mcov.m"
        {
#line 170 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "Unexecuted labels:\n\n");
        }
#line 171 "mcov.m"
        {
#line 171 "mcov.m"
          mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_39_39, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[10], mcov__SortedZeroCountLabels_16, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_STATE_VARIABLE_IO_18);
        }
#line 167 "mcov.m"
      }
#line 151 "mcov.m"
  }
#line 148 "mcov.m"
}

#line 86 "mcov.m"
static MR_Box MR_CALL 
main_2_p_0_5(
#line 86 "mcov.m"
  MR_Box mcov__closure_arg,
#line 86 "mcov.m"
  MR_Box mcov__wrapper_arg_1)
#line 86 "mcov.m"
{
#line 86 "mcov.m"
  {
#line 86 "mcov.m"
    MR_Box mcov__wrapper_arg_2;
#line 86 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 86 "mcov.m"
    MR_Word mcov__conv4_HeadVar__2_2;

#line 86 "mcov.m"
    {
#line 86 "mcov.m"
      mcov__conv4_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) mcov__wrapper_arg_1));
    }
#line 86 "mcov.m"
    mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv4_HeadVar__2_2));
#line 86 "mcov.m"
    return mcov__wrapper_arg_2;
#line 86 "mcov.m"
  }
#line 86 "mcov.m"
}

#line 51 "mcov.m"
static void MR_CALL 
main_2_p_0_3(
#line 51 "mcov.m"
  void * mcov__env_ptr_arg)
#line 51 "mcov.m"
{
#line 51 "mcov.m"
  {
#line 51 "mcov.m"
    struct mcov__main_2_p_0_4_env_0_s * mcov__env_ptr = (struct mcov__main_2_p_0_4_env_0_s *) mcov__env_ptr_arg;

#line 51 "mcov.m"
    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 51 "mcov.m"
    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 51 "mcov.m"
    {
#line 51 "mcov.m"
      ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont)((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont_env_ptr);
#line 51 "mcov.m"
      return;
    }
#line 51 "mcov.m"
  }
#line 51 "mcov.m"
}

#line 51 "mcov.m"
static void MR_CALL 
main_2_p_0_4(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2,
#line 51 "mcov.m"
  MR_Cont mcov__cont,
#line 51 "mcov.m"
  void * mcov__cont_env_ptr)
#line 51 "mcov.m"
{
#line 51 "mcov.m"
  {
#line 51 "mcov.m"
    struct mcov__main_2_p_0_4_env_0_s mcov__env;

#line 51 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_1 = mcov__wrapper_arg_1;
#line 51 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_2 = mcov__wrapper_arg_2;
#line 51 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__cont = mcov__cont;
#line 51 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__cont_env_ptr = mcov__cont_env_ptr;
#line 51 "mcov.m"
    {
#line 51 "mcov.m"
      MR_Box mcov__closure = mcov__closure_arg;

#line 51 "mcov.m"
      {
#line 51 "mcov.m"
        mcov__option_default_2_p_0(&(mcov__env).mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mcov__env).mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mcov__env);
      }
#line 51 "mcov.m"
    }
#line 51 "mcov.m"
  }
#line 51 "mcov.m"
}

#line 51 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 51 "mcov.m"
{
#line 51 "mcov.m"
  {
#line 51 "mcov.m"
    MR_bool mcov__succeeded;
#line 51 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 51 "mcov.m"
    MR_Word mcov__conv1_HeadVar__2_2;

#line 51 "mcov.m"
    {
#line 51 "mcov.m"
      mcov__succeeded = mcov__long_option_2_p_0(((MR_String) mcov__wrapper_arg_1), &mcov__conv1_HeadVar__2_2);
    }
#line 51 "mcov.m"
    if (mcov__succeeded)
#line 51 "mcov.m"
      {
#line 51 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv1_HeadVar__2_2));
#line 51 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 51 "mcov.m"
      }
#line 51 "mcov.m"
    return mcov__succeeded;
#line 51 "mcov.m"
  }
#line 51 "mcov.m"
}

#line 51 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 51 "mcov.m"
  MR_Box mcov__closure_arg,
#line 51 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 51 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 51 "mcov.m"
{
#line 51 "mcov.m"
  {
#line 51 "mcov.m"
    MR_bool mcov__succeeded;
#line 51 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 51 "mcov.m"
    MR_Word mcov__conv0_HeadVar__2_2;

#line 51 "mcov.m"
    {
#line 51 "mcov.m"
      mcov__succeeded = mcov__short_option_2_p_0(((MR_Char) (MR_Word) mcov__wrapper_arg_1), &mcov__conv0_HeadVar__2_2);
    }
#line 51 "mcov.m"
    if (mcov__succeeded)
#line 51 "mcov.m"
      {
#line 51 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_HeadVar__2_2));
#line 51 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 51 "mcov.m"
      }
#line 51 "mcov.m"
    return mcov__succeeded;
#line 51 "mcov.m"
  }
#line 51 "mcov.m"
}

#line 21 "mcov.m"
void MR_CALL 
main_2_p_0(void)
#line 21 "mcov.m"
{
#line 48 "mcov.m"
  {
#line 48 "mcov.m"
    MR_bool mcov__succeeded;
#line 48 "mcov.m"
    MR_Word mcov__TypeCtorInfo_79_79;
#line 48 "mcov.m"
    MR_Word mcov__Args0_4;
#line 48 "mcov.m"
    MR_Word mcov__Args_6;
#line 48 "mcov.m"
    MR_Word mcov__GetoptResult_7;

#line 49 "mcov.m"
    {
#line 49 "mcov.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 50 "mcov.m"
    {
#line 50 "mcov.m"
      mercury__io__command_line_arguments_3_p_0(&mcov__Args0_4);
    }
#line 4065 "mcov.c"
    mcov__TypeCtorInfo_79_79 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
#line 52 "mcov.m"
    {
#line 52 "mcov.m"
      mercury__getopt__process_options_4_p_0(mcov__TypeCtorInfo_79_79, (MR_Word) MR_mkword(MR_mktag(2), &mcov_scalar_common_1[7]), mcov__Args0_4, &mcov__Args_6, &mcov__GetoptResult_7);
    }
#line 112 "mcov.m"
    if (((MR_tag((MR_Word) mcov__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
#line 113 "mcov.m"
      {
#line 113 "mcov.m"
        MR_String mcov__GetoptErrorMsg_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__GetoptResult_7, (MR_Integer) 0)));

#line 114 "mcov.m"
        {
#line 114 "mcov.m"
          mercury__io__write_string_3_p_0(mcov__GetoptErrorMsg_31);
        }
#line 115 "mcov.m"
        {
#line 115 "mcov.m"
          mercury__io__nl_2_p_0();
#line 115 "mcov.m"
          return;
        }
#line 113 "mcov.m"
      }
#line 112 "mcov.m"
    else
#line 54 "mcov.m"
      {
#line 54 "mcov.m"
        MR_Word mcov__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__GetoptResult_7, (MR_Integer) 0)));

#line 108 "mcov.m"
        if ((mcov__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "mcov.m"
          {
#line 110 "mcov.m"
            mcov__usage_2_p_0();
#line 110 "mcov.m"
            return;
          }
#line 108 "mcov.m"
        else
#line 56 "mcov.m"
          {
#line 56 "mcov.m"
            MR_Word mcov__Verbose_11;
#line 56 "mcov.m"
            MR_Word mcov__FileTypes_13;
#line 56 "mcov.m"
            MR_Word mcov__TraceCounts_14;
#line 56 "mcov.m"
            MR_Word mcov__MaybeReadError_15;
#line 56 "mcov.m"
            MR_Word mcov__StdErr_16;
#line 58 "mcov.m"
            MR_Integer mcov___NumTests_12;

#line 57 "mcov.m"
            {
#line 57 "mcov.m"
              mercury__getopt__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_79_79, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &mcov__Verbose_11);
            }
#line 58 "mcov.m"
            {
#line 58 "mcov.m"
              mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mcov__Verbose_11, mcov__Args_6, &mcov___NumTests_12, &mcov__FileTypes_13, &mcov__TraceCounts_14, &mcov__MaybeReadError_15);
            }
#line 60 "mcov.m"
            {
#line 60 "mcov.m"
              mercury__io__stderr_stream_3_p_0(&mcov__StdErr_16);
            }
#line 65 "mcov.m"
            if ((mcov__MaybeReadError_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 66 "mcov.m"
              {
#line 66 "mcov.m"
                MR_Word mcov__FileTypeList_18;
#line 66 "mcov.m"
                MR_Word mcov__Detailed_22;
#line 66 "mcov.m"
                MR_Word mcov__Modules_23;
#line 66 "mcov.m"
                MR_Word mcov__RestrictToModules_24;
#line 66 "mcov.m"
                MR_String mcov__OutputFile_28;
#line 76 "mcov.m"
                MR_Word mcov__BaseType_19;
#line 68 "mcov.m"
                MR_Word mcov__V_45_45;
#line 68 "mcov.m"
                MR_Word mcov__V_46_46;

#line 67 "mcov.m"
                {
#line 67 "mcov.m"
                  mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mcov__FileTypes_13, &mcov__FileTypeList_18);
                }
#line 68 "mcov.m"
                mcov__succeeded = ((MR_tag((MR_Word) mcov__FileTypeList_18)) == (MR_mktag((MR_Integer) 1)));
#line 68 "mcov.m"
                if (mcov__succeeded)
#line 68 "mcov.m"
                  {
#line 68 "mcov.m"
                    mcov__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_18, (MR_Integer) 0)));
#line 68 "mcov.m"
                    mcov__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_18, (MR_Integer) 1)));
#line 68 "mcov.m"
                    mcov__succeeded = (mcov__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 68 "mcov.m"
                    if (mcov__succeeded)
#line 68 "mcov.m"
                      {
#line 68 "mcov.m"
                        mcov__succeeded = ((MR_tag((MR_Word) mcov__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 68 "mcov.m"
                        if (mcov__succeeded)
#line 68 "mcov.m"
                          mcov__BaseType_19 = (MR_Word) MR_body(((MR_Word) mcov__V_45_45), (MR_Integer) 0);
#line 68 "mcov.m"
                      }
#line 68 "mcov.m"
                  }
#line 76 "mcov.m"
                if (mcov__succeeded)
#line 69 "mcov.m"
                  {
#line 69 "mcov.m"
                    MR_Word mcov__Kind_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__BaseType_19, (MR_Integer) 0)));
#line 69 "mcov.m"
                    MR_String mcov___Program_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__BaseType_19, (MR_Integer) 1)));

#line 73 "mcov.m"
                    if ((mcov__Kind_20 == (MR_Integer) 0))
#line 74 "mcov.m"
                      {
#line 74 "mcov.m"
                      }
#line 73 "mcov.m"
                    else
#line 71 "mcov.m"
                      {
#line 72 "mcov.m"
                        {
#line 72 "mcov.m"
                          mercury__io__write_string_4_p_0(mcov__StdErr_16, (MR_String) "Warning: the original trace count files did not include all labels.\n");
                        }
#line 71 "mcov.m"
                      }
#line 69 "mcov.m"
                  }
#line 76 "mcov.m"
                else
#line 77 "mcov.m"
                  {
#line 77 "mcov.m"
                    {
#line 77 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_16, (MR_String) "Warning: reporting on a mixture of trace file types and/or programs.\n");
                    }
#line 77 "mcov.m"
                  }
#line 79 "mcov.m"
                {
#line 79 "mcov.m"
                  mercury__getopt__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_79_79, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mcov__Detailed_22);
                }
#line 80 "mcov.m"
                {
#line 80 "mcov.m"
                  mercury__getopt__lookup_accumulating_option_3_p_0(mcov__TypeCtorInfo_79_79, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &mcov__Modules_23);
                }
#line 84 "mcov.m"
                if ((mcov__Modules_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "mcov.m"
                  mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "mcov.m"
                else
#line 85 "mcov.m"
                  {
#line 85 "mcov.m"
                    MR_Word mcov__TypeCtorInfo_82_82 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 85 "mcov.m"
                    MR_Word mcov__ModuleSyms_27;
#line 85 "mcov.m"
                    MR_Word mcov__V_54_54;

#line 86 "mcov.m"
                    {
#line 86 "mcov.m"
                      mcov__ModuleSyms_27 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mcov__TypeCtorInfo_82_82, (MR_Word) &mcov_scalar_common_1[8], mcov__Modules_23);
                    }
#line 87 "mcov.m"
                    {
#line 87 "mcov.m"
                      mcov__V_54_54 = mercury__set__list_to_set_1_f_0(mcov__TypeCtorInfo_82_82, mcov__ModuleSyms_27);
                    }
#line 87 "mcov.m"
                    {
#line 87 "mcov.m"
                      mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 87 "mcov.m"
                      MR_hl_field(MR_mktag(1), mcov__RestrictToModules_24, 0) = ((MR_Box) (mcov__V_54_54));
#line 87 "mcov.m"
                    }
#line 85 "mcov.m"
                  }
#line 89 "mcov.m"
                {
#line 89 "mcov.m"
                  mercury__getopt__lookup_string_option_3_p_0(mcov__TypeCtorInfo_79_79, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &mcov__OutputFile_28);
                }
#line 90 "mcov.m"
                mcov__succeeded = (strcmp(mcov__OutputFile_28, (MR_String) "") == 0);
#line 93 "mcov.m"
                if (mcov__succeeded)
#line 91 "mcov.m"
                  {
#line 91 "mcov.m"
                    mcov__write_coverage_test_5_p_0(mcov__Detailed_22, mcov__RestrictToModules_24, mcov__TraceCounts_14);
#line 91 "mcov.m"
                    return;
                  }
#line 93 "mcov.m"
                else
#line 94 "mcov.m"
                  {
#line 94 "mcov.m"
                    MR_Word mcov__OpenRes_29;

#line 94 "mcov.m"
                    {
#line 94 "mcov.m"
                      mercury__io__tell_4_p_0(mcov__OutputFile_28, &mcov__OpenRes_29);
                    }
#line 99 "mcov.m"
                    if ((mcov__OpenRes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "mcov.m"
                      {
#line 97 "mcov.m"
                        mcov__write_coverage_test_5_p_0(mcov__Detailed_22, mcov__RestrictToModules_24, mcov__TraceCounts_14);
#line 97 "mcov.m"
                        return;
                      }
#line 99 "mcov.m"
                    else
#line 100 "mcov.m"
                      {
#line 100 "mcov.m"
                        MR_Word mcov__OpenErrorMsg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__OpenRes_29, (MR_Integer) 0)));
#line 100 "mcov.m"
                        MR_String mcov__V_58_58;
#line 100 "mcov.m"
                        MR_String mcov__V_61_61;
#line 100 "mcov.m"
                        MR_String mcov__V_63_63;
#line 100 "mcov.m"
                        MR_String mcov__V_64_64;
#line 100 "mcov.m"
                        MR_String mcov__V_66_66;
#line 100 "mcov.m"
                        MR_String mcov__V_68_68;

#line 103 "mcov.m"
                        {
#line 103 "mcov.m"
                          mcov__V_68_68 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mcov__OpenErrorMsg_30)));
                        }
#line 102 "mcov.m"
                        {
#line 102 "mcov.m"
                          mcov__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mcov__V_68_68);
                        }
#line 102 "mcov.m"
                        {
#line 102 "mcov.m"
                          mcov__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "\'", mcov__V_66_66);
                        }
#line 102 "mcov.m"
                        {
#line 102 "mcov.m"
                          mcov__V_63_63 = mercury__string__f_43_43_2_f_0(mcov__OutputFile_28, mcov__V_64_64);
                        }
#line 102 "mcov.m"
                        {
#line 102 "mcov.m"
                          mcov__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", mcov__V_63_63);
                        }
#line 101 "mcov.m"
                        {
#line 101 "mcov.m"
                          mcov__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening ", mcov__V_61_61);
                        }
#line 101 "mcov.m"
                        {
#line 101 "mcov.m"
                          mercury__io__write_string_4_p_0(mcov__StdErr_16, mcov__V_58_58);
                        }
#line 104 "mcov.m"
                        {
#line 104 "mcov.m"
                          mercury__io__nl_3_p_0(mcov__StdErr_16);
#line 104 "mcov.m"
                          return;
                        }
#line 100 "mcov.m"
                      }
#line 94 "mcov.m"
                  }
#line 66 "mcov.m"
              }
#line 65 "mcov.m"
            else
#line 62 "mcov.m"
              {
#line 62 "mcov.m"
                MR_String mcov__ReadErrorMsg_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__MaybeReadError_15, (MR_Integer) 0)));

#line 63 "mcov.m"
                {
#line 63 "mcov.m"
                  mercury__io__write_string_4_p_0(mcov__StdErr_16, mcov__ReadErrorMsg_17);
                }
#line 64 "mcov.m"
                {
#line 64 "mcov.m"
                  mercury__io__nl_3_p_0(mcov__StdErr_16);
#line 64 "mcov.m"
                  return;
                }
#line 62 "mcov.m"
              }
#line 56 "mcov.m"
          }
#line 54 "mcov.m"
      }
#line 48 "mcov.m"
  }
#line 21 "mcov.m"
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
