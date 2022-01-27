/*
** Automatically generated from `mcov.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 56 "mcov.m"
struct mcov__main_2_p_0_4_env_0_s {
#line 56 "mcov.m"
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_1;
#line 56 "mcov.m"
  MR_Box * mcov__main_2_p_0_4_env_0__wrapper_arg_2;
#line 56 "mcov.m"
  MR_Cont mcov__main_2_p_0_4_env_0__cont;
#line 56 "mcov.m"
  void * mcov__main_2_p_0_4_env_0__cont_env_ptr;
#line 56 "mcov.m"
  MR_Word mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 56 "mcov.m"
  MR_Word mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 56 "mcov.m"
};


#line 98 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 101 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 104 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 107 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0;

#line 110 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0;

#line 113 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 116 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0;

#line 119 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4];

#line 122 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4];

#line 125 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_label_info_0_0;

#line 128 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1];

#line 131 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1];

#line 134 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1];

#line 137 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1];

#line 140 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_0;

#line 143 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_1;

#line 146 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 149 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_2[1];

#line 152 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_module_restriction_0_2;

#line 155 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[2];

#line 158 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1];

#line 161 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_module_restriction_0[2];

#line 164 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[3];

#line 167 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[3];

#line 170 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0;

#line 173 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1;

#line 176 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2;

#line 179 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3;

#line 182 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4;

#line 185 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5;

#line 188 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6;

#line 191 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[7];

#line 194 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[7];

#line 197 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_option_0[7];

#line 200 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

#line 203 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3];

#line 206 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3];

#line 209 "mcov.c"
static const MR_DuFunctorDesc mcov__mcov__du_functor_desc_proc_info_0_0;

#line 212 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1];

#line 215 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1];

#line 218 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1];

#line 221 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1];

#line 224 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 227 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 230 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
#line 233 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 235 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 238 "mcov.c"
static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
#line 241 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 243 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 245 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 248 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
#line 251 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 253 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 256 "mcov.c"
static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
#line 259 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 261 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 263 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 266 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
#line 269 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 271 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 274 "mcov.c"
static void MR_CALL 
mcov____Compare____option_0_0_10001(
#line 277 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 279 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 281 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 284 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
#line 287 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 289 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 292 "mcov.c"
static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
#line 295 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 297 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 299 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 302 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
#line 305 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 307 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 310 "mcov.c"
static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
#line 313 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 315 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 317 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 320 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
#line 323 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 325 "mcov.c"
  MR_Box mcov__wrapper_arg_2);

#line 328 "mcov.c"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
#line 331 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 333 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 335 "mcov.c"
  MR_Box mcov__wrapper_arg_3);

#line 266 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__266__1_2_p_0(
#line 266 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 266 "mcov.m"
  MR_Word mcov__HeadVar__2_22);

#line 192 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__192__1_2_p_0(
#line 192 "mcov.m"
  MR_Word mcov__Modules_12,
#line 192 "mcov.m"
  MR_Word mcov__HeadVar__2_34);

#line 166 "mcov.m"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
#line 166 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 166 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 151 "mcov.m"
static void MR_CALL 
mcov____Compare____proc_info_0_0(
#line 151 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 151 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 457 "mcov.m"
static void MR_CALL 
mcov____Compare____option_table_0_0(
#line 457 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 457 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 448 "mcov.m"
static void MR_CALL 
mcov____Compare____option_0_0(
#line 448 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 448 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_0_0(
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_1,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 169 "mcov.m"
static void MR_CALL 
mcov____Compare____module_restriction_0_0(
#line 169 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 169 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0(
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 158 "mcov.m"
static void MR_CALL 
mcov____Compare____label_info_0_0(
#line 158 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__3_3);

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_2);

#line 491 "mcov.m"
static void MR_CALL 
mcov__write_error_message_3_p_0(
#line 491 "mcov.m"
  MR_String mcov__Msg_4);

#line 479 "mcov.m"
static void MR_CALL 
mcov__option_default_2_p_0(
#line 479 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 479 "mcov.m"
  MR_Word * mcov__HeadVar__2_2,
#line 479 "mcov.m"
  MR_Cont mcov__cont,
#line 479 "mcov.m"
  void * mcov__cont_env_ptr);

#line 468 "mcov.m"
static MR_bool MR_CALL 
mcov__long_option_2_p_0(
#line 468 "mcov.m"
  MR_String mcov__HeadVar__1_1,
#line 468 "mcov.m"
  MR_Word * mcov__HeadVar__2_2);

#line 459 "mcov.m"
static MR_bool MR_CALL 
mcov__short_option_2_p_0(
#line 459 "mcov.m"
  MR_Char mcov__HeadVar__1_1,
#line 459 "mcov.m"
  MR_Word * mcov__HeadVar__2_2);

#line 439 "mcov.m"
static void MR_CALL 
mcov__write_tabbed_lines_3_p_0(
#line 439 "mcov.m"
  MR_Word mcov__HeadVar__1_1);

#line 401 "mcov.m"
static void MR_CALL 
mcov__long_usage_2_p_0(void);

#line 388 "mcov.m"
static void MR_CALL 
mcov__short_usage_2_p_0(void);

#line 353 "mcov.m"
static void MR_CALL 
mcov__write_proc_label_for_user_3_p_0(
#line 353 "mcov.m"
  MR_Word mcov__ProcLabel_4);

#line 339 "mcov.m"
static void MR_CALL 
mcov__write_label_info_3_p_0(
#line 339 "mcov.m"
  MR_Word mcov__LabelInfo_4);

#line 331 "mcov.m"
static void MR_CALL 
mcov__write_proc_info_3_p_0(
#line 331 "mcov.m"
  MR_Word mcov__ProcInfo_4);

#line 294 "mcov.m"
static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
#line 294 "mcov.m"
  MR_Word mcov__ProcLabel_7,
#line 294 "mcov.m"
  MR_String mcov__FileName_8,
#line 294 "mcov.m"
  MR_Word mcov__PathPort_9,
#line 294 "mcov.m"
  MR_Word mcov__LineNumberAndCount_10,
#line 294 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
#line 294 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17);

#line 290 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
#line 290 "mcov.m"
  MR_Box mcov__closure_arg,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 290 "mcov.m"
  MR_Box * mcov__wrapper_arg_4);

#line 283 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
#line 283 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 283 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
#line 283 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3);

#line 273 "mcov.m"
static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
#line 273 "mcov.m"
  MR_Word mcov__ProcInfoMap_4,
#line 273 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 273 "mcov.m"
  MR_Word * mcov__ProcInfo_7);

#line 266 "mcov.m"
static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
#line 266 "mcov.m"
  MR_Box mcov__closure_arg);

#line 258 "mcov.m"
static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
#line 258 "mcov.m"
  MR_Word mcov__PathPort_7,
#line 258 "mcov.m"
  MR_Word mcov__LineNumberAndCount_8,
#line 258 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 258 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
#line 258 "mcov.m"
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
#line 258 "mcov.m"
  MR_Integer * mcov__STATE_VARIABLE_Count_17);

#line 242 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
#line 242 "mcov.m"
  MR_Box mcov__closure_arg,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 242 "mcov.m"
  MR_Box * mcov__wrapper_arg_4,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_5,
#line 242 "mcov.m"
  MR_Box * mcov__wrapper_arg_6);

#line 234 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
#line 234 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 234 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
#line 234 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
#line 234 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
#line 234 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_CountMap_5);

#line 215 "mcov.m"
static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
#line 215 "mcov.m"
  MR_Word mcov__HeadVar__1_1);

#line 205 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_5(
#line 205 "mcov.m"
  MR_Box mcov__closure_arg,
#line 205 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 205 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 205 "mcov.m"
  MR_Box * mcov__wrapper_arg_3);

#line 199 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
#line 199 "mcov.m"
  MR_Box mcov__closure_arg,
#line 199 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 199 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 199 "mcov.m"
  MR_Box * mcov__wrapper_arg_3);

#line 231 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_3(
#line 231 "mcov.m"
  MR_Box mcov__closure_arg,
#line 231 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 231 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);

#line 192 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
#line 192 "mcov.m"
  MR_Box mcov__closure_arg,
#line 192 "mcov.m"
  MR_Box mcov__wrapper_arg_1);

#line 189 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
#line 189 "mcov.m"
  MR_Box mcov__closure_arg,
#line 189 "mcov.m"
  MR_Box mcov__wrapper_arg_1);

#line 179 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0(
#line 179 "mcov.m"
  MR_Word mcov__Detailed_6,
#line 179 "mcov.m"
  MR_Word mcov__RestrictToModules_7,
#line 179 "mcov.m"
  MR_Word mcov__TraceCountMap_8);

#line 112 "mcov.m"
static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
#line 112 "mcov.m"
  MR_Box mcov__closure_arg,
#line 112 "mcov.m"
  MR_Box mcov__wrapper_arg_1);

#line 71 "mcov.m"
static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
#line 71 "mcov.m"
  MR_Word mcov__OptionTable_5,
#line 71 "mcov.m"
  MR_Word mcov__Args_6);

#line 56 "mcov.m"
static void MR_CALL 
main_2_p_0_3(
#line 56 "mcov.m"
  void * mcov__env_ptr_arg);

#line 56 "mcov.m"
static void MR_CALL 
main_2_p_0_4(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2,
#line 56 "mcov.m"
  MR_Cont mcov__cont,
#line 56 "mcov.m"
  void * mcov__cont_env_ptr);

#line 56 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);

#line 56 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2);


static /* final */ const MR_Box mcov_scalar_common_1[13][3];

static /* final */ const MR_Box mcov_scalar_common_2[28][2];

static /* final */ const MR_Box mcov_scalar_common_3[6][5];

static /* final */ const MR_Box mcov_scalar_common_4[3][1];

static /* final */ const MR_Box mcov_scalar_common_5[1][4];

static /* final */ const MR_Box mcov_scalar_common_6[3][6];

static /* final */ const MR_Box mcov_scalar_common_7[2][9];


#line 470 "mcov.m"
/* sealed */ struct mcov__vector_common_type_8_0_s {
#line 470 "mcov.m"
  const MR_String mcov__vector_common_type_8_0__vct_8_f_0;
#line 470 "mcov.m"
  const MR_Integer mcov__vector_common_type_8_0__vct_8_f_1;
#line 470 "mcov.m"
  const MR_Word mcov__vector_common_type_8_0__vct_8_f_2;
#line 470 "mcov.m"
};

static /* final */ const struct mcov__vector_common_type_8_0_s mcov_vector_common_8[16];

#line 481 "mcov.m"
/* sealed */ struct mcov__vector_common_type_9_0_s {
#line 481 "mcov.m"
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_0;
#line 481 "mcov.m"
  const MR_Word mcov__vector_common_type_9_0__vct_9_f_1;
#line 481 "mcov.m"
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
    ((MR_Box) (&mcov_scalar_common_5[0])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mcov_scalar_common_6[1])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mcov_scalar_common_6[2])),
    ((MR_Box) (mcov__write_coverage_test_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mcov_scalar_common_7[0])),
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
    ((MR_Box) ((MR_String) "\tdoing any further processing")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\tPrint help about using mcov (on the standard output) and exit without")),
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

static /* final */ const MR_Box mcov_scalar_common_4[3][1] = {
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

static /* final */ const MR_Box mcov_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mcov_scalar_common_6[3][6] = {
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

static /* final */ const MR_Box mcov_scalar_common_7[2][9] = {
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
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_4[1])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_4[1])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_4[1])
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
    (MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_4[2])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1298 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1307 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1316 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1324 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_mcov__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_proc_info_0
  }
};

#line 1333 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct2 mcov__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1342 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1350 "mcov.c"
static const MR_FA_PseudoTypeInfo_Struct1 mcov__list__pti_list_1__plain_mcov__type_ctor_info_label_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mcov__mcov__type_ctor_info_label_info_0
  }
};

#line 1358 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_label_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0
};

#line 1366 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_label_info_0_0[4] = {
  (MR_String) "label_source_file",
  (MR_String) "label_line_number",
  (MR_String) "label_proc",
  (MR_String) "label_path_port"
};

#line 1374 "mcov.c"
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

#line 1389 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_label_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

#line 1394 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_label_info_0_0
  }
};

#line 1403 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_label_info_0[1] = {
  &mcov__mcov__du_functor_desc_label_info_0_0
};

#line 1408 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_label_info_0[1] = {
  (MR_Integer) 0
};

#line 1413 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1430 "mcov.c"
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
  NULL
};

#line 1445 "mcov.c"
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
  NULL
};

#line 1460 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1468 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_module_restriction_0_2[1] = {
  (MR_PseudoTypeInfo) &mcov__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 1473 "mcov.c"
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
  NULL
};

#line 1488 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_0[2] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_0,
  &mcov__mcov__du_functor_desc_module_restriction_0_1
};

#line 1494 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_module_restriction_0_1[1] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_2
};

#line 1499 "mcov.c"
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

#line 1513 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_module_restriction_0[3] = {
  &mcov__mcov__du_functor_desc_module_restriction_0_1,
  &mcov__mcov__du_functor_desc_module_restriction_0_0,
  &mcov__mcov__du_functor_desc_module_restriction_0_2
};

#line 1520 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_module_restriction_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1527 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_module_restriction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1544 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

#line 1550 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_1 = {
  (MR_String) "verbose",
  (MR_Integer) 1
};

#line 1556 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_2 = {
  (MR_String) "detailed",
  (MR_Integer) 2
};

#line 1562 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_3 = {
  (MR_String) "modules",
  (MR_Integer) 3
};

#line 1568 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_4 = {
  (MR_String) "output_filename",
  (MR_Integer) 4
};

#line 1574 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_5 = {
  (MR_String) "flags_file",
  (MR_Integer) 5
};

#line 1580 "mcov.c"
static const MR_EnumFunctorDesc mcov__mcov__enum_functor_desc_option_0_6 = {
  (MR_String) "ignore_stdlib",
  (MR_Integer) 6
};

#line 1586 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_value_ordered_option_0[7] = {
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_1,
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_6
};

#line 1597 "mcov.c"
static const MR_EnumFunctorDescPtr mcov__mcov__enum_name_ordered_option_0[7] = {
  &mcov__mcov__enum_functor_desc_option_0_2,
  &mcov__mcov__enum_functor_desc_option_0_5,
  &mcov__mcov__enum_functor_desc_option_0_0,
  &mcov__mcov__enum_functor_desc_option_0_6,
  &mcov__mcov__enum_functor_desc_option_0_3,
  &mcov__mcov__enum_functor_desc_option_0_4,
  &mcov__mcov__enum_functor_desc_option_0_1
};

#line 1608 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_option_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 3
};

#line 1619 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1636 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__tree234__ti_tree234_2mcov__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mcov__mcov__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1645 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1662 "mcov.c"
static const MR_PseudoTypeInfo mcov__mcov__field_types_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 1669 "mcov.c"
static const MR_ConstString mcov__mcov__field_names_proc_info_0_0[3] = {
  (MR_String) "proc_source_file",
  (MR_String) "proc_line_number",
  (MR_String) "proc_proc"
};

#line 1676 "mcov.c"
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

#line 1691 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_stag_ordered_proc_info_0_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

#line 1696 "mcov.c"
static const MR_DuPtagLayout mcov__mcov__du_ptag_ordered_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mcov__mcov__du_stag_ordered_proc_info_0_0
  }
};

#line 1705 "mcov.c"
static const MR_DuFunctorDescPtr mcov__mcov__du_name_ordered_proc_info_0[1] = {
  &mcov__mcov__du_functor_desc_proc_info_0_0
};

