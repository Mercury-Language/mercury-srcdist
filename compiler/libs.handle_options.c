/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module libs.handle_options. */
/* :- implementation. */

/*
INIT mercury__libs__handle_options__init
REQUIRED_INIT mercury__libs__handle_options__required_init
ENDINIT
*/

#include "libs.handle_options.mih"
#include "libs.handle_options.mh"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 2919 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s {
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Options_3;
#line 2919 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__HeadVar__2_16;
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont;
#line 2919 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont_env_ptr;
#line 2919 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded;
#line 2919 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Name_6;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Comp_7;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__CompOpts_8;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__MaybeTargets_9;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__IncludeInGradeString_10;
#line 2926 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_0;
#line 2926 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Opt_11;
#line 2926 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Value_12;
#line 2926 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_17_17;
#line 2927 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv0_V_17_17;
#line 2940 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_1;
#line 2940 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 2940 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 2940 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Target_14;
#line 2940 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_18_18;
#line 2940 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_27_27;
#line 2941 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv2_Target_14;
#line 2919 "handle_options.m"
};

#line 2761 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2764 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2764 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2764 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2764 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2765 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2761 "handle_options.m"
};

#line 2752 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2755 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2755 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2755 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2755 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2756 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2752 "handle_options.m"
};

#line 189 "handle_options.m"
struct libs__handle_options__process_given_options_6_p_0_4_env_0_s {
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1;
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2;
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__process_given_options_6_p_0_4_env_0__cont;
#line 189 "handle_options.m"
  void * libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr;
#line 189 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1;
#line 189 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2;
#line 189 "handle_options.m"
};

#line 2919 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 2919 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2919 "handle_options.m"
};

#line 3201 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3201 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3201 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3201 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3201 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3201 "handle_options.m"
};

#line 2919 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 2919 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2919 "handle_options.m"
};

#line 189 "handle_options.m"
struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
#line 189 "handle_options.m"
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
#line 189 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
#line 189 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
#line 189 "handle_options.m"
};


#line 306 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 309 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 312 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

#line 315 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 318 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0;

#line 321 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 324 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 327 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 330 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 333 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0;

#line 336 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 339 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0;

#line 342 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1;

#line 345 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2;

#line 348 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3;

#line 351 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4;

#line 354 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5;

#line 357 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6;

#line 360 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7;

#line 363 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8;

#line 366 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9;

#line 369 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10;

#line 372 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11;

#line 375 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12;

#line 378 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13;

#line 381 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0[14];

#line 384 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0[14];

#line 387 "libs.handle_options.c"
static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_grade_component_0[14];

#line 390 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 393 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 395 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 398 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 401 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 403 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 405 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3);

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3201__1_3_p_0(
#line 3201 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3201 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3201 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_2(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2927 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_4(
#line 2927 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_3(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_5(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_6(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2941 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_8(
#line 2941 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_7(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_9(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0(
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2919 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2870__1_3_p_0(
#line 2870 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2870 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2870 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2779 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2779__1_2_p_0(
#line 2779 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2779 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2121 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
#line 2121 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2121 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1465);

#line 2119 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
#line 2119 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2119 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1459);

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1454);

#line 2127 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2127__1_1_f_0(
#line 2127 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1449);

#line 2097 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2097__1_2_f_0(
#line 2097 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2097 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1436);

#line 2093 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(
#line 2093 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2093 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1430);

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__2_2_p_0(
#line 2075 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1423,
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1569);

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__1_2_p_0(
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1424,
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1571);

#line 2057 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2057__1_3_f_0(
#line 2057 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2057 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2057 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1411);

#line 2021 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2021__1_2_f_0(
#line 2021 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2021 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1392);

#line 2011 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2011__1_2_f_0(
#line 2011 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2011 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1382);

#line 1998 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1998__1_2_f_0(
#line 1998 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 1998 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1365);

#line 1983 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1983__1_2_f_0(
#line 1983 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 1983 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1350);

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_2(
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2870 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_1(
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2870 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2847 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0(
#line 2847 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2847 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2847 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2819 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2819 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2819 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3277 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3277 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3277 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3262 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3262 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3262 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3251 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3251 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3251 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3246 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3246 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3246 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3207 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3207 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3207 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3207 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2963 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2963 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2963 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2963 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2961 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2961 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 2901 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2901 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2901 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2765 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2765 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2761 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2756 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2756 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2752 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2779 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2779 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2779 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2779 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2734 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2734 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2734 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2734 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2711 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2711 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2711 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2711 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2711 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2711 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2711 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2699 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2699 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2699 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2699 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2697 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2697 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2697 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2697 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2689 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2689 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2689 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2687 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2679 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2679 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2679 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2679 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2679 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2626 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2626 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2448 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_grade_component_compatibility_5_p_0(
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__Globals_6,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__Target_7,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_8,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_22,
#line 2448 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_23);

#line 2407 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2407 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2407 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2407 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2392 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2392 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2392 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2372 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2372 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2372 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2354 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2354 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2338 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2338 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2258 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2258 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2258 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2121 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2119 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
#line 2119 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2119 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2127 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2127 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2127 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2097 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2097 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2097 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2093 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2057 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2057 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2057 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2021 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
#line 2021 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2021 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2011 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
#line 2011 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2011 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1998 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 1998 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1998 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 1983 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 1983 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1983 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 641 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 641 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_37,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_38,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_39,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_40,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_41,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_189,
#line 641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_190,
#line 641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_191);

#line 634 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 634 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 634 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_6,
#line 634 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_7);

#line 237 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
#line 237 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_119,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_120,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__Target_25,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_26,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_27,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_28,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_29,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_30,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_31,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_32,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_33,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_34,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_35,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_36,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_37,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_38,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_39,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_40,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_41,
#line 237 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_121,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_122);

#line 208 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 208 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 208 "handle_options.m"
  MR_Word * libs__handle_options__Errors_2,
#line 208 "handle_options.m"
  MR_Word * libs__handle_options__Globals_3);

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 189 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 189 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 183 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 183 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__Result_10);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2919 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2847 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2847 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2847 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3201 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3201 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3201 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3201 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3201 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2919 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2614 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2614 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 189 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 189 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[21][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[212][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[14][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[8][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[3][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[6][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9];

static /* final */ const MR_Box libs__handle_options_scalar_common_10[1][10];


#line 2968 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2968 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[48];

#line 2968 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 2968 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_1;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_2;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_3;
#line 2968 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_4;
#line 2968 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[48];

#line 3209 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_13_0_s {
#line 3209 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_13_0__vct_13_f_0;
#line 3209 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_13_0_s libs__handle_options_vector_common_13[30];

#line 3280 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_14_0_s {
#line 3280 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_14_0__vct_14_f_0;
#line 3280 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_14_0_s libs__handle_options_vector_common_14[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[21][3] = {
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
    ((MR_Box) (&libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[1])),
    ((MR_Box) (libs__handle_options__convert_grade_option_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__convert_grade_option_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__convert_grade_option_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__process_given_options_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[1])),
    ((MR_Box) (libs__handle_options__process_given_options_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[2])),
    ((MR_Box) (libs__handle_options__process_given_options_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[0])),
    ((MR_Box) (libs__handle_options__process_given_options_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[6])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[6])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__filter_grade_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[212][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2015 The Mercury team\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "accurate"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 246)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 26 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[20])))
  },
  /* row 31 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 34 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 246)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 40 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 184)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 46 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 183)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[46])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 184)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 53 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[52])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 55 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[54])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[53])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[55])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 59 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[53])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 61 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16])))
  },
  /* row 63 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "erlang"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 70 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[69])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 72 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[24])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[75])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm_debug"))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[77])))
  },
  /* row 79 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[78])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "hgc"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[80])))
  },
  /* row 82 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[81])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34])))
  },
  /* row 84 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 89 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34])))
  },
  /* row 90 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 95 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95])))
  },
  /* row 97 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96])))
  },
  /* row 98 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16])))
  },
  /* row 99 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Integer) 480)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 107 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[106])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 294)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[108])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[107])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 192)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[110])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[54])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[126])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 129 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[128])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[130])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 133 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[132])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[111])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[133])))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 136 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[135])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[135])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134])))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Integer) 192)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 140 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[132])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 143 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[142])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[142])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[133])))
  },
  /* row 146 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[135])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[147])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[150])))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 154 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[153])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148])))
  },
  /* row 155 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[154])))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 157 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[156])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[153])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[157])))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[157])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[22])))
  },
  /* row 163 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Integer) 240)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 165 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[164])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 167 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[166])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[165])))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 169 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[168])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 171 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[170])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 173 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[172])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[171])))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 175 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[174])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 177 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[176])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 179 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[178])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[177])))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 181 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[180])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[178])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[181])))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Integer) 210)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 184 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[183])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 186 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[185])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[184])))
  },
  /* row 187 */
  {
    ((MR_Box) ((MR_Integer) 210)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 188 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[187])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 190 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[189])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[188])))
  },
  /* row 191 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 196 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 197 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[202])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 249)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 183)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 226)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 294)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[14][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[28])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[68])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_special_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_6[6][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_1[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[4])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[5])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[6]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_1[10])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[11])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[12])),
    ((MR_Box) (&libs__handle_options_scalar_common_1[13]))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[0])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "included"))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[0])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "excluded"))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[7])),
    ((MR_Box) (libs__handle_options__split_grade_string_2_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 46))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0)),
    ((MR_Box) (&libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[48] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[14]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[26]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[32]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[42]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[48]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[51]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[61]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[66]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[73]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[76]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[79]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[82]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[87]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[93]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[97]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[102]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[42]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[105]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[117]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 24 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[129]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[136]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[146]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[155]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[169]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[175]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[179]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[190]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[48] = {
  /* row 0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[105]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "asm_jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[32]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[73]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_String) "asm_fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[26]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "hl",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[87]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[97]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "hl_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[93]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "hlc_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[102]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[42]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "csharp",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[42]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "erlang",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[66]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "par",
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[175]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "gc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[76]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "gcd",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[79]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "hgc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[82]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[14]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[136]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[146]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[117]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[190]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[179]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 31 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[61]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "picreg",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[129]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[51]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "debug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[48]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[169]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "exts",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "stseg",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[155]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__handle_options__vector_common_type_13_0_s libs__handle_options_vector_common_13[30] = {
  /* row 0 */   {     (MR_Word) &libs__handle_options_scalar_common_2[41] },
  /* row 1 */   {     (MR_Word) &libs__handle_options_scalar_common_2[39] },
  /* row 2 */   {     (MR_Word) &libs__handle_options_scalar_common_2[29] },
  /* row 3 */   {     (MR_Word) &libs__handle_options_scalar_common_2[19] },
  /* row 4 */   {     (MR_Word) &libs__handle_options_scalar_common_2[15] },
  /* row 5 */   {     (MR_Word) &libs__handle_options_scalar_common_2[17] },
  /* row 6 */   {     (MR_Word) &libs__handle_options_scalar_common_2[200] },
  /* row 7 */   {     (MR_Word) &libs__handle_options_scalar_common_2[201] },
  /* row 8 */   {     (MR_Word) &libs__handle_options_scalar_common_2[203] },
  /* row 9 */   {     (MR_Word) &libs__handle_options_scalar_common_2[110] },
  /* row 10 */   {     (MR_Word) &libs__handle_options_scalar_common_2[116] },
  /* row 11 */   {     (MR_Word) &libs__handle_options_scalar_common_2[142] },
  /* row 12 */   {     (MR_Word) &libs__handle_options_scalar_common_2[132] },
  /* row 13 */   {     (MR_Word) &libs__handle_options_scalar_common_2[204] },
  /* row 14 */   {     (MR_Word) &libs__handle_options_scalar_common_2[176] },
  /* row 15 */   {     (MR_Word) &libs__handle_options_scalar_common_2[60] },
  /* row 16 */   {     (MR_Word) &libs__handle_options_scalar_common_2[54] },
  /* row 17 */   {     (MR_Word) &libs__handle_options_scalar_common_2[118] },
  /* row 18 */   {     (MR_Word) &libs__handle_options_scalar_common_2[205] },
  /* row 19 */   {     (MR_Word) &libs__handle_options_scalar_common_2[206] },
  /* row 20 */   {     (MR_Word) &libs__handle_options_scalar_common_2[207] },
  /* row 21 */   {     (MR_Word) &libs__handle_options_scalar_common_2[208] },
  /* row 22 */   {     (MR_Word) &libs__handle_options_scalar_common_2[45] },
  /* row 23 */   {     (MR_Word) &libs__handle_options_scalar_common_2[209] },
  /* row 24 */   {     (MR_Word) &libs__handle_options_scalar_common_2[172] },
  /* row 25 */   {     (MR_Word) &libs__handle_options_scalar_common_2[69] },
  /* row 26 */   {     (MR_Word) &libs__handle_options_scalar_common_2[210] },
  /* row 27 */   {     (MR_Word) &libs__handle_options_scalar_common_2[149] },
  /* row 28 */   {     (MR_Word) &libs__handle_options_scalar_common_2[147] },
  /* row 29 */   {     (MR_Word) &libs__handle_options_scalar_common_2[211] },
};

static /* final */ const struct libs__handle_options__vector_common_type_14_0_s libs__handle_options_vector_common_14[20] = {
  /* row 0 */   {     (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ" },
  /* row 1 */   {     (MR_String) "abcdEfgilmnprstuvzBCMPSTZ" },
  /* row 2 */   {     (MR_String) "abcdEfgilmnprstuvzBCDMPT" },
  /* row 3 */   {     (MR_String) "bdfgilmnprstuvzP" },
  /* row 4 */   {     (MR_String) "dfnprsu" },
  /* row 5 */   {     (MR_String) "cdinpGDRS" },
  /* row 6 */   {     (MR_String) "divM" },
  /* row 7 */   {     (MR_String) "agiuvzD" },
  /* row 8 */   {     (MR_String) "ilv" },
  /* row 9 */   {     (MR_String) "bcdglmnstvz" },
  /* row 10 */   {     (MR_String) "bdgvP" },
  /* row 11 */   {     (MR_String) "bcdfgilmnprstvzP" },
  /* row 12 */   {     (MR_String) "bcdglmnpruvP" },
  /* row 13 */   {     (MR_String) "cP" },
  /* row 14 */   {     (MR_String) "din" },
  /* row 15 */   {     (MR_String) "vxX" },
  /* row 16 */   {     (MR_String) "gvCP" },
  /* row 17 */   {     (MR_String) "bcdglmnstuvz" },
  /* row 18 */   {     (MR_String) "ltuCIU" },
  /* row 19 */   {     (MR_String) "npBis" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.handle_options.mh"
#include "mdbcomp.rtti_access.mh"
#line 2626 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2626 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3849 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3858 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3866 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3875 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3884 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3892 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3901 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3911 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3919 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3927 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3935 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 3945 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3951 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3957 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3963 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3969 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3975 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3981 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3987 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3993 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3999 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 4005 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 4011 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 4017 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 4023 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 4029 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0[14] = {
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13
};

#line 4047 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0[14] = {
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11,
  &libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6
};

#line 4065 "libs.handle_options.c"
static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_grade_component_0[14] = {
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

#line 4083 "libs.handle_options.c"
const MR_TypeCtorInfo_Struct libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__handle_options____Unify____grade_component_0_0_10001)),
  ((MR_Box) (libs__handle_options____Compare____grade_component_0_0_10001)),
  (MR_String) "libs.handle_options",
  (MR_String) "grade_component",
  {     libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0 },
  {     libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  libs__handle_options__libs__handle_options__functor_number_map_grade_component_0
};

#line 4100 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 4103 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 4105 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 4107 "libs.handle_options.c"
{
#line 4109 "libs.handle_options.c"
  {
#line 4111 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 4114 "libs.handle_options.c"
    {
#line 4116 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 4119 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 4121 "libs.handle_options.c"
  }
#line 4123 "libs.handle_options.c"
}

#line 4126 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 4129 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 4131 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 4133 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 4135 "libs.handle_options.c"
{
#line 4137 "libs.handle_options.c"
  {
#line 4139 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 4142 "libs.handle_options.c"
    {
#line 4144 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 4147 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 4149 "libs.handle_options.c"
  }
#line 4151 "libs.handle_options.c"
}

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3201__1_3_p_0(
#line 3201 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3201 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3201 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3201 "handle_options.m"
{
#line 3201 "handle_options.m"
  {
#line 3201 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3201 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3201 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3204 "handle_options.m"
    {
#line 3204 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3204 "handle_options.m"
      return;
    }
#line 3201 "handle_options.m"
  }
#line 3201 "handle_options.m"
}

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_2(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2926 "handle_options.m"
{
#line 2926 "handle_options.m"
  {
#line 2926 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2926 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_0, 1);
#line 2926 "handle_options.m"
  }
#line 2926 "handle_options.m"
}

#line 2927 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_4(
#line 2927 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2927 "handle_options.m"
{
#line 2927 "handle_options.m"
  {
#line 2927 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2927 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv0_V_17_17);
#line 2927 "handle_options.m"
    {
#line 2927 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_3(libs__handle_options__env_ptr);
#line 2927 "handle_options.m"
      return;
    }
#line 2927 "handle_options.m"
  }
#line 2927 "handle_options.m"
}

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_3(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2926 "handle_options.m"
{
#line 2926 "handle_options.m"
  {
#line 2926 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2926 "handle_options.m"
    {
#line 2929 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 2929 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 2927 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 2927 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 2929 "handle_options.m"
      {
#line 2929 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 2929 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2929 "handle_options.m"
        {
#line 2929 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 2929 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2929 "handle_options.m"
        }
#line 2929 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2929 "handle_options.m"
        {
#line 2929 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 2928 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded);
#line 2928 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2928 "handle_options.m"
        {
#line 2928 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_2(libs__handle_options__env_ptr);
#line 2928 "handle_options.m"
          return;
        }
#line 2926 "handle_options.m"
    }
#line 2926 "handle_options.m"
  }
#line 2926 "handle_options.m"
}

#line 2926 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_5(
#line 2926 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2926 "handle_options.m"
{
#line 2926 "handle_options.m"
  {
#line 2926 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2926 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_0) == 0)
#line 2926 "handle_options.m"
      {
#line 2926 "handle_options.m"
        {
#line 2927 "handle_options.m"
          {
#line 2927 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 2926 "handle_options.m"
        }
#line 2926 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2926 "handle_options.m"
      }
#line 2926 "handle_options.m"
    else
#line 2926 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2926 "handle_options.m"
  }
#line 2926 "handle_options.m"
}

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_6(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2940 "handle_options.m"
{
#line 2940 "handle_options.m"
  {
#line 2940 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2940 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_1, 1);
#line 2940 "handle_options.m"
  }
#line 2940 "handle_options.m"
}

#line 2941 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_8(
#line 2941 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2941 "handle_options.m"
{
#line 2941 "handle_options.m"
  {
#line 2941 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2941 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv2_Target_14);
#line 2941 "handle_options.m"
    {
#line 2941 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_7(libs__handle_options__env_ptr);
#line 2941 "handle_options.m"
      return;
    }
#line 2941 "handle_options.m"
  }
#line 2941 "handle_options.m"
}

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_7(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2940 "handle_options.m"
{
#line 2940 "handle_options.m"
  {
#line 2940 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2940 "handle_options.m"
    {
#line 2942 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 2942 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_18_18 = (MR_Integer) 175;
#line 4396 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2942 "handle_options.m"
      {
#line 2942 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 2942 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2942 "handle_options.m"
        {
#line 2942 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 2942 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2942 "handle_options.m"
        }
#line 2940 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2940 "handle_options.m"
        {
#line 2942 "handle_options.m"
          {
#line 2942 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__V_27_27);
          }
#line 2942 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2942 "handle_options.m"
            {
#line 2942 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_6(libs__handle_options__env_ptr);
#line 2942 "handle_options.m"
              return;
            }
#line 2940 "handle_options.m"
        }
#line 2940 "handle_options.m"
    }
#line 2940 "handle_options.m"
  }
#line 2940 "handle_options.m"
}

#line 2940 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_9(
#line 2940 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2940 "handle_options.m"
{
#line 2940 "handle_options.m"
  {
#line 2940 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2940 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__commit_1) == 0)
#line 2940 "handle_options.m"
      {
#line 2940 "handle_options.m"
        {
#line 2940 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4461 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 2941 "handle_options.m"
          {
#line 2941 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 2940 "handle_options.m"
        }
#line 2940 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2940 "handle_options.m"
      }
#line 2940 "handle_options.m"
    else
#line 2940 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2940 "handle_options.m"
  }
#line 2940 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2926 "handle_options.m"
    {
#line 2926 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 2926 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded);
#line 2919 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2919 "handle_options.m"
      {
#line 2934 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 2919 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2919 "handle_options.m"
          {
#line 2943 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2944 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2943 "handle_options.m"
            else
#line 2940 "handle_options.m"
              {
#line 2940 "handle_options.m"
                {
#line 2940 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 2940 "handle_options.m"
              }
#line 2919 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__succeeded)
#line 2919 "handle_options.m"
              {
#line 2946 "handle_options.m"
                {
#line 2946 "handle_options.m"
                  MR_Word base;
#line 2946 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2946 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 2946 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Comp_7));
#line 2946 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Name_6));
#line 2946 "handle_options.m"
                }
#line 2946 "handle_options.m"
                {
#line 2946 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont_env_ptr);
#line 2946 "handle_options.m"
                  return;
                }
#line 2919 "handle_options.m"
              }
#line 2919 "handle_options.m"
          }
#line 2919 "handle_options.m"
      }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0(
#line 2919 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2919 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0_s libs__handle_options__env;

#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2920 "handle_options.m"
    {
#line 2920 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0_1, &libs__handle_options__env);
    }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2870__1_3_p_0(
#line 2870 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2870 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2870 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 2870 "handle_options.m"
{
#line 2870 "handle_options.m"
  {
#line 2870 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2870 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 2870 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 2872 "handle_options.m"
    {
#line 2872 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 2872 "handle_options.m"
      return;
    }
#line 2870 "handle_options.m"
  }
#line 2870 "handle_options.m"
}

#line 2779 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2779__1_2_p_0(
#line 2779 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2779 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2779 "handle_options.m"
{
#line 2779 "handle_options.m"
  {
#line 2779 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2780 "handle_options.m"
    {
#line 2780 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2779 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2779 "handle_options.m"
      {
#line 2779 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2779 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2779 "handle_options.m"
      }
#line 2779 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2779 "handle_options.m"
  }
#line 2779 "handle_options.m"
}

#line 2121 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
#line 2121 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2121 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1465)
#line 2121 "handle_options.m"
{
#line 2121 "handle_options.m"
  {
#line 2121 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1466;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__V_1467_1467;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__V_1468_1468;
#line 2122 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2122 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1468_1468;

#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      libs__handle_options__conv1_V_1468_1468 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1465)));
    }
#line 2122 "handle_options.m"
    libs__handle_options__V_1468_1468 = ((MR_String) libs__handle_options__conv1_V_1468_1468);
#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      libs__handle_options__V_1467_1467 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1468_1468, (MR_String) "Mercury");
    }
#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      return libs__handle_options__HeadVar__3_1466 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1467_1467, (MR_String) "hrls");
    }
#line 2121 "handle_options.m"
    return libs__handle_options__HeadVar__3_1466;
#line 2121 "handle_options.m"
  }
#line 2121 "handle_options.m"
}

#line 2119 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
#line 2119 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2119 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1459)
#line 2119 "handle_options.m"
{
#line 2119 "handle_options.m"
  {
#line 2119 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2119 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1460;
#line 2119 "handle_options.m"
    MR_String libs__handle_options__V_1461_1461;
#line 2119 "handle_options.m"
    MR_String libs__handle_options__V_1462_1462;
#line 2120 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2120 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1462_1462;

#line 2120 "handle_options.m"
    {
#line 2120 "handle_options.m"
      libs__handle_options__conv1_V_1462_1462 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1459)));
    }
#line 2120 "handle_options.m"
    libs__handle_options__V_1462_1462 = ((MR_String) libs__handle_options__conv1_V_1462_1462);
#line 2120 "handle_options.m"
    {
#line 2120 "handle_options.m"
      libs__handle_options__V_1461_1461 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1462_1462, (MR_String) "Mercury");
    }
#line 2120 "handle_options.m"
    {
#line 2120 "handle_options.m"
      return libs__handle_options__HeadVar__3_1460 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1461_1461, (MR_String) "mihs");
    }
#line 2119 "handle_options.m"
    return libs__handle_options__HeadVar__3_1460;
#line 2119 "handle_options.m"
  }
#line 2119 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1454)
#line 2128 "handle_options.m"
{
#line 2128 "handle_options.m"
  {
#line 2128 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1455;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__V_1456_1456;

#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__V_1456_1456 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1454, (MR_String) "Mercury");
    }
#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      return libs__handle_options__HeadVar__2_1455 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1456_1456, (MR_String) "hrls");
    }
#line 2128 "handle_options.m"
    return libs__handle_options__HeadVar__2_1455;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2127 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2127__1_1_f_0(
#line 2127 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1449)
#line 2127 "handle_options.m"
{
#line 2127 "handle_options.m"
  {
#line 2127 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2127 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1450;
#line 2127 "handle_options.m"
    MR_String libs__handle_options__V_1451_1451;

#line 2127 "handle_options.m"
    {
#line 2127 "handle_options.m"
      libs__handle_options__V_1451_1451 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1449, (MR_String) "Mercury");
    }
#line 2127 "handle_options.m"
    {
#line 2127 "handle_options.m"
      return libs__handle_options__HeadVar__2_1450 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1451_1451, (MR_String) "mihs");
    }
#line 2127 "handle_options.m"
    return libs__handle_options__HeadVar__2_1450;
#line 2127 "handle_options.m"
  }
#line 2127 "handle_options.m"
}

#line 2097 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2097__1_2_f_0(
#line 2097 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2097 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1436)
#line 2097 "handle_options.m"
{
#line 2097 "handle_options.m"
  {
#line 2097 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2097 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1437;
#line 2097 "handle_options.m"
    MR_String libs__handle_options__V_1438_1438;
#line 2097 "handle_options.m"
    MR_String libs__handle_options__V_1439_1439;
#line 2098 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2098 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1439_1439;

#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      libs__handle_options__conv1_V_1439_1439 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1436)));
    }
#line 2098 "handle_options.m"
    libs__handle_options__V_1439_1439 = ((MR_String) libs__handle_options__conv1_V_1439_1439);
#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      libs__handle_options__V_1438_1438 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1439_1439, (MR_String) "Mercury");
    }
#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      return libs__handle_options__HeadVar__3_1437 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1438_1438, (MR_String) "inits");
    }
#line 2097 "handle_options.m"
    return libs__handle_options__HeadVar__3_1437;
#line 2097 "handle_options.m"
  }
#line 2097 "handle_options.m"
}

#line 2093 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(
#line 2093 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2093 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1430)
#line 2093 "handle_options.m"
{
#line 2093 "handle_options.m"
  {
#line 2093 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1431;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__V_1432_1432;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__V_1433_1433;
#line 2093 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2093 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1433_1433;

#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      libs__handle_options__conv1_V_1433_1433 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1430)));
    }
#line 2093 "handle_options.m"
    libs__handle_options__V_1433_1433 = ((MR_String) libs__handle_options__conv1_V_1433_1433);
#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      libs__handle_options__V_1432_1432 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1433_1433, (MR_String) "Mercury");
    }
#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      return libs__handle_options__HeadVar__3_1431 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1432_1432, (MR_String) "lib");
    }
#line 2093 "handle_options.m"
    return libs__handle_options__HeadVar__3_1431;
#line 2093 "handle_options.m"
  }
#line 2093 "handle_options.m"
}

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__2_2_p_0(
#line 2075 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1423,
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1569)
#line 2075 "handle_options.m"
{
#line 2075 "handle_options.m"
  {
#line 2075 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2075 "handle_options.m"
    {
#line 2075 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1423, ((MR_Box) (libs__handle_options__HeadVar__2_1569)));
    }
#line 2075 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2075 "handle_options.m"
  }
#line 2075 "handle_options.m"
}

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__1_2_p_0(
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1424,
#line 2075 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1571)
#line 2075 "handle_options.m"
{
#line 2075 "handle_options.m"
  {
#line 2075 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1424, libs__handle_options__HeadVar__2_1571) == 0);

#line 2075 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2075 "handle_options.m"
  }
#line 2075 "handle_options.m"
}

#line 2057 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2057__1_3_f_0(
#line 2057 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2057 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2057 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1411)
#line 2057 "handle_options.m"
{
#line 2057 "handle_options.m"
  {
#line 2057 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2057 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1412;
#line 2057 "handle_options.m"
    MR_String libs__handle_options__V_1413_1413;
#line 2057 "handle_options.m"
    MR_String libs__handle_options__V_1414_1414;

#line 2057 "handle_options.m"
    {
#line 2057 "handle_options.m"
      libs__handle_options__V_1414_1414 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1411, (MR_String) "Mercury");
    }
#line 2057 "handle_options.m"
    {
#line 2057 "handle_options.m"
      libs__handle_options__V_1413_1413 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1414_1414, libs__handle_options__GradeString_141);
    }
#line 2057 "handle_options.m"
    {
#line 2057 "handle_options.m"
      return libs__handle_options__HeadVar__4_1412 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1413_1413, libs__handle_options__TargetArch_129);
    }
#line 2057 "handle_options.m"
    return libs__handle_options__HeadVar__4_1412;
#line 2057 "handle_options.m"
  }
#line 2057 "handle_options.m"
}

#line 2021 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2021__1_2_f_0(
#line 2021 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2021 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1392)
#line 2021 "handle_options.m"
{
#line 2021 "handle_options.m"
  {
#line 2021 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2021 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1393;
#line 2021 "handle_options.m"
    MR_String libs__handle_options__V_1394_1394;

#line 2023 "handle_options.m"
    {
#line 2023 "handle_options.m"
      libs__handle_options__V_1394_1394 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1392, (MR_String) "modules");
    }
#line 2023 "handle_options.m"
    {
#line 2023 "handle_options.m"
      return libs__handle_options__HeadVar__3_1393 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1394_1394, libs__handle_options__GradeString_141);
    }
#line 2021 "handle_options.m"
    return libs__handle_options__HeadVar__3_1393;
#line 2021 "handle_options.m"
  }
#line 2021 "handle_options.m"
}

#line 2011 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2011__1_2_f_0(
#line 2011 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2011 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1382)
#line 2011 "handle_options.m"
{
#line 2011 "handle_options.m"
  {
#line 2011 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2011 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1383;
#line 2011 "handle_options.m"
    MR_String libs__handle_options__V_1384_1384;

#line 2014 "handle_options.m"
    {
#line 2014 "handle_options.m"
      libs__handle_options__V_1384_1384 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_141);
    }
#line 2013 "handle_options.m"
    {
#line 2013 "handle_options.m"
      return libs__handle_options__HeadVar__3_1383 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1382, libs__handle_options__V_1384_1384);
    }
#line 2011 "handle_options.m"
    return libs__handle_options__HeadVar__3_1383;
#line 2011 "handle_options.m"
  }
#line 2011 "handle_options.m"
}

#line 1998 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1998__1_2_f_0(
#line 1998 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 1998 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1365)
#line 1998 "handle_options.m"
{
#line 1998 "handle_options.m"
  {
#line 1998 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1998 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1366;
#line 1998 "handle_options.m"
    MR_String libs__handle_options__V_1367_1367;
#line 1998 "handle_options.m"
    MR_String libs__handle_options__V_1368_1368;

#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      libs__handle_options__V_1368_1368 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1365, (MR_String) "lib");
    }
#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      libs__handle_options__V_1367_1367 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1368_1368, libs__handle_options__GradeString_141);
    }
#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      return libs__handle_options__HeadVar__3_1366 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1367_1367, (MR_String) "inc");
    }
#line 1998 "handle_options.m"
    return libs__handle_options__HeadVar__3_1366;
#line 1998 "handle_options.m"
  }
#line 1998 "handle_options.m"
}

#line 1983 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1983__1_2_f_0(
#line 1983 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 1983 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1350)
#line 1983 "handle_options.m"
{
#line 1983 "handle_options.m"
  {
#line 1983 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 1983 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1351;
#line 1983 "handle_options.m"
    MR_String libs__handle_options__V_1352_1352;

#line 1985 "handle_options.m"
    {
#line 1985 "handle_options.m"
      libs__handle_options__V_1352_1352 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1350, (MR_String) "lib");
    }
#line 1985 "handle_options.m"
    {
#line 1985 "handle_options.m"
      return libs__handle_options__HeadVar__3_1351 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1352_1352, libs__handle_options__GradeString_141);
    }
#line 1983 "handle_options.m"
    return libs__handle_options__HeadVar__3_1351;
#line 1983 "handle_options.m"
  }
#line 1983 "handle_options.m"
}

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_2(
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2870 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2870 "handle_options.m"
{
#line 2870 "handle_options.m"
  {
#line 2870 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2870 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 2870 "handle_options.m"
    {
#line 2870 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2870__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 2870 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 2870 "handle_options.m"
  }
#line 2870 "handle_options.m"
}

#line 2870 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0_1(
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2870 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2870 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2870 "handle_options.m"
{
#line 2870 "handle_options.m"
  {
#line 2870 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2870 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 2870 "handle_options.m"
    {
#line 2870 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2870__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 2870 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 2870 "handle_options.m"
  }
#line 2870 "handle_options.m"
}

#line 2847 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0(
#line 2847 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2847 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2847 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2847 "handle_options.m"
{
#line 2847 "handle_options.m"
  {
#line 2847 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2849 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2852 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 2870 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2861 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2859 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2859 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2849 "handle_options.m"
    {
#line 2849 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2847 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2847 "handle_options.m"
      {
#line 5292 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2852 "handle_options.m"
        {
#line 2852 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2852 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2847 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2847 "handle_options.m"
          {
#line 5305 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2853 "handle_options.m"
            {
#line 2853 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 2870 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 5314 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5316 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 2870 "handle_options.m"
            {
#line 2870 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 2870 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2859 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2859 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2859 "handle_options.m"
              {
#line 2859 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2859 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2859 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2859 "handle_options.m"
                  {
#line 2859 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2859 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2859 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2859 "handle_options.m"
                  }
#line 2859 "handle_options.m"
              }
#line 2861 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2860 "handle_options.m"
              {
#line 2860 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2860 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 2870 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2860 "handle_options.m"
                {
#line 2860 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2860 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 175));
#line 2860 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2860 "handle_options.m"
                }
#line 2860 "handle_options.m"
                {
#line 2860 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2860 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2860 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2860 "handle_options.m"
                }
#line 2870 "handle_options.m"
                {
#line 2870 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[20], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 2870 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2860 "handle_options.m"
              }
#line 2861 "handle_options.m"
            else
#line 2862 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2861 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2847 "handle_options.m"
          }
#line 2847 "handle_options.m"
      }
#line 2847 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2847 "handle_options.m"
  }
#line 2847 "handle_options.m"
}

#line 2819 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2819 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2819 "handle_options.m"
{
#line 2819 "handle_options.m"
  {
#line 2819 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2819 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2819 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2819 "handle_options.m"
    {
#line 2819 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2819 "handle_options.m"
      return;
    }
#line 2819 "handle_options.m"
  }
#line 2819 "handle_options.m"
}

#line 2819 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2819 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2819 "handle_options.m"
{
#line 5447 "libs.handle_options.c"
  {
#line 5449 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5452 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5454 "libs.handle_options.c"
  }
#line 2819 "handle_options.m"
}

#line 3277 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3277 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3277 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3277 "handle_options.m"
{
#line 3280 "handle_options.m"
  {
#line 3280 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3280 "handle_options.m"
    {
#line 3280 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 3280 "handle_options.m"
        case (MR_Integer) 65:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ALL"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 97:
#line 3280 "handle_options.m"
          if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 108))))
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3280 "handle_options.m"
              case (MR_Integer) 0:
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 3280 "handle_options.m"
                break;
#line 3280 "handle_options.m"
              case (MR_Integer) 68:
#line 3280 "handle_options.m"
                if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "allD"))
#line 3280 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 3280 "handle_options.m"
                break;
#line 3280 "handle_options.m"
            }
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 99:
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3280 "handle_options.m"
            case (MR_Integer) 109:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "cmp"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 111:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "codegen"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 116:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ctgc"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
          }
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 100:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "detism"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 108:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "lco"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 109:
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3280 "handle_options.m"
            case (MR_Integer) 105:
#line 3280 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 110))
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3280 "handle_options.m"
                  case (MR_Integer) 0:
#line 3280 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 3280 "handle_options.m"
                    break;
#line 3280 "handle_options.m"
                  case (MR_Integer) 116:
#line 3280 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "mintrans"))
#line 3280 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 3280 "handle_options.m"
                    break;
#line 3280 "handle_options.m"
                }
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 109:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "mm"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 111:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "most"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
          }
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 111:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "osv"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 112:
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3280 "handle_options.m"
            case (MR_Integer) 97:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "paths"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 101:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "petdr"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
            case (MR_Integer) 111:
#line 3280 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "poly"))
#line 3280 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 3280 "handle_options.m"
              break;
#line 3280 "handle_options.m"
          }
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 115:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "statevar"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 116:
#line 3280 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "trans"))
#line 3280 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
        case (MR_Integer) 118:
