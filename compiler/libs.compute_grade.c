/*
** Automatically generated from `compute_grade.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module libs.compute_grade. */
/* :- implementation. */

/*
INIT mercury__libs__compute_grade__init
ENDINIT
*/

#include "libs.compute_grade.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 498 "compute_grade.m"
struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s {
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Options_3;
#line 498 "compute_grade.m"
  MR_Word * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__LambdaHeadVar__1_16;
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont;
#line 498 "compute_grade.m"
  void * libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont_env_ptr;
#line 498 "compute_grade.m"
  MR_bool libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded;
#line 498 "compute_grade.m"
  MR_String libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Name_6;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Comp_7;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__CompOpts_8;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__MaybeTargets_9;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__IncludeInGradeString_10;
#line 506 "compute_grade.m"
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_0;
#line 506 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Opt_11;
#line 506 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Value_12;
#line 506 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_17_17;
#line 507 "compute_grade.m"
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv0_V_17_17;
#line 520 "compute_grade.m"
  jmp_buf libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_1;
#line 520 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 520 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 520 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Target_14;
#line 520 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_18_18;
#line 520 "compute_grade.m"
  MR_Word libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_27_27;
#line 521 "compute_grade.m"
  MR_Box libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv2_Target_14;
#line 498 "compute_grade.m"
};

#line 335 "compute_grade.m"
struct libs__compute_grade__must_not_contain_2_p_0_env_0_s {
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 338 "compute_grade.m"
  MR_bool libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded;
#line 338 "compute_grade.m"
  jmp_buf libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0;
#line 338 "compute_grade.m"
  MR_Word libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 338 "compute_grade.m"
  MR_String libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5;
#line 339 "compute_grade.m"
  MR_Box libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 335 "compute_grade.m"
};

#line 326 "compute_grade.m"
struct libs__compute_grade__must_contain_2_p_0_env_0_s {
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4;
#line 329 "compute_grade.m"
  MR_bool libs__compute_grade__must_contain_2_p_0_env_0__succeeded;
#line 329 "compute_grade.m"
  jmp_buf libs__compute_grade__must_contain_2_p_0_env_0__commit_0;
#line 329 "compute_grade.m"
  MR_Word libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 329 "compute_grade.m"
  MR_String libs__compute_grade__must_contain_2_p_0_env_0__Component_5;
#line 330 "compute_grade.m"
  MR_Box libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5;
#line 326 "compute_grade.m"
};

#line 498 "compute_grade.m"
struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s {
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont;
#line 498 "compute_grade.m"
  void * libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
#line 498 "compute_grade.m"
};

#line 780 "compute_grade.m"
struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s {
#line 780 "compute_grade.m"
  MR_Box * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 780 "compute_grade.m"
  MR_Cont libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont;
#line 780 "compute_grade.m"
  void * libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 780 "compute_grade.m"
  MR_Word libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 780 "compute_grade.m"
};

#line 498 "compute_grade.m"
struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s {
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__compute_grade_2_p_0_2_env_0__cont;
#line 498 "compute_grade.m"
  void * libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
#line 498 "compute_grade.m"
};


#line 224 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 227 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 230 "libs.compute_grade.c"
static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0;

#line 233 "libs.compute_grade.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 236 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 239 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

#line 242 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 245 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0;

#line 248 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0;

#line 251 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1;

#line 254 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2;

#line 257 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3;

#line 260 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4;

#line 263 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5;

#line 266 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6;

#line 269 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7;

#line 272 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8;

#line 275 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9;

#line 278 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10;

#line 281 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11;

#line 284 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12;

#line 287 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_13;

#line 290 "libs.compute_grade.c"
static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0[14];

#line 293 "libs.compute_grade.c"
static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0[14];

#line 296 "libs.compute_grade.c"
static const MR_Integer libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0[14];

#line 299 "libs.compute_grade.c"
static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
#line 302 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 304 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_2);

#line 307 "libs.compute_grade.c"
static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
#line 310 "libs.compute_grade.c"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 312 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 314 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_3);

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__780__1_3_p_0(
#line 780 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__1_12,
#line 780 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_13,
#line 780 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_14);

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_2(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 507 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_4(
#line 507 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_3(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_5(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_6(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 521 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_8(
#line 521 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_7(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_9(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0(
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__Options_3,
#line 498 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__1_16,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__449__1_3_p_0(
#line 449 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__1_13,
#line 449 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_14,
#line 449 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_15);

#line 353 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(
#line 353 "compute_grade.m"
  MR_String libs__compute_grade__LambdaHeadVar__1_20,
#line 353 "compute_grade.m"
  MR_String * libs__compute_grade__LambdaHeadVar__2_21);

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_2(
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 449 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3);

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_1(
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 449 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3);

#line 425 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0(
#line 425 "compute_grade.m"
  MR_String libs__compute_grade__LambdaHeadVar__1_23,
#line 425 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_24,
#line 425 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_25,
#line 425 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__4_26,
#line 425 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__5_27);

#line 397 "compute_grade.m"
static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
#line 397 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__1_1,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_2,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__3_3);

#line 397 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_1,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_2);

#line 841 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__char_is_not_2_p_0(
#line 841 "compute_grade.m"
  MR_Char libs__compute_grade__A_3,
#line 841 "compute_grade.m"
  MR_Char libs__compute_grade__B_4);

#line 830 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0_1(
#line 830 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 830 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1);

#line 825 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0(
#line 825 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__1_1,
#line 825 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2);

#line 786 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
#line 786 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__1_1,
#line 786 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 786 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 543 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_component_table_5_p_2(
#line 543 "compute_grade.m"
  MR_String * libs__compute_grade__HeadVar__1_1,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__3_3,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__4_4,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__5_5,
#line 543 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 543 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 541 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
#line 541 "compute_grade.m"
  MR_String libs__compute_grade__HeadVar__1_1,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__3_3,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__4_4,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__5_5);

#line 480 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__construct_string_2_p_0(
#line 480 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__1_1,
#line 480 "compute_grade.m"
  MR_String * libs__compute_grade__HeadVar__2_2);

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 339 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
#line 339 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 335 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__OmitComponents_3,
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__GradeComponents_4);

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 330 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
#line 330 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 326 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__IncludeComponents_3,
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__GradeComponents_4);

#line 353 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
#line 353 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 353 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 353 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_2);

#line 308 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__FilterPred_8,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__CondComponents_9,
#line 308 "compute_grade.m"
  MR_String libs__compute_grade__GradeString_10,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Grades_0_15,
#line 308 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Grades_16,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_17,
#line 308 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_18);

#line 283 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
#line 283 "compute_grade.m"
  MR_String libs__compute_grade__FilterDesc_7,
#line 283 "compute_grade.m"
  MR_String libs__compute_grade__Comp_8,
#line 283 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Comps_0_16,
#line 283 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Comps_17,
#line 283 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_18,
#line 283 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_19);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_2(
#line 498 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 425 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 425 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 425 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5);

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 780 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3);

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
#line 780 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 780 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 780 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 780 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg);

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
#line 498 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr);

#line 271 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_6(
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 271 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 271 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5);

#line 271 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_5(
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2);

#line 269 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_4(
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 269 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 269 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5);

#line 269 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_3(
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2);

#line 263 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_2(
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 263 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 263 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5);

#line 261 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_1(
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 261 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 261 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5);


static /* final */ const MR_Box libs__compute_grade_scalar_common_1[213][2];

static /* final */ const MR_Box libs__compute_grade_scalar_common_2[11][3];

static /* final */ const MR_Box libs__compute_grade_scalar_common_3[6][1];

static /* final */ const MR_Box libs__compute_grade_scalar_common_4[1][9];

static /* final */ const MR_Box libs__compute_grade_scalar_common_5[4][4];

static /* final */ const MR_Box libs__compute_grade_scalar_common_6[4][5];

static /* final */ const MR_Box libs__compute_grade_scalar_common_7[1][10];

static /* final */ const MR_Box libs__compute_grade_scalar_common_8[1][6];

static /* final */ const MR_Box libs__compute_grade_scalar_common_9[1][8];


#line 548 "compute_grade.m"
/* sealed */ struct libs__compute_grade__vector_common_type_10_0_s {
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
#line 548 "compute_grade.m"
};

static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[48];

#line 548 "compute_grade.m"
/* sealed */ struct libs__compute_grade__vector_common_type_11_0_s {
#line 548 "compute_grade.m"
  const MR_String libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_1;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_2;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_3;
#line 548 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_11_0__vct_11_f_4;
#line 548 "compute_grade.m"
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[48];

#line 788 "compute_grade.m"
/* sealed */ struct libs__compute_grade__vector_common_type_12_0_s {
#line 788 "compute_grade.m"
  const MR_Word libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
#line 788 "compute_grade.m"
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[30];



static /* final */ const MR_Box libs__compute_grade_scalar_common_1[213][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the high-level C backend."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Stack segments are incompatible with"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "accurate"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 254)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 28 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[18])))
  },
  /* row 29 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 34 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 40 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 185)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 44 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[43])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 184)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 46 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 185)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[45])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 51 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[50])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 53 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[52])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 55 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[54])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[51])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 59 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[14])))
  },
  /* row 61 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "erlang"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 68 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[67])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 70 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[69])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[22])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[73])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm_debug"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "hgc"))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[79])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[32])))
  },
  /* row 82 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Integer) 254)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 87 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[32])))
  },
  /* row 88 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[16])))
  },
  /* row 93 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[14])))
  },
  /* row 97 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[29])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Integer) 480)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 105 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[104])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Integer) 295)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 107 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[106])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 193)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[108])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 192)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[110])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[116])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[52])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[54])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[117])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[28])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 129 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[128])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Integer) 192)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[130])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[109])))
  },
  /* row 132 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[133])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[133])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[113])))
  },
  /* row 136 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[132])))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Integer) 193)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[137])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[130])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[140])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[140])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[131])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[133])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 146 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[145])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[146])))
  },
  /* row 153 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 155 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[154])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[147])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[155])))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[20])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_Integer) 241)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 163 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[162])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 222)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 165 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[164])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_Integer) 231)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 167 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[166])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 169 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[168])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 171 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[170])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[169])))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 173 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[172])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 175 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[174])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 177 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[176])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 179 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[178])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[176])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[179])))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 182 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[181])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Integer) 210)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 184 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[183])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 186 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[185])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 187 */
  {
    ((MR_Box) ((MR_Integer) 210)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[1])))
  },
  /* row 188 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_1[187])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[186])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of accurate GC is incompatible with"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "target language"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of Boehm GC is incompatible with"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use of HGC is incompatible with"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Time profiling is incompatible with"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Memory profiling is incompatible with"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Trailing is incompatible with"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Stack segments are incompatible with"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Single precision floats are incompatible with"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unknown"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "library grade component:"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid library grade:"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[203])))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 222)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 184)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 231)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Integer) 295)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[0])),
    ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[0])),
    ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_5[2])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_9[0])),
    ((MR_Box) (libs__compute_grade__convert_grade_option_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[2])),
    ((MR_Box) (libs__compute_grade__filter_grade_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_8[0])),
    ((MR_Box) (libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[26])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[42])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[66])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[102])))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_5[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_4[0])),
    ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "included"))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_4[0])),
    ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "excluded"))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__compute_grade_scalar_common_6[3])),
    ((MR_Box) (libs__compute_grade__split_grade_string_2_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 46))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_8[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__compute_grade_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0)),
    ((MR_Box) (&libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0))
  },
};


static /* final */ const struct libs__compute_grade__vector_common_type_10_0_s libs__compute_grade_vector_common_10[48] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[12]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[24]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[30]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[40]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[46]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[49]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[55]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[55]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[64]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[70]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[71]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[74]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[77]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[80]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[85]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[91]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[95]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[100]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[40]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[103]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[107]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[115]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[119]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 24 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[119]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[123]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[129]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[134]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[135]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[136]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[142]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[144]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[150]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[153]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[157]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[161]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[167]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[171]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[177]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[180]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[184]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[188]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__compute_grade__vector_common_type_11_0_s libs__compute_grade_vector_common_11[48] = {
  /* row 0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[123]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[161]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[103]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "asm_jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[30]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[71]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_String) "asm_fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[24]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "hl",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[85]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[95]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "hl_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[91]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "hlc_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[100]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[40]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "csharp",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[40]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "erlang",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[64]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "par",
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "gc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[74]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "gcd",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[77]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "hgc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[80]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[12]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[134]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[144]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[136]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[115]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[135]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[142]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[188]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[184]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[177]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[180]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[119]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[55]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 31 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[119]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[55]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[129]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "picreg",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[49]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "debug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[46]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[167]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[107]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "exts",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[70]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "stseg",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[171]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[150]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[153]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[157]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__compute_grade__vector_common_type_12_0_s libs__compute_grade_vector_common_12[30] = {
  /* row 0 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[39] },
  /* row 1 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[37] },
  /* row 2 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[27] },
  /* row 3 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[17] },
  /* row 4 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[13] },
  /* row 5 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[15] },
  /* row 6 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[201] },
  /* row 7 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[202] },
  /* row 8 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[204] },
  /* row 9 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[108] },
  /* row 10 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[114] },
  /* row 11 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[140] },
  /* row 12 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[130] },
  /* row 13 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[205] },
  /* row 14 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[174] },
  /* row 15 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[58] },
  /* row 16 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[52] },
  /* row 17 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[116] },
  /* row 18 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[206] },
  /* row 19 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[207] },
  /* row 20 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[208] },
  /* row 21 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[209] },
  /* row 22 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[43] },
  /* row 23 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[210] },
  /* row 24 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[170] },
  /* row 25 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[67] },
  /* row 26 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[211] },
  /* row 27 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[147] },
  /* row 28 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[145] },
  /* row 29 */   {     (MR_Word) &libs__compute_grade_scalar_common_1[212] },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2933 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2941 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2949 "libs.compute_grade.c"
static const MR_FA_TypeInfo_Struct1 libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2957 "libs.compute_grade.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__compute_grade____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__compute_grade__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2967 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2976 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__compute_grade__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2985 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__compute_grade__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 2994 "libs.compute_grade.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__compute_grade__set_ordlist__pti_set_ordlist_1__plain_libs__compute_grade__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0
  }
};

#line 3002 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3008 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3014 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3020 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3026 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3032 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3038 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3044 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3050 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3056 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 3062 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 3068 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 3074 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 3080 "libs.compute_grade.c"
static const MR_EnumFunctorDesc libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 3086 "libs.compute_grade.c"
static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0[14] = {
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_13
};

#line 3104 "libs.compute_grade.c"
static const MR_EnumFunctorDescPtr libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0[14] = {
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_3,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_0,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_10,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_7,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_1,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_2,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_9,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_8,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_4,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_13,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_12,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_5,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_11,
  &libs__compute_grade__libs__compute_grade__enum_functor_desc_grade_component_0_6
};

#line 3122 "libs.compute_grade.c"
static const MR_Integer libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0[14] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 9
};

#line 3140 "libs.compute_grade.c"
const MR_TypeCtorInfo_Struct libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__compute_grade____Unify____grade_component_0_0_10001)),
  ((MR_Box) (libs__compute_grade____Compare____grade_component_0_0_10001)),
  (MR_String) "libs.compute_grade",
  (MR_String) "grade_component",
  {     libs__compute_grade__libs__compute_grade__enum_name_ordered_grade_component_0 },
  {     libs__compute_grade__libs__compute_grade__enum_value_ordered_grade_component_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  libs__compute_grade__libs__compute_grade__functor_number_map_grade_component_0
};