#line 1710 "mcov.c"
static const MR_Integer mcov__mcov__functor_number_map_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1715 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1732 "mcov.c"
static const MR_FA_TypeInfo_Struct2 mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mcov__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1741 "mcov.c"
static const MR_FA_TypeInfo_Struct1 mcov__list__ti_list_1pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mcov__pair__ti_pair_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1749 "mcov.c"
const MR_TypeCtorInfo_Struct mcov__mcov__type_ctor_info_trace_counts_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1766 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0_10001(
#line 1769 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1771 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1773 "mcov.c"
{
#line 1775 "mcov.c"
  {
#line 1777 "mcov.c"
    MR_bool mcov__succeeded;

#line 1780 "mcov.c"
    {
#line 1782 "mcov.c"
      mcov__succeeded = mcov____Unify____label_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1785 "mcov.c"
    return mcov__succeeded;
#line 1787 "mcov.c"
  }
#line 1789 "mcov.c"
}

#line 1792 "mcov.c"
static void MR_CALL 
mcov____Compare____label_info_0_0_10001(
#line 1795 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1797 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1799 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1801 "mcov.c"
{
#line 1803 "mcov.c"
  {
#line 1805 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1808 "mcov.c"
    {
#line 1810 "mcov.c"
      mcov____Compare____label_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1813 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1815 "mcov.c"
  }
#line 1817 "mcov.c"
}

#line 1820 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0_10001(
#line 1823 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1825 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1827 "mcov.c"
{
#line 1829 "mcov.c"
  {
#line 1831 "mcov.c"
    MR_bool mcov__succeeded;

#line 1834 "mcov.c"
    {
#line 1836 "mcov.c"
      mcov__succeeded = mcov____Unify____module_restriction_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1839 "mcov.c"
    return mcov__succeeded;
#line 1841 "mcov.c"
  }
#line 1843 "mcov.c"
}

#line 1846 "mcov.c"
static void MR_CALL 
mcov____Compare____module_restriction_0_0_10001(
#line 1849 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1851 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1853 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1855 "mcov.c"
{
#line 1857 "mcov.c"
  {
#line 1859 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1862 "mcov.c"
    {
#line 1864 "mcov.c"
      mcov____Compare____module_restriction_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1867 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1869 "mcov.c"
  }
#line 1871 "mcov.c"
}

#line 1874 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_0_0_10001(
#line 1877 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1879 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1881 "mcov.c"
{
#line 1883 "mcov.c"
  {
#line 1885 "mcov.c"
    MR_bool mcov__succeeded;

#line 1888 "mcov.c"
    {
#line 1890 "mcov.c"
      mcov__succeeded = mcov____Unify____option_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1893 "mcov.c"
    return mcov__succeeded;
#line 1895 "mcov.c"
  }
#line 1897 "mcov.c"
}

#line 1900 "mcov.c"
static void MR_CALL 
mcov____Compare____option_0_0_10001(
#line 1903 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1905 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1907 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1909 "mcov.c"
{
#line 1911 "mcov.c"
  {
#line 1913 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1916 "mcov.c"
    {
#line 1918 "mcov.c"
      mcov____Compare____option_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1921 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1923 "mcov.c"
  }
#line 1925 "mcov.c"
}

#line 1928 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0_10001(
#line 1931 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1933 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1935 "mcov.c"
{
#line 1937 "mcov.c"
  {
#line 1939 "mcov.c"
    MR_bool mcov__succeeded;

#line 1942 "mcov.c"
    {
#line 1944 "mcov.c"
      mcov__succeeded = mcov____Unify____option_table_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 1947 "mcov.c"
    return mcov__succeeded;
#line 1949 "mcov.c"
  }
#line 1951 "mcov.c"
}

#line 1954 "mcov.c"
static void MR_CALL 
mcov____Compare____option_table_0_0_10001(
#line 1957 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 1959 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 1961 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 1963 "mcov.c"
{
#line 1965 "mcov.c"
  {
#line 1967 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 1970 "mcov.c"
    {
#line 1972 "mcov.c"
      mcov____Compare____option_table_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 1975 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 1977 "mcov.c"
  }
#line 1979 "mcov.c"
}

#line 1982 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0_10001(
#line 1985 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 1987 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 1989 "mcov.c"
{
#line 1991 "mcov.c"
  {
#line 1993 "mcov.c"
    MR_bool mcov__succeeded;

#line 1996 "mcov.c"
    {
#line 1998 "mcov.c"
      mcov__succeeded = mcov____Unify____proc_info_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 2001 "mcov.c"
    return mcov__succeeded;
#line 2003 "mcov.c"
  }
#line 2005 "mcov.c"
}

#line 2008 "mcov.c"
static void MR_CALL 
mcov____Compare____proc_info_0_0_10001(
#line 2011 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 2013 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 2015 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 2017 "mcov.c"
{
#line 2019 "mcov.c"
  {
#line 2021 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 2024 "mcov.c"
    {
#line 2026 "mcov.c"
      mcov____Compare____proc_info_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 2029 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 2031 "mcov.c"
  }
#line 2033 "mcov.c"
}

#line 2036 "mcov.c"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0_10001(
#line 2039 "mcov.c"
  MR_Box mcov__wrapper_arg_1,
#line 2041 "mcov.c"
  MR_Box mcov__wrapper_arg_2)
#line 2043 "mcov.c"
{
#line 2045 "mcov.c"
  {
#line 2047 "mcov.c"
    MR_bool mcov__succeeded;

#line 2050 "mcov.c"
    {
#line 2052 "mcov.c"
      mcov__succeeded = mcov____Unify____trace_counts_list_0_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2));
    }
#line 2055 "mcov.c"
    return mcov__succeeded;
#line 2057 "mcov.c"
  }
#line 2059 "mcov.c"
}

#line 2062 "mcov.c"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0_10001(
#line 2065 "mcov.c"
  MR_Box * mcov__wrapper_arg_1,
#line 2067 "mcov.c"
  MR_Box mcov__wrapper_arg_2,
#line 2069 "mcov.c"
  MR_Box mcov__wrapper_arg_3)
#line 2071 "mcov.c"
{
#line 2073 "mcov.c"
  {
#line 2075 "mcov.c"
    MR_Word mcov__conv0_HeadVar__1_1;

#line 2078 "mcov.c"
    {
#line 2080 "mcov.c"
      mcov____Compare____trace_counts_list_0_0(&mcov__conv0_HeadVar__1_1, ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3));
    }
#line 2083 "mcov.c"
    *mcov__wrapper_arg_1 = ((MR_Box) (mcov__conv0_HeadVar__1_1));
#line 2085 "mcov.c"
  }
#line 2087 "mcov.c"
}

#line 266 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__proc_process_path_port_count__266__1_2_p_0(
#line 266 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 266 "mcov.m"
  MR_Word mcov__HeadVar__2_22)
#line 266 "mcov.m"
{
#line 266 "mcov.m"
  {
#line 266 "mcov.m"
    MR_bool mcov__succeeded;

#line 266 "mcov.m"
    {
#line 266 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[0], ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14)), ((MR_Box) (mcov__HeadVar__2_22)));
    }
#line 266 "mcov.m"
    return mcov__succeeded;
#line 266 "mcov.m"
  }
#line 266 "mcov.m"
}

#line 192 "mcov.m"
static MR_bool MR_CALL 
mcov__IntroducedFrom__pred__write_coverage_test__192__1_2_p_0(
#line 192 "mcov.m"
  MR_Word mcov__Modules_12,
#line 192 "mcov.m"
  MR_Word mcov__HeadVar__2_34)
#line 192 "mcov.m"
{
#line 192 "mcov.m"
  {
#line 192 "mcov.m"
    MR_bool mcov__succeeded;
#line 192 "mcov.m"
    MR_Word mcov__ProcLabelInContext_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_34, (MR_Integer) 0)));
#line 192 "mcov.m"
    MR_Word mcov__Module_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 0)));
#line 211 "mcov.m"
    MR_Word mcov__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_34, (MR_Integer) 1)));
#line 212 "mcov.m"
    MR_String mcov__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 1)));
#line 212 "mcov.m"
    MR_Word mcov__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_48, (MR_Integer) 2)));

#line 213 "mcov.m"
    {
#line 213 "mcov.m"
      return mcov__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (mcov__Module_50)), mcov__Modules_12);
    }
#line 192 "mcov.m"
    return mcov__succeeded;
#line 192 "mcov.m"
  }
#line 192 "mcov.m"
}

#line 166 "mcov.m"
static void MR_CALL 
mcov____Compare____trace_counts_list_0_0(
#line 166 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 166 "mcov.m"
{
#line 166 "mcov.m"
  {
#line 166 "mcov.m"
    MR_bool mcov__succeeded;
#line 166 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
#line 166 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

#line 166 "mcov.m"
    {
#line 166 "mcov.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[3], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
#line 166 "mcov.m"
      return;
    }
#line 166 "mcov.m"
  }
#line 166 "mcov.m"
}

#line 166 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____trace_counts_list_0_0(
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 166 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 166 "mcov.m"
{
#line 166 "mcov.m"
  {
#line 166 "mcov.m"
    MR_bool mcov__succeeded;
#line 166 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
#line 166 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

#line 166 "mcov.m"
    {
#line 166 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_2[3], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
#line 166 "mcov.m"
    return mcov__succeeded;
#line 166 "mcov.m"
  }
#line 166 "mcov.m"
}

#line 151 "mcov.m"
static void MR_CALL 
mcov____Compare____proc_info_0_0(
#line 151 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 151 "mcov.m"
{
#line 151 "mcov.m"
  {
#line 151 "mcov.m"
    MR_bool mcov__succeeded;
#line 151 "mcov.m"
    MR_Integer mcov__CastX_12 = (MR_Integer) mcov__HeadVar__2_2;
#line 151 "mcov.m"
    MR_Integer mcov__CastY_13 = (MR_Integer) mcov__HeadVar__3_3;

#line 151 "mcov.m"
    mcov__succeeded = (mcov__CastX_12 == mcov__CastY_13);
#line 151 "mcov.m"
    if (mcov__succeeded)
#line 2238 "mcov.c"
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "mcov.m"
    else
#line 151 "mcov.m"
      {
#line 151 "mcov.m"
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "mcov.m"
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "mcov.m"
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "mcov.m"
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "mcov.m"
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
#line 151 "mcov.m"
        MR_Word mcov__V_10_10;

#line 151 "mcov.m"
        {
#line 151 "mcov.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_10_10, mcov__V_4_4, mcov__V_7_7);
        }
#line 2264 "mcov.c"
        mcov__succeeded = (mcov__V_10_10 == (MR_Integer) 0);
#line 151 "mcov.m"
        mcov__succeeded = !(mcov__succeeded);
#line 151 "mcov.m"
        if (mcov__succeeded)
#line 151 "mcov.m"
          *mcov__HeadVar__1_1 = mcov__V_10_10;
#line 151 "mcov.m"
        else
#line 151 "mcov.m"
          {
#line 151 "mcov.m"
            MR_Word mcov__V_11_11;

#line 151 "mcov.m"
            {
#line 151 "mcov.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_11_11, mcov__V_5_5, mcov__V_8_8);
            }
#line 2284 "mcov.c"
            mcov__succeeded = (mcov__V_11_11 == (MR_Integer) 0);
#line 151 "mcov.m"
            mcov__succeeded = !(mcov__succeeded);
#line 151 "mcov.m"
            if (mcov__succeeded)
#line 151 "mcov.m"
              *mcov__HeadVar__1_1 = mcov__V_11_11;
#line 151 "mcov.m"
            else
#line 151 "mcov.m"
              {
#line 151 "mcov.m"
                mdbcomp__prim_data____Compare____proc_label_0_0(mcov__HeadVar__1_1, mcov__V_6_6, mcov__V_9_9);
#line 151 "mcov.m"
                return;
              }
#line 151 "mcov.m"
          }
#line 151 "mcov.m"
      }
#line 151 "mcov.m"
  }
#line 151 "mcov.m"
}

#line 151 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____proc_info_0_0(
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 151 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 151 "mcov.m"
{
#line 151 "mcov.m"
  {
#line 151 "mcov.m"
    MR_bool mcov__succeeded;
#line 151 "mcov.m"
    MR_Integer mcov__CastX_9 = (MR_Integer) mcov__HeadVar__1_1;
#line 151 "mcov.m"
    MR_Integer mcov__CastY_10 = (MR_Integer) mcov__HeadVar__2_2;

#line 151 "mcov.m"
    mcov__succeeded = (mcov__CastX_9 == mcov__CastY_10);
#line 151 "mcov.m"
    if (mcov__succeeded)
#line 151 "mcov.m"
      mcov__succeeded = MR_TRUE;
#line 151 "mcov.m"
    else
#line 151 "mcov.m"
      {
#line 151 "mcov.m"
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "mcov.m"
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "mcov.m"
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "mcov.m"
        MR_String mcov__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "mcov.m"
        MR_Integer mcov__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "mcov.m"
        MR_Word mcov__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));

#line 2351 "mcov.c"
        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_6_6) == 0);
#line 151 "mcov.m"
        if (mcov__succeeded)
#line 151 "mcov.m"
          {
#line 2357 "mcov.c"
            mcov__succeeded = (mcov__V_4_4 == mcov__V_7_7);
#line 151 "mcov.m"
            if (mcov__succeeded)
#line 2361 "mcov.c"
              {
#line 2363 "mcov.c"
                return mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_8_8);
              }
#line 151 "mcov.m"
          }
#line 151 "mcov.m"
      }
#line 151 "mcov.m"
    return mcov__succeeded;
#line 151 "mcov.m"
  }
#line 151 "mcov.m"
}

#line 457 "mcov.m"
static void MR_CALL 
mcov____Compare____option_table_0_0(
#line 457 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 457 "mcov.m"
{
#line 457 "mcov.m"
  {
#line 457 "mcov.m"
    MR_bool mcov__succeeded;
#line 457 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_4 = mcov__HeadVar__2_2;
#line 457 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_5 = mcov__HeadVar__3_3;

#line 457 "mcov.m"
    {
#line 457 "mcov.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_1[3], mcov__HeadVar__1_1, ((MR_Box) (mcov__Cast_HeadVar1_4)), ((MR_Box) (mcov__Cast_HeadVar2_5)));
#line 457 "mcov.m"
      return;
    }
#line 457 "mcov.m"
  }
#line 457 "mcov.m"
}

#line 457 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_table_0_0(
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 457 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 457 "mcov.m"
{
#line 457 "mcov.m"
  {
#line 457 "mcov.m"
    MR_bool mcov__succeeded;
#line 457 "mcov.m"
    MR_Word mcov__Cast_HeadVar1_3 = mcov__HeadVar__1_1;
#line 457 "mcov.m"
    MR_Word mcov__Cast_HeadVar2_4 = mcov__HeadVar__2_2;

#line 457 "mcov.m"
    {
#line 457 "mcov.m"
      return mcov__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mcov_scalar_common_1[3], ((MR_Box) (mcov__Cast_HeadVar1_3)), ((MR_Box) (mcov__Cast_HeadVar2_4)));
    }
#line 457 "mcov.m"
    return mcov__succeeded;
#line 457 "mcov.m"
  }
#line 457 "mcov.m"
}