#line 3280 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 97))
#line 3280 "handle_options.m"
#line 3280 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3280 "handle_options.m"
              case (MR_Integer) 110:
#line 3280 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vanessa"))
#line 3280 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 3280 "handle_options.m"
                break;
#line 3280 "handle_options.m"
              case (MR_Integer) 114:
#line 3280 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vars"))
#line 3280 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 3280 "handle_options.m"
                break;
#line 3280 "handle_options.m"
            }
#line 3280 "handle_options.m"
          break;
#line 3280 "handle_options.m"
      }
#line 3280 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 3280 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 3280 "handle_options.m"
      else
#line 3280 "handle_options.m"
        {
#line 3280 "handle_options.m"
          /* we found a match; look up the results */
#line 3280 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_14[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_14_0__vct_14_f_0;
#line 3280 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3280 "handle_options.m"
        }
#line 3280 "handle_options.m"
    }
#line 3280 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3280 "handle_options.m"
  }
#line 3277 "handle_options.m"
}

#line 3262 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3262 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3262 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3262 "handle_options.m"
{
#line 3265 "handle_options.m"
  {
#line 3265 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3265 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3265 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3265 "handle_options.m"
  }
#line 3262 "handle_options.m"
}

#line 3251 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3251 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3251 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3251 "handle_options.m"
{
#line 3251 "handle_options.m"
  {
#line 3251 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3251 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3251 "handle_options.m"
    {
#line 3251 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3251 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3251 "handle_options.m"
  }
#line 3251 "handle_options.m"
}

#line 3246 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3246 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3246 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3246 "handle_options.m"
{
#line 3248 "handle_options.m"
  {
#line 3248 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3248 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3248 "handle_options.m"
      {
#line 3248 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3248 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3248 "handle_options.m"
      }
#line 3248 "handle_options.m"
    else
#line 3249 "handle_options.m"
      {
#line 3249 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3249 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3249 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3249 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3251 "handle_options.m"
        {
#line 3251 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3252 "handle_options.m"
        {
#line 3252 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3257 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3259 "handle_options.m"
          {
#line 3259 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3259 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3259 "handle_options.m"
          }
#line 3257 "handle_options.m"
        else
#line 3255 "handle_options.m"
          {
#line 3255 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3255 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3256 "handle_options.m"
            {
#line 3256 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3255 "handle_options.m"
          }
#line 3249 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3249 "handle_options.m"
          {
#line 3253 "handle_options.m"
            {
#line 3253 "handle_options.m"
              MR_Word base;
#line 3253 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3253 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3253 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3253 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3253 "handle_options.m"
            }
#line 3253 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3249 "handle_options.m"
          }
#line 3249 "handle_options.m"
      }
#line 3248 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3248 "handle_options.m"
  }
#line 3246 "handle_options.m"
}

#line 3207 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3207 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3207 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3207 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3207 "handle_options.m"
{
#line 3209 "handle_options.m"
  {
#line 3209 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3209 "handle_options.m"
    {
#line 3209 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3209 "handle_options.m"
      do
#line 3209 "handle_options.m"
        {
#line 3209 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_13[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_13_0__vct_13_f_0;
#line 3209 "handle_options.m"
          {
#line 3209 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3209 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3209 "handle_options.m"
        }
#line 3209 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3209 "handle_options.m"
    }
#line 3209 "handle_options.m"
  }
#line 3207 "handle_options.m"
}

#line 2963 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2963 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2963 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2963 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2963 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2963 "handle_options.m"
{
#line 2968 "handle_options.m"
  {
#line 2968 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2968 "handle_options.m"
    {
#line 2968 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 2968 "handle_options.m"
      do
#line 2968 "handle_options.m"
        {
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_1;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_2;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_3;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_4;
#line 2968 "handle_options.m"
          {
#line 2968 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 2968 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 2968 "handle_options.m"
        }
#line 2968 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 48));
#line 2968 "handle_options.m"
    }
#line 2968 "handle_options.m"
  }
#line 2963 "handle_options.m"
}

#line 2961 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2961 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2961 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 2961 "handle_options.m"
{
#line 2968 "handle_options.m"
  {
#line 2968 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2968 "handle_options.m"
    {
#line 2968 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 2968 "handle_options.m"
        case (MR_Integer) 97:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 103:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "agc"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 115:
#line 2968 "handle_options.m"
              if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 95))))
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 2968 "handle_options.m"
                  case (MR_Integer) 102:
#line 2968 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast"))
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                  case (MR_Integer) 106:
#line 2968 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump"))
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 99:
#line 2968 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "csharp"))
#line 2968 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 100:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 101:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 98:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "debug"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 99:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "decldebug"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 109:
#line 2968 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109))
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2968 "handle_options.m"
                  case (MR_Integer) 0:
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                  case (MR_Integer) 111:
#line 2968 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "dmmos"))
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                  case (MR_Integer) 115:
#line 2968 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc"))
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 101:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 114:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "erlang"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 120:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "exts"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 102:
#line 2968 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "fast"))
#line 2968 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 103:
#line 2968 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 99))
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
              case (MR_Integer) 0:
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 2968 "handle_options.m"
                break;
#line 2968 "handle_options.m"
              case (MR_Integer) 100:
#line 2968 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "gcd"))
#line 2968 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 2968 "handle_options.m"
                break;
#line 2968 "handle_options.m"
            }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 104:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 103:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "hgc"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 108:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 0:
#line 2968 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 95:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 99:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                  switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 2968 "handle_options.m"
                    case (MR_Integer) 0:
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 2968 "handle_options.m"
                      break;
#line 2968 "handle_options.m"
                    case (MR_Integer) 95:
#line 2968 "handle_options.m"
                      if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest"))
#line 2968 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 2968 "handle_options.m"
                      break;
#line 2968 "handle_options.m"
                  }
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 106:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 97:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "java"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 117:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "jump"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 20;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 108:
#line 2968 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug"))
#line 2968 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 21;
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 109:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 101:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "memprof"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 22;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 109:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 0:
#line 2968 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 23;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 111:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "mmos"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 24;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 115:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "mmsc"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 25;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 110:
#line 2968 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "none"))
#line 2968 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 26;
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 112:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 97:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "par"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 27;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 105:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "picreg"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 28;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 114:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 101:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "pregen"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 29;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 111:
#line 2968 "handle_options.m"
                  if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 102))
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                    switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 2968 "handle_options.m"
                      case (MR_Integer) 0:
#line 2968 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 30;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                      case (MR_Integer) 97:
#line 2968 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profall"))
#line 2968 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 31;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                      case (MR_Integer) 99:
#line 2968 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profcalls"))
#line 2968 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 32;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                      case (MR_Integer) 100:
#line 2968 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profdeep"))
#line 2968 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 33;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                      case (MR_Integer) 116:
#line 2968 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "proftime"))
#line 2968 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 34;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                    }
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 114:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 98:
#line 2968 "handle_options.m"
              if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 109))))
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 2968 "handle_options.m"
                  case (MR_Integer) 0:
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 35;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                  case (MR_Integer) 100:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
                    switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 5)) {
#line 2968 "handle_options.m"
                      case (MR_Integer) 0:
#line 2968 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 36;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                      case (MR_Integer) 112:
#line 2968 "handle_options.m"
                        if (MR_offset_streq(6, libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp"))
#line 2968 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 37;
#line 2968 "handle_options.m"
                        break;
#line 2968 "handle_options.m"
                    }
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                  case (MR_Integer) 112:
#line 2968 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp"))
#line 2968 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 38;
#line 2968 "handle_options.m"
                    break;
#line 2968 "handle_options.m"
                }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 101:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "reg"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 39;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 115:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 112:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "spf"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 40;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 115:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 41;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 116:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "stseg"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 42;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
        case (MR_Integer) 116:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 2968 "handle_options.m"
            case (MR_Integer) 104:
#line 2968 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "threadscope"))
#line 2968 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 43;
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 114:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 0:
#line 2968 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 44;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 115:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "trseg"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 45;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
            case (MR_Integer) 115:
#line 2968 "handle_options.m"
#line 2968 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 2968 "handle_options.m"
                case (MR_Integer) 99:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "tsc"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 46;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
                case (MR_Integer) 119:
#line 2968 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "tsw"))
#line 2968 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 47;
#line 2968 "handle_options.m"
                  break;
#line 2968 "handle_options.m"
              }
#line 2968 "handle_options.m"
              break;
#line 2968 "handle_options.m"
          }
#line 2968 "handle_options.m"
          break;
#line 2968 "handle_options.m"
      }
#line 2968 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 2968 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 2968 "handle_options.m"
      else
#line 2968 "handle_options.m"
        {
#line 2968 "handle_options.m"
          /* we found a match; look up the results */
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2968 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2968 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2968 "handle_options.m"
        }
#line 2968 "handle_options.m"
    }
#line 2968 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2968 "handle_options.m"
  }
#line 2961 "handle_options.m"
}