#line 3157 "libs.compute_grade.c"
static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0_10001(
#line 3160 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 3162 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_2)
#line 3164 "libs.compute_grade.c"
{
#line 3166 "libs.compute_grade.c"
  {
#line 3168 "libs.compute_grade.c"
    MR_bool libs__compute_grade__succeeded;

#line 3171 "libs.compute_grade.c"
    {
#line 3173 "libs.compute_grade.c"
      libs__compute_grade__succeeded = libs__compute_grade____Unify____grade_component_0_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
#line 3176 "libs.compute_grade.c"
    return libs__compute_grade__succeeded;
#line 3178 "libs.compute_grade.c"
  }
#line 3180 "libs.compute_grade.c"
}

#line 3183 "libs.compute_grade.c"
static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0_10001(
#line 3186 "libs.compute_grade.c"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 3188 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 3190 "libs.compute_grade.c"
  MR_Box libs__compute_grade__wrapper_arg_3)
#line 3192 "libs.compute_grade.c"
{
#line 3194 "libs.compute_grade.c"
  {
#line 3196 "libs.compute_grade.c"
    MR_Word libs__compute_grade__conv0_HeadVar__1_1;

#line 3199 "libs.compute_grade.c"
    {
#line 3201 "libs.compute_grade.c"
      libs__compute_grade____Compare____grade_component_0_0(&libs__compute_grade__conv0_HeadVar__1_1, ((MR_Word) libs__compute_grade__wrapper_arg_2), ((MR_Word) libs__compute_grade__wrapper_arg_3));
    }
#line 3204 "libs.compute_grade.c"
    *libs__compute_grade__wrapper_arg_1 = ((MR_Box) (libs__compute_grade__conv0_HeadVar__1_1));
#line 3206 "libs.compute_grade.c"
  }
#line 3208 "libs.compute_grade.c"
}

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__reset_grade_options__780__1_3_p_0(
#line 780 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__1_12,
#line 780 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_13,
#line 780 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_14)
#line 780 "compute_grade.m"
{
#line 780 "compute_grade.m"
  {
#line 780 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 780 "compute_grade.m"
    MR_Word libs__compute_grade__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_12, (MR_Integer) 0)));
#line 780 "compute_grade.m"
    MR_Word libs__compute_grade__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_12, (MR_Integer) 1)));

#line 783 "compute_grade.m"
    {
#line 783 "compute_grade.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__compute_grade__Option_8)), ((MR_Box) (libs__compute_grade__Value_9)), libs__compute_grade__LambdaHeadVar__2_13, libs__compute_grade__LambdaHeadVar__3_14);
    }
#line 780 "compute_grade.m"
  }
#line 780 "compute_grade.m"
}

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_2(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 506 "compute_grade.m"
{
#line 506 "compute_grade.m"
  {
#line 506 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 506 "compute_grade.m"
    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_0, 1);
#line 506 "compute_grade.m"
  }
#line 506 "compute_grade.m"
}

#line 507 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_4(
#line 507 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 507 "compute_grade.m"
{
#line 507 "compute_grade.m"
  {
#line 507 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 507 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv0_V_17_17);
#line 507 "compute_grade.m"
    {
#line 507 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_3(libs__compute_grade__env_ptr);
    }
#line 507 "compute_grade.m"
  }
#line 507 "compute_grade.m"
}

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_3(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 506 "compute_grade.m"
{
#line 506 "compute_grade.m"
  {
#line 506 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 506 "compute_grade.m"
    {
#line 509 "compute_grade.m"
      MR_Word libs__compute_grade__V_26_26;
#line 509 "compute_grade.m"
      MR_Box libs__compute_grade__conv1_V_26_26;

#line 507 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 507 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 509 "compute_grade.m"
      {
#line 509 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Opt_11)), &libs__compute_grade__conv1_V_26_26);
      }
#line 509 "compute_grade.m"
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 509 "compute_grade.m"
        {
#line 509 "compute_grade.m"
          libs__compute_grade__V_26_26 = ((MR_Word) libs__compute_grade__conv1_V_26_26);
#line 509 "compute_grade.m"
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 509 "compute_grade.m"
        }
#line 509 "compute_grade.m"
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 509 "compute_grade.m"
        {
#line 509 "compute_grade.m"
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Value_12, libs__compute_grade__V_26_26);
        }
#line 508 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded);
#line 508 "compute_grade.m"
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 508 "compute_grade.m"
        {
#line 508 "compute_grade.m"
          libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_2(libs__compute_grade__env_ptr);
        }
#line 506 "compute_grade.m"
    }
#line 506 "compute_grade.m"
  }
#line 506 "compute_grade.m"
}

#line 506 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_5(
#line 506 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 506 "compute_grade.m"
{
#line 506 "compute_grade.m"
  {
#line 506 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 506 "compute_grade.m"
    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_0) == 0)
#line 506 "compute_grade.m"
      {
#line 506 "compute_grade.m"
        {
#line 507 "compute_grade.m"
          {
#line 507 "compute_grade.m"
            mercury__list__member_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[1], &(libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv0_V_17_17, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__CompOpts_8, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_4, libs__compute_grade__env_ptr);
          }
#line 506 "compute_grade.m"
        }
#line 506 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 506 "compute_grade.m"
      }
#line 506 "compute_grade.m"
    else
#line 506 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 506 "compute_grade.m"
  }
#line 506 "compute_grade.m"
}

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_6(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 520 "compute_grade.m"
{
#line 520 "compute_grade.m"
  {
#line 520 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 520 "compute_grade.m"
    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_1, 1);
#line 520 "compute_grade.m"
  }
#line 520 "compute_grade.m"
}

#line 521 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_8(
#line 521 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 521 "compute_grade.m"
{
#line 521 "compute_grade.m"
  {
#line 521 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 521 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv2_Target_14);
#line 521 "compute_grade.m"
    {
#line 521 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_7(libs__compute_grade__env_ptr);
    }
#line 521 "compute_grade.m"
  }
#line 521 "compute_grade.m"
}

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_7(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 520 "compute_grade.m"
{
#line 520 "compute_grade.m"
  {
#line 520 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 520 "compute_grade.m"
    {
#line 522 "compute_grade.m"
      MR_Box libs__compute_grade__conv3_V_27_27;

#line 522 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_18_18 = (MR_Integer) 176;
#line 3445 "libs.compute_grade.c"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 522 "compute_grade.m"
      {
#line 522 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_18_18)), &libs__compute_grade__conv3_V_27_27);
      }
#line 522 "compute_grade.m"
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 522 "compute_grade.m"
        {
#line 522 "compute_grade.m"
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__compute_grade__conv3_V_27_27);
#line 522 "compute_grade.m"
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 522 "compute_grade.m"
        }
#line 520 "compute_grade.m"
      if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 520 "compute_grade.m"
        {
#line 522 "compute_grade.m"
          {
#line 522 "compute_grade.m"
            (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Target_14, (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__V_27_27);
          }
#line 522 "compute_grade.m"
          if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 522 "compute_grade.m"
            {
#line 522 "compute_grade.m"
              libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_6(libs__compute_grade__env_ptr);
            }
#line 520 "compute_grade.m"
        }
#line 520 "compute_grade.m"
    }
#line 520 "compute_grade.m"
  }
#line 520 "compute_grade.m"
}

#line 520 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_9(
#line 520 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 520 "compute_grade.m"
{
#line 520 "compute_grade.m"
  {
#line 520 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 520 "compute_grade.m"
    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__commit_1) == 0)
#line 520 "compute_grade.m"
      {
#line 520 "compute_grade.m"
        {
#line 520 "compute_grade.m"
          MR_Word libs__compute_grade__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 3508 "libs.compute_grade.c"
          (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 521 "compute_grade.m"
          {
#line 521 "compute_grade.m"
            mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__conv2_Target_14, libs__compute_grade__Targets_13, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_8, libs__compute_grade__env_ptr);
          }
#line 520 "compute_grade.m"
        }
#line 520 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 520 "compute_grade.m"
      }
#line 520 "compute_grade.m"
    else
#line 520 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 520 "compute_grade.m"
  }
#line 520 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 506 "compute_grade.m"
    {
#line 506 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_5(libs__compute_grade__env_ptr);
    }
#line 506 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded);
#line 498 "compute_grade.m"
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 498 "compute_grade.m"
      {
#line 514 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 498 "compute_grade.m"
        if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 498 "compute_grade.m"
          {
#line 523 "compute_grade.m"
            if (((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "compute_grade.m"
              (libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 523 "compute_grade.m"
            else
#line 520 "compute_grade.m"
              {
#line 520 "compute_grade.m"
                {
#line 520 "compute_grade.m"
                  libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_9(libs__compute_grade__env_ptr);
                }
#line 520 "compute_grade.m"
              }
#line 498 "compute_grade.m"
            if ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__succeeded)
#line 498 "compute_grade.m"
              {
#line 526 "compute_grade.m"
                {
#line 526 "compute_grade.m"
                  MR_Word base;
#line 526 "compute_grade.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "compute_grade.m"
                  *((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__LambdaHeadVar__1_16) = base;
#line 526 "compute_grade.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Comp_7));
#line 526 "compute_grade.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Name_6));
#line 526 "compute_grade.m"
                }
#line 526 "compute_grade.m"
                {
#line 526 "compute_grade.m"
                  ((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont_env_ptr);
                }
#line 498 "compute_grade.m"
              }
#line 498 "compute_grade.m"
          }
#line 498 "compute_grade.m"
      }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0(
#line 498 "compute_grade.m"
  MR_Word libs__compute_grade__Options_3,
#line 498 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__1_16,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0_s libs__compute_grade__env;

#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Options_3 = libs__compute_grade__Options_3;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__LambdaHeadVar__1_16 = libs__compute_grade__LambdaHeadVar__1_16;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont = libs__compute_grade__cont;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
#line 500 "compute_grade.m"
    {
#line 500 "compute_grade.m"
      libs__compute_grade__grade_component_table_5_p_2(&(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Name_6, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__Comp_7, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__CompOpts_8, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__MaybeTargets_9, &(libs__compute_grade__env).libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_env_0__IncludeInGradeString_10, libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0_1, &libs__compute_grade__env);
    }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__add_option_list__449__1_3_p_0(
#line 449 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__1_13,
#line 449 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_14,
#line 449 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_15)
#line 449 "compute_grade.m"
{
#line 449 "compute_grade.m"
  {
#line 449 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 449 "compute_grade.m"
    MR_Word libs__compute_grade__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 449 "compute_grade.m"
    MR_Word libs__compute_grade__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__LambdaHeadVar__1_13, (MR_Integer) 1)));

#line 452 "compute_grade.m"
    {
#line 452 "compute_grade.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__compute_grade__Option_10)), ((MR_Box) (libs__compute_grade__Data_11)), libs__compute_grade__LambdaHeadVar__2_14, libs__compute_grade__LambdaHeadVar__3_15);
    }
#line 449 "compute_grade.m"
  }
#line 449 "compute_grade.m"
}

#line 353 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(
#line 353 "compute_grade.m"
  MR_String libs__compute_grade__LambdaHeadVar__1_20,
#line 353 "compute_grade.m"
  MR_String * libs__compute_grade__LambdaHeadVar__2_21)
#line 353 "compute_grade.m"
{
#line 353 "compute_grade.m"
  {
#line 353 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 354 "compute_grade.m"
    MR_Word libs__compute_grade__V_11_11;
#line 354 "compute_grade.m"
    MR_Word libs__compute_grade__V_12_12;
#line 354 "compute_grade.m"
    MR_Word libs__compute_grade__V_13_13;
#line 354 "compute_grade.m"
    MR_Word libs__compute_grade__V_14_14;

#line 354 "compute_grade.m"
    {
#line 354 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__LambdaHeadVar__1_20, &libs__compute_grade__V_11_11, &libs__compute_grade__V_12_12, &libs__compute_grade__V_13_13, &libs__compute_grade__V_14_14);
    }
#line 353 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 353 "compute_grade.m"
      {
#line 353 "compute_grade.m"
        *libs__compute_grade__LambdaHeadVar__2_21 = libs__compute_grade__LambdaHeadVar__1_20;
#line 353 "compute_grade.m"
        libs__compute_grade__succeeded = MR_TRUE;
#line 353 "compute_grade.m"
      }
#line 353 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 353 "compute_grade.m"
  }
#line 353 "compute_grade.m"
}

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_2(
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 449 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3)
#line 449 "compute_grade.m"
{
#line 449 "compute_grade.m"
  {
#line 449 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 449 "compute_grade.m"
    MR_Word libs__compute_grade__conv2_LambdaHeadVar__3_15;

#line 449 "compute_grade.m"
    {
#line 449 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__add_option_list__449__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv2_LambdaHeadVar__3_15);
    }
#line 449 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv2_LambdaHeadVar__3_15));
#line 449 "compute_grade.m"
  }
#line 449 "compute_grade.m"
}

#line 449 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0_1(
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 449 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 449 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3)
#line 449 "compute_grade.m"
{
#line 449 "compute_grade.m"
  {
#line 449 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 449 "compute_grade.m"
    MR_Word libs__compute_grade__conv0_LambdaHeadVar__3_15;

#line 449 "compute_grade.m"
    {
#line 449 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__add_option_list__449__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv0_LambdaHeadVar__3_15);
    }
#line 449 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv0_LambdaHeadVar__3_15));
#line 449 "compute_grade.m"
  }
#line 449 "compute_grade.m"
}

#line 425 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0(
#line 425 "compute_grade.m"
  MR_String libs__compute_grade__LambdaHeadVar__1_23,
#line 425 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__2_24,
#line 425 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__3_25,
#line 425 "compute_grade.m"
  MR_Word libs__compute_grade__LambdaHeadVar__4_26,
#line 425 "compute_grade.m"
  MR_Word * libs__compute_grade__LambdaHeadVar__5_27)
#line 425 "compute_grade.m"
{
#line 425 "compute_grade.m"
  {
#line 425 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_41_41;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_21_62;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_22_63;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__Comp_15;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__CompOpts_16;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__MaybeTargets_17;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__Opts1_19;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__V_53_53;
#line 428 "compute_grade.m"
    MR_Word libs__compute_grade__V_18_18;
#line 431 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_40_40;
#line 449 "compute_grade.m"
    MR_Box libs__compute_grade__conv1_Opts1_19;
#line 438 "compute_grade.m"
    MR_Word libs__compute_grade__Target_20;
#line 438 "compute_grade.m"
    MR_Word libs__compute_grade__V_28_28;
#line 438 "compute_grade.m"
    MR_Word libs__compute_grade__V_29_29;

#line 428 "compute_grade.m"
    {
#line 428 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__LambdaHeadVar__1_23, &libs__compute_grade__Comp_15, &libs__compute_grade__CompOpts_16, &libs__compute_grade__MaybeTargets_17, &libs__compute_grade__V_18_18);
    }
#line 425 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 425 "compute_grade.m"
      {
#line 3839 "libs.compute_grade.c"
        libs__compute_grade__TypeCtorInfo_40_40 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
#line 431 "compute_grade.m"
        {
#line 431 "compute_grade.m"
          libs__compute_grade__succeeded = mercury__set__member_2_p_0(libs__compute_grade__TypeCtorInfo_40_40, ((MR_Box) (libs__compute_grade__Comp_15)), libs__compute_grade__LambdaHeadVar__4_26);
        }
#line 431 "compute_grade.m"
        libs__compute_grade__succeeded = !(libs__compute_grade__succeeded);
#line 425 "compute_grade.m"
        if (libs__compute_grade__succeeded)
#line 425 "compute_grade.m"
          {
#line 3852 "libs.compute_grade.c"
            libs__compute_grade__TypeCtorInfo_41_41 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
#line 432 "compute_grade.m"
            {
#line 432 "compute_grade.m"
              mercury__set__insert_3_p_0(libs__compute_grade__TypeCtorInfo_41_41, ((MR_Box) (libs__compute_grade__Comp_15)), libs__compute_grade__LambdaHeadVar__4_26, libs__compute_grade__LambdaHeadVar__5_27);
            }
#line 449 "compute_grade.m"
            libs__compute_grade__V_53_53 = (MR_Word) &libs__compute_grade_scalar_common_2[9];
#line 3861 "libs.compute_grade.c"
            libs__compute_grade__TypeInfo_21_62 = (MR_Word) &libs__compute_grade_scalar_common_2[1];
#line 3863 "libs.compute_grade.c"
            libs__compute_grade__TypeInfo_22_63 = (MR_Word) &libs__compute_grade_scalar_common_2[0];
#line 449 "compute_grade.m"
            {
#line 449 "compute_grade.m"
              mercury__list__foldl_4_p_0(libs__compute_grade__TypeInfo_21_62, libs__compute_grade__TypeInfo_22_63, libs__compute_grade__V_53_53, libs__compute_grade__CompOpts_16, ((MR_Box) (libs__compute_grade__LambdaHeadVar__2_24)), &libs__compute_grade__conv1_Opts1_19);
            }
#line 449 "compute_grade.m"
            libs__compute_grade__Opts1_19 = ((MR_Word) libs__compute_grade__conv1_Opts1_19);
#line 438 "compute_grade.m"
            libs__compute_grade__succeeded = ((MR_tag((MR_Word) libs__compute_grade__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 438 "compute_grade.m"
            if (libs__compute_grade__succeeded)
#line 438 "compute_grade.m"
              {
#line 438 "compute_grade.m"
                libs__compute_grade__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__MaybeTargets_17, (MR_Integer) 0)));
#line 438 "compute_grade.m"
                libs__compute_grade__succeeded = ((MR_tag((MR_Word) libs__compute_grade__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 438 "compute_grade.m"
                if (libs__compute_grade__succeeded)
#line 438 "compute_grade.m"
                  {
#line 438 "compute_grade.m"
                    libs__compute_grade__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__V_28_28, (MR_Integer) 0)));
#line 438 "compute_grade.m"
                    libs__compute_grade__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__V_28_28, (MR_Integer) 1)));
#line 438 "compute_grade.m"
                    libs__compute_grade__succeeded = (libs__compute_grade__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "compute_grade.m"
                  }
#line 438 "compute_grade.m"
              }
#line 438 "compute_grade.m"
            if (libs__compute_grade__succeeded)
#line 439 "compute_grade.m"
              {
#line 439 "compute_grade.m"
                MR_Word libs__compute_grade__V_30_30;
#line 439 "compute_grade.m"
                MR_Word libs__compute_grade__V_31_31;
#line 449 "compute_grade.m"
                MR_Box libs__compute_grade__conv3_LambdaHeadVar__3_25;

#line 439 "compute_grade.m"
                {
#line 439 "compute_grade.m"
                  libs__compute_grade__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "compute_grade.m"
                  MR_hl_field(MR_mktag(0), libs__compute_grade__V_31_31, 0) = ((MR_Box) ((MR_Integer) 176));
#line 439 "compute_grade.m"
                  MR_hl_field(MR_mktag(0), libs__compute_grade__V_31_31, 1) = ((MR_Box) (libs__compute_grade__Target_20));
#line 439 "compute_grade.m"
                }
#line 439 "compute_grade.m"
                {
#line 439 "compute_grade.m"
                  libs__compute_grade__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_30_30, 0) = ((MR_Box) (libs__compute_grade__V_31_31));
#line 439 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "compute_grade.m"
                }
#line 449 "compute_grade.m"
                {
#line 449 "compute_grade.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__compute_grade_scalar_common_2[1], (MR_Word) &libs__compute_grade_scalar_common_2[0], (MR_Word) &libs__compute_grade_scalar_common_2[10], libs__compute_grade__V_30_30, ((MR_Box) (libs__compute_grade__Opts1_19)), &libs__compute_grade__conv3_LambdaHeadVar__3_25);
                }
#line 449 "compute_grade.m"
                *libs__compute_grade__LambdaHeadVar__3_25 = ((MR_Word) libs__compute_grade__conv3_LambdaHeadVar__3_25);
#line 439 "compute_grade.m"
              }
#line 438 "compute_grade.m"
            else
#line 441 "compute_grade.m"
              *libs__compute_grade__LambdaHeadVar__3_25 = libs__compute_grade__Opts1_19;
#line 438 "compute_grade.m"
            libs__compute_grade__succeeded = MR_TRUE;
#line 425 "compute_grade.m"
          }
#line 425 "compute_grade.m"
      }
#line 425 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 425 "compute_grade.m"
  }