#line 448 "mcov.m"
static void MR_CALL 
mcov____Compare____option_0_0(
#line 448 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 448 "mcov.m"
{
#line 448 "mcov.m"
  {
#line 448 "mcov.m"
    MR_bool mcov__succeeded;
#line 448 "mcov.m"
    MR_Integer mcov__Cast_HeadVar1_4 = (MR_Integer) mcov__HeadVar__2_2;
#line 448 "mcov.m"
    MR_Integer mcov__Cast_HeadVar2_5 = (MR_Integer) mcov__HeadVar__3_3;

#line 448 "mcov.m"
    {
#line 448 "mcov.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mcov__HeadVar__1_1, mcov__Cast_HeadVar1_4, mcov__Cast_HeadVar2_5);
#line 448 "mcov.m"
      return;
    }
#line 448 "mcov.m"
  }
#line 448 "mcov.m"
}

#line 448 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____option_0_0(
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_1,
#line 448 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 448 "mcov.m"
{
#line 2480 "mcov.c"
  {
#line 2482 "mcov.c"
    MR_bool mcov__succeeded = (mcov__HeadVar__2_1 == mcov__HeadVar__2_2);

#line 2485 "mcov.c"
    return mcov__succeeded;
#line 2487 "mcov.c"
  }
#line 448 "mcov.m"
}

#line 169 "mcov.m"
static void MR_CALL 
mcov____Compare____module_restriction_0_0(
#line 169 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 169 "mcov.m"
{
#line 169 "mcov.m"
  {
#line 169 "mcov.m"
    MR_bool mcov__succeeded;
#line 169 "mcov.m"
    MR_Integer mcov__CastX_10 = (MR_Integer) mcov__HeadVar__2_2;
#line 169 "mcov.m"
    MR_Integer mcov__CastY_11 = (MR_Integer) mcov__HeadVar__3_3;

#line 169 "mcov.m"
    mcov__succeeded = (mcov__CastX_10 == mcov__CastY_11);
#line 169 "mcov.m"
    if (mcov__succeeded)
#line 2516 "mcov.c"
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "mcov.m"
    else
#line 169 "mcov.m"
#line 169 "mcov.m"
      switch (MR_tag((MR_Word) mcov__HeadVar__2_2)) {
#line 169 "mcov.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
        case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
          switch (MR_unmkbody(mcov__HeadVar__2_2)) {
#line 169 "mcov.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
            case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
              switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
                case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
                  switch (MR_unmkbody(mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
                    case (MR_Integer) 0:
#line 169 "mcov.m"
                      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "mcov.m"
                      break;
#line 169 "mcov.m"
                    case (MR_Integer) 1:
#line 169 "mcov.m"
                      *mcov__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "mcov.m"
                      break;
#line 169 "mcov.m"
                  }
#line 169 "mcov.m"
                  break;
#line 169 "mcov.m"
                case (MR_Integer) 1:
#line 2564 "mcov.c"
                  *mcov__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "mcov.m"
                  break;
#line 169 "mcov.m"
              }
#line 169 "mcov.m"
              break;
#line 169 "mcov.m"
            case (MR_Integer) 1:
#line 169 "mcov.m"
#line 169 "mcov.m"
              switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
                case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
                  switch (MR_unmkbody(mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
                    case (MR_Integer) 0:
#line 169 "mcov.m"
                      *mcov__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "mcov.m"
                      break;
#line 169 "mcov.m"
                    case (MR_Integer) 1:
#line 169 "mcov.m"
                      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "mcov.m"
                      break;
#line 169 "mcov.m"
                  }
#line 169 "mcov.m"
                  break;
#line 169 "mcov.m"
                case (MR_Integer) 1:
#line 2604 "mcov.c"
                  *mcov__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "mcov.m"
                  break;
#line 169 "mcov.m"
              }
#line 169 "mcov.m"
              break;
#line 169 "mcov.m"
          }
#line 169 "mcov.m"
          break;
#line 169 "mcov.m"
        case (MR_Integer) 1:
#line 169 "mcov.m"
          {
#line 169 "mcov.m"
            MR_Word mcov__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));

#line 169 "mcov.m"
#line 169 "mcov.m"
            switch (MR_tag((MR_Word) mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
              case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
                switch (MR_unmkbody(mcov__HeadVar__3_3)) {
#line 169 "mcov.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
                  case (MR_Integer) 0:
#line 2637 "mcov.c"
                    *mcov__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "mcov.m"
                    break;
#line 169 "mcov.m"
                  case (MR_Integer) 1:
#line 2643 "mcov.c"
                    *mcov__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "mcov.m"
                    break;
#line 169 "mcov.m"
                }
#line 169 "mcov.m"
                break;
#line 169 "mcov.m"
              case (MR_Integer) 1:
#line 169 "mcov.m"
                {
#line 169 "mcov.m"
                  MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__3_3, (MR_Integer) 0)));

#line 169 "mcov.m"
                  {
#line 169 "mcov.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mcov_scalar_common_2[2], mcov__HeadVar__1_1, ((MR_Box) (mcov__V_13_13)), ((MR_Box) (mcov__V_9_9)));
#line 169 "mcov.m"
                    return;
                  }
#line 169 "mcov.m"
                }
#line 169 "mcov.m"
                break;
#line 169 "mcov.m"
            }
#line 169 "mcov.m"
          }
#line 169 "mcov.m"
          break;
#line 169 "mcov.m"
      }
#line 169 "mcov.m"
  }
#line 169 "mcov.m"
}

#line 169 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____module_restriction_0_0(
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 169 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 169 "mcov.m"
{
#line 169 "mcov.m"
  {
#line 169 "mcov.m"
    MR_bool mcov__succeeded;
#line 169 "mcov.m"
    MR_Integer mcov__CastX_9 = (MR_Integer) mcov__HeadVar__1_1;
#line 169 "mcov.m"
    MR_Integer mcov__CastY_10 = (MR_Integer) mcov__HeadVar__2_2;

#line 169 "mcov.m"
    mcov__succeeded = (mcov__CastX_9 == mcov__CastY_10);
#line 169 "mcov.m"
    if (mcov__succeeded)
#line 169 "mcov.m"
      mcov__succeeded = MR_TRUE;
#line 169 "mcov.m"
    else
#line 169 "mcov.m"
#line 169 "mcov.m"
      switch (MR_tag((MR_Word) mcov__HeadVar__1_1)) {
#line 169 "mcov.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
        case (MR_Integer) 0:
#line 169 "mcov.m"
#line 169 "mcov.m"
          switch (MR_unmkbody(mcov__HeadVar__1_1)) {
#line 169 "mcov.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 169 "mcov.m"
            case (MR_Integer) 0:
#line 169 "mcov.m"
              {
#line 169 "mcov.m"
                MR_Integer mcov__CastX_3 = (MR_Integer) mcov__HeadVar__1_1;
#line 169 "mcov.m"
                MR_Integer mcov__CastY_4 = (MR_Integer) mcov__HeadVar__2_2;

#line 169 "mcov.m"
                mcov__succeeded = (mcov__CastY_4 == mcov__CastX_3);
#line 169 "mcov.m"
              }
#line 169 "mcov.m"
              break;
#line 169 "mcov.m"
            case (MR_Integer) 1:
#line 169 "mcov.m"
              {
#line 169 "mcov.m"
                MR_Integer mcov__CastX_5 = (MR_Integer) mcov__HeadVar__1_1;
#line 169 "mcov.m"
                MR_Integer mcov__CastY_6 = (MR_Integer) mcov__HeadVar__2_2;

#line 169 "mcov.m"
                mcov__succeeded = (mcov__CastY_6 == mcov__CastX_5);
#line 169 "mcov.m"
              }
#line 169 "mcov.m"
              break;
#line 169 "mcov.m"
          }
#line 169 "mcov.m"
          break;
#line 169 "mcov.m"
        case (MR_Integer) 1:
#line 169 "mcov.m"
          {
#line 169 "mcov.m"
            MR_Word mcov__TypeInfo_11_11;
#line 169 "mcov.m"
            MR_Word mcov__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "mcov.m"
            MR_Word mcov__V_8_8;

#line 169 "mcov.m"
            mcov__succeeded = ((MR_tag((MR_Word) mcov__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 169 "mcov.m"
            if (mcov__succeeded)
#line 169 "mcov.m"
              {
#line 169 "mcov.m"
                mcov__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 2773 "mcov.c"
                mcov__TypeInfo_11_11 = (MR_Word) &mcov_scalar_common_2[2];
#line 2775 "mcov.c"
                {
#line 2777 "mcov.c"
                  return mcov__succeeded = mercury__builtin__unify_2_p_0(mcov__TypeInfo_11_11, ((MR_Box) (mcov__V_7_7)), ((MR_Box) (mcov__V_8_8)));
                }
#line 169 "mcov.m"
              }
#line 169 "mcov.m"
          }
#line 169 "mcov.m"
          break;
#line 169 "mcov.m"
      }
#line 169 "mcov.m"
    return mcov__succeeded;
#line 169 "mcov.m"
  }
#line 169 "mcov.m"
}

#line 158 "mcov.m"
static void MR_CALL 
mcov____Compare____label_info_0_0(
#line 158 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__3_3)
#line 158 "mcov.m"
{
#line 158 "mcov.m"
  {
#line 158 "mcov.m"
    MR_bool mcov__succeeded;
#line 158 "mcov.m"
    MR_Integer mcov__CastX_15 = (MR_Integer) mcov__HeadVar__2_2;
#line 158 "mcov.m"
    MR_Integer mcov__CastY_16 = (MR_Integer) mcov__HeadVar__3_3;

#line 158 "mcov.m"
    mcov__succeeded = (mcov__CastX_15 == mcov__CastY_16);
#line 158 "mcov.m"
    if (mcov__succeeded)
#line 2819 "mcov.c"
      *mcov__HeadVar__1_1 = (MR_Integer) 0;
#line 158 "mcov.m"
    else
#line 158 "mcov.m"
      {
#line 158 "mcov.m"
        MR_String mcov__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "mcov.m"
        MR_Integer mcov__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 158 "mcov.m"
        MR_Word mcov__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));
#line 158 "mcov.m"
        MR_String mcov__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 0)));
#line 158 "mcov.m"
        MR_Integer mcov__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 1)));
#line 158 "mcov.m"
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 2)));
#line 158 "mcov.m"
        MR_Word mcov__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__3_3, (MR_Integer) 3)));
#line 158 "mcov.m"
        MR_Word mcov__V_12_12;

#line 158 "mcov.m"
        {
#line 158 "mcov.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mcov__V_12_12, mcov__V_4_4, mcov__V_8_8);
        }
#line 2849 "mcov.c"
        mcov__succeeded = (mcov__V_12_12 == (MR_Integer) 0);
#line 158 "mcov.m"
        mcov__succeeded = !(mcov__succeeded);
#line 158 "mcov.m"
        if (mcov__succeeded)
#line 158 "mcov.m"
          *mcov__HeadVar__1_1 = mcov__V_12_12;
#line 158 "mcov.m"
        else
#line 158 "mcov.m"
          {
#line 158 "mcov.m"
            MR_Word mcov__V_13_13;

#line 158 "mcov.m"
            {
#line 158 "mcov.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mcov__V_13_13, mcov__V_5_5, mcov__V_9_9);
            }
#line 2869 "mcov.c"
            mcov__succeeded = (mcov__V_13_13 == (MR_Integer) 0);
#line 158 "mcov.m"
            mcov__succeeded = !(mcov__succeeded);
#line 158 "mcov.m"
            if (mcov__succeeded)
#line 158 "mcov.m"
              *mcov__HeadVar__1_1 = mcov__V_13_13;
#line 158 "mcov.m"
            else
#line 158 "mcov.m"
              {
#line 158 "mcov.m"
                MR_Word mcov__V_14_14;

#line 158 "mcov.m"
                {
#line 158 "mcov.m"
                  mdbcomp__prim_data____Compare____proc_label_0_0(&mcov__V_14_14, mcov__V_6_6, mcov__V_10_10);
                }
#line 2889 "mcov.c"
                mcov__succeeded = (mcov__V_14_14 == (MR_Integer) 0);
#line 158 "mcov.m"
                mcov__succeeded = !(mcov__succeeded);
#line 158 "mcov.m"
                if (mcov__succeeded)
#line 158 "mcov.m"
                  *mcov__HeadVar__1_1 = mcov__V_14_14;
#line 158 "mcov.m"
                else
#line 158 "mcov.m"
                  {
#line 158 "mcov.m"
                    mdbcomp__trace_counts____Compare____path_port_0_0(mcov__HeadVar__1_1, mcov__V_7_7, mcov__V_11_11);
#line 158 "mcov.m"
                    return;
                  }
#line 158 "mcov.m"
              }
#line 158 "mcov.m"
          }
#line 158 "mcov.m"
      }
#line 158 "mcov.m"
  }
#line 158 "mcov.m"
}

#line 158 "mcov.m"
static MR_bool MR_CALL 
mcov____Unify____label_info_0_0(
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 158 "mcov.m"
  MR_Word mcov__HeadVar__2_2)
#line 158 "mcov.m"
{
#line 158 "mcov.m"
  {
#line 158 "mcov.m"
    MR_bool mcov__succeeded;
#line 158 "mcov.m"
    MR_Integer mcov__CastX_11 = (MR_Integer) mcov__HeadVar__1_1;
#line 158 "mcov.m"
    MR_Integer mcov__CastY_12 = (MR_Integer) mcov__HeadVar__2_2;

#line 158 "mcov.m"
    mcov__succeeded = (mcov__CastX_11 == mcov__CastY_12);
#line 158 "mcov.m"
    if (mcov__succeeded)
#line 158 "mcov.m"
      mcov__succeeded = MR_TRUE;
#line 158 "mcov.m"
    else
#line 158 "mcov.m"
      {
#line 158 "mcov.m"
        MR_String mcov__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "mcov.m"
        MR_Integer mcov__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "mcov.m"
        MR_Word mcov__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 2)));
#line 158 "mcov.m"
        MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 3)));
#line 158 "mcov.m"
        MR_String mcov__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "mcov.m"
        MR_Integer mcov__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "mcov.m"
        MR_Word mcov__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 2)));
#line 158 "mcov.m"
        MR_Word mcov__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 3)));

#line 2962 "mcov.c"
        mcov__succeeded = (strcmp(mcov__V_3_3, mcov__V_7_7) == 0);
#line 158 "mcov.m"
        if (mcov__succeeded)
#line 158 "mcov.m"
          {
#line 2968 "mcov.c"
            mcov__succeeded = (mcov__V_4_4 == mcov__V_8_8);
#line 158 "mcov.m"
            if (mcov__succeeded)
#line 158 "mcov.m"
              {
#line 2974 "mcov.c"
                {
#line 2976 "mcov.c"
                  mcov__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mcov__V_5_5, mcov__V_9_9);
                }
#line 158 "mcov.m"
                if (mcov__succeeded)
#line 2981 "mcov.c"
                  {
#line 2983 "mcov.c"
                    return mcov__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mcov__V_6_6, mcov__V_10_10);
                  }
#line 158 "mcov.m"
              }
#line 158 "mcov.m"
          }
#line 158 "mcov.m"
      }
#line 158 "mcov.m"
    return mcov__succeeded;
#line 158 "mcov.m"
  }
#line 158 "mcov.m"
}

#line 491 "mcov.m"
static void MR_CALL 
mcov__write_error_message_3_p_0(
#line 491 "mcov.m"
  MR_String mcov__Msg_4)
#line 491 "mcov.m"
{
#line 493 "mcov.m"
  {
#line 493 "mcov.m"
    MR_bool mcov__succeeded;
#line 493 "mcov.m"
    MR_Word mcov__Stderr_6;
#line 493 "mcov.m"
    MR_String mcov__V_18_18;

#line 494 "mcov.m"
    {
#line 494 "mcov.m"
      mercury__io__stderr_stream_3_p_0(&mcov__Stderr_6);
    }
#line 495 "mcov.m"
    {
#line 495 "mcov.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mcov_scalar_common_4[0], mcov__Msg_4, &mcov__V_18_18);
    }
#line 495 "mcov.m"
    {
#line 495 "mcov.m"
      mercury__io__write_string_4_p_0(mcov__Stderr_6, mcov__V_18_18);
    }
#line 495 "mcov.m"
    {
#line 495 "mcov.m"
      mercury__io__write_string_4_p_0(mcov__Stderr_6, (MR_String) "\n");
    }
#line 496 "mcov.m"
    {
#line 496 "mcov.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 496 "mcov.m"
      return;
    }
#line 493 "mcov.m"
  }
#line 491 "mcov.m"
}

#line 479 "mcov.m"
static void MR_CALL 
mcov__option_default_2_p_0(
#line 479 "mcov.m"
  MR_Word * mcov__HeadVar__1_1,
#line 479 "mcov.m"
  MR_Word * mcov__HeadVar__2_2,
#line 479 "mcov.m"
  MR_Cont mcov__cont,
#line 479 "mcov.m"
  void * mcov__cont_env_ptr)
#line 479 "mcov.m"
{
#line 481 "mcov.m"
  {
#line 481 "mcov.m"
    MR_bool mcov__succeeded;

#line 481 "mcov.m"
    {
#line 481 "mcov.m"
      MR_Integer mcov__slot_0 = (MR_Integer) 0;

#line 481 "mcov.m"
      do
#line 481 "mcov.m"
        {
#line 481 "mcov.m"
          *mcov__HeadVar__1_1 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_0;
#line 481 "mcov.m"
          *mcov__HeadVar__2_2 = ((&mcov_vector_common_9[0 + mcov__slot_0]))->mcov__vector_common_type_9_0__vct_9_f_1;
#line 481 "mcov.m"
          {
#line 481 "mcov.m"
            mcov__cont(mcov__cont_env_ptr);
          }
#line 481 "mcov.m"
          mcov__slot_0 = (mcov__slot_0 + (MR_Integer) 1);
#line 481 "mcov.m"
        }
#line 481 "mcov.m"
      while ((mcov__slot_0 < (MR_Integer) 7));
#line 481 "mcov.m"
    }
#line 481 "mcov.m"
  }
#line 479 "mcov.m"
}