#line 2901 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2901 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2901 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2901 "handle_options.m"
{
#line 2904 "handle_options.m"
  {
#line 2904 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2904 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2904 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 2904 "handle_options.m"
    else
#line 2905 "handle_options.m"
      {
#line 2905 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 2905 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 2905 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 2905 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 2905 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 2910 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2912 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 2910 "handle_options.m"
        else
#line 2907 "handle_options.m"
          {
#line 2907 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 2907 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 2907 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 2907 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 2907 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 2907 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 2907 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 2905 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 2905 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 2910 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2912 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 2910 "handle_options.m"
            else
#line 2907 "handle_options.m"
              {
#line 2907 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 2907 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 2907 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 2907 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 2908 "handle_options.m"
                {
#line 2908 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 2909 "handle_options.m"
                {
#line 2909 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2909 "handle_options.m"
                }
#line 2909 "handle_options.m"
                {
#line 2909 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 2909 "handle_options.m"
                }
#line 2909 "handle_options.m"
                {
#line 2909 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 2909 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 2909 "handle_options.m"
                }
#line 2909 "handle_options.m"
                {
#line 2909 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 2907 "handle_options.m"
              }
#line 2909 "handle_options.m"
            {
#line 2909 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2909 "handle_options.m"
            }
#line 2909 "handle_options.m"
            {
#line 2909 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2909 "handle_options.m"
            }
#line 2909 "handle_options.m"
            {
#line 2909 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 2909 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2909 "handle_options.m"
            }
#line 2909 "handle_options.m"
            {
#line 2909 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 2909 "handle_options.m"
              return;
            }
#line 2907 "handle_options.m"
          }
#line 2905 "handle_options.m"
      }
#line 2904 "handle_options.m"
  }
#line 2901 "handle_options.m"
}

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2764 "handle_options.m"
{
#line 2764 "handle_options.m"
  {
#line 2764 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2764 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2764 "handle_options.m"
  }
#line 2764 "handle_options.m"
}

#line 2765 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2765 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2765 "handle_options.m"
{
#line 2765 "handle_options.m"
  {
#line 2765 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2765 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2765 "handle_options.m"
    {
#line 2765 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2765 "handle_options.m"
      return;
    }
#line 2765 "handle_options.m"
  }
#line 2765 "handle_options.m"
}

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2764 "handle_options.m"
{
#line 2764 "handle_options.m"
  {
#line 2764 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2766 "handle_options.m"
    {
#line 2766 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2766 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2766 "handle_options.m"
      {
#line 2766 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2766 "handle_options.m"
        return;
      }
#line 2764 "handle_options.m"
  }
#line 2764 "handle_options.m"
}

#line 2764 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2764 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2764 "handle_options.m"
{
#line 2764 "handle_options.m"
  {
#line 2764 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2764 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2764 "handle_options.m"
      {
#line 6886 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2765 "handle_options.m"
        {
#line 2765 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2764 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2764 "handle_options.m"
      }
#line 2764 "handle_options.m"
    else
#line 2764 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2764 "handle_options.m"
  }
#line 2764 "handle_options.m"
}

#line 2761 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2761 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2761 "handle_options.m"
{
#line 2761 "handle_options.m"
  {
#line 2761 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2761 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2761 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2764 "handle_options.m"
    {
#line 2764 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2764 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2764 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2761 "handle_options.m"
  }
#line 2761 "handle_options.m"
}

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2755 "handle_options.m"
{
#line 2755 "handle_options.m"
  {
#line 2755 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2755 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2755 "handle_options.m"
  }
#line 2755 "handle_options.m"
}

#line 2756 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2756 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2756 "handle_options.m"
{
#line 2756 "handle_options.m"
  {
#line 2756 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2756 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2756 "handle_options.m"
    {
#line 2756 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2756 "handle_options.m"
      return;
    }
#line 2756 "handle_options.m"
  }
#line 2756 "handle_options.m"
}

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2755 "handle_options.m"
{
#line 2755 "handle_options.m"
  {
#line 2755 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2758 "handle_options.m"
    {
#line 2758 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2757 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2757 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2757 "handle_options.m"
      {
#line 2757 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2757 "handle_options.m"
        return;
      }
#line 2755 "handle_options.m"
  }
#line 2755 "handle_options.m"
}

#line 2755 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2755 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2755 "handle_options.m"
{
#line 2755 "handle_options.m"
  {
#line 2755 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2755 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2755 "handle_options.m"
      {
#line 7032 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2756 "handle_options.m"
        {
#line 2756 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2755 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2755 "handle_options.m"
      }
#line 2755 "handle_options.m"
    else
#line 2755 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2755 "handle_options.m"
  }
#line 2755 "handle_options.m"
}

#line 2752 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2752 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2752 "handle_options.m"
{
#line 2752 "handle_options.m"
  {
#line 2752 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2752 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2752 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2755 "handle_options.m"
    {
#line 2755 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2755 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2755 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2752 "handle_options.m"
  }
#line 2752 "handle_options.m"
}

#line 2779 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2779 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2779 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2779 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2779 "handle_options.m"
{
#line 2779 "handle_options.m"
  {
#line 2779 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2779 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2779 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2779 "handle_options.m"
    {
#line 2779 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2779__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2779 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2779 "handle_options.m"
      {
#line 2779 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2779 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2779 "handle_options.m"
      }
#line 2779 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2779 "handle_options.m"
  }
#line 2779 "handle_options.m"
}

#line 2734 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2734 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2734 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2734 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2734 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2734 "handle_options.m"
{
#line 7145 "libs.handle_options.c"
  {
#line 7147 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7149 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2778 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3243 "handle_options.m"
    {
#line 3243 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3244 "handle_options.m"
    {
#line 3244 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2778 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2778 "handle_options.m"
      {
#line 2779 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[18];
#line 7176 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2782 "handle_options.m"
        {
#line 2782 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2778 "handle_options.m"
      }
#line 7185 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7187 "libs.handle_options.c"
      {
#line 7189 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7191 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2785 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2785 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2784 "handle_options.m"
        {
#line 2784 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2785 "handle_options.m"
        {
#line 2785 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2785 "handle_options.m"
        {
#line 2785 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2785 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7215 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7217 "libs.handle_options.c"
          {
#line 7219 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;

#line 2786 "handle_options.m"
            {
#line 2786 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 637 "handle_options.m"
            {
#line 637 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_39_39)));
            }
#line 2749 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7234 "libs.handle_options.c"
          }
#line 7236 "libs.handle_options.c"
        else
#line 7238 "libs.handle_options.c"
          {
#line 2743 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2789 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2743 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2743 "handle_options.m"
            {
#line 2743 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2745 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2744 "handle_options.m"
              {
#line 2744 "handle_options.m"
                MR_Word base;
#line 2744 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2744 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2744 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2744 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2744 "handle_options.m"
              }
#line 2745 "handle_options.m"
            else
#line 2745 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7272 "libs.handle_options.c"
          }
#line 7274 "libs.handle_options.c"
      }
#line 7276 "libs.handle_options.c"
    else
#line 7278 "libs.handle_options.c"
      {
#line 7280 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;

#line 2792 "handle_options.m"
        {
#line 2792 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 637 "handle_options.m"
        {
#line 637 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_42_42)));
        }
#line 2749 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7295 "libs.handle_options.c"
      }
#line 7297 "libs.handle_options.c"
  }
#line 2734 "handle_options.m"
}

#line 2711 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2711 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2711 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2711 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2711 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2711 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2711 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2711 "handle_options.m"
{
#line 2718 "handle_options.m"
  {
#line 2718 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2716 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2716 "handle_options.m"
    {
#line 2716 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2718 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2717 "handle_options.m"
      {
#line 2717 "handle_options.m"
        {
#line 2717 "handle_options.m"
          MR_Word base;
#line 2717 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2717 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2717 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2717 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2717 "handle_options.m"
        }
#line 2717 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2717 "handle_options.m"
      }
#line 2718 "handle_options.m"
    else
#line 2719 "handle_options.m"
      {
#line 2719 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2719 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2719 "handle_options.m"
        MR_String libs__handle_options__V_24_24;

#line 2720 "handle_options.m"
        {
#line 2720 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2719 "handle_options.m"
        {
#line 2719 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2719 "handle_options.m"
        {
#line 2719 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 637 "handle_options.m"
        {
#line 637 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_20_20)));
        }
#line 2719 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2719 "handle_options.m"
      }
#line 2718 "handle_options.m"
  }
#line 2711 "handle_options.m"
}

#line 2699 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2699 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2699 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2699 "handle_options.m"
{
#line 2699 "handle_options.m"
  {
#line 2699 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2699 "handle_options.m"
    {
#line 2699 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2699 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2699 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2699 "handle_options.m"
  }
#line 2699 "handle_options.m"
}

#line 2699 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2699 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2699 "handle_options.m"
{
#line 2699 "handle_options.m"
  {
#line 2699 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2699 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2699 "handle_options.m"
    {
#line 2699 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2699 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2699 "handle_options.m"
  }
#line 2699 "handle_options.m"
}

#line 2697 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2697 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2697 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2697 "handle_options.m"
{
#line 2697 "handle_options.m"
  {
#line 2697 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2697 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2697 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2697 "handle_options.m"
    {
#line 2697 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2697 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2697 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2697 "handle_options.m"
  }
#line 2697 "handle_options.m"
}

#line 2697 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2697 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2697 "handle_options.m"
{
#line 2697 "handle_options.m"
  {
#line 2697 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2697 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2697 "handle_options.m"
    {
#line 2697 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2697 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2697 "handle_options.m"
  }
#line 2697 "handle_options.m"
}

#line 2689 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2689 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2689 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2689 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2689 "handle_options.m"
{
#line 2689 "handle_options.m"
  {
#line 2689 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2689 "handle_options.m"
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2689 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2689 "handle_options.m"
    {
#line 2689 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2689 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2689 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2689 "handle_options.m"
  }
#line 2689 "handle_options.m"
}

#line 2687 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2687 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2687 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2687 "handle_options.m"
{
#line 2687 "handle_options.m"
  {
#line 2687 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2687 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2687 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2687 "handle_options.m"
    {
#line 2687 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2687 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2687 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2687 "handle_options.m"
  }
#line 2687 "handle_options.m"
}

#line 2679 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2679 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2679 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2679 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2679 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2679 "handle_options.m"
{
#line 2682 "handle_options.m"
  {
#line 2682 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_48_48;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2682 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2687 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2687 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2689 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2689 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2697 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2697 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2699 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2699 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2683 "handle_options.m"
    {
#line 2683 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 626, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2685 "handle_options.m"
    {
#line 2685 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 627, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7695 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7697 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[2];
#line 7699 "libs.handle_options.c"
    libs__handle_options__TypeInfo_48_48 = (MR_Word) &libs__handle_options_scalar_common_2[3];
#line 2687 "handle_options.m"
    {
#line 2687 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[3], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2687 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2687 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2689 "handle_options.m"
    {
#line 2689 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2689 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2689 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2692 "handle_options.m"
    {
#line 2692 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 625, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2697 "handle_options.m"
    {
#line 2697 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2697 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2697 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2697 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2697 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[16]));
#line 2697 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2697 "handle_options.m"
    }
#line 2697 "handle_options.m"
    {
#line 2697 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2697 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2697 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2699 "handle_options.m"
    {
#line 2699 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2699 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2699 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2699 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2699 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2699 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2699 "handle_options.m"
    }
#line 2699 "handle_options.m"
    {
#line 2699 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2699 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2699 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2701 "handle_options.m"
    {
#line 2701 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2701 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2701 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2701 "handle_options.m"
    }
#line 2701 "handle_options.m"
    {
#line 2701 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 625, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2701 "handle_options.m"
      return;
    }
#line 2682 "handle_options.m"
  }
#line 2679 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2626 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2626 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7819 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2626 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2626 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7852 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7886 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7919 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 7951 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7969 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2626 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7986 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8004 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2626 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2626 "handle_options.m"
{
#line 2626 "handle_options.m"
  {
#line 2626 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8036 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
  }
#line 2626 "handle_options.m"
}

#line 2448 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_grade_component_compatibility_5_p_0(
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__Globals_6,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__Target_7,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_8,
#line 2448 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_22,
#line 2448 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_23)
#line 2448 "handle_options.m"
{
#line 2452 "handle_options.m"
  {
#line 2452 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2452 "handle_options.m"
    MR_String libs__handle_options__TargetStr_10;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__ProfileTime_14;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__ProfileMemory_15;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_16;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__TrailSegments_17;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__StackSegments_18;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__SinglePrecFloat_20;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2452 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_58_58;

#line 2453 "handle_options.m"
    {
#line 2453 "handle_options.m"
      libs__handle_options__TargetStr_10 = libs__globals__compilation_target_string_1_f_0(libs__handle_options__Target_7);
    }
#line 2460 "handle_options.m"
#line 2460 "handle_options.m"
    switch (libs__handle_options__Target_7) {
#line 2460 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2460 "handle_options.m"
      case (MR_Integer) 0:
#line 2458 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2460 "handle_options.m"
        break;
#line 2460 "handle_options.m"
      case (MR_Integer) 1:
#line 2460 "handle_options.m"
      case (MR_Integer) 3:
#line 2460 "handle_options.m"
      case (MR_Integer) 2:
#line 2471 "handle_options.m"
#line 2471 "handle_options.m"
        switch (libs__handle_options__GC_Method_8) {
#line 2471 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2471 "handle_options.m"
          case (MR_Integer) 5:
#line 2486 "handle_options.m"
            {
#line 2486 "handle_options.m"
              MR_String libs__handle_options__AGC_IncompatibleMsg_13;
#line 2486 "handle_options.m"
              MR_String libs__handle_options__V_81_81;

#line 2489 "handle_options.m"
              {
#line 2489 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__TargetStr_10, &libs__handle_options__V_81_81);
              }
#line 2487 "handle_options.m"
              {
#line 2487 "handle_options.m"
                libs__handle_options__AGC_IncompatibleMsg_13 = mercury__string__f_43_43_2_f_0((MR_String) "use of the accurate GC is incompatible with target language ", libs__handle_options__V_81_81);
              }
#line 2490 "handle_options.m"
              {
#line 2490 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__AGC_IncompatibleMsg_13, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2486 "handle_options.m"
            }
#line 2471 "handle_options.m"
            break;
#line 2471 "handle_options.m"
          case (MR_Integer) 0:
#line 2468 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2471 "handle_options.m"
            break;
#line 2471 "handle_options.m"
          case (MR_Integer) 2:
#line 2471 "handle_options.m"
          case (MR_Integer) 3:
#line 2474 "handle_options.m"
            {
#line 2474 "handle_options.m"
              MR_String libs__handle_options__BoehmIncompatibleMsg_11;
#line 2474 "handle_options.m"
              MR_String libs__handle_options__V_73_73;

#line 2477 "handle_options.m"
              {
#line 2477 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__TargetStr_10, &libs__handle_options__V_73_73);
              }
#line 2475 "handle_options.m"
              {
#line 2475 "handle_options.m"
                libs__handle_options__BoehmIncompatibleMsg_11 = mercury__string__f_43_43_2_f_0((MR_String) "use of the Boehm GC is incompatible with target language ", libs__handle_options__V_73_73);
              }
#line 2478 "handle_options.m"
              {
#line 2478 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__BoehmIncompatibleMsg_11, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2474 "handle_options.m"
            }
#line 2471 "handle_options.m"
            break;
#line 2471 "handle_options.m"
          case (MR_Integer) 4:
#line 2480 "handle_options.m"
            {
#line 2480 "handle_options.m"
              MR_String libs__handle_options__HGC_IncompatibleMsg_12;
#line 2480 "handle_options.m"
              MR_String libs__handle_options__V_65_65;

#line 2483 "handle_options.m"
              {
#line 2483 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__TargetStr_10, &libs__handle_options__V_65_65);
              }
#line 2481 "handle_options.m"
              {
#line 2481 "handle_options.m"
                libs__handle_options__HGC_IncompatibleMsg_12 = mercury__string__f_43_43_2_f_0((MR_String) "use of HGC is incompatible with target language ", libs__handle_options__V_65_65);
              }
#line 2484 "handle_options.m"
              {
#line 2484 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__HGC_IncompatibleMsg_12, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2480 "handle_options.m"
            }
#line 2471 "handle_options.m"
            break;
#line 2471 "handle_options.m"
          case (MR_Integer) 1:
#line 2469 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2471 "handle_options.m"
            break;
#line 2471 "handle_options.m"
        }
#line 2460 "handle_options.m"
        break;
#line 2460 "handle_options.m"
    }
#line 2496 "handle_options.m"
    {
#line 2496 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 190, &libs__handle_options__ProfileTime_14);
    }
#line 2509 "handle_options.m"
#line 2509 "handle_options.m"
    switch (libs__handle_options__ProfileTime_14) {
#line 2509 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2509 "handle_options.m"
      case (MR_Integer) 0:
#line 2510 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_41_41 = libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2509 "handle_options.m"
        break;
#line 2509 "handle_options.m"
      case (MR_Integer) 1:
#line 2506 "handle_options.m"
#line 2506 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2506 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2506 "handle_options.m"
          case (MR_Integer) 0:
#line 2507 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_41_41 = libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2506 "handle_options.m"
            break;
#line 2506 "handle_options.m"
          case (MR_Integer) 1:
#line 2506 "handle_options.m"
          case (MR_Integer) 3:
#line 2506 "handle_options.m"
          case (MR_Integer) 2:
#line 2503 "handle_options.m"
            {
#line 2503 "handle_options.m"
              MR_String libs__handle_options__V_40_40;

#line 2504 "handle_options.m"
              {
#line 2504 "handle_options.m"
                libs__handle_options__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "time profiling is incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2504 "handle_options.m"
              {
#line 2504 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_40_40, libs__handle_options__STATE_VARIABLE_Errors_38_38, &libs__handle_options__STATE_VARIABLE_Errors_41_41);
              }
#line 2503 "handle_options.m"
            }
#line 2506 "handle_options.m"
            break;
#line 2506 "handle_options.m"
        }
#line 2509 "handle_options.m"
        break;
#line 2509 "handle_options.m"
    }
#line 2515 "handle_options.m"
    {
#line 2515 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 191, &libs__handle_options__ProfileMemory_15);
    }
#line 2528 "handle_options.m"
#line 2528 "handle_options.m"
    switch (libs__handle_options__ProfileMemory_15) {
#line 2528 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2528 "handle_options.m"
      case (MR_Integer) 0:
#line 2529 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_45_45 = libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2528 "handle_options.m"
        break;
#line 2528 "handle_options.m"
      case (MR_Integer) 1:
#line 2525 "handle_options.m"
#line 2525 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2525 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2525 "handle_options.m"
          case (MR_Integer) 0:
#line 2526 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_45_45 = libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2525 "handle_options.m"
            break;
#line 2525 "handle_options.m"
          case (MR_Integer) 1:
#line 2525 "handle_options.m"
          case (MR_Integer) 3:
#line 2525 "handle_options.m"
          case (MR_Integer) 2:
#line 2522 "handle_options.m"
            {
#line 2522 "handle_options.m"
              MR_String libs__handle_options__V_44_44;

#line 2523 "handle_options.m"
              {
#line 2523 "handle_options.m"
                libs__handle_options__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "memory profiling is incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2523 "handle_options.m"
              {
#line 2523 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Errors_41_41, &libs__handle_options__STATE_VARIABLE_Errors_45_45);
              }
#line 2522 "handle_options.m"
            }
#line 2525 "handle_options.m"
            break;
#line 2525 "handle_options.m"
        }
#line 2528 "handle_options.m"
        break;
#line 2528 "handle_options.m"
    }
#line 2538 "handle_options.m"
    {
#line 2538 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 215, &libs__handle_options__UseTrail_16);
    }
#line 2539 "handle_options.m"
    {
#line 2539 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 216, &libs__handle_options__TrailSegments_17);
    }
#line 2543 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseTrail_16 == (MR_Integer) 1);
#line 2544 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2544 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__TrailSegments_17 == (MR_Integer) 1);
#line 2557 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2554 "handle_options.m"
#line 2554 "handle_options.m"
      switch (libs__handle_options__Target_7) {
#line 2554 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2554 "handle_options.m"
        case (MR_Integer) 0:
#line 2555 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_50_50 = libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2554 "handle_options.m"
          break;
#line 2554 "handle_options.m"
        case (MR_Integer) 1:
#line 2554 "handle_options.m"
        case (MR_Integer) 3:
#line 2554 "handle_options.m"
        case (MR_Integer) 2:
#line 2551 "handle_options.m"
          {
#line 2551 "handle_options.m"
            MR_String libs__handle_options__V_49_49;

#line 2552 "handle_options.m"
            {
#line 2552 "handle_options.m"
              libs__handle_options__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "trailing is incompatible with target language ", libs__handle_options__TargetStr_10);
            }
#line 2552 "handle_options.m"
            {
#line 2552 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Errors_45_45, &libs__handle_options__STATE_VARIABLE_Errors_50_50);
            }
#line 2551 "handle_options.m"
          }
#line 2554 "handle_options.m"
          break;
#line 2554 "handle_options.m"
      }
#line 2557 "handle_options.m"
    else
#line 2557 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_50_50 = libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2563 "handle_options.m"
    {
#line 2563 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 225, &libs__handle_options__StackSegments_18);
    }
#line 2585 "handle_options.m"
#line 2585 "handle_options.m"
    switch (libs__handle_options__StackSegments_18) {
#line 2585 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2585 "handle_options.m"
      case (MR_Integer) 0:
#line 2586 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_58_58 = libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2585 "handle_options.m"
        break;
#line 2585 "handle_options.m"
      case (MR_Integer) 1:
#line 2577 "handle_options.m"
#line 2577 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2577 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2577 "handle_options.m"
          case (MR_Integer) 0:
#line 2567 "handle_options.m"
            {
#line 2567 "handle_options.m"
              MR_Word libs__handle_options__HighLevelCode_19;

#line 2568 "handle_options.m"
              {
#line 2568 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 251, &libs__handle_options__HighLevelCode_19);
              }
#line 2574 "handle_options.m"
#line 2574 "handle_options.m"
              switch (libs__handle_options__HighLevelCode_19) {
#line 2574 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2574 "handle_options.m"
                case (MR_Integer) 0:
#line 2575 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Errors_58_58 = libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2574 "handle_options.m"
                  break;
#line 2574 "handle_options.m"
                case (MR_Integer) 1:
#line 2570 "handle_options.m"
                  {
#line 2571 "handle_options.m"
                    {
#line 2571 "handle_options.m"
                      libs__handle_options__add_error_3_p_0((MR_String) "stack segments are incompatible with the high-level C backend", libs__handle_options__STATE_VARIABLE_Errors_50_50, &libs__handle_options__STATE_VARIABLE_Errors_58_58);
                    }
#line 2570 "handle_options.m"
                  }
#line 2574 "handle_options.m"
                  break;
#line 2574 "handle_options.m"
              }
#line 2567 "handle_options.m"
            }
#line 2577 "handle_options.m"
            break;
#line 2577 "handle_options.m"
          case (MR_Integer) 1:
#line 2577 "handle_options.m"
          case (MR_Integer) 3:
#line 2577 "handle_options.m"
          case (MR_Integer) 2:
#line 2581 "handle_options.m"
            {
#line 2581 "handle_options.m"
              MR_String libs__handle_options__V_53_53;

#line 2582 "handle_options.m"
              {
#line 2582 "handle_options.m"
                libs__handle_options__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) "stack segments are incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2582 "handle_options.m"
              {
#line 2582 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_53_53, libs__handle_options__STATE_VARIABLE_Errors_50_50, &libs__handle_options__STATE_VARIABLE_Errors_58_58);
              }
#line 2581 "handle_options.m"
            }
#line 2577 "handle_options.m"
            break;
#line 2577 "handle_options.m"
        }
#line 2585 "handle_options.m"
        break;
#line 2585 "handle_options.m"
    }
#line 2591 "handle_options.m"
    {
#line 2591 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 221, &libs__handle_options__SinglePrecFloat_20);
    }
#line 2606 "handle_options.m"
#line 2606 "handle_options.m"
    switch (libs__handle_options__SinglePrecFloat_20) {
#line 2606 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2606 "handle_options.m"
      case (MR_Integer) 0:
#line 2607 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_23 = libs__handle_options__STATE_VARIABLE_Errors_58_58;
#line 2606 "handle_options.m"
        break;
#line 2606 "handle_options.m"
      case (MR_Integer) 1:
#line 2603 "handle_options.m"
#line 2603 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2603 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2603 "handle_options.m"
          case (MR_Integer) 0:
#line 2604 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_23 = libs__handle_options__STATE_VARIABLE_Errors_58_58;
#line 2603 "handle_options.m"
            break;
#line 2603 "handle_options.m"
          case (MR_Integer) 1:
#line 2603 "handle_options.m"
          case (MR_Integer) 3:
#line 2603 "handle_options.m"
          case (MR_Integer) 2:
#line 2598 "handle_options.m"
            {
#line 2598 "handle_options.m"
              MR_String libs__handle_options__SinglePrecFloatMsg_21;
#line 2598 "handle_options.m"
              MR_String libs__handle_options__V_89_89;

#line 2601 "handle_options.m"
              {
#line 2601 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__TargetStr_10, &libs__handle_options__V_89_89);
              }
#line 2599 "handle_options.m"
              {
#line 2599 "handle_options.m"
                libs__handle_options__SinglePrecFloatMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "single precision floats are incompatible with target language ", libs__handle_options__V_89_89);
              }
#line 2602 "handle_options.m"
              {
#line 2602 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__SinglePrecFloatMsg_21, libs__handle_options__STATE_VARIABLE_Errors_58_58, libs__handle_options__STATE_VARIABLE_Errors_23);
#line 2602 "handle_options.m"
                return;
              }
#line 2598 "handle_options.m"
            }
#line 2603 "handle_options.m"
            break;
#line 2603 "handle_options.m"
        }
#line 2606 "handle_options.m"
        break;
#line 2606 "handle_options.m"
    }
#line 2452 "handle_options.m"
  }
#line 2448 "handle_options.m"
}

#line 2407 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2407 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2407 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2407 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2407 "handle_options.m"
{
#line 2410 "handle_options.m"
  {
#line 2410 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2410 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2411 "handle_options.m"
    {
#line 2411 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2412 "handle_options.m"
    {
#line 2412 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2413 "handle_options.m"
    {
#line 2413 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2427 "handle_options.m"
#line 2427 "handle_options.m"
    switch (libs__handle_options__WarnSmart_9) {
#line 2427 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2427 "handle_options.m"
      case (MR_Integer) 0:
#line 2428 "handle_options.m"
        {
#line 2428 "handle_options.m"
        }
#line 2427 "handle_options.m"
        break;
#line 2427 "handle_options.m"
      case (MR_Integer) 1:
#line 2415 "handle_options.m"
        {
#line 2415 "handle_options.m"
          MR_Word libs__handle_options__Halt_10;

#line 2416 "handle_options.m"
          {
#line 2416 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          }
#line 2418 "handle_options.m"
          {
#line 2418 "handle_options.m"
            mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
          }
#line 2419 "handle_options.m"
          {
#line 2419 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 2420 "handle_options.m"
          {
#line 2420 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
          }
#line 2424 "handle_options.m"
#line 2424 "handle_options.m"
          switch (libs__handle_options__Halt_10) {
#line 2424 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2424 "handle_options.m"
            case (MR_Integer) 0:
#line 2425 "handle_options.m"
              {
#line 2425 "handle_options.m"
              }
#line 2424 "handle_options.m"
              break;
#line 2424 "handle_options.m"
            case (MR_Integer) 1:
#line 2422 "handle_options.m"
              {
#line 2423 "handle_options.m"
                {
#line 2423 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2423 "handle_options.m"
                  return;
                }
#line 2422 "handle_options.m"
              }
#line 2424 "handle_options.m"
              break;
#line 2424 "handle_options.m"
          }
#line 2415 "handle_options.m"
        }
#line 2427 "handle_options.m"
        break;
#line 2427 "handle_options.m"
    }
#line 2410 "handle_options.m"
  }
#line 2407 "handle_options.m"
}

#line 2392 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2392 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2392 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2392 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2392 "handle_options.m"
{
#line 2396 "handle_options.m"
  {
#line 2396 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2396 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2397 "handle_options.m"
    {
#line 2397 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2399 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2399 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2400 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2403 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2410 "handle_options.m"
      {
#line 2410 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2411 "handle_options.m"
        {
#line 2411 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2412 "handle_options.m"
        {
#line 2412 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2413 "handle_options.m"
        {
#line 2413 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2427 "handle_options.m"
#line 2427 "handle_options.m"
        switch (libs__handle_options__WarnSmart_29) {
#line 2427 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2427 "handle_options.m"
          case (MR_Integer) 0:
#line 2428 "handle_options.m"
            {
#line 2428 "handle_options.m"
            }
#line 2427 "handle_options.m"
            break;
#line 2427 "handle_options.m"
          case (MR_Integer) 1:
#line 2415 "handle_options.m"
            {
#line 2415 "handle_options.m"
              MR_Word libs__handle_options__Halt_30;

#line 2416 "handle_options.m"
              {
#line 2416 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
              }
#line 2418 "handle_options.m"
              {
#line 2418 "handle_options.m"
                mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
              }
#line 2419 "handle_options.m"
              {
#line 2419 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
#line 2420 "handle_options.m"
              {
#line 2420 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
              }
#line 2424 "handle_options.m"
#line 2424 "handle_options.m"
              switch (libs__handle_options__Halt_30) {
#line 2424 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2424 "handle_options.m"
                case (MR_Integer) 0:
#line 2425 "handle_options.m"
                  {
#line 2425 "handle_options.m"
                  }
#line 2424 "handle_options.m"
                  break;
#line 2424 "handle_options.m"
                case (MR_Integer) 1:
#line 2422 "handle_options.m"
                  {
#line 2423 "handle_options.m"
                    {
#line 2423 "handle_options.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2423 "handle_options.m"
                      return;
                    }
#line 2422 "handle_options.m"
                  }
#line 2424 "handle_options.m"
                  break;
#line 2424 "handle_options.m"
              }
#line 2415 "handle_options.m"
            }
#line 2427 "handle_options.m"
            break;
#line 2427 "handle_options.m"
        }
#line 2410 "handle_options.m"
      }
#line 2403 "handle_options.m"
    else
#line 2404 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2396 "handle_options.m"
  }
#line 2392 "handle_options.m"
}

#line 2372 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2372 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2372 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2372 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2372 "handle_options.m"
{
#line 2376 "handle_options.m"
  {
#line 2376 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2376 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2376 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2377 "handle_options.m"
    {
#line 2377 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2378 "handle_options.m"
    {
#line 2378 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2380 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2380 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2380 "handle_options.m"
      {
#line 2381 "handle_options.m"
        {
#line 2381 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2381 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2380 "handle_options.m"
      }
#line 2384 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 637 "handle_options.m"
      {
#line 637 "handle_options.m"
        {
#line 637 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_17 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_16, ((MR_Box) (libs__handle_options__ErrorMessage_11)));
        }
#line 637 "handle_options.m"
      }
#line 2384 "handle_options.m"
    else
#line 2384 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2376 "handle_options.m"
  }
#line 2372 "handle_options.m"
}

#line 2354 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2354 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2354 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2354 "handle_options.m"
{
#line 2358 "handle_options.m"
  {
#line 2358 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2358 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2359 "handle_options.m"
    {
#line 2359 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2362 "handle_options.m"
#line 2362 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2362 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2362 "handle_options.m"
      case (MR_Integer) 0:
#line 2364 "handle_options.m"
        {
#line 2364 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2364 "handle_options.m"
          return;
        }
#line 2362 "handle_options.m"
        break;
#line 2362 "handle_options.m"
      case (MR_Integer) 1:
#line 2361 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2362 "handle_options.m"
        break;
#line 2362 "handle_options.m"
    }
#line 2358 "handle_options.m"
  }
#line 2354 "handle_options.m"
}

#line 2338 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2338 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2338 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2338 "handle_options.m"
{
#line 2341 "handle_options.m"
  {
#line 2341 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2341 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2346 "handle_options.m"
#line 2346 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2346 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2346 "handle_options.m"
      case (MR_Integer) 0:
#line 2347 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
      case (MR_Integer) 1:
#line 2345 "handle_options.m"
        {
#line 2345 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2345 "handle_options.m"
          return;
        }
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
    }
#line 2341 "handle_options.m"
  }
#line 2338 "handle_options.m"
}

#line 2258 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2258 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2258 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2258 "handle_options.m"
{
#line 2260 "handle_options.m"
  {
#line 2260 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2260 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2260 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2280 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 365, &libs__handle_options__SourceOptionValue_57);
    }
#line 2346 "handle_options.m"
#line 2346 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_57) {
#line 2346 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2346 "handle_options.m"
      case (MR_Integer) 0:
#line 2347 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
      case (MR_Integer) 1:
#line 2345 "handle_options.m"
        {
#line 2345 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 463, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
        }
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
    }
#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 469, &libs__handle_options__SourceOptionValue_65);
    }
#line 2346 "handle_options.m"
#line 2346 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_65) {
#line 2346 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2346 "handle_options.m"
      case (MR_Integer) 0:
#line 2347 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
      case (MR_Integer) 1:
#line 2345 "handle_options.m"
        {
#line 2345 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 466, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
        }
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
    }
#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 469, &libs__handle_options__SourceOptionValue_73);
    }
#line 2346 "handle_options.m"
#line 2346 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_73) {
#line 2346 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2346 "handle_options.m"
      case (MR_Integer) 0:
#line 2347 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
      case (MR_Integer) 1:
#line 2345 "handle_options.m"
        {
#line 2345 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 459, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
        }
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
    }
#line 2342 "handle_options.m"
    {
#line 2342 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 468, &libs__handle_options__SourceOptionValue_81);
    }
#line 2346 "handle_options.m"
#line 2346 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_81) {
#line 2346 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2346 "handle_options.m"
      case (MR_Integer) 0:
#line 2347 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
      case (MR_Integer) 1:
#line 2345 "handle_options.m"
        {
#line 2345 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
        }
#line 2346 "handle_options.m"
        break;
#line 2346 "handle_options.m"
    }
#line 2274 "handle_options.m"
    {
#line 2274 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 469, &libs__handle_options__OptFrames_4);
    }
#line 2275 "handle_options.m"
    {
#line 2275 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 463, &libs__handle_options__OptLocalVars_5);
    }
#line 2276 "handle_options.m"
    {
#line 2276 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 472, &libs__handle_options__OptRepeat_6);
    }
#line 2278 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2279 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2279 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2280 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2280 "handle_options.m"
      {
#line 2281 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2281 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2280 "handle_options.m"
      }
#line 2288 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2287 "handle_options.m"
      {
#line 2287 "handle_options.m"
        {
#line 2287 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 472, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2287 "handle_options.m"
      }
#line 2288 "handle_options.m"
    else
#line 2288 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2294 "handle_options.m"
    {
#line 2294 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 240, &libs__handle_options__UnboxedFloat_7);
    }
#line 2300 "handle_options.m"
#line 2300 "handle_options.m"
    switch (libs__handle_options__UnboxedFloat_7) {
#line 2300 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2300 "handle_options.m"
      case (MR_Integer) 0:
#line 2309 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2300 "handle_options.m"
        break;
#line 2300 "handle_options.m"
      case (MR_Integer) 1:
#line 2299 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2300 "handle_options.m"
        break;
#line 2300 "handle_options.m"
    }
#line 2311 "handle_options.m"
    {
#line 2311 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2311 "handle_options.m"
    }
#line 2311 "handle_options.m"
    {
#line 2311 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 444, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2316 "handle_options.m"
    {
#line 2316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 246, &libs__handle_options__NonLocalGotos_9);
    }
#line 2317 "handle_options.m"
    {
#line 2317 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 248, &libs__handle_options__AsmLabels_10);
    }
#line 2319 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2319 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2320 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2328 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2327 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2328 "handle_options.m"
    else
#line 2329 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2331 "handle_options.m"
    {
#line 2331 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2331 "handle_options.m"
    }
#line 2331 "handle_options.m"
    {
#line 2331 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 445, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2331 "handle_options.m"
      return;
    }
#line 2260 "handle_options.m"
  }
#line 2258 "handle_options.m"
}

#line 2121 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2121 "handle_options.m"
{
#line 2121 "handle_options.m"
  {
#line 2121 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2121 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__conv10_HeadVar__3_1466;

#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1466 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2121 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1466));
#line 2121 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2121 "handle_options.m"
  }
#line 2121 "handle_options.m"
}

#line 2119 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
#line 2119 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2119 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2119 "handle_options.m"
{
#line 2119 "handle_options.m"
  {
#line 2119 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2119 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2119 "handle_options.m"
    MR_String libs__handle_options__conv9_HeadVar__3_1460;

#line 2119 "handle_options.m"
    {
#line 2119 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1460 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2119 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1460));
#line 2119 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2119 "handle_options.m"
  }
#line 2119 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2128 "handle_options.m"
{
#line 2128 "handle_options.m"
  {
#line 2128 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2128 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__conv8_HeadVar__2_1455;

#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1455 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2128 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1455));
#line 2128 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2127 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2127 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2127 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2127 "handle_options.m"
{
#line 2127 "handle_options.m"
  {
#line 2127 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2127 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2127 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1450;

#line 2127 "handle_options.m"
    {
#line 2127 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1450 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2127__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2127 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1450));
#line 2127 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2127 "handle_options.m"
  }
#line 2127 "handle_options.m"
}

#line 2097 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2097 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2097 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2097 "handle_options.m"
{
#line 2097 "handle_options.m"
  {
#line 2097 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2097 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2097 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1437;

#line 2097 "handle_options.m"
    {
#line 2097 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1437 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2097__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2097 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1437));
#line 2097 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2097 "handle_options.m"
  }
#line 2097 "handle_options.m"
}

#line 2093 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2093 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2093 "handle_options.m"
{
#line 2093 "handle_options.m"
  {
#line 2093 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2093 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2093 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1431;

#line 2093 "handle_options.m"
    {
#line 2093 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1431 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2093__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2093 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1431));
#line 2093 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2093 "handle_options.m"
  }
#line 2093 "handle_options.m"
}

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2075 "handle_options.m"
{
#line 2075 "handle_options.m"
  {
#line 2075 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2075 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2075 "handle_options.m"
    {
#line 2075 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2075 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2075 "handle_options.m"
  }
#line 2075 "handle_options.m"
}

#line 2075 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2075 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2075 "handle_options.m"
{
#line 2075 "handle_options.m"
  {
#line 2075 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2075 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2075 "handle_options.m"
    {
#line 2075 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2075__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2075 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2075 "handle_options.m"
  }
#line 2075 "handle_options.m"
}

#line 2057 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2057 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2057 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2057 "handle_options.m"
{
#line 2057 "handle_options.m"
  {
#line 2057 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2057 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2057 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1412;

#line 2057 "handle_options.m"
    {
#line 2057 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1412 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2057__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2057 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1412));
#line 2057 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2057 "handle_options.m"
  }
#line 2057 "handle_options.m"
}

#line 2021 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
#line 2021 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2021 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2021 "handle_options.m"
{
#line 2021 "handle_options.m"
  {
#line 2021 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2021 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2021 "handle_options.m"
    MR_String libs__handle_options__conv3_HeadVar__3_1393;

#line 2021 "handle_options.m"
    {
#line 2021 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1393 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2021__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2021 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1393));
#line 2021 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2021 "handle_options.m"
  }
#line 2021 "handle_options.m"
}

#line 2011 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
#line 2011 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2011 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2011 "handle_options.m"
{
#line 2011 "handle_options.m"
  {
#line 2011 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2011 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2011 "handle_options.m"
    MR_String libs__handle_options__conv2_HeadVar__3_1383;

#line 2011 "handle_options.m"
    {
#line 2011 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1383 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2011__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2011 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1383));
#line 2011 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2011 "handle_options.m"
  }
#line 2011 "handle_options.m"
}

#line 1998 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 1998 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1998 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1998 "handle_options.m"
{
#line 1998 "handle_options.m"
  {
#line 1998 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1998 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1998 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1366;

#line 1998 "handle_options.m"
    {
#line 1998 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1366 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1998__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1998 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1366));
#line 1998 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1998 "handle_options.m"
  }
#line 1998 "handle_options.m"
}

#line 1983 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 1983 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 1983 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 1983 "handle_options.m"
{
#line 1983 "handle_options.m"
  {
#line 1983 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 1983 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 1983 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__3_1351;

#line 1983 "handle_options.m"
    {
#line 1983 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1351 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1983__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 1983 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1351));
#line 1983 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 1983 "handle_options.m"
  }
#line 1983 "handle_options.m"
}

#line 641 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 641 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_37,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_38,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_39,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_40,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_41,
#line 641 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_189,
#line 641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_190,
#line 641 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_191)
#line 641 "handle_options.m"
{
#line 656 "handle_options.m"
  {
#line 656 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1565_1565 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 656 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_45;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_46;
#line 656 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_48;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__GCIsConservative_51;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_52;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_53;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_54;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_56;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_57;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_58;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__Parallel_59;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_60;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_61;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_63;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_66;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_70;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_71;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_72;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_73;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__Smart_75;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_76;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__Statistics_77;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_78;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_82;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_83;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_86;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_87;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_92;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_93;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_99;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_100;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_101;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_102;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_103;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_108;
#line 656 "handle_options.m"
    MR_String libs__handle_options__ExpComp_109;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_110;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__TraceLevelIsNone_111;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_113;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_116;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_117;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_118;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_119;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_120;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_121;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_122;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_123;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_124;
#line 656 "handle_options.m"
    MR_String libs__handle_options__TargetArch_129;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_130;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_135;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_138;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_140;
#line 656 "handle_options.m"
    MR_String libs__handle_options__GradeString_141;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_155;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_158;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_159;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_160;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_161;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_170;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_173;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_174;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_184;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_185;
#line 656 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_188;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_203_203;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_210_210;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_231_231;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_250_250;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_251_251;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_266_266;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_273_273;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_274_274;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_278_278;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_403_403;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_408_408;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_412_412;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_413_413;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_418_418;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_422_422;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_423_423;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_428_428;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_433_433;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_438_438;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_443_443;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_448_448;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_453_453;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_462_462;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_467_467;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_472_472;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_477_477;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_482_482;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_487_487;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_492_492;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_498_498;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_504_504;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_509_509;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_514_514;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_520_520;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_525_525;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_530_530;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_535_535;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_540_540;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_545_545;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_550_550;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_555_555;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_560_560;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_565_565;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_570_570;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_575_575;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_579_579;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_584_584;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_589_589;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_594_594;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_599_599;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_604_604;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_609_609;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_614_614;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_619_619;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_624_624;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_629_629;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_639_639;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_644_644;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_649_649;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_654_654;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_659_659;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_664_664;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_669_669;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_674_674;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_679_679;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_684_684;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_689_689;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_694_694;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_700_700;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_705_705;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_710_710;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_715_715;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_720_720;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_725_725;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_731_731;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_736_736;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_741_741;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_746_746;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_754_754;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_758_758;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_764_764;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_769_769;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_775_775;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_787_787;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_791_791;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_796_796;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_801_801;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_806_806;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_813_813;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_826_826;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_827_827;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_850_850;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_854_854;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_859_859;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_868_868;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_872_872;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_877_877;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_882_882;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_887_887;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_892_892;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_898_898;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_903_903;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_908_908;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_913_913;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_918_918;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_923_923;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_928_928;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_933_933;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_938_938;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_943_943;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_948_948;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_953_953;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_958_958;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1051_1051;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1056_1056;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1060_1060;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1073_1073;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1078_1078;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1087_1087;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1095_1095;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1099_1099;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1104_1104;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1109_1109;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1114_1114;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1119_1119;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1124_1124;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1129_1129;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1178_1178;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1193_1193;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1198_1198;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1223_1223;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1228_1228;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1233_1233;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1239_1239;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1243_1243;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1251_1251;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1256_1256;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1261_1261;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1266_1266;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1271_1271;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1276_1276;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1281_1281;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1286_1286;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1291_1291;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1296_1296;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1301_1301;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1306_1306;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1322_1322;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1330_1330;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1342_1342;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1406_1406;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1427_1427;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_1443_1443;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1444_1444;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__V_1446_1446;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1447_1447;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1487_1487;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1499_1499;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1507_1507;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1519_1519;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1539_1539;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1544_1544;
#line 656 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1550_1550;
#line 1075 "handle_options.m"
    MR_String libs__handle_options__V_74_74;
#line 1237 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_79;
#line 1225 "handle_options.m"
    MR_String libs__handle_options__V_750_750;
#line 1962 "handle_options.m"
    MR_String libs__handle_options__V_1335_1335;
#line 2150 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_175;
#line 2150 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_176;
#line 2227 "handle_options.m"
    MR_Integer libs__handle_options__V_1541_1541;

#line 658 "handle_options.m"
    {
#line 658 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1565_1565, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 622)), &libs__handle_options__InstallCmd_45);
    }
#line 659 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_45, (MR_String) "") == 0);
#line 661 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 660 "handle_options.m"
      libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "handle_options.m"
    else
#line 663 "handle_options.m"
      {
#line 663 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_47;

#line 662 "handle_options.m"
        {
#line 662 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1565_1565, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 623)), &libs__handle_options__InstallCmdDirOption_47);
        }
#line 664 "handle_options.m"
        {
#line 664 "handle_options.m"
          libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 0) = ((MR_Box) (libs__handle_options__InstallCmd_45));
#line 664 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_47));
#line 664 "handle_options.m"
        }
#line 663 "handle_options.m"
      }
#line 668 "handle_options.m"
    {
#line 668 "handle_options.m"
      libs__globals__globals_init_20_p_0(libs__handle_options__OptionTable0_24, libs__handle_options__Target_25, libs__handle_options__GC_Method_26, libs__handle_options__TagsMethod0_27, libs__handle_options__TermNorm_28, libs__handle_options__Term2Norm_29, libs__handle_options__TraceLevel_30, libs__handle_options__TraceSuppress_31, libs__handle_options__SSTraceLevel_32, libs__handle_options__MaybeThreadSafe_33, libs__handle_options__C_CompilerType_34, libs__handle_options__CSharp_CompilerType_35, libs__handle_options__ReuseStrategy_36, libs__handle_options__MaybeFeedbackInfo_37, libs__handle_options__HostEnvType_38, libs__handle_options__SystemEnvType_39, libs__handle_options__TargetEnvType_40, libs__handle_options__FileInstallCmd_46, libs__handle_options__LimitErrorContextsMap_41, &libs__handle_options__STATE_VARIABLE_Globals_196_196);
    }
#line 678 "handle_options.m"
    {
#line 678 "handle_options.m"
      libs__handle_options__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_196_196, libs__handle_options__Target_25, libs__handle_options__GC_Method_26, libs__handle_options__STATE_VARIABLE_Errors_0_189, &libs__handle_options__STATE_VARIABLE_Errors_197_197);
    }
#line 681 "handle_options.m"
    {
#line 681 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_196_196, (MR_Integer) 173, &libs__handle_options__EventSetFileName0_48);
    }
#line 683 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_48, (MR_String) "") == 0);
#line 693 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 685 "handle_options.m"
      {
#line 685 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_49;

#line 684 "handle_options.m"
        {
#line 684 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_49);
        }
#line 690 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_203_203 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 690 "handle_options.m"
        else
#line 687 "handle_options.m"
          {
#line 687 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_50 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_49, (MR_Integer) 0)));
#line 687 "handle_options.m"
            MR_Word libs__handle_options__V_202_202;

#line 689 "handle_options.m"
            {
#line 689 "handle_options.m"
              libs__handle_options__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 689 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_202_202, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_50));
#line 689 "handle_options.m"
            }
#line 688 "handle_options.m"
            {
#line 688 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 173, libs__handle_options__V_202_202, libs__handle_options__STATE_VARIABLE_Globals_196_196, &libs__handle_options__STATE_VARIABLE_Globals_203_203);
            }
#line 687 "handle_options.m"
          }
#line 685 "handle_options.m"
      }
#line 693 "handle_options.m"
    else
#line 694 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_203_203 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 698 "handle_options.m"
    {
#line 698 "handle_options.m"
      libs__handle_options__GCIsConservative_51 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_26);
    }
#line 705 "handle_options.m"
#line 705 "handle_options.m"
    switch (libs__handle_options__GCIsConservative_51) {
#line 705 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "handle_options.m"
      case (MR_Integer) 0:
#line 706 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_210_210 = libs__handle_options__STATE_VARIABLE_Globals_203_203;
#line 705 "handle_options.m"
        break;
#line 705 "handle_options.m"
      case (MR_Integer) 1:
#line 700 "handle_options.m"
        {
#line 700 "handle_options.m"
          MR_Word libs__handle_options__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 700 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_206_206;

#line 701 "handle_options.m"
          {
#line 701 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_205_205, libs__handle_options__STATE_VARIABLE_Globals_203_203, &libs__handle_options__STATE_VARIABLE_Globals_206_206);
          }
#line 703 "handle_options.m"
          {
#line 703 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_205_205, libs__handle_options__STATE_VARIABLE_Globals_206_206, &libs__handle_options__STATE_VARIABLE_Globals_210_210);
          }
#line 700 "handle_options.m"
        }
#line 705 "handle_options.m"
        break;
#line 705 "handle_options.m"
    }
#line 711 "handle_options.m"
    {
#line 711 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_210_210, (MR_Integer) 220, &libs__handle_options__PregeneratedDist_52);
    }
#line 719 "handle_options.m"
#line 719 "handle_options.m"
    switch (libs__handle_options__PregeneratedDist_52) {
#line 719 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 719 "handle_options.m"
      case (MR_Integer) 0:
#line 720 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_231_231 = libs__handle_options__STATE_VARIABLE_Globals_210_210;
#line 719 "handle_options.m"
        break;
#line 719 "handle_options.m"
      case (MR_Integer) 1:
#line 713 "handle_options.m"
        {
#line 713 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_215_215;
#line 713 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_219_219;
#line 713 "handle_options.m"
          MR_Word libs__handle_options__V_222_222;
#line 713 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_223_223;
#line 713 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_227_227;

#line 714 "handle_options.m"
          {
#line 714 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 234, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6]), libs__handle_options__STATE_VARIABLE_Globals_210_210, &libs__handle_options__STATE_VARIABLE_Globals_215_215);
          }
#line 715 "handle_options.m"
          {
#line 715 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), libs__handle_options__STATE_VARIABLE_Globals_215_215, &libs__handle_options__STATE_VARIABLE_Globals_219_219);
          }
#line 716 "handle_options.m"
          libs__handle_options__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 716 "handle_options.m"
          {
#line 716 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_219_219, &libs__handle_options__STATE_VARIABLE_Globals_223_223);
          }
#line 717 "handle_options.m"
          {
#line 717 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 221, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_223_223, &libs__handle_options__STATE_VARIABLE_Globals_227_227);
          }
#line 718 "handle_options.m"
          {
#line 718 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_227_227, &libs__handle_options__STATE_VARIABLE_Globals_231_231);
          }
#line 713 "handle_options.m"
        }
#line 719 "handle_options.m"
        break;
#line 719 "handle_options.m"
    }
#line 727 "handle_options.m"
#line 727 "handle_options.m"
    switch (libs__handle_options__TagsMethod0_27) {
#line 727 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 727 "handle_options.m"
      case (MR_Integer) 2:
#line 727 "handle_options.m"
      case (MR_Integer) 1:
#line 730 "handle_options.m"
        {
#line 731 "handle_options.m"
          {
#line 731 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231, (MR_Integer) 234, &libs__handle_options__NumTagBits0_53);
          }
#line 730 "handle_options.m"
        }
#line 727 "handle_options.m"
        break;
#line 727 "handle_options.m"
      case (MR_Integer) 0:
#line 726 "handle_options.m"
        libs__handle_options__NumTagBits0_53 = (MR_Integer) 0;
#line 727 "handle_options.m"
        break;
#line 727 "handle_options.m"
    }
#line 739 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_27 == (MR_Integer) 1);
#line 739 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 740 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_53 == (MR_Integer) -1);
#line 744 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 742 "handle_options.m"
      {
#line 742 "handle_options.m"
        {
#line 742 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231, (MR_Integer) 239, &libs__handle_options__NumTagBits1_54);
        }
#line 742 "handle_options.m"
      }
#line 744 "handle_options.m"
    else
#line 745 "handle_options.m"
      libs__handle_options__NumTagBits1_54 = libs__handle_options__NumTagBits0_53;
#line 750 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_54 < (MR_Integer) 0);
#line 758 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 751 "handle_options.m"
      {
#line 751 "handle_options.m"
        MR_String libs__handle_options__ProgName_55;
#line 751 "handle_options.m"
        MR_String libs__handle_options__V_1578_1578;
#line 751 "handle_options.m"
        MR_Word libs__handle_options__V_1584_1584;
#line 751 "handle_options.m"
        MR_String libs__handle_options__V_1587_1587;

#line 751 "handle_options.m"
        {
#line 751 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_55);
        }
#line 10546 "libs.handle_options.c"
        libs__handle_options__V_1584_1584 = (MR_Word) &libs__handle_options_scalar_common_3[8];
#line 753 "handle_options.m"
        {
#line 753 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1584_1584, libs__handle_options__ProgName_55, &libs__handle_options__V_1578_1578);
        }
#line 753 "handle_options.m"
        {
#line 753 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1578_1578);
        }
#line 752 "handle_options.m"
        {
#line 752 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 755 "handle_options.m"
        {
#line 755 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1584_1584, libs__handle_options__ProgName_55, &libs__handle_options__V_1587_1587);
        }
#line 755 "handle_options.m"
        {
#line 755 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1587_1587);
        }
#line 754 "handle_options.m"
        {
#line 754 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 756 "handle_options.m"
        {
#line 756 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_231_231);
        }
#line 757 "handle_options.m"
        libs__handle_options__NumTagBits_56 = (MR_Integer) 0;
#line 751 "handle_options.m"
      }
#line 758 "handle_options.m"
    else
#line 759 "handle_options.m"
      libs__handle_options__NumTagBits_56 = libs__handle_options__NumTagBits1_54;
#line 762 "handle_options.m"
    {
#line 762 "handle_options.m"
      libs__handle_options__V_250_250 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_250_250, 0) = ((MR_Box) (libs__handle_options__NumTagBits_56));
#line 762 "handle_options.m"
    }
#line 762 "handle_options.m"
    {
#line 762 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 234, libs__handle_options__V_250_250, libs__handle_options__STATE_VARIABLE_Globals_231_231, &libs__handle_options__STATE_VARIABLE_Globals_251_251);
    }
#line 763 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_56 == (MR_Integer) 0);
#line 766 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 764 "handle_options.m"
      {
#line 764 "handle_options.m"
        libs__handle_options__TagsMethod_57 = (MR_Integer) 0;
#line 765 "handle_options.m"
        {
#line 765 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_57, libs__handle_options__STATE_VARIABLE_Globals_251_251, &libs__handle_options__STATE_VARIABLE_Globals_252_252);
        }
#line 764 "handle_options.m"
      }
#line 766 "handle_options.m"
    else
#line 767 "handle_options.m"
      {
#line 767 "handle_options.m"
        libs__handle_options__TagsMethod_57 = libs__handle_options__TagsMethod0_27;
#line 767 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_252_252 = libs__handle_options__STATE_VARIABLE_Globals_251_251;
#line 767 "handle_options.m"
      }
#line 770 "handle_options.m"
    {
#line 770 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__GradeSupportsParConj_58);
    }
#line 771 "handle_options.m"
    {
#line 771 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 213, &libs__handle_options__Parallel_59);
    }
#line 772 "handle_options.m"
    {
#line 772 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 214, &libs__handle_options__Threadscope_60);
    }
#line 774 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_58 == (MR_Integer) 0);
#line 774 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 775 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_60 == (MR_Integer) 1);
#line 779 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 777 "handle_options.m"
      {
#line 777 "handle_options.m"
        {
#line 777 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_197_197, &libs__handle_options__STATE_VARIABLE_Errors_256_256);
        }
#line 777 "handle_options.m"
      }
#line 779 "handle_options.m"
    else
#line 779 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_256_256 = libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 786 "handle_options.m"
    {
#line 786 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 661, &libs__handle_options__ImplicitParallelism_61);
    }
#line 818 "handle_options.m"
#line 818 "handle_options.m"
    switch (libs__handle_options__ImplicitParallelism_61) {
#line 818 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 818 "handle_options.m"
      case (MR_Integer) 0:
#line 819 "handle_options.m"
        {
#line 819 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 819 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_266_266 = libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 819 "handle_options.m"
        }
#line 818 "handle_options.m"
        break;
#line 818 "handle_options.m"
      case (MR_Integer) 1:
#line 801 "handle_options.m"
#line 801 "handle_options.m"
        switch (libs__handle_options__GradeSupportsParConj_58) {
#line 801 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 801 "handle_options.m"
          case (MR_Integer) 0:
#line 805 "handle_options.m"
            {
#line 813 "handle_options.m"
#line 813 "handle_options.m"
              switch (libs__handle_options__Parallel_59) {
#line 813 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 813 "handle_options.m"
                case (MR_Integer) 0:
#line 814 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 813 "handle_options.m"
                  break;
#line 813 "handle_options.m"
                case (MR_Integer) 1:
#line 807 "handle_options.m"
                  {
#line 808 "handle_options.m"
                    {
#line 808 "handle_options.m"
                      libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_256_256, &libs__handle_options__STATE_VARIABLE_Errors_270_270);
                    }
#line 807 "handle_options.m"
                  }
#line 813 "handle_options.m"
                  break;
#line 813 "handle_options.m"
              }
#line 816 "handle_options.m"
              {
#line 816 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 661, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__STATE_VARIABLE_Globals_266_266);
              }
#line 805 "handle_options.m"
            }
#line 801 "handle_options.m"
            break;
#line 801 "handle_options.m"
          case (MR_Integer) 1:
#line 791 "handle_options.m"
            {
#line 791 "handle_options.m"
              MR_String libs__handle_options__FeedbackFile_62;

#line 792 "handle_options.m"
              {
#line 792 "handle_options.m"
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_252_252, (MR_Integer) 662, &libs__handle_options__FeedbackFile_62);
              }
#line 794 "handle_options.m"
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_62, (MR_String) "") == 0);
#line 798 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 795 "handle_options.m"
                {
#line 795 "handle_options.m"
                  {
#line 795 "handle_options.m"
                    libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_256_256, &libs__handle_options__STATE_VARIABLE_Errors_270_270);
                  }
#line 795 "handle_options.m"
                }
#line 798 "handle_options.m"
              else
#line 798 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Errors_270_270 = libs__handle_options__STATE_VARIABLE_Errors_256_256;
#line 791 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_266_266 = libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 791 "handle_options.m"
            }
#line 801 "handle_options.m"
            break;
#line 801 "handle_options.m"
        }
#line 818 "handle_options.m"
        break;
#line 818 "handle_options.m"
    }
#line 824 "handle_options.m"
    libs__handle_options__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 823 "handle_options.m"
    {
#line 823 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 661, (MR_Integer) 195, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_266_266, &libs__handle_options__STATE_VARIABLE_Globals_274_274);
    }
#line 829 "handle_options.m"
#line 829 "handle_options.m"
    switch (libs__handle_options__GradeSupportsParConj_58) {
#line 829 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 829 "handle_options.m"
      case (MR_Integer) 0:
#line 830 "handle_options.m"
        {
#line 831 "handle_options.m"
          {
#line 831 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 663, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_274_274, &libs__handle_options__STATE_VARIABLE_Globals_278_278);
          }
#line 830 "handle_options.m"
        }
#line 829 "handle_options.m"
        break;
#line 829 "handle_options.m"
      case (MR_Integer) 1:
#line 828 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_278_278 = libs__handle_options__STATE_VARIABLE_Globals_274_274;
#line 829 "handle_options.m"
        break;
#line 829 "handle_options.m"
    }
#line 10807 "libs.handle_options.c"
#line 10808 "libs.handle_options.c"
    switch (libs__handle_options__Target_25) {
#line 10810 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 10812 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 10814 "libs.handle_options.c"
        {
#line 953 "handle_options.m"
          {
#line 953 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 256, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_278_278, &libs__handle_options__STATE_VARIABLE_Globals_403_403);
          }
#line 10821 "libs.handle_options.c"
        }
#line 10823 "libs.handle_options.c"
        break;
#line 10825 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 10827 "libs.handle_options.c"
      case (MR_Integer) 2:
#line 10829 "libs.handle_options.c"
        {
#line 10831 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_281_281;
#line 10833 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_284_284;
#line 10835 "libs.handle_options.c"
          MR_Word libs__handle_options__V_287_287;
#line 10837 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_288_288;
#line 10839 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_292_292;
#line 10841 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_296_296;
#line 10843 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_300_300;
#line 10845 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_304_304;
#line 10847 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_308_308;
#line 10849 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_312_312;
#line 10851 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_316_316;
#line 10853 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_320_320;
#line 10855 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_324_324;
#line 10857 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_328_328;
#line 10859 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_332_332;
#line 10861 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_336_336;

#line 871 "handle_options.m"
          {
#line 871 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_278_278, &libs__handle_options__STATE_VARIABLE_Globals_281_281);
          }
#line 872 "handle_options.m"
          {
#line 872 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 212, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[192]), libs__handle_options__STATE_VARIABLE_Globals_281_281, &libs__handle_options__STATE_VARIABLE_Globals_284_284);
          }
#line 873 "handle_options.m"
          libs__handle_options__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 873 "handle_options.m"
          {
#line 873 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_284_284, &libs__handle_options__STATE_VARIABLE_Globals_288_288);
          }
#line 875 "handle_options.m"
          {
#line 875 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_288_288, &libs__handle_options__STATE_VARIABLE_Globals_292_292);
          }
#line 877 "handle_options.m"
          {
#line 877 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_292_292, &libs__handle_options__STATE_VARIABLE_Globals_296_296);
          }
#line 878 "handle_options.m"
          {
#line 878 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_296_296, &libs__handle_options__STATE_VARIABLE_Globals_300_300);
          }
#line 879 "handle_options.m"
          {
#line 879 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_300_300, &libs__handle_options__STATE_VARIABLE_Globals_304_304);
          }
#line 880 "handle_options.m"
          {
#line 880 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_304_304, &libs__handle_options__STATE_VARIABLE_Globals_308_308);
          }
#line 881 "handle_options.m"
          {
#line 881 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_308_308, &libs__handle_options__STATE_VARIABLE_Globals_312_312);
          }
#line 882 "handle_options.m"
          {
#line 882 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_312_312, &libs__handle_options__STATE_VARIABLE_Globals_316_316);
          }
#line 883 "handle_options.m"
          {
#line 883 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 234, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]), libs__handle_options__STATE_VARIABLE_Globals_316_316, &libs__handle_options__STATE_VARIABLE_Globals_320_320);
          }
#line 884 "handle_options.m"
          {
#line 884 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_320_320, &libs__handle_options__STATE_VARIABLE_Globals_324_324);
          }
#line 885 "handle_options.m"
          {
#line 885 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_324_324, &libs__handle_options__STATE_VARIABLE_Globals_328_328);
          }
#line 886 "handle_options.m"
          {
#line 886 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_328_328, &libs__handle_options__STATE_VARIABLE_Globals_332_332);
          }
#line 888 "handle_options.m"
          {
#line 888 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_287_287, libs__handle_options__STATE_VARIABLE_Globals_332_332, &libs__handle_options__STATE_VARIABLE_Globals_336_336);
          }
#line 10941 "libs.handle_options.c"
#line 10942 "libs.handle_options.c"
          switch (libs__handle_options__Target_25) {
#line 10944 "libs.handle_options.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 10946 "libs.handle_options.c"
            case (MR_Integer) 1:
#line 10948 "libs.handle_options.c"
              {
#line 891 "handle_options.m"
                {
#line 891 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 563, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[193]), libs__handle_options__STATE_VARIABLE_Globals_336_336, &libs__handle_options__STATE_VARIABLE_Globals_403_403);
                }
#line 10955 "libs.handle_options.c"
              }
#line 10957 "libs.handle_options.c"
              break;
#line 10959 "libs.handle_options.c"
            case (MR_Integer) 2:
#line 956 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_403_403 = libs__handle_options__STATE_VARIABLE_Globals_336_336;
#line 10963 "libs.handle_options.c"
              break;
#line 10965 "libs.handle_options.c"
          }
#line 10967 "libs.handle_options.c"
        }
#line 10969 "libs.handle_options.c"
        break;
#line 10971 "libs.handle_options.c"
      case (MR_Integer) 3:
#line 10973 "libs.handle_options.c"
        {
#line 10975 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_343_343;
#line 10977 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_346_346;
#line 10979 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_350_350;
#line 10981 "libs.handle_options.c"
          MR_Word libs__handle_options__V_353_353;
#line 10983 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_354_354;
#line 10985 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_358_358;
#line 10987 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_362_362;
#line 10989 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_366_366;
#line 10991 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_370_370;
#line 10993 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_374_374;
#line 10995 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_378_378;
#line 10997 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_382_382;
#line 10999 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_386_386;
#line 11001 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_390_390;
#line 11003 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_394_394;

#line 915 "handle_options.m"
          {
#line 915 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_278_278, &libs__handle_options__STATE_VARIABLE_Globals_343_343);
          }
#line 916 "handle_options.m"
          {
#line 916 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 212, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[192]), libs__handle_options__STATE_VARIABLE_Globals_343_343, &libs__handle_options__STATE_VARIABLE_Globals_346_346);
          }
#line 917 "handle_options.m"
          {
#line 917 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_346_346, &libs__handle_options__STATE_VARIABLE_Globals_350_350);
          }
#line 918 "handle_options.m"
          libs__handle_options__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 918 "handle_options.m"
          {
#line 918 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_350_350, &libs__handle_options__STATE_VARIABLE_Globals_354_354);
          }
#line 920 "handle_options.m"
          {
#line 920 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_354_354, &libs__handle_options__STATE_VARIABLE_Globals_358_358);
          }
#line 922 "handle_options.m"
          {
#line 922 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_358_358, &libs__handle_options__STATE_VARIABLE_Globals_362_362);
          }
#line 924 "handle_options.m"
          {
#line 924 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_362_362, &libs__handle_options__STATE_VARIABLE_Globals_366_366);
          }
#line 926 "handle_options.m"
          {
#line 926 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_366_366, &libs__handle_options__STATE_VARIABLE_Globals_370_370);
          }
#line 928 "handle_options.m"
          {
#line 928 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_370_370, &libs__handle_options__STATE_VARIABLE_Globals_374_374);
          }
#line 930 "handle_options.m"
          {
#line 930 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_374_374, &libs__handle_options__STATE_VARIABLE_Globals_378_378);
          }
#line 936 "handle_options.m"
          {
#line 936 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_378_378, &libs__handle_options__STATE_VARIABLE_Globals_382_382);
          }
#line 937 "handle_options.m"
          {
#line 937 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_382_382, &libs__handle_options__STATE_VARIABLE_Globals_386_386);
          }
#line 938 "handle_options.m"
          {
#line 938 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_386_386, &libs__handle_options__STATE_VARIABLE_Globals_390_390);
          }
#line 939 "handle_options.m"
          {
#line 939 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_390_390, &libs__handle_options__STATE_VARIABLE_Globals_394_394);
          }
#line 940 "handle_options.m"
          {
#line 940 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_353_353, libs__handle_options__STATE_VARIABLE_Globals_394_394, &libs__handle_options__STATE_VARIABLE_Globals_403_403);
          }
#line 11083 "libs.handle_options.c"
        }
#line 11085 "libs.handle_options.c"
        break;
#line 11087 "libs.handle_options.c"
    }
#line 963 "handle_options.m"
    {
#line 963 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 215, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_403_403, &libs__handle_options__STATE_VARIABLE_Globals_408_408);
    }
#line 970 "handle_options.m"
    libs__handle_options__V_412_412 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[194]);
#line 970 "handle_options.m"
    {
#line 970 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 546, libs__handle_options__V_412_412, libs__handle_options__STATE_VARIABLE_Globals_408_408, &libs__handle_options__STATE_VARIABLE_Globals_413_413);
    }
#line 972 "handle_options.m"
    {
#line 972 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 548, libs__handle_options__V_412_412, libs__handle_options__STATE_VARIABLE_Globals_413_413, &libs__handle_options__STATE_VARIABLE_Globals_418_418);
    }
#line 976 "handle_options.m"
    libs__handle_options__V_422_422 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 976 "handle_options.m"
    {
#line 976 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 246, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_418_418, &libs__handle_options__STATE_VARIABLE_Globals_423_423);
    }
#line 978 "handle_options.m"
    {
#line 978 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 247, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_423_423, &libs__handle_options__STATE_VARIABLE_Globals_428_428);
    }
#line 980 "handle_options.m"
    {
#line 980 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 248, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_428_428, &libs__handle_options__STATE_VARIABLE_Globals_433_433);
    }
#line 983 "handle_options.m"
    {
#line 983 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 253, (MR_Integer) 315, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_433_433, &libs__handle_options__STATE_VARIABLE_Globals_438_438);
    }
#line 987 "handle_options.m"
    {
#line 987 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 456, (MR_Integer) 450, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_438_438, &libs__handle_options__STATE_VARIABLE_Globals_443_443);
    }
#line 991 "handle_options.m"
    {
#line 991 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 612, (MR_Integer) 610, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_443_443, &libs__handle_options__STATE_VARIABLE_Globals_448_448);
    }
#line 995 "handle_options.m"
    {
#line 995 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_448_448, (MR_Integer) 628, &libs__handle_options__LibLinkages0_63);
    }
#line 1001 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "handle_options.m"
      {
#line 999 "handle_options.m"
        {
#line 999 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 628, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[11]), libs__handle_options__STATE_VARIABLE_Globals_448_448, &libs__handle_options__STATE_VARIABLE_Globals_453_453);
        }
#line 998 "handle_options.m"
      }
#line 1001 "handle_options.m"
    else
#line 1002 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_453_453 = libs__handle_options__STATE_VARIABLE_Globals_448_448;
#line 1008 "handle_options.m"
    {
#line 1008 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 610, (MR_Integer) 99, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_453_453, &libs__handle_options__STATE_VARIABLE_Globals_462_462);
    }
#line 1009 "handle_options.m"
    {
#line 1009 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 610, (MR_Integer) 98, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_462_462, &libs__handle_options__STATE_VARIABLE_Globals_467_467);
    }
#line 1014 "handle_options.m"
    {
#line 1014 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 610, (MR_Integer) 633, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_467_467, &libs__handle_options__STATE_VARIABLE_Globals_472_472);
    }
#line 1015 "handle_options.m"
    {
#line 1015 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 633, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_472_472, &libs__handle_options__STATE_VARIABLE_Globals_477_477);
    }
#line 1016 "handle_options.m"
    {
#line 1016 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 610, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_477_477, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
    }
#line 1020 "handle_options.m"
    {
#line 1020 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 615, (MR_Integer) 117, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_482_482, &libs__handle_options__STATE_VARIABLE_Globals_487_487);
    }
#line 1024 "handle_options.m"
    {
#line 1024 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 610, (MR_Integer) 638, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_487_487, &libs__handle_options__STATE_VARIABLE_Globals_492_492);
    }
#line 1029 "handle_options.m"
    {
#line 1029 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_492_492, (MR_Integer) 325, &libs__handle_options__TransOpt_66);
    }
#line 1044 "handle_options.m"
#line 1044 "handle_options.m"
    switch (libs__handle_options__TransOpt_66) {
#line 1044 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1044 "handle_options.m"
      case (MR_Integer) 0:
#line 1045 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_498_498 = libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 1044 "handle_options.m"
        break;
#line 1044 "handle_options.m"
      case (MR_Integer) 1:
#line 1032 "handle_options.m"
        {
#line 1032 "handle_options.m"
          MR_Word libs__handle_options__UsingMMCMake_67;
#line 1032 "handle_options.m"
          MR_Word libs__handle_options__InvokedByMMCMake_68;
#line 1032 "handle_options.m"
          MR_Word libs__handle_options__UsingOrInvokedByMMCMake_69;

#line 1033 "handle_options.m"
          {
#line 1033 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_492_492, (MR_Integer) 610, &libs__handle_options__UsingMMCMake_67);
          }
#line 1034 "handle_options.m"
          {
#line 1034 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_492_492, (MR_Integer) 615, &libs__handle_options__InvokedByMMCMake_68);
          }
#line 1036 "handle_options.m"
          {
#line 1036 "handle_options.m"
            libs__handle_options__UsingOrInvokedByMMCMake_69 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMCMake_67, libs__handle_options__InvokedByMMCMake_68);
          }
#line 1041 "handle_options.m"
#line 1041 "handle_options.m"
          switch (libs__handle_options__UsingOrInvokedByMMCMake_69) {
#line 1041 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1041 "handle_options.m"
            case (MR_Integer) 0:
#line 1042 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_498_498 = libs__handle_options__STATE_VARIABLE_Errors_270_270;
#line 1041 "handle_options.m"
              break;
#line 1041 "handle_options.m"
            case (MR_Integer) 1:
#line 1038 "handle_options.m"
              {
#line 1039 "handle_options.m"
                {
#line 1039 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_270_270, &libs__handle_options__STATE_VARIABLE_Errors_498_498);
                }
#line 1038 "handle_options.m"
              }
#line 1041 "handle_options.m"
              break;
#line 1041 "handle_options.m"
          }
#line 1032 "handle_options.m"
        }
#line 1044 "handle_options.m"
        break;
#line 1044 "handle_options.m"
    }
#line 1050 "handle_options.m"
    {
#line 1050 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_492_492, (MR_Integer) 321, &libs__handle_options__InterModOpt_70);
    }
#line 1052 "handle_options.m"
    {
#line 1052 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_492_492, (MR_Integer) 326, &libs__handle_options__InterModAnalysis_71);
    }
#line 1055 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_70 == (MR_Integer) 1);
#line 1055 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1056 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_71 == (MR_Integer) 1);
#line 1060 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1058 "handle_options.m"
      {
#line 1058 "handle_options.m"
        {
#line 1058 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_498_498, &libs__handle_options__STATE_VARIABLE_Errors_504_504);
        }
#line 1058 "handle_options.m"
      }
#line 1060 "handle_options.m"
    else
#line 1060 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_504_504 = libs__handle_options__STATE_VARIABLE_Errors_498_498;
#line 1064 "handle_options.m"
    {
#line 1064 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1066 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1066 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_509_509 = libs__handle_options__STATE_VARIABLE_Globals_492_492;
#line 1066 "handle_options.m"
    else
#line 1067 "handle_options.m"
      {
#line 1067 "handle_options.m"
        {
#line 1067 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 619, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_492_492, &libs__handle_options__STATE_VARIABLE_Globals_509_509);
        }
#line 1067 "handle_options.m"
      }
#line 1070 "handle_options.m"
    {
#line 1070 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_509_509, (MR_Integer) 94, &libs__handle_options__MaybeStandaloneInt_72);
    }
#line 1072 "handle_options.m"
    {
#line 1072 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_509_509, (MR_Integer) 556, &libs__handle_options__ExtraInitFunctions_73);
    }
#line 1075 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_72)) == (MR_mktag((MR_Integer) 1)));
#line 1075 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1075 "handle_options.m"
      {
#line 1075 "handle_options.m"
        libs__handle_options__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_72, (MR_Integer) 0)));
#line 1076 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_73 == (MR_Integer) 1);
#line 1075 "handle_options.m"
      }
#line 1081 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1078 "handle_options.m"
      {
#line 1078 "handle_options.m"
        {
#line 1078 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_504_504, &libs__handle_options__STATE_VARIABLE_Errors_514_514);
        }
#line 1078 "handle_options.m"
      }
#line 1081 "handle_options.m"
    else
#line 1081 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_514_514 = libs__handle_options__STATE_VARIABLE_Errors_504_504;
#line 1085 "handle_options.m"
    {
#line 1085 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 403, (MR_Integer) 401, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_509_509, &libs__handle_options__STATE_VARIABLE_Globals_520_520);
    }
#line 1087 "handle_options.m"
    {
#line 1087 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 410, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_520_520, &libs__handle_options__STATE_VARIABLE_Globals_525_525);
    }
#line 1089 "handle_options.m"
    {
#line 1089 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 409, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_525_525, &libs__handle_options__STATE_VARIABLE_Globals_530_530);
    }
#line 1090 "handle_options.m"
    {
#line 1090 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 410, (MR_Integer) 13, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_530_530, &libs__handle_options__STATE_VARIABLE_Globals_535_535);
    }
#line 1092 "handle_options.m"
    {
#line 1092 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_535_535, &libs__handle_options__STATE_VARIABLE_Globals_540_540);
    }
#line 1094 "handle_options.m"
    {
#line 1094 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 416, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_540_540, &libs__handle_options__STATE_VARIABLE_Globals_545_545);
    }
#line 1095 "handle_options.m"
    {
#line 1095 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 13, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_545_545, &libs__handle_options__STATE_VARIABLE_Globals_550_550);
    }
#line 1097 "handle_options.m"
    {
#line 1097 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 325, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_550_550, &libs__handle_options__STATE_VARIABLE_Globals_555_555);
    }
#line 1099 "handle_options.m"
    {
#line 1099 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 321, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_555_555, &libs__handle_options__STATE_VARIABLE_Globals_560_560);
    }
#line 1101 "handle_options.m"
    {
#line 1101 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 323, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_560_560, &libs__handle_options__STATE_VARIABLE_Globals_565_565);
    }
#line 1106 "handle_options.m"
    {
#line 1106 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 321, (MR_Integer) 323, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_565_565, &libs__handle_options__STATE_VARIABLE_Globals_570_570);
    }
#line 1108 "handle_options.m"
    {
#line 1108 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 324, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_570_570, &libs__handle_options__STATE_VARIABLE_Globals_575_575);
    }
#line 1117 "handle_options.m"
    {
#line 1117 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 323, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_575_575, &libs__handle_options__STATE_VARIABLE_Globals_579_579);
    }
#line 1119 "handle_options.m"
    {
#line 1119 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 116, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_579_579, &libs__handle_options__STATE_VARIABLE_Globals_584_584);
    }
#line 1121 "handle_options.m"
    {
#line 1121 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 49, (MR_Integer) 48, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_584_584, &libs__handle_options__STATE_VARIABLE_Globals_589_589);
    }
#line 1128 "handle_options.m"
    {
#line 1128 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_589_589, &libs__handle_options__STATE_VARIABLE_Globals_594_594);
    }
#line 1130 "handle_options.m"
    {
#line 1130 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_594_594, &libs__handle_options__STATE_VARIABLE_Globals_599_599);
    }
#line 1132 "handle_options.m"
    {
#line 1132 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_599_599, &libs__handle_options__STATE_VARIABLE_Globals_604_604);
    }
#line 1134 "handle_options.m"
    {
#line 1134 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_604_604, &libs__handle_options__STATE_VARIABLE_Globals_609_609);
    }
#line 1136 "handle_options.m"
    {
#line 1136 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_609_609, &libs__handle_options__STATE_VARIABLE_Globals_614_614);
    }
#line 1138 "handle_options.m"
    {
#line 1138 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_614_614, &libs__handle_options__STATE_VARIABLE_Globals_619_619);
    }
#line 1140 "handle_options.m"
    {
#line 1140 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_619_619, &libs__handle_options__STATE_VARIABLE_Globals_624_624);
    }
#line 1142 "handle_options.m"
    {
#line 1142 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_624_624, &libs__handle_options__STATE_VARIABLE_Globals_629_629);
    }
#line 1144 "handle_options.m"
    {
#line 1144 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_629_629, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
#line 1146 "handle_options.m"
    {
#line 1146 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_639_639);
    }
#line 1148 "handle_options.m"
    {
#line 1148 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_639_639, &libs__handle_options__STATE_VARIABLE_Globals_644_644);
    }
#line 1150 "handle_options.m"
    {
#line 1150 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_644_644, &libs__handle_options__STATE_VARIABLE_Globals_649_649);
    }
#line 1152 "handle_options.m"
    {
#line 1152 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_649_649, &libs__handle_options__STATE_VARIABLE_Globals_654_654);
    }
#line 1154 "handle_options.m"
    {
#line 1154 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 115, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_654_654, &libs__handle_options__STATE_VARIABLE_Globals_659_659);
    }
#line 1160 "handle_options.m"
    {
#line 1160 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 137, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_659_659, &libs__handle_options__STATE_VARIABLE_Globals_664_664);
    }
#line 1162 "handle_options.m"
    {
#line 1162 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 137, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_664_664, &libs__handle_options__STATE_VARIABLE_Globals_669_669);
    }
#line 1164 "handle_options.m"
    {
#line 1164 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 137, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_669_669, &libs__handle_options__STATE_VARIABLE_Globals_674_674);
    }
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 137, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_674_674, &libs__handle_options__STATE_VARIABLE_Globals_679_679);
    }
#line 1168 "handle_options.m"
    {
#line 1168 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 137, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_679_679, &libs__handle_options__STATE_VARIABLE_Globals_684_684);
    }
#line 1173 "handle_options.m"
    {
#line 1173 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 116, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_684_684, &libs__handle_options__STATE_VARIABLE_Globals_689_689);
    }
#line 1180 "handle_options.m"
    {
#line 1180 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 321, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_689_689, &libs__handle_options__STATE_VARIABLE_Globals_694_694);
    }
#line 1188 "handle_options.m"
    {
#line 1188 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_694_694, (MR_Integer) 115, &libs__handle_options__Smart_75);
    }
#line 1189 "handle_options.m"
    {
#line 1189 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 321, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_694_694, &libs__handle_options__STATE_VARIABLE_Globals_700_700);
    }
#line 1191 "handle_options.m"
    {
#line 1191 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 323, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_700_700, &libs__handle_options__STATE_VARIABLE_Globals_705_705);
    }
#line 1200 "handle_options.m"
    {
#line 1200 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 98, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_705_705, &libs__handle_options__STATE_VARIABLE_Globals_710_710);
    }
#line 1203 "handle_options.m"
    {
#line 1203 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 634, (MR_Integer) 633, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_710_710, &libs__handle_options__STATE_VARIABLE_Globals_715_715);
    }
#line 1205 "handle_options.m"
    {
#line 1205 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 46, (MR_Integer) 45, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_715_715, &libs__handle_options__STATE_VARIABLE_Globals_720_720);
    }
#line 1206 "handle_options.m"
    {
#line 1206 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 51, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_720_720, &libs__handle_options__STATE_VARIABLE_Globals_725_725);
    }
#line 1207 "handle_options.m"
    {
#line 1207 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_725_725, (MR_Integer) 46, &libs__handle_options__VeryVerbose_76);
    }
#line 1208 "handle_options.m"
    {
#line 1208 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_725_725, (MR_Integer) 55, &libs__handle_options__Statistics_77);
    }
#line 1210 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_76 == (MR_Integer) 1);
#line 1210 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1211 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1214 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1213 "handle_options.m"
      {
#line 1213 "handle_options.m"
        {
#line 1213 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_725_725, &libs__handle_options__STATE_VARIABLE_Globals_731_731);
        }
#line 1213 "handle_options.m"
      }
#line 1214 "handle_options.m"
    else
#line 1214 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_731_731 = libs__handle_options__STATE_VARIABLE_Globals_725_725;
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_731_731, &libs__handle_options__STATE_VARIABLE_Globals_736_736);
    }
#line 1219 "handle_options.m"
    {
#line 1219 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_736_736, &libs__handle_options__STATE_VARIABLE_Globals_741_741);
    }
#line 1220 "handle_options.m"
    {
#line 1220 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_741_741, &libs__handle_options__STATE_VARIABLE_Globals_746_746);
    }
#line 1223 "handle_options.m"
    {
#line 1223 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_746_746, (MR_Integer) 73, &libs__handle_options__DebugLiveness_78);
    }
#line 1225 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_78 >= (MR_Integer) 0);
#line 1225 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1225 "handle_options.m"
      {
#line 1226 "handle_options.m"
        libs__handle_options__V_750_750 = (MR_String) "all";
#line 1226 "handle_options.m"
        {
#line 1226 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_750_750, &libs__handle_options__AllDumpOptions_79);
        }
#line 1225 "handle_options.m"
      }
#line 1237 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1233 "handle_options.m"
      {
#line 1233 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_80;
#line 1233 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_81;
#line 1233 "handle_options.m"
        MR_Word libs__handle_options__V_753_753;

#line 1232 "handle_options.m"
        {
#line 1232 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_746_746, (MR_Integer) 151, &libs__handle_options__DumpOptions0_80);
        }
#line 1234 "handle_options.m"
        {
#line 1234 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_80, libs__handle_options__AllDumpOptions_79, &libs__handle_options__DumpOptions1_81);
        }
#line 1235 "handle_options.m"
        {
#line 1235 "handle_options.m"
          libs__handle_options__V_753_753 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_753_753, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1235 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_753_753, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_81));
#line 1235 "handle_options.m"
        }
#line 1235 "handle_options.m"
        {
#line 1235 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_753_753, libs__handle_options__STATE_VARIABLE_Globals_746_746, &libs__handle_options__STATE_VARIABLE_Globals_754_754);
        }
#line 1233 "handle_options.m"
      }
#line 1237 "handle_options.m"
    else
#line 1237 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_754_754 = libs__handle_options__STATE_VARIABLE_Globals_746_746;
#line 1241 "handle_options.m"
    {
#line 1241 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_754_754, &libs__handle_options__STATE_VARIABLE_Globals_758_758);
    }
#line 1242 "handle_options.m"
    {
#line 1242 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_758_758, (MR_Integer) 64, &libs__handle_options__DebugModesPredId_82);
    }
#line 1244 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_82 > (MR_Integer) 0);
#line 1246 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1245 "handle_options.m"
      {
#line 1245 "handle_options.m"
        {
#line 1245 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 60, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_758_758, &libs__handle_options__STATE_VARIABLE_Globals_764_764);
        }
#line 1245 "handle_options.m"
      }
#line 1246 "handle_options.m"
    else
#line 1246 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_764_764 = libs__handle_options__STATE_VARIABLE_Globals_758_758;
#line 1250 "handle_options.m"
    {
#line 1250 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_764_764, (MR_Integer) 353, &libs__handle_options__DebugUnneededCodePredNames_83);
    }
#line 1254 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1253 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_769_769 = libs__handle_options__STATE_VARIABLE_Globals_764_764;
#line 1254 "handle_options.m"
    else
#line 1255 "handle_options.m"
      {
#line 1256 "handle_options.m"
        {
#line 1256 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_764_764, &libs__handle_options__STATE_VARIABLE_Globals_769_769);
        }
#line 1255 "handle_options.m"
      }
#line 1259 "handle_options.m"
    {
#line 1259 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_769_769, (MR_Integer) 70, &libs__handle_options__DebugOptPredIdStrs_86);
    }
#line 1261 "handle_options.m"
    {
#line 1261 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_769_769, (MR_Integer) 71, &libs__handle_options__DebugOptPredNames_87);
    }
#line 1264 "handle_options.m"
    {
#line 1264 "handle_options.m"
      MR_String libs__handle_options__V_88_88;
#line 1264 "handle_options.m"
      MR_Word libs__handle_options__V_89_89;

#line 1264 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_86)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1264 "handle_options.m"
        {
#line 1264 "handle_options.m"
          libs__handle_options__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 0)));
#line 1264 "handle_options.m"
          libs__handle_options__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 1)));
#line 1264 "handle_options.m"
        }
#line 1264 "handle_options.m"
    }
#line 1265 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1265 "handle_options.m"
      {
#line 1265 "handle_options.m"
        MR_String libs__handle_options__V_90_90;
#line 1265 "handle_options.m"
        MR_Word libs__handle_options__V_91_91;

#line 1265 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_87)) == (MR_mktag((MR_Integer) 1)));
#line 1265 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1265 "handle_options.m"
          {
#line 1265 "handle_options.m"
            libs__handle_options__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 0)));
#line 1265 "handle_options.m"
            libs__handle_options__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 1)));
#line 1265 "handle_options.m"
          }
#line 1265 "handle_options.m"
      }
#line 1269 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1268 "handle_options.m"
      {
#line 1268 "handle_options.m"
        {
#line 1268 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 68, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_769_769, &libs__handle_options__STATE_VARIABLE_Globals_775_775);
        }
#line 1268 "handle_options.m"
      }
#line 1269 "handle_options.m"
    else
#line 1269 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_775_775 = libs__handle_options__STATE_VARIABLE_Globals_769_769;
#line 1273 "handle_options.m"
    {
#line 1273 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_775_775, (MR_Integer) 79, &libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1275 "handle_options.m"
    {
#line 1275 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1277 "handle_options.m"
    {
#line 1277 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_775_775, (MR_Integer) 147, &libs__handle_options__DumpHLDSPredIds_93);
    }
#line 1288 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1289 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_787_787 = libs__handle_options__STATE_VARIABLE_Globals_775_775;
#line 1288 "handle_options.m"
    else
#line 1280 "handle_options.m"
      {
#line 1280 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_96;
#line 1280 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_97;
#line 1280 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_98;
#line 1280 "handle_options.m"
        MR_Word libs__handle_options__V_786_786;

#line 1281 "handle_options.m"
        {
#line 1281 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_775_775, (MR_Integer) 151, &libs__handle_options__DumpOptions2_96);
        }
#line 1284 "handle_options.m"
        {
#line 1284 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_96, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_97);
        }
#line 1285 "handle_options.m"
        {
#line 1285 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_97, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_98);
        }
#line 1286 "handle_options.m"
        {
#line 1286 "handle_options.m"
          libs__handle_options__V_786_786 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_786_786, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1286 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_786_786, 1) = ((MR_Box) (libs__handle_options__DumpOptions_98));
#line 1286 "handle_options.m"
        }
#line 1286 "handle_options.m"
        {
#line 1286 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_786_786, libs__handle_options__STATE_VARIABLE_Globals_775_775, &libs__handle_options__STATE_VARIABLE_Globals_787_787);
        }
#line 1280 "handle_options.m"
      }
#line 1292 "handle_options.m"
    {
#line 1292 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 159, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_787_787, &libs__handle_options__STATE_VARIABLE_Globals_791_791);
    }
#line 1294 "handle_options.m"
    {
#line 1294 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 159, (MR_Integer) 157, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_791_791, &libs__handle_options__STATE_VARIABLE_Globals_796_796);
    }
#line 1296 "handle_options.m"
    {
#line 1296 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 158, (MR_Integer) 157, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_796_796, &libs__handle_options__STATE_VARIABLE_Globals_801_801);
    }
#line 1299 "handle_options.m"
    {
#line 1299 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 140, (MR_Integer) 139, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_801_801, &libs__handle_options__STATE_VARIABLE_Globals_806_806);
    }
#line 1304 "handle_options.m"
    {
#line 1304 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_806_806, (MR_Integer) 215, &libs__handle_options__UseTrail_99);
    }
#line 1305 "handle_options.m"
    {
#line 1305 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_806_806, (MR_Integer) 251, &libs__handle_options__HighLevelCode_100);
    }
#line 1306 "handle_options.m"
    {
#line 1306 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_806_806, (MR_Integer) 217, &libs__handle_options__UseMinimalModelStackCopy_101);
    }
#line 1308 "handle_options.m"
    {
#line 1308 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_806_806, (MR_Integer) 218, &libs__handle_options__UseMinimalModelOwnStacks_102);
    }
#line 1310 "handle_options.m"
    {
#line 1310 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_101, libs__handle_options__UseMinimalModelOwnStacks_102, &libs__handle_options__UseMinimalModel_103);
    }
#line 1313 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1313 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1314 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_102 == (MR_Integer) 1);
#line 1318 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1316 "handle_options.m"
      {
#line 1316 "handle_options.m"
        {
#line 1316 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_514_514, &libs__handle_options__STATE_VARIABLE_Errors_813_813);
        }
#line 1316 "handle_options.m"
      }
#line 1318 "handle_options.m"
    else
#line 1324 "handle_options.m"
      {
#line 1319 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1319 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1320 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1324 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1322 "handle_options.m"
          {
#line 1322 "handle_options.m"
            {
#line 1322 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_514_514, &libs__handle_options__STATE_VARIABLE_Errors_813_813);
            }
#line 1322 "handle_options.m"
          }
#line 1324 "handle_options.m"
        else
#line 1330 "handle_options.m"
          {
#line 1325 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1325 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1326 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_99 == (MR_Integer) 1);
#line 1330 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1328 "handle_options.m"
              {
#line 1328 "handle_options.m"
                {
#line 1328 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_514_514, &libs__handle_options__STATE_VARIABLE_Errors_813_813);
                }
#line 1328 "handle_options.m"
              }
#line 1330 "handle_options.m"
            else
#line 1330 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_813_813 = libs__handle_options__STATE_VARIABLE_Errors_514_514;
#line 1330 "handle_options.m"
          }
#line 1324 "handle_options.m"
      }
#line 1340 "handle_options.m"
    libs__handle_options__V_826_826 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]);
#line 1340 "handle_options.m"
    {
#line 1340 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 243, libs__handle_options__V_826_826, libs__handle_options__STATE_VARIABLE_Globals_806_806, &libs__handle_options__STATE_VARIABLE_Globals_827_827);
    }
#line 1358 "handle_options.m"
#line 1358 "handle_options.m"
    switch (libs__handle_options__Target_25) {
#line 1358 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1358 "handle_options.m"
      case (MR_Integer) 0:
#line 1342 "handle_options.m"
        {
#line 1342 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits0_104;
#line 1342 "handle_options.m"
          MR_Integer libs__handle_options__BitsPerWord_105;
#line 1342 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits_106;
#line 1342 "handle_options.m"
          MR_Word libs__handle_options__V_849_849;

#line 1343 "handle_options.m"
          {
#line 1343 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_827_827, (MR_Integer) 243, &libs__handle_options__ArgPackBits0_104);
          }
#line 1344 "handle_options.m"
          {
#line 1344 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_827_827, (MR_Integer) 237, &libs__handle_options__BitsPerWord_105);
          }
#line 1346 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 < (MR_Integer) 0);
#line 1348 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1347 "handle_options.m"
            libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1348 "handle_options.m"
          else
#line 1354 "handle_options.m"
            {
#line 1348 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 > libs__handle_options__BitsPerWord_105);
#line 1354 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 1349 "handle_options.m"
                {
#line 1349 "handle_options.m"
                  MR_String libs__handle_options__ProgNameB_107;
#line 1349 "handle_options.m"
                  MR_String libs__handle_options__V_1596_1596;

#line 1349 "handle_options.m"
                  {
#line 1349 "handle_options.m"
                    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_107);
                  }
#line 1351 "handle_options.m"
                  {
#line 1351 "handle_options.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__ProgNameB_107, &libs__handle_options__V_1596_1596);
                  }
#line 1351 "handle_options.m"
                  {
#line 1351 "handle_options.m"
                    mercury__io__write_string_3_p_0(libs__handle_options__V_1596_1596);
                  }
#line 1350 "handle_options.m"
                  {
#line 1350 "handle_options.m"
                    mercury__io__write_string_3_p_0((MR_String) ": warning: --arg-pack-bits invalid\n");
                  }
#line 1352 "handle_options.m"
                  {
#line 1352 "handle_options.m"
                    libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_827_827);
                  }
#line 1353 "handle_options.m"
                  libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1349 "handle_options.m"
                }
#line 1354 "handle_options.m"
              else
#line 1355 "handle_options.m"
                libs__handle_options__ArgPackBits_106 = libs__handle_options__ArgPackBits0_104;
#line 1354 "handle_options.m"
            }
#line 1357 "handle_options.m"
          {
#line 1357 "handle_options.m"
            libs__handle_options__V_849_849 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "handle_options.m"
            MR_hl_field(MR_mktag(2), libs__handle_options__V_849_849, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_106));
#line 1357 "handle_options.m"
          }
#line 1357 "handle_options.m"
          {
#line 1357 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_849_849, libs__handle_options__STATE_VARIABLE_Globals_827_827, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
          }
#line 1342 "handle_options.m"
        }
#line 1358 "handle_options.m"
        break;
#line 1358 "handle_options.m"
      case (MR_Integer) 1:
#line 1358 "handle_options.m"
      case (MR_Integer) 3:
#line 1358 "handle_options.m"
      case (MR_Integer) 2:
#line 1362 "handle_options.m"
        {
#line 1362 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_831_831;

#line 1363 "handle_options.m"
          {
#line 1363 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_826_826, libs__handle_options__STATE_VARIABLE_Globals_827_827, &libs__handle_options__STATE_VARIABLE_Globals_831_831);
          }
#line 1364 "handle_options.m"
          {
#line 1364 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_831_831, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
          }
#line 1362 "handle_options.m"
        }
#line 1358 "handle_options.m"
        break;
#line 1358 "handle_options.m"
    }
#line 1368 "handle_options.m"
    {
#line 1368 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 221, (MR_Integer) 240, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_850_850, &libs__handle_options__STATE_VARIABLE_Globals_854_854);
    }
#line 1373 "handle_options.m"
    {
#line 1373 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 250, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_854_854, &libs__handle_options__STATE_VARIABLE_Globals_859_859);
    }
#line 1374 "handle_options.m"
    {
#line 1374 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 240, (MR_Integer) 250, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_859_859, &libs__handle_options__STATE_VARIABLE_Globals_864_864);
    }
#line 1384 "handle_options.m"
#line 1384 "handle_options.m"
    switch (libs__handle_options__Target_25) {
#line 1384 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1384 "handle_options.m"
      case (MR_Integer) 0:
#line 1380 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_868_868 = libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 1384 "handle_options.m"
        break;
#line 1384 "handle_options.m"
      case (MR_Integer) 1:
#line 1381 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_868_868 = libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 1384 "handle_options.m"
        break;
#line 1384 "handle_options.m"
      case (MR_Integer) 3:
#line 1385 "handle_options.m"
        {
#line 1386 "handle_options.m"
          {
#line 1386 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 292, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_864_864, &libs__handle_options__STATE_VARIABLE_Globals_868_868);
          }
#line 1385 "handle_options.m"
        }
#line 1384 "handle_options.m"
        break;
#line 1384 "handle_options.m"
      case (MR_Integer) 2:
#line 1382 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_868_868 = libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 1384 "handle_options.m"
        break;
#line 1384 "handle_options.m"
    }
#line 1391 "handle_options.m"
#line 1391 "handle_options.m"
    switch (libs__handle_options__Target_25) {
#line 1391 "handle_options.m"
      default:
#line 1391 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1391 "handle_options.m"
        break;
#line 1391 "handle_options.m"
      case (MR_Integer) 1:
#line 1390 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1391 "handle_options.m"
        break;
#line 1391 "handle_options.m"
      case (MR_Integer) 2:
#line 1391 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1391 "handle_options.m"
        break;
#line 1391 "handle_options.m"
    }
#line 1397 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1396 "handle_options.m"
      {
#line 1396 "handle_options.m"
        {
#line 1396 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 432, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_868_868, &libs__handle_options__STATE_VARIABLE_Globals_872_872);
        }
#line 1396 "handle_options.m"
      }
#line 1397 "handle_options.m"
    else
#line 1397 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_872_872 = libs__handle_options__STATE_VARIABLE_Globals_868_868;
#line 1401 "handle_options.m"
    {
#line 1401 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 480, (MR_Integer) 550, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_872_872, &libs__handle_options__STATE_VARIABLE_Globals_877_877);
    }
#line 1404 "handle_options.m"
    {
#line 1404 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 196, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_877_877, &libs__handle_options__STATE_VARIABLE_Globals_882_882);
    }
#line 1409 "handle_options.m"
    {
#line 1409 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 208, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_882_882, &libs__handle_options__STATE_VARIABLE_Globals_887_887);
    }
#line 1419 "handle_options.m"
    {
#line 1419 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 128, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_887_887, &libs__handle_options__STATE_VARIABLE_Globals_892_892);
    }
#line 1420 "handle_options.m"
    {
#line 1420 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_892_892, (MR_Integer) 128, &libs__handle_options__ProfOptimized_108);
    }
#line 1424 "handle_options.m"
#line 1424 "handle_options.m"
    switch (libs__handle_options__ProfOptimized_108) {
#line 1424 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1424 "handle_options.m"
      case (MR_Integer) 0:
#line 1422 "handle_options.m"
        {
#line 1423 "handle_options.m"
          {
#line 1423 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 329, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_892_892, &libs__handle_options__STATE_VARIABLE_Globals_898_898);
          }
#line 1422 "handle_options.m"
        }
#line 1424 "handle_options.m"
        break;
#line 1424 "handle_options.m"
      case (MR_Integer) 1:
#line 1425 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_898_898 = libs__handle_options__STATE_VARIABLE_Globals_892_892;
#line 1424 "handle_options.m"
        break;
#line 1424 "handle_options.m"
    }
#line 1430 "handle_options.m"
    {
#line 1430 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 194, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_898_898, &libs__handle_options__STATE_VARIABLE_Globals_903_903);
    }
#line 1432 "handle_options.m"
    {
#line 1432 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 194, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_903_903, &libs__handle_options__STATE_VARIABLE_Globals_908_908);
    }
#line 1434 "handle_options.m"
    {
#line 1434 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 194, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_908_908, &libs__handle_options__STATE_VARIABLE_Globals_913_913);
    }
#line 1437 "handle_options.m"
    {
#line 1437 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_913_913, (MR_Integer) 211, &libs__handle_options__ExpComp_109);
    }
#line 1439 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_109, (MR_String) "") == 0);
#line 1441 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1441 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_918_918 = libs__handle_options__STATE_VARIABLE_Globals_913_913;
#line 1441 "handle_options.m"
    else
#line 1442 "handle_options.m"
      {
#line 1442 "handle_options.m"
        {
#line 1442 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 329, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_913_913, &libs__handle_options__STATE_VARIABLE_Globals_918_918);
        }
#line 1442 "handle_options.m"
      }
#line 1446 "handle_options.m"
    {
#line 1446 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 184, (MR_Integer) 183, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_918_918, &libs__handle_options__STATE_VARIABLE_Globals_923_923);
    }
#line 1449 "handle_options.m"
    {
#line 1449 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 232, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_923_923, &libs__handle_options__STATE_VARIABLE_Globals_928_928);
    }
#line 1455 "handle_options.m"
    {
#line 1455 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 259, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_928_928, &libs__handle_options__STATE_VARIABLE_Globals_933_933);
    }
#line 1456 "handle_options.m"
    {
#line 1456 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 259, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_933_933, &libs__handle_options__STATE_VARIABLE_Globals_938_938);
    }
#line 1462 "handle_options.m"
    {
#line 1462 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 312, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_938_938, &libs__handle_options__STATE_VARIABLE_Globals_943_943);
    }
#line 1467 "handle_options.m"
    {
#line 1467 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 126, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_943_943, &libs__handle_options__STATE_VARIABLE_Globals_948_948);
    }
#line 1470 "handle_options.m"
    {
#line 1470 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 122, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_948_948, &libs__handle_options__STATE_VARIABLE_Globals_953_953);
    }
#line 1474 "handle_options.m"
    {
#line 1474 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 125, (MR_Integer) 122, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_953_953, &libs__handle_options__STATE_VARIABLE_Globals_958_958);
    }
#line 1484 "handle_options.m"
    {
#line 1484 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_958_958, (MR_Integer) 120, &libs__handle_options__TraceOptimized_110);
    }
#line 1485 "handle_options.m"
    {
#line 1485 "handle_options.m"
      libs__handle_options__TraceLevelIsNone_111 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
    }
#line 1569 "handle_options.m"
#line 1569 "handle_options.m"
    switch (libs__handle_options__TraceLevelIsNone_111) {
#line 1569 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1569 "handle_options.m"
      case (MR_Integer) 0:
#line 1487 "handle_options.m"
        {
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__TraceTailRec_112;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1019_1019;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1023_1023;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1027_1027;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1031_1031;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1035_1035;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1043_1043;
#line 1487 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1047_1047;

#line 1514 "handle_options.m"
#line 1514 "handle_options.m"
          switch (libs__handle_options__TraceOptimized_110) {
#line 1514 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1514 "handle_options.m"
            case (MR_Integer) 0:
#line 1489 "handle_options.m"
              {
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_967_967;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_971_971;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_975_975;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_979_979;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_983_983;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_987_987;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_991_991;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_995_995;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_999_999;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1003_1003;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1007_1007;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1011_1011;
#line 1489 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1015_1015;

#line 1494 "handle_options.m"
                {
#line 1494 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 329, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_958_958, &libs__handle_options__STATE_VARIABLE_Globals_967_967);
                }
#line 1495 "handle_options.m"
                {
#line 1495 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 345, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_967_967, &libs__handle_options__STATE_VARIABLE_Globals_971_971);
                }
#line 1496 "handle_options.m"
                {
#line 1496 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 347, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_971_971, &libs__handle_options__STATE_VARIABLE_Globals_975_975);
                }
#line 1497 "handle_options.m"
                {
#line 1497 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_975_975, &libs__handle_options__STATE_VARIABLE_Globals_979_979);
                }
#line 1498 "handle_options.m"
                {
#line 1498 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_979_979, &libs__handle_options__STATE_VARIABLE_Globals_983_983);
                }
#line 1500 "handle_options.m"
                {
#line 1500 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 383, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_983_983, &libs__handle_options__STATE_VARIABLE_Globals_987_987);
                }
#line 1501 "handle_options.m"
                {
#line 1501 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 343, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_987_987, &libs__handle_options__STATE_VARIABLE_Globals_991_991);
                }
#line 1503 "handle_options.m"
                {
#line 1503 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 344, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_991_991, &libs__handle_options__STATE_VARIABLE_Globals_995_995);
                }
#line 1505 "handle_options.m"
                {
#line 1505 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_995_995, &libs__handle_options__STATE_VARIABLE_Globals_999_999);
                }
#line 1507 "handle_options.m"
                {
#line 1507 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_999_999, &libs__handle_options__STATE_VARIABLE_Globals_1003_1003);
                }
#line 1509 "handle_options.m"
                {
#line 1509 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 365, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1003_1003, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
                }
#line 1511 "handle_options.m"
                {
#line 1511 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 379, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1007_1007, &libs__handle_options__STATE_VARIABLE_Globals_1011_1011);
                }
#line 1512 "handle_options.m"
                {
#line 1512 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 392, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1011_1011, &libs__handle_options__STATE_VARIABLE_Globals_1015_1015);
                }
#line 1513 "handle_options.m"
                {
#line 1513 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 393, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1015_1015, &libs__handle_options__STATE_VARIABLE_Globals_1019_1019);
                }
#line 1489 "handle_options.m"
              }
#line 1514 "handle_options.m"
              break;
#line 1514 "handle_options.m"
            case (MR_Integer) 1:
#line 1515 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1019_1019 = libs__handle_options__STATE_VARIABLE_Globals_958_958;
#line 1514 "handle_options.m"
              break;
#line 1514 "handle_options.m"
          }
#line 1537 "handle_options.m"
          {
#line 1537 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1019_1019, &libs__handle_options__STATE_VARIABLE_Globals_1023_1023);
          }
#line 1542 "handle_options.m"
          {
#line 1542 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1023_1023, &libs__handle_options__STATE_VARIABLE_Globals_1027_1027);
          }
#line 1546 "handle_options.m"
          {
#line 1546 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 381, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1027_1027, &libs__handle_options__STATE_VARIABLE_Globals_1031_1031);
          }
#line 1550 "handle_options.m"
          {
#line 1550 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1031_1031, &libs__handle_options__STATE_VARIABLE_Globals_1035_1035);
          }
#line 1554 "handle_options.m"
          {
#line 1554 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 263, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1035_1035, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
          }
#line 1555 "handle_options.m"
          {
#line 1555 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1043_1043);
          }
#line 1559 "handle_options.m"
          {
#line 1559 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 317, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1043_1043, &libs__handle_options__STATE_VARIABLE_Globals_1047_1047);
          }
#line 1562 "handle_options.m"
          {
#line 1562 "handle_options.m"
            libs__handle_options__TraceTailRec_112 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_30);
          }
#line 1566 "handle_options.m"
#line 1566 "handle_options.m"
          switch (libs__handle_options__TraceTailRec_112) {
#line 1566 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1566 "handle_options.m"
            case (MR_Integer) 0:
#line 1564 "handle_options.m"
              {
#line 1565 "handle_options.m"
                {
#line 1565 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 129, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1047_1047, &libs__handle_options__STATE_VARIABLE_Globals_1051_1051);
                }
#line 1564 "handle_options.m"
              }
#line 1566 "handle_options.m"
              break;
#line 1566 "handle_options.m"
            case (MR_Integer) 1:
#line 1567 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1051_1051 = libs__handle_options__STATE_VARIABLE_Globals_1047_1047;
#line 1566 "handle_options.m"
              break;
#line 1566 "handle_options.m"
          }
#line 1487 "handle_options.m"
        }
#line 1569 "handle_options.m"
        break;
#line 1569 "handle_options.m"
      case (MR_Integer) 1:
#line 1570 "handle_options.m"
        {
#line 1573 "handle_options.m"
          {
#line 1573 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 129, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_958_958, &libs__handle_options__STATE_VARIABLE_Globals_1051_1051);
          }
#line 1570 "handle_options.m"
        }
#line 1569 "handle_options.m"
        break;
#line 1569 "handle_options.m"
    }
#line 1576 "handle_options.m"
    {
#line 1576 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 192, (MR_Integer) 262, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1051_1051, &libs__handle_options__STATE_VARIABLE_Globals_1056_1056);
    }
#line 1577 "handle_options.m"
    {
#line 1577 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1056_1056, (MR_Integer) 192, &libs__handle_options__ProfileDeep_113);
    }
#line 1602 "handle_options.m"
#line 1602 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_113) {
#line 1602 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1602 "handle_options.m"
      case (MR_Integer) 0:
#line 1603 "handle_options.m"
        {
#line 1603 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1060_1060 = libs__handle_options__STATE_VARIABLE_Errors_813_813;
#line 1603 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1073_1073 = libs__handle_options__STATE_VARIABLE_Globals_1056_1056;
#line 1603 "handle_options.m"
        }
#line 1602 "handle_options.m"
        break;
#line 1602 "handle_options.m"
      case (MR_Integer) 1:
#line 1579 "handle_options.m"
        {
#line 1579 "handle_options.m"
          MR_Word libs__handle_options__LotsOfHOSpec_114;
#line 1579 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1065_1065;

#line 1581 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1581 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1582 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1585 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1585 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1060_1060 = libs__handle_options__STATE_VARIABLE_Errors_813_813;
#line 1585 "handle_options.m"
          else
#line 1586 "handle_options.m"
            {
#line 1586 "handle_options.m"
              {
#line 1586 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_813_813, &libs__handle_options__STATE_VARIABLE_Errors_1060_1060);
              }
#line 1586 "handle_options.m"
            }
#line 1589 "handle_options.m"
          {
#line 1589 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1056_1056, &libs__handle_options__STATE_VARIABLE_Globals_1065_1065);
          }
#line 1591 "handle_options.m"
          {
#line 1591 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1065_1065, (MR_Integer) 207, &libs__handle_options__LotsOfHOSpec_114);
          }
#line 1599 "handle_options.m"
#line 1599 "handle_options.m"
          switch (libs__handle_options__LotsOfHOSpec_114) {
#line 1599 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1599 "handle_options.m"
            case (MR_Integer) 0:
#line 1600 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1073_1073 = libs__handle_options__STATE_VARIABLE_Globals_1065_1065;
#line 1599 "handle_options.m"
              break;
#line 1599 "handle_options.m"
            case (MR_Integer) 1:
#line 1594 "handle_options.m"
              {
#line 1594 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1070_1070;

#line 1596 "handle_options.m"
                {
#line 1596 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 347, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1065_1065, &libs__handle_options__STATE_VARIABLE_Globals_1070_1070);
                }
#line 1597 "handle_options.m"
                {
#line 1597 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 348, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_1070_1070, &libs__handle_options__STATE_VARIABLE_Globals_1073_1073);
                }
#line 1594 "handle_options.m"
              }
#line 1599 "handle_options.m"
              break;
#line 1599 "handle_options.m"
          }
#line 1579 "handle_options.m"
        }
#line 1602 "handle_options.m"
        break;
#line 1602 "handle_options.m"
    }
#line 1606 "handle_options.m"
    {
#line 1606 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1073_1073, (MR_Integer) 209, &libs__handle_options__RecordTermSizesAsWords_116);
    }
#line 1608 "handle_options.m"
    {
#line 1608 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1073_1073, (MR_Integer) 210, &libs__handle_options__RecordTermSizesAsCells_117);
    }
#line 1611 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1611 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1612 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1616 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1614 "handle_options.m"
      {
#line 1614 "handle_options.m"
        {
#line 1614 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1060_1060, &libs__handle_options__STATE_VARIABLE_Errors_1078_1078);
        }
#line 1614 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1087_1087 = libs__handle_options__STATE_VARIABLE_Globals_1073_1073;
#line 1614 "handle_options.m"
      }
#line 1616 "handle_options.m"
    else
#line 1633 "handle_options.m"
      {
#line 1617 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1618 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1618 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1633 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1621 "handle_options.m"
          {
#line 1621 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1083_1083;

#line 1621 "handle_options.m"
            {
#line 1621 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1073_1073, &libs__handle_options__STATE_VARIABLE_Globals_1083_1083);
            }
#line 1624 "handle_options.m"
            {
#line 1624 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1083_1083, &libs__handle_options__STATE_VARIABLE_Globals_1087_1087);
            }
#line 1630 "handle_options.m"
#line 1630 "handle_options.m"
            switch (libs__handle_options__HighLevelCode_100) {
#line 1630 "handle_options.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1630 "handle_options.m"
              case (MR_Integer) 0:
#line 1631 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Errors_1078_1078 = libs__handle_options__STATE_VARIABLE_Errors_1060_1060;
#line 1630 "handle_options.m"
                break;
#line 1630 "handle_options.m"
              case (MR_Integer) 1:
#line 1627 "handle_options.m"
                {
#line 1628 "handle_options.m"
                  {
#line 1628 "handle_options.m"
                    libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1060_1060, &libs__handle_options__STATE_VARIABLE_Errors_1078_1078);
                  }
#line 1627 "handle_options.m"
                }
#line 1630 "handle_options.m"
                break;
#line 1630 "handle_options.m"
            }
#line 1621 "handle_options.m"
          }
#line 1633 "handle_options.m"
        else
#line 1634 "handle_options.m"
          {
#line 1634 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1087_1087 = libs__handle_options__STATE_VARIABLE_Globals_1073_1073;
#line 1634 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1078_1078 = libs__handle_options__STATE_VARIABLE_Errors_1060_1060;
#line 1634 "handle_options.m"
          }
#line 1633 "handle_options.m"
      }
#line 1638 "handle_options.m"
    {
#line 1638 "handle_options.m"
      MR_Word libs__handle_options__V_1093_1093;

#line 1638 "handle_options.m"
      {
#line 1638 "handle_options.m"
        libs__handle_options__V_1093_1093 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
      }
#line 1638 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__V_1093_1093 == (MR_Integer) 1);
#line 1638 "handle_options.m"
    }
#line 1639 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1639 "handle_options.m"
      {
#line 1639 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1639 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1639 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1639 "handle_options.m"
      }
#line 1643 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1643 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1095_1095 = libs__handle_options__STATE_VARIABLE_Errors_1078_1078;
#line 1643 "handle_options.m"
    else
#line 1644 "handle_options.m"
      {
#line 1644 "handle_options.m"
        {
#line 1644 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1078_1078, &libs__handle_options__STATE_VARIABLE_Errors_1095_1095);
        }
#line 1644 "handle_options.m"
      }
#line 1650 "handle_options.m"
    {
#line 1650 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 486, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1087_1087, &libs__handle_options__STATE_VARIABLE_Globals_1099_1099);
    }
#line 1652 "handle_options.m"
    {
#line 1652 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 332, (MR_Integer) 361, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1099_1099, &libs__handle_options__STATE_VARIABLE_Globals_1104_1104);
    }
#line 1669 "handle_options.m"
#line 1669 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_113) {
#line 1669 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1669 "handle_options.m"
      case (MR_Integer) 0:
#line 1666 "handle_options.m"
        {
#line 1667 "handle_options.m"
          {
#line 1667 "handle_options.m"
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 329, (MR_Integer) 361, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1104_1104, &libs__handle_options__STATE_VARIABLE_Globals_1109_1109);
          }
#line 1666 "handle_options.m"
        }
#line 1669 "handle_options.m"
        break;
#line 1669 "handle_options.m"
      case (MR_Integer) 1:
#line 1670 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1109_1109 = libs__handle_options__STATE_VARIABLE_Globals_1104_1104;
#line 1669 "handle_options.m"
        break;
#line 1669 "handle_options.m"
    }
#line 1675 "handle_options.m"
    {
#line 1675 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 383, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1109_1109, &libs__handle_options__STATE_VARIABLE_Globals_1114_1114);
    }
#line 1676 "handle_options.m"
    {
#line 1676 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 343, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1114_1114, &libs__handle_options__STATE_VARIABLE_Globals_1119_1119);
    }
#line 1678 "handle_options.m"
    {
#line 1678 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 162, (MR_Integer) 344, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1119_1119, &libs__handle_options__STATE_VARIABLE_Globals_1124_1124);
    }
#line 1682 "handle_options.m"
    {
#line 1682 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 259, (MR_Integer) 262, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1124_1124, &libs__handle_options__STATE_VARIABLE_Globals_1129_1129);
    }
#line 1685 "handle_options.m"
    {
#line 1685 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 262, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1129_1129, &libs__handle_options__STATE_VARIABLE_Globals_1134_1134);
    }
#line 1740 "handle_options.m"
#line 1740 "handle_options.m"
    switch (libs__handle_options__GC_Method_26) {
#line 1740 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1740 "handle_options.m"
      case (MR_Integer) 5:
#line 1724 "handle_options.m"
        {
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1138_1138;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1142_1142;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1146_1146;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1150_1150;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1154_1154;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1158_1158;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1162_1162;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1166_1166;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1170_1170;
#line 1724 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1174_1174;

#line 1725 "handle_options.m"
          {
#line 1725 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1134_1134, &libs__handle_options__STATE_VARIABLE_Globals_1138_1138);
          }
#line 1726 "handle_options.m"
          {
#line 1726 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1138_1138, &libs__handle_options__STATE_VARIABLE_Globals_1142_1142);
          }
#line 1727 "handle_options.m"
          {
#line 1727 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1142_1142, &libs__handle_options__STATE_VARIABLE_Globals_1146_1146);
          }
#line 1728 "handle_options.m"
          {
#line 1728 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 469, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1146_1146, &libs__handle_options__STATE_VARIABLE_Globals_1150_1150);
          }
#line 1729 "handle_options.m"
          {
#line 1729 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 317, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1150_1150, &libs__handle_options__STATE_VARIABLE_Globals_1154_1154);
          }
#line 1730 "handle_options.m"
          {
#line 1730 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1154_1154, &libs__handle_options__STATE_VARIABLE_Globals_1158_1158);
          }
#line 1731 "handle_options.m"
          {
#line 1731 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 301, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1158_1158, &libs__handle_options__STATE_VARIABLE_Globals_1162_1162);
          }
#line 1733 "handle_options.m"
          {
#line 1733 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1162_1162, &libs__handle_options__STATE_VARIABLE_Globals_1166_1166);
          }
#line 1735 "handle_options.m"
          {
#line 1735 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1166_1166, &libs__handle_options__STATE_VARIABLE_Globals_1170_1170);
          }
#line 1737 "handle_options.m"
          {
#line 1737 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 354, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1170_1170, &libs__handle_options__STATE_VARIABLE_Globals_1174_1174);
          }
#line 1738 "handle_options.m"
          {
#line 1738 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1174_1174, &libs__handle_options__STATE_VARIABLE_Globals_1178_1178);
          }
#line 1724 "handle_options.m"
        }
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
      case (MR_Integer) 0:
#line 1741 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
      case (MR_Integer) 2:
#line 1743 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
      case (MR_Integer) 3:
#line 1744 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
      case (MR_Integer) 4:
#line 1745 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
      case (MR_Integer) 1:
#line 1742 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1178_1178 = libs__handle_options__STATE_VARIABLE_Globals_1134_1134;
#line 1740 "handle_options.m"
        break;
#line 1740 "handle_options.m"
    }
#line 1753 "handle_options.m"
    {
#line 1753 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1178_1178, (MR_Integer) 257, &libs__handle_options__PutNondetEnvOnHeap_118);
    }
#line 1767 "handle_options.m"
    {
#line 1767 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 260, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1178_1178, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
    }
#line 1769 "handle_options.m"
    {
#line 1769 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 260, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1193_1193);
    }
#line 1776 "handle_options.m"
    {
#line 1776 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 467, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1193_1193, &libs__handle_options__STATE_VARIABLE_Globals_1198_1198);
    }
#line 1778 "handle_options.m"
    {
#line 1778 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 467, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1198_1198, &libs__handle_options__STATE_VARIABLE_Globals_1203_1203);
    }
#line 1782 "handle_options.m"
    {
#line 1782 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 260, (MR_Integer) 465, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1203_1203, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
    }
#line 1788 "handle_options.m"
    {
#line 1788 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 383, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1213_1213);
    }
#line 1790 "handle_options.m"
    {
#line 1790 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 343, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1213_1213, &libs__handle_options__STATE_VARIABLE_Globals_1218_1218);
    }
#line 1799 "handle_options.m"
    {
#line 1799 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 447, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1218_1218, &libs__handle_options__STATE_VARIABLE_Globals_1223_1223);
    }
#line 1806 "handle_options.m"
    {
#line 1806 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 225, (MR_Integer) 447, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1223_1223, &libs__handle_options__STATE_VARIABLE_Globals_1228_1228);
    }
#line 1815 "handle_options.m"
    {
#line 1815 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 449, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1228_1228, &libs__handle_options__STATE_VARIABLE_Globals_1233_1233);
    }
#line 1824 "handle_options.m"
    {
#line 1824 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1233_1233, (MR_Integer) 277, &libs__handle_options__DisablePneg_119);
    }
#line 1826 "handle_options.m"
    {
#line 1826 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1233_1233, (MR_Integer) 278, &libs__handle_options__DisableCut_120);
    }
#line 1829 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1829 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1830 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_119 == (MR_Integer) 0);
#line 1834 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1832 "handle_options.m"
      {
#line 1832 "handle_options.m"
        {
#line 1832 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 279, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1233_1233, &libs__handle_options__STATE_VARIABLE_Globals_1239_1239);
        }
#line 1832 "handle_options.m"
      }
#line 1834 "handle_options.m"
    else
#line 1834 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1239_1239 = libs__handle_options__STATE_VARIABLE_Globals_1233_1233;
#line 1838 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1838 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1839 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_120 == (MR_Integer) 0);
#line 1843 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1841 "handle_options.m"
      {
#line 1841 "handle_options.m"
        {
#line 1841 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 280, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1239_1239, &libs__handle_options__STATE_VARIABLE_Globals_1243_1243);
        }
#line 1841 "handle_options.m"
      }
#line 1843 "handle_options.m"
    else
#line 1843 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1243_1243 = libs__handle_options__STATE_VARIABLE_Globals_1239_1239;
#line 1849 "handle_options.m"
    {
#line 1849 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1243_1243, (MR_Integer) 146, &libs__handle_options__DumpHLDSStages_121);
    }
#line 1851 "handle_options.m"
    {
#line 1851 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1243_1243, (MR_Integer) 145, &libs__handle_options__DumpTraceStages_122);
    }
#line 1853 "handle_options.m"
    {
#line 1853 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1243_1243, (MR_Integer) 297, &libs__handle_options__ParallelLiveness_123);
    }
#line 1855 "handle_options.m"
    {
#line 1855 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1243_1243, (MR_Integer) 298, &libs__handle_options__ParallelCodeGen_124);
    }
#line 1858 "handle_options.m"
    {
#line 1858 "handle_options.m"
      MR_String libs__handle_options__V_125_125;
#line 1858 "handle_options.m"
      MR_Word libs__handle_options__V_126_126;

#line 1858 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_121)) == (MR_mktag((MR_Integer) 1)));
#line 1858 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1858 "handle_options.m"
        {
#line 1858 "handle_options.m"
          libs__handle_options__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 0)));
#line 1858 "handle_options.m"
          libs__handle_options__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 1)));
#line 1858 "handle_options.m"
        }
#line 1858 "handle_options.m"
    }
#line 1859 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1859 "handle_options.m"
      {
#line 1859 "handle_options.m"
        {
#line 1859 "handle_options.m"
          MR_String libs__handle_options__V_127_127;
#line 1859 "handle_options.m"
          MR_Word libs__handle_options__V_128_128;

#line 1859 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_122)) == (MR_mktag((MR_Integer) 1)));
#line 1859 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1859 "handle_options.m"
            {
#line 1859 "handle_options.m"
              libs__handle_options__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 0)));
#line 1859 "handle_options.m"
              libs__handle_options__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 1)));
#line 1859 "handle_options.m"
            }
#line 1859 "handle_options.m"
        }
#line 1859 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1859 "handle_options.m"
          {
#line 1860 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1859 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1859 "handle_options.m"
              {
#line 1861 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_123 == (MR_Integer) 1);
#line 1859 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1862 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_124 == (MR_Integer) 1);
#line 1859 "handle_options.m"
              }
#line 1859 "handle_options.m"
          }
#line 1859 "handle_options.m"
      }
#line 1866 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1865 "handle_options.m"
      {
#line 1865 "handle_options.m"
        {
#line 1865 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1243_1243, &libs__handle_options__STATE_VARIABLE_Globals_1251_1251);
        }
#line 1865 "handle_options.m"
      }
#line 1866 "handle_options.m"
    else
#line 1866 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1251_1251 = libs__handle_options__STATE_VARIABLE_Globals_1243_1243;
#line 1872 "handle_options.m"
    {
#line 1872 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 354, (MR_Integer) 355, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1251_1251, &libs__handle_options__STATE_VARIABLE_Globals_1256_1256);
    }
#line 1878 "handle_options.m"
    {
#line 1878 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 343, (MR_Integer) 344, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1256_1256, &libs__handle_options__STATE_VARIABLE_Globals_1261_1261);
    }
#line 1883 "handle_options.m"
    {
#line 1883 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 346, (MR_Integer) 321, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1261_1261, &libs__handle_options__STATE_VARIABLE_Globals_1266_1266);
    }
#line 1885 "handle_options.m"
    {
#line 1885 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 346, (MR_Integer) 345, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1266_1266, &libs__handle_options__STATE_VARIABLE_Globals_1271_1271);
    }
#line 1890 "handle_options.m"
    {
#line 1890 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 362, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1271_1271, &libs__handle_options__STATE_VARIABLE_Globals_1276_1276);
    }
#line 1892 "handle_options.m"
    {
#line 1892 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 341, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1276_1276, &libs__handle_options__STATE_VARIABLE_Globals_1281_1281);
    }
#line 1897 "handle_options.m"
    {
#line 1897 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 345, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1281_1281, &libs__handle_options__STATE_VARIABLE_Globals_1286_1286);
    }
#line 1903 "handle_options.m"
    {
#line 1903 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 388, (MR_Integer) 389, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1286_1286, &libs__handle_options__STATE_VARIABLE_Globals_1291_1291);
    }
#line 1908 "handle_options.m"
    {
#line 1908 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 92, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1291_1291, &libs__handle_options__STATE_VARIABLE_Globals_1296_1296);
    }
#line 1913 "handle_options.m"
    {
#line 1913 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 144, (MR_Integer) 92, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1296_1296, &libs__handle_options__STATE_VARIABLE_Globals_1301_1301);
    }
#line 1917 "handle_options.m"
    {
#line 1917 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 22, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1301_1301, &libs__handle_options__STATE_VARIABLE_Globals_1306_1306);
    }
#line 1920 "handle_options.m"
    {
#line 1920 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1306_1306, (MR_Integer) 652, &libs__handle_options__TargetArch_129);
    }
#line 1923 "handle_options.m"
    {
#line 1923 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1306_1306, (MR_Integer) 541, &libs__handle_options__MaybeStdLibDir_130);
    }
#line 1941 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1942 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1322_1322 = libs__handle_options__STATE_VARIABLE_Globals_1306_1306;
#line 1941 "handle_options.m"
    else
#line 1926 "handle_options.m"
      {
#line 1926 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_131 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_130, (MR_Integer) 0)));
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_132;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_133;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_134;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1310_1310;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1314_1314;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1315_1315;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1316_1316;
#line 1926 "handle_options.m"
        MR_String libs__handle_options__V_1317_1317;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1321_1321;
#line 1926 "handle_options.m"
        MR_Word libs__handle_options__V_1323_1323;
#line 1926 "handle_options.m"
        MR_String libs__handle_options__V_1324_1324;

#line 1927 "handle_options.m"
        {
#line 1927 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1306_1306, &libs__handle_options__OptionTable2_132);
        }
#line 1928 "handle_options.m"
        {
#line 1928 "handle_options.m"
          libs__handle_options__V_1310_1310 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_132, libs__handle_options__StdLibDir_131);
        }
#line 1928 "handle_options.m"
        {
#line 1928 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1310_1310, libs__handle_options__STATE_VARIABLE_Globals_1306_1306, &libs__handle_options__STATE_VARIABLE_Globals_1311_1311);
        }
#line 1932 "handle_options.m"
        {
#line 1932 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1311_1311, (MR_Integer) 531, &libs__handle_options__LinkLibDirs0_133);
        }
#line 1935 "handle_options.m"
        {
#line 1935 "handle_options.m"
          libs__handle_options__V_1317_1317 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 1935 "handle_options.m"
        {
#line 1935 "handle_options.m"
          libs__handle_options__V_1316_1316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1935 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1316_1316, 0) = ((MR_Box) (libs__handle_options__V_1317_1317));
#line 1935 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1316_1316, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_133));
#line 1935 "handle_options.m"
        }
#line 1935 "handle_options.m"
        {
#line 1935 "handle_options.m"
          libs__handle_options__V_1314_1314 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1935 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1314_1314, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1935 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1314_1314, 1) = ((MR_Box) (libs__handle_options__V_1316_1316));
#line 1935 "handle_options.m"
        }
#line 1934 "handle_options.m"
        {
#line 1934 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1314_1314, libs__handle_options__STATE_VARIABLE_Globals_1311_1311, &libs__handle_options__STATE_VARIABLE_Globals_1315_1315);
        }
#line 1937 "handle_options.m"
        {
#line 1937 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1315_1315, (MR_Integer) 532, &libs__handle_options__Rpath0_134);
        }
#line 1940 "handle_options.m"
        {
#line 1940 "handle_options.m"
          libs__handle_options__V_1324_1324 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 1940 "handle_options.m"
        {
#line 1940 "handle_options.m"
          libs__handle_options__V_1323_1323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1940 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1323_1323, 0) = ((MR_Box) (libs__handle_options__V_1324_1324));
#line 1940 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1323_1323, 1) = ((MR_Box) (libs__handle_options__Rpath0_134));
#line 1940 "handle_options.m"
        }
#line 1940 "handle_options.m"
        {
#line 1940 "handle_options.m"
          libs__handle_options__V_1321_1321 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1940 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1321_1321, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1940 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1321_1321, 1) = ((MR_Box) (libs__handle_options__V_1323_1323));
#line 1940 "handle_options.m"
        }
#line 1939 "handle_options.m"
        {
#line 1939 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1321_1321, libs__handle_options__STATE_VARIABLE_Globals_1315_1315, &libs__handle_options__STATE_VARIABLE_Globals_1322_1322);
        }
#line 1926 "handle_options.m"
      }
#line 1946 "handle_options.m"
    {
#line 1946 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1322_1322, (MR_Integer) 620, &libs__handle_options__MaybeConfDir_135);
    }
#line 1954 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1955 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1330_1330 = libs__handle_options__STATE_VARIABLE_Globals_1322_1322;
#line 1954 "handle_options.m"
    else
#line 1949 "handle_options.m"
      {
#line 1949 "handle_options.m"
        MR_String libs__handle_options__ConfDir_136 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 1949 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_137;
#line 1949 "handle_options.m"
        MR_Word libs__handle_options__V_1329_1329;
#line 1949 "handle_options.m"
        MR_Word libs__handle_options__V_1331_1331;
#line 1949 "handle_options.m"
        MR_String libs__handle_options__V_1332_1332;

#line 1950 "handle_options.m"
        {
#line 1950 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1322_1322, (MR_Integer) 484, &libs__handle_options__CIncludeDirs0_137);
        }
#line 1953 "handle_options.m"
        {
#line 1953 "handle_options.m"
          libs__handle_options__V_1332_1332 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_136, (MR_String) "conf");
        }
#line 1953 "handle_options.m"
        {
#line 1953 "handle_options.m"
          libs__handle_options__V_1331_1331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1331_1331, 0) = ((MR_Box) (libs__handle_options__V_1332_1332));
#line 1953 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1331_1331, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_137));
#line 1953 "handle_options.m"
        }
#line 1953 "handle_options.m"
        {
#line 1953 "handle_options.m"
          libs__handle_options__V_1329_1329 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1329_1329, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1953 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1329_1329, 1) = ((MR_Box) (libs__handle_options__V_1331_1331));
#line 1953 "handle_options.m"
        }
#line 1952 "handle_options.m"
        {
#line 1952 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1329_1329, libs__handle_options__STATE_VARIABLE_Globals_1322_1322, &libs__handle_options__STATE_VARIABLE_Globals_1330_1330);
        }
#line 1949 "handle_options.m"
      }
#line 1959 "handle_options.m"
    {
#line 1959 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1330_1330, (MR_Integer) 631, &libs__handle_options__ConfigFile_138);
    }
#line 1962 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_138)) == (MR_mktag((MR_Integer) 1)));
#line 1962 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1962 "handle_options.m"
      {
#line 1962 "handle_options.m"
        libs__handle_options__V_1335_1335 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_138, (MR_Integer) 0)));