#line 425 "compute_grade.m"
}

#line 397 "compute_grade.m"
static void MR_CALL 
libs__compute_grade____Compare____grade_component_0_0(
#line 397 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__1_1,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_2,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__3_3)
#line 397 "compute_grade.m"
{
#line 397 "compute_grade.m"
  {
#line 397 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 397 "compute_grade.m"
    MR_Integer libs__compute_grade__Cast_HeadVar1_4 = (MR_Integer) libs__compute_grade__HeadVar__2_2;
#line 397 "compute_grade.m"
    MR_Integer libs__compute_grade__Cast_HeadVar2_5 = (MR_Integer) libs__compute_grade__HeadVar__3_3;

#line 397 "compute_grade.m"
    {
#line 397 "compute_grade.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__compute_grade__HeadVar__1_1, libs__compute_grade__Cast_HeadVar1_4, libs__compute_grade__Cast_HeadVar2_5);
    }
#line 397 "compute_grade.m"
  }
#line 397 "compute_grade.m"
}

#line 397 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade____Unify____grade_component_0_0(
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_1,
#line 397 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__2_2)
#line 397 "compute_grade.m"
{
#line 3992 "libs.compute_grade.c"
  {
#line 3994 "libs.compute_grade.c"
    MR_bool libs__compute_grade__succeeded = (libs__compute_grade__HeadVar__2_1 == libs__compute_grade__HeadVar__2_2);

#line 3997 "libs.compute_grade.c"
    return libs__compute_grade__succeeded;
#line 3999 "libs.compute_grade.c"
  }
#line 397 "compute_grade.m"
}

#line 841 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__char_is_not_2_p_0(
#line 841 "compute_grade.m"
  MR_Char libs__compute_grade__A_3,
#line 841 "compute_grade.m"
  MR_Char libs__compute_grade__B_4)
#line 841 "compute_grade.m"
{
#line 844 "compute_grade.m"
  {
#line 844 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded = (libs__compute_grade__A_3 == libs__compute_grade__B_4);

#line 844 "compute_grade.m"
    libs__compute_grade__succeeded = !(libs__compute_grade__succeeded);
#line 844 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 844 "compute_grade.m"
  }
#line 841 "compute_grade.m"
}

#line 830 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0_1(
#line 830 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 830 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1)
#line 830 "compute_grade.m"
{
#line 830 "compute_grade.m"
  {
#line 830 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 830 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 830 "compute_grade.m"
    {
#line 830 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__compute_grade__wrapper_arg_1));
    }
#line 830 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 830 "compute_grade.m"
  }
#line 830 "compute_grade.m"
}

#line 825 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__split_grade_string_2_2_p_0(
#line 825 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__1_1,
#line 825 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2)
#line 825 "compute_grade.m"
{
#line 827 "compute_grade.m"
  {
#line 827 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;

#line 827 "compute_grade.m"
    if ((libs__compute_grade__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "compute_grade.m"
      {
#line 827 "compute_grade.m"
        *libs__compute_grade__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "compute_grade.m"
        libs__compute_grade__succeeded = MR_TRUE;
#line 827 "compute_grade.m"
      }
#line 827 "compute_grade.m"
    else
#line 828 "compute_grade.m"
      {
#line 828 "compute_grade.m"
        MR_Word libs__compute_grade__ThisChars_7;
#line 828 "compute_grade.m"
        MR_Word libs__compute_grade__RestChars0_8;
#line 828 "compute_grade.m"
        MR_String libs__compute_grade__ThisComponent_9;
#line 828 "compute_grade.m"
        MR_Word libs__compute_grade__RestComponents_10;

#line 830 "compute_grade.m"
        {
#line 830 "compute_grade.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__compute_grade_scalar_common_5[3], libs__compute_grade__HeadVar__1_1, &libs__compute_grade__ThisChars_7, &libs__compute_grade__RestChars0_8);
        }
#line 831 "compute_grade.m"
        {
#line 831 "compute_grade.m"
          mercury__string__from_char_list_2_p_0(libs__compute_grade__ThisChars_7, &libs__compute_grade__ThisComponent_9);
        }
#line 836 "compute_grade.m"
        if ((libs__compute_grade__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "compute_grade.m"
          {
#line 838 "compute_grade.m"
            libs__compute_grade__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "compute_grade.m"
            libs__compute_grade__succeeded = MR_TRUE;
#line 838 "compute_grade.m"
          }
#line 836 "compute_grade.m"
        else
#line 834 "compute_grade.m"
          {
#line 834 "compute_grade.m"
            MR_Word libs__compute_grade__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__RestChars0_8, (MR_Integer) 1)));
#line 834 "compute_grade.m"
            MR_Char libs__compute_grade__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__RestChars0_8, (MR_Integer) 0)));

#line 835 "compute_grade.m"
            {
#line 835 "compute_grade.m"
              libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__RestChars_12, &libs__compute_grade__RestComponents_10);
            }
#line 834 "compute_grade.m"
          }
#line 828 "compute_grade.m"
        if (libs__compute_grade__succeeded)
#line 828 "compute_grade.m"
          {
#line 832 "compute_grade.m"
            {
#line 832 "compute_grade.m"
              MR_Word base;
#line 832 "compute_grade.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "compute_grade.m"
              *libs__compute_grade__HeadVar__2_2 = base;
#line 832 "compute_grade.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__ThisComponent_9));
#line 832 "compute_grade.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__RestComponents_10));
#line 832 "compute_grade.m"
            }
#line 832 "compute_grade.m"
            libs__compute_grade__succeeded = MR_TRUE;
#line 828 "compute_grade.m"
          }
#line 828 "compute_grade.m"
      }
#line 827 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 827 "compute_grade.m"
  }
#line 825 "compute_grade.m"
}

#line 786 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_start_values_1_p_0(
#line 786 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__1_1,
#line 786 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 786 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 786 "compute_grade.m"
{
#line 788 "compute_grade.m"
  {
#line 788 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;

#line 788 "compute_grade.m"
    {
#line 788 "compute_grade.m"
      MR_Integer libs__compute_grade__slot_0 = (MR_Integer) 0;

#line 788 "compute_grade.m"
      do
#line 788 "compute_grade.m"
        {
#line 788 "compute_grade.m"
          *libs__compute_grade__HeadVar__1_1 = ((&libs__compute_grade_vector_common_12[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_12_0__vct_12_f_0;
#line 788 "compute_grade.m"
          {
#line 788 "compute_grade.m"
            libs__compute_grade__cont(libs__compute_grade__cont_env_ptr);
          }
#line 788 "compute_grade.m"
          libs__compute_grade__slot_0 = (libs__compute_grade__slot_0 + (MR_Integer) 1);
#line 788 "compute_grade.m"
        }
#line 788 "compute_grade.m"
      while ((libs__compute_grade__slot_0 < (MR_Integer) 30));
#line 788 "compute_grade.m"
    }
#line 788 "compute_grade.m"
  }
#line 786 "compute_grade.m"
}

#line 543 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_component_table_5_p_2(
#line 543 "compute_grade.m"
  MR_String * libs__compute_grade__HeadVar__1_1,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__3_3,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__4_4,
#line 543 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__5_5,
#line 543 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 543 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 543 "compute_grade.m"
{
#line 548 "compute_grade.m"
  {
#line 548 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;

#line 548 "compute_grade.m"
    {
#line 548 "compute_grade.m"
      MR_Integer libs__compute_grade__slot_0 = (MR_Integer) 0;

#line 548 "compute_grade.m"
      do
#line 548 "compute_grade.m"
        {
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__1_1 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_0;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__2_2 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_1;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__3_3 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_2;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__4_4 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_3;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__5_5 = ((&libs__compute_grade_vector_common_11[0 + libs__compute_grade__slot_0]))->libs__compute_grade__vector_common_type_11_0__vct_11_f_4;
#line 548 "compute_grade.m"
          {
#line 548 "compute_grade.m"
            libs__compute_grade__cont(libs__compute_grade__cont_env_ptr);
          }
#line 548 "compute_grade.m"
          libs__compute_grade__slot_0 = (libs__compute_grade__slot_0 + (MR_Integer) 1);
#line 548 "compute_grade.m"
        }
#line 548 "compute_grade.m"
      while ((libs__compute_grade__slot_0 < (MR_Integer) 48));
#line 548 "compute_grade.m"
    }
#line 548 "compute_grade.m"
  }
#line 543 "compute_grade.m"
}

#line 541 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__grade_component_table_5_p_0(
#line 541 "compute_grade.m"
  MR_String libs__compute_grade__HeadVar__1_1,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__2_2,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__3_3,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__4_4,
#line 541 "compute_grade.m"
  MR_Word * libs__compute_grade__HeadVar__5_5)
#line 541 "compute_grade.m"
{
#line 548 "compute_grade.m"
  {
#line 548 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;

#line 548 "compute_grade.m"
    {
#line 548 "compute_grade.m"
      MR_Integer libs__compute_grade__case_num_0 = (MR_Integer) -1;

#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
      switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 0)) {
#line 548 "compute_grade.m"
        case (MR_Integer) 97:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 103:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "agc"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 0;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 115:
#line 548 "compute_grade.m"
              if (((((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 95))))
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
#line 548 "compute_grade.m"
                  case (MR_Integer) 102:
#line 548 "compute_grade.m"
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "asm_fast"))
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 1;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                  case (MR_Integer) 106:
#line 548 "compute_grade.m"
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "asm_jump"))
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 2;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 99:
#line 548 "compute_grade.m"
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "csharp"))
#line 548 "compute_grade.m"
            libs__compute_grade__case_num_0 = (MR_Integer) 3;
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 100:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 101:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 98:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "debug"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 4;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 99:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "decldebug"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 5;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 109:
#line 548 "compute_grade.m"
              if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109))
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) {
#line 548 "compute_grade.m"
                  case (MR_Integer) 0:
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 6;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                  case (MR_Integer) 111:
#line 548 "compute_grade.m"
                    if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "dmmos"))
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 7;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                  case (MR_Integer) 115:
#line 548 "compute_grade.m"
                    if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "dmmsc"))
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 8;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 101:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 114:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "erlang"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 9;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 120:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "exts"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 10;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 102:
#line 548 "compute_grade.m"
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "fast"))
#line 548 "compute_grade.m"
            libs__compute_grade__case_num_0 = (MR_Integer) 11;
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 103:
#line 548 "compute_grade.m"
          if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) == (MR_Integer) 99))
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
            switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
              case (MR_Integer) 0:
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 12;
#line 548 "compute_grade.m"
                break;
#line 548 "compute_grade.m"
              case (MR_Integer) 100:
#line 548 "compute_grade.m"
                if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "gcd"))
#line 548 "compute_grade.m"
                  libs__compute_grade__case_num_0 = (MR_Integer) 13;
#line 548 "compute_grade.m"
                break;
#line 548 "compute_grade.m"
            }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 104:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 103:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "hgc"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 14;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 108:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 0:
#line 548 "compute_grade.m"
                  libs__compute_grade__case_num_0 = (MR_Integer) 15;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 95:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "hl_nest"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 16;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 99:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                  switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) {
#line 548 "compute_grade.m"
                    case (MR_Integer) 0:
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 17;
#line 548 "compute_grade.m"
                      break;
#line 548 "compute_grade.m"
                    case (MR_Integer) 95:
#line 548 "compute_grade.m"
                      if (MR_offset_streq(4, libs__compute_grade__HeadVar__1_1, (MR_String) "hlc_nest"))
#line 548 "compute_grade.m"
                        libs__compute_grade__case_num_0 = (MR_Integer) 18;
#line 548 "compute_grade.m"
                      break;
#line 548 "compute_grade.m"
                  }
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 106:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 97:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "java"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 19;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 117:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "jump"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 20;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 108:
#line 548 "compute_grade.m"
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "ll_debug"))
#line 548 "compute_grade.m"
            libs__compute_grade__case_num_0 = (MR_Integer) 21;
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 109:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 101:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "memprof"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 22;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 109:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 0:
#line 548 "compute_grade.m"
                  libs__compute_grade__case_num_0 = (MR_Integer) 23;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 111:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "mmos"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 24;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 115:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "mmsc"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 25;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 110:
#line 548 "compute_grade.m"
          if (MR_offset_streq(1, libs__compute_grade__HeadVar__1_1, (MR_String) "none"))
#line 548 "compute_grade.m"
            libs__compute_grade__case_num_0 = (MR_Integer) 26;
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 112:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 97:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "par"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 27;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 105:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "picreg"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 28;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 114:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 101:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "pregen"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 29;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 111:
#line 548 "compute_grade.m"
                  if (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 102))
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                    switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
#line 548 "compute_grade.m"
                      case (MR_Integer) 0:
#line 548 "compute_grade.m"
                        libs__compute_grade__case_num_0 = (MR_Integer) 30;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                      case (MR_Integer) 97:
#line 548 "compute_grade.m"
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profall"))
#line 548 "compute_grade.m"
                          libs__compute_grade__case_num_0 = (MR_Integer) 31;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                      case (MR_Integer) 99:
#line 548 "compute_grade.m"
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profcalls"))
#line 548 "compute_grade.m"
                          libs__compute_grade__case_num_0 = (MR_Integer) 32;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                      case (MR_Integer) 100:
#line 548 "compute_grade.m"
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "profdeep"))
#line 548 "compute_grade.m"
                          libs__compute_grade__case_num_0 = (MR_Integer) 33;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                      case (MR_Integer) 116:
#line 548 "compute_grade.m"
                        if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "proftime"))
#line 548 "compute_grade.m"
                          libs__compute_grade__case_num_0 = (MR_Integer) 34;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                    }
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 114:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 98:
#line 548 "compute_grade.m"
              if (((((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 3)) == (MR_Integer) 109))))
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 4)) {
#line 548 "compute_grade.m"
                  case (MR_Integer) 0:
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 35;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                  case (MR_Integer) 100:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
                    switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 5)) {
#line 548 "compute_grade.m"
                      case (MR_Integer) 0:
#line 548 "compute_grade.m"
                        libs__compute_grade__case_num_0 = (MR_Integer) 36;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                      case (MR_Integer) 112:
#line 548 "compute_grade.m"
                        if (MR_offset_streq(6, libs__compute_grade__HeadVar__1_1, (MR_String) "rbmmdp"))
#line 548 "compute_grade.m"
                          libs__compute_grade__case_num_0 = (MR_Integer) 37;
#line 548 "compute_grade.m"
                        break;
#line 548 "compute_grade.m"
                    }
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                  case (MR_Integer) 112:
#line 548 "compute_grade.m"
                    if (MR_offset_streq(5, libs__compute_grade__HeadVar__1_1, (MR_String) "rbmmp"))
#line 548 "compute_grade.m"
                      libs__compute_grade__case_num_0 = (MR_Integer) 38;
#line 548 "compute_grade.m"
                    break;
#line 548 "compute_grade.m"
                }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 101:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "reg"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 39;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 115:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 112:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "spf"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 40;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 115:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "ssdebug"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 41;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 116:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "stseg"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 42;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
        case (MR_Integer) 116:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
          switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 1)) {
#line 548 "compute_grade.m"
            case (MR_Integer) 104:
#line 548 "compute_grade.m"
              if (MR_offset_streq(2, libs__compute_grade__HeadVar__1_1, (MR_String) "threadscope"))
#line 548 "compute_grade.m"
                libs__compute_grade__case_num_0 = (MR_Integer) 43;
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 114:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 0:
#line 548 "compute_grade.m"
                  libs__compute_grade__case_num_0 = (MR_Integer) 44;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 115:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "trseg"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 45;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
            case (MR_Integer) 115:
#line 548 "compute_grade.m"
#line 548 "compute_grade.m"
              switch (MR_nth_code_unit(libs__compute_grade__HeadVar__1_1, 2)) {
#line 548 "compute_grade.m"
                case (MR_Integer) 99:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "tsc"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 46;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
                case (MR_Integer) 119:
#line 548 "compute_grade.m"
                  if (MR_offset_streq(3, libs__compute_grade__HeadVar__1_1, (MR_String) "tsw"))
#line 548 "compute_grade.m"
                    libs__compute_grade__case_num_0 = (MR_Integer) 47;
#line 548 "compute_grade.m"
                  break;
#line 548 "compute_grade.m"
              }
#line 548 "compute_grade.m"
              break;
#line 548 "compute_grade.m"
          }
#line 548 "compute_grade.m"
          break;
#line 548 "compute_grade.m"
      }
#line 548 "compute_grade.m"
      if ((libs__compute_grade__case_num_0 < (MR_Integer) 0))
#line 548 "compute_grade.m"
        libs__compute_grade__succeeded = MR_FALSE;
#line 548 "compute_grade.m"
      else
#line 548 "compute_grade.m"
        {
#line 548 "compute_grade.m"
          /* we found a match; look up the results */
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__2_2 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_0;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__3_3 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_1;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__4_4 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_2;
#line 548 "compute_grade.m"
          *libs__compute_grade__HeadVar__5_5 = ((&libs__compute_grade_vector_common_10[0 + libs__compute_grade__case_num_0]))->libs__compute_grade__vector_common_type_10_0__vct_10_f_3;
#line 548 "compute_grade.m"
          libs__compute_grade__succeeded = MR_TRUE;
#line 548 "compute_grade.m"
        }
#line 548 "compute_grade.m"
    }
#line 548 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 548 "compute_grade.m"
  }
#line 541 "compute_grade.m"
}

#line 480 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__construct_string_2_p_0(
#line 480 "compute_grade.m"
  MR_Word libs__compute_grade__HeadVar__1_1,
#line 480 "compute_grade.m"
  MR_String * libs__compute_grade__HeadVar__2_2)
#line 480 "compute_grade.m"
{
#line 483 "compute_grade.m"
  {
#line 483 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;

#line 483 "compute_grade.m"
    if ((libs__compute_grade__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "compute_grade.m"
      *libs__compute_grade__HeadVar__2_2 = (MR_String) "";
#line 483 "compute_grade.m"
    else
#line 484 "compute_grade.m"
      {
#line 484 "compute_grade.m"
        MR_String libs__compute_grade__Bit_4;
#line 484 "compute_grade.m"
        MR_Word libs__compute_grade__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__HeadVar__1_1, (MR_Integer) 1)));
#line 484 "compute_grade.m"
        MR_Word libs__compute_grade__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__HeadVar__1_1, (MR_Integer) 0)));
#line 484 "compute_grade.m"
        MR_Word libs__compute_grade__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__V_10_10, (MR_Integer) 0)));

#line 484 "compute_grade.m"
        libs__compute_grade__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__V_10_10, (MR_Integer) 1)));
#line 489 "compute_grade.m"
        if ((libs__compute_grade__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "compute_grade.m"
          *libs__compute_grade__HeadVar__2_2 = libs__compute_grade__Bit_4;
#line 489 "compute_grade.m"
        else
#line 486 "compute_grade.m"
          {
#line 486 "compute_grade.m"
            MR_String libs__compute_grade__Grade0_9;
#line 486 "compute_grade.m"
            MR_Word libs__compute_grade__V_11_11;
#line 486 "compute_grade.m"
            MR_Word libs__compute_grade__V_12_12;
#line 486 "compute_grade.m"
            MR_Word libs__compute_grade__V_14_14;
#line 486 "compute_grade.m"
            MR_String libs__compute_grade__Bit_17;
#line 486 "compute_grade.m"
            MR_Word libs__compute_grade__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Bits_5, (MR_Integer) 1)));
#line 486 "compute_grade.m"
            MR_Word libs__compute_grade__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__compute_grade__Bits_5, (MR_Integer) 0)));
#line 484 "compute_grade.m"
            MR_Word libs__compute_grade__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__V_23_23, (MR_Integer) 0)));

#line 484 "compute_grade.m"
            libs__compute_grade__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__V_23_23, (MR_Integer) 1)));
#line 489 "compute_grade.m"
            if ((libs__compute_grade__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "compute_grade.m"
              libs__compute_grade__Grade0_9 = libs__compute_grade__Bit_17;
#line 489 "compute_grade.m"
            else
#line 486 "compute_grade.m"
              {
#line 486 "compute_grade.m"
                MR_String libs__compute_grade__Grade0_22;
#line 486 "compute_grade.m"
                MR_Word libs__compute_grade__V_24_24;
#line 486 "compute_grade.m"
                MR_Word libs__compute_grade__V_25_25;
#line 486 "compute_grade.m"
                MR_Word libs__compute_grade__V_27_27;

#line 487 "compute_grade.m"
                {
#line 487 "compute_grade.m"
                  libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Bits_18, &libs__compute_grade__Grade0_22);
                }
#line 488 "compute_grade.m"
                {
#line 488 "compute_grade.m"
                  libs__compute_grade__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_27_27, 0) = ((MR_Box) (libs__compute_grade__Grade0_22));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "compute_grade.m"
                }
#line 488 "compute_grade.m"
                {
#line 488 "compute_grade.m"
                  libs__compute_grade__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_25_25, 1) = ((MR_Box) (libs__compute_grade__V_27_27));
#line 488 "compute_grade.m"
                }
#line 488 "compute_grade.m"
                {
#line 488 "compute_grade.m"
                  libs__compute_grade__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_24_24, 0) = ((MR_Box) (libs__compute_grade__Bit_17));
#line 488 "compute_grade.m"
                  MR_hl_field(MR_mktag(1), libs__compute_grade__V_24_24, 1) = ((MR_Box) (libs__compute_grade__V_25_25));
#line 488 "compute_grade.m"
                }
#line 488 "compute_grade.m"
                {
#line 488 "compute_grade.m"
                  mercury__string__append_list_2_p_0(libs__compute_grade__V_24_24, &libs__compute_grade__Grade0_9);
                }
#line 486 "compute_grade.m"
              }
#line 488 "compute_grade.m"
            {
#line 488 "compute_grade.m"
              libs__compute_grade__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_14_14, 0) = ((MR_Box) (libs__compute_grade__Grade0_9));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "compute_grade.m"
            }
#line 488 "compute_grade.m"
            {
#line 488 "compute_grade.m"
              libs__compute_grade__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_12_12, 1) = ((MR_Box) (libs__compute_grade__V_14_14));
#line 488 "compute_grade.m"
            }
#line 488 "compute_grade.m"
            {
#line 488 "compute_grade.m"
              libs__compute_grade__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_11_11, 0) = ((MR_Box) (libs__compute_grade__Bit_4));
#line 488 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_11_11, 1) = ((MR_Box) (libs__compute_grade__V_12_12));
#line 488 "compute_grade.m"
            }
#line 488 "compute_grade.m"
            {
#line 488 "compute_grade.m"
              mercury__string__append_list_2_p_0(libs__compute_grade__V_11_11, libs__compute_grade__HeadVar__2_2);
            }
#line 486 "compute_grade.m"
          }
#line 484 "compute_grade.m"
      }
#line 483 "compute_grade.m"
  }
#line 480 "compute_grade.m"
}

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_1(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 338 "compute_grade.m"
{
#line 338 "compute_grade.m"
  {
#line 338 "compute_grade.m"
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 338 "compute_grade.m"
    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 338 "compute_grade.m"
  }
#line 338 "compute_grade.m"
}

#line 339 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_3(
#line 339 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 339 "compute_grade.m"
{
#line 339 "compute_grade.m"
  {
#line 339 "compute_grade.m"
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 339 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 339 "compute_grade.m"
    {
#line 339 "compute_grade.m"
      libs__compute_grade__must_not_contain_2_p_0_2(libs__compute_grade__env_ptr);
    }
#line 339 "compute_grade.m"
  }
#line 339 "compute_grade.m"
}

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_2(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 338 "compute_grade.m"
{
#line 338 "compute_grade.m"
  {
#line 338 "compute_grade.m"
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 340 "compute_grade.m"
    {
#line 340 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__Component_5)), (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 340 "compute_grade.m"
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded)
#line 340 "compute_grade.m"
      {
#line 340 "compute_grade.m"
        libs__compute_grade__must_not_contain_2_p_0_1(libs__compute_grade__env_ptr);
      }
#line 338 "compute_grade.m"
  }
#line 338 "compute_grade.m"
}

#line 338 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_not_contain_2_p_0_4(
#line 338 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 338 "compute_grade.m"
{
#line 338 "compute_grade.m"
  {
#line 338 "compute_grade.m"
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_not_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 338 "compute_grade.m"
    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 338 "compute_grade.m"
      {
#line 5160 "libs.compute_grade.c"
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 339 "compute_grade.m"
        {
#line 339 "compute_grade.m"
          mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__compute_grade__must_not_contain_2_p_0_3, libs__compute_grade__env_ptr);
        }
#line 338 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 338 "compute_grade.m"
      }
#line 338 "compute_grade.m"
    else
#line 338 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 338 "compute_grade.m"
  }
#line 338 "compute_grade.m"
}

#line 335 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__must_not_contain_2_p_0(
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__OmitComponents_3,
#line 335 "compute_grade.m"
  MR_Word libs__compute_grade__GradeComponents_4)
#line 335 "compute_grade.m"
{
#line 335 "compute_grade.m"
  {
#line 335 "compute_grade.m"
    struct libs__compute_grade__must_not_contain_2_p_0_env_0_s libs__compute_grade__env;

#line 335 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__compute_grade__OmitComponents_3;
#line 335 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__compute_grade__GradeComponents_4;
#line 338 "compute_grade.m"
    {
#line 338 "compute_grade.m"
      libs__compute_grade__must_not_contain_2_p_0_4(&libs__compute_grade__env);
    }
#line 338 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded);
#line 338 "compute_grade.m"
    return (libs__compute_grade__env).libs__compute_grade__must_not_contain_2_p_0_env_0__succeeded;
#line 335 "compute_grade.m"
  }
#line 335 "compute_grade.m"
}

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_1(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 329 "compute_grade.m"
{
#line 329 "compute_grade.m"
  {
#line 329 "compute_grade.m"
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 329 "compute_grade.m"
    MR_builtin_longjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0, 1);
#line 329 "compute_grade.m"
  }
#line 329 "compute_grade.m"
}

#line 330 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_3(
#line 330 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 330 "compute_grade.m"
{
#line 330 "compute_grade.m"
  {
#line 330 "compute_grade.m"
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 330 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5);
#line 330 "compute_grade.m"
    {
#line 330 "compute_grade.m"
      libs__compute_grade__must_contain_2_p_0_2(libs__compute_grade__env_ptr);
    }
#line 330 "compute_grade.m"
  }