#line 468 "mcov.m"
static MR_bool MR_CALL 
mcov__long_option_2_p_0(
#line 468 "mcov.m"
  MR_String mcov__HeadVar__1_1,
#line 468 "mcov.m"
  MR_Word * mcov__HeadVar__2_2)
#line 468 "mcov.m"
{
#line 470 "mcov.m"
  {
#line 470 "mcov.m"
    MR_bool mcov__succeeded;
#line 470 "mcov.m"
    MR_Integer mcov__slot_0;
#line 470 "mcov.m"
    MR_String mcov__str_1;

#line 470 "mcov.m"
    /* hashed string simple lookup switch */
#line 470 "mcov.m"
    /* compute the hash value of the input string */
#line 470 "mcov.m"
    mcov__slot_0 = ((MR_hash_string4(mcov__HeadVar__1_1)) & (MR_Integer) 15);
#line 470 "mcov.m"
    /* hash chain loop */
#line 470 "mcov.m"
    do
#line 470 "mcov.m"
      {
#line 470 "mcov.m"
        /* lookup the string for this hash slot */
#line 470 "mcov.m"
        mcov__str_1 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_0;
#line 470 "mcov.m"
        /* did we find a match? */
#line 470 "mcov.m"
        if ((((mcov__str_1 != NULL)) && ((strcmp(mcov__str_1, mcov__HeadVar__1_1) == 0))))
#line 470 "mcov.m"
          {
#line 470 "mcov.m"
            /* we found a match; look up the results */
#line 470 "mcov.m"
            *mcov__HeadVar__2_2 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_2;
#line 470 "mcov.m"
            mcov__succeeded = MR_TRUE;
#line 470 "mcov.m"
            /* jump out of search loop */
#line 470 "mcov.m"
            goto label_0;
#line 470 "mcov.m"
          }
#line 470 "mcov.m"
        else
#line 470 "mcov.m"
          {
#line 470 "mcov.m"
            /* no match yet, so get next slot in hash chain */
#line 470 "mcov.m"
            mcov__slot_0 = ((&mcov_vector_common_8[0 + mcov__slot_0]))->mcov__vector_common_type_8_0__vct_8_f_1;
#line 470 "mcov.m"
          }
#line 470 "mcov.m"
      }
#line 470 "mcov.m"
    while ((mcov__slot_0 >= (MR_Integer) 0));
#line 470 "mcov.m"
    mcov__succeeded = MR_FALSE;
#line 470 "mcov.m"
  label_0:;
#line 470 "mcov.m"
    return mcov__succeeded;
#line 470 "mcov.m"
  }
#line 468 "mcov.m"
}

#line 459 "mcov.m"
static MR_bool MR_CALL 
mcov__short_option_2_p_0(
#line 459 "mcov.m"
  MR_Char mcov__HeadVar__1_1,
#line 459 "mcov.m"
  MR_Word * mcov__HeadVar__2_2)
#line 459 "mcov.m"
{
#line 461 "mcov.m"
  {
#line 461 "mcov.m"
    MR_bool mcov__succeeded;

#line 461 "mcov.m"
#line 461 "mcov.m"
    switch (mcov__HeadVar__1_1) {
#line 461 "mcov.m"
      default:
#line 461 "mcov.m"
        mcov__succeeded = MR_FALSE;
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 63:
#line 461 "mcov.m"
        {
#line 461 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 0;
#line 461 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 461 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 100:
#line 464 "mcov.m"
        {
#line 464 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 2;
#line 464 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 464 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 104:
#line 462 "mcov.m"
        {
#line 462 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 0;
#line 462 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 462 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 109:
#line 465 "mcov.m"
        {
#line 465 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 3;
#line 465 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 465 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 111:
#line 466 "mcov.m"
        {
#line 466 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 4;
#line 466 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 466 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
      case (MR_Char) 118:
#line 463 "mcov.m"
        {
#line 463 "mcov.m"
          *mcov__HeadVar__2_2 = (MR_Integer) 1;
#line 463 "mcov.m"
          mcov__succeeded = MR_TRUE;
#line 463 "mcov.m"
        }
#line 461 "mcov.m"
        break;
#line 461 "mcov.m"
    }
#line 461 "mcov.m"
    return mcov__succeeded;
#line 461 "mcov.m"
  }
#line 459 "mcov.m"
}

#line 439 "mcov.m"
static void MR_CALL 
mcov__write_tabbed_lines_3_p_0(
#line 439 "mcov.m"
  MR_Word mcov__HeadVar__1_1)
#line 439 "mcov.m"
{
#line 441 "mcov.m"
  while (MR_TRUE)
#line 441 "mcov.m"
    {
#line 441 "mcov.m"
      /* tailcall optimized into a loop */
#line 441 "mcov.m"
      {
#line 441 "mcov.m"
        MR_bool mcov__succeeded;

#line 441 "mcov.m"
        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "mcov.m"
          {
#line 441 "mcov.m"
          }
#line 441 "mcov.m"
        else
#line 442 "mcov.m"
          {
#line 442 "mcov.m"
            MR_String mcov__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "mcov.m"
            MR_Word mcov__Strs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "mcov.m"
            MR_String mcov__V_21_21;

#line 443 "mcov.m"
            {
#line 443 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 443 "mcov.m"
            {
#line 443 "mcov.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mcov_scalar_common_4[0], mcov__Str_7, &mcov__V_21_21);
            }
#line 443 "mcov.m"
            {
#line 443 "mcov.m"
              mercury__io__write_string_3_p_0(mcov__V_21_21);
            }
#line 443 "mcov.m"
            {
#line 443 "mcov.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 444 "mcov.m"
            /* direct tailcall eliminated */
#line 444 "mcov.m"
            {
#line 444 "mcov.m"
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Strs_8;

#line 444 "mcov.m"
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
#line 444 "mcov.m"
            }
#line 444 "mcov.m"
            continue;
#line 442 "mcov.m"
          }
#line 441 "mcov.m"
      }
#line 441 "mcov.m"
      break;
#line 441 "mcov.m"
    }
#line 439 "mcov.m"
}

#line 401 "mcov.m"
static void MR_CALL 
mcov__long_usage_2_p_0(void)
#line 401 "mcov.m"
{
#line 403 "mcov.m"
  {
#line 403 "mcov.m"
    MR_bool mcov__succeeded;
#line 403 "mcov.m"
    MR_String mcov__Version_4;
#line 403 "mcov.m"
    MR_String mcov__FullArch_5;
#line 403 "mcov.m"
    MR_String mcov__V_76_76;
#line 403 "mcov.m"
    MR_Word mcov__V_82_82;
#line 403 "mcov.m"
    MR_String mcov__V_86_86;

#line 404 "mcov.m"
    {
#line 404 "mcov.m"
      mercury__library__version_2_p_0(&mcov__Version_4, &mcov__FullArch_5);
    }
#line 405 "mcov.m"
    {
#line 405 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "Name: mcov -- Mercury Coverage Testing Tool, version ");
    }
#line 3386 "mcov.c"
    mcov__V_82_82 = (MR_Word) &mcov_scalar_common_4[0];
#line 407 "mcov.m"
    {
#line 407 "mcov.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_82_82, mcov__Version_4, &mcov__V_76_76);
    }
#line 407 "mcov.m"
    {
#line 407 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_76_76);
    }
#line 405 "mcov.m"
    {
#line 405 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
#line 407 "mcov.m"
    {
#line 407 "mcov.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_82_82, mcov__FullArch_5, &mcov__V_86_86);
    }
#line 407 "mcov.m"
    {
#line 407 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_86_86);
    }
#line 405 "mcov.m"
    {
#line 405 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 408 "mcov.m"
    {
#line 408 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n");
    }
#line 410 "mcov.m"
    {
#line 410 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2015 The Mercury team\n");
    }
#line 412 "mcov.m"
    {
#line 412 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mcov [<options>] <arguments>\n");
    }
#line 413 "mcov.m"
    {
#line 413 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 414 "mcov.m"
    {
#line 414 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments are assumed to Mercury trace count files.\n");
    }
#line 415 "mcov.m"
    {
#line 415 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 416 "mcov.m"
    {
#line 416 "mcov.m"
      mcov__write_tabbed_lines_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mcov_scalar_common_2[23]));
#line 416 "mcov.m"
      return;
    }
#line 403 "mcov.m"
  }
#line 401 "mcov.m"
}

#line 388 "mcov.m"
static void MR_CALL 
mcov__short_usage_2_p_0(void)
#line 388 "mcov.m"
{
#line 390 "mcov.m"
  {
#line 390 "mcov.m"
    MR_bool mcov__succeeded;
#line 390 "mcov.m"
    MR_String mcov__ProgName_4;
#line 390 "mcov.m"
    MR_String mcov__Version_5;
#line 390 "mcov.m"
    MR_String mcov__FullArch_6;
#line 390 "mcov.m"
    MR_Word mcov__V_11_11;
#line 390 "mcov.m"
    MR_Word mcov__V_14_14;
#line 390 "mcov.m"
    MR_Word mcov__V_15_15;
#line 390 "mcov.m"
    MR_Word mcov__V_17_17;
#line 390 "mcov.m"
    MR_Word mcov__V_18_18;
#line 390 "mcov.m"
    MR_Word mcov__V_20_20;
#line 390 "mcov.m"
    MR_Word mcov__V_22_22;
#line 390 "mcov.m"
    MR_Word mcov__V_24_24;
#line 390 "mcov.m"
    MR_Word mcov__V_26_26;
#line 390 "mcov.m"
    MR_Word mcov__V_27_27;
#line 390 "mcov.m"
    MR_Word mcov__V_29_29;
#line 390 "mcov.m"
    MR_Word mcov__V_31_31;

#line 391 "mcov.m"
    {
#line 391 "mcov.m"
      mercury__io__progname_base_4_p_0((MR_String) "mcov", &mcov__ProgName_4);
    }
#line 392 "mcov.m"
    {
#line 392 "mcov.m"
      mercury__library__version_2_p_0(&mcov__Version_5, &mcov__FullArch_6);
    }
#line 398 "mcov.m"
    {
#line 398 "mcov.m"
      mcov__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_31_31, 0) = ((MR_Box) (mcov__ProgName_4));
#line 398 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[25])));
#line 398 "mcov.m"
    }
#line 398 "mcov.m"
    {
#line 398 "mcov.m"
      mcov__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_29_29, 0) = ((MR_Box) ((MR_String) "Use \140"));
#line 398 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_29_29, 1) = ((MR_Box) (mcov__V_31_31));
#line 398 "mcov.m"
    }
#line 397 "mcov.m"
    {
#line 397 "mcov.m"
      mcov__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_27_27, 0) = ((MR_Box) ((MR_String) " [<options>] [<files>]\n"));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_27_27, 1) = ((MR_Box) (mcov__V_29_29));
#line 397 "mcov.m"
    }
#line 397 "mcov.m"
    {
#line 397 "mcov.m"
      mcov__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_26_26, 0) = ((MR_Box) (mcov__ProgName_4));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_26_26, 1) = ((MR_Box) (mcov__V_27_27));
#line 397 "mcov.m"
    }
#line 397 "mcov.m"
    {
#line 397 "mcov.m"
      mcov__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_24_24, 0) = ((MR_Box) ((MR_String) "Usage: "));
#line 397 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_24_24, 1) = ((MR_Box) (mcov__V_26_26));
#line 397 "mcov.m"
    }
#line 396 "mcov.m"
    {
#line 396 "mcov.m"
      mcov__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_22_22, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2015 The Mercury team\n"));
#line 396 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_22_22, 1) = ((MR_Box) (mcov__V_24_24));
#line 396 "mcov.m"
    }
#line 395 "mcov.m"
    {
#line 395 "mcov.m"
      mcov__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_20_20, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2006-2007, 2010-2012 The University of Melbourne\n"));
#line 395 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_20_20, 1) = ((MR_Box) (mcov__V_22_22));
#line 395 "mcov.m"
    }
#line 394 "mcov.m"
    {
#line 394 "mcov.m"
      mcov__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_18_18, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_18_18, 1) = ((MR_Box) (mcov__V_20_20));
#line 394 "mcov.m"
    }
#line 394 "mcov.m"
    {
#line 394 "mcov.m"
      mcov__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_17_17, 0) = ((MR_Box) (mcov__FullArch_6));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_17_17, 1) = ((MR_Box) (mcov__V_18_18));
#line 394 "mcov.m"
    }
#line 394 "mcov.m"
    {
#line 394 "mcov.m"
      mcov__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_15_15, 0) = ((MR_Box) ((MR_String) ", on "));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_15_15, 1) = ((MR_Box) (mcov__V_17_17));
#line 394 "mcov.m"
    }
#line 394 "mcov.m"
    {
#line 394 "mcov.m"
      mcov__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_14_14, 0) = ((MR_Box) (mcov__Version_5));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_14_14, 1) = ((MR_Box) (mcov__V_15_15));
#line 394 "mcov.m"
    }
#line 394 "mcov.m"
    {
#line 394 "mcov.m"
      mcov__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_11_11, 0) = ((MR_Box) ((MR_String) "Mercury Coverage Testing Tool, version "));
#line 394 "mcov.m"
      MR_hl_field(MR_mktag(1), mcov__V_11_11, 1) = ((MR_Box) (mcov__V_14_14));
#line 394 "mcov.m"
    }
#line 393 "mcov.m"
    {
#line 393 "mcov.m"
      mercury__io__write_strings_3_p_0(mcov__V_11_11);
#line 393 "mcov.m"
      return;
    }
#line 390 "mcov.m"
  }
#line 388 "mcov.m"
}

#line 353 "mcov.m"
static void MR_CALL 
mcov__write_proc_label_for_user_3_p_0(
#line 353 "mcov.m"
  MR_Word mcov__ProcLabel_4)
#line 353 "mcov.m"
{
#line 358 "mcov.m"
  {
#line 358 "mcov.m"
    MR_bool mcov__succeeded;

#line 358 "mcov.m"
    if (((MR_tag((MR_Word) mcov__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
#line 358 "mcov.m"
      {
#line 358 "mcov.m"
        MR_Word mcov__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 1)));
#line 358 "mcov.m"
        MR_String mcov__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 3)));
#line 358 "mcov.m"
        MR_Integer mcov__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 4)));
#line 358 "mcov.m"
        MR_Integer mcov__Mode_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 5)));
#line 358 "mcov.m"
        MR_String mcov__PredOrFuncStr_12;
#line 358 "mcov.m"
        MR_String mcov__QuotedName_13;
#line 358 "mcov.m"
        MR_String mcov__V_37_37;
#line 358 "mcov.m"
        MR_Word mcov__V_43_43;
#line 358 "mcov.m"
        MR_String mcov__V_47_47;
#line 358 "mcov.m"
        MR_String mcov__V_57_57;
#line 358 "mcov.m"
        MR_String mcov__V_66_66;
#line 357 "mcov.m"
        MR_Word mcov___DefModuleSym_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 0)));
#line 357 "mcov.m"
        MR_Word mcov___DeclModuleSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_4, (MR_Integer) 2)));

#line 362 "mcov.m"
#line 362 "mcov.m"
        switch (mcov__PredOrFunc_7) {
#line 362 "mcov.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 362 "mcov.m"
          case (MR_Integer) 1:
#line 364 "mcov.m"
            mcov__PredOrFuncStr_12 = (MR_String) "func";
#line 362 "mcov.m"
            break;
#line 362 "mcov.m"
          case (MR_Integer) 0:
#line 361 "mcov.m"
            mcov__PredOrFuncStr_12 = (MR_String) "pred";
#line 362 "mcov.m"
            break;
#line 362 "mcov.m"
        }
#line 366 "mcov.m"
        {
#line 366 "mcov.m"
          mcov__QuotedName_13 = mercury__term_io__quoted_atom_1_f_0(mcov__Name_9);
        }
#line 3709 "mcov.c"
        mcov__V_43_43 = (MR_Word) &mcov_scalar_common_4[0];
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_43_43, mcov__PredOrFuncStr_12, &mcov__V_37_37);
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__io__write_string_3_p_0(mcov__V_37_37);
        }
#line 367 "mcov.m"
        {
#line 367 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_43_43, mcov__QuotedName_13, &mcov__V_47_47);
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__io__write_string_3_p_0(mcov__V_47_47);
        }
#line 367 "mcov.m"
        {
#line 367 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_43_43, mcov__Arity_10, &mcov__V_57_57);
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__io__write_string_3_p_0(mcov__V_57_57);
        }