#line 1962 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1335_1335, (MR_String) "") == 0);
#line 1962 "handle_options.m"
      }
#line 1971 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1967 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1968 "handle_options.m"
        {
#line 1969 "handle_options.m"
          {
#line 1969 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 631, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[195]), libs__handle_options__STATE_VARIABLE_Globals_1330_1330, &libs__handle_options__STATE_VARIABLE_Globals_1342_1342);
          }
#line 1968 "handle_options.m"
        }
#line 1967 "handle_options.m"
      else
#line 1964 "handle_options.m"
        {
#line 1964 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_139 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 1964 "handle_options.m"
          MR_Word libs__handle_options__V_1341_1341;
#line 1964 "handle_options.m"
          MR_Word libs__handle_options__V_1343_1343;
#line 1964 "handle_options.m"
          MR_String libs__handle_options__V_1344_1344;
#line 1964 "handle_options.m"
          MR_String libs__handle_options__V_1345_1345;

#line 1966 "handle_options.m"
          {
#line 1966 "handle_options.m"
            libs__handle_options__V_1345_1345 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_139, (MR_String) "conf");
          }
#line 1966 "handle_options.m"
          {
#line 1966 "handle_options.m"
            libs__handle_options__V_1344_1344 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1345_1345, (MR_String) "Mercury.config");
          }