#line 330 "compute_grade.m"
}

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_2(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 329 "compute_grade.m"
{
#line 329 "compute_grade.m"
  {
#line 329 "compute_grade.m"
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 332 "compute_grade.m"
    {
#line 332 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__Component_5)), (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 331 "compute_grade.m"
    (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
#line 331 "compute_grade.m"
    if ((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded)
#line 331 "compute_grade.m"
      {
#line 331 "compute_grade.m"
        libs__compute_grade__must_contain_2_p_0_1(libs__compute_grade__env_ptr);
      }
#line 329 "compute_grade.m"
  }
#line 329 "compute_grade.m"
}

#line 329 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__must_contain_2_p_0_4(
#line 329 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 329 "compute_grade.m"
{
#line 329 "compute_grade.m"
  {
#line 329 "compute_grade.m"
    struct libs__compute_grade__must_contain_2_p_0_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__must_contain_2_p_0_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 329 "compute_grade.m"
    if (MR_builtin_setjmp((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__commit_0) == 0)
#line 329 "compute_grade.m"
      {
#line 5302 "libs.compute_grade.c"
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 330 "compute_grade.m"
        {
#line 330 "compute_grade.m"
          mercury__list__member_2_p_1((libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__conv0_Component_5, (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3, libs__compute_grade__must_contain_2_p_0_3, libs__compute_grade__env_ptr);
        }
#line 329 "compute_grade.m"
        (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 329 "compute_grade.m"
      }
#line 329 "compute_grade.m"
    else
#line 329 "compute_grade.m"
      (libs__compute_grade__env_ptr)->libs__compute_grade__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 329 "compute_grade.m"
  }
#line 329 "compute_grade.m"
}

#line 326 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__must_contain_2_p_0(
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__IncludeComponents_3,
#line 326 "compute_grade.m"
  MR_Word libs__compute_grade__GradeComponents_4)
#line 326 "compute_grade.m"
{
#line 326 "compute_grade.m"
  {
#line 326 "compute_grade.m"
    struct libs__compute_grade__must_contain_2_p_0_env_0_s libs__compute_grade__env;

#line 326 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__compute_grade__IncludeComponents_3;
#line 326 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__GradeComponents_4 = libs__compute_grade__GradeComponents_4;
#line 329 "compute_grade.m"
    {
#line 329 "compute_grade.m"
      libs__compute_grade__must_contain_2_p_0_4(&libs__compute_grade__env);
    }
#line 329 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded = !((libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded);
#line 329 "compute_grade.m"
    return (libs__compute_grade__env).libs__compute_grade__must_contain_2_p_0_env_0__succeeded;
#line 326 "compute_grade.m"
  }
#line 326 "compute_grade.m"
}

#line 353 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__filter_grade_7_p_0_1(
#line 353 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 353 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 353 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_2)
#line 353 "compute_grade.m"
{
#line 353 "compute_grade.m"
  {
#line 353 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 353 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 353 "compute_grade.m"
    MR_String libs__compute_grade__conv0_LambdaHeadVar__2_21;

#line 353 "compute_grade.m"
    {
#line 353 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__IntroducedFrom__pred__grade_string_to_comp_strings__353__1_2_p_0(((MR_String) libs__compute_grade__wrapper_arg_1), &libs__compute_grade__conv0_LambdaHeadVar__2_21);
    }
#line 353 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 353 "compute_grade.m"
      {
#line 353 "compute_grade.m"
        *libs__compute_grade__wrapper_arg_2 = ((MR_Box) (libs__compute_grade__conv0_LambdaHeadVar__2_21));
#line 353 "compute_grade.m"
        libs__compute_grade__succeeded = MR_TRUE;
#line 353 "compute_grade.m"
      }
#line 353 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 353 "compute_grade.m"
  }
#line 353 "compute_grade.m"
}

#line 308 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__filter_grade_7_p_0(
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__FilterPred_8,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__CondComponents_9,
#line 308 "compute_grade.m"
  MR_String libs__compute_grade__GradeString_10,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Grades_0_15,
#line 308 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Grades_16,
#line 308 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_17,
#line 308 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_18)
#line 308 "compute_grade.m"
{
#line 5415 "libs.compute_grade.c"
  {
#line 5417 "libs.compute_grade.c"
    MR_bool libs__compute_grade__succeeded;
#line 5419 "libs.compute_grade.c"
    MR_Word libs__compute_grade__Components0_33;
#line 352 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_44_60;
#line 352 "compute_grade.m"
    MR_Word libs__compute_grade__ComponentStrs_26;
#line 352 "compute_grade.m"
    MR_Word libs__compute_grade__StrToComp_27;
#line 352 "compute_grade.m"
    MR_Word libs__compute_grade__Chars_64;

#line 822 "compute_grade.m"
    {
#line 822 "compute_grade.m"
      mercury__string__to_char_list_2_p_0(libs__compute_grade__GradeString_10, &libs__compute_grade__Chars_64);
    }
#line 823 "compute_grade.m"
    {
#line 823 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__Chars_64, &libs__compute_grade__ComponentStrs_26);
    }
#line 352 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 352 "compute_grade.m"
      {
#line 353 "compute_grade.m"
        libs__compute_grade__StrToComp_27 = (MR_Word) &libs__compute_grade_scalar_common_2[8];
#line 5446 "libs.compute_grade.c"
        libs__compute_grade__TypeCtorInfo_44_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 356 "compute_grade.m"
        {
#line 356 "compute_grade.m"
          libs__compute_grade__succeeded = mercury__list__map_3_p_2(libs__compute_grade__TypeCtorInfo_44_60, libs__compute_grade__TypeCtorInfo_44_60, libs__compute_grade__StrToComp_27, libs__compute_grade__ComponentStrs_26, &libs__compute_grade__Components0_33);
        }
#line 352 "compute_grade.m"
      }
#line 5455 "libs.compute_grade.c"
    if (libs__compute_grade__succeeded)
#line 5457 "libs.compute_grade.c"
      {
#line 5459 "libs.compute_grade.c"
        MR_Word libs__compute_grade__TypeCtorInfo_45_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5461 "libs.compute_grade.c"
        MR_Word libs__compute_grade__Components_34;
#line 359 "compute_grade.m"
        MR_Integer libs__compute_grade__V_38_38;
#line 359 "compute_grade.m"
        MR_Integer libs__compute_grade__V_39_39;

#line 358 "compute_grade.m"
        {
#line 358 "compute_grade.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components0_33, &libs__compute_grade__Components_34);
        }
#line 359 "compute_grade.m"
        {
#line 359 "compute_grade.m"
          libs__compute_grade__V_38_38 = mercury__list__length_1_f_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components0_33);
        }
#line 359 "compute_grade.m"
        {
#line 359 "compute_grade.m"
          libs__compute_grade__V_39_39 = mercury__list__length_1_f_0(libs__compute_grade__TypeCtorInfo_45_61, libs__compute_grade__Components_34);
        }
#line 359 "compute_grade.m"
        libs__compute_grade__succeeded = (libs__compute_grade__V_38_38 > libs__compute_grade__V_39_39);
#line 5485 "libs.compute_grade.c"
        if (libs__compute_grade__succeeded)
#line 5487 "libs.compute_grade.c"
          {
#line 5489 "libs.compute_grade.c"
            MR_Word libs__compute_grade__GradeSpec_35;
#line 5491 "libs.compute_grade.c"
            MR_Word libs__compute_grade__V_42_42;
#line 5493 "libs.compute_grade.c"
            MR_Word libs__compute_grade__V_43_43;

#line 361 "compute_grade.m"
            {
#line 361 "compute_grade.m"
              libs__compute_grade__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(3), libs__compute_grade__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(3), libs__compute_grade__V_43_43, 1) = ((MR_Box) (libs__compute_grade__GradeString_10));
#line 361 "compute_grade.m"
            }
#line 361 "compute_grade.m"
            {
#line 361 "compute_grade.m"
              libs__compute_grade__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_42_42, 0) = ((MR_Box) (libs__compute_grade__V_43_43));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])));
#line 361 "compute_grade.m"
            }
#line 361 "compute_grade.m"
            {
#line 361 "compute_grade.m"
              libs__compute_grade__GradeSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[200])));
#line 361 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_35, 1) = ((MR_Box) (libs__compute_grade__V_42_42));
#line 361 "compute_grade.m"
            }
#line 362 "compute_grade.m"
            {
#line 362 "compute_grade.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeSpec_35, libs__compute_grade__STATE_VARIABLE_Specs_0_17, libs__compute_grade__STATE_VARIABLE_Specs_18);
            }
#line 323 "compute_grade.m"
            *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
#line 5533 "libs.compute_grade.c"
          }
#line 5535 "libs.compute_grade.c"
        else
#line 5537 "libs.compute_grade.c"
          {
#line 317 "compute_grade.m"
            MR_bool MR_CALL (* libs__compute_grade__func_1)(MR_Box, MR_Box, MR_Box);

#line 365 "compute_grade.m"
            *libs__compute_grade__STATE_VARIABLE_Specs_18 = libs__compute_grade__STATE_VARIABLE_Specs_0_17;
#line 317 "compute_grade.m"
            libs__compute_grade__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__compute_grade__FilterPred_8, (MR_Integer) 1)));
#line 317 "compute_grade.m"
            {
#line 317 "compute_grade.m"
              libs__compute_grade__succeeded = libs__compute_grade__func_1(((MR_Box) libs__compute_grade__FilterPred_8), ((MR_Box) (libs__compute_grade__CondComponents_9)), ((MR_Box) (libs__compute_grade__Components_34)));
            }
#line 317 "compute_grade.m"
            if (libs__compute_grade__succeeded)
#line 318 "compute_grade.m"
              {
#line 318 "compute_grade.m"
                MR_Word base;
#line 318 "compute_grade.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "compute_grade.m"
                *libs__compute_grade__STATE_VARIABLE_Grades_16 = base;
#line 318 "compute_grade.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__GradeString_10));
#line 318 "compute_grade.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Grades_0_15));
#line 318 "compute_grade.m"
              }
#line 317 "compute_grade.m"
            else
#line 317 "compute_grade.m"
              *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
#line 5571 "libs.compute_grade.c"
          }
#line 5573 "libs.compute_grade.c"
      }
#line 5575 "libs.compute_grade.c"
    else
#line 5577 "libs.compute_grade.c"
      {
#line 5579 "libs.compute_grade.c"
        MR_Word libs__compute_grade__V_51_51;
#line 5581 "libs.compute_grade.c"
        MR_Word libs__compute_grade__V_52_52;
#line 5583 "libs.compute_grade.c"
        MR_Word libs__compute_grade__GradeSpec_59;

#line 369 "compute_grade.m"
        {
#line 369 "compute_grade.m"
          libs__compute_grade__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_52_52, 1) = ((MR_Box) (libs__compute_grade__GradeString_10));
#line 369 "compute_grade.m"
        }
#line 369 "compute_grade.m"
        {
#line 369 "compute_grade.m"
          libs__compute_grade__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_51_51, 0) = ((MR_Box) (libs__compute_grade__V_52_52));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[3])));
#line 369 "compute_grade.m"
        }
#line 369 "compute_grade.m"
        {
#line 369 "compute_grade.m"
          libs__compute_grade__GradeSpec_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[200])));
#line 369 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeSpec_59, 1) = ((MR_Box) (libs__compute_grade__V_51_51));
#line 369 "compute_grade.m"
        }
#line 370 "compute_grade.m"
        {
#line 370 "compute_grade.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeSpec_59, libs__compute_grade__STATE_VARIABLE_Specs_0_17, libs__compute_grade__STATE_VARIABLE_Specs_18);
        }
#line 323 "compute_grade.m"
        *libs__compute_grade__STATE_VARIABLE_Grades_16 = libs__compute_grade__STATE_VARIABLE_Grades_0_15;
#line 5623 "libs.compute_grade.c"
      }
#line 5625 "libs.compute_grade.c"
  }
#line 308 "compute_grade.m"
}

#line 283 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__string_to_grade_component_6_p_0(
#line 283 "compute_grade.m"
  MR_String libs__compute_grade__FilterDesc_7,
#line 283 "compute_grade.m"
  MR_String libs__compute_grade__Comp_8,
#line 283 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Comps_0_16,
#line 283 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Comps_17,
#line 283 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_18,
#line 283 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_19)
#line 283 "compute_grade.m"
{
#line 288 "compute_grade.m"
  {
#line 288 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 288 "compute_grade.m"
    MR_Word libs__compute_grade__V_11_11;
#line 288 "compute_grade.m"
    MR_Word libs__compute_grade__V_12_12;
#line 288 "compute_grade.m"
    MR_Word libs__compute_grade__V_13_13;
#line 288 "compute_grade.m"
    MR_Word libs__compute_grade__V_14_14;

#line 288 "compute_grade.m"
    {
#line 288 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__grade_component_table_5_p_0(libs__compute_grade__Comp_8, &libs__compute_grade__V_11_11, &libs__compute_grade__V_12_12, &libs__compute_grade__V_13_13, &libs__compute_grade__V_14_14);
    }
#line 288 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 289 "compute_grade.m"
      {
#line 289 "compute_grade.m"
        {
#line 289 "compute_grade.m"
          MR_Word base;
#line 289 "compute_grade.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "compute_grade.m"
          *libs__compute_grade__STATE_VARIABLE_Comps_17 = base;
#line 289 "compute_grade.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compute_grade__Comp_8));
#line 289 "compute_grade.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Comps_0_16));
#line 289 "compute_grade.m"
        }
#line 289 "compute_grade.m"
        *libs__compute_grade__STATE_VARIABLE_Specs_19 = libs__compute_grade__STATE_VARIABLE_Specs_0_18;
#line 289 "compute_grade.m"
      }
#line 288 "compute_grade.m"
    else
#line 293 "compute_grade.m"
      {
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__GradeCompSpec_15;
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__V_23_23;
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__V_24_24;
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__V_25_25;
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__V_28_28;
#line 293 "compute_grade.m"
        MR_Word libs__compute_grade__V_29_29;

#line 292 "compute_grade.m"
        {
#line 292 "compute_grade.m"
          libs__compute_grade__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_24_24, 1) = ((MR_Box) (libs__compute_grade__FilterDesc_7));
#line 292 "compute_grade.m"
        }
#line 293 "compute_grade.m"
        {
#line 293 "compute_grade.m"
          libs__compute_grade__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(3), libs__compute_grade__V_29_29, 1) = ((MR_Box) (libs__compute_grade__Comp_8));
#line 293 "compute_grade.m"
        }
#line 293 "compute_grade.m"
        {
#line 293 "compute_grade.m"
          libs__compute_grade__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_28_28, 0) = ((MR_Box) (libs__compute_grade__V_29_29));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 293 "compute_grade.m"
        }
#line 293 "compute_grade.m"
        {
#line 293 "compute_grade.m"
          libs__compute_grade__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[199])));
#line 293 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_25_25, 1) = ((MR_Box) (libs__compute_grade__V_28_28));
#line 293 "compute_grade.m"
        }
#line 292 "compute_grade.m"
        {
#line 292 "compute_grade.m"
          libs__compute_grade__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_23_23, 0) = ((MR_Box) (libs__compute_grade__V_24_24));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__V_23_23, 1) = ((MR_Box) (libs__compute_grade__V_25_25));
#line 292 "compute_grade.m"
        }
#line 292 "compute_grade.m"
        {
#line 292 "compute_grade.m"
          libs__compute_grade__GradeCompSpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeCompSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[198])));
#line 292 "compute_grade.m"
          MR_hl_field(MR_mktag(1), libs__compute_grade__GradeCompSpec_15, 1) = ((MR_Box) (libs__compute_grade__V_23_23));
#line 292 "compute_grade.m"
        }
#line 294 "compute_grade.m"
        {
#line 294 "compute_grade.m"
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__GradeCompSpec_15, libs__compute_grade__STATE_VARIABLE_Specs_0_18, libs__compute_grade__STATE_VARIABLE_Specs_19);
        }
#line 293 "compute_grade.m"
        *libs__compute_grade__STATE_VARIABLE_Comps_17 = libs__compute_grade__STATE_VARIABLE_Comps_0_16;
#line 293 "compute_grade.m"
      }
#line 288 "compute_grade.m"
  }
#line 283 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 498 "compute_grade.m"
    *((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      ((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
    }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0_2(
#line 498 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__grade_directory_component_2_p_0_2_env_0_s libs__compute_grade__env;

#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont = libs__compute_grade__cont;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 498 "compute_grade.m"
      {
#line 498 "compute_grade.m"
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), &(libs__compute_grade__env).libs__compute_grade__grade_directory_component_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__compute_grade__grade_directory_component_2_p_0_1, &libs__compute_grade__env);
      }
#line 498 "compute_grade.m"
    }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 65 "compute_grade.m"
void MR_CALL 
libs__compute_grade__grade_directory_component_2_p_0(
#line 65 "compute_grade.m"
  MR_Word libs__compute_grade__Globals_3,
#line 65 "compute_grade.m"
  MR_String * libs__compute_grade__Grade_4)
#line 65 "compute_grade.m"
{
#line 455 "compute_grade.m"
  {
#line 455 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 455 "compute_grade.m"
    MR_String libs__compute_grade__Grade0_5;
#line 455 "compute_grade.m"
    MR_Word libs__compute_grade__Options_14;
#line 455 "compute_grade.m"
    MR_Word libs__compute_grade__Components_15;
#line 455 "compute_grade.m"
    MR_Word libs__compute_grade__V_30_30;
#line 459 "compute_grade.m"
    MR_String libs__compute_grade__LeftPart_7;
#line 459 "compute_grade.m"
    MR_String libs__compute_grade__RightPart_9;
#line 460 "compute_grade.m"
    MR_Integer libs__compute_grade__PicRegIndex_6;
#line 460 "compute_grade.m"
    MR_String libs__compute_grade__RightPart0_8;
#line 460 "compute_grade.m"
    MR_String libs__compute_grade__V_11_11;

#line 470 "compute_grade.m"
    {
#line 470 "compute_grade.m"
      libs__globals__get_options_2_p_0(libs__compute_grade__Globals_3, &libs__compute_grade__Options_14);
    }
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      libs__compute_grade__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_30_30, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_6[1]));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_30_30, 1) = ((MR_Box) (libs__compute_grade__grade_directory_component_2_p_0_2));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_30_30, 3) = ((MR_Box) (libs__compute_grade__Options_14));
#line 498 "compute_grade.m"
    }
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[2], libs__compute_grade__V_30_30, &libs__compute_grade__Components_15);
    }