#line 367 "mcov.m"
        {
#line 367 "mcov.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_43_43, mcov__Mode_11, &mcov__V_66_66);
        }
#line 368 "mcov.m"
        {
#line 368 "mcov.m"
          mercury__io__write_string_3_p_0(mcov__V_66_66);
#line 368 "mcov.m"
          return;
        }
#line 358 "mcov.m"
      }
#line 358 "mcov.m"
    else
#line 371 "mcov.m"
      {
#line 372 "mcov.m"
        {
#line 372 "mcov.m"
          mercury__require__unexpected_3_p_0((MR_String) "mcov.m", (MR_String) "predicate \140mcov.write_proc_label_for_user\'/3", (MR_String) "special_pred");
#line 372 "mcov.m"
          return;
        }
#line 371 "mcov.m"
      }
#line 358 "mcov.m"
  }
#line 353 "mcov.m"
}

#line 339 "mcov.m"
static void MR_CALL 
mcov__write_label_info_3_p_0(
#line 339 "mcov.m"
  MR_Word mcov__LabelInfo_4)
#line 339 "mcov.m"
{
#line 341 "mcov.m"
  {
#line 341 "mcov.m"
    MR_bool mcov__succeeded;
#line 341 "mcov.m"
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 0)));
#line 341 "mcov.m"
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 1)));
#line 341 "mcov.m"
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 2)));
#line 341 "mcov.m"
    MR_Word mcov__PathPort_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelInfo_4, (MR_Integer) 3)));
#line 341 "mcov.m"
    MR_String mcov__V_29_29;
#line 341 "mcov.m"
    MR_Word mcov__V_35_35 = (MR_Word) &mcov_scalar_common_4[0];
#line 341 "mcov.m"
    MR_String mcov__V_39_39;

#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_35_35, mcov__FileName_6, &mcov__V_29_29);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_29_29);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_35_35, mcov__LineNumber_7, &mcov__V_39_39);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_39_39);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 344 "mcov.m"
    {
#line 344 "mcov.m"
      mcov__write_proc_label_for_user_3_p_0(mcov__ProcLabel_8);
    }
#line 377 "mcov.m"
#line 377 "mcov.m"
    switch (MR_tag((MR_Word) mcov__PathPort_9)) {
#line 377 "mcov.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 377 "mcov.m"
      case (MR_Integer) 0:
#line 377 "mcov.m"
        {
#line 377 "mcov.m"
          MR_Word mcov__Port_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_9, (MR_Integer) 0)));
#line 377 "mcov.m"
          MR_String mcov__PortStr_49;

#line 378 "mcov.m"
          {
#line 378 "mcov.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_49, mcov__Port_47);
          }
#line 379 "mcov.m"
          {
#line 379 "mcov.m"
            mercury__io__write_string_3_p_0(mcov__PortStr_49);
          }
#line 377 "mcov.m"
        }
#line 377 "mcov.m"
        break;
#line 377 "mcov.m"
      case (MR_Integer) 1:
#line 380 "mcov.m"
        {
#line 380 "mcov.m"
          MR_Word mcov__Path_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__PathPort_9, (MR_Integer) 0)));
#line 380 "mcov.m"
          MR_Word mcov__V_57_57;
#line 380 "mcov.m"
          MR_Word mcov__V_60_60;
#line 380 "mcov.m"
          MR_String mcov__V_61_61;

#line 381 "mcov.m"
          {
#line 381 "mcov.m"
            mcov__V_61_61 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_53);
          }
#line 381 "mcov.m"
          {
#line 381 "mcov.m"
            mcov__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_60_60, 0) = ((MR_Box) (mcov__V_61_61));
#line 381 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[24])));
#line 381 "mcov.m"
          }
#line 381 "mcov.m"
          {
#line 381 "mcov.m"
            mcov__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_57_57, 0) = ((MR_Box) ((MR_String) "<"));
#line 381 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_57_57, 1) = ((MR_Box) (mcov__V_60_60));
#line 381 "mcov.m"
          }
#line 381 "mcov.m"
          {
#line 381 "mcov.m"
            mercury__io__write_strings_3_p_0(mcov__V_57_57);
          }
#line 380 "mcov.m"
        }
#line 377 "mcov.m"
        break;
#line 377 "mcov.m"
      case (MR_Integer) 2:
#line 382 "mcov.m"
        {
#line 382 "mcov.m"
          MR_Word mcov__Port_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_9, (MR_Integer) 0)));
#line 382 "mcov.m"
          MR_Word mcov__Path_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), mcov__PathPort_9, (MR_Integer) 1)));
#line 382 "mcov.m"
          MR_String mcov__PortStr_68;
#line 382 "mcov.m"
          MR_Word mcov__V_71_71;
#line 382 "mcov.m"
          MR_Word mcov__V_73_73;
#line 382 "mcov.m"
          MR_Word mcov__V_75_75;
#line 382 "mcov.m"
          MR_String mcov__V_76_76;

#line 383 "mcov.m"
          {
#line 383 "mcov.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mcov__PortStr_68, mcov__Port_65);
          }
#line 384 "mcov.m"
          {
#line 384 "mcov.m"
            mcov__V_76_76 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mcov__Path_66);
          }
#line 384 "mcov.m"
          {
#line 384 "mcov.m"
            mcov__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_75_75, 0) = ((MR_Box) (mcov__V_76_76));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mcov_scalar_common_2[24])));
#line 384 "mcov.m"
          }
#line 384 "mcov.m"
          {
#line 384 "mcov.m"
            mcov__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_73_73, 0) = ((MR_Box) ((MR_String) " <"));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_73_73, 1) = ((MR_Box) (mcov__V_75_75));
#line 384 "mcov.m"
          }
#line 384 "mcov.m"
          {
#line 384 "mcov.m"
            mcov__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_71_71, 0) = ((MR_Box) (mcov__PortStr_68));
#line 384 "mcov.m"
            MR_hl_field(MR_mktag(1), mcov__V_71_71, 1) = ((MR_Box) (mcov__V_73_73));
#line 384 "mcov.m"
          }
#line 384 "mcov.m"
          {
#line 384 "mcov.m"
            mercury__io__write_strings_3_p_0(mcov__V_71_71);
          }
#line 382 "mcov.m"
        }
#line 377 "mcov.m"
        break;
#line 377 "mcov.m"
    }
#line 346 "mcov.m"
    {
#line 346 "mcov.m"
      mercury__io__nl_2_p_0();
#line 346 "mcov.m"
      return;
    }
#line 341 "mcov.m"
  }
#line 339 "mcov.m"
}

#line 331 "mcov.m"
static void MR_CALL 
mcov__write_proc_info_3_p_0(
#line 331 "mcov.m"
  MR_Word mcov__ProcInfo_4)
#line 331 "mcov.m"
{
#line 333 "mcov.m"
  {
#line 333 "mcov.m"
    MR_bool mcov__succeeded;
#line 333 "mcov.m"
    MR_String mcov__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 0)));
#line 333 "mcov.m"
    MR_Integer mcov__LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 1)));
#line 333 "mcov.m"
    MR_Word mcov__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcInfo_4, (MR_Integer) 2)));
#line 333 "mcov.m"
    MR_String mcov__V_27_27;
#line 333 "mcov.m"
    MR_Word mcov__V_33_33 = (MR_Word) &mcov_scalar_common_4[0];
#line 333 "mcov.m"
    MR_String mcov__V_37_37;

#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_33_33, mcov__FileName_6, &mcov__V_27_27);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_27_27);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mcov__V_33_33, mcov__LineNumber_7, &mcov__V_37_37);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0(mcov__V_37_37);
    }
#line 351 "mcov.m"
    {
#line 351 "mcov.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 336 "mcov.m"
    {
#line 336 "mcov.m"
      mcov__write_proc_label_for_user_3_p_0(mcov__ProcLabel_8);
    }
#line 337 "mcov.m"
    {
#line 337 "mcov.m"
      mercury__io__nl_2_p_0();
#line 337 "mcov.m"
      return;
    }
#line 333 "mcov.m"
  }
#line 331 "mcov.m"
}

#line 294 "mcov.m"
static void MR_CALL 
mcov__label_process_path_port_count_6_p_0(
#line 294 "mcov.m"
  MR_Word mcov__ProcLabel_7,
#line 294 "mcov.m"
  MR_String mcov__FileName_8,
#line 294 "mcov.m"
  MR_Word mcov__PathPort_9,
#line 294 "mcov.m"
  MR_Word mcov__LineNumberAndCount_10,
#line 294 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_16,
#line 294 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_17)
#line 294 "mcov.m"
{
#line 299 "mcov.m"
  {
#line 299 "mcov.m"
    MR_bool mcov__succeeded;
#line 299 "mcov.m"
    MR_Integer mcov__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 0)));
#line 299 "mcov.m"
    MR_Integer mcov__Count_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 1)));
#line 300 "mcov.m"
    MR_Integer mcov___NumTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_10, (MR_Integer) 2)));

#line 302 "mcov.m"
    mcov__succeeded = (mcov__Count_13 == (MR_Integer) 0);
#line 302 "mcov.m"
    if (mcov__succeeded)
#line 321 "mcov.m"
      {
#line 321 "mcov.m"
        if (((MR_tag((MR_Word) mcov__ProcLabel_7)) == (MR_mktag((MR_Integer) 0))))
#line 321 "mcov.m"
          {
#line 321 "mcov.m"
            MR_Word mcov__DefModuleSym_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 0)));
#line 321 "mcov.m"
            MR_Word mcov__DeclModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 2)));
#line 320 "mcov.m"
            MR_Word mcov__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 1)));
#line 320 "mcov.m"
            MR_String mcov__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 3)));
#line 320 "mcov.m"
            MR_Integer mcov__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 4)));
#line 320 "mcov.m"
            MR_Integer mcov__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_7, (MR_Integer) 5)));

#line 322 "mcov.m"
            {
#line 322 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_20, mcov__DeclModuleSym_22);
            }
#line 321 "mcov.m"
          }
#line 321 "mcov.m"
        else
#line 325 "mcov.m"
          {
#line 325 "mcov.m"
            MR_Word mcov__TypeModuleSym_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 2)));
#line 325 "mcov.m"
            MR_Word mcov__DefModuleSym_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 0)));
#line 324 "mcov.m"
            MR_Word mcov__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 1)));
#line 324 "mcov.m"
            MR_String mcov__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 3)));
#line 324 "mcov.m"
            MR_Integer mcov__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 4)));
#line 324 "mcov.m"
            MR_Integer mcov__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_7, (MR_Integer) 5)));

#line 326 "mcov.m"
            {
#line 326 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_31, mcov__TypeModuleSym_27);
            }
#line 325 "mcov.m"
          }
#line 321 "mcov.m"
      }
#line 307 "mcov.m"
    if (mcov__succeeded)
#line 305 "mcov.m"
      {
#line 305 "mcov.m"
        MR_Word mcov__LabelInfo_15;

#line 305 "mcov.m"
        {
#line 305 "mcov.m"
          mcov__LabelInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 0) = ((MR_Box) (mcov__FileName_8));
#line 305 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 1) = ((MR_Box) (mcov__LineNumber_12));
#line 305 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 2) = ((MR_Box) (mcov__ProcLabel_7));
#line 305 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__LabelInfo_15, 3) = ((MR_Box) (mcov__PathPort_9));
#line 305 "mcov.m"
        }
#line 306 "mcov.m"
        {
#line 306 "mcov.m"
          MR_Word base;
#line 306 "mcov.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "mcov.m"
          *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = base;
#line 306 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LabelInfo_15));
#line 306 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_16));
#line 306 "mcov.m"
        }
#line 305 "mcov.m"
      }
#line 307 "mcov.m"
    else
#line 307 "mcov.m"
      *mcov__STATE_VARIABLE_ZeroLabelInfos_17 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_16;
#line 299 "mcov.m"
  }
#line 294 "mcov.m"
}

#line 290 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0_1(
#line 290 "mcov.m"
  MR_Box mcov__closure_arg,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 290 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 290 "mcov.m"
  MR_Box * mcov__wrapper_arg_4)
#line 290 "mcov.m"
{
#line 290 "mcov.m"
  {
#line 290 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 290 "mcov.m"
    MR_Word mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17;

#line 290 "mcov.m"
    {
#line 290 "mcov.m"
      mcov__label_process_path_port_count_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))), ((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17);
    }
#line 290 "mcov.m"
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_ZeroLabelInfos_17));
#line 290 "mcov.m"
  }
#line 290 "mcov.m"
}

#line 283 "mcov.m"
static void MR_CALL 
mcov__collect_zero_count_local_labels_3_p_0(
#line 283 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 283 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0_2,
#line 283 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ZeroLabelInfos_3)
#line 283 "mcov.m"
{
#line 286 "mcov.m"
  while (MR_TRUE)
#line 286 "mcov.m"
    {
#line 286 "mcov.m"
      /* tailcall optimized into a loop */
#line 286 "mcov.m"
      {
#line 286 "mcov.m"
        MR_bool mcov__succeeded;

#line 286 "mcov.m"
        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "mcov.m"
          *mcov__STATE_VARIABLE_ZeroLabelInfos_3 = mcov__STATE_VARIABLE_ZeroLabelInfos_0_2;
#line 286 "mcov.m"
        else
#line 287 "mcov.m"
          {
#line 287 "mcov.m"
            MR_Word mcov__Assoc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "mcov.m"
            MR_Word mcov__Assocs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "mcov.m"
            MR_Word mcov__LabelFilename_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 0)));
#line 287 "mcov.m"
            MR_Word mcov__PathPortCountMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_7, (MR_Integer) 1)));
#line 287 "mcov.m"
            MR_String mcov__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 1)));
#line 287 "mcov.m"
            MR_Word mcov__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 2)));
#line 287 "mcov.m"
            MR_Word mcov__V_17_17;
#line 287 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;
#line 289 "mcov.m"
            MR_Word mcov___ModuleNameSym_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_10, (MR_Integer) 0)));
#line 290 "mcov.m"
            MR_Box mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18;

#line 290 "mcov.m"
            {
#line 290 "mcov.m"
              mcov__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 290 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 0) = ((MR_Box) (&mcov_scalar_common_7[1]));
#line 290 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 1) = ((MR_Box) (mcov__collect_zero_count_local_labels_3_p_0_1));
#line 290 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 290 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 3) = ((MR_Box) (mcov__ProcLabel_14));
#line 290 "mcov.m"
              MR_hl_field(MR_mktag(0), mcov__V_17_17, 4) = ((MR_Box) (mcov__FileName_13));
#line 290 "mcov.m"
            }
#line 290 "mcov.m"
            {
#line 290 "mcov.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[1], mcov__V_17_17, mcov__PathPortCountMap_11, ((MR_Box) (mcov__STATE_VARIABLE_ZeroLabelInfos_0_2)), &mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
            }
#line 290 "mcov.m"
            mcov__STATE_VARIABLE_ZeroLabelInfos_18_18 = ((MR_Word) mcov__conv1_STATE_VARIABLE_ZeroLabelInfos_18_18);
#line 292 "mcov.m"
            /* direct tailcall eliminated */
#line 292 "mcov.m"
            {
#line 292 "mcov.m"
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_8;
#line 292 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_18_18;

#line 292 "mcov.m"
              mcov__STATE_VARIABLE_ZeroLabelInfos_0_2 = mcov__STATE_VARIABLE_ZeroLabelInfos_0__tmp_copy_2;
#line 292 "mcov.m"
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
#line 292 "mcov.m"
            }
#line 292 "mcov.m"
            continue;
#line 287 "mcov.m"
          }
#line 286 "mcov.m"
      }
#line 286 "mcov.m"
      break;
#line 286 "mcov.m"
    }
#line 283 "mcov.m"
}

#line 273 "mcov.m"
static MR_bool MR_CALL 
mcov__is_zero_count_local_proc_3_p_0(
#line 273 "mcov.m"
  MR_Word mcov__ProcInfoMap_4,
#line 273 "mcov.m"
  MR_Word mcov__HeadVar__2_2,
#line 273 "mcov.m"
  MR_Word * mcov__ProcInfo_7)