#line 1965 "handle_options.m"
          {
#line 1965 "handle_options.m"
            libs__handle_options__V_1343_1343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1343_1343, 0) = ((MR_Box) (libs__handle_options__V_1344_1344));
#line 1965 "handle_options.m"
          }
#line 1965 "handle_options.m"
          {
#line 1965 "handle_options.m"
            libs__handle_options__V_1341_1341 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1341_1341, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1965 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1341_1341, 1) = ((MR_Box) (libs__handle_options__V_1343_1343));
#line 1965 "handle_options.m"
          }
#line 1965 "handle_options.m"
          {
#line 1965 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 631, libs__handle_options__V_1341_1341, libs__handle_options__STATE_VARIABLE_Globals_1330_1330, &libs__handle_options__STATE_VARIABLE_Globals_1342_1342);
          }
#line 1964 "handle_options.m"
        }
#line 1971 "handle_options.m"
    else
#line 1971 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1342_1342 = libs__handle_options__STATE_VARIABLE_Globals_1330_1330;
#line 1978 "handle_options.m"
    {
#line 1978 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 535, &libs__handle_options__MercuryLibDirs_140);
    }
#line 1980 "handle_options.m"
    {
#line 1980 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1342_1342, &libs__handle_options__GradeString_141);
    }
#line 2030 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2031 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1399_1399 = libs__handle_options__STATE_VARIABLE_Globals_1342_1342;
#line 2030 "handle_options.m"
    else