#line 475 "compute_grade.m"
    if ((libs__compute_grade__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "compute_grade.m"
      libs__compute_grade__Grade0_5 = (MR_String) "none";
#line 475 "compute_grade.m"
    else
#line 477 "compute_grade.m"
      {
#line 477 "compute_grade.m"
        libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Components_15, &libs__compute_grade__Grade0_5);
      }
#line 460 "compute_grade.m"
    {
#line 460 "compute_grade.m"
      libs__compute_grade__succeeded = mercury__string__sub_string_search_3_p_0(libs__compute_grade__Grade0_5, (MR_String) ".picreg", &libs__compute_grade__PicRegIndex_6);
    }
#line 460 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 460 "compute_grade.m"
      {
#line 461 "compute_grade.m"
        {
#line 461 "compute_grade.m"
          mercury__string__split_4_p_0(libs__compute_grade__Grade0_5, libs__compute_grade__PicRegIndex_6, &libs__compute_grade__LeftPart_7, &libs__compute_grade__RightPart0_8);
        }
#line 462 "compute_grade.m"
        libs__compute_grade__V_11_11 = (MR_String) ".picreg";
#line 462 "compute_grade.m"
        {
#line 462 "compute_grade.m"
          libs__compute_grade__succeeded = mercury__string__append_3_p_1(libs__compute_grade__V_11_11, &libs__compute_grade__RightPart_9, libs__compute_grade__RightPart0_8);
        }
#line 460 "compute_grade.m"
      }
#line 459 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 464 "compute_grade.m"
      {
#line 464 "compute_grade.m"
        *libs__compute_grade__Grade_4 = mercury__string__f_43_43_2_f_0(libs__compute_grade__LeftPart_7, libs__compute_grade__RightPart_9);
      }
#line 459 "compute_grade.m"
    else
#line 466 "compute_grade.m"
      *libs__compute_grade__Grade_4 = libs__compute_grade__Grade0_5;
#line 455 "compute_grade.m"
  }
#line 65 "compute_grade.m"
}

#line 425 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_4(
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 425 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 425 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 425 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5)
#line 425 "compute_grade.m"
{
#line 425 "compute_grade.m"
  {
#line 425 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 425 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__conv4_LambdaHeadVar__3_25;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade__conv3_LambdaHeadVar__5_27;

#line 425 "compute_grade.m"
    {
#line 425 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__IntroducedFrom__pred__convert_grade_option__425__1_5_p_0(((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv4_LambdaHeadVar__3_25, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv3_LambdaHeadVar__5_27);
    }
#line 425 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 425 "compute_grade.m"
      {
#line 425 "compute_grade.m"
        *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv4_LambdaHeadVar__3_25));
#line 425 "compute_grade.m"
        *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv3_LambdaHeadVar__5_27));
#line 425 "compute_grade.m"
        libs__compute_grade__succeeded = MR_TRUE;
#line 425 "compute_grade.m"
      }
#line 425 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 425 "compute_grade.m"
  }
#line 425 "compute_grade.m"
}

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_3(
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 780 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3)
#line 780 "compute_grade.m"
{
#line 780 "compute_grade.m"
  {
#line 780 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 780 "compute_grade.m"
    MR_Word libs__compute_grade__conv1_LambdaHeadVar__3_14;

#line 780 "compute_grade.m"
    {
#line 780 "compute_grade.m"
      libs__compute_grade__IntroducedFrom__pred__reset_grade_options__780__1_3_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv1_LambdaHeadVar__3_14);
    }
#line 780 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv1_LambdaHeadVar__3_14));
#line 780 "compute_grade.m"
  }
#line 780 "compute_grade.m"
}

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_1(
#line 780 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 780 "compute_grade.m"
{
#line 780 "compute_grade.m"
  {
#line 780 "compute_grade.m"
    struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 780 "compute_grade.m"
    *((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 780 "compute_grade.m"
    {
#line 780 "compute_grade.m"
      ((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
    }
#line 780 "compute_grade.m"
  }
#line 780 "compute_grade.m"
}

#line 780 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0_2(
#line 780 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 780 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 780 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 780 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 780 "compute_grade.m"
{
#line 780 "compute_grade.m"
  {
#line 780 "compute_grade.m"
    struct libs__compute_grade__convert_grade_option_3_p_0_2_env_0_s libs__compute_grade__env;

#line 780 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
#line 780 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont = libs__compute_grade__cont;
#line 780 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
#line 780 "compute_grade.m"
    {
#line 780 "compute_grade.m"
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 780 "compute_grade.m"
      {
#line 780 "compute_grade.m"
        libs__compute_grade__grade_start_values_1_p_0(&(libs__compute_grade__env).libs__compute_grade__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__compute_grade__convert_grade_option_3_p_0_1, &libs__compute_grade__env);
      }
#line 780 "compute_grade.m"
    }
#line 780 "compute_grade.m"
  }
#line 780 "compute_grade.m"
}

#line 60 "compute_grade.m"
MR_bool MR_CALL 
libs__compute_grade__convert_grade_option_3_p_0(
#line 60 "compute_grade.m"
  MR_String libs__compute_grade__GradeString_4,
#line 60 "compute_grade.m"
  MR_Word libs__compute_grade__Options0_5,
#line 60 "compute_grade.m"
  MR_Word * libs__compute_grade__Options_6)
#line 60 "compute_grade.m"
{
#line 421 "compute_grade.m"
  {
#line 421 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_39_39;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_42_42;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_43_43;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_44_44;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__Options1_7;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__Components_8;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__NoComps_9;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__V_22_22;
#line 421 "compute_grade.m"
    MR_Word libs__compute_grade__Chars_67;
#line 780 "compute_grade.m"
    MR_Box libs__compute_grade__conv2_Options1_7;
#line 425 "compute_grade.m"
    MR_Word libs__compute_grade___FinalComps_21;
#line 425 "compute_grade.m"
    MR_Box libs__compute_grade__conv6_Options_6;
#line 425 "compute_grade.m"
    MR_Box libs__compute_grade__conv5__FinalComps_21;

#line 780 "compute_grade.m"
    {
#line 780 "compute_grade.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__compute_grade_scalar_common_2[1], (MR_Word) &libs__compute_grade_scalar_common_2[0], (MR_Word) &libs__compute_grade_scalar_common_2[5], (MR_Word) &libs__compute_grade_scalar_common_2[6], ((MR_Box) (libs__compute_grade__Options0_5)), &libs__compute_grade__conv2_Options1_7);
    }
#line 780 "compute_grade.m"
    libs__compute_grade__Options1_7 = ((MR_Word) libs__compute_grade__conv2_Options1_7);
#line 822 "compute_grade.m"
    {
#line 822 "compute_grade.m"
      mercury__string__to_char_list_2_p_0(libs__compute_grade__GradeString_4, &libs__compute_grade__Chars_67);
    }
#line 823 "compute_grade.m"
    {
#line 823 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__split_grade_string_2_2_p_0(libs__compute_grade__Chars_67, &libs__compute_grade__Components_8);
    }
#line 421 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 421 "compute_grade.m"
      {
#line 6161 "libs.compute_grade.c"
        libs__compute_grade__TypeCtorInfo_39_39 = (MR_Word) &libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0;
#line 424 "compute_grade.m"
        {
#line 424 "compute_grade.m"
          mercury__set__init_1_p_0(libs__compute_grade__TypeCtorInfo_39_39, &libs__compute_grade__NoComps_9);
        }
#line 425 "compute_grade.m"
        libs__compute_grade__V_22_22 = (MR_Word) &libs__compute_grade_scalar_common_2[7];
#line 6170 "libs.compute_grade.c"
        libs__compute_grade__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 6172 "libs.compute_grade.c"
        libs__compute_grade__TypeInfo_43_43 = (MR_Word) &libs__compute_grade_scalar_common_2[0];
#line 6174 "libs.compute_grade.c"
        libs__compute_grade__TypeInfo_44_44 = (MR_Word) &libs__compute_grade_scalar_common_1[2];
#line 425 "compute_grade.m"
        {
#line 425 "compute_grade.m"
          libs__compute_grade__succeeded = mercury__list__foldl2_6_p_4(libs__compute_grade__TypeCtorInfo_42_42, libs__compute_grade__TypeInfo_43_43, libs__compute_grade__TypeInfo_44_44, libs__compute_grade__V_22_22, libs__compute_grade__Components_8, ((MR_Box) (libs__compute_grade__Options1_7)), &libs__compute_grade__conv6_Options_6, ((MR_Box) (libs__compute_grade__NoComps_9)), &libs__compute_grade__conv5__FinalComps_21);
        }
#line 425 "compute_grade.m"
        if (libs__compute_grade__succeeded)
#line 425 "compute_grade.m"
          {
#line 425 "compute_grade.m"
            *libs__compute_grade__Options_6 = ((MR_Word) libs__compute_grade__conv6_Options_6);
#line 425 "compute_grade.m"
            libs__compute_grade___FinalComps_21 = ((MR_Word) libs__compute_grade__conv5__FinalComps_21);
#line 425 "compute_grade.m"
            libs__compute_grade__succeeded = MR_TRUE;
#line 425 "compute_grade.m"
          }
#line 421 "compute_grade.m"
      }
#line 421 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 421 "compute_grade.m"
  }
#line 60 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_1(
#line 498 "compute_grade.m"
  void * libs__compute_grade__env_ptr_arg)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s * libs__compute_grade__env_ptr = (struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s *) libs__compute_grade__env_ptr_arg;

#line 498 "compute_grade.m"
    *((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      ((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont)((libs__compute_grade__env_ptr)->libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr);
    }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 498 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__compute_grade_2_p_0_2(
#line 498 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 498 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_1,
#line 498 "compute_grade.m"
  MR_Cont libs__compute_grade__cont,
#line 498 "compute_grade.m"
  void * libs__compute_grade__cont_env_ptr)
#line 498 "compute_grade.m"
{
#line 498 "compute_grade.m"
  {
#line 498 "compute_grade.m"
    struct libs__compute_grade__compute_grade_2_p_0_2_env_0_s libs__compute_grade__env;

#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__compute_grade__wrapper_arg_1;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont = libs__compute_grade__cont;
#line 498 "compute_grade.m"
    (libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__compute_grade__cont_env_ptr;
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 498 "compute_grade.m"
      {
#line 498 "compute_grade.m"
        libs__compute_grade__IntroducedFrom__pred__compute_grade_components__498__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), &(libs__compute_grade__env).libs__compute_grade__compute_grade_2_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__compute_grade__compute_grade_2_p_0_1, &libs__compute_grade__env);
      }
#line 498 "compute_grade.m"
    }
#line 498 "compute_grade.m"
  }
#line 498 "compute_grade.m"
}

#line 56 "compute_grade.m"
void MR_CALL 
libs__compute_grade__compute_grade_2_p_0(
#line 56 "compute_grade.m"
  MR_Word libs__compute_grade__Globals_3,
#line 56 "compute_grade.m"
  MR_String * libs__compute_grade__Grade_4)
#line 56 "compute_grade.m"
{
#line 469 "compute_grade.m"
  {
#line 469 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 469 "compute_grade.m"
    MR_Word libs__compute_grade__Options_5;
#line 469 "compute_grade.m"
    MR_Word libs__compute_grade__Components_6;
#line 469 "compute_grade.m"
    MR_Word libs__compute_grade__V_21_21;

#line 470 "compute_grade.m"
    {
#line 470 "compute_grade.m"
      libs__globals__get_options_2_p_0(libs__compute_grade__Globals_3, &libs__compute_grade__Options_5);
    }
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      libs__compute_grade__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_21_21, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_6[1]));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_21_21, 1) = ((MR_Box) (libs__compute_grade__compute_grade_2_p_0_2));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 498 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_21_21, 3) = ((MR_Box) (libs__compute_grade__Options_5));
#line 498 "compute_grade.m"
    }
#line 498 "compute_grade.m"
    {
#line 498 "compute_grade.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__compute_grade_scalar_common_2[2], libs__compute_grade__V_21_21, &libs__compute_grade__Components_6);
    }
#line 475 "compute_grade.m"
    if ((libs__compute_grade__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "compute_grade.m"
      *libs__compute_grade__Grade_4 = (MR_String) "none";
#line 475 "compute_grade.m"
    else
#line 477 "compute_grade.m"
      {
#line 477 "compute_grade.m"
        libs__compute_grade__construct_string_2_p_0(libs__compute_grade__Components_6, libs__compute_grade__Grade_4);
      }
#line 469 "compute_grade.m"
  }
#line 56 "compute_grade.m"
}

#line 271 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_6(
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 271 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 271 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5)
#line 271 "compute_grade.m"
{
#line 271 "compute_grade.m"
  {
#line 271 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 271 "compute_grade.m"
    MR_Word libs__compute_grade__conv13_STATE_VARIABLE_Grades_16;
#line 271 "compute_grade.m"
    MR_Word libs__compute_grade__conv12_STATE_VARIABLE_Specs_18;

#line 271 "compute_grade.m"
    {
#line 271 "compute_grade.m"
      libs__compute_grade__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 4))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv12_STATE_VARIABLE_Specs_18);
    }
#line 271 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv13_STATE_VARIABLE_Grades_16));
#line 271 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv12_STATE_VARIABLE_Specs_18));
#line 271 "compute_grade.m"
  }
#line 271 "compute_grade.m"
}

#line 271 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_5(
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 271 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2)
#line 271 "compute_grade.m"
{
#line 271 "compute_grade.m"
  {
#line 271 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 271 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 271 "compute_grade.m"
    {
#line 271 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__must_not_contain_2_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
#line 271 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 271 "compute_grade.m"
  }
#line 271 "compute_grade.m"
}

#line 269 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_4(
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 269 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 269 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5)
#line 269 "compute_grade.m"
{
#line 269 "compute_grade.m"
  {
#line 269 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 269 "compute_grade.m"
    MR_Word libs__compute_grade__conv9_STATE_VARIABLE_Grades_16;
#line 269 "compute_grade.m"
    MR_Word libs__compute_grade__conv8_STATE_VARIABLE_Specs_18;

#line 269 "compute_grade.m"
    {
#line 269 "compute_grade.m"
      libs__compute_grade__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 4))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv8_STATE_VARIABLE_Specs_18);
    }
#line 269 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv9_STATE_VARIABLE_Grades_16));
#line 269 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv8_STATE_VARIABLE_Specs_18));
#line 269 "compute_grade.m"
  }
#line 269 "compute_grade.m"
}

#line 269 "compute_grade.m"
static MR_bool MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_3(
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 269 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2)
#line 269 "compute_grade.m"
{
#line 269 "compute_grade.m"
  {
#line 269 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 269 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;

#line 269 "compute_grade.m"
    {
#line 269 "compute_grade.m"
      libs__compute_grade__succeeded = libs__compute_grade__must_contain_2_p_0(((MR_Word) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2));
    }
#line 269 "compute_grade.m"
    return libs__compute_grade__succeeded;
#line 269 "compute_grade.m"
  }
#line 269 "compute_grade.m"
}

#line 263 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_2(
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 263 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 263 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 263 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5)
#line 263 "compute_grade.m"
{
#line 263 "compute_grade.m"
  {
#line 263 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 263 "compute_grade.m"
    MR_Word libs__compute_grade__conv5_STATE_VARIABLE_Comps_17;
#line 263 "compute_grade.m"
    MR_Word libs__compute_grade__conv4_STATE_VARIABLE_Specs_19;

#line 263 "compute_grade.m"
    {
#line 263 "compute_grade.m"
      libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv5_STATE_VARIABLE_Comps_17, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv4_STATE_VARIABLE_Specs_19);
    }
#line 263 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv5_STATE_VARIABLE_Comps_17));
#line 263 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv4_STATE_VARIABLE_Specs_19));
#line 263 "compute_grade.m"
  }
#line 263 "compute_grade.m"
}

#line 261 "compute_grade.m"
static void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0_1(
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__closure_arg,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_1,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_2,
#line 261 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_3,
#line 261 "compute_grade.m"
  MR_Box libs__compute_grade__wrapper_arg_4,
#line 261 "compute_grade.m"
  MR_Box * libs__compute_grade__wrapper_arg_5)
#line 261 "compute_grade.m"
{
#line 261 "compute_grade.m"
  {
#line 261 "compute_grade.m"
    MR_Box libs__compute_grade__closure = libs__compute_grade__closure_arg;
#line 261 "compute_grade.m"
    MR_Word libs__compute_grade__conv1_STATE_VARIABLE_Comps_17;
#line 261 "compute_grade.m"
    MR_Word libs__compute_grade__conv0_STATE_VARIABLE_Specs_19;

#line 261 "compute_grade.m"
    {
#line 261 "compute_grade.m"
      libs__compute_grade__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__compute_grade__closure, (MR_Integer) 3))), ((MR_String) libs__compute_grade__wrapper_arg_1), ((MR_Word) libs__compute_grade__wrapper_arg_2), &libs__compute_grade__conv1_STATE_VARIABLE_Comps_17, ((MR_Word) libs__compute_grade__wrapper_arg_4), &libs__compute_grade__conv0_STATE_VARIABLE_Specs_19);
    }
#line 261 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_3 = ((MR_Box) (libs__compute_grade__conv1_STATE_VARIABLE_Comps_17));
#line 261 "compute_grade.m"
    *libs__compute_grade__wrapper_arg_5 = ((MR_Box) (libs__compute_grade__conv0_STATE_VARIABLE_Specs_19));