#line 273 "mcov.m"
{
#line 276 "mcov.m"
  {
#line 276 "mcov.m"
    MR_bool mcov__succeeded;
#line 276 "mcov.m"
    MR_Word mcov__TypeCtorInfo_8_8;
#line 276 "mcov.m"
    MR_Word mcov__TypeCtorInfo_9_9;
#line 276 "mcov.m"
    MR_Word mcov__ProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "mcov.m"
    MR_Integer mcov__Count_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "mcov.m"
    MR_Box mcov__conv0_ProcInfo_7;

#line 277 "mcov.m"
    mcov__succeeded = (mcov__Count_6 == (MR_Integer) 0);
#line 276 "mcov.m"
    if (mcov__succeeded)
#line 276 "mcov.m"
      {
#line 321 "mcov.m"
        if (((MR_tag((MR_Word) mcov__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
#line 321 "mcov.m"
          {
#line 321 "mcov.m"
            MR_Word mcov__DefModuleSym_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 0)));
#line 321 "mcov.m"
            MR_Word mcov__DeclModuleSym_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 2)));
#line 320 "mcov.m"
            MR_Word mcov__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 1)));
#line 320 "mcov.m"
            MR_String mcov__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 3)));
#line 320 "mcov.m"
            MR_Integer mcov__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 4)));
#line 320 "mcov.m"
            MR_Integer mcov__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__ProcLabel_5, (MR_Integer) 5)));

#line 322 "mcov.m"
            {
#line 322 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_11, mcov__DeclModuleSym_13);
            }
#line 321 "mcov.m"
          }
#line 321 "mcov.m"
        else
#line 325 "mcov.m"
          {
#line 325 "mcov.m"
            MR_Word mcov__TypeModuleSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 2)));
#line 325 "mcov.m"
            MR_Word mcov__DefModuleSym_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 0)));
#line 324 "mcov.m"
            MR_Word mcov__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 1)));
#line 324 "mcov.m"
            MR_String mcov__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 3)));
#line 324 "mcov.m"
            MR_Integer mcov__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 4)));
#line 324 "mcov.m"
            MR_Integer mcov__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__ProcLabel_5, (MR_Integer) 5)));

#line 326 "mcov.m"
            {
#line 326 "mcov.m"
              mcov__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mcov__DefModuleSym_22, mcov__TypeModuleSym_18);
            }
#line 325 "mcov.m"
          }
#line 276 "mcov.m"
        if (mcov__succeeded)
#line 276 "mcov.m"
          {
#line 4427 "mcov.c"
            mcov__TypeCtorInfo_8_8 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 4429 "mcov.c"
            mcov__TypeCtorInfo_9_9 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 279 "mcov.m"
            {
#line 279 "mcov.m"
              mercury__map__lookup_3_p_0(mcov__TypeCtorInfo_8_8, mcov__TypeCtorInfo_9_9, mcov__ProcInfoMap_4, ((MR_Box) (mcov__ProcLabel_5)), &mcov__conv0_ProcInfo_7);
            }
#line 279 "mcov.m"
            *mcov__ProcInfo_7 = ((MR_Word) mcov__conv0_ProcInfo_7);
#line 279 "mcov.m"
            mcov__succeeded = MR_TRUE;
#line 276 "mcov.m"
          }
#line 276 "mcov.m"
      }
#line 276 "mcov.m"
    return mcov__succeeded;
#line 276 "mcov.m"
  }
#line 273 "mcov.m"
}

#line 266 "mcov.m"
static MR_bool MR_CALL 
mcov__proc_process_path_port_count_6_p_0_1(
#line 266 "mcov.m"
  MR_Box mcov__closure_arg)
#line 266 "mcov.m"
{
#line 266 "mcov.m"
  {
#line 266 "mcov.m"
    MR_bool mcov__succeeded;
#line 266 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 266 "mcov.m"
    {
#line 266 "mcov.m"
      return mcov__succeeded = mcov__IntroducedFrom__pred__proc_process_path_port_count__266__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 4))));
    }
#line 266 "mcov.m"
    return mcov__succeeded;
#line 266 "mcov.m"
  }
#line 266 "mcov.m"
}

#line 258 "mcov.m"
static void MR_CALL 
mcov__proc_process_path_port_count_6_p_0(
#line 258 "mcov.m"
  MR_Word mcov__PathPort_7,
#line 258 "mcov.m"
  MR_Word mcov__LineNumberAndCount_8,
#line 258 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_MaybeCallInfo_0_14,
#line 258 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_MaybeCallInfo_15,
#line 258 "mcov.m"
  MR_Integer mcov__STATE_VARIABLE_Count_0_16,
#line 258 "mcov.m"
  MR_Integer * mcov__STATE_VARIABLE_Count_17)
#line 258 "mcov.m"
{
#line 262 "mcov.m"
  {
#line 262 "mcov.m"
    MR_bool mcov__succeeded;
#line 262 "mcov.m"
    MR_Integer mcov__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 0)));
#line 262 "mcov.m"
    MR_Integer mcov__CurCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 1)));
#line 263 "mcov.m"
    MR_Integer mcov___NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mcov__LineNumberAndCount_8, (MR_Integer) 2)));
#line 265 "mcov.m"
    MR_Word mcov__V_19_19;

#line 264 "mcov.m"
    *mcov__STATE_VARIABLE_Count_17 = (mcov__STATE_VARIABLE_Count_0_16 + mcov__CurCount_12);
#line 265 "mcov.m"
    mcov__succeeded = ((MR_tag((MR_Word) mcov__PathPort_7)) == (MR_mktag((MR_Integer) 0)));
#line 265 "mcov.m"
    if (mcov__succeeded)
#line 265 "mcov.m"
      {
#line 265 "mcov.m"
        mcov__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__PathPort_7, (MR_Integer) 0)));
#line 265 "mcov.m"
        mcov__succeeded = (mcov__V_19_19 == (MR_Integer) 0);
#line 265 "mcov.m"
      }
#line 269 "mcov.m"
    if (mcov__succeeded)
#line 267 "mcov.m"
      {
#line 267 "mcov.m"
        MR_Word mcov__V_20_20;

#line 266 "mcov.m"
        {
#line 266 "mcov.m"
          mcov__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 266 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 0) = ((MR_Box) (&mcov_scalar_common_3[5]));
#line 266 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 1) = ((MR_Box) (mcov__proc_process_path_port_count_6_p_0_1));
#line 266 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 266 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 3) = ((MR_Box) (mcov__STATE_VARIABLE_MaybeCallInfo_0_14));
#line 266 "mcov.m"
          MR_hl_field(MR_mktag(0), mcov__V_20_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "mcov.m"
        }
#line 266 "mcov.m"
        {
#line 266 "mcov.m"
          mercury__require__require_2_p_0(mcov__V_20_20, (MR_String) "proc_process_path_port_count: duplicate call port:");
        }
#line 268 "mcov.m"
        {
#line 268 "mcov.m"
          MR_Word base;
#line 268 "mcov.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "mcov.m"
          *mcov__STATE_VARIABLE_MaybeCallInfo_15 = base;
#line 268 "mcov.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mcov__LineNumber_11));
#line 268 "mcov.m"
        }
#line 267 "mcov.m"
      }
#line 269 "mcov.m"
    else
#line 269 "mcov.m"
      *mcov__STATE_VARIABLE_MaybeCallInfo_15 = mcov__STATE_VARIABLE_MaybeCallInfo_0_14;
#line 262 "mcov.m"
  }
#line 258 "mcov.m"
}

#line 242 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0_1(
#line 242 "mcov.m"
  MR_Box mcov__closure_arg,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_3,
#line 242 "mcov.m"
  MR_Box * mcov__wrapper_arg_4,
#line 242 "mcov.m"
  MR_Box mcov__wrapper_arg_5,
#line 242 "mcov.m"
  MR_Box * mcov__wrapper_arg_6)
#line 242 "mcov.m"
{
#line 242 "mcov.m"
  {
#line 242 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 242 "mcov.m"
    MR_Word mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15;
#line 242 "mcov.m"
    MR_Integer mcov__conv0_STATE_VARIABLE_Count_17;

#line 242 "mcov.m"
    {
#line 242 "mcov.m"
      mcov__proc_process_path_port_count_6_p_0(((MR_Word) mcov__wrapper_arg_1), ((MR_Word) mcov__wrapper_arg_2), ((MR_Word) mcov__wrapper_arg_3), &mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15, ((MR_Integer) mcov__wrapper_arg_5), &mcov__conv0_STATE_VARIABLE_Count_17);
    }
#line 242 "mcov.m"
    *mcov__wrapper_arg_4 = ((MR_Box) (mcov__conv1_STATE_VARIABLE_MaybeCallInfo_15));
#line 242 "mcov.m"
    *mcov__wrapper_arg_6 = ((MR_Box) (mcov__conv0_STATE_VARIABLE_Count_17));
#line 242 "mcov.m"
  }
#line 242 "mcov.m"
}

#line 234 "mcov.m"
static void MR_CALL 
mcov__collect_proc_infos_counts_5_p_0(
#line 234 "mcov.m"
  MR_Word mcov__HeadVar__1_1,
#line 234 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0_2,
#line 234 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_ProcInfoMap_3,
#line 234 "mcov.m"
  MR_Word mcov__STATE_VARIABLE_CountMap_0_4,
#line 234 "mcov.m"
  MR_Word * mcov__STATE_VARIABLE_CountMap_5)
#line 234 "mcov.m"
{
#line 238 "mcov.m"
  while (MR_TRUE)
#line 238 "mcov.m"
    {
#line 238 "mcov.m"
      /* tailcall optimized into a loop */
#line 238 "mcov.m"
      {
#line 238 "mcov.m"
        MR_bool mcov__succeeded;

#line 238 "mcov.m"
        if ((mcov__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "mcov.m"
          {
#line 238 "mcov.m"
            *mcov__STATE_VARIABLE_CountMap_5 = mcov__STATE_VARIABLE_CountMap_0_4;
#line 238 "mcov.m"
            *mcov__STATE_VARIABLE_ProcInfoMap_3 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
#line 238 "mcov.m"
          }
#line 238 "mcov.m"
        else
#line 239 "mcov.m"
          {
#line 239 "mcov.m"
            MR_Word mcov__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 239 "mcov.m"
            MR_Word mcov__Assoc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "mcov.m"
            MR_Word mcov__Assocs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "mcov.m"
            MR_Word mcov__LabelFilename_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 0)));
#line 239 "mcov.m"
            MR_Word mcov__PathPortCountMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__Assoc_12, (MR_Integer) 1)));
#line 239 "mcov.m"
            MR_String mcov__FileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 1)));
#line 239 "mcov.m"
            MR_Word mcov__ProcLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 2)));
#line 239 "mcov.m"
            MR_Word mcov__MaybeCallInfo_21;
#line 239 "mcov.m"
            MR_Integer mcov__CurCount_22;
#line 239 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_CountMap_34_34;
#line 239 "mcov.m"
            MR_Word mcov__STATE_VARIABLE_ProcInfoMap_36_36;
#line 241 "mcov.m"
            MR_Word mcov___ModuleNameSym_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__LabelFilename_16, (MR_Integer) 0)));
#line 242 "mcov.m"
            MR_Box mcov__conv3_MaybeCallInfo_21;
#line 242 "mcov.m"
            MR_Box mcov__conv2_CurCount_22;
#line 246 "mcov.m"
            MR_Integer mcov__OldCount_23;
#line 244 "mcov.m"
            MR_Box mcov__conv4_OldCount_23;

#line 242 "mcov.m"
            {
#line 242 "mcov.m"
              mercury__map__foldl2_6_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mcov_scalar_common_2[0], mcov__TypeCtorInfo_48_48, (MR_Word) &mcov_scalar_common_1[12], mcov__PathPortCountMap_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mcov__conv3_MaybeCallInfo_21, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_CurCount_22);
            }
#line 242 "mcov.m"
            mcov__MaybeCallInfo_21 = ((MR_Word) mcov__conv3_MaybeCallInfo_21);
#line 242 "mcov.m"
            mcov__CurCount_22 = ((MR_Integer) mcov__conv2_CurCount_22);
#line 244 "mcov.m"
            {
#line 244 "mcov.m"
              mcov__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, mcov__STATE_VARIABLE_CountMap_0_4, ((MR_Box) (mcov__ProcLabel_20)), &mcov__conv4_OldCount_23);
            }
#line 244 "mcov.m"
            if (mcov__succeeded)
#line 244 "mcov.m"
              {
#line 244 "mcov.m"
                mcov__OldCount_23 = ((MR_Integer) mcov__conv4_OldCount_23);
#line 244 "mcov.m"
                mcov__succeeded = MR_TRUE;
#line 244 "mcov.m"
              }
#line 246 "mcov.m"
            if (mcov__succeeded)
#line 245 "mcov.m"
              {
#line 245 "mcov.m"
                MR_Integer mcov__V_33_33 = (mcov__OldCount_23 + mcov__CurCount_22);

#line 245 "mcov.m"
                {
#line 245 "mcov.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__V_33_33)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
#line 245 "mcov.m"
              }
#line 246 "mcov.m"
            else
#line 247 "mcov.m"
              {
#line 247 "mcov.m"
                {
#line 247 "mcov.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mcov__TypeCtorInfo_48_48, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__CurCount_22)), mcov__STATE_VARIABLE_CountMap_0_4, &mcov__STATE_VARIABLE_CountMap_34_34);
                }
#line 247 "mcov.m"
              }
#line 251 "mcov.m"
            if ((mcov__MaybeCallInfo_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "mcov.m"
              mcov__STATE_VARIABLE_ProcInfoMap_36_36 = mcov__STATE_VARIABLE_ProcInfoMap_0_2;
#line 251 "mcov.m"
            else
#line 252 "mcov.m"
              {
#line 252 "mcov.m"
                MR_Integer mcov__LineNumber_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mcov__MaybeCallInfo_21, (MR_Integer) 0)));
#line 252 "mcov.m"
                MR_Word mcov__ProcInfo_25;

#line 253 "mcov.m"
                {
#line 253 "mcov.m"
                  mcov__ProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 0) = ((MR_Box) (mcov__FileName_19));
#line 253 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 1) = ((MR_Box) (mcov__LineNumber_24));
#line 253 "mcov.m"
                  MR_hl_field(MR_mktag(0), mcov__ProcInfo_25, 2) = ((MR_Box) (mcov__ProcLabel_20));
#line 253 "mcov.m"
                }
#line 254 "mcov.m"
                {
#line 254 "mcov.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0, ((MR_Box) (mcov__ProcLabel_20)), ((MR_Box) (mcov__ProcInfo_25)), mcov__STATE_VARIABLE_ProcInfoMap_0_2, &mcov__STATE_VARIABLE_ProcInfoMap_36_36);
                }
#line 252 "mcov.m"
              }
#line 256 "mcov.m"
            /* direct tailcall eliminated */
#line 256 "mcov.m"
            {
#line 256 "mcov.m"
              MR_Word mcov__HeadVar__1__tmp_copy_1 = mcov__Assocs_13;
#line 256 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2 = mcov__STATE_VARIABLE_ProcInfoMap_36_36;
#line 256 "mcov.m"
              MR_Word mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4 = mcov__STATE_VARIABLE_CountMap_34_34;

#line 256 "mcov.m"
              mcov__STATE_VARIABLE_CountMap_0_4 = mcov__STATE_VARIABLE_CountMap_0__tmp_copy_4;
#line 256 "mcov.m"
              mcov__STATE_VARIABLE_ProcInfoMap_0_2 = mcov__STATE_VARIABLE_ProcInfoMap_0__tmp_copy_2;
#line 256 "mcov.m"
              mcov__HeadVar__1_1 = mcov__HeadVar__1__tmp_copy_1;
#line 256 "mcov.m"
            }
#line 256 "mcov.m"
            continue;
#line 239 "mcov.m"
          }
#line 238 "mcov.m"
      }
#line 238 "mcov.m"
      break;
#line 238 "mcov.m"
    }
#line 234 "mcov.m"
}

#line 215 "mcov.m"
static MR_bool MR_CALL 
mcov__in_stdlib_module_1_p_0(
#line 215 "mcov.m"
  MR_Word mcov__HeadVar__1_1)
#line 215 "mcov.m"
{
#line 218 "mcov.m"
  {
#line 218 "mcov.m"
    MR_bool mcov__succeeded;
#line 218 "mcov.m"
    MR_Word mcov__ProcLabelInContext_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "mcov.m"
    MR_Word mcov__Module_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 0)));
#line 218 "mcov.m"
    MR_Word mcov__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "mcov.m"
    MR_String mcov__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 1)));