#line 1982 "handle_options.m"
      {
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1566_1566 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_144;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_146;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__Rpath_147;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_148;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_149;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_150;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_151;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_152;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_153;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_154;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1349_1349;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1356_1356;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1357_1357;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1358_1358;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1361_1361;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1362_1362;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1363_1363;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1364_1364;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1373_1373;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1374_1374;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1375_1375;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1378_1378;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1379_1379;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1380_1380;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1381_1381;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1388_1388;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1389_1389;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1390_1390;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1391_1391;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1398_1398;
#line 1982 "handle_options.m"
        MR_Word libs__handle_options__V_1400_1400;

#line 1983 "handle_options.m"
        {
#line 1983 "handle_options.m"
          libs__handle_options__V_1349_1349 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1349_1349, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1349_1349, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_1));
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1349_1349, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1983 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1349_1349, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 1983 "handle_options.m"
        }
#line 1983 "handle_options.m"
        {
#line 1983 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_144 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__V_1349_1349, libs__handle_options__MercuryLibDirs_140);
        }
#line 1988 "handle_options.m"
        {
#line 1988 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 531, &libs__handle_options__LinkLibDirs1_146);
        }
#line 1991 "handle_options.m"
        {
#line 1991 "handle_options.m"
          libs__handle_options__V_1358_1358 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__LinkLibDirs1_146, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 1991 "handle_options.m"
        {
#line 1991 "handle_options.m"
          libs__handle_options__V_1356_1356 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1356_1356, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1991 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1356_1356, 1) = ((MR_Box) (libs__handle_options__V_1358_1358));
#line 1991 "handle_options.m"
        }
#line 1990 "handle_options.m"
        {
#line 1990 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1356_1356, libs__handle_options__STATE_VARIABLE_Globals_1342_1342, &libs__handle_options__STATE_VARIABLE_Globals_1357_1357);
        }
#line 1993 "handle_options.m"
        {
#line 1993 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1357_1357, (MR_Integer) 532, &libs__handle_options__Rpath_147);
        }
#line 1996 "handle_options.m"
        {
#line 1996 "handle_options.m"
          libs__handle_options__V_1363_1363 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__Rpath_147, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 1996 "handle_options.m"
        {
#line 1996 "handle_options.m"
          libs__handle_options__V_1361_1361 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1361_1361, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1996 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1361_1361, 1) = ((MR_Box) (libs__handle_options__V_1363_1363));
#line 1996 "handle_options.m"
        }
#line 1995 "handle_options.m"
        {
#line 1995 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1361_1361, libs__handle_options__STATE_VARIABLE_Globals_1357_1357, &libs__handle_options__STATE_VARIABLE_Globals_1362_1362);
        }
#line 1998 "handle_options.m"
        {
#line 1998 "handle_options.m"
          libs__handle_options__V_1364_1364 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1998 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1364_1364, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 1998 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1364_1364, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_2));
#line 1998 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1364_1364, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1998 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1364_1364, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 1998 "handle_options.m"
        }
#line 1998 "handle_options.m"
        {
#line 1998 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_148 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__V_1364_1364, libs__handle_options__MercuryLibDirs_140);
        }
#line 2002 "handle_options.m"
        {
#line 2002 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1362_1362, (MR_Integer) 484, &libs__handle_options__CIncludeDirs_149);
        }
#line 2005 "handle_options.m"
        {
#line 2005 "handle_options.m"
          libs__handle_options__V_1375_1375 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__CIncludeDirs_149);
        }
#line 2005 "handle_options.m"
        {
#line 2005 "handle_options.m"
          libs__handle_options__V_1373_1373 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1373_1373, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2005 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1373_1373, 1) = ((MR_Box) (libs__handle_options__V_1375_1375));
#line 2005 "handle_options.m"
        }
#line 2004 "handle_options.m"
        {
#line 2004 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1373_1373, libs__handle_options__STATE_VARIABLE_Globals_1362_1362, &libs__handle_options__STATE_VARIABLE_Globals_1374_1374);
        }
#line 2006 "handle_options.m"
        {
#line 2006 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1374_1374, (MR_Integer) 522, &libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2009 "handle_options.m"
        {
#line 2009 "handle_options.m"
          libs__handle_options__V_1380_1380 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2009 "handle_options.m"
        {
#line 2009 "handle_options.m"
          libs__handle_options__V_1378_1378 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2009 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1378_1378, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2009 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1378_1378, 1) = ((MR_Box) (libs__handle_options__V_1380_1380));
#line 2009 "handle_options.m"
        }
#line 2008 "handle_options.m"
        {
#line 2008 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 522, libs__handle_options__V_1378_1378, libs__handle_options__STATE_VARIABLE_Globals_1374_1374, &libs__handle_options__STATE_VARIABLE_Globals_1379_1379);
        }
#line 2011 "handle_options.m"
        {
#line 2011 "handle_options.m"
          libs__handle_options__V_1381_1381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2011 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1381_1381, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2011 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1381_1381, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_3));
#line 2011 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1381_1381, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2011 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1381_1381, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2011 "handle_options.m"
        }
#line 2011 "handle_options.m"
        {
#line 2011 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_151 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__V_1381_1381, libs__handle_options__MercuryLibDirs_140);
        }
#line 2016 "handle_options.m"
        {
#line 2016 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1379_1379, (MR_Integer) 636, &libs__handle_options__IntermodDirs0_152);
        }
#line 2019 "handle_options.m"
        {
#line 2019 "handle_options.m"
          libs__handle_options__V_1390_1390 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__ExtraIntermodDirs_151, libs__handle_options__IntermodDirs0_152);
        }
#line 2019 "handle_options.m"
        {
#line 2019 "handle_options.m"
          libs__handle_options__V_1388_1388 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1388_1388, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2019 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1388_1388, 1) = ((MR_Box) (libs__handle_options__V_1390_1390));
#line 2019 "handle_options.m"
        }
#line 2018 "handle_options.m"
        {
#line 2018 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1388_1388, libs__handle_options__STATE_VARIABLE_Globals_1379_1379, &libs__handle_options__STATE_VARIABLE_Globals_1389_1389);
        }
#line 2021 "handle_options.m"
        {
#line 2021 "handle_options.m"
          libs__handle_options__V_1391_1391 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2021 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1391_1391, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2021 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1391_1391, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_4));
#line 2021 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1391_1391, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2021 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1391_1391, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2021 "handle_options.m"
        }
#line 2021 "handle_options.m"
        {
#line 2021 "handle_options.m"
          libs__handle_options__ExtraInitDirs_153 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__V_1391_1391, libs__handle_options__MercuryLibDirs_140);
        }
#line 2026 "handle_options.m"
        {
#line 2026 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1389_1389, (MR_Integer) 543, &libs__handle_options__InitDirs1_154);
        }
#line 2029 "handle_options.m"
        {
#line 2029 "handle_options.m"
          libs__handle_options__V_1400_1400 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1566_1566, libs__handle_options__InitDirs1_154, libs__handle_options__ExtraInitDirs_153);
        }
#line 2029 "handle_options.m"
        {
#line 2029 "handle_options.m"
          libs__handle_options__V_1398_1398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2029 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 1) = ((MR_Box) (libs__handle_options__V_1400_1400));
#line 2029 "handle_options.m"
        }
#line 2028 "handle_options.m"
        {
#line 2028 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 543, libs__handle_options__V_1398_1398, libs__handle_options__STATE_VARIABLE_Globals_1389_1389, &libs__handle_options__STATE_VARIABLE_Globals_1399_1399);
        }
#line 1982 "handle_options.m"
      }
#line 2037 "handle_options.m"
    {
#line 2037 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 637, &libs__handle_options__UseSearchDirs_155);
    }
#line 2047 "handle_options.m"
#line 2047 "handle_options.m"
    switch (libs__handle_options__UseSearchDirs_155) {
#line 2047 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2047 "handle_options.m"
      case (MR_Integer) 0:
#line 2048 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1406_1406 = libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 2047 "handle_options.m"
        break;
#line 2047 "handle_options.m"
      case (MR_Integer) 1:
#line 2040 "handle_options.m"
        {
#line 2040 "handle_options.m"
          MR_Word libs__handle_options__IntermodDirs1_156;
#line 2040 "handle_options.m"
          MR_Word libs__handle_options__SearchDirs_157;
#line 2040 "handle_options.m"
          MR_Word libs__handle_options__V_1405_1405;
#line 2040 "handle_options.m"
          MR_Word libs__handle_options__V_1407_1407;

#line 2041 "handle_options.m"
          {
#line 2041 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 636, &libs__handle_options__IntermodDirs1_156);
          }
#line 2043 "handle_options.m"
          {
#line 2043 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 635, &libs__handle_options__SearchDirs_157);
          }
#line 2046 "handle_options.m"
          {
#line 2046 "handle_options.m"
            libs__handle_options__V_1407_1407 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_156, libs__handle_options__SearchDirs_157);
          }
#line 2046 "handle_options.m"
          {
#line 2046 "handle_options.m"
            libs__handle_options__V_1405_1405 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2046 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2046 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 1) = ((MR_Box) (libs__handle_options__V_1407_1407));
#line 2046 "handle_options.m"
          }
#line 2045 "handle_options.m"
          {
#line 2045 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1405_1405, libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1406_1406);
          }
#line 2040 "handle_options.m"
        }
#line 2047 "handle_options.m"
        break;
#line 2047 "handle_options.m"
    }
#line 2051 "handle_options.m"
    {
#line 2051 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 634, &libs__handle_options__UseGradeSubdirs_158);
    }
#line 2053 "handle_options.m"
    {
#line 2053 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 537, &libs__handle_options__SearchLibFilesDirs_159);
    }
#line 2055 "handle_options.m"
    {
#line 2055 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 636, &libs__handle_options__IntermodDirs2_160);
    }
#line 2057 "handle_options.m"
    {
#line 2057 "handle_options.m"
      libs__handle_options__ToGradeSubdir_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2057 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_5));
#line 2057 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2057 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 3) = ((MR_Box) (libs__handle_options__TargetArch_129));
#line 2057 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 4) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2057 "handle_options.m"
    }
#line 13940 "libs.handle_options.c"
#line 13941 "libs.handle_options.c"
    switch (libs__handle_options__UseGradeSubdirs_158) {
#line 13943 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 13945 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 13947 "libs.handle_options.c"
        {
#line 13949 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1575_1575;
#line 13951 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_165;
#line 13953 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_166;
#line 13955 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_167;
#line 13957 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1426_1426;

#line 2078 "handle_options.m"
          {
#line 2078 "handle_options.m"
            libs__handle_options__IntermodDirs3_165 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__IntermodDirs2_160);
          }
#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__handle_options__V_1426_1426 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1426_1426, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2081 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1426_1426, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_165));
#line 2081 "handle_options.m"
          }
#line 2080 "handle_options.m"
          {
#line 2080 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_1426_1426, libs__handle_options__STATE_VARIABLE_Globals_1406_1406, &libs__handle_options__STATE_VARIABLE_Globals_1427_1427);
          }
#line 2083 "handle_options.m"
          {
#line 2083 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1427_1427, (MR_Integer) 531, &libs__handle_options__LinkLibDirs2_166);
          }
#line 2085 "handle_options.m"
          {
#line 2085 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1427_1427, (MR_Integer) 543, &libs__handle_options__InitDirs2_167);
          }
#line 13990 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1575_1575 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2103 "handle_options.m"
          {
#line 2103 "handle_options.m"
            libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1575_1575, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__LinkLibDirs2_166);
          }
#line 2104 "handle_options.m"
          {
#line 2104 "handle_options.m"
            libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1575_1575, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__InitDirs2_167);
          }
#line 14002 "libs.handle_options.c"
        }
#line 14004 "libs.handle_options.c"
        break;
#line 14006 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 14008 "libs.handle_options.c"
        {
#line 14010 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1568_1568;
#line 14012 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1574_1574;
#line 14014 "libs.handle_options.c"
          MR_String libs__handle_options__GradeSubdir_163;
#line 14016 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_164;
#line 14018 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeLibDir_168;
#line 14020 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeLibDirs_169;
#line 14022 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeInitDir_171;
#line 14024 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeInitDirs_172;
#line 14026 "libs.handle_options.c"
          MR_String libs__handle_options__V_1416_1416;
#line 14028 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1418_1418;
#line 14030 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1420_1420;
#line 14032 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1421_1421;
#line 14034 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1422_1422;
#line 14036 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1423_1423;
#line 14038 "libs.handle_options.c"
          MR_String libs__handle_options__V_1424_1424;
#line 14040 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_5490;
#line 14042 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_5491;
#line 14044 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_5492;
#line 14046 "libs.handle_options.c"
          MR_Word libs__handle_options__V_5493_5493;

#line 2068 "handle_options.m"
          {
#line 2068 "handle_options.m"
            libs__handle_options__V_1416_1416 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_141);
          }
#line 2068 "handle_options.m"
          {
#line 2068 "handle_options.m"
            libs__handle_options__GradeSubdir_163 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1416_1416, libs__handle_options__TargetArch_129);
          }
#line 14059 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1568_1568 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2072 "handle_options.m"
          {
#line 2072 "handle_options.m"
            libs__handle_options__SearchLibFilesGradeSubdirs_164 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1568_1568, libs__handle_options__TypeCtorInfo_1568_1568, libs__handle_options__ToGradeSubdir_161, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2074 "handle_options.m"
          {
#line 2074 "handle_options.m"
            libs__handle_options__V_1418_1418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1418_1418, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_163));
#line 2074 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1418_1418, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2074 "handle_options.m"
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1424_1424 = mercury__dir__this_directory_0_f_0();
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1423_1423 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1423_1423, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1423_1423, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_6));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1423_1423, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1423_1423, 3) = ((MR_Box) (libs__handle_options__V_1424_1424));
#line 2075 "handle_options.m"
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1422_1422 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1422_1422, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1422_1422, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_7));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1422_1422, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2075 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1422_1422, 3) = ((MR_Box) (libs__handle_options__V_1423_1423));
#line 2075 "handle_options.m"
          }
#line 2075 "handle_options.m"
          {
#line 2075 "handle_options.m"
            libs__handle_options__V_1421_1421 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1568_1568, libs__handle_options__V_1422_1422, libs__handle_options__IntermodDirs2_160);
          }
#line 2074 "handle_options.m"
          {
#line 2074 "handle_options.m"
            libs__handle_options__V_1420_1420 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1568_1568, libs__handle_options__SearchLibFilesGradeSubdirs_164, libs__handle_options__V_1421_1421);
          }
#line 2074 "handle_options.m"
          {
#line 2074 "handle_options.m"
            libs__handle_options__IntermodDirs3_5490 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1568_1568, libs__handle_options__V_1418_1418, libs__handle_options__V_1420_1420);
          }
#line 2081 "handle_options.m"
          {
#line 2081 "handle_options.m"
            libs__handle_options__V_5493_5493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_5493_5493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2081 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_5493_5493, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_5490));
#line 2081 "handle_options.m"
          }
#line 2080 "handle_options.m"
          {
#line 2080 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 636, libs__handle_options__V_5493_5493, libs__handle_options__STATE_VARIABLE_Globals_1406_1406, &libs__handle_options__STATE_VARIABLE_Globals_1427_1427);
          }
#line 2083 "handle_options.m"
          {
#line 2083 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1427_1427, (MR_Integer) 531, &libs__handle_options__LinkLibDirs2_5491);
          }
#line 2085 "handle_options.m"
          {
#line 2085 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1427_1427, (MR_Integer) 543, &libs__handle_options__InitDirs2_5492);
          }
#line 2093 "handle_options.m"
          {
#line 2093 "handle_options.m"
            libs__handle_options__ToGradeLibDir_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_8));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2093 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2093 "handle_options.m"
          }
#line 14163 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1574_1574 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2094 "handle_options.m"
          {
#line 2094 "handle_options.m"
            libs__handle_options__SearchGradeLibDirs_169 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__ToGradeLibDir_168, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2095 "handle_options.m"
          {
#line 2095 "handle_options.m"
            libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__SearchGradeLibDirs_169, libs__handle_options__LinkLibDirs2_5491);
          }
#line 2097 "handle_options.m"
          {
#line 2097 "handle_options.m"
            libs__handle_options__ToGradeInitDir_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2097 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2097 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_9));
#line 2097 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2097 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2097 "handle_options.m"
          }
#line 2099 "handle_options.m"
          {
#line 2099 "handle_options.m"
            libs__handle_options__SearchGradeInitDirs_172 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__ToGradeInitDir_171, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2100 "handle_options.m"
          {
#line 2100 "handle_options.m"
            libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1574_1574, libs__handle_options__SearchGradeInitDirs_172, libs__handle_options__InitDirs2_5492);
          }
#line 14199 "libs.handle_options.c"
        }
#line 14201 "libs.handle_options.c"
        break;
#line 14203 "libs.handle_options.c"
    }
#line 2107 "handle_options.m"
    {
#line 2107 "handle_options.m"
      libs__handle_options__V_1443_1443 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1443_1443, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2107 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1443_1443, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_170));
#line 2107 "handle_options.m"
    }
#line 2106 "handle_options.m"
    {
#line 2106 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1443_1443, libs__handle_options__STATE_VARIABLE_Globals_1427_1427, &libs__handle_options__STATE_VARIABLE_Globals_1444_1444);
    }
#line 2109 "handle_options.m"
    {
#line 2109 "handle_options.m"
      libs__handle_options__V_1446_1446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1446_1446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2109 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1446_1446, 1) = ((MR_Box) (libs__handle_options__InitDirs_173));
#line 2109 "handle_options.m"
    }
#line 2108 "handle_options.m"
    {
#line 2108 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 543, libs__handle_options__V_1446_1446, libs__handle_options__STATE_VARIABLE_Globals_1444_1444, &libs__handle_options__STATE_VARIABLE_Globals_1447_1447);
    }
#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1447_1447, (MR_Integer) 633, &libs__handle_options__UseSubdirs_174);
    }
#line 2123 "handle_options.m"
#line 2123 "handle_options.m"
    switch (libs__handle_options__UseGradeSubdirs_158) {
#line 2123 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2123 "handle_options.m"
      case (MR_Integer) 0:
#line 2124 "handle_options.m"
        {
#line 14249 "libs.handle_options.c"
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_174 == (MR_Integer) 1);
#line 2124 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 2124 "handle_options.m"
            {
#line 2127 "handle_options.m"
              libs__handle_options__ToMihsSubdir_175 = (MR_Word) &libs__handle_options_scalar_common_1[14];
#line 2128 "handle_options.m"
              libs__handle_options__ToHrlsSubdir_176 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2128 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 2124 "handle_options.m"
            }
#line 2124 "handle_options.m"
        }
#line 2123 "handle_options.m"
        break;
#line 2123 "handle_options.m"
      case (MR_Integer) 1:
#line 2118 "handle_options.m"
        {
#line 2119 "handle_options.m"
          {
#line 2119 "handle_options.m"
            libs__handle_options__ToMihsSubdir_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2119 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2119 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_12));
#line 2119 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2119 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2119 "handle_options.m"
          }
#line 2121 "handle_options.m"
          {
#line 2121 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2121 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2121 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_13));
#line 2121 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2121 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2121 "handle_options.m"
          }
#line 2118 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2118 "handle_options.m"
        }
#line 2123 "handle_options.m"
        break;
#line 2123 "handle_options.m"
    }
#line 2150 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2136 "handle_options.m"
      {
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1576_1576;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_177;
#line 2136 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_178;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_179;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_180;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_181;
#line 2136 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_182;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_183;
#line 2136 "handle_options.m"
        MR_String libs__handle_options__V_1472_1472;
#line 2136 "handle_options.m"
        MR_String libs__handle_options__V_1473_1473;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__V_1474_1474;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__V_1475_1475;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__V_1477_1477;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1478_1478;
#line 2136 "handle_options.m"
        MR_String libs__handle_options__V_1480_1480;
#line 2136 "handle_options.m"
        MR_Word libs__handle_options__V_1482_1482;
#line 2137 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2137 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_178;
#line 2146 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2146 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_182;

#line 2135 "handle_options.m"
        {
#line 2135 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1447_1447, (MR_Integer) 484, &libs__handle_options__CIncludeDirs1_177);
        }
#line 2137 "handle_options.m"
        {
#line 2137 "handle_options.m"
          libs__handle_options__V_1472_1472 = mercury__dir__this_directory_0_f_0();
        }
#line 2137 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, (MR_Integer) 1)));
#line 2137 "handle_options.m"
        {
#line 2137 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_178 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_175), ((MR_Box) (libs__handle_options__V_1472_1472)));
        }
#line 2137 "handle_options.m"
        libs__handle_options__MihsSubdir_178 = ((MR_String) libs__handle_options__conv12_MihsSubdir_178);
#line 14371 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1576_1576 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_179 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1576_1576, libs__handle_options__TypeCtorInfo_1576_1576, libs__handle_options__ToMihsSubdir_175, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2139 "handle_options.m"
        {
#line 2139 "handle_options.m"
          libs__handle_options__V_1473_1473 = mercury__dir__this_directory_0_f_0();
        }
#line 2140 "handle_options.m"
        {
#line 2140 "handle_options.m"
          libs__handle_options__V_1475_1475 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1576_1576, libs__handle_options__SearchLibMihsSubdirs_179, libs__handle_options__CIncludeDirs1_177);
        }
#line 2139 "handle_options.m"
        {
#line 2139 "handle_options.m"
          libs__handle_options__V_1474_1474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1474_1474, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_178));
#line 2139 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1474_1474, 1) = ((MR_Box) (libs__handle_options__V_1475_1475));
#line 2139 "handle_options.m"
        }
#line 2139 "handle_options.m"
        {
#line 2139 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 0) = ((MR_Box) (libs__handle_options__V_1473_1473));
#line 2139 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 1) = ((MR_Box) (libs__handle_options__V_1474_1474));
#line 2139 "handle_options.m"
        }
#line 2142 "handle_options.m"
        {
#line 2142 "handle_options.m"
          libs__handle_options__V_1477_1477 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1477_1477, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2142 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1477_1477, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_180));
#line 2142 "handle_options.m"
        }
#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_1477_1477, libs__handle_options__STATE_VARIABLE_Globals_1447_1447, &libs__handle_options__STATE_VARIABLE_Globals_1478_1478);
        }
#line 2144 "handle_options.m"
        {
#line 2144 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1478_1478, (MR_Integer) 522, &libs__handle_options__ErlangIncludeDirs1_181);
        }
#line 2146 "handle_options.m"
        {
#line 2146 "handle_options.m"
          libs__handle_options__V_1480_1480 = mercury__dir__this_directory_0_f_0();
        }
#line 2146 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, (MR_Integer) 1)));
#line 2146 "handle_options.m"
        {
#line 2146 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_182 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_176), ((MR_Box) (libs__handle_options__V_1480_1480)));
        }
#line 2146 "handle_options.m"
        libs__handle_options__HrlsSubdir_182 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_182);
#line 2147 "handle_options.m"
        {
#line 2147 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_182));
#line 2147 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_181));
#line 2147 "handle_options.m"
        }
#line 2149 "handle_options.m"
        {
#line 2149 "handle_options.m"
          libs__handle_options__V_1482_1482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2149 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_183));
#line 2149 "handle_options.m"
        }
#line 2148 "handle_options.m"
        {
#line 2148 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 522, libs__handle_options__V_1482_1482, libs__handle_options__STATE_VARIABLE_Globals_1478_1478, &libs__handle_options__STATE_VARIABLE_Globals_1483_1483);
        }
#line 2136 "handle_options.m"
      }
#line 2150 "handle_options.m"
    else
#line 2150 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1483_1483 = libs__handle_options__STATE_VARIABLE_Globals_1447_1447;
#line 2156 "handle_options.m"
    {
#line 2156 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 323, (MR_Integer) 12, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1483_1483, &libs__handle_options__STATE_VARIABLE_Globals_1487_1487);
    }
#line 1756 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1756 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1756 "handle_options.m"
      {
#line 1757 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_26 == (MR_Integer) 5);
#line 1756 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1758 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_118 == (MR_Integer) 1);
#line 1756 "handle_options.m"
      }
#line 14492 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 14494 "libs.handle_options.c"
      {
#line 14496 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1182_1182;

#line 1760 "handle_options.m"
        {
#line 1760 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1095_1095, &libs__handle_options__STATE_VARIABLE_Errors_1182_1182);
        }
#line 2169 "handle_options.m"
        {
#line 2169 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 450, libs__handle_options__V_273_273, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1487_1487, libs__handle_options__STATE_VARIABLE_Errors_1182_1182, &libs__handle_options__STATE_VARIABLE_Errors_1499_1499);
        }
#line 14509 "libs.handle_options.c"
      }
#line 14511 "libs.handle_options.c"
    else
#line 2167 "handle_options.m"
#line 2167 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_100) {
#line 2167 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2167 "handle_options.m"
        case (MR_Integer) 0:
#line 2162 "handle_options.m"
          {
#line 2163 "handle_options.m"
            {
#line 2163 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 461, libs__handle_options__V_422_422, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1487_1487, libs__handle_options__STATE_VARIABLE_Errors_1095_1095, &libs__handle_options__STATE_VARIABLE_Errors_1499_1499);
            }
#line 2162 "handle_options.m"
          }
#line 2167 "handle_options.m"
          break;
#line 2167 "handle_options.m"
        case (MR_Integer) 1:
#line 2168 "handle_options.m"
          {
#line 2169 "handle_options.m"
            {
#line 2169 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 450, libs__handle_options__V_273_273, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1487_1487, libs__handle_options__STATE_VARIABLE_Errors_1095_1095, &libs__handle_options__STATE_VARIABLE_Errors_1499_1499);
            }
#line 2168 "handle_options.m"
          }
#line 2167 "handle_options.m"
          break;
#line 2167 "handle_options.m"
      }
#line 2173 "handle_options.m"
    {
#line 2173 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 97, libs__handle_options__V_422_422, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1487_1487, libs__handle_options__STATE_VARIABLE_Errors_1499_1499, &libs__handle_options__STATE_VARIABLE_Errors_1507_1507);
    }
#line 2182 "handle_options.m"
#line 2182 "handle_options.m"
    switch (libs__handle_options__Target_25) {
#line 2182 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2182 "handle_options.m"
      case (MR_Integer) 0:
#line 2180 "handle_options.m"
        {
#line 2181 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[196]);
#line 2180 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1519_1519 = libs__handle_options__STATE_VARIABLE_Globals_1487_1487;
#line 2180 "handle_options.m"
        }
#line 2182 "handle_options.m"
        break;
#line 2182 "handle_options.m"
      case (MR_Integer) 1:
#line 2183 "handle_options.m"
        {
#line 2184 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[197]);
#line 2183 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1519_1519 = libs__handle_options__STATE_VARIABLE_Globals_1487_1487;
#line 2183 "handle_options.m"
        }
#line 2182 "handle_options.m"
        break;
#line 2182 "handle_options.m"
      case (MR_Integer) 3:
#line 2189 "handle_options.m"
        {
#line 2189 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1515_1515;

#line 2190 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[198]);
#line 2191 "handle_options.m"
          {
#line 2191 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1487_1487, &libs__handle_options__STATE_VARIABLE_Globals_1515_1515);
          }
#line 2192 "handle_options.m"
          {
#line 2192 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 292, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1515_1515, &libs__handle_options__STATE_VARIABLE_Globals_1519_1519);
          }
#line 2189 "handle_options.m"
        }
#line 2182 "handle_options.m"
        break;
#line 2182 "handle_options.m"
      case (MR_Integer) 2:
#line 2186 "handle_options.m"
        {
#line 2187 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[199]);
#line 2186 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1519_1519 = libs__handle_options__STATE_VARIABLE_Globals_1487_1487;
#line 2186 "handle_options.m"
        }
#line 2182 "handle_options.m"
        break;
#line 2182 "handle_options.m"
    }
#line 2196 "handle_options.m"
    {
#line 2196 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1519_1519, (MR_Integer) 258, &libs__handle_options__CurrentBackendForeignLanguage_185);
    }
#line 2202 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2199 "handle_options.m"
      {
#line 2199 "handle_options.m"
        MR_Word libs__handle_options__V_1529_1529;

#line 2201 "handle_options.m"
        {
#line 2201 "handle_options.m"
          libs__handle_options__V_1529_1529 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2201 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_184));
#line 2201 "handle_options.m"
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_1529_1529, libs__handle_options__STATE_VARIABLE_Globals_1519_1519, &libs__handle_options__STATE_VARIABLE_Globals_1530_1530);
        }
#line 2199 "handle_options.m"
      }
#line 2202 "handle_options.m"
    else
#line 2203 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1530_1530 = libs__handle_options__STATE_VARIABLE_Globals_1519_1519;
#line 2206 "handle_options.m"
    {
#line 2206 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, (MR_Integer) 311, &libs__handle_options__CompareSpec_188);
    }
#line 2208 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_188 < (MR_Integer) 0);
#line 2220 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2216 "handle_options.m"
#line 2216 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_100) {
#line 2216 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2216 "handle_options.m"
        case (MR_Integer) 0:
#line 2214 "handle_options.m"
          {
#line 2215 "handle_options.m"
            {
#line 2215 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__STATE_VARIABLE_Globals_1539_1539);
            }
#line 2214 "handle_options.m"
          }
#line 2216 "handle_options.m"
          break;
#line 2216 "handle_options.m"
        case (MR_Integer) 1:
#line 2217 "handle_options.m"
          {
#line 2218 "handle_options.m"
            {
#line 2218 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__STATE_VARIABLE_Globals_1539_1539);
            }
#line 2217 "handle_options.m"
          }
#line 2216 "handle_options.m"
          break;
#line 2216 "handle_options.m"
      }
#line 2220 "handle_options.m"
    else
#line 2220 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1539_1539 = libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
#line 2227 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 2227 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2227 "handle_options.m"
      {
#line 2233 "handle_options.m"
#line 2233 "handle_options.m"
        switch (libs__handle_options__TagsMethod_57) {
#line 2233 "handle_options.m"
          default:
#line 2233 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2233 "handle_options.m"
            break;
#line 2233 "handle_options.m"
          case (MR_Integer) 2:
#line 2233 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2233 "handle_options.m"
            break;
#line 2233 "handle_options.m"
          case (MR_Integer) 1:
#line 2232 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2233 "handle_options.m"
            break;
#line 2233 "handle_options.m"
        }
#line 2227 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2227 "handle_options.m"
          {
#line 2235 "handle_options.m"
            libs__handle_options__V_1541_1541 = (MR_Integer) 2;
#line 2235 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_56 >= libs__handle_options__V_1541_1541);
#line 2227 "handle_options.m"
          }
#line 2227 "handle_options.m"
      }
#line 2239 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2237 "handle_options.m"
      {
#line 2237 "handle_options.m"
        {
#line 2237 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_273_273, libs__handle_options__STATE_VARIABLE_Globals_1539_1539, &libs__handle_options__STATE_VARIABLE_Globals_1544_1544);
        }
#line 2237 "handle_options.m"
      }
#line 2239 "handle_options.m"
    else
#line 2240 "handle_options.m"
      {
#line 2240 "handle_options.m"
        {
#line 2240 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 265, libs__handle_options__V_422_422, libs__handle_options__STATE_VARIABLE_Globals_1539_1539, &libs__handle_options__STATE_VARIABLE_Globals_1544_1544);
        }
#line 2240 "handle_options.m"
      }
#line 2247 "handle_options.m"
#line 2247 "handle_options.m"
    switch (libs__handle_options__HighLevelCode_100) {
#line 2247 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2247 "handle_options.m"
      case (MR_Integer) 0:
#line 2246 "handle_options.m"
        {
#line 2246 "handle_options.m"
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1544_1544, &libs__handle_options__STATE_VARIABLE_Globals_1550_1550);
        }
#line 2247 "handle_options.m"
        break;
#line 2247 "handle_options.m"
      case (MR_Integer) 1:
#line 2248 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1550_1550 = libs__handle_options__STATE_VARIABLE_Globals_1544_1544;
#line 2247 "handle_options.m"
        break;
#line 2247 "handle_options.m"
    }
#line 2250 "handle_options.m"
    {
#line 2250 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1550_1550, libs__handle_options__STATE_VARIABLE_Globals_191, libs__handle_options__STATE_VARIABLE_Errors_1507_1507, libs__handle_options__STATE_VARIABLE_Errors_190);
    }
#line 2251 "handle_options.m"
    {
#line 2251 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_191);
#line 2251 "handle_options.m"
      return;
    }
#line 656 "handle_options.m"
  }
#line 641 "handle_options.m"
}

#line 634 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 634 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 634 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_6,
#line 634 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_7)
#line 634 "handle_options.m"
{
#line 637 "handle_options.m"
  {
#line 637 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 637 "handle_options.m"
    {
#line 637 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_7 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_6, ((MR_Box) (libs__handle_options__Error_4)));
    }
#line 637 "handle_options.m"
  }
#line 634 "handle_options.m"
}

#line 237 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
#line 237 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_119,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_120,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__Target_25,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_26,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_27,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_28,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_29,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_30,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_31,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_32,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_33,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_34,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_35,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_36,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_37,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_38,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_39,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_40,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_41,
#line 237 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_121,
#line 237 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_122)
#line 237 "handle_options.m"
{
#line 252 "handle_options.m"
  {
#line 252 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_289_289 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_290_290 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__Target0_44;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__GC_Method0_47;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod0_50;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__PercentFull_53;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__TermNorm0_55;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__Term2Norm0_58;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableTracing_61;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__Suppress_69;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableSSDB_72;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafeOption_78;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__DumpAliasOption_81;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerType0_85;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerType0_88;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraint0_91;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraintArg0_92;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__FeedbackFile0_96;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__HostEnvType0_103;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvType0_106;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvType0_109;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__LimitErrorContextsOption_112;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_127_127;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_132_132;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_139_139;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_146_146;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_153_153;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_160_160;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_171_171;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_182_182;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_188_188;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_191_191;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_195_195;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 252 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_199_199;
#line 252 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_200_200;
#line 252 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_203_203;
#line 252 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_207_207;
#line 252 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_231_231;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__V_234_234;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_238_238;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_243_243;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_249_249;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_262_262;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_267_267;
#line 252 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_271_271;
#line 253 "handle_options.m"
    MR_Box libs__handle_options__conv0_Target0_44;
#line 259 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_46;
#line 255 "handle_options.m"
    MR_String libs__handle_options__TargetStr_45;
#line 266 "handle_options.m"
    MR_Box libs__handle_options__conv1_GC_Method0_47;
#line 272 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_49;
#line 268 "handle_options.m"
    MR_String libs__handle_options__GC_MethodStr_48;
#line 280 "handle_options.m"
    MR_Box libs__handle_options__conv2_TagsMethod0_50;
#line 286 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_52;
#line 282 "handle_options.m"
    MR_String libs__handle_options__TagsMethodStr_51;
#line 292 "handle_options.m"
    MR_Box libs__handle_options__conv3_PercentFull_53;
#line 294 "handle_options.m"
    MR_Integer libs__handle_options__Percent_54;
#line 294 "handle_options.m"
    MR_Integer libs__handle_options__V_143_143;
#line 294 "handle_options.m"
    MR_Integer libs__handle_options__V_144_144;
#line 305 "handle_options.m"
    MR_Box libs__handle_options__conv4_TermNorm0_55;
#line 311 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_57;
#line 307 "handle_options.m"
    MR_String libs__handle_options__TermNormStr_56;
#line 318 "handle_options.m"
    MR_Box libs__handle_options__conv5_Term2Norm0_58;
#line 324 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_60;
#line 320 "handle_options.m"
    MR_String libs__handle_options__Term2NormStr_59;
#line 331 "handle_options.m"
    MR_Box libs__handle_options__conv6_ForceDisableTracing_61;
#line 332 "handle_options.m"
    MR_Word libs__handle_options__V_166_166;
#line 361 "handle_options.m"
    MR_Box libs__handle_options__conv10_Suppress_69;
#line 367 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_71;
#line 363 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_70;
#line 372 "handle_options.m"
    MR_Box libs__handle_options__conv11_ForceDisableSSDB_72;
#line 373 "handle_options.m"
    MR_Word libs__handle_options__V_184_184;
#line 390 "handle_options.m"
    MR_Box libs__handle_options__conv14_MaybeThreadSafeOption_78;
#line 396 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafe0_80;
#line 392 "handle_options.m"
    MR_String libs__handle_options__MaybeThreadSafeString_79;
#line 401 "handle_options.m"
    MR_Box libs__handle_options__conv15_DumpAliasOption_81;
#line 403 "handle_options.m"
    MR_String libs__handle_options__DumpAlias_82;
#line 430 "handle_options.m"
    MR_Char libs__handle_options__V_202_202;
#line 439 "handle_options.m"
    MR_Char libs__handle_options__V_206_206;
#line 470 "handle_options.m"
    MR_Char libs__handle_options__V_230_230;
#line 479 "handle_options.m"
    MR_Box libs__handle_options__conv16_C_CompilerType0_85;
#line 485 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_87;
#line 481 "handle_options.m"
    MR_String libs__handle_options__C_CompilerTypeStr_86;
#line 492 "handle_options.m"
    MR_Box libs__handle_options__conv17_CSharp_CompilerType0_88;
#line 499 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_90;
#line 494 "handle_options.m"
    MR_String libs__handle_options__CSharp_CompilerTypeStr_89;
#line 507 "handle_options.m"
    MR_Box libs__handle_options__conv18_ReuseConstraint0_91;
#line 508 "handle_options.m"
    MR_Box libs__handle_options__conv19_ReuseConstraintArg0_92;
#line 517 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_95;
#line 511 "handle_options.m"
    MR_String libs__handle_options__ReuseConstraintStr_93;
#line 511 "handle_options.m"
    MR_Integer libs__handle_options__ReuseConstraintArgNum_94;
#line 525 "handle_options.m"
    MR_Box libs__handle_options__conv20_FeedbackFile0_96;
#line 548 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_97;
#line 552 "handle_options.m"
    MR_Box libs__handle_options__conv21_HostEnvType0_103;
#line 558 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_105;
#line 554 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_104;
#line 565 "handle_options.m"
    MR_Box libs__handle_options__conv22_SystemEnvType0_106;
#line 575 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_108;
#line 567 "handle_options.m"
    MR_String libs__handle_options__SystemEnvTypeStr_107;
#line 582 "handle_options.m"
    MR_Box libs__handle_options__conv23_TargetEnvType0_109;
#line 588 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_111;
#line 584 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_110;
#line 608 "handle_options.m"
    MR_Box libs__handle_options__conv24_LimitErrorContextsOption_112;
#line 629 "handle_options.m"
    MR_Word libs__handle_options__LimitErrorContextsOptionStrs_113;

#line 253 "handle_options.m"
    {
#line 253 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 175)), &libs__handle_options__conv0_Target0_44);
    }
#line 253 "handle_options.m"
    libs__handle_options__Target0_44 = ((MR_Word) libs__handle_options__conv0_Target0_44);
#line 255 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Target0_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_44, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 255 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 255 "handle_options.m"
      {
#line 255 "handle_options.m"
        libs__handle_options__TargetStr_45 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_44, (MR_Integer) 1)));