#line 261 "compute_grade.m"
  }
#line 261 "compute_grade.m"
}

#line 51 "compute_grade.m"
void MR_CALL 
libs__compute_grade__postprocess_options_libgrades_4_p_0(
#line 51 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Globals_0_12,
#line 51 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Globals_13,
#line 51 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_14,
#line 51 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_15)
#line 51 "compute_grade.m"
{
#line 256 "compute_grade.m"
  {
#line 256 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__TypeCtorInfo_46_46;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_47_47;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__TypeInfo_48_48;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__IncludeComponentStrs_7;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__OmitComponentStrs_8;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__IncludeComponents_9;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__OmitComponents_10;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_20_20;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_24_24;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_27_27;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__V_28_28;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_30_30;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_31_31;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__V_33_33;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_LibGrades_35_35;
#line 256 "compute_grade.m"
    MR_Word libs__compute_grade__V_39_39;
#line 261 "compute_grade.m"
    MR_Box libs__compute_grade__conv3_IncludeComponents_9;
#line 261 "compute_grade.m"
    MR_Box libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20;
#line 263 "compute_grade.m"
    MR_Box libs__compute_grade__conv7_OmitComponents_10;
#line 263 "compute_grade.m"
    MR_Box libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24;
#line 269 "compute_grade.m"
    MR_Box libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 269 "compute_grade.m"
    MR_Box libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31;
#line 271 "compute_grade.m"
    MR_Box libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 271 "compute_grade.m"
    MR_Box libs__compute_grade__conv14_STATE_VARIABLE_Specs_15;

#line 257 "compute_grade.m"
    {
#line 257 "compute_grade.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 626, &libs__compute_grade__IncludeComponentStrs_7);
    }
#line 259 "compute_grade.m"
    {
#line 259 "compute_grade.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 627, &libs__compute_grade__OmitComponentStrs_8);
    }
#line 6623 "libs.compute_grade.c"
    libs__compute_grade__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 6625 "libs.compute_grade.c"
    libs__compute_grade__TypeInfo_47_47 = (MR_Word) &libs__compute_grade_scalar_common_1[0];
#line 6627 "libs.compute_grade.c"
    libs__compute_grade__TypeInfo_48_48 = (MR_Word) &libs__compute_grade_scalar_common_1[1];
#line 261 "compute_grade.m"
    {
#line 261 "compute_grade.m"
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, (MR_Word) &libs__compute_grade_scalar_common_5[0], libs__compute_grade__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv3_IncludeComponents_9, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_0_14)), &libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20);
    }
#line 261 "compute_grade.m"
    libs__compute_grade__IncludeComponents_9 = ((MR_Word) libs__compute_grade__conv3_IncludeComponents_9);
#line 261 "compute_grade.m"
    libs__compute_grade__STATE_VARIABLE_Specs_20_20 = ((MR_Word) libs__compute_grade__conv2_STATE_VARIABLE_Specs_20_20);
#line 263 "compute_grade.m"
    {
#line 263 "compute_grade.m"
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, (MR_Word) &libs__compute_grade_scalar_common_5[1], libs__compute_grade__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv7_OmitComponents_10, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_20_20)), &libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24);
    }
#line 263 "compute_grade.m"
    libs__compute_grade__OmitComponents_10 = ((MR_Word) libs__compute_grade__conv7_OmitComponents_10);
#line 263 "compute_grade.m"
    libs__compute_grade__STATE_VARIABLE_Specs_24_24 = ((MR_Word) libs__compute_grade__conv6_STATE_VARIABLE_Specs_24_24);
#line 266 "compute_grade.m"
    {
#line 266 "compute_grade.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__compute_grade__STATE_VARIABLE_Globals_0_12, (MR_Integer) 625, &libs__compute_grade__STATE_VARIABLE_LibGrades_27_27);
    }
#line 269 "compute_grade.m"
    {
#line 269 "compute_grade.m"
      libs__compute_grade__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 269 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_28_28, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
#line 269 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_28_28, 1) = ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_4));
#line 269 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 269 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_28_28, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[3]));
#line 269 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_28_28, 4) = ((MR_Box) (libs__compute_grade__IncludeComponents_9));
#line 269 "compute_grade.m"
    }
#line 269 "compute_grade.m"
    {
#line 269 "compute_grade.m"
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, libs__compute_grade__V_28_28, libs__compute_grade__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_24_24)), &libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31);
    }
#line 269 "compute_grade.m"
    libs__compute_grade__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__compute_grade__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 269 "compute_grade.m"
    libs__compute_grade__STATE_VARIABLE_Specs_31_31 = ((MR_Word) libs__compute_grade__conv10_STATE_VARIABLE_Specs_31_31);
#line 271 "compute_grade.m"
    {
#line 271 "compute_grade.m"
      libs__compute_grade__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 271 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_33_33, 0) = ((MR_Box) (&libs__compute_grade_scalar_common_7[0]));
#line 271 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_33_33, 1) = ((MR_Box) (libs__compute_grade__postprocess_options_libgrades_4_p_0_6));
#line 271 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 271 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_33_33, 3) = ((MR_Box) (&libs__compute_grade_scalar_common_2[4]));
#line 271 "compute_grade.m"
      MR_hl_field(MR_mktag(0), libs__compute_grade__V_33_33, 4) = ((MR_Box) (libs__compute_grade__OmitComponents_10));
#line 271 "compute_grade.m"
    }
#line 271 "compute_grade.m"
    {
#line 271 "compute_grade.m"
      mercury__list__foldl2_6_p_0(libs__compute_grade__TypeCtorInfo_46_46, libs__compute_grade__TypeInfo_47_47, libs__compute_grade__TypeInfo_48_48, libs__compute_grade__V_33_33, libs__compute_grade__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__compute_grade__STATE_VARIABLE_Specs_31_31)), &libs__compute_grade__conv14_STATE_VARIABLE_Specs_15);
    }
#line 271 "compute_grade.m"
    libs__compute_grade__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__compute_grade__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 271 "compute_grade.m"
    *libs__compute_grade__STATE_VARIABLE_Specs_15 = ((MR_Word) libs__compute_grade__conv14_STATE_VARIABLE_Specs_15);
#line 273 "compute_grade.m"
    {
#line 273 "compute_grade.m"
      libs__compute_grade__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "compute_grade.m"
      MR_hl_field(MR_mktag(3), libs__compute_grade__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 273 "compute_grade.m"
      MR_hl_field(MR_mktag(3), libs__compute_grade__V_39_39, 1) = ((MR_Box) (libs__compute_grade__STATE_VARIABLE_LibGrades_35_35));
#line 273 "compute_grade.m"
    }
#line 273 "compute_grade.m"
    {
#line 273 "compute_grade.m"
      libs__globals__set_option_4_p_0((MR_Integer) 625, libs__compute_grade__V_39_39, libs__compute_grade__STATE_VARIABLE_Globals_0_12, libs__compute_grade__STATE_VARIABLE_Globals_13);
    }
#line 256 "compute_grade.m"
  }
#line 51 "compute_grade.m"
}

#line 40 "compute_grade.m"
void MR_CALL 
libs__compute_grade__check_grade_component_compatibility_5_p_0(
#line 40 "compute_grade.m"
  MR_Word libs__compute_grade__Globals_6,
#line 40 "compute_grade.m"
  MR_Word libs__compute_grade__Target_7,
#line 40 "compute_grade.m"
  MR_Word libs__compute_grade__GC_Method_8,
#line 40 "compute_grade.m"
  MR_Word libs__compute_grade__STATE_VARIABLE_Specs_0_26,
#line 40 "compute_grade.m"
  MR_Word * libs__compute_grade__STATE_VARIABLE_Specs_27)
#line 40 "compute_grade.m"
{
#line 87 "compute_grade.m"
  {
#line 87 "compute_grade.m"
    MR_bool libs__compute_grade__succeeded;
#line 87 "compute_grade.m"
    MR_String libs__compute_grade__TargetStr_10;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__ProfileTime_14;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__ProfileMemory_16;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__UseTrail_18;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__TrailSegments_19;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__StackSegments_21;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__SinglePrecFloat_24;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_72_72;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_88_88;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_104_104;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_121_121;
#line 87 "compute_grade.m"
    MR_Word libs__compute_grade__STATE_VARIABLE_Specs_148_148;

#line 88 "compute_grade.m"
    {
#line 88 "compute_grade.m"
      libs__compute_grade__TargetStr_10 = libs__globals__compilation_target_string_1_f_0(libs__compute_grade__Target_7);
    }
#line 95 "compute_grade.m"
#line 95 "compute_grade.m"
    switch (libs__compute_grade__Target_7) {
#line 95 "compute_grade.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 95 "compute_grade.m"
      case (MR_Integer) 0:
#line 93 "compute_grade.m"
        libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
#line 95 "compute_grade.m"
        break;
#line 95 "compute_grade.m"
      case (MR_Integer) 1:
#line 95 "compute_grade.m"
      case (MR_Integer) 3:
#line 95 "compute_grade.m"
      case (MR_Integer) 2:
#line 106 "compute_grade.m"
#line 106 "compute_grade.m"
        switch (libs__compute_grade__GC_Method_8) {
#line 106 "compute_grade.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 106 "compute_grade.m"
          case (MR_Integer) 5:
#line 121 "compute_grade.m"
            {
#line 121 "compute_grade.m"
              MR_Word libs__compute_grade__AGCSpec_13;
#line 121 "compute_grade.m"
              MR_Word libs__compute_grade__V_30_30;
#line 121 "compute_grade.m"
              MR_Word libs__compute_grade__V_33_33;
#line 121 "compute_grade.m"
              MR_Word libs__compute_grade__V_34_34;

#line 124 "compute_grade.m"
              {
#line 124 "compute_grade.m"
                libs__compute_grade__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_34_34, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 124 "compute_grade.m"
              }
#line 124 "compute_grade.m"
              {
#line 124 "compute_grade.m"
                libs__compute_grade__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_33_33, 0) = ((MR_Box) (libs__compute_grade__V_34_34));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 124 "compute_grade.m"
              }
#line 124 "compute_grade.m"
              {
#line 124 "compute_grade.m"
                libs__compute_grade__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 124 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_30_30, 1) = ((MR_Box) (libs__compute_grade__V_33_33));
#line 124 "compute_grade.m"
              }
#line 123 "compute_grade.m"
              {
#line 123 "compute_grade.m"
                libs__compute_grade__AGCSpec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__AGCSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[189])));
#line 123 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__AGCSpec_13, 1) = ((MR_Box) (libs__compute_grade__V_30_30));
#line 123 "compute_grade.m"
              }
#line 125 "compute_grade.m"
              {
#line 125 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__AGCSpec_13, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
#line 121 "compute_grade.m"
            }
#line 106 "compute_grade.m"
            break;
#line 106 "compute_grade.m"
          case (MR_Integer) 0:
#line 103 "compute_grade.m"
            libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
#line 106 "compute_grade.m"
            break;
#line 106 "compute_grade.m"
          case (MR_Integer) 2:
#line 106 "compute_grade.m"
          case (MR_Integer) 3:
#line 109 "compute_grade.m"
            {
#line 109 "compute_grade.m"
              MR_Word libs__compute_grade__BoehmSpec_11;
#line 109 "compute_grade.m"
              MR_Word libs__compute_grade__V_60_60;
#line 109 "compute_grade.m"
              MR_Word libs__compute_grade__V_63_63;
#line 109 "compute_grade.m"
              MR_Word libs__compute_grade__V_64_64;

#line 112 "compute_grade.m"
              {
#line 112 "compute_grade.m"
                libs__compute_grade__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_64_64, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 112 "compute_grade.m"
              }
#line 112 "compute_grade.m"
              {
#line 112 "compute_grade.m"
                libs__compute_grade__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_63_63, 0) = ((MR_Box) (libs__compute_grade__V_64_64));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 112 "compute_grade.m"
              }
#line 112 "compute_grade.m"
              {
#line 112 "compute_grade.m"
                libs__compute_grade__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 112 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_60_60, 1) = ((MR_Box) (libs__compute_grade__V_63_63));
#line 112 "compute_grade.m"
              }
#line 111 "compute_grade.m"
              {
#line 111 "compute_grade.m"
                libs__compute_grade__BoehmSpec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__BoehmSpec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[191])));
#line 111 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__BoehmSpec_11, 1) = ((MR_Box) (libs__compute_grade__V_60_60));
#line 111 "compute_grade.m"
              }
#line 113 "compute_grade.m"
              {
#line 113 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__BoehmSpec_11, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
#line 109 "compute_grade.m"
            }
#line 106 "compute_grade.m"
            break;
#line 106 "compute_grade.m"
          case (MR_Integer) 4:
#line 115 "compute_grade.m"
            {
#line 115 "compute_grade.m"
              MR_Word libs__compute_grade__HGCSpec_12;
#line 115 "compute_grade.m"
              MR_Word libs__compute_grade__V_45_45;
#line 115 "compute_grade.m"
              MR_Word libs__compute_grade__V_48_48;
#line 115 "compute_grade.m"
              MR_Word libs__compute_grade__V_49_49;

#line 118 "compute_grade.m"
              {
#line 118 "compute_grade.m"
                libs__compute_grade__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_49_49, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 118 "compute_grade.m"
              }
#line 118 "compute_grade.m"
              {
#line 118 "compute_grade.m"
                libs__compute_grade__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_48_48, 0) = ((MR_Box) (libs__compute_grade__V_49_49));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 118 "compute_grade.m"
              }
#line 118 "compute_grade.m"
              {
#line 118 "compute_grade.m"
                libs__compute_grade__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 118 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_45_45, 1) = ((MR_Box) (libs__compute_grade__V_48_48));
#line 118 "compute_grade.m"
              }
#line 117 "compute_grade.m"
              {
#line 117 "compute_grade.m"
                libs__compute_grade__HGCSpec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__HGCSpec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[192])));
#line 117 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__HGCSpec_12, 1) = ((MR_Box) (libs__compute_grade__V_45_45));
#line 117 "compute_grade.m"
              }
#line 119 "compute_grade.m"
              {
#line 119 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__HGCSpec_12, libs__compute_grade__STATE_VARIABLE_Specs_0_26, &libs__compute_grade__STATE_VARIABLE_Specs_72_72);
              }
#line 115 "compute_grade.m"
            }
#line 106 "compute_grade.m"
            break;
#line 106 "compute_grade.m"
          case (MR_Integer) 1:
#line 104 "compute_grade.m"
            libs__compute_grade__STATE_VARIABLE_Specs_72_72 = libs__compute_grade__STATE_VARIABLE_Specs_0_26;
#line 106 "compute_grade.m"
            break;
#line 106 "compute_grade.m"
        }
#line 95 "compute_grade.m"
        break;
#line 95 "compute_grade.m"
    }
#line 131 "compute_grade.m"
    {
#line 131 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 191, &libs__compute_grade__ProfileTime_14);
    }
#line 146 "compute_grade.m"
#line 146 "compute_grade.m"
    switch (libs__compute_grade__ProfileTime_14) {
#line 146 "compute_grade.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 146 "compute_grade.m"
      case (MR_Integer) 0:
#line 147 "compute_grade.m"
        libs__compute_grade__STATE_VARIABLE_Specs_88_88 = libs__compute_grade__STATE_VARIABLE_Specs_72_72;
#line 146 "compute_grade.m"
        break;
#line 146 "compute_grade.m"
      case (MR_Integer) 1:
#line 143 "compute_grade.m"
#line 143 "compute_grade.m"
        switch (libs__compute_grade__Target_7) {
#line 143 "compute_grade.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 143 "compute_grade.m"
          case (MR_Integer) 0:
#line 144 "compute_grade.m"
            libs__compute_grade__STATE_VARIABLE_Specs_88_88 = libs__compute_grade__STATE_VARIABLE_Specs_72_72;
#line 143 "compute_grade.m"
            break;
#line 143 "compute_grade.m"
          case (MR_Integer) 1:
#line 143 "compute_grade.m"
          case (MR_Integer) 3:
#line 143 "compute_grade.m"
          case (MR_Integer) 2:
#line 138 "compute_grade.m"
            {
#line 138 "compute_grade.m"
              MR_Word libs__compute_grade__TimeProfpec_15;
#line 138 "compute_grade.m"
              MR_Word libs__compute_grade__V_76_76;
#line 138 "compute_grade.m"
              MR_Word libs__compute_grade__V_79_79;
#line 138 "compute_grade.m"
              MR_Word libs__compute_grade__V_80_80;

#line 141 "compute_grade.m"
              {
#line 141 "compute_grade.m"
                libs__compute_grade__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_80_80, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 141 "compute_grade.m"
              }
#line 141 "compute_grade.m"
              {
#line 141 "compute_grade.m"
                libs__compute_grade__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_79_79, 0) = ((MR_Box) (libs__compute_grade__V_80_80));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 141 "compute_grade.m"
              }
#line 141 "compute_grade.m"
              {
#line 141 "compute_grade.m"
                libs__compute_grade__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 141 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_76_76, 1) = ((MR_Box) (libs__compute_grade__V_79_79));
#line 141 "compute_grade.m"
              }
#line 140 "compute_grade.m"
              {
#line 140 "compute_grade.m"
                libs__compute_grade__TimeProfpec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__TimeProfpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[193])));