#line 219 "mcov.m"
    MR_Word mcov__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__ProcLabelInContext_2, (MR_Integer) 2)));
#line 220 "mcov.m"
    MR_String mcov__V_7_7;

#line 220 "mcov.m"
    {
#line 220 "mcov.m"
      mcov__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(mcov__Module_4, &mcov__V_7_7);
    }
#line 218 "mcov.m"
    return mcov__succeeded;
#line 218 "mcov.m"
  }
#line 215 "mcov.m"
}

#line 205 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_5(
#line 205 "mcov.m"
  MR_Box mcov__closure_arg,
#line 205 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 205 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 205 "mcov.m"
  MR_Box * mcov__wrapper_arg_3)
#line 205 "mcov.m"
{
#line 205 "mcov.m"
  {
#line 205 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 205 "mcov.m"
    {
#line 205 "mcov.m"
      mcov__write_label_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
#line 205 "mcov.m"
      return;
    }
#line 205 "mcov.m"
  }
#line 205 "mcov.m"
}

#line 199 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0_4(
#line 199 "mcov.m"
  MR_Box mcov__closure_arg,
#line 199 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 199 "mcov.m"
  MR_Box mcov__wrapper_arg_2,
#line 199 "mcov.m"
  MR_Box * mcov__wrapper_arg_3)
#line 199 "mcov.m"
{
#line 199 "mcov.m"
  {
#line 199 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 199 "mcov.m"
    {
#line 199 "mcov.m"
      mcov__write_proc_info_3_p_0(((MR_Word) mcov__wrapper_arg_1));
#line 199 "mcov.m"
      return;
    }
#line 199 "mcov.m"
  }
#line 199 "mcov.m"
}

#line 231 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_3(
#line 231 "mcov.m"
  MR_Box mcov__closure_arg,
#line 231 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 231 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 231 "mcov.m"
{
#line 231 "mcov.m"
  {
#line 231 "mcov.m"
    MR_bool mcov__succeeded;
#line 231 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 231 "mcov.m"
    MR_Word mcov__conv0_ProcInfo_7;

#line 231 "mcov.m"
    {
#line 231 "mcov.m"
      mcov__succeeded = mcov__is_zero_count_local_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1), &mcov__conv0_ProcInfo_7);
    }
#line 231 "mcov.m"
    if (mcov__succeeded)
#line 231 "mcov.m"
      {
#line 231 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_ProcInfo_7));
#line 231 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 231 "mcov.m"
      }
#line 231 "mcov.m"
    return mcov__succeeded;
#line 231 "mcov.m"
  }
#line 231 "mcov.m"
}

#line 192 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_2(
#line 192 "mcov.m"
  MR_Box mcov__closure_arg,
#line 192 "mcov.m"
  MR_Box mcov__wrapper_arg_1)
#line 192 "mcov.m"
{
#line 192 "mcov.m"
  {
#line 192 "mcov.m"
    MR_bool mcov__succeeded;
#line 192 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 192 "mcov.m"
    {
#line 192 "mcov.m"
      return mcov__succeeded = mcov__IntroducedFrom__pred__write_coverage_test__192__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mcov__closure, (MR_Integer) 3))), ((MR_Word) mcov__wrapper_arg_1));
    }
#line 192 "mcov.m"
    return mcov__succeeded;
#line 192 "mcov.m"
  }
#line 192 "mcov.m"
}

#line 189 "mcov.m"
static MR_bool MR_CALL 
mcov__write_coverage_test_5_p_0_1(
#line 189 "mcov.m"
  MR_Box mcov__closure_arg,
#line 189 "mcov.m"
  MR_Box mcov__wrapper_arg_1)
#line 189 "mcov.m"
{
#line 189 "mcov.m"
  {
#line 189 "mcov.m"
    MR_bool mcov__succeeded;
#line 189 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;

#line 189 "mcov.m"
    {
#line 189 "mcov.m"
      return mcov__succeeded = mcov__in_stdlib_module_1_p_0(((MR_Word) mcov__wrapper_arg_1));
    }
#line 189 "mcov.m"
    return mcov__succeeded;
#line 189 "mcov.m"
  }
#line 189 "mcov.m"
}

#line 179 "mcov.m"
static void MR_CALL 
mcov__write_coverage_test_5_p_0(
#line 179 "mcov.m"
  MR_Word mcov__Detailed_6,
#line 179 "mcov.m"
  MR_Word mcov__RestrictToModules_7,
#line 179 "mcov.m"
  MR_Word mcov__TraceCountMap_8)
#line 179 "mcov.m"
{
#line 182 "mcov.m"
  {
#line 182 "mcov.m"
    MR_bool mcov__succeeded;
#line 182 "mcov.m"
    MR_Word mcov__TraceCounts0_10;
#line 182 "mcov.m"
    MR_Word mcov__TraceCounts_11;

#line 183 "mcov.m"
    {
#line 183 "mcov.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mcov_scalar_common_1[0], mcov__TraceCountMap_8, &mcov__TraceCounts0_10);
    }
#line 187 "mcov.m"
#line 187 "mcov.m"
    switch (MR_tag((MR_Word) mcov__RestrictToModules_7)) {
#line 187 "mcov.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 187 "mcov.m"
      case (MR_Integer) 0:
#line 187 "mcov.m"
#line 187 "mcov.m"
        switch (MR_unmkbody(mcov__RestrictToModules_7)) {
#line 187 "mcov.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 187 "mcov.m"
          case (MR_Integer) 0:
#line 186 "mcov.m"
            mcov__TraceCounts_11 = mcov__TraceCounts0_10;
#line 187 "mcov.m"
            break;
#line 187 "mcov.m"
          case (MR_Integer) 1:
#line 188 "mcov.m"
            {
#line 189 "mcov.m"
              {
#line 189 "mcov.m"
                mercury__list__negated_filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], (MR_Word) &mcov_scalar_common_1[9], mcov__TraceCounts0_10, &mcov__TraceCounts_11);
              }
#line 188 "mcov.m"
            }
#line 187 "mcov.m"
            break;
#line 187 "mcov.m"
        }
#line 187 "mcov.m"
        break;
#line 187 "mcov.m"
      case (MR_Integer) 1:
#line 191 "mcov.m"
        {
#line 191 "mcov.m"
          MR_Word mcov__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__RestrictToModules_7, (MR_Integer) 0)));
#line 191 "mcov.m"
          MR_Word mcov__V_19_19;

#line 192 "mcov.m"
          {
#line 192 "mcov.m"
            mcov__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 192 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 0) = ((MR_Box) (&mcov_scalar_common_3[4]));
#line 192 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_2));
#line 192 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 192 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_19_19, 3) = ((MR_Box) (mcov__Modules_12));
#line 192 "mcov.m"
          }
#line 192 "mcov.m"
          {
#line 192 "mcov.m"
            mercury__list__filter_3_p_0((MR_Word) &mcov_scalar_common_1[1], mcov__V_19_19, mcov__TraceCounts0_10, &mcov__TraceCounts_11);
          }
#line 191 "mcov.m"
        }
#line 187 "mcov.m"
        break;
#line 187 "mcov.m"
    }
#line 200 "mcov.m"
#line 200 "mcov.m"
    switch (mcov__Detailed_6) {
#line 200 "mcov.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 200 "mcov.m"
      case (MR_Integer) 0:
#line 195 "mcov.m"
        {
#line 195 "mcov.m"
          MR_Word mcov__TypeCtorInfo_37_37;
#line 195 "mcov.m"
          MR_Word mcov__TypeCtorInfo_11_55 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 195 "mcov.m"
          MR_Word mcov__TypeCtorInfo_12_56 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 195 "mcov.m"
          MR_Word mcov__TypeCtorInfo_13_57;
#line 195 "mcov.m"
          MR_Word mcov__ZeroCountProcs_13;
#line 195 "mcov.m"
          MR_Word mcov__SortedZeroCountProcs_14;
#line 195 "mcov.m"
          MR_Word mcov__ProcInfoMap_49;
#line 195 "mcov.m"
          MR_Word mcov__CountMap_50;
#line 195 "mcov.m"
          MR_Word mcov__CountList_51;
#line 195 "mcov.m"
          MR_Word mcov__V_52_52;
#line 195 "mcov.m"
          MR_Word mcov__V_53_53;
#line 195 "mcov.m"
          MR_Word mcov__V_54_54;
#line 199 "mcov.m"
          MR_Box mcov__conv1_STATE_VARIABLE_IO_18;

#line 228 "mcov.m"
          {
#line 228 "mcov.m"
            mcov__V_52_52 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_12_56);
          }
#line 5129 "mcov.c"
          mcov__TypeCtorInfo_13_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 229 "mcov.m"
          {
#line 229 "mcov.m"
            mcov__V_53_53 = mercury__map__init_0_f_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_13_57);
          }
#line 228 "mcov.m"
          {
#line 228 "mcov.m"
            mcov__collect_proc_infos_counts_5_p_0(mcov__TraceCounts_11, mcov__V_52_52, &mcov__ProcInfoMap_49, mcov__V_53_53, &mcov__CountMap_50);
          }
#line 230 "mcov.m"
          {
#line 230 "mcov.m"
            mercury__map__to_assoc_list_2_p_0(mcov__TypeCtorInfo_11_55, mcov__TypeCtorInfo_13_57, mcov__CountMap_50, &mcov__CountList_51);
          }
#line 231 "mcov.m"
          {
#line 231 "mcov.m"
            mcov__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 231 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 0) = ((MR_Box) (&mcov_scalar_common_6[0]));
#line 231 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 1) = ((MR_Box) (mcov__write_coverage_test_5_p_0_3));
#line 231 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 231 "mcov.m"
            MR_hl_field(MR_mktag(0), mcov__V_54_54, 3) = ((MR_Box) (mcov__ProcInfoMap_49));
#line 231 "mcov.m"
          }
#line 231 "mcov.m"
          {
#line 231 "mcov.m"
            mercury__list__filter_map_3_p_0((MR_Word) &mcov_scalar_common_1[2], mcov__TypeCtorInfo_12_56, mcov__V_54_54, mcov__CountList_51, &mcov__ZeroCountProcs_13);
          }
#line 5165 "mcov.c"
          mcov__TypeCtorInfo_37_37 = (MR_Word) &mcov__mcov__type_ctor_info_proc_info_0;
#line 197 "mcov.m"
          {
#line 197 "mcov.m"
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_37_37, mcov__ZeroCountProcs_13, &mcov__SortedZeroCountProcs_14);
          }
#line 198 "mcov.m"
          {
#line 198 "mcov.m"
            mercury__io__write_string_3_p_0((MR_String) "Unexecuted procedures:\n\n");
          }
#line 199 "mcov.m"
          {
#line 199 "mcov.m"
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_37_37, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[10], mcov__SortedZeroCountProcs_14, ((MR_Box) ((MR_Integer) 0)), &mcov__conv1_STATE_VARIABLE_IO_18);
          }
#line 195 "mcov.m"
        }
#line 200 "mcov.m"
        break;
#line 200 "mcov.m"
      case (MR_Integer) 1:
#line 201 "mcov.m"
        {
#line 201 "mcov.m"
          MR_Word mcov__TypeCtorInfo_42_42;
#line 201 "mcov.m"
          MR_Word mcov__ZeroCountLabels_15;
#line 201 "mcov.m"
          MR_Word mcov__SortedZeroCountLabels_16;
#line 205 "mcov.m"
          MR_Box mcov__conv2_STATE_VARIABLE_IO_18;

#line 202 "mcov.m"
          {
#line 202 "mcov.m"
            mcov__collect_zero_count_local_labels_3_p_0(mcov__TraceCounts_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mcov__ZeroCountLabels_15);
          }
#line 5204 "mcov.c"
          mcov__TypeCtorInfo_42_42 = (MR_Word) &mcov__mcov__type_ctor_info_label_info_0;
#line 203 "mcov.m"
          {
#line 203 "mcov.m"
            mercury__list__sort_2_p_0(mcov__TypeCtorInfo_42_42, mcov__ZeroCountLabels_15, &mcov__SortedZeroCountLabels_16);
          }
#line 204 "mcov.m"
          {
#line 204 "mcov.m"
            mercury__io__write_string_3_p_0((MR_String) "Unexecuted labels:\n\n");
          }
#line 205 "mcov.m"
          {
#line 205 "mcov.m"
            mercury__list__foldl_4_p_2(mcov__TypeCtorInfo_42_42, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mcov_scalar_common_1[11], mcov__SortedZeroCountLabels_16, ((MR_Box) ((MR_Integer) 0)), &mcov__conv2_STATE_VARIABLE_IO_18);
          }
#line 201 "mcov.m"
        }
#line 200 "mcov.m"
        break;
#line 200 "mcov.m"
    }
#line 182 "mcov.m"
  }
#line 179 "mcov.m"
}

#line 112 "mcov.m"
static MR_Box MR_CALL 
mcov__do_coverage_testing_4_p_0_1(
#line 112 "mcov.m"
  MR_Box mcov__closure_arg,
#line 112 "mcov.m"
  MR_Box mcov__wrapper_arg_1)
#line 112 "mcov.m"
{
#line 112 "mcov.m"
  {
#line 112 "mcov.m"
    MR_Box mcov__wrapper_arg_2;
#line 112 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 112 "mcov.m"
    MR_Word mcov__conv0_HeadVar__2_2;

#line 112 "mcov.m"
    {
#line 112 "mcov.m"
      mcov__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) mcov__wrapper_arg_1));
    }
#line 112 "mcov.m"
    mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_HeadVar__2_2));
#line 112 "mcov.m"
    return mcov__wrapper_arg_2;
#line 112 "mcov.m"
  }
#line 112 "mcov.m"
}

#line 71 "mcov.m"
static void MR_CALL 
mcov__do_coverage_testing_4_p_0(
#line 71 "mcov.m"
  MR_Word mcov__OptionTable_5,
#line 71 "mcov.m"
  MR_Word mcov__Args_6)
#line 71 "mcov.m"
{
#line 76 "mcov.m"
  {
#line 76 "mcov.m"
    MR_bool mcov__succeeded;

#line 76 "mcov.m"
    if ((mcov__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "mcov.m"
      {
#line 136 "mcov.m"
        mcov__short_usage_2_p_0();
#line 136 "mcov.m"
        return;
      }
#line 76 "mcov.m"
    else
#line 76 "mcov.m"
      {
#line 76 "mcov.m"
        MR_Word mcov__TypeCtorInfo_63_63 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
#line 76 "mcov.m"
        MR_Word mcov__Verbose_10;
#line 76 "mcov.m"
        MR_Word mcov__FileTypes_12;
#line 76 "mcov.m"
        MR_Word mcov__TraceCounts_13;
#line 76 "mcov.m"
        MR_Word mcov__MaybeReadError_14;
#line 76 "mcov.m"
        MR_Word mcov__StdErr_15;
#line 78 "mcov.m"
        MR_Integer mcov___NumTests_11;

#line 77 "mcov.m"
        {
#line 77 "mcov.m"
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 1)), &mcov__Verbose_10);
        }
#line 78 "mcov.m"
        {
#line 78 "mcov.m"
          mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mcov__Verbose_10, mcov__Args_6, &mcov___NumTests_11, &mcov__FileTypes_12, &mcov__TraceCounts_13, &mcov__MaybeReadError_14);
        }
#line 80 "mcov.m"
        {
#line 80 "mcov.m"
          mercury__io__stderr_stream_3_p_0(&mcov__StdErr_15);
        }
#line 84 "mcov.m"
        if ((mcov__MaybeReadError_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 85 "mcov.m"
          {
#line 85 "mcov.m"
            MR_Word mcov__FileTypeList_17;
#line 85 "mcov.m"
            MR_Word mcov__Detailed_21;
#line 85 "mcov.m"
            MR_Word mcov__Modules_22;
#line 85 "mcov.m"
            MR_Word mcov__RestrictToModules_24;
#line 85 "mcov.m"
            MR_String mcov__OutputFile_28;
#line 95 "mcov.m"
            MR_Word mcov__BaseType_18;
#line 87 "mcov.m"
            MR_Word mcov__V_38_38;
#line 87 "mcov.m"
            MR_Word mcov__V_39_39;

#line 86 "mcov.m"
            {
#line 86 "mcov.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mcov__FileTypes_12, &mcov__FileTypeList_17);
            }
#line 87 "mcov.m"
            mcov__succeeded = ((MR_tag((MR_Word) mcov__FileTypeList_17)) == (MR_mktag((MR_Integer) 1)));
#line 87 "mcov.m"
            if (mcov__succeeded)
#line 87 "mcov.m"
              {
#line 87 "mcov.m"
                mcov__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_17, (MR_Integer) 0)));
#line 87 "mcov.m"
                mcov__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__FileTypeList_17, (MR_Integer) 1)));