#line 256 "handle_options.m"
        {
#line 256 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_45, &libs__handle_options__TargetPrime_46);
        }
#line 255 "handle_options.m"
      }
#line 259 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 258 "handle_options.m"
      {
#line 258 "handle_options.m"
        *libs__handle_options__Target_25 = libs__handle_options__TargetPrime_46;
#line 258 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_127_127 = libs__handle_options__STATE_VARIABLE_Errors_0_121;
#line 258 "handle_options.m"
      }
#line 259 "handle_options.m"
    else
#line 260 "handle_options.m"
      {
#line 260 "handle_options.m"
        *libs__handle_options__Target_25 = (MR_Integer) 0;
#line 261 "handle_options.m"
        {
#line 261 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid target option (must be \140c\', \140java\', \'csharp\', or \140erlang\')", libs__handle_options__STATE_VARIABLE_Errors_0_121, &libs__handle_options__STATE_VARIABLE_Errors_127_127);
        }
#line 260 "handle_options.m"
      }
#line 266 "handle_options.m"
    {
#line 266 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 212)), &libs__handle_options__conv1_GC_Method0_47);
    }
#line 266 "handle_options.m"
    libs__handle_options__GC_Method0_47 = ((MR_Word) libs__handle_options__conv1_GC_Method0_47);
#line 268 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__GC_Method0_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_47, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 268 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 268 "handle_options.m"
      {
#line 268 "handle_options.m"
        libs__handle_options__GC_MethodStr_48 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_47, (MR_Integer) 1)));
#line 269 "handle_options.m"
        {
#line 269 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_48, &libs__handle_options__GC_MethodPrime_49);
        }
#line 268 "handle_options.m"
      }
#line 272 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 271 "handle_options.m"
      {
#line 271 "handle_options.m"
        *libs__handle_options__GC_Method_26 = libs__handle_options__GC_MethodPrime_49;
#line 271 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_132_132 = libs__handle_options__STATE_VARIABLE_Errors_127_127;
#line 271 "handle_options.m"
      }
#line 272 "handle_options.m"
    else
#line 273 "handle_options.m"
      {
#line 273 "handle_options.m"
        *libs__handle_options__GC_Method_26 = (MR_Integer) 1;
#line 274 "handle_options.m"
        {
#line 274 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140accurate\', or \140automatic\')", libs__handle_options__STATE_VARIABLE_Errors_127_127, &libs__handle_options__STATE_VARIABLE_Errors_132_132);
        }
#line 273 "handle_options.m"
      }
#line 280 "handle_options.m"
    {
#line 280 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 233)), &libs__handle_options__conv2_TagsMethod0_50);
    }
#line 280 "handle_options.m"
    libs__handle_options__TagsMethod0_50 = ((MR_Word) libs__handle_options__conv2_TagsMethod0_50);
#line 282 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TagsMethod0_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_50, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 282 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 282 "handle_options.m"
      {
#line 282 "handle_options.m"
        libs__handle_options__TagsMethodStr_51 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_50, (MR_Integer) 1)));
#line 283 "handle_options.m"
        {
#line 283 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_51, &libs__handle_options__TagsMethodPrime_52);
        }
#line 282 "handle_options.m"
      }
#line 286 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 285 "handle_options.m"
      {
#line 285 "handle_options.m"
        *libs__handle_options__TagsMethod_27 = libs__handle_options__TagsMethodPrime_52;
#line 285 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_139_139 = libs__handle_options__STATE_VARIABLE_Errors_132_132;
#line 285 "handle_options.m"
      }
#line 286 "handle_options.m"
    else
#line 287 "handle_options.m"
      {
#line 287 "handle_options.m"
        *libs__handle_options__TagsMethod_27 = (MR_Integer) 0;
#line 288 "handle_options.m"
        {
#line 288 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid tags option (must be \140none\', \140low\' or \140high\')", libs__handle_options__STATE_VARIABLE_Errors_132_132, &libs__handle_options__STATE_VARIABLE_Errors_139_139);
        }
#line 287 "handle_options.m"
      }
#line 292 "handle_options.m"
    {
#line 292 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 314)), &libs__handle_options__conv3_PercentFull_53);
    }
#line 292 "handle_options.m"
    libs__handle_options__PercentFull_53 = ((MR_Word) libs__handle_options__conv3_PercentFull_53);
#line 294 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__PercentFull_53)) == (MR_mktag((MR_Integer) 2)));
#line 294 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 294 "handle_options.m"
      {
#line 294 "handle_options.m"
        libs__handle_options__Percent_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__PercentFull_53, (MR_Integer) 0)));
#line 295 "handle_options.m"
        libs__handle_options__V_143_143 = (MR_Integer) 1;
#line 295 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Percent_54 >= libs__handle_options__V_143_143);
#line 294 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 294 "handle_options.m"
          {
#line 296 "handle_options.m"
            libs__handle_options__V_144_144 = (MR_Integer) 100;
#line 296 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Percent_54 <= libs__handle_options__V_144_144);
#line 294 "handle_options.m"
          }
#line 294 "handle_options.m"
      }
#line 299 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 299 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_146_146 = libs__handle_options__STATE_VARIABLE_Errors_139_139;
#line 299 "handle_options.m"
    else
#line 300 "handle_options.m"
      {
#line 300 "handle_options.m"
        {
#line 300 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", libs__handle_options__STATE_VARIABLE_Errors_139_139, &libs__handle_options__STATE_VARIABLE_Errors_146_146);
        }
#line 300 "handle_options.m"
      }
#line 305 "handle_options.m"
    {
#line 305 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 413)), &libs__handle_options__conv4_TermNorm0_55);
    }
#line 305 "handle_options.m"
    libs__handle_options__TermNorm0_55 = ((MR_Word) libs__handle_options__conv4_TermNorm0_55);
#line 307 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TermNorm0_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_55, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 307 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 307 "handle_options.m"
      {
#line 307 "handle_options.m"
        libs__handle_options__TermNormStr_56 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_55, (MR_Integer) 1)));
#line 308 "handle_options.m"
        {
#line 308 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_56, &libs__handle_options__TermNormPrime_57);
        }
#line 307 "handle_options.m"
      }
#line 311 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 310 "handle_options.m"
      {
#line 310 "handle_options.m"
        *libs__handle_options__TermNorm_28 = libs__handle_options__TermNormPrime_57;
#line 310 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_153_153 = libs__handle_options__STATE_VARIABLE_Errors_146_146;
#line 310 "handle_options.m"
      }
#line 311 "handle_options.m"
    else
#line 312 "handle_options.m"
      {
#line 312 "handle_options.m"
        *libs__handle_options__TermNorm_28 = (MR_Integer) 0;
#line 313 "handle_options.m"
        {
#line 313 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_146_146, &libs__handle_options__STATE_VARIABLE_Errors_153_153);
        }
#line 312 "handle_options.m"
      }
#line 318 "handle_options.m"
    {
#line 318 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 419)), &libs__handle_options__conv5_Term2Norm0_58);
    }
#line 318 "handle_options.m"
    libs__handle_options__Term2Norm0_58 = ((MR_Word) libs__handle_options__conv5_Term2Norm0_58);
#line 320 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Term2Norm0_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_58, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 320 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 320 "handle_options.m"
      {
#line 320 "handle_options.m"
        libs__handle_options__Term2NormStr_59 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_58, (MR_Integer) 1)));
#line 321 "handle_options.m"
        {
#line 321 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_59, &libs__handle_options__Term2NormPrime_60);
        }
#line 320 "handle_options.m"
      }
#line 324 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 323 "handle_options.m"
      {
#line 323 "handle_options.m"
        *libs__handle_options__Term2Norm_29 = libs__handle_options__Term2NormPrime_60;
#line 323 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_160_160 = libs__handle_options__STATE_VARIABLE_Errors_153_153;
#line 323 "handle_options.m"
      }
#line 324 "handle_options.m"
    else
#line 325 "handle_options.m"
      {
#line 325 "handle_options.m"
        *libs__handle_options__Term2Norm_29 = (MR_Integer) 0;
#line 326 "handle_options.m"
        {
#line 326 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_153_153, &libs__handle_options__STATE_VARIABLE_Errors_160_160);
        }
#line 325 "handle_options.m"
      }
#line 331 "handle_options.m"
    {
#line 331 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 131)), &libs__handle_options__conv6_ForceDisableTracing_61);
    }
#line 331 "handle_options.m"
    libs__handle_options__ForceDisableTracing_61 = ((MR_Word) libs__handle_options__conv6_ForceDisableTracing_61);
#line 332 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableTracing_61)) == (MR_mktag((MR_Integer) 1)));
#line 332 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 332 "handle_options.m"
      {
#line 332 "handle_options.m"
        libs__handle_options__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableTracing_61, (MR_Integer) 0)));
#line 332 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_166_166 == (MR_Integer) 1);
#line 332 "handle_options.m"
      }
#line 334 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 333 "handle_options.m"
      {
#line 333 "handle_options.m"
        {
#line 333 "handle_options.m"
          *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
        }
#line 333 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_171_171 = libs__handle_options__STATE_VARIABLE_Errors_160_160;
#line 333 "handle_options.m"
      }
#line 334 "handle_options.m"
    else
#line 335 "handle_options.m"
      {
#line 335 "handle_options.m"
        MR_Word libs__handle_options__Trace_62;
#line 335 "handle_options.m"
        MR_Word libs__handle_options__ExecTraceOpt_63;
#line 335 "handle_options.m"
        MR_Word libs__handle_options__DeclDebugOpt_64;
#line 335 "handle_options.m"
        MR_Box libs__handle_options__conv7_Trace_62;
#line 336 "handle_options.m"
        MR_Box libs__handle_options__conv8_ExecTraceOpt_63;
#line 337 "handle_options.m"
        MR_Box libs__handle_options__conv9_DeclDebugOpt_64;
#line 353 "handle_options.m"
        MR_Word libs__handle_options__MaybeTraceLevel_68;
#line 339 "handle_options.m"
        MR_String libs__handle_options__TraceStr_65;
#line 339 "handle_options.m"
        MR_Word libs__handle_options__ExecTrace_66;
#line 339 "handle_options.m"
        MR_Word libs__handle_options__DeclDebug_67;

#line 335 "handle_options.m"
        {
#line 335 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 119)), &libs__handle_options__conv7_Trace_62);
        }
#line 335 "handle_options.m"
        libs__handle_options__Trace_62 = ((MR_Word) libs__handle_options__conv7_Trace_62);
#line 336 "handle_options.m"
        {
#line 336 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 183)), &libs__handle_options__conv8_ExecTraceOpt_63);
        }
#line 336 "handle_options.m"
        libs__handle_options__ExecTraceOpt_63 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_63);
#line 337 "handle_options.m"
        {
#line 337 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 184)), &libs__handle_options__conv9_DeclDebugOpt_64);
        }
#line 337 "handle_options.m"
        libs__handle_options__DeclDebugOpt_64 = ((MR_Word) libs__handle_options__conv9_DeclDebugOpt_64);
#line 339 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Trace_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 339 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 339 "handle_options.m"
          {
#line 339 "handle_options.m"
            libs__handle_options__TraceStr_65 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_62, (MR_Integer) 1)));
#line 340 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ExecTraceOpt_63)) == (MR_mktag((MR_Integer) 1)));
#line 340 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 340 "handle_options.m"
              {
#line 340 "handle_options.m"
                libs__handle_options__ExecTrace_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ExecTraceOpt_63, (MR_Integer) 0)));
#line 341 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DeclDebugOpt_64)) == (MR_mktag((MR_Integer) 1)));
#line 341 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 341 "handle_options.m"
                  {
#line 341 "handle_options.m"
                    libs__handle_options__DeclDebug_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DeclDebugOpt_64, (MR_Integer) 0)));
#line 342 "handle_options.m"
                    {
#line 342 "handle_options.m"
                      libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__TraceStr_65, libs__handle_options__ExecTrace_66, libs__handle_options__DeclDebug_67, &libs__handle_options__MaybeTraceLevel_68);
                    }
#line 341 "handle_options.m"
                  }
#line 340 "handle_options.m"
              }
#line 339 "handle_options.m"
          }
#line 353 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 347 "handle_options.m"
          if ((libs__handle_options__MaybeTraceLevel_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "handle_options.m"
            {
#line 349 "handle_options.m"
              {
#line 349 "handle_options.m"
                *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 350 "handle_options.m"
              {
#line 350 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "Specified trace level is not compatible with grade", libs__handle_options__STATE_VARIABLE_Errors_160_160, &libs__handle_options__STATE_VARIABLE_Errors_171_171);
              }
#line 348 "handle_options.m"
            }
#line 347 "handle_options.m"
          else
#line 346 "handle_options.m"
            {
#line 346 "handle_options.m"
              *libs__handle_options__TraceLevel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_68, (MR_Integer) 0)));
#line 346 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_171_171 = libs__handle_options__STATE_VARIABLE_Errors_160_160;
#line 346 "handle_options.m"
            }
#line 353 "handle_options.m"
        else
#line 354 "handle_options.m"
          {
#line 354 "handle_options.m"
            {
#line 354 "handle_options.m"
              *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
            }
#line 355 "handle_options.m"
            {
#line 355 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", libs__handle_options__STATE_VARIABLE_Errors_160_160, &libs__handle_options__STATE_VARIABLE_Errors_171_171);
            }
#line 354 "handle_options.m"
          }
#line 335 "handle_options.m"
      }
#line 361 "handle_options.m"
    {
#line 361 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 130)), &libs__handle_options__conv10_Suppress_69);
    }
#line 361 "handle_options.m"
    libs__handle_options__Suppress_69 = ((MR_Word) libs__handle_options__conv10_Suppress_69);
#line 363 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Suppress_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_69, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 363 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 363 "handle_options.m"
      {
#line 363 "handle_options.m"
        libs__handle_options__SuppressStr_70 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_69, (MR_Integer) 1)));
#line 364 "handle_options.m"
        {
#line 364 "handle_options.m"
          libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_70, &libs__handle_options__TraceSuppressPrime_71);
        }
#line 363 "handle_options.m"
      }
#line 367 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 366 "handle_options.m"
      {
#line 366 "handle_options.m"
        *libs__handle_options__TraceSuppress_31 = libs__handle_options__TraceSuppressPrime_71;
#line 366 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_182_182 = libs__handle_options__STATE_VARIABLE_Errors_171_171;
#line 366 "handle_options.m"
      }
#line 367 "handle_options.m"
    else
#line 368 "handle_options.m"
      {
#line 368 "handle_options.m"
        {
#line 368 "handle_options.m"
          *libs__handle_options__TraceSuppress_31 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 369 "handle_options.m"
        {
#line 369 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--suppress-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_171_171, &libs__handle_options__STATE_VARIABLE_Errors_182_182);
        }
#line 368 "handle_options.m"
      }
#line 372 "handle_options.m"
    {
#line 372 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 135)), &libs__handle_options__conv11_ForceDisableSSDB_72);
    }
#line 372 "handle_options.m"
    libs__handle_options__ForceDisableSSDB_72 = ((MR_Word) libs__handle_options__conv11_ForceDisableSSDB_72);
#line 373 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableSSDB_72)) == (MR_mktag((MR_Integer) 1)));
#line 373 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 373 "handle_options.m"
      {
#line 373 "handle_options.m"
        libs__handle_options__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableSSDB_72, (MR_Integer) 0)));
#line 373 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_184_184 == (MR_Integer) 1);
#line 373 "handle_options.m"
      }
#line 375 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 374 "handle_options.m"
      {
#line 374 "handle_options.m"
        *libs__handle_options__SSTraceLevel_32 = (MR_Integer) 0;
#line 374 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_188_188 = libs__handle_options__STATE_VARIABLE_Errors_182_182;
#line 374 "handle_options.m"
      }
#line 375 "handle_options.m"
    else
#line 376 "handle_options.m"
      {
#line 376 "handle_options.m"
        MR_Word libs__handle_options__SSTrace_73;
#line 376 "handle_options.m"
        MR_Word libs__handle_options__SSDB_74;
#line 376 "handle_options.m"
        MR_Box libs__handle_options__conv12_SSTrace_73;
#line 377 "handle_options.m"
        MR_Box libs__handle_options__conv13_SSDB_74;
#line 384 "handle_options.m"
        MR_Word libs__handle_options__SSTL_77;
#line 379 "handle_options.m"
        MR_String libs__handle_options__SSTraceStr_75;
#line 379 "handle_options.m"
        MR_Word libs__handle_options__IsInSSDebugGrade_76;

#line 376 "handle_options.m"
        {
#line 376 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 231)), &libs__handle_options__conv12_SSTrace_73);
        }
#line 376 "handle_options.m"
        libs__handle_options__SSTrace_73 = ((MR_Word) libs__handle_options__conv12_SSTrace_73);
#line 377 "handle_options.m"
        {
#line 377 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 230)), &libs__handle_options__conv13_SSDB_74);
        }
#line 377 "handle_options.m"
        libs__handle_options__SSDB_74 = ((MR_Word) libs__handle_options__conv13_SSDB_74);
#line 379 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SSTrace_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_73, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 379 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 379 "handle_options.m"
          {
#line 379 "handle_options.m"
            libs__handle_options__SSTraceStr_75 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_73, (MR_Integer) 1)));
#line 380 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__SSDB_74)) == (MR_mktag((MR_Integer) 1)));
#line 380 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 380 "handle_options.m"
              {
#line 380 "handle_options.m"
                libs__handle_options__IsInSSDebugGrade_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__SSDB_74, (MR_Integer) 0)));
#line 381 "handle_options.m"
                {
#line 381 "handle_options.m"
                  libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTraceStr_75, libs__handle_options__IsInSSDebugGrade_76, &libs__handle_options__SSTL_77);
                }
#line 380 "handle_options.m"
              }
#line 379 "handle_options.m"
          }
#line 384 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 383 "handle_options.m"
          {
#line 383 "handle_options.m"
            *libs__handle_options__SSTraceLevel_32 = libs__handle_options__SSTL_77;
#line 383 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_188_188 = libs__handle_options__STATE_VARIABLE_Errors_182_182;
#line 383 "handle_options.m"
          }
#line 384 "handle_options.m"
        else
#line 385 "handle_options.m"
          {
#line 385 "handle_options.m"
            *libs__handle_options__SSTraceLevel_32 = (MR_Integer) 0;
#line 386 "handle_options.m"
            {
#line 386 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--ssdb-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_182_182, &libs__handle_options__STATE_VARIABLE_Errors_188_188);
            }
#line 385 "handle_options.m"
          }
#line 376 "handle_options.m"
      }
#line 390 "handle_options.m"
    {
#line 390 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 223)), &libs__handle_options__conv14_MaybeThreadSafeOption_78);
    }
#line 390 "handle_options.m"
    libs__handle_options__MaybeThreadSafeOption_78 = ((MR_Word) libs__handle_options__conv14_MaybeThreadSafeOption_78);
#line 392 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__MaybeThreadSafeOption_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 392 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 392 "handle_options.m"
      {
#line 392 "handle_options.m"
        libs__handle_options__MaybeThreadSafeString_79 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_78, (MR_Integer) 1)));
#line 393 "handle_options.m"
        {
#line 393 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeString_79, &libs__handle_options__MaybeThreadSafe0_80);
        }
#line 392 "handle_options.m"
      }
#line 396 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 395 "handle_options.m"
      {
#line 395 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_33 = libs__handle_options__MaybeThreadSafe0_80;
#line 395 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_191_191 = libs__handle_options__STATE_VARIABLE_Errors_188_188;
#line 395 "handle_options.m"
      }
#line 396 "handle_options.m"
    else
#line 397 "handle_options.m"
      {
#line 397 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_33 = (MR_Integer) 0;
#line 398 "handle_options.m"
        {
#line 398 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--maybe-thread-safe\'.", libs__handle_options__STATE_VARIABLE_Errors_188_188, &libs__handle_options__STATE_VARIABLE_Errors_191_191);
        }
#line 397 "handle_options.m"
      }
#line 401 "handle_options.m"
    {
#line 401 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, libs__handle_options__STATE_VARIABLE_OptionTable_0_119, ((MR_Box) ((MR_Integer) 150)), &libs__handle_options__conv15_DumpAliasOption_81);
    }
#line 401 "handle_options.m"
    libs__handle_options__DumpAliasOption_81 = ((MR_Word) libs__handle_options__conv15_DumpAliasOption_81);
#line 403 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 403 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 403 "handle_options.m"
      {
#line 403 "handle_options.m"
        libs__handle_options__DumpAlias_82 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 1)));
#line 404 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_82, (MR_String) "") == 0);
#line 403 "handle_options.m"
      }
#line 407 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 406 "handle_options.m"
      {
#line 406 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_197_197 = libs__handle_options__STATE_VARIABLE_Errors_191_191;
#line 406 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_195_195 = libs__handle_options__STATE_VARIABLE_OptionTable_0_119;
#line 406 "handle_options.m"
      }
#line 407 "handle_options.m"
    else
#line 412 "handle_options.m"
      {
#line 412 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_83;
#line 408 "handle_options.m"
        MR_String libs__handle_options__DumpAlias_287;

#line 408 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 408 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 408 "handle_options.m"
          {
#line 408 "handle_options.m"
            libs__handle_options__DumpAlias_287 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 1)));
#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_287, &libs__handle_options__AliasDumpOptions_83);
            }
#line 408 "handle_options.m"
          }
#line 412 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 411 "handle_options.m"
          {
#line 411 "handle_options.m"
            MR_Word libs__handle_options__V_194_194;

#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              libs__handle_options__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_194_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 411 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_194_194, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_83));
#line 411 "handle_options.m"
            }
#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_194_194)), libs__handle_options__STATE_VARIABLE_OptionTable_0_119, &libs__handle_options__STATE_VARIABLE_OptionTable_195_195);
            }
#line 411 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_197_197 = libs__handle_options__STATE_VARIABLE_Errors_191_191;
#line 411 "handle_options.m"
          }
#line 412 "handle_options.m"
        else
#line 413 "handle_options.m"
          {
#line 413 "handle_options.m"
            {
#line 413 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--hlds-dump-alias\'.", libs__handle_options__STATE_VARIABLE_Errors_191_191, &libs__handle_options__STATE_VARIABLE_Errors_197_197);
            }
#line 413 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_195_195 = libs__handle_options__STATE_VARIABLE_OptionTable_0_119;
#line 413 "handle_options.m"
          }
#line 412 "handle_options.m"
      }
#line 417 "handle_options.m"
    {
#line 417 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__STATE_VARIABLE_OptionTable_195_195, ((MR_Box) ((MR_Integer) 151)), &libs__handle_options__STATE_VARIABLE_DumpOptions_199_199);
    }
#line 421 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_199_199, (MR_String) "") == 0);
#line 423 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 422 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_200_200 = (MR_String) "x";
#line 423 "handle_options.m"
    else
#line 423 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_200_200 = libs__handle_options__STATE_VARIABLE_DumpOptions_199_199;
#line 429 "handle_options.m"
    {
#line 429 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_200_200, (MR_Char) 121);
    }
#line 429 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 429 "handle_options.m"
      {
#line 430 "handle_options.m"
        libs__handle_options__V_202_202 = (MR_Char) 97;
#line 430 "handle_options.m"
        {
#line 430 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_200_200, libs__handle_options__V_202_202);
        }
#line 430 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 429 "handle_options.m"
      }
#line 433 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 432 "handle_options.m"
      {
#line 432 "handle_options.m"
        {
#line 432 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_203_203 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_200_200);
        }
#line 432 "handle_options.m"
      }
#line 433 "handle_options.m"
    else
#line 433 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_203_203 = libs__handle_options__STATE_VARIABLE_DumpOptions_200_200;
#line 438 "handle_options.m"
    {
#line 438 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_203_203, (MR_Char) 97);
    }
#line 438 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 438 "handle_options.m"
      {
#line 439 "handle_options.m"
        libs__handle_options__V_206_206 = (MR_Char) 117;
#line 439 "handle_options.m"
        {
#line 439 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_203_203, libs__handle_options__V_206_206);
        }
#line 439 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 438 "handle_options.m"
      }
#line 442 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 441 "handle_options.m"
      {
#line 441 "handle_options.m"
        {
#line 441 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_203_203);
        }
#line 441 "handle_options.m"
      }
#line 442 "handle_options.m"
    else
#line 442 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = libs__handle_options__STATE_VARIABLE_DumpOptions_203_203;
#line 448 "handle_options.m"
    {
#line 448 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 65);
    }
#line 449 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
      {
#line 449 "handle_options.m"
        {
#line 449 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 66);
        }
#line 449 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
          {
#line 450 "handle_options.m"
            {
#line 450 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 68);
            }
#line 449 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
              {
#line 451 "handle_options.m"
                {
#line 451 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 71);
                }
#line 449 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                  {
#line 452 "handle_options.m"
                    {
#line 452 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 80);
                    }
#line 449 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                      {
#line 453 "handle_options.m"
                        {
#line 453 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 82);
                        }
#line 449 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                          {
#line 454 "handle_options.m"
                            {
#line 454 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 83);
                            }
#line 449 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                              {
#line 455 "handle_options.m"
                                {
#line 455 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 98);
                                }
#line 449 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                  {
#line 456 "handle_options.m"
                                    {
#line 456 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 99);
                                    }
#line 449 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                      {
#line 457 "handle_options.m"
                                        {
#line 457 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 100);
                                        }
#line 449 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                          {
#line 458 "handle_options.m"
                                            {
#line 458 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 102);
                                            }
#line 449 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                              {
#line 459 "handle_options.m"
                                                {
#line 459 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 103);
                                                }
#line 449 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                  {
#line 460 "handle_options.m"
                                                    {
#line 460 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 105);
                                                    }
#line 449 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                      {
#line 461 "handle_options.m"
                                                        {
#line 461 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 108);
                                                        }
#line 449 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                          {
#line 462 "handle_options.m"
                                                            {
#line 462 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 109);
                                                            }
#line 449 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                              {
#line 463 "handle_options.m"
                                                                {
#line 463 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 110);
                                                                }
#line 449 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                  {
#line 464 "handle_options.m"
                                                                    {
#line 464 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 112);
                                                                    }
#line 449 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                      {
#line 465 "handle_options.m"
                                                                        {
#line 465 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 115);
                                                                        }
#line 449 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                          {
#line 466 "handle_options.m"
                                                                            {
#line 466 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 116);
                                                                            }
#line 449 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                              {
#line 467 "handle_options.m"
                                                                                {
#line 467 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 117);
                                                                                }
#line 449 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 468 "handle_options.m"
                                                                                  {
#line 468 "handle_options.m"
                                                                                    {
#line 468 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 122);
                                                                                    }
#line 468 "handle_options.m"
                                                                                  }
#line 449 "handle_options.m"
                                                                              }
#line 449 "handle_options.m"
                                                                          }
#line 449 "handle_options.m"
                                                                      }
#line 449 "handle_options.m"
                                                                  }
#line 449 "handle_options.m"
                                                              }
#line 449 "handle_options.m"
                                                          }
#line 449 "handle_options.m"
                                                      }
#line 449 "handle_options.m"
                                                  }
#line 449 "handle_options.m"
                                              }
#line 449 "handle_options.m"
                                          }
#line 449 "handle_options.m"
                                      }
#line 449 "handle_options.m"
                                  }
#line 449 "handle_options.m"
                              }
#line 449 "handle_options.m"
                          }
#line 449 "handle_options.m"
                      }
#line 449 "handle_options.m"
                  }
#line 449 "handle_options.m"
              }
#line 449 "handle_options.m"
          }
#line 449 "handle_options.m"
      }
#line 469 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 469 "handle_options.m"
      {
#line 470 "handle_options.m"
        libs__handle_options__V_230_230 = (MR_Char) 120;
#line 470 "handle_options.m"
        {
#line 470 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, libs__handle_options__V_230_230);
        }
#line 470 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 469 "handle_options.m"
      }
#line 473 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 472 "handle_options.m"
      {
#line 472 "handle_options.m"
        {
#line 472 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_231_231 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_207_207);
        }
#line 472 "handle_options.m"
      }
#line 473 "handle_options.m"
    else
#line 473 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_231_231 = libs__handle_options__STATE_VARIABLE_DumpOptions_207_207;
#line 476 "handle_options.m"
    {
#line 476 "handle_options.m"
      libs__handle_options__V_234_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_234_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 476 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_234_234, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_231_231));
#line 476 "handle_options.m"
    }
#line 476 "handle_options.m"
    {
#line 476 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_234_234)), libs__handle_options__STATE_VARIABLE_OptionTable_195_195, libs__handle_options__STATE_VARIABLE_OptionTable_120);
    }
#line 479 "handle_options.m"
    {
#line 479 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 506)), &libs__handle_options__conv16_C_CompilerType0_85);
    }
#line 479 "handle_options.m"
    libs__handle_options__C_CompilerType0_85 = ((MR_Word) libs__handle_options__conv16_C_CompilerType0_85);
#line 481 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__C_CompilerType0_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_85, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 481 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 481 "handle_options.m"
      {
#line 481 "handle_options.m"
        libs__handle_options__C_CompilerTypeStr_86 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_85, (MR_Integer) 1)));
#line 482 "handle_options.m"
        {
#line 482 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_86, &libs__handle_options__C_CompilerTypePrime_87);
        }
#line 481 "handle_options.m"
      }
#line 485 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 484 "handle_options.m"
      {
#line 484 "handle_options.m"
        *libs__handle_options__C_CompilerType_34 = libs__handle_options__C_CompilerTypePrime_87;
#line 484 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_238_238 = libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 484 "handle_options.m"
      }
#line 485 "handle_options.m"
    else
#line 486 "handle_options.m"
      {
#line 486 "handle_options.m"
        *libs__handle_options__C_CompilerType_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "handle_options.m"
        {
#line 487 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140clang\', \'msvc\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_197_197, &libs__handle_options__STATE_VARIABLE_Errors_238_238);
        }
#line 486 "handle_options.m"
      }
#line 492 "handle_options.m"
    {
#line 492 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 507)), &libs__handle_options__conv17_CSharp_CompilerType0_88);
    }
#line 492 "handle_options.m"
    libs__handle_options__CSharp_CompilerType0_88 = ((MR_Word) libs__handle_options__conv17_CSharp_CompilerType0_88);
#line 494 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__CSharp_CompilerType0_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_88, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 494 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 494 "handle_options.m"
      {
#line 494 "handle_options.m"
        libs__handle_options__CSharp_CompilerTypeStr_89 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_88, (MR_Integer) 1)));
#line 495 "handle_options.m"
        {
#line 495 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_89, &libs__handle_options__CSharp_CompilerTypePrime_90);
        }
#line 494 "handle_options.m"
      }
#line 499 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 498 "handle_options.m"
      {
#line 498 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_35 = libs__handle_options__CSharp_CompilerTypePrime_90;
#line 498 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_243_243 = libs__handle_options__STATE_VARIABLE_Errors_238_238;
#line 498 "handle_options.m"
      }
#line 499 "handle_options.m"
    else
#line 500 "handle_options.m"
      {
#line 500 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_35 = (MR_Integer) 2;
#line 501 "handle_options.m"
        {
#line 501 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_238_238, &libs__handle_options__STATE_VARIABLE_Errors_243_243);
        }
#line 500 "handle_options.m"
      }
#line 507 "handle_options.m"
    {
#line 507 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 404)), &libs__handle_options__conv18_ReuseConstraint0_91);
    }
#line 507 "handle_options.m"
    libs__handle_options__ReuseConstraint0_91 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_91);
#line 508 "handle_options.m"
    {
#line 508 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 405)), &libs__handle_options__conv19_ReuseConstraintArg0_92);
    }
#line 508 "handle_options.m"
    libs__handle_options__ReuseConstraintArg0_92 = ((MR_Word) libs__handle_options__conv19_ReuseConstraintArg0_92);
#line 511 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__ReuseConstraint0_91)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_91, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 511 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 511 "handle_options.m"
      {
#line 511 "handle_options.m"
        libs__handle_options__ReuseConstraintStr_93 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_91, (MR_Integer) 1)));
#line 512 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ReuseConstraintArg0_92)) == (MR_mktag((MR_Integer) 2)));
#line 512 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 512 "handle_options.m"
          {
#line 512 "handle_options.m"
            libs__handle_options__ReuseConstraintArgNum_94 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__ReuseConstraintArg0_92, (MR_Integer) 0)));
#line 513 "handle_options.m"
            {
#line 513 "handle_options.m"
              libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_93, libs__handle_options__ReuseConstraintArgNum_94, &libs__handle_options__ReuseStrategyPrime_95);
            }
#line 512 "handle_options.m"
          }
#line 511 "handle_options.m"
      }
#line 517 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 516 "handle_options.m"
      {
#line 516 "handle_options.m"
        *libs__handle_options__ReuseStrategy_36 = libs__handle_options__ReuseStrategyPrime_95;
#line 516 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_249_249 = libs__handle_options__STATE_VARIABLE_Errors_243_243;
#line 516 "handle_options.m"
      }
#line 517 "handle_options.m"
    else
#line 518 "handle_options.m"
      {
#line 518 "handle_options.m"
        *libs__handle_options__ReuseStrategy_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "handle_options.m"
        {
#line 519 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", libs__handle_options__STATE_VARIABLE_Errors_243_243, &libs__handle_options__STATE_VARIABLE_Errors_249_249);
        }
#line 518 "handle_options.m"
      }
#line 525 "handle_options.m"
    {
#line 525 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 662)), &libs__handle_options__conv20_FeedbackFile0_96);
    }
#line 525 "handle_options.m"
    libs__handle_options__FeedbackFile0_96 = ((MR_Word) libs__handle_options__conv20_FeedbackFile0_96);
#line 527 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__FeedbackFile0_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_96, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 527 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
      {
#line 527 "handle_options.m"
        libs__handle_options__FeedbackFile_97 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_96, (MR_Integer) 1)));
#line 528 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_97, (MR_String) "") == 0);
#line 528 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 527 "handle_options.m"
      }
#line 548 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 535 "handle_options.m"
      {
#line 535 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_99;

#line 536 "handle_options.m"
        {
#line 536 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_5_p_0(libs__handle_options__FeedbackFile_97, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__FeedbackReadResult_99);
        }
#line 541 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_99)) == (MR_mktag((MR_Integer) 1))))
#line 542 "handle_options.m"
          {
#line 542 "handle_options.m"
            MR_Word libs__handle_options__Error_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_99, (MR_Integer) 0)));