#line 140 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__TimeProfpec_15, 1) = ((MR_Box) (libs__compute_grade__V_76_76));
#line 140 "compute_grade.m"
              }
#line 142 "compute_grade.m"
              {
#line 142 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__TimeProfpec_15, libs__compute_grade__STATE_VARIABLE_Specs_72_72, &libs__compute_grade__STATE_VARIABLE_Specs_88_88);
              }
#line 138 "compute_grade.m"
            }
#line 143 "compute_grade.m"
            break;
#line 143 "compute_grade.m"
        }
#line 146 "compute_grade.m"
        break;
#line 146 "compute_grade.m"
    }
#line 152 "compute_grade.m"
    {
#line 152 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 192, &libs__compute_grade__ProfileMemory_16);
    }
#line 167 "compute_grade.m"
#line 167 "compute_grade.m"
    switch (libs__compute_grade__ProfileMemory_16) {
#line 167 "compute_grade.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 167 "compute_grade.m"
      case (MR_Integer) 0:
#line 168 "compute_grade.m"
        libs__compute_grade__STATE_VARIABLE_Specs_104_104 = libs__compute_grade__STATE_VARIABLE_Specs_88_88;
#line 167 "compute_grade.m"
        break;
#line 167 "compute_grade.m"
      case (MR_Integer) 1:
#line 164 "compute_grade.m"
#line 164 "compute_grade.m"
        switch (libs__compute_grade__Target_7) {
#line 164 "compute_grade.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 164 "compute_grade.m"
          case (MR_Integer) 0:
#line 165 "compute_grade.m"
            libs__compute_grade__STATE_VARIABLE_Specs_104_104 = libs__compute_grade__STATE_VARIABLE_Specs_88_88;
#line 164 "compute_grade.m"
            break;
#line 164 "compute_grade.m"
          case (MR_Integer) 1:
#line 164 "compute_grade.m"
          case (MR_Integer) 3:
#line 164 "compute_grade.m"
          case (MR_Integer) 2:
#line 159 "compute_grade.m"
            {
#line 159 "compute_grade.m"
              MR_Word libs__compute_grade__MemProfpec_17;
#line 159 "compute_grade.m"
              MR_Word libs__compute_grade__V_92_92;
#line 159 "compute_grade.m"
              MR_Word libs__compute_grade__V_95_95;
#line 159 "compute_grade.m"
              MR_Word libs__compute_grade__V_96_96;

#line 162 "compute_grade.m"
              {
#line 162 "compute_grade.m"
                libs__compute_grade__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_96_96, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 162 "compute_grade.m"
              }
#line 162 "compute_grade.m"
              {
#line 162 "compute_grade.m"
                libs__compute_grade__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_95_95, 0) = ((MR_Box) (libs__compute_grade__V_96_96));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 162 "compute_grade.m"
              }
#line 162 "compute_grade.m"
              {
#line 162 "compute_grade.m"
                libs__compute_grade__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_92_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 162 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_92_92, 1) = ((MR_Box) (libs__compute_grade__V_95_95));
#line 162 "compute_grade.m"
              }
#line 161 "compute_grade.m"
              {
#line 161 "compute_grade.m"
                libs__compute_grade__MemProfpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__MemProfpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[194])));
#line 161 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__MemProfpec_17, 1) = ((MR_Box) (libs__compute_grade__V_92_92));
#line 161 "compute_grade.m"
              }
#line 163 "compute_grade.m"
              {
#line 163 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__MemProfpec_17, libs__compute_grade__STATE_VARIABLE_Specs_88_88, &libs__compute_grade__STATE_VARIABLE_Specs_104_104);
              }
#line 159 "compute_grade.m"
            }
#line 164 "compute_grade.m"
            break;
#line 164 "compute_grade.m"
        }
#line 167 "compute_grade.m"
        break;
#line 167 "compute_grade.m"
    }
#line 177 "compute_grade.m"
    {
#line 177 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 216, &libs__compute_grade__UseTrail_18);
    }
#line 178 "compute_grade.m"
    {
#line 178 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 217, &libs__compute_grade__TrailSegments_19);
    }
#line 182 "compute_grade.m"
    libs__compute_grade__succeeded = (libs__compute_grade__UseTrail_18 == (MR_Integer) 1);
#line 183 "compute_grade.m"
    if (!(libs__compute_grade__succeeded))
#line 183 "compute_grade.m"
      libs__compute_grade__succeeded = (libs__compute_grade__TrailSegments_19 == (MR_Integer) 1);
#line 179 "compute_grade.m"
    if (libs__compute_grade__succeeded)
#line 195 "compute_grade.m"
#line 195 "compute_grade.m"
      switch (libs__compute_grade__Target_7) {
#line 195 "compute_grade.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 195 "compute_grade.m"
        case (MR_Integer) 0:
#line 196 "compute_grade.m"
          libs__compute_grade__STATE_VARIABLE_Specs_121_121 = libs__compute_grade__STATE_VARIABLE_Specs_104_104;
#line 195 "compute_grade.m"
          break;
#line 195 "compute_grade.m"
        case (MR_Integer) 1:
#line 195 "compute_grade.m"
        case (MR_Integer) 3:
#line 195 "compute_grade.m"
        case (MR_Integer) 2:
#line 190 "compute_grade.m"
          {
#line 190 "compute_grade.m"
            MR_Word libs__compute_grade__Trailpec_20;
#line 190 "compute_grade.m"
            MR_Word libs__compute_grade__V_109_109;
#line 190 "compute_grade.m"
            MR_Word libs__compute_grade__V_112_112;
#line 190 "compute_grade.m"
            MR_Word libs__compute_grade__V_113_113;

#line 193 "compute_grade.m"
            {
#line 193 "compute_grade.m"
              libs__compute_grade__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(3), libs__compute_grade__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(3), libs__compute_grade__V_113_113, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 193 "compute_grade.m"
            }
#line 193 "compute_grade.m"
            {
#line 193 "compute_grade.m"
              libs__compute_grade__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_112_112, 0) = ((MR_Box) (libs__compute_grade__V_113_113));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 193 "compute_grade.m"
            }
#line 193 "compute_grade.m"
            {
#line 193 "compute_grade.m"
              libs__compute_grade__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 193 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__V_109_109, 1) = ((MR_Box) (libs__compute_grade__V_112_112));
#line 193 "compute_grade.m"
            }
#line 192 "compute_grade.m"
            {
#line 192 "compute_grade.m"
              libs__compute_grade__Trailpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__Trailpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[195])));
#line 192 "compute_grade.m"
              MR_hl_field(MR_mktag(1), libs__compute_grade__Trailpec_20, 1) = ((MR_Box) (libs__compute_grade__V_109_109));
#line 192 "compute_grade.m"
            }
#line 194 "compute_grade.m"
            {
#line 194 "compute_grade.m"
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__Trailpec_20, libs__compute_grade__STATE_VARIABLE_Specs_104_104, &libs__compute_grade__STATE_VARIABLE_Specs_121_121);
            }
#line 190 "compute_grade.m"
          }
#line 195 "compute_grade.m"
          break;
#line 195 "compute_grade.m"
      }
#line 179 "compute_grade.m"
    else
#line 179 "compute_grade.m"
      libs__compute_grade__STATE_VARIABLE_Specs_121_121 = libs__compute_grade__STATE_VARIABLE_Specs_104_104;
#line 204 "compute_grade.m"
    {
#line 204 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 226, &libs__compute_grade__StackSegments_21);
    }
#line 229 "compute_grade.m"
#line 229 "compute_grade.m"
    switch (libs__compute_grade__StackSegments_21) {
#line 229 "compute_grade.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 229 "compute_grade.m"
      case (MR_Integer) 0:
#line 230 "compute_grade.m"
        libs__compute_grade__STATE_VARIABLE_Specs_148_148 = libs__compute_grade__STATE_VARIABLE_Specs_121_121;
#line 229 "compute_grade.m"
        break;
#line 229 "compute_grade.m"
      case (MR_Integer) 1:
#line 219 "compute_grade.m"
#line 219 "compute_grade.m"
        switch (libs__compute_grade__Target_7) {
#line 219 "compute_grade.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 219 "compute_grade.m"
          case (MR_Integer) 0:
#line 208 "compute_grade.m"
            {
#line 208 "compute_grade.m"
              MR_Word libs__compute_grade__HighLevelCode_22;

#line 209 "compute_grade.m"
              {
#line 209 "compute_grade.m"
                libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 252, &libs__compute_grade__HighLevelCode_22);
              }
#line 216 "compute_grade.m"
#line 216 "compute_grade.m"
              switch (libs__compute_grade__HighLevelCode_22) {
#line 216 "compute_grade.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 216 "compute_grade.m"
                case (MR_Integer) 0:
#line 217 "compute_grade.m"
                  libs__compute_grade__STATE_VARIABLE_Specs_148_148 = libs__compute_grade__STATE_VARIABLE_Specs_121_121;
#line 216 "compute_grade.m"
                  break;
#line 216 "compute_grade.m"
                case (MR_Integer) 1:
#line 211 "compute_grade.m"
                  {
#line 215 "compute_grade.m"
                    {
#line 215 "compute_grade.m"
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[9]), libs__compute_grade__STATE_VARIABLE_Specs_121_121, &libs__compute_grade__STATE_VARIABLE_Specs_148_148);
                    }
#line 211 "compute_grade.m"
                  }
#line 216 "compute_grade.m"
                  break;
#line 216 "compute_grade.m"
              }
#line 208 "compute_grade.m"
            }
#line 219 "compute_grade.m"
            break;
#line 219 "compute_grade.m"
          case (MR_Integer) 1:
#line 219 "compute_grade.m"
          case (MR_Integer) 3:
#line 219 "compute_grade.m"
          case (MR_Integer) 2:
#line 223 "compute_grade.m"
            {
#line 223 "compute_grade.m"
              MR_Word libs__compute_grade__V_125_125;
#line 223 "compute_grade.m"
              MR_Word libs__compute_grade__V_128_128;
#line 223 "compute_grade.m"
              MR_Word libs__compute_grade__V_129_129;
#line 223 "compute_grade.m"
              MR_Word libs__compute_grade__StackSegmentpec_165;

#line 226 "compute_grade.m"
              {
#line 226 "compute_grade.m"
                libs__compute_grade__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_129_129, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 226 "compute_grade.m"
              }
#line 226 "compute_grade.m"
              {
#line 226 "compute_grade.m"
                libs__compute_grade__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_128_128, 0) = ((MR_Box) (libs__compute_grade__V_129_129));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 226 "compute_grade.m"
              }
#line 226 "compute_grade.m"
              {
#line 226 "compute_grade.m"
                libs__compute_grade__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 226 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_125_125, 1) = ((MR_Box) (libs__compute_grade__V_128_128));
#line 226 "compute_grade.m"
              }
#line 225 "compute_grade.m"
              {
#line 225 "compute_grade.m"
                libs__compute_grade__StackSegmentpec_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__StackSegmentpec_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[196])));
#line 225 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__StackSegmentpec_165, 1) = ((MR_Box) (libs__compute_grade__V_125_125));
#line 225 "compute_grade.m"
              }
#line 227 "compute_grade.m"
              {
#line 227 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__StackSegmentpec_165, libs__compute_grade__STATE_VARIABLE_Specs_121_121, &libs__compute_grade__STATE_VARIABLE_Specs_148_148);
              }
#line 223 "compute_grade.m"
            }
#line 219 "compute_grade.m"
            break;
#line 219 "compute_grade.m"
        }
#line 229 "compute_grade.m"
        break;
#line 229 "compute_grade.m"
    }
#line 235 "compute_grade.m"
    {
#line 235 "compute_grade.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compute_grade__Globals_6, (MR_Integer) 222, &libs__compute_grade__SinglePrecFloat_24);
    }
#line 250 "compute_grade.m"
#line 250 "compute_grade.m"
    switch (libs__compute_grade__SinglePrecFloat_24) {
#line 250 "compute_grade.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 250 "compute_grade.m"
      case (MR_Integer) 0:
#line 251 "compute_grade.m"
        *libs__compute_grade__STATE_VARIABLE_Specs_27 = libs__compute_grade__STATE_VARIABLE_Specs_148_148;
#line 250 "compute_grade.m"
        break;
#line 250 "compute_grade.m"
      case (MR_Integer) 1:
#line 247 "compute_grade.m"
#line 247 "compute_grade.m"
        switch (libs__compute_grade__Target_7) {
#line 247 "compute_grade.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 247 "compute_grade.m"
          case (MR_Integer) 0:
#line 248 "compute_grade.m"
            *libs__compute_grade__STATE_VARIABLE_Specs_27 = libs__compute_grade__STATE_VARIABLE_Specs_148_148;
#line 247 "compute_grade.m"
            break;
#line 247 "compute_grade.m"
          case (MR_Integer) 1:
#line 247 "compute_grade.m"
          case (MR_Integer) 3:
#line 247 "compute_grade.m"
          case (MR_Integer) 2:
#line 242 "compute_grade.m"
            {
#line 242 "compute_grade.m"
              MR_Word libs__compute_grade__SPFSpec_25;
#line 242 "compute_grade.m"
              MR_Word libs__compute_grade__V_152_152;
#line 242 "compute_grade.m"
              MR_Word libs__compute_grade__V_155_155;
#line 242 "compute_grade.m"
              MR_Word libs__compute_grade__V_156_156;

#line 245 "compute_grade.m"
              {
#line 245 "compute_grade.m"
                libs__compute_grade__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(3), libs__compute_grade__V_156_156, 1) = ((MR_Box) (libs__compute_grade__TargetStr_10));
#line 245 "compute_grade.m"
              }
#line 245 "compute_grade.m"
              {
#line 245 "compute_grade.m"
                libs__compute_grade__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_155_155, 0) = ((MR_Box) (libs__compute_grade__V_156_156));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__compute_grade_scalar_common_1[5])));
#line 245 "compute_grade.m"
              }
#line 245 "compute_grade.m"
              {
#line 245 "compute_grade.m"
                libs__compute_grade__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_152_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[190])));
#line 245 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__V_152_152, 1) = ((MR_Box) (libs__compute_grade__V_155_155));
#line 245 "compute_grade.m"
              }
#line 244 "compute_grade.m"
              {
#line 244 "compute_grade.m"
                libs__compute_grade__SPFSpec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__SPFSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__compute_grade_scalar_common_1[197])));
#line 244 "compute_grade.m"
                MR_hl_field(MR_mktag(1), libs__compute_grade__SPFSpec_25, 1) = ((MR_Box) (libs__compute_grade__V_152_152));
#line 244 "compute_grade.m"
              }
#line 246 "compute_grade.m"
              {
#line 246 "compute_grade.m"
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__compute_grade__SPFSpec_25, libs__compute_grade__STATE_VARIABLE_Specs_148_148, libs__compute_grade__STATE_VARIABLE_Specs_27);
              }
#line 242 "compute_grade.m"
            }
#line 247 "compute_grade.m"
            break;
#line 247 "compute_grade.m"
        }
#line 250 "compute_grade.m"
        break;
#line 250 "compute_grade.m"
    }
#line 87 "compute_grade.m"
  }
#line 40 "compute_grade.m"
}

void mercury__libs__compute_grade__init(void)
{
}

void mercury__libs__compute_grade__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__compute_grade__libs__compute_grade__type_ctor_info_grade_component_0);
}

void mercury__libs__compute_grade__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.compute_grade. */