#line 87 "mcov.m"
                mcov__succeeded = (mcov__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 87 "mcov.m"
                if (mcov__succeeded)
#line 87 "mcov.m"
                  {
#line 87 "mcov.m"
                    mcov__succeeded = ((MR_tag((MR_Word) mcov__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 87 "mcov.m"
                    if (mcov__succeeded)
#line 87 "mcov.m"
                      mcov__BaseType_18 = (MR_Word) MR_body(((MR_Word) mcov__V_38_38), (MR_Integer) 0);
#line 87 "mcov.m"
                  }
#line 87 "mcov.m"
              }
#line 95 "mcov.m"
            if (mcov__succeeded)
#line 88 "mcov.m"
              {
#line 88 "mcov.m"
                MR_Word mcov__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__BaseType_18, (MR_Integer) 0)));
#line 88 "mcov.m"
                MR_String mcov___Program_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mcov__BaseType_18, (MR_Integer) 1)));

#line 92 "mcov.m"
#line 92 "mcov.m"
                switch (mcov__Kind_19) {
#line 92 "mcov.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 92 "mcov.m"
                  case (MR_Integer) 0:
#line 93 "mcov.m"
                    {
#line 93 "mcov.m"
                    }
#line 92 "mcov.m"
                    break;
#line 92 "mcov.m"
                  case (MR_Integer) 1:
#line 90 "mcov.m"
                    {
#line 91 "mcov.m"
                      {
#line 91 "mcov.m"
                        mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Warning: the original trace count files did not include all labels.\n");
                      }
#line 90 "mcov.m"
                    }
#line 92 "mcov.m"
                    break;
#line 92 "mcov.m"
                }
#line 88 "mcov.m"
              }
#line 95 "mcov.m"
            else
#line 96 "mcov.m"
              {
#line 96 "mcov.m"
                {
#line 96 "mcov.m"
                  mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Warning: reporting on a mixture of trace file types and/or programs.\n");
                }
#line 96 "mcov.m"
              }
#line 98 "mcov.m"
            {
#line 98 "mcov.m"
              mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 2)), &mcov__Detailed_21);
            }
#line 99 "mcov.m"
            {
#line 99 "mcov.m"
              mercury__getopt_io__lookup_accumulating_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 3)), &mcov__Modules_22);
            }
#line 110 "mcov.m"
            if ((mcov__Modules_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "mcov.m"
              {
#line 101 "mcov.m"
                MR_Word mcov__IgnoreStdLib_23;

#line 102 "mcov.m"
                {
#line 102 "mcov.m"
                  mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 6)), &mcov__IgnoreStdLib_23);
                }
#line 106 "mcov.m"
#line 106 "mcov.m"
                switch (mcov__IgnoreStdLib_23) {
#line 106 "mcov.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 106 "mcov.m"
                  case (MR_Integer) 0:
#line 105 "mcov.m"
                    mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 106 "mcov.m"
                    break;
#line 106 "mcov.m"
                  case (MR_Integer) 1:
#line 108 "mcov.m"
                    mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 106 "mcov.m"
                    break;
#line 106 "mcov.m"
                }
#line 101 "mcov.m"
              }
#line 110 "mcov.m"
            else
#line 111 "mcov.m"
              {
#line 111 "mcov.m"
                MR_Word mcov__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 111 "mcov.m"
                MR_Word mcov__ModuleSyms_27;
#line 111 "mcov.m"
                MR_Word mcov__V_47_47;

#line 112 "mcov.m"
                {
#line 112 "mcov.m"
                  mcov__ModuleSyms_27 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mcov__TypeCtorInfo_66_66, (MR_Word) &mcov_scalar_common_1[8], mcov__Modules_22);
                }
#line 113 "mcov.m"
                {
#line 113 "mcov.m"
                  mcov__V_47_47 = mercury__set__list_to_set_1_f_0(mcov__TypeCtorInfo_66_66, mcov__ModuleSyms_27);
                }
#line 113 "mcov.m"
                {
#line 113 "mcov.m"
                  mcov__RestrictToModules_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "mcov.m"
                  MR_hl_field(MR_mktag(1), mcov__RestrictToModules_24, 0) = ((MR_Box) (mcov__V_47_47));
#line 113 "mcov.m"
                }
#line 111 "mcov.m"
              }
#line 115 "mcov.m"
            {
#line 115 "mcov.m"
              mercury__getopt_io__lookup_string_option_3_p_0(mcov__TypeCtorInfo_63_63, mcov__OptionTable_5, ((MR_Box) ((MR_Integer) 4)), &mcov__OutputFile_28);
            }
#line 116 "mcov.m"
            mcov__succeeded = (strcmp(mcov__OutputFile_28, (MR_String) "") == 0);
#line 119 "mcov.m"
            if (mcov__succeeded)
#line 117 "mcov.m"
              {
#line 117 "mcov.m"
                mcov__write_coverage_test_5_p_0(mcov__Detailed_21, mcov__RestrictToModules_24, mcov__TraceCounts_13);
#line 117 "mcov.m"
                return;
              }
#line 119 "mcov.m"
            else
#line 120 "mcov.m"
              {
#line 120 "mcov.m"
                MR_Word mcov__OpenRes_29;

#line 120 "mcov.m"
                {
#line 120 "mcov.m"
                  mercury__io__tell_4_p_0(mcov__OutputFile_28, &mcov__OpenRes_29);
                }
#line 125 "mcov.m"
                if ((mcov__OpenRes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "mcov.m"
                  {
#line 123 "mcov.m"
                    mcov__write_coverage_test_5_p_0(mcov__Detailed_21, mcov__RestrictToModules_24, mcov__TraceCounts_13);
#line 123 "mcov.m"
                    return;
                  }
#line 125 "mcov.m"
                else
#line 126 "mcov.m"
                  {
#line 126 "mcov.m"
                    MR_Word mcov__OpenError_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mcov__OpenRes_29, (MR_Integer) 0)));
#line 126 "mcov.m"
                    MR_String mcov__OpenErrorMsg_31;
#line 126 "mcov.m"
                    MR_String mcov__V_72_72;
#line 126 "mcov.m"
                    MR_Word mcov__V_78_78;
#line 126 "mcov.m"
                    MR_String mcov__V_82_82;

#line 127 "mcov.m"
                    {
#line 127 "mcov.m"
                      mercury__io__error_message_2_p_0(mcov__OpenError_30, &mcov__OpenErrorMsg_31);
                    }
#line 128 "mcov.m"
                    {
#line 128 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "Error opening file \140");
                    }
#line 5559 "mcov.c"
                    mcov__V_78_78 = (MR_Word) &mcov_scalar_common_4[0];
#line 129 "mcov.m"
                    {
#line 129 "mcov.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_78_78, mcov__OutputFile_28, &mcov__V_72_72);
                    }
#line 129 "mcov.m"
                    {
#line 129 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, mcov__V_72_72);
                    }
#line 128 "mcov.m"
                    {
#line 128 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "\': ");
                    }
#line 129 "mcov.m"
                    {
#line 129 "mcov.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mcov__V_78_78, mcov__OpenErrorMsg_31, &mcov__V_82_82);
                    }
#line 129 "mcov.m"
                    {
#line 129 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, mcov__V_82_82);
                    }
#line 128 "mcov.m"
                    {
#line 128 "mcov.m"
                      mercury__io__write_string_4_p_0(mcov__StdErr_15, (MR_String) "\n");
                    }
#line 130 "mcov.m"
                    {
#line 130 "mcov.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 130 "mcov.m"
                      return;
                    }
#line 126 "mcov.m"
                  }
#line 120 "mcov.m"
              }
#line 85 "mcov.m"
          }
#line 84 "mcov.m"
        else
#line 82 "mcov.m"
          {
#line 82 "mcov.m"
            MR_String mcov__ReadErrorMsg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__MaybeReadError_14, (MR_Integer) 0)));

#line 83 "mcov.m"
            {
#line 83 "mcov.m"
              mcov__write_error_message_3_p_0(mcov__ReadErrorMsg_16);
#line 83 "mcov.m"
              return;
            }
#line 82 "mcov.m"
          }
#line 76 "mcov.m"
      }
#line 76 "mcov.m"
  }
#line 71 "mcov.m"
}

#line 56 "mcov.m"
static void MR_CALL 
main_2_p_0_3(
#line 56 "mcov.m"
  void * mcov__env_ptr_arg)
#line 56 "mcov.m"
{
#line 56 "mcov.m"
  {
#line 56 "mcov.m"
    struct mcov__main_2_p_0_4_env_0_s * mcov__env_ptr = (struct mcov__main_2_p_0_4_env_0_s *) mcov__env_ptr_arg;

#line 56 "mcov.m"
    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 56 "mcov.m"
    *((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 56 "mcov.m"
    {
#line 56 "mcov.m"
      ((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont)((mcov__env_ptr)->mcov__main_2_p_0_4_env_0__cont_env_ptr);
#line 56 "mcov.m"
      return;
    }
#line 56 "mcov.m"
  }
#line 56 "mcov.m"
}

#line 56 "mcov.m"
static void MR_CALL 
main_2_p_0_4(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2,
#line 56 "mcov.m"
  MR_Cont mcov__cont,
#line 56 "mcov.m"
  void * mcov__cont_env_ptr)
#line 56 "mcov.m"
{
#line 56 "mcov.m"
  {
#line 56 "mcov.m"
    struct mcov__main_2_p_0_4_env_0_s mcov__env;

#line 56 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_1 = mcov__wrapper_arg_1;
#line 56 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__wrapper_arg_2 = mcov__wrapper_arg_2;
#line 56 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__cont = mcov__cont;
#line 56 "mcov.m"
    (mcov__env).mcov__main_2_p_0_4_env_0__cont_env_ptr = mcov__cont_env_ptr;
#line 56 "mcov.m"
    {
#line 56 "mcov.m"
      MR_Box mcov__closure = mcov__closure_arg;

#line 56 "mcov.m"
      {
#line 56 "mcov.m"
        mcov__option_default_2_p_0(&(mcov__env).mcov__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mcov__env).mcov__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mcov__env);
      }
#line 56 "mcov.m"
    }
#line 56 "mcov.m"
  }
#line 56 "mcov.m"
}

#line 56 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 56 "mcov.m"
{
#line 56 "mcov.m"
  {
#line 56 "mcov.m"
    MR_bool mcov__succeeded;
#line 56 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 56 "mcov.m"
    MR_Word mcov__conv1_HeadVar__2_2;

#line 56 "mcov.m"
    {
#line 56 "mcov.m"
      mcov__succeeded = mcov__long_option_2_p_0(((MR_String) mcov__wrapper_arg_1), &mcov__conv1_HeadVar__2_2);
    }
#line 56 "mcov.m"
    if (mcov__succeeded)
#line 56 "mcov.m"
      {
#line 56 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv1_HeadVar__2_2));
#line 56 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 56 "mcov.m"
      }
#line 56 "mcov.m"
    return mcov__succeeded;
#line 56 "mcov.m"
  }
#line 56 "mcov.m"
}

#line 56 "mcov.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 56 "mcov.m"
  MR_Box mcov__closure_arg,
#line 56 "mcov.m"
  MR_Box mcov__wrapper_arg_1,
#line 56 "mcov.m"
  MR_Box * mcov__wrapper_arg_2)
#line 56 "mcov.m"
{
#line 56 "mcov.m"
  {
#line 56 "mcov.m"
    MR_bool mcov__succeeded;
#line 56 "mcov.m"
    MR_Box mcov__closure = mcov__closure_arg;
#line 56 "mcov.m"
    MR_Word mcov__conv0_HeadVar__2_2;

#line 56 "mcov.m"
    {
#line 56 "mcov.m"
      mcov__succeeded = mcov__short_option_2_p_0(((MR_Char) (MR_Word) mcov__wrapper_arg_1), &mcov__conv0_HeadVar__2_2);
    }
#line 56 "mcov.m"
    if (mcov__succeeded)
#line 56 "mcov.m"
      {
#line 56 "mcov.m"
        *mcov__wrapper_arg_2 = ((MR_Box) (mcov__conv0_HeadVar__2_2));
#line 56 "mcov.m"
        mcov__succeeded = MR_TRUE;
#line 56 "mcov.m"
      }
#line 56 "mcov.m"
    return mcov__succeeded;
#line 56 "mcov.m"
  }
#line 56 "mcov.m"
}

#line 22 "mcov.m"
void MR_CALL 
main_2_p_0(void)
#line 22 "mcov.m"
{
#line 53 "mcov.m"
  {
#line 53 "mcov.m"
    MR_bool mcov__succeeded;
#line 53 "mcov.m"
    MR_Word mcov__TypeCtorInfo_29_29;
#line 53 "mcov.m"
    MR_Word mcov__Args0_4;
#line 53 "mcov.m"
    MR_Word mcov__Args_6;
#line 53 "mcov.m"
    MR_Word mcov__GetoptResult_7;

#line 54 "mcov.m"
    {
#line 54 "mcov.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 55 "mcov.m"
    {
#line 55 "mcov.m"
      mercury__io__command_line_arguments_3_p_0(&mcov__Args0_4);
    }
#line 5812 "mcov.c"
    mcov__TypeCtorInfo_29_29 = (MR_Word) &mcov__mcov__type_ctor_info_option_0;
#line 57 "mcov.m"
    {
#line 57 "mcov.m"
      mercury__getopt_io__process_options_6_p_0(mcov__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(2), &mcov_scalar_common_1[7]), mcov__Args0_4, &mcov__Args_6, &mcov__GetoptResult_7);
    }
#line 64 "mcov.m"
    if (((MR_tag((MR_Word) mcov__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
#line 65 "mcov.m"
      {
#line 65 "mcov.m"
        MR_String mcov__GetoptErrorMsg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mcov__GetoptResult_7, (MR_Integer) 0)));
#line 65 "mcov.m"
        MR_Word mcov__Stderr_35;
#line 65 "mcov.m"
        MR_String mcov__V_45_45;

#line 494 "mcov.m"
        {
#line 494 "mcov.m"
          mercury__io__stderr_stream_3_p_0(&mcov__Stderr_35);
        }
#line 495 "mcov.m"
        {
#line 495 "mcov.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mcov_scalar_common_4[0], mcov__GetoptErrorMsg_9, &mcov__V_45_45);
        }
#line 495 "mcov.m"
        {
#line 495 "mcov.m"
          mercury__io__write_string_4_p_0(mcov__Stderr_35, mcov__V_45_45);
        }
#line 495 "mcov.m"
        {
#line 495 "mcov.m"
          mercury__io__write_string_4_p_0(mcov__Stderr_35, (MR_String) "\n");
        }
#line 496 "mcov.m"
        {
#line 496 "mcov.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 496 "mcov.m"
          return;
        }
#line 65 "mcov.m"
      }
#line 64 "mcov.m"
    else
#line 59 "mcov.m"
      {
#line 59 "mcov.m"
        MR_Word mcov__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mcov__GetoptResult_7, (MR_Integer) 0)));
#line 60 "mcov.m"
        MR_Word mcov__V_30_30;

#line 60 "mcov.m"
        {
#line 60 "mcov.m"
          mercury__getopt_io__lookup_bool_option_3_p_0(mcov__TypeCtorInfo_29_29, mcov__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mcov__V_30_30);
        }
#line 60 "mcov.m"
        mcov__succeeded = ((MR_Integer) 1 == mcov__V_30_30);
#line 62 "mcov.m"
        if (mcov__succeeded)
#line 61 "mcov.m"
          {
#line 61 "mcov.m"
            mcov__long_usage_2_p_0();
#line 61 "mcov.m"
            return;
          }
#line 62 "mcov.m"
        else
#line 62 "mcov.m"
          {
#line 62 "mcov.m"
            mcov__do_coverage_testing_4_p_0(mcov__OptionTable_8, mcov__Args_6);
#line 62 "mcov.m"
            return;
          }
#line 59 "mcov.m"
      }
#line 53 "mcov.m"
  }
#line 22 "mcov.m"
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