#line 542 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_102;

#line 543 "handle_options.m"
            {
#line 543 "handle_options.m"
              mdbcomp__feedback__feedback_read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_97, libs__handle_options__Error_101, &libs__handle_options__ErrorMessage_102);
            }
#line 545 "handle_options.m"
            {
#line 545 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__ErrorMessage_102, libs__handle_options__STATE_VARIABLE_Errors_249_249, &libs__handle_options__STATE_VARIABLE_Errors_254_254);
            }
#line 546 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "handle_options.m"
          }
#line 541 "handle_options.m"
        else
#line 539 "handle_options.m"
          {
#line 539 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_99, (MR_Integer) 0)));

#line 540 "handle_options.m"
            {
#line 540 "handle_options.m"
              MR_Word base;
#line 540 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_37 = base;
#line 540 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_100));
#line 540 "handle_options.m"
            }
#line 539 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_254_254 = libs__handle_options__STATE_VARIABLE_Errors_249_249;
#line 539 "handle_options.m"
          }
#line 535 "handle_options.m"
      }
#line 548 "handle_options.m"
    else
#line 550 "handle_options.m"
      {
#line 550 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_254_254 = libs__handle_options__STATE_VARIABLE_Errors_249_249;
#line 550 "handle_options.m"
      }
#line 552 "handle_options.m"
    {
#line 552 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 644)), &libs__handle_options__conv21_HostEnvType0_103);
    }
#line 552 "handle_options.m"
    libs__handle_options__HostEnvType0_103 = ((MR_Word) libs__handle_options__conv21_HostEnvType0_103);
#line 554 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__HostEnvType0_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_103, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 554 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 554 "handle_options.m"
      {
#line 554 "handle_options.m"
        libs__handle_options__HostEnvTypeStr_104 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_103, (MR_Integer) 1)));
#line 555 "handle_options.m"
        {
#line 555 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_104, &libs__handle_options__HostEnvTypePrime_105);
        }
#line 554 "handle_options.m"
      }
#line 558 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 557 "handle_options.m"
      {
#line 557 "handle_options.m"
        *libs__handle_options__HostEnvType_38 = libs__handle_options__HostEnvTypePrime_105;
#line 557 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_257_257 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 557 "handle_options.m"
      }
#line 558 "handle_options.m"
    else
#line 559 "handle_options.m"
      {
#line 559 "handle_options.m"
        *libs__handle_options__HostEnvType_38 = (MR_Integer) 0;
#line 560 "handle_options.m"
        {
#line 560 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_254_254, &libs__handle_options__STATE_VARIABLE_Errors_257_257);
        }
#line 559 "handle_options.m"
      }
#line 565 "handle_options.m"
    {
#line 565 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 645)), &libs__handle_options__conv22_SystemEnvType0_106);
    }
#line 565 "handle_options.m"
    libs__handle_options__SystemEnvType0_106 = ((MR_Word) libs__handle_options__conv22_SystemEnvType0_106);
#line 567 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SystemEnvType0_106)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_106, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 567 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 567 "handle_options.m"
      {
#line 567 "handle_options.m"
        libs__handle_options__SystemEnvTypeStr_107 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_106, (MR_Integer) 1)));
#line 568 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_107, (MR_String) "") == 0);
#line 570 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 569 "handle_options.m"
          {
#line 569 "handle_options.m"
            libs__handle_options__SystemEnvTypePrime_108 = *libs__handle_options__HostEnvType_38;
#line 569 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 569 "handle_options.m"
          }
#line 570 "handle_options.m"
        else
#line 571 "handle_options.m"
          {
#line 571 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_107, &libs__handle_options__SystemEnvTypePrime_108);
          }
#line 567 "handle_options.m"
      }
#line 575 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 574 "handle_options.m"
      {
#line 574 "handle_options.m"
        *libs__handle_options__SystemEnvType_39 = libs__handle_options__SystemEnvTypePrime_108;
#line 574 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_262_262 = libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 574 "handle_options.m"
      }
#line 575 "handle_options.m"
    else
#line 576 "handle_options.m"
      {
#line 576 "handle_options.m"
        *libs__handle_options__SystemEnvType_39 = (MR_Integer) 0;
#line 577 "handle_options.m"
        {
#line 577 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--system-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_257_257, &libs__handle_options__STATE_VARIABLE_Errors_262_262);
        }
#line 576 "handle_options.m"
      }
#line 582 "handle_options.m"
    {
#line 582 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 646)), &libs__handle_options__conv23_TargetEnvType0_109);
    }
#line 582 "handle_options.m"
    libs__handle_options__TargetEnvType0_109 = ((MR_Word) libs__handle_options__conv23_TargetEnvType0_109);
#line 584 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TargetEnvType0_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 584 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 584 "handle_options.m"
      {
#line 584 "handle_options.m"
        libs__handle_options__TargetEnvTypeStr_110 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_109, (MR_Integer) 1)));
#line 585 "handle_options.m"
        {
#line 585 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_110, &libs__handle_options__TargetEnvTypePrime_111);
        }
#line 584 "handle_options.m"
      }
#line 588 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 587 "handle_options.m"
      {
#line 587 "handle_options.m"
        *libs__handle_options__TargetEnvType_40 = libs__handle_options__TargetEnvTypePrime_111;
#line 587 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_267_267 = libs__handle_options__STATE_VARIABLE_Errors_262_262;
#line 587 "handle_options.m"
      }
#line 588 "handle_options.m"
    else
#line 589 "handle_options.m"
      {
#line 589 "handle_options.m"
        *libs__handle_options__TargetEnvType_40 = (MR_Integer) 0;
#line 590 "handle_options.m"
        {
#line 590 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_262_262, &libs__handle_options__STATE_VARIABLE_Errors_267_267);
        }
#line 589 "handle_options.m"
      }
#line 597 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_38 == (MR_Integer) 0);
#line 597 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 598 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_35 == (MR_Integer) 0);
#line 604 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 600 "handle_options.m"
      {
#line 600 "handle_options.m"
        {
#line 600 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", libs__handle_options__STATE_VARIABLE_Errors_267_267, &libs__handle_options__STATE_VARIABLE_Errors_271_271);
        }
#line 600 "handle_options.m"
      }
#line 604 "handle_options.m"
    else
#line 604 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_271_271 = libs__handle_options__STATE_VARIABLE_Errors_267_267;
#line 608 "handle_options.m"
    {
#line 608 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_289_289, libs__handle_options__TypeCtorInfo_290_290, *libs__handle_options__STATE_VARIABLE_OptionTable_120, ((MR_Box) ((MR_Integer) 58)), &libs__handle_options__conv24_LimitErrorContextsOption_112);
    }
#line 608 "handle_options.m"
    libs__handle_options__LimitErrorContextsOption_112 = ((MR_Word) libs__handle_options__conv24_LimitErrorContextsOption_112);
#line 610 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__LimitErrorContextsOption_112)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__LimitErrorContextsOption_112, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 610 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 610 "handle_options.m"
      {
#line 610 "handle_options.m"
        libs__handle_options__LimitErrorContextsOptionStrs_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__LimitErrorContextsOption_112, (MR_Integer) 1)));
#line 613 "handle_options.m"
        {
#line 613 "handle_options.m"
          MR_Word libs__handle_options__BadLimitErrorContextsOptions_114;

#line 612 "handle_options.m"
          {
#line 612 "handle_options.m"
            libs__globals__convert_limit_error_contexts_3_p_0(libs__handle_options__LimitErrorContextsOptionStrs_113, &libs__handle_options__BadLimitErrorContextsOptions_114, libs__handle_options__LimitErrorContextsMap_41);
          }
#line 616 "handle_options.m"
          if ((libs__handle_options__BadLimitErrorContextsOptions_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_122 = libs__handle_options__STATE_VARIABLE_Errors_271_271;
#line 616 "handle_options.m"
          else
#line 616 "handle_options.m"
            {
#line 616 "handle_options.m"
              MR_Word libs__handle_options__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_114, (MR_Integer) 1)));
#line 616 "handle_options.m"
              MR_String libs__handle_options__V_294_294 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_114, (MR_Integer) 0)));

#line 616 "handle_options.m"
              if ((libs__handle_options__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "handle_options.m"
                {
#line 617 "handle_options.m"
                  MR_String libs__handle_options__V_282_282;

#line 619 "handle_options.m"
                  {
#line 619 "handle_options.m"
                    libs__handle_options__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) "invalid --limit-error-contexts option\n", libs__handle_options__V_294_294);
                  }
#line 618 "handle_options.m"
                  {
#line 618 "handle_options.m"
                    libs__handle_options__add_error_3_p_0(libs__handle_options__V_282_282, libs__handle_options__STATE_VARIABLE_Errors_271_271, libs__handle_options__STATE_VARIABLE_Errors_122);
#line 618 "handle_options.m"
                    return;
                  }
#line 617 "handle_options.m"
                }
#line 616 "handle_options.m"
              else
#line 623 "handle_options.m"
                {
#line 623 "handle_options.m"
                  MR_String libs__handle_options__V_276_276;
#line 623 "handle_options.m"
                  MR_String libs__handle_options__V_279_279;

#line 626 "handle_options.m"
                  {
#line 626 "handle_options.m"
                    libs__handle_options__V_279_279 = mercury__string__join_list_2_f_0((MR_String) "\n", libs__handle_options__BadLimitErrorContextsOptions_114);
                  }
#line 625 "handle_options.m"
                  {
#line 625 "handle_options.m"
                    libs__handle_options__V_276_276 = mercury__string__f_43_43_2_f_0((MR_String) "invalid --limit-error-contexts options\n  ", libs__handle_options__V_279_279);
                  }
#line 624 "handle_options.m"
                  {
#line 624 "handle_options.m"
                    libs__handle_options__add_error_3_p_0(libs__handle_options__V_276_276, libs__handle_options__STATE_VARIABLE_Errors_271_271, libs__handle_options__STATE_VARIABLE_Errors_122);
#line 624 "handle_options.m"
                    return;
                  }
#line 623 "handle_options.m"
                }
#line 616 "handle_options.m"
            }
#line 613 "handle_options.m"
        }
#line 610 "handle_options.m"
      }
#line 610 "handle_options.m"
    else
#line 630 "handle_options.m"
      {
#line 630 "handle_options.m"
        {
#line 630 "handle_options.m"
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__handle_options_scalar_common_2[1], libs__handle_options__LimitErrorContextsMap_41);
        }
#line 631 "handle_options.m"
        {
#line 631 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "unexpected --limit-error-contexts option.", libs__handle_options__STATE_VARIABLE_Errors_271_271, libs__handle_options__STATE_VARIABLE_Errors_122);
#line 631 "handle_options.m"
          return;
        }
#line 630 "handle_options.m"
      }
#line 252 "handle_options.m"
  }
#line 237 "handle_options.m"
}

#line 208 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 208 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 208 "handle_options.m"
  MR_Word * libs__handle_options__Errors_2,
#line 208 "handle_options.m"
  MR_Word * libs__handle_options__Globals_3)
#line 208 "handle_options.m"
{
#line 212 "handle_options.m"
  {
#line 212 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 212 "handle_options.m"
    if (((MR_tag((MR_Word) libs__handle_options__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 212 "handle_options.m"
      {
#line 212 "handle_options.m"
        MR_String libs__handle_options__ErrorMessage_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_49_49;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_50_50;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_51_51;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_52_52;

#line 213 "handle_options.m"
        {
#line 213 "handle_options.m"
          MR_Word base;
#line 213 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "handle_options.m"
          *libs__handle_options__Errors_2 = base;
#line 213 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_6));
#line 213 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "handle_options.m"
        }
#line 112 "handle_options.m"
        {
#line 112 "handle_options.m"
          libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_49_49, &libs__handle_options__V_50_50, &libs__handle_options__V_51_51, &libs__handle_options__V_52_52, libs__handle_options__Globals_3);
        }
#line 212 "handle_options.m"
      }
#line 212 "handle_options.m"
    else
#line 216 "handle_options.m"
      {
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_18;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__Target_19;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__GC_Method_20;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TagsMethod_21;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TermNorm_22;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__Term2Norm_23;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TraceLevel_24;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppress_25;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__SSTraceLevel_26;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__MaybeThreadSafe_27;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__C_CompilerType_28;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__CSharp_CompilerType_29;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__ReuseStrategy_30;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__MaybeFeedbackInfo_31;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__HostEnvType_32;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvType_33;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvType_34;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__LimitErrorContextsMap_35;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__CheckErrorsCord_36;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__ErrorsCord_37;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__V_40_40;

#line 222 "handle_options.m"
        {
#line 222 "handle_options.m"
          libs__handle_options__V_40_40 = mercury__cord__init_0_f_0(libs__handle_options__TypeCtorInfo_44_44);
        }
#line 217 "handle_options.m"
        {
#line 217 "handle_options.m"
          libs__handle_options__check_option_values_23_p_0(libs__handle_options__OptionTable0_14, &libs__handle_options__OptionTable_18, &libs__handle_options__Target_19, &libs__handle_options__GC_Method_20, &libs__handle_options__TagsMethod_21, &libs__handle_options__TermNorm_22, &libs__handle_options__Term2Norm_23, &libs__handle_options__TraceLevel_24, &libs__handle_options__TraceSuppress_25, &libs__handle_options__SSTraceLevel_26, &libs__handle_options__MaybeThreadSafe_27, &libs__handle_options__C_CompilerType_28, &libs__handle_options__CSharp_CompilerType_29, &libs__handle_options__ReuseStrategy_30, &libs__handle_options__MaybeFeedbackInfo_31, &libs__handle_options__HostEnvType_32, &libs__handle_options__SystemEnvType_33, &libs__handle_options__TargetEnvType_34, &libs__handle_options__LimitErrorContextsMap_35, libs__handle_options__V_40_40, &libs__handle_options__CheckErrorsCord_36);
        }
#line 223 "handle_options.m"
        {
#line 223 "handle_options.m"
          libs__handle_options__succeeded = mercury__cord__is_empty_1_p_0(libs__handle_options__TypeCtorInfo_44_44, libs__handle_options__CheckErrorsCord_36);
        }
#line 231 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 224 "handle_options.m"
          {
#line 224 "handle_options.m"
            libs__handle_options__convert_options_to_globals_23_p_0(libs__handle_options__OptionTable_18, libs__handle_options__Target_19, libs__handle_options__GC_Method_20, libs__handle_options__TagsMethod_21, libs__handle_options__TermNorm_22, libs__handle_options__Term2Norm_23, libs__handle_options__TraceLevel_24, libs__handle_options__TraceSuppress_25, libs__handle_options__SSTraceLevel_26, libs__handle_options__MaybeThreadSafe_27, libs__handle_options__C_CompilerType_28, libs__handle_options__CSharp_CompilerType_29, libs__handle_options__ReuseStrategy_30, libs__handle_options__MaybeFeedbackInfo_31, libs__handle_options__HostEnvType_32, libs__handle_options__SystemEnvType_33, libs__handle_options__TargetEnvType_34, libs__handle_options__LimitErrorContextsMap_35, libs__handle_options__CheckErrorsCord_36, &libs__handle_options__ErrorsCord_37, libs__handle_options__Globals_3);
          }
#line 231 "handle_options.m"
        else
#line 232 "handle_options.m"
          {
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_59_59;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_60_60;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_61_61;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_62_62;

#line 232 "handle_options.m"
            libs__handle_options__ErrorsCord_37 = libs__handle_options__CheckErrorsCord_36;
#line 112 "handle_options.m"
            {
#line 112 "handle_options.m"
              libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_59_59, &libs__handle_options__V_60_60, &libs__handle_options__V_61_61, &libs__handle_options__V_62_62, libs__handle_options__Globals_3);
            }
#line 232 "handle_options.m"
          }
#line 235 "handle_options.m"
        {
#line 235 "handle_options.m"
          *libs__handle_options__Errors_2 = mercury__cord__list_1_f_0(libs__handle_options__TypeCtorInfo_44_44, libs__handle_options__ErrorsCord_37);
        }
#line 216 "handle_options.m"
      }
#line 212 "handle_options.m"
  }
#line 208 "handle_options.m"
}

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 189 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 189 "handle_options.m"
      }
#line 189 "handle_options.m"
    return libs__handle_options__succeeded;
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 189 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__process_given_options_6_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 189 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1));
#line 189 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2));
#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr);
#line 189 "handle_options.m"
      return;
    }
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 189 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s libs__handle_options__env;

#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont = libs__handle_options__cont;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__process_given_options_6_p_0_3, &libs__handle_options__env);
      }
#line 189 "handle_options.m"
    }
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 188 "handle_options.m"
{
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 188 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 188 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 188 "handle_options.m"
    {
#line 188 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 188 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 188 "handle_options.m"
      {
#line 188 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 188 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 188 "handle_options.m"
      }
#line 188 "handle_options.m"
    return libs__handle_options__succeeded;
#line 188 "handle_options.m"
  }
#line 188 "handle_options.m"
}

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 188 "handle_options.m"
{
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 188 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 188 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 188 "handle_options.m"
    {
#line 188 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 188 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 188 "handle_options.m"
      {
#line 188 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 188 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 188 "handle_options.m"
      }
#line 188 "handle_options.m"
    return libs__handle_options__succeeded;
#line 188 "handle_options.m"
  }
#line 188 "handle_options.m"
}

#line 183 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 183 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 183 "handle_options.m"
  MR_Word * libs__handle_options__Result_10)
#line 183 "handle_options.m"
{
#line 187 "handle_options.m"
  {
#line 187 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[2]), libs__handle_options__Args0_7, libs__handle_options__OptionArgs_8, libs__handle_options__Args_9, libs__handle_options__Result_10);
#line 190 "handle_options.m"
      return;
    }
#line 187 "handle_options.m"
  }
#line 183 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2919 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 2919 "handle_options.m"
      return;
    }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2919 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2919 "handle_options.m"
      {
#line 2919 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 2919 "handle_options.m"
    }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 80 "handle_options.m"
void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0(
#line 80 "handle_options.m"
  MR_Word libs__handle_options__Globals_3,
#line 80 "handle_options.m"
  MR_String * libs__handle_options__Grade_4)
#line 80 "handle_options.m"
{
#line 2875 "handle_options.m"
  {
#line 2875 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2875 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 2875 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 2875 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 2875 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 2886 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 2886 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 2881 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 2881 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 2881 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 2891 "handle_options.m"
    {
#line 2891 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 2919 "handle_options.m"
    }
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 2896 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2895 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 2896 "handle_options.m"
    else
#line 2898 "handle_options.m"
      {
#line 2898 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 2881 "handle_options.m"
    {
#line 2881 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 2881 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2881 "handle_options.m"
      {
#line 2882 "handle_options.m"
        {
#line 2882 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 2883 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 2883 "handle_options.m"
        {
#line 2883 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 2881 "handle_options.m"
      }
#line 2886 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2885 "handle_options.m"
      {
#line 2885 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 2886 "handle_options.m"
    else
#line 2887 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 2875 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2847 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2847 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2847 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2847 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2847 "handle_options.m"
{
#line 2847 "handle_options.m"
  {
#line 2847 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2847 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2847 "handle_options.m"
    {
#line 2847 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2847__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2847 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2847 "handle_options.m"
      {
#line 2847 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2847 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2847 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2847 "handle_options.m"
      }
#line 2847 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2847 "handle_options.m"
  }
#line 2847 "handle_options.m"
}

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3201 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3201 "handle_options.m"
{
#line 3201 "handle_options.m"
  {
#line 3201 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3201 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3201__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3201 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3201 "handle_options.m"
  }
#line 3201 "handle_options.m"
}

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3201 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3201 "handle_options.m"
{
#line 3201 "handle_options.m"
  {
#line 3201 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3201 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3201 "handle_options.m"
      return;
    }
#line 3201 "handle_options.m"
  }
#line 3201 "handle_options.m"
}

#line 3201 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3201 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3201 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3201 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3201 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3201 "handle_options.m"
{
#line 3201 "handle_options.m"
  {
#line 3201 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3201 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3201 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3201 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3201 "handle_options.m"
      {
#line 3201 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3201 "handle_options.m"
    }
#line 3201 "handle_options.m"
  }
#line 3201 "handle_options.m"
}

#line 75 "handle_options.m"
MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0(
#line 75 "handle_options.m"
  MR_String libs__handle_options__GradeString_4,
#line 75 "handle_options.m"
  MR_Word libs__handle_options__Options0_5,
#line 75 "handle_options.m"
  MR_Word * libs__handle_options__Options_6)
#line 75 "handle_options.m"
{
#line 2843 "handle_options.m"
  {
#line 2843 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2843 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3201 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2847 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2847 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2847 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3201 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3243 "handle_options.m"
    {
#line 3243 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3244 "handle_options.m"
    {
#line 3244 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2843 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2843 "handle_options.m"
      {
#line 17480 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2846 "handle_options.m"
        {
#line 2846 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2847 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 17489 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17491 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 17493 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2847 "handle_options.m"
        {
#line 2847 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2847 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2847 "handle_options.m"
          {
#line 2847 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2847 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2847 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2847 "handle_options.m"
          }
#line 2843 "handle_options.m"
      }
#line 2843 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2843 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2919 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2919 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 2919 "handle_options.m"
      return;
    }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 2919 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2919 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2919 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2919 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2919 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2919 "handle_options.m"
{
#line 2919 "handle_options.m"
  {
#line 2919 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2919 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2919 "handle_options.m"
      {
#line 2919 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2919__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 2919 "handle_options.m"
    }
#line 2919 "handle_options.m"
  }
#line 2919 "handle_options.m"
}

#line 71 "handle_options.m"
void MR_CALL 
libs__handle_options__compute_grade_2_p_0(
#line 71 "handle_options.m"
  MR_Word libs__handle_options__Globals_3,
#line 71 "handle_options.m"
  MR_String * libs__handle_options__Grade_4)
#line 71 "handle_options.m"
{
#line 2890 "handle_options.m"
  {
#line 2890 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2890 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 2890 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 2890 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 2891 "handle_options.m"
    {
#line 2891 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2919 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 2919 "handle_options.m"
    }
#line 2919 "handle_options.m"
    {
#line 2919 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 2896 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2895 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 2896 "handle_options.m"
    else
#line 2898 "handle_options.m"
      {
#line 2898 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 2898 "handle_options.m"
        return;
      }
#line 2890 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2645 "handle_options.m"
  {
#line 2645 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2645 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2645 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2645 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2645 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2645 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2645 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2649 "handle_options.m"
    {
#line 2649 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2651 "handle_options.m"
    {
#line 2651 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[191])));
#line 2651 "handle_options.m"
    }
#line 2651 "handle_options.m"
    {
#line 2651 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2651 "handle_options.m"
    }
#line 2651 "handle_options.m"
    {
#line 2651 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2651 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2651 "handle_options.m"
    }
#line 2650 "handle_options.m"
    {
#line 2650 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2650 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2650 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2650 "handle_options.m"
    }
#line 2650 "handle_options.m"
    {
#line 2650 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2652 "handle_options.m"
    {
#line 2652 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
#line 2654 "handle_options.m"
    {
#line 2654 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
    }
#line 2656 "handle_options.m"
    {
#line 2656 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2657 "handle_options.m"
    {
#line 2657 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2658 "handle_options.m"
    {
#line 2658 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2660 "handle_options.m"
    {
#line 2660 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2662 "handle_options.m"
    {
#line 2662 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2664 "handle_options.m"
    {
#line 2664 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2665 "handle_options.m"
    {
#line 2665 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2665 "handle_options.m"
      return;
    }
#line 2645 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2629 "handle_options.m"
  {
#line 2629 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2629 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17798 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2626 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 17814 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17833 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2641 "handle_options.m"
#line 2641 "handle_options.m"
    switch (libs__handle_options__AlreadyPrinted_4) {
#line 2641 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2641 "handle_options.m"
      case (MR_Integer) 0:
#line 2634 "handle_options.m"
        {
#line 2635 "handle_options.m"
          {
#line 2635 "handle_options.m"
            libs__handle_options__display_compiler_version_2_p_0();
          }
#line 2636 "handle_options.m"
          {
#line 2636 "handle_options.m"
            mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[8]));
          }
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17870 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2626 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 17887 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2626 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2626 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17905 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2626 "handle_options.m"
}
#line 2634 "handle_options.m"
        }
#line 2641 "handle_options.m"
        break;
#line 2641 "handle_options.m"
      case (MR_Integer) 1:
#line 2642 "handle_options.m"
        {
#line 2642 "handle_options.m"
        }
#line 2641 "handle_options.m"
        break;
#line 2641 "handle_options.m"
    }
#line 2629 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2614 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2614 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2614 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2614 "handle_options.m"
{
#line 2614 "handle_options.m"
  {
#line 2614 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2614 "handle_options.m"
    {
#line 2614 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2614 "handle_options.m"
      return;
    }
#line 2614 "handle_options.m"
  }
#line 2614 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2612 "handle_options.m"
  {
#line 2612 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2612 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2612 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2614 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2613 "handle_options.m"
    {
#line 2613 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2614 "handle_options.m"
    {
#line 2614 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2614 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2614 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2614 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2614 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2614 "handle_options.m"
    }
#line 2614 "handle_options.m"
    {
#line 2614 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2615 "handle_options.m"
    {
#line 2615 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2616 "handle_options.m"
    {
#line 2616 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2616 "handle_options.m"
      return;
    }
#line 2612 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2618 "handle_options.m"
  {
#line 2618 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2618 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2618 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2618 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2618 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2618 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2618 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2619 "handle_options.m"
    {
#line 2619 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[6])));
#line 2621 "handle_options.m"
    }
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2621 "handle_options.m"
    }
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2621 "handle_options.m"
    }
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2621 "handle_options.m"
    }
#line 2620 "handle_options.m"
    {
#line 2620 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
#line 2620 "handle_options.m"
      return;
    }
#line 2618 "handle_options.m"
  }
#line 54 "handle_options.m"
}

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 189 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 189 "handle_options.m"
      }
#line 189 "handle_options.m"
    return libs__handle_options__succeeded;
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 189 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 189 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
#line 189 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
#line 189 "handle_options.m"
      return;
    }
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 189 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 189 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 189 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s libs__handle_options__env;

#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = libs__handle_options__cont;
#line 189 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &libs__handle_options__env);
      }
#line 189 "handle_options.m"
    }
#line 189 "handle_options.m"
  }
#line 189 "handle_options.m"
}

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 188 "handle_options.m"
{
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 188 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 188 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 188 "handle_options.m"
    {
#line 188 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 188 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 188 "handle_options.m"
      {
#line 188 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 188 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 188 "handle_options.m"
      }
#line 188 "handle_options.m"
    return libs__handle_options__succeeded;
#line 188 "handle_options.m"
  }
#line 188 "handle_options.m"
}

#line 188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 188 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 188 "handle_options.m"
{
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 188 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 188 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 188 "handle_options.m"
    {
#line 188 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 188 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 188 "handle_options.m"
      {
#line 188 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 188 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 188 "handle_options.m"
      }
#line 188 "handle_options.m"
    return libs__handle_options__succeeded;
#line 188 "handle_options.m"
  }
#line 188 "handle_options.m"
}

#line 49 "handle_options.m"
void MR_CALL 
libs__handle_options__separate_option_args_5_p_0(
#line 49 "handle_options.m"
  MR_Word libs__handle_options__Args0_6,
#line 49 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_7,
#line 49 "handle_options.m"
  MR_Word * libs__handle_options__Args_8)
#line 49 "handle_options.m"
{
#line 187 "handle_options.m"
  {
#line 187 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__Args0_6, libs__handle_options__OptionArgs_7, libs__handle_options__Args_8, &libs__handle_options__V_10_10);
    }
#line 187 "handle_options.m"
  }
#line 49 "handle_options.m"
}

#line 41 "handle_options.m"
void MR_CALL 
libs__handle_options__handle_given_options_8_p_0(
#line 41 "handle_options.m"
  MR_Word libs__handle_options__Args0_9,
#line 41 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_10,
#line 41 "handle_options.m"
  MR_Word * libs__handle_options__Args_11,
#line 41 "handle_options.m"
  MR_Word * libs__handle_options__Link_12,
#line 41 "handle_options.m"
  MR_Word * libs__handle_options__Errors_13,
#line 41 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_35)
#line 41 "handle_options.m"
{
#line 114 "handle_options.m"
  {
#line 114 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 114 "handle_options.m"
    MR_Word libs__handle_options__Result_16;
#line 114 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_39_39;

#line 117 "handle_options.m"
    {
#line 117 "handle_options.m"
      libs__handle_options__process_given_options_6_p_0(libs__handle_options__Args0_9, libs__handle_options__OptionArgs_10, libs__handle_options__Args_11, &libs__handle_options__Result_16);
    }
#line 120 "handle_options.m"
    {
#line 120 "handle_options.m"
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_16, libs__handle_options__Errors_13, &libs__handle_options__STATE_VARIABLE_Globals_39_39);
    }
#line 126 "handle_options.m"
    if ((*libs__handle_options__Errors_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 127 "handle_options.m"
      {
#line 127 "handle_options.m"
        MR_Word libs__handle_options__GenerateDependencies_19;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__GenerateDependencyFile_20;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeInterface_21;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakePrivateInterface_22;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeShortInterface_23;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeOptimizationInt_24;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeTransOptInt_25;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeAnalysisRegistry_26;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__MakeXmlDocumentation_27;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__ConvertToMercury_28;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__TypecheckOnly_29;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__ErrorcheckOnly_30;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__TargetCodeOnly_31;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__CompileOnly_32;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__NotLink_33;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__Smart_34;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_55_55;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_56_56;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_57_57;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_58_58;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_59_59;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_60_60;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_61_61;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_62_62;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_63_63;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_64_64;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_65_65;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_66_66;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_67_67;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_68_68;

#line 128 "handle_options.m"
        {
#line 128 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 92, &libs__handle_options__GenerateDependencies_19);
        }
#line 130 "handle_options.m"
        {
#line 130 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 91, &libs__handle_options__GenerateDependencyFile_20);
        }
#line 132 "handle_options.m"
        {
#line 132 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 84, &libs__handle_options__MakeInterface_21);
        }
#line 133 "handle_options.m"
        {
#line 133 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 85, &libs__handle_options__MakePrivateInterface_22);
        }
#line 135 "handle_options.m"
        {
#line 135 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 83, &libs__handle_options__MakeShortInterface_23);
        }
#line 137 "handle_options.m"
        {
#line 137 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 86, &libs__handle_options__MakeOptimizationInt_24);
        }
#line 139 "handle_options.m"
        {
#line 139 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 87, &libs__handle_options__MakeTransOptInt_25);
        }
#line 141 "handle_options.m"
        {
#line 141 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 88, &libs__handle_options__MakeAnalysisRegistry_26);
        }
#line 143 "handle_options.m"
        {
#line 143 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 89, &libs__handle_options__MakeXmlDocumentation_27);
        }
#line 145 "handle_options.m"
        {
#line 145 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 95, &libs__handle_options__ConvertToMercury_28);
        }
#line 147 "handle_options.m"
        {
#line 147 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 96, &libs__handle_options__TypecheckOnly_29);
        }
#line 148 "handle_options.m"
        {
#line 148 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 97, &libs__handle_options__ErrorcheckOnly_30);
        }
#line 149 "handle_options.m"
        {
#line 149 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 98, &libs__handle_options__TargetCodeOnly_31);
        }
#line 151 "handle_options.m"
        {
#line 151 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 99, &libs__handle_options__CompileOnly_32);
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 0) = ((MR_Box) (libs__handle_options__CompileOnly_32));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 0) = ((MR_Box) (libs__handle_options__TargetCodeOnly_31));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 1) = ((MR_Box) (libs__handle_options__V_68_68));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 0) = ((MR_Box) (libs__handle_options__ErrorcheckOnly_30));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 1) = ((MR_Box) (libs__handle_options__V_67_67));
#line 156 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 0) = ((MR_Box) (libs__handle_options__TypecheckOnly_29));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 1) = ((MR_Box) (libs__handle_options__V_66_66));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 0) = ((MR_Box) (libs__handle_options__ConvertToMercury_28));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 1) = ((MR_Box) (libs__handle_options__V_65_65));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 0) = ((MR_Box) (libs__handle_options__MakeXmlDocumentation_27));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 1) = ((MR_Box) (libs__handle_options__V_64_64));
#line 155 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 0) = ((MR_Box) (libs__handle_options__MakeAnalysisRegistry_26));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 1) = ((MR_Box) (libs__handle_options__V_63_63));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 0) = ((MR_Box) (libs__handle_options__MakeTransOptInt_25));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 1) = ((MR_Box) (libs__handle_options__V_62_62));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__MakeOptimizationInt_24));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (libs__handle_options__V_61_61));
#line 154 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 0) = ((MR_Box) (libs__handle_options__MakeShortInterface_23));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 1) = ((MR_Box) (libs__handle_options__V_60_60));
#line 153 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 0) = ((MR_Box) (libs__handle_options__MakePrivateInterface_22));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 1) = ((MR_Box) (libs__handle_options__V_59_59));
#line 153 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 0) = ((MR_Box) (libs__handle_options__MakeInterface_21));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 1) = ((MR_Box) (libs__handle_options__V_58_58));
#line 153 "handle_options.m"
        }
#line 152 "handle_options.m"
        {
#line 152 "handle_options.m"
          libs__handle_options__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_56_56, 0) = ((MR_Box) (libs__handle_options__GenerateDependencyFile_20));
#line 152 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_56_56, 1) = ((MR_Box) (libs__handle_options__V_57_57));
#line 152 "handle_options.m"
        }
#line 152 "handle_options.m"
        {
#line 152 "handle_options.m"
          libs__handle_options__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_55_55, 0) = ((MR_Box) (libs__handle_options__GenerateDependencies_19));
#line 152 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_55_55, 1) = ((MR_Box) (libs__handle_options__V_56_56));
#line 152 "handle_options.m"
        }
#line 152 "handle_options.m"
        {
#line 152 "handle_options.m"
          mercury__bool__or_list_2_p_0(libs__handle_options__V_55_55, &libs__handle_options__NotLink_33);
        }
#line 158 "handle_options.m"
        {
#line 158 "handle_options.m"
          mercury__bool__not_2_p_0(libs__handle_options__NotLink_33, libs__handle_options__Link_12);
        }
#line 159 "handle_options.m"
        {
#line 159 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_39_39, (MR_Integer) 115, &libs__handle_options__Smart_34);
        }
#line 161 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Smart_34 == (MR_Integer) 1);
#line 161 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 162 "handle_options.m"
          libs__handle_options__succeeded = (*libs__handle_options__Link_12 == (MR_Integer) 1);
#line 167 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 166 "handle_options.m"
          {
#line 166 "handle_options.m"
            {
#line 166 "handle_options.m"
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_39_39, libs__handle_options__STATE_VARIABLE_Globals_35);
#line 166 "handle_options.m"
              return;
            }
#line 166 "handle_options.m"
          }
#line 167 "handle_options.m"
        else
#line 168 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Globals_35 = libs__handle_options__STATE_VARIABLE_Globals_39_39;
#line 127 "handle_options.m"
      }
#line 126 "handle_options.m"
    else
#line 122 "handle_options.m"
      {
#line 123 "handle_options.m"
        *libs__handle_options__Link_12 = (MR_Integer) 0;
#line 122 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_35 = libs__handle_options__STATE_VARIABLE_Globals_39_39;
#line 122 "handle_options.m"
      }
#line 114 "handle_options.m"
  }
#line 41 "handle_options.m"
}

#line 34 "handle_options.m"
void MR_CALL 
libs__handle_options__generate_default_globals_3_p_0(
#line 34 "handle_options.m"
  MR_Word * libs__handle_options__DefaultGlobals_4)
#line 34 "handle_options.m"
{
#line 111 "handle_options.m"
  {
#line 111 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 112 "handle_options.m"
    MR_Word libs__handle_options__V_6_6;
#line 112 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 112 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 112 "handle_options.m"
    MR_Word libs__handle_options__V_9_9;

#line 112 "handle_options.m"
    {
#line 112 "handle_options.m"
      libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_6_6, &libs__handle_options__V_7_7, &libs__handle_options__V_8_8, &libs__handle_options__V_9_9, libs__handle_options__DefaultGlobals_4);
    }
#line 111 "handle_options.m"
  }
#line 34 "handle_options.m"
}

void mercury__libs__handle_options__init(void)
{
}

void mercury__libs__handle_options__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0);
}

void mercury__libs__handle_options__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__handle_options__required_init(void)
{
	libs__handle_options__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.handle_options. */
