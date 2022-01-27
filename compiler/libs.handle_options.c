/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 3051 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s {
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Options_3;
#line 3051 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__HeadVar__2_16;
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont;
#line 3051 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont_env_ptr;
#line 3051 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded;
#line 3051 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Name_6;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Comp_7;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__CompOpts_8;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__MaybeTargets_9;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__IncludeInGradeString_10;
#line 3058 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_0;
#line 3058 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Opt_11;
#line 3058 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Value_12;
#line 3058 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_17_17;
#line 3059 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv0_V_17_17;
#line 3072 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_1;
#line 3072 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 3072 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 3072 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Target_14;
#line 3072 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_18_18;
#line 3072 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_27_27;
#line 3073 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv2_Target_14;
#line 3051 "handle_options.m"
};

#line 2893 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2896 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2896 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2896 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2896 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2897 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2893 "handle_options.m"
};

#line 2884 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2887 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2887 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2887 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2887 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2888 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2884 "handle_options.m"
};

#line 191 "handle_options.m"
struct libs__handle_options__process_given_options_6_p_0_4_env_0_s {
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1;
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2;
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__process_given_options_6_p_0_4_env_0__cont;
#line 191 "handle_options.m"
  void * libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr;
#line 191 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1;
#line 191 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2;
#line 191 "handle_options.m"
};

#line 3051 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 3051 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 3051 "handle_options.m"
};

#line 3349 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3349 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3349 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3349 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3349 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3349 "handle_options.m"
};

#line 3051 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 3051 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 3051 "handle_options.m"
};

#line 191 "handle_options.m"
struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
#line 191 "handle_options.m"
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
#line 191 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
#line 191 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
#line 191 "handle_options.m"
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

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3349__1_3_p_0(
#line 3349 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3349 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3349 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_2(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3059 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_4(
#line 3059 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_3(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_5(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_6(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3073 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_8(
#line 3073 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_7(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_9(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0(
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 3051 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__3002__1_3_p_0(
#line 3002 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 3002 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 3002 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2911 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2911__1_2_p_0(
#line 2911 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2911 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2243 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_2_f_0(
#line 2243 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2243 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1535);

#line 2241 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2241__1_2_f_0(
#line 2241 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2241 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1529);

#line 2250 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2250__1_1_f_0(
#line 2250 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1524);

#line 2249 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2249__1_1_f_0(
#line 2249 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1519);

#line 2219 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(
#line 2219 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2219 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1506);

#line 2215 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2215__1_2_f_0(
#line 2215 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2215 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1500);

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__2_2_p_0(
#line 2197 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1493,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1647);

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__1_2_p_0(
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1494,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1649);

#line 2179 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_3_f_0(
#line 2179 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2179 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2179 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1481);

#line 2143 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
#line 2143 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2143 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1462);

#line 2133 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2133__1_2_f_0(
#line 2133 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2133 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1452);

#line 2120 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(
#line 2120 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2120 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1435);

#line 2105 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(
#line 2105 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2105 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1420);

#line 530 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__530__1_1_p_0(
#line 530 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_267);

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_2(
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3002 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_1(
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3002 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2979 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0(
#line 2979 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2979 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2979 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2979 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2979 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2951 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2951 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2951 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3425 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3425 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3425 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3410 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3410 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3410 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3399 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3399 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3399 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3394 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3394 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3394 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3355 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3355 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3355 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3355 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 3095 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 3095 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 3095 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3095 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 3093 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 3093 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 3033 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 3033 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3033 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2897 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2897 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2893 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2888 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2888 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2884 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2911 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2911 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2911 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2911 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2866 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2866 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2866 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2866 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2843 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2843 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2843 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2843 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2843 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2843 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2843 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2831 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2831 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2831 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2831 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2829 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2829 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2829 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2829 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2821 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2821 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2821 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2819 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2819 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2819 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2758 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2758 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2574 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_grade_component_compatibility_5_p_0(
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__Globals_6,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__Target_7,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_8,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_22,
#line 2574 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_23);

#line 2533 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2533 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2533 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2533 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2518 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2518 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2518 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2498 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2498 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2498 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2480 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2480 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2464 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2464 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2384 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2384 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2384 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2243 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2241 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2241 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2241 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2250 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2250 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2250 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2249 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2249 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2249 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2219 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2215 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2215 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2215 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2179 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2179 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2179 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2143 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2143 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2143 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2133 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2133 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2133 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2120 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2105 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 661 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 661 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__Target_26,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_27,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_28,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_29,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_30,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_31,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_32,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_33,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_34,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_35,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_36,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_37,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_38,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_189,
#line 661 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_190,
#line 661 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_191);

#line 654 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 654 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_6,
#line 654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_7);

#line 530 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_24_p_0_1(
#line 530 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 530 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 239 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_24_p_0(
#line 239 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_133,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_134,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__Target_26,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_27,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_28,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_29,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_30,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_31,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_32,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_33,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_34,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_35,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_36,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_37,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_38,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_39,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_40,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_41,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_42,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_43,
#line 239 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_135,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_136);

#line 210 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 210 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 210 "handle_options.m"
  MR_Word * libs__handle_options__Errors_2,
#line 210 "handle_options.m"
  MR_Word * libs__handle_options__Globals_3);

#line 191 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 191 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 191 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 185 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 185 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__Result_10);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 3051 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2979 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2979 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2979 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3349 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3349 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3349 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3349 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3349 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 3051 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2746 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2746 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 191 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 191 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 191 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[22][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[215][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[15][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[8][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[3][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[7][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9];

static /* final */ const MR_Box libs__handle_options_scalar_common_10[1][10];


#line 3100 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 3100 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[50];

#line 3100 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 3100 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_1;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_2;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_3;
#line 3100 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_4;
#line 3100 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[50];

#line 3357 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_13_0_s {
#line 3357 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_13_0__vct_13_f_0;
#line 3357 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_13_0_s libs__handle_options_vector_common_13[30];

#line 3428 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_14_0_s {
#line 3428 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_14_0__vct_14_f_0;
#line 3428 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_14_0_s libs__handle_options_vector_common_14[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[22][3] = {
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
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__check_option_values_24_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[6])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[6])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__filter_grade_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[215][2] = {
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
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "accurate"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 256)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 255)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 26 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 28 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[22])))
  },
  /* row 33 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 256)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 255)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 44 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 187)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 52 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 55 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[54])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 222)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[55])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 59 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[57])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 222)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 61 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[55])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 221)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 63 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[62])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 65 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "erlang"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 72 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[71])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 74 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[73])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[26])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm"))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[77])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm_debug"))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[80])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "hgc"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[83])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[36])))
  },
  /* row 86 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[88])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 91 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[36])))
  },
  /* row 92 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[20])))
  },
  /* row 97 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96])))
  },
  /* row 98 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[18])))
  },
  /* row 101 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "il"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 488)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[110])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 302)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 196)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[114])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 195)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Integer) 193)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[117])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 194)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[122])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[62])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[32])))
  },
  /* row 129 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[128])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[130])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 133 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[132])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 135 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[134])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Integer) 195)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 137 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[136])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137])))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Integer) 194)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 140 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 142 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Integer) 196)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[143])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[136])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Integer) 193)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 147 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[146])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[146])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[149])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Integer) 233)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[151])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Integer) 232)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 154 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[153])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152])))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[155])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[154])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Integer) 232)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[157])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152])))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[155])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[158])))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Integer) 233)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[160])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 162 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[157])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[155])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[153])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161])))
  },
  /* row 165 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[155])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[24])))
  },
  /* row 167 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[166])))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_Integer) 244)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[169])))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Integer) 234)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 173 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[172])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 175 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[174])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 177 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[176])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[175])))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 179 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[178])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 181 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[180])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 183 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[182])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[181])))
  },
  /* row 184 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 185 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[184])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 186 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[182])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[185])))
  },
  /* row 187 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 188 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[187])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 190 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[189])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[188])))
  },
  /* row 191 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 192 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[191])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 193 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 194 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[193])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[192])))
  },
  /* row 195 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[205])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 253)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 187)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Integer) 234)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Integer) 230)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Integer) 302)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[15][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[46])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[70])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[106])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[108])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 14 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_6[7][4] = {
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
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[0])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "included"))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[0])),
    ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "excluded"))
  },
  /* row 6 */
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


static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[50] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[28]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[53]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[63]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[68]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[74]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[84]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[129]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[133]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[135]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[142]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[150]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[156]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[171]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[177]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[179]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[183]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 48 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[190]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 49 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[194]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[50] = {
  /* row 0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[129]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "asm_jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[34]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_String) "asm_fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[28]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "hl",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "hl_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "hlc_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "il",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "ilc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "csharp",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[44]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_String) "erlang",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[68]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "par",
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[179]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "gc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "gcd",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_String) "hgc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[84]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[16]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[150]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[142]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[194]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[190]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[183]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 32 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[59]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[63]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[135]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[171]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "picreg",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[133]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[53]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "debug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[173]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "exts",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[74]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "stseg",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[177]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[156]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 48 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[165]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 49 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__handle_options__vector_common_type_13_0_s libs__handle_options_vector_common_13[30] = {
  /* row 0 */   {     (MR_Word) &libs__handle_options_scalar_common_2[43] },
  /* row 1 */   {     (MR_Word) &libs__handle_options_scalar_common_2[41] },
  /* row 2 */   {     (MR_Word) &libs__handle_options_scalar_common_2[31] },
  /* row 3 */   {     (MR_Word) &libs__handle_options_scalar_common_2[21] },
  /* row 4 */   {     (MR_Word) &libs__handle_options_scalar_common_2[17] },
  /* row 5 */   {     (MR_Word) &libs__handle_options_scalar_common_2[19] },
  /* row 6 */   {     (MR_Word) &libs__handle_options_scalar_common_2[203] },
  /* row 7 */   {     (MR_Word) &libs__handle_options_scalar_common_2[204] },
  /* row 8 */   {     (MR_Word) &libs__handle_options_scalar_common_2[206] },
  /* row 9 */   {     (MR_Word) &libs__handle_options_scalar_common_2[114] },
  /* row 10 */   {     (MR_Word) &libs__handle_options_scalar_common_2[120] },
  /* row 11 */   {     (MR_Word) &libs__handle_options_scalar_common_2[146] },
  /* row 12 */   {     (MR_Word) &libs__handle_options_scalar_common_2[136] },
  /* row 13 */   {     (MR_Word) &libs__handle_options_scalar_common_2[207] },
  /* row 14 */   {     (MR_Word) &libs__handle_options_scalar_common_2[180] },
  /* row 15 */   {     (MR_Word) &libs__handle_options_scalar_common_2[62] },
  /* row 16 */   {     (MR_Word) &libs__handle_options_scalar_common_2[56] },
  /* row 17 */   {     (MR_Word) &libs__handle_options_scalar_common_2[122] },
  /* row 18 */   {     (MR_Word) &libs__handle_options_scalar_common_2[208] },
  /* row 19 */   {     (MR_Word) &libs__handle_options_scalar_common_2[209] },
  /* row 20 */   {     (MR_Word) &libs__handle_options_scalar_common_2[210] },
  /* row 21 */   {     (MR_Word) &libs__handle_options_scalar_common_2[211] },
  /* row 22 */   {     (MR_Word) &libs__handle_options_scalar_common_2[47] },
  /* row 23 */   {     (MR_Word) &libs__handle_options_scalar_common_2[212] },
  /* row 24 */   {     (MR_Word) &libs__handle_options_scalar_common_2[176] },
  /* row 25 */   {     (MR_Word) &libs__handle_options_scalar_common_2[71] },
  /* row 26 */   {     (MR_Word) &libs__handle_options_scalar_common_2[213] },
  /* row 27 */   {     (MR_Word) &libs__handle_options_scalar_common_2[153] },
  /* row 28 */   {     (MR_Word) &libs__handle_options_scalar_common_2[151] },
  /* row 29 */   {     (MR_Word) &libs__handle_options_scalar_common_2[214] },
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


#include "libs.handle_options.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#line 2758 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2758 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3932 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3941 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3949 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3958 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3967 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3975 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3984 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3994 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4002 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4010 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4018 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 4028 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 4034 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 4040 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 4046 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 4052 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 4058 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 4064 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 4070 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 4076 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 4082 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 4088 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 4094 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 4100 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 4106 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 4112 "libs.handle_options.c"
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

#line 4130 "libs.handle_options.c"
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

#line 4148 "libs.handle_options.c"
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

#line 4166 "libs.handle_options.c"
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

#line 4183 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 4186 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 4188 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 4190 "libs.handle_options.c"
{
#line 4192 "libs.handle_options.c"
  {
#line 4194 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 4197 "libs.handle_options.c"
    {
#line 4199 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 4202 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 4204 "libs.handle_options.c"
  }
#line 4206 "libs.handle_options.c"
}

#line 4209 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 4212 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 4214 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 4216 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 4218 "libs.handle_options.c"
{
#line 4220 "libs.handle_options.c"
  {
#line 4222 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 4225 "libs.handle_options.c"
    {
#line 4227 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 4230 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 4232 "libs.handle_options.c"
  }
#line 4234 "libs.handle_options.c"
}

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3349__1_3_p_0(
#line 3349 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3349 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3349 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3349 "handle_options.m"
{
#line 3349 "handle_options.m"
  {
#line 3349 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3349 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3349 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3352 "handle_options.m"
    {
#line 3352 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3352 "handle_options.m"
      return;
    }
#line 3349 "handle_options.m"
  }
#line 3349 "handle_options.m"
}

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_2(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3058 "handle_options.m"
{
#line 3058 "handle_options.m"
  {
#line 3058 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3058 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_0, 1);
#line 3058 "handle_options.m"
  }
#line 3058 "handle_options.m"
}

#line 3059 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_4(
#line 3059 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3059 "handle_options.m"
{
#line 3059 "handle_options.m"
  {
#line 3059 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3059 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv0_V_17_17);
#line 3059 "handle_options.m"
    {
#line 3059 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_3(libs__handle_options__env_ptr);
#line 3059 "handle_options.m"
      return;
    }
#line 3059 "handle_options.m"
  }
#line 3059 "handle_options.m"
}

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_3(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3058 "handle_options.m"
{
#line 3058 "handle_options.m"
  {
#line 3058 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3058 "handle_options.m"
    {
#line 3061 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 3061 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 3059 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 3059 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 3061 "handle_options.m"
      {
#line 3061 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 3061 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3061 "handle_options.m"
        {
#line 3061 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 3061 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 3061 "handle_options.m"
        }
#line 3061 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3061 "handle_options.m"
        {
#line 3061 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 3060 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded);
#line 3060 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3060 "handle_options.m"
        {
#line 3060 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_2(libs__handle_options__env_ptr);
#line 3060 "handle_options.m"
          return;
        }
#line 3058 "handle_options.m"
    }
#line 3058 "handle_options.m"
  }
#line 3058 "handle_options.m"
}

#line 3058 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_5(
#line 3058 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3058 "handle_options.m"
{
#line 3058 "handle_options.m"
  {
#line 3058 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3058 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_0) == 0)
#line 3058 "handle_options.m"
      {
#line 3058 "handle_options.m"
        {
#line 3059 "handle_options.m"
          {
#line 3059 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 3058 "handle_options.m"
        }
#line 3058 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 3058 "handle_options.m"
      }
#line 3058 "handle_options.m"
    else
#line 3058 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 3058 "handle_options.m"
  }
#line 3058 "handle_options.m"
}

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_6(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3072 "handle_options.m"
{
#line 3072 "handle_options.m"
  {
#line 3072 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3072 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_1, 1);
#line 3072 "handle_options.m"
  }
#line 3072 "handle_options.m"
}

#line 3073 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_8(
#line 3073 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3073 "handle_options.m"
{
#line 3073 "handle_options.m"
  {
#line 3073 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3073 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv2_Target_14);
#line 3073 "handle_options.m"
    {
#line 3073 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_7(libs__handle_options__env_ptr);
#line 3073 "handle_options.m"
      return;
    }
#line 3073 "handle_options.m"
  }
#line 3073 "handle_options.m"
}

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_7(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3072 "handle_options.m"
{
#line 3072 "handle_options.m"
  {
#line 3072 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3072 "handle_options.m"
    {
#line 3074 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 3074 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_18_18 = (MR_Integer) 177;
#line 4479 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 3074 "handle_options.m"
      {
#line 3074 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 3074 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3074 "handle_options.m"
        {
#line 3074 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 3074 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 3074 "handle_options.m"
        }
#line 3072 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3072 "handle_options.m"
        {
#line 3074 "handle_options.m"
          {
#line 3074 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__V_27_27);
          }
#line 3074 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3074 "handle_options.m"
            {
#line 3074 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_6(libs__handle_options__env_ptr);
#line 3074 "handle_options.m"
              return;
            }
#line 3072 "handle_options.m"
        }
#line 3072 "handle_options.m"
    }
#line 3072 "handle_options.m"
  }
#line 3072 "handle_options.m"
}

#line 3072 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_9(
#line 3072 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3072 "handle_options.m"
{
#line 3072 "handle_options.m"
  {
#line 3072 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3072 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__commit_1) == 0)
#line 3072 "handle_options.m"
      {
#line 3072 "handle_options.m"
        {
#line 3072 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4544 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 3073 "handle_options.m"
          {
#line 3073 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 3072 "handle_options.m"
        }
#line 3072 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 3072 "handle_options.m"
      }
#line 3072 "handle_options.m"
    else
#line 3072 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 3072 "handle_options.m"
  }
#line 3072 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3058 "handle_options.m"
    {
#line 3058 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 3058 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded);
#line 3051 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3051 "handle_options.m"
      {
#line 3066 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 3051 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3051 "handle_options.m"
          {
#line 3075 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3076 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 3075 "handle_options.m"
            else
#line 3072 "handle_options.m"
              {
#line 3072 "handle_options.m"
                {
#line 3072 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 3072 "handle_options.m"
              }
#line 3051 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__succeeded)
#line 3051 "handle_options.m"
              {
#line 3078 "handle_options.m"
                {
#line 3078 "handle_options.m"
                  MR_Word base;
#line 3078 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3078 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 3078 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Comp_7));
#line 3078 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Name_6));
#line 3078 "handle_options.m"
                }
#line 3078 "handle_options.m"
                {
#line 3078 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont_env_ptr);
#line 3078 "handle_options.m"
                  return;
                }
#line 3051 "handle_options.m"
              }
#line 3051 "handle_options.m"
          }
#line 3051 "handle_options.m"
      }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0(
#line 3051 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 3051 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0_s libs__handle_options__env;

#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3052 "handle_options.m"
    {
#line 3052 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0_1, &libs__handle_options__env);
    }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
}

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__3002__1_3_p_0(
#line 3002 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 3002 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 3002 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 3002 "handle_options.m"
{
#line 3002 "handle_options.m"
  {
#line 3002 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3002 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 3002 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 3004 "handle_options.m"
    {
#line 3004 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 3004 "handle_options.m"
      return;
    }
#line 3002 "handle_options.m"
  }
#line 3002 "handle_options.m"
}

#line 2911 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2911__1_2_p_0(
#line 2911 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2911 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2911 "handle_options.m"
{
#line 2911 "handle_options.m"
  {
#line 2911 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2912 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2912 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2912 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2912 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2912 "handle_options.m"
    {
#line 2912 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2911 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2911 "handle_options.m"
      {
#line 2911 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2911 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2911 "handle_options.m"
      }
#line 2911 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2911 "handle_options.m"
  }
#line 2911 "handle_options.m"
}

#line 2243 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_2_f_0(
#line 2243 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2243 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1535)
#line 2243 "handle_options.m"
{
#line 2243 "handle_options.m"
  {
#line 2243 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1536;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__V_1537_1537;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__V_1538_1538;
#line 2244 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2244 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1538_1538;

#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      libs__handle_options__conv1_V_1538_1538 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1535)));
    }
#line 2244 "handle_options.m"
    libs__handle_options__V_1538_1538 = ((MR_String) libs__handle_options__conv1_V_1538_1538);
#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      libs__handle_options__V_1537_1537 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1538_1538, (MR_String) "Mercury");
    }
#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      return libs__handle_options__HeadVar__3_1536 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1537_1537, (MR_String) "hrls");
    }
#line 2243 "handle_options.m"
    return libs__handle_options__HeadVar__3_1536;
#line 2243 "handle_options.m"
  }
#line 2243 "handle_options.m"
}

#line 2241 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2241__1_2_f_0(
#line 2241 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2241 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1529)
#line 2241 "handle_options.m"
{
#line 2241 "handle_options.m"
  {
#line 2241 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2241 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1530;
#line 2241 "handle_options.m"
    MR_String libs__handle_options__V_1531_1531;
#line 2241 "handle_options.m"
    MR_String libs__handle_options__V_1532_1532;
#line 2242 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2242 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1532_1532;

#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      libs__handle_options__conv1_V_1532_1532 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1529)));
    }
#line 2242 "handle_options.m"
    libs__handle_options__V_1532_1532 = ((MR_String) libs__handle_options__conv1_V_1532_1532);
#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      libs__handle_options__V_1531_1531 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1532_1532, (MR_String) "Mercury");
    }
#line 2242 "handle_options.m"
    {
#line 2242 "handle_options.m"
      return libs__handle_options__HeadVar__3_1530 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1531_1531, (MR_String) "mihs");
    }
#line 2241 "handle_options.m"
    return libs__handle_options__HeadVar__3_1530;
#line 2241 "handle_options.m"
  }
#line 2241 "handle_options.m"
}

#line 2250 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2250__1_1_f_0(
#line 2250 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1524)
#line 2250 "handle_options.m"
{
#line 2250 "handle_options.m"
  {
#line 2250 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2250 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1525;
#line 2250 "handle_options.m"
    MR_String libs__handle_options__V_1526_1526;

#line 2250 "handle_options.m"
    {
#line 2250 "handle_options.m"
      libs__handle_options__V_1526_1526 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1524, (MR_String) "Mercury");
    }
#line 2250 "handle_options.m"
    {
#line 2250 "handle_options.m"
      return libs__handle_options__HeadVar__2_1525 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1526_1526, (MR_String) "hrls");
    }
#line 2250 "handle_options.m"
    return libs__handle_options__HeadVar__2_1525;
#line 2250 "handle_options.m"
  }
#line 2250 "handle_options.m"
}

#line 2249 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2249__1_1_f_0(
#line 2249 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1519)
#line 2249 "handle_options.m"
{
#line 2249 "handle_options.m"
  {
#line 2249 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2249 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1520;
#line 2249 "handle_options.m"
    MR_String libs__handle_options__V_1521_1521;

#line 2249 "handle_options.m"
    {
#line 2249 "handle_options.m"
      libs__handle_options__V_1521_1521 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1519, (MR_String) "Mercury");
    }
#line 2249 "handle_options.m"
    {
#line 2249 "handle_options.m"
      return libs__handle_options__HeadVar__2_1520 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1521_1521, (MR_String) "mihs");
    }
#line 2249 "handle_options.m"
    return libs__handle_options__HeadVar__2_1520;
#line 2249 "handle_options.m"
  }
#line 2249 "handle_options.m"
}

#line 2219 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(
#line 2219 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2219 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1506)
#line 2219 "handle_options.m"
{
#line 2219 "handle_options.m"
  {
#line 2219 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1507;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__V_1508_1508;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__V_1509_1509;
#line 2220 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2220 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1509_1509;

#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      libs__handle_options__conv1_V_1509_1509 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1506)));
    }
#line 2220 "handle_options.m"
    libs__handle_options__V_1509_1509 = ((MR_String) libs__handle_options__conv1_V_1509_1509);
#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      libs__handle_options__V_1508_1508 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1509_1509, (MR_String) "Mercury");
    }
#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      return libs__handle_options__HeadVar__3_1507 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1508_1508, (MR_String) "inits");
    }
#line 2219 "handle_options.m"
    return libs__handle_options__HeadVar__3_1507;
#line 2219 "handle_options.m"
  }
#line 2219 "handle_options.m"
}

#line 2215 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2215__1_2_f_0(
#line 2215 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_161,
#line 2215 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1500)
#line 2215 "handle_options.m"
{
#line 2215 "handle_options.m"
  {
#line 2215 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2215 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1501;
#line 2215 "handle_options.m"
    MR_String libs__handle_options__V_1502_1502;
#line 2215 "handle_options.m"
    MR_String libs__handle_options__V_1503_1503;
#line 2215 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, (MR_Integer) 1)));
#line 2215 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1503_1503;

#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__handle_options__conv1_V_1503_1503 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_161), ((MR_Box) (libs__handle_options__HeadVar__2_1500)));
    }
#line 2215 "handle_options.m"
    libs__handle_options__V_1503_1503 = ((MR_String) libs__handle_options__conv1_V_1503_1503);
#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__handle_options__V_1502_1502 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1503_1503, (MR_String) "Mercury");
    }
#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      return libs__handle_options__HeadVar__3_1501 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1502_1502, (MR_String) "lib");
    }
#line 2215 "handle_options.m"
    return libs__handle_options__HeadVar__3_1501;
#line 2215 "handle_options.m"
  }
#line 2215 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__2_2_p_0(
#line 2197 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1493,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1647)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2197 "handle_options.m"
    {
#line 2197 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1493, ((MR_Box) (libs__handle_options__HeadVar__2_1647)));
    }
#line 2197 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__1_2_p_0(
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1494,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1649)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1494, libs__handle_options__HeadVar__2_1649) == 0);

#line 2197 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2179 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_3_f_0(
#line 2179 "handle_options.m"
  MR_String libs__handle_options__TargetArch_129,
#line 2179 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2179 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1481)
#line 2179 "handle_options.m"
{
#line 2179 "handle_options.m"
  {
#line 2179 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2179 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1482;
#line 2179 "handle_options.m"
    MR_String libs__handle_options__V_1483_1483;
#line 2179 "handle_options.m"
    MR_String libs__handle_options__V_1484_1484;

#line 2179 "handle_options.m"
    {
#line 2179 "handle_options.m"
      libs__handle_options__V_1484_1484 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1481, (MR_String) "Mercury");
    }
#line 2179 "handle_options.m"
    {
#line 2179 "handle_options.m"
      libs__handle_options__V_1483_1483 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1484_1484, libs__handle_options__GradeString_141);
    }
#line 2179 "handle_options.m"
    {
#line 2179 "handle_options.m"
      return libs__handle_options__HeadVar__4_1482 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1483_1483, libs__handle_options__TargetArch_129);
    }
#line 2179 "handle_options.m"
    return libs__handle_options__HeadVar__4_1482;
#line 2179 "handle_options.m"
  }
#line 2179 "handle_options.m"
}

#line 2143 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(
#line 2143 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2143 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1462)
#line 2143 "handle_options.m"
{
#line 2143 "handle_options.m"
  {
#line 2143 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2143 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1463;
#line 2143 "handle_options.m"
    MR_String libs__handle_options__V_1464_1464;

#line 2145 "handle_options.m"
    {
#line 2145 "handle_options.m"
      libs__handle_options__V_1464_1464 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1462, (MR_String) "modules");
    }
#line 2145 "handle_options.m"
    {
#line 2145 "handle_options.m"
      return libs__handle_options__HeadVar__3_1463 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1464_1464, libs__handle_options__GradeString_141);
    }
#line 2143 "handle_options.m"
    return libs__handle_options__HeadVar__3_1463;
#line 2143 "handle_options.m"
  }
#line 2143 "handle_options.m"
}

#line 2133 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2133__1_2_f_0(
#line 2133 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2133 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1452)
#line 2133 "handle_options.m"
{
#line 2133 "handle_options.m"
  {
#line 2133 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2133 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1453;
#line 2133 "handle_options.m"
    MR_String libs__handle_options__V_1454_1454;

#line 2136 "handle_options.m"
    {
#line 2136 "handle_options.m"
      libs__handle_options__V_1454_1454 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_141);
    }
#line 2135 "handle_options.m"
    {
#line 2135 "handle_options.m"
      return libs__handle_options__HeadVar__3_1453 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1452, libs__handle_options__V_1454_1454);
    }
#line 2133 "handle_options.m"
    return libs__handle_options__HeadVar__3_1453;
#line 2133 "handle_options.m"
  }
#line 2133 "handle_options.m"
}

#line 2120 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(
#line 2120 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2120 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1435)
#line 2120 "handle_options.m"
{
#line 2120 "handle_options.m"
  {
#line 2120 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1436;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__V_1437_1437;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__V_1438_1438;

#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      libs__handle_options__V_1438_1438 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1435, (MR_String) "lib");
    }
#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      libs__handle_options__V_1437_1437 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1438_1438, libs__handle_options__GradeString_141);
    }
#line 2122 "handle_options.m"
    {
#line 2122 "handle_options.m"
      return libs__handle_options__HeadVar__3_1436 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1437_1437, (MR_String) "inc");
    }
#line 2120 "handle_options.m"
    return libs__handle_options__HeadVar__3_1436;
#line 2120 "handle_options.m"
  }
#line 2120 "handle_options.m"
}

#line 2105 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(
#line 2105 "handle_options.m"
  MR_String libs__handle_options__GradeString_141,
#line 2105 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1420)
#line 2105 "handle_options.m"
{
#line 2105 "handle_options.m"
  {
#line 2105 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2105 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1421;
#line 2105 "handle_options.m"
    MR_String libs__handle_options__V_1422_1422;

#line 2107 "handle_options.m"
    {
#line 2107 "handle_options.m"
      libs__handle_options__V_1422_1422 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1420, (MR_String) "lib");
    }
#line 2107 "handle_options.m"
    {
#line 2107 "handle_options.m"
      return libs__handle_options__HeadVar__3_1421 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1422_1422, libs__handle_options__GradeString_141);
    }
#line 2105 "handle_options.m"
    return libs__handle_options__HeadVar__3_1421;
#line 2105 "handle_options.m"
  }
#line 2105 "handle_options.m"
}

#line 530 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__530__1_1_p_0(
#line 530 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_267)
#line 530 "handle_options.m"
{
#line 530 "handle_options.m"
  {
#line 530 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__1_267 == (MR_Char) 46);

#line 530 "handle_options.m"
    return libs__handle_options__succeeded;
#line 530 "handle_options.m"
  }
#line 530 "handle_options.m"
}

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_2(
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3002 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3002 "handle_options.m"
{
#line 3002 "handle_options.m"
  {
#line 3002 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3002 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 3002 "handle_options.m"
    {
#line 3002 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__3002__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 3002 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 3002 "handle_options.m"
  }
#line 3002 "handle_options.m"
}

#line 3002 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0_1(
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3002 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3002 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3002 "handle_options.m"
{
#line 3002 "handle_options.m"
  {
#line 3002 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3002 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 3002 "handle_options.m"
    {
#line 3002 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__3002__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 3002 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 3002 "handle_options.m"
  }
#line 3002 "handle_options.m"
}

#line 2979 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0(
#line 2979 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2979 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2979 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2979 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2979 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2979 "handle_options.m"
{
#line 2979 "handle_options.m"
  {
#line 2979 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2981 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2984 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 3002 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2993 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2991 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2991 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2981 "handle_options.m"
    {
#line 2981 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2979 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2979 "handle_options.m"
      {
#line 5394 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2984 "handle_options.m"
        {
#line 2984 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2984 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2979 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2979 "handle_options.m"
          {
#line 5407 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2985 "handle_options.m"
            {
#line 2985 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 3002 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[20];
#line 5416 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5418 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 3002 "handle_options.m"
            {
#line 3002 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 3002 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2991 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2991 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2991 "handle_options.m"
              {
#line 2991 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2991 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2991 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2991 "handle_options.m"
                  {
#line 2991 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2991 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2991 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2991 "handle_options.m"
                  }
#line 2991 "handle_options.m"
              }
#line 2993 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2992 "handle_options.m"
              {
#line 2992 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2992 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 3002 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2992 "handle_options.m"
                {
#line 2992 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2992 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 177));
#line 2992 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2992 "handle_options.m"
                }
#line 2992 "handle_options.m"
                {
#line 2992 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2992 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2992 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2992 "handle_options.m"
                }
#line 3002 "handle_options.m"
                {
#line 3002 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[21], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 3002 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2992 "handle_options.m"
              }
#line 2993 "handle_options.m"
            else
#line 2994 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2993 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2979 "handle_options.m"
          }
#line 2979 "handle_options.m"
      }
#line 2979 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2979 "handle_options.m"
  }
#line 2979 "handle_options.m"
}

#line 2951 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2951 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2951 "handle_options.m"
{
#line 2951 "handle_options.m"
  {
#line 2951 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2951 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2951 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2951 "handle_options.m"
    {
#line 2951 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2951 "handle_options.m"
      return;
    }
#line 2951 "handle_options.m"
  }
#line 2951 "handle_options.m"
}

#line 2951 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2951 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2951 "handle_options.m"
{
#line 5549 "libs.handle_options.c"
  {
#line 5551 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5554 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5556 "libs.handle_options.c"
  }
#line 2951 "handle_options.m"
}

#line 3425 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3425 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3425 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3425 "handle_options.m"
{
#line 3428 "handle_options.m"
  {
#line 3428 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3428 "handle_options.m"
    {
#line 3428 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 3428 "handle_options.m"
        case (MR_Integer) 65:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ALL"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 97:
#line 3428 "handle_options.m"
          if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 108))))
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3428 "handle_options.m"
              case (MR_Integer) 0:
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 3428 "handle_options.m"
                break;
#line 3428 "handle_options.m"
              case (MR_Integer) 68:
#line 3428 "handle_options.m"
                if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "allD"))
#line 3428 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 3428 "handle_options.m"
                break;
#line 3428 "handle_options.m"
            }
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 99:
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3428 "handle_options.m"
            case (MR_Integer) 109:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "cmp"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 111:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "codegen"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 116:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ctgc"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
          }
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 100:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "detism"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 108:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "lco"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 109:
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3428 "handle_options.m"
            case (MR_Integer) 105:
#line 3428 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 110))
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3428 "handle_options.m"
                  case (MR_Integer) 0:
#line 3428 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 3428 "handle_options.m"
                    break;
#line 3428 "handle_options.m"
                  case (MR_Integer) 116:
#line 3428 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "mintrans"))
#line 3428 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 3428 "handle_options.m"
                    break;
#line 3428 "handle_options.m"
                }
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 109:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "mm"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 111:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "most"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
          }
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 111:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "osv"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 112:
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3428 "handle_options.m"
            case (MR_Integer) 97:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "paths"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 101:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "petdr"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
            case (MR_Integer) 111:
#line 3428 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "poly"))
#line 3428 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 3428 "handle_options.m"
              break;
#line 3428 "handle_options.m"
          }
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 115:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "statevar"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 116:
#line 3428 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "trans"))
#line 3428 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
        case (MR_Integer) 118:
#line 3428 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 97))
#line 3428 "handle_options.m"
#line 3428 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3428 "handle_options.m"
              case (MR_Integer) 110:
#line 3428 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vanessa"))
#line 3428 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 3428 "handle_options.m"
                break;
#line 3428 "handle_options.m"
              case (MR_Integer) 114:
#line 3428 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vars"))
#line 3428 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 3428 "handle_options.m"
                break;
#line 3428 "handle_options.m"
            }
#line 3428 "handle_options.m"
          break;
#line 3428 "handle_options.m"
      }
#line 3428 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 3428 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 3428 "handle_options.m"
      else
#line 3428 "handle_options.m"
        {
#line 3428 "handle_options.m"
          /* we found a match; look up the results */
#line 3428 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_14[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_14_0__vct_14_f_0;
#line 3428 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3428 "handle_options.m"
        }
#line 3428 "handle_options.m"
    }
#line 3428 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3428 "handle_options.m"
  }
#line 3425 "handle_options.m"
}

#line 3410 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3410 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3410 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3410 "handle_options.m"
{
#line 3413 "handle_options.m"
  {
#line 3413 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3413 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3413 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3413 "handle_options.m"
  }
#line 3410 "handle_options.m"
}

#line 3399 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3399 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3399 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3399 "handle_options.m"
{
#line 3399 "handle_options.m"
  {
#line 3399 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3399 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3399 "handle_options.m"
    {
#line 3399 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3399 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3399 "handle_options.m"
  }
#line 3399 "handle_options.m"
}

#line 3394 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3394 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3394 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3394 "handle_options.m"
{
#line 3396 "handle_options.m"
  {
#line 3396 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3396 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3396 "handle_options.m"
      {
#line 3396 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3396 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3396 "handle_options.m"
      }
#line 3396 "handle_options.m"
    else
#line 3397 "handle_options.m"
      {
#line 3397 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3397 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3397 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3397 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3399 "handle_options.m"
        {
#line 3399 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[6], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3400 "handle_options.m"
        {
#line 3400 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3405 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3407 "handle_options.m"
          {
#line 3407 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3407 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3407 "handle_options.m"
          }
#line 3405 "handle_options.m"
        else
#line 3403 "handle_options.m"
          {
#line 3403 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3403 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3404 "handle_options.m"
            {
#line 3404 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3403 "handle_options.m"
          }
#line 3397 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3397 "handle_options.m"
          {
#line 3401 "handle_options.m"
            {
#line 3401 "handle_options.m"
              MR_Word base;
#line 3401 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3401 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3401 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3401 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3401 "handle_options.m"
            }
#line 3401 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3397 "handle_options.m"
          }
#line 3397 "handle_options.m"
      }
#line 3396 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3396 "handle_options.m"
  }
#line 3394 "handle_options.m"
}

#line 3355 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3355 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3355 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3355 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3355 "handle_options.m"
{
#line 3357 "handle_options.m"
  {
#line 3357 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3357 "handle_options.m"
    {
#line 3357 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3357 "handle_options.m"
      do
#line 3357 "handle_options.m"
        {
#line 3357 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_13[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_13_0__vct_13_f_0;
#line 3357 "handle_options.m"
          {
#line 3357 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3357 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3357 "handle_options.m"
        }
#line 3357 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3357 "handle_options.m"
    }
#line 3357 "handle_options.m"
  }
#line 3355 "handle_options.m"
}

#line 3095 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 3095 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 3095 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 3095 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3095 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3095 "handle_options.m"
{
#line 3100 "handle_options.m"
  {
#line 3100 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3100 "handle_options.m"
    {
#line 3100 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3100 "handle_options.m"
      do
#line 3100 "handle_options.m"
        {
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_1;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_2;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_3;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_4;
#line 3100 "handle_options.m"
          {
#line 3100 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3100 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3100 "handle_options.m"
        }
#line 3100 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 50));
#line 3100 "handle_options.m"
    }
#line 3100 "handle_options.m"
  }
#line 3095 "handle_options.m"
}

#line 3093 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 3093 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 3093 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 3093 "handle_options.m"
{
#line 3100 "handle_options.m"
  {
#line 3100 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3100 "handle_options.m"
    {
#line 3100 "handle_options.m"
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
#line 3100 "handle_options.m"
        case (MR_Integer) 97:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 103:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "agc"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 0;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 115:
#line 3100 "handle_options.m"
              if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 95))))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 3100 "handle_options.m"
                  case (MR_Integer) 102:
#line 3100 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast"))
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 1;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                  case (MR_Integer) 106:
#line 3100 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump"))
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 2;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 99:
#line 3100 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "csharp"))
#line 3100 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 3;
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 100:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 101:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 98:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "debug"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 4;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 99:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "decldebug"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 5;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 109:
#line 3100 "handle_options.m"
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3100 "handle_options.m"
                  case (MR_Integer) 0:
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 6;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                  case (MR_Integer) 111:
#line 3100 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "dmmos"))
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 7;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                  case (MR_Integer) 115:
#line 3100 "handle_options.m"
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc"))
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 8;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 101:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 114:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "erlang"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 9;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 120:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "exts"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 10;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 102:
#line 3100 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "fast"))
#line 3100 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 11;
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 103:
#line 3100 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 99))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
              case (MR_Integer) 0:
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 12;
#line 3100 "handle_options.m"
                break;
#line 3100 "handle_options.m"
              case (MR_Integer) 100:
#line 3100 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "gcd"))
#line 3100 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 13;
#line 3100 "handle_options.m"
                break;
#line 3100 "handle_options.m"
            }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 104:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 103:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "hgc"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 14;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 108:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 0:
#line 3100 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 15;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 95:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 16;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 99:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                  switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
#line 3100 "handle_options.m"
                    case (MR_Integer) 0:
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 17;
#line 3100 "handle_options.m"
                      break;
#line 3100 "handle_options.m"
                    case (MR_Integer) 95:
#line 3100 "handle_options.m"
                      if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest"))
#line 3100 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 18;
#line 3100 "handle_options.m"
                      break;
#line 3100 "handle_options.m"
                  }
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 105:
#line 3100 "handle_options.m"
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
              case (MR_Integer) 0:
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 19;
#line 3100 "handle_options.m"
                break;
#line 3100 "handle_options.m"
              case (MR_Integer) 99:
#line 3100 "handle_options.m"
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "ilc"))
#line 3100 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 20;
#line 3100 "handle_options.m"
                break;
#line 3100 "handle_options.m"
            }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 106:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 97:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "java"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 21;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 117:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "jump"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 22;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 108:
#line 3100 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug"))
#line 3100 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 23;
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 109:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 101:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "memprof"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 24;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 109:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 0:
#line 3100 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 25;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 111:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "mmos"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 26;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 115:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "mmsc"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 27;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 110:
#line 3100 "handle_options.m"
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "none"))
#line 3100 "handle_options.m"
            libs__handle_options__case_num_0 = (MR_Integer) 28;
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 112:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 97:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "par"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 29;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 105:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "picreg"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 30;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 114:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 101:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "pregen"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 31;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 111:
#line 3100 "handle_options.m"
                  if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 102))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                    switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 3100 "handle_options.m"
                      case (MR_Integer) 0:
#line 3100 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 32;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                      case (MR_Integer) 97:
#line 3100 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profall"))
#line 3100 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 33;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                      case (MR_Integer) 99:
#line 3100 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profcalls"))
#line 3100 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 34;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                      case (MR_Integer) 100:
#line 3100 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "profdeep"))
#line 3100 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 35;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                      case (MR_Integer) 116:
#line 3100 "handle_options.m"
                        if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "proftime"))
#line 3100 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 36;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                    }
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 114:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 98:
#line 3100 "handle_options.m"
              if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) == (MR_Integer) 109))))
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 4)) {
#line 3100 "handle_options.m"
                  case (MR_Integer) 0:
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 37;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                  case (MR_Integer) 100:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
                    switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 5)) {
#line 3100 "handle_options.m"
                      case (MR_Integer) 0:
#line 3100 "handle_options.m"
                        libs__handle_options__case_num_0 = (MR_Integer) 38;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                      case (MR_Integer) 112:
#line 3100 "handle_options.m"
                        if (MR_offset_streq(6, libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp"))
#line 3100 "handle_options.m"
                          libs__handle_options__case_num_0 = (MR_Integer) 39;
#line 3100 "handle_options.m"
                        break;
#line 3100 "handle_options.m"
                    }
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                  case (MR_Integer) 112:
#line 3100 "handle_options.m"
                    if (MR_offset_streq(5, libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp"))
#line 3100 "handle_options.m"
                      libs__handle_options__case_num_0 = (MR_Integer) 40;
#line 3100 "handle_options.m"
                    break;
#line 3100 "handle_options.m"
                }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 101:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "reg"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 41;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 115:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 112:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "spf"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 42;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 115:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 43;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 116:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "stseg"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 44;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
        case (MR_Integer) 116:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
#line 3100 "handle_options.m"
            case (MR_Integer) 104:
#line 3100 "handle_options.m"
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "threadscope"))
#line 3100 "handle_options.m"
                libs__handle_options__case_num_0 = (MR_Integer) 45;
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 114:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 0:
#line 3100 "handle_options.m"
                  libs__handle_options__case_num_0 = (MR_Integer) 46;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 115:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "trseg"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 47;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
            case (MR_Integer) 115:
#line 3100 "handle_options.m"
#line 3100 "handle_options.m"
              switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
#line 3100 "handle_options.m"
                case (MR_Integer) 99:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "tsc"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 48;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
                case (MR_Integer) 119:
#line 3100 "handle_options.m"
                  if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "tsw"))
#line 3100 "handle_options.m"
                    libs__handle_options__case_num_0 = (MR_Integer) 49;
#line 3100 "handle_options.m"
                  break;
#line 3100 "handle_options.m"
              }
#line 3100 "handle_options.m"
              break;
#line 3100 "handle_options.m"
          }
#line 3100 "handle_options.m"
          break;
#line 3100 "handle_options.m"
      }
#line 3100 "handle_options.m"
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
#line 3100 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 3100 "handle_options.m"
      else
#line 3100 "handle_options.m"
        {
#line 3100 "handle_options.m"
          /* we found a match; look up the results */
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 3100 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 3100 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3100 "handle_options.m"
        }
#line 3100 "handle_options.m"
    }
#line 3100 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3100 "handle_options.m"
  }
#line 3093 "handle_options.m"
}

#line 3033 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 3033 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3033 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3033 "handle_options.m"
{
#line 3036 "handle_options.m"
  {
#line 3036 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3036 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3036 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 3036 "handle_options.m"
    else
#line 3037 "handle_options.m"
      {
#line 3037 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 3037 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 3037 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 3037 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 3037 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 3042 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3044 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 3042 "handle_options.m"
        else
#line 3039 "handle_options.m"
          {
#line 3039 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 3039 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 3039 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 3039 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 3039 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 3039 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 3039 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 3037 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 3037 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 3042 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3044 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 3042 "handle_options.m"
            else
#line 3039 "handle_options.m"
              {
#line 3039 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 3039 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 3039 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 3039 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 3040 "handle_options.m"
                {
#line 3040 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 3041 "handle_options.m"
                {
#line 3041 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3041 "handle_options.m"
                }
#line 3041 "handle_options.m"
                {
#line 3041 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 3041 "handle_options.m"
                }
#line 3041 "handle_options.m"
                {
#line 3041 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 3041 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 3041 "handle_options.m"
                }
#line 3041 "handle_options.m"
                {
#line 3041 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 3039 "handle_options.m"
              }
#line 3041 "handle_options.m"
            {
#line 3041 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3041 "handle_options.m"
            }
#line 3041 "handle_options.m"
            {
#line 3041 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 3041 "handle_options.m"
            }
#line 3041 "handle_options.m"
            {
#line 3041 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 3041 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 3041 "handle_options.m"
            }
#line 3041 "handle_options.m"
            {
#line 3041 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 3041 "handle_options.m"
              return;
            }
#line 3039 "handle_options.m"
          }
#line 3037 "handle_options.m"
      }
#line 3036 "handle_options.m"
  }
#line 3033 "handle_options.m"
}

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2896 "handle_options.m"
{
#line 2896 "handle_options.m"
  {
#line 2896 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2896 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2896 "handle_options.m"
  }
#line 2896 "handle_options.m"
}

#line 2897 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2897 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2897 "handle_options.m"
{
#line 2897 "handle_options.m"
  {
#line 2897 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2897 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2897 "handle_options.m"
    {
#line 2897 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2897 "handle_options.m"
      return;
    }
#line 2897 "handle_options.m"
  }
#line 2897 "handle_options.m"
}

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2896 "handle_options.m"
{
#line 2896 "handle_options.m"
  {
#line 2896 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2898 "handle_options.m"
    {
#line 2898 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2898 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2898 "handle_options.m"
      {
#line 2898 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2898 "handle_options.m"
        return;
      }
#line 2896 "handle_options.m"
  }
#line 2896 "handle_options.m"
}

#line 2896 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2896 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2896 "handle_options.m"
{
#line 2896 "handle_options.m"
  {
#line 2896 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2896 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2896 "handle_options.m"
      {
#line 7013 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2897 "handle_options.m"
        {
#line 2897 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2896 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2896 "handle_options.m"
      }
#line 2896 "handle_options.m"
    else
#line 2896 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2896 "handle_options.m"
  }
#line 2896 "handle_options.m"
}

#line 2893 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2893 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2893 "handle_options.m"
{
#line 2893 "handle_options.m"
  {
#line 2893 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2893 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2893 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2896 "handle_options.m"
    {
#line 2896 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2896 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2896 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2893 "handle_options.m"
  }
#line 2893 "handle_options.m"
}

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2887 "handle_options.m"
{
#line 2887 "handle_options.m"
  {
#line 2887 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2887 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2887 "handle_options.m"
  }
#line 2887 "handle_options.m"
}

#line 2888 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2888 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2888 "handle_options.m"
{
#line 2888 "handle_options.m"
  {
#line 2888 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2888 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2888 "handle_options.m"
    {
#line 2888 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2888 "handle_options.m"
      return;
    }
#line 2888 "handle_options.m"
  }
#line 2888 "handle_options.m"
}

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2887 "handle_options.m"
{
#line 2887 "handle_options.m"
  {
#line 2887 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2890 "handle_options.m"
    {
#line 2890 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2889 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2889 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2889 "handle_options.m"
      {
#line 2889 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2889 "handle_options.m"
        return;
      }
#line 2887 "handle_options.m"
  }
#line 2887 "handle_options.m"
}

#line 2887 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2887 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2887 "handle_options.m"
{
#line 2887 "handle_options.m"
  {
#line 2887 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2887 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2887 "handle_options.m"
      {
#line 7159 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2888 "handle_options.m"
        {
#line 2888 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2887 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2887 "handle_options.m"
      }
#line 2887 "handle_options.m"
    else
#line 2887 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2887 "handle_options.m"
  }
#line 2887 "handle_options.m"
}

#line 2884 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2884 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2884 "handle_options.m"
{
#line 2884 "handle_options.m"
  {
#line 2884 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2884 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2884 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2887 "handle_options.m"
    {
#line 2887 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2887 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2887 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2884 "handle_options.m"
  }
#line 2884 "handle_options.m"
}

#line 2911 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2911 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2911 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2911 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2911 "handle_options.m"
{
#line 2911 "handle_options.m"
  {
#line 2911 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2911 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2911 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2911 "handle_options.m"
    {
#line 2911 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2911__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2911 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2911 "handle_options.m"
      {
#line 2911 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2911 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2911 "handle_options.m"
      }
#line 2911 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2911 "handle_options.m"
  }
#line 2911 "handle_options.m"
}

#line 2866 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2866 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2866 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2866 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2866 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2866 "handle_options.m"
{
#line 7272 "libs.handle_options.c"
  {
#line 7274 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7276 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2910 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2910 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2910 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2910 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3391 "handle_options.m"
    {
#line 3391 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3392 "handle_options.m"
    {
#line 3392 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2910 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2910 "handle_options.m"
      {
#line 2911 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 7303 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2914 "handle_options.m"
        {
#line 2914 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2910 "handle_options.m"
      }
#line 7312 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7314 "libs.handle_options.c"
      {
#line 7316 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7318 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2917 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2917 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2916 "handle_options.m"
        {
#line 2916 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2917 "handle_options.m"
        {
#line 2917 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2917 "handle_options.m"
        {
#line 2917 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2917 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7342 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7344 "libs.handle_options.c"
          {
#line 7346 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;

#line 2918 "handle_options.m"
            {
#line 2918 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 657 "handle_options.m"
            {
#line 657 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_39_39)));
            }
#line 2881 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7361 "libs.handle_options.c"
          }
#line 7363 "libs.handle_options.c"
        else
#line 7365 "libs.handle_options.c"
          {
#line 2875 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2921 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2875 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2875 "handle_options.m"
            {
#line 2875 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2877 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2876 "handle_options.m"
              {
#line 2876 "handle_options.m"
                MR_Word base;
#line 2876 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2876 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2876 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2876 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2876 "handle_options.m"
              }
#line 2877 "handle_options.m"
            else
#line 2877 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7399 "libs.handle_options.c"
          }
#line 7401 "libs.handle_options.c"
      }
#line 7403 "libs.handle_options.c"
    else
#line 7405 "libs.handle_options.c"
      {
#line 7407 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;

#line 2924 "handle_options.m"
        {
#line 2924 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 657 "handle_options.m"
        {
#line 657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_42_42)));
        }
#line 2881 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7422 "libs.handle_options.c"
      }
#line 7424 "libs.handle_options.c"
  }
#line 2866 "handle_options.m"
}

#line 2843 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2843 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2843 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2843 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2843 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2843 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2843 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2843 "handle_options.m"
{
#line 2850 "handle_options.m"
  {
#line 2850 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2848 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2848 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2848 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2848 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2848 "handle_options.m"
    {
#line 2848 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2850 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2849 "handle_options.m"
      {
#line 2849 "handle_options.m"
        {
#line 2849 "handle_options.m"
          MR_Word base;
#line 2849 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2849 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2849 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2849 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2849 "handle_options.m"
        }
#line 2849 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2849 "handle_options.m"
      }
#line 2850 "handle_options.m"
    else
#line 2851 "handle_options.m"
      {
#line 2851 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2851 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2851 "handle_options.m"
        MR_String libs__handle_options__V_24_24;

#line 2852 "handle_options.m"
        {
#line 2852 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2851 "handle_options.m"
        {
#line 2851 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2851 "handle_options.m"
        {
#line 2851 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 657 "handle_options.m"
        {
#line 657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_18 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, ((MR_Box) (libs__handle_options__V_20_20)));
        }
#line 2851 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2851 "handle_options.m"
      }
#line 2850 "handle_options.m"
  }
#line 2843 "handle_options.m"
}

#line 2831 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2831 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2831 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2831 "handle_options.m"
{
#line 2831 "handle_options.m"
  {
#line 2831 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2831 "handle_options.m"
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2831 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2831 "handle_options.m"
    {
#line 2831 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2831 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2831 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2831 "handle_options.m"
  }
#line 2831 "handle_options.m"
}

#line 2831 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2831 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2831 "handle_options.m"
{
#line 2831 "handle_options.m"
  {
#line 2831 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2831 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2831 "handle_options.m"
    {
#line 2831 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2831 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2831 "handle_options.m"
  }
#line 2831 "handle_options.m"
}

#line 2829 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2829 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2829 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2829 "handle_options.m"
{
#line 2829 "handle_options.m"
  {
#line 2829 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2829 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2829 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2829 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2829 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2829 "handle_options.m"
  }
#line 2829 "handle_options.m"
}

#line 2829 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2829 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2829 "handle_options.m"
{
#line 2829 "handle_options.m"
  {
#line 2829 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2829 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2829 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2829 "handle_options.m"
  }
#line 2829 "handle_options.m"
}

#line 2821 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2821 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2821 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2821 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2821 "handle_options.m"
{
#line 2821 "handle_options.m"
  {
#line 2821 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2821 "handle_options.m"
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2821 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2821 "handle_options.m"
    {
#line 2821 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2821 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2821 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2821 "handle_options.m"
  }
#line 2821 "handle_options.m"
}

#line 2819 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2819 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2819 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2819 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2819 "handle_options.m"
{
#line 2819 "handle_options.m"
  {
#line 2819 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2819 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2819 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2819 "handle_options.m"
    {
#line 2819 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2819 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2819 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2819 "handle_options.m"
  }
#line 2819 "handle_options.m"
}

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2811 "handle_options.m"
{
#line 2814 "handle_options.m"
  {
#line 2814 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_48_48;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2814 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2819 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2819 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2821 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2821 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2829 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2829 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2831 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2831 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2815 "handle_options.m"
    {
#line 2815 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 640, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2817 "handle_options.m"
    {
#line 2817 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 641, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7822 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7824 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[2];
#line 7826 "libs.handle_options.c"
    libs__handle_options__TypeInfo_48_48 = (MR_Word) &libs__handle_options_scalar_common_2[3];
#line 2819 "handle_options.m"
    {
#line 2819 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2819 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2819 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2821 "handle_options.m"
    {
#line 2821 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2821 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2821 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2824 "handle_options.m"
    {
#line 2824 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 639, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2829 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2829 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2829 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2829 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2829 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2829 "handle_options.m"
    }
#line 2829 "handle_options.m"
    {
#line 2829 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2829 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2829 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2831 "handle_options.m"
    {
#line 2831 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2831 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2831 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2831 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2831 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[18]));
#line 2831 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2831 "handle_options.m"
    }
#line 2831 "handle_options.m"
    {
#line 2831 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_48_48, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2831 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2831 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2833 "handle_options.m"
    {
#line 2833 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2833 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2833 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2833 "handle_options.m"
    }
#line 2833 "handle_options.m"
    {
#line 2833 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2833 "handle_options.m"
      return;
    }
#line 2814 "handle_options.m"
  }
#line 2811 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2758 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2758 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7946 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2758 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2758 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7979 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8013 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8046 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8078 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8096 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2758 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 8113 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8131 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2758 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2758 "handle_options.m"
{
#line 2758 "handle_options.m"
  {
#line 2758 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8163 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
  }
#line 2758 "handle_options.m"
}

#line 2574 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_grade_component_compatibility_5_p_0(
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__Globals_6,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__Target_7,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_8,
#line 2574 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_22,
#line 2574 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_23)
#line 2574 "handle_options.m"
{
#line 2578 "handle_options.m"
  {
#line 2578 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2578 "handle_options.m"
    MR_String libs__handle_options__TargetStr_10;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__ProfileTime_14;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__ProfileMemory_15;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_16;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__TrailSegments_17;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__StackSegments_18;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__SinglePrecFloat_20;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2578 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_58_58;

#line 2579 "handle_options.m"
    {
#line 2579 "handle_options.m"
      libs__handle_options__TargetStr_10 = libs__globals__compilation_target_string_1_f_0(libs__handle_options__Target_7);
    }
#line 2586 "handle_options.m"
#line 2586 "handle_options.m"
    switch (libs__handle_options__Target_7) {
#line 2586 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2586 "handle_options.m"
      case (MR_Integer) 0:
#line 2584 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2586 "handle_options.m"
        break;
#line 2586 "handle_options.m"
      case (MR_Integer) 2:
#line 2586 "handle_options.m"
      case (MR_Integer) 4:
#line 2586 "handle_options.m"
      case (MR_Integer) 1:
#line 2586 "handle_options.m"
      case (MR_Integer) 3:
#line 2598 "handle_options.m"
#line 2598 "handle_options.m"
        switch (libs__handle_options__GC_Method_8) {
#line 2598 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2598 "handle_options.m"
          case (MR_Integer) 5:
#line 2613 "handle_options.m"
            {
#line 2613 "handle_options.m"
              MR_String libs__handle_options__AGC_IncompatibleMsg_13;
#line 2613 "handle_options.m"
              MR_String libs__handle_options__V_81_81;

#line 2616 "handle_options.m"
              {
#line 2616 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__TargetStr_10, &libs__handle_options__V_81_81);
              }
#line 2614 "handle_options.m"
              {
#line 2614 "handle_options.m"
                libs__handle_options__AGC_IncompatibleMsg_13 = mercury__string__f_43_43_2_f_0((MR_String) "use of the accurate GC is incompatible with target language ", libs__handle_options__V_81_81);
              }
#line 2617 "handle_options.m"
              {
#line 2617 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__AGC_IncompatibleMsg_13, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2613 "handle_options.m"
            }
#line 2598 "handle_options.m"
            break;
#line 2598 "handle_options.m"
          case (MR_Integer) 0:
#line 2595 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2598 "handle_options.m"
            break;
#line 2598 "handle_options.m"
          case (MR_Integer) 2:
#line 2598 "handle_options.m"
          case (MR_Integer) 3:
#line 2601 "handle_options.m"
            {
#line 2601 "handle_options.m"
              MR_String libs__handle_options__BoehmIncompatibleMsg_11;
#line 2601 "handle_options.m"
              MR_String libs__handle_options__V_73_73;

#line 2604 "handle_options.m"
              {
#line 2604 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__TargetStr_10, &libs__handle_options__V_73_73);
              }
#line 2602 "handle_options.m"
              {
#line 2602 "handle_options.m"
                libs__handle_options__BoehmIncompatibleMsg_11 = mercury__string__f_43_43_2_f_0((MR_String) "use of the Boehm GC is incompatible with target language ", libs__handle_options__V_73_73);
              }
#line 2605 "handle_options.m"
              {
#line 2605 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__BoehmIncompatibleMsg_11, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2601 "handle_options.m"
            }
#line 2598 "handle_options.m"
            break;
#line 2598 "handle_options.m"
          case (MR_Integer) 4:
#line 2607 "handle_options.m"
            {
#line 2607 "handle_options.m"
              MR_String libs__handle_options__HGC_IncompatibleMsg_12;
#line 2607 "handle_options.m"
              MR_String libs__handle_options__V_65_65;

#line 2610 "handle_options.m"
              {
#line 2610 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__TargetStr_10, &libs__handle_options__V_65_65);
              }
#line 2608 "handle_options.m"
              {
#line 2608 "handle_options.m"
                libs__handle_options__HGC_IncompatibleMsg_12 = mercury__string__f_43_43_2_f_0((MR_String) "use of HGC is incompatible with target language ", libs__handle_options__V_65_65);
              }
#line 2611 "handle_options.m"
              {
#line 2611 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__HGC_IncompatibleMsg_12, libs__handle_options__STATE_VARIABLE_Errors_0_22, &libs__handle_options__STATE_VARIABLE_Errors_38_38);
              }
#line 2607 "handle_options.m"
            }
#line 2598 "handle_options.m"
            break;
#line 2598 "handle_options.m"
          case (MR_Integer) 1:
#line 2596 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_38_38 = libs__handle_options__STATE_VARIABLE_Errors_0_22;
#line 2598 "handle_options.m"
            break;
#line 2598 "handle_options.m"
        }
#line 2586 "handle_options.m"
        break;
#line 2586 "handle_options.m"
    }
#line 2623 "handle_options.m"
    {
#line 2623 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 194, &libs__handle_options__ProfileTime_14);
    }
#line 2637 "handle_options.m"
#line 2637 "handle_options.m"
    switch (libs__handle_options__ProfileTime_14) {
#line 2637 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2637 "handle_options.m"
      case (MR_Integer) 0:
#line 2638 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_41_41 = libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2637 "handle_options.m"
        break;
#line 2637 "handle_options.m"
      case (MR_Integer) 1:
#line 2634 "handle_options.m"
#line 2634 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2634 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2634 "handle_options.m"
          case (MR_Integer) 0:
#line 2635 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_41_41 = libs__handle_options__STATE_VARIABLE_Errors_38_38;
#line 2634 "handle_options.m"
            break;
#line 2634 "handle_options.m"
          case (MR_Integer) 2:
#line 2634 "handle_options.m"
          case (MR_Integer) 4:
#line 2634 "handle_options.m"
          case (MR_Integer) 1:
#line 2634 "handle_options.m"
          case (MR_Integer) 3:
#line 2631 "handle_options.m"
            {
#line 2631 "handle_options.m"
              MR_String libs__handle_options__V_40_40;

#line 2632 "handle_options.m"
              {
#line 2632 "handle_options.m"
                libs__handle_options__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "time profiling is incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2632 "handle_options.m"
              {
#line 2632 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_40_40, libs__handle_options__STATE_VARIABLE_Errors_38_38, &libs__handle_options__STATE_VARIABLE_Errors_41_41);
              }
#line 2631 "handle_options.m"
            }
#line 2634 "handle_options.m"
            break;
#line 2634 "handle_options.m"
        }
#line 2637 "handle_options.m"
        break;
#line 2637 "handle_options.m"
    }
#line 2643 "handle_options.m"
    {
#line 2643 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 195, &libs__handle_options__ProfileMemory_15);
    }
#line 2657 "handle_options.m"
#line 2657 "handle_options.m"
    switch (libs__handle_options__ProfileMemory_15) {
#line 2657 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2657 "handle_options.m"
      case (MR_Integer) 0:
#line 2658 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_45_45 = libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2657 "handle_options.m"
        break;
#line 2657 "handle_options.m"
      case (MR_Integer) 1:
#line 2654 "handle_options.m"
#line 2654 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2654 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2654 "handle_options.m"
          case (MR_Integer) 0:
#line 2655 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_45_45 = libs__handle_options__STATE_VARIABLE_Errors_41_41;
#line 2654 "handle_options.m"
            break;
#line 2654 "handle_options.m"
          case (MR_Integer) 2:
#line 2654 "handle_options.m"
          case (MR_Integer) 4:
#line 2654 "handle_options.m"
          case (MR_Integer) 1:
#line 2654 "handle_options.m"
          case (MR_Integer) 3:
#line 2651 "handle_options.m"
            {
#line 2651 "handle_options.m"
              MR_String libs__handle_options__V_44_44;

#line 2652 "handle_options.m"
              {
#line 2652 "handle_options.m"
                libs__handle_options__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "memory profiling is incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2652 "handle_options.m"
              {
#line 2652 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Errors_41_41, &libs__handle_options__STATE_VARIABLE_Errors_45_45);
              }
#line 2651 "handle_options.m"
            }
#line 2654 "handle_options.m"
            break;
#line 2654 "handle_options.m"
        }
#line 2657 "handle_options.m"
        break;
#line 2657 "handle_options.m"
    }
#line 2667 "handle_options.m"
    {
#line 2667 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 219, &libs__handle_options__UseTrail_16);
    }
#line 2668 "handle_options.m"
    {
#line 2668 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 220, &libs__handle_options__TrailSegments_17);
    }
#line 2672 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseTrail_16 == (MR_Integer) 1);
#line 2673 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2673 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__TrailSegments_17 == (MR_Integer) 1);
#line 2687 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2684 "handle_options.m"
#line 2684 "handle_options.m"
      switch (libs__handle_options__Target_7) {
#line 2684 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2684 "handle_options.m"
        case (MR_Integer) 0:
#line 2685 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_50_50 = libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2684 "handle_options.m"
          break;
#line 2684 "handle_options.m"
        case (MR_Integer) 2:
#line 2684 "handle_options.m"
        case (MR_Integer) 4:
#line 2684 "handle_options.m"
        case (MR_Integer) 1:
#line 2684 "handle_options.m"
        case (MR_Integer) 3:
#line 2681 "handle_options.m"
          {
#line 2681 "handle_options.m"
            MR_String libs__handle_options__V_49_49;

#line 2682 "handle_options.m"
            {
#line 2682 "handle_options.m"
              libs__handle_options__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "trailing is incompatible with target language ", libs__handle_options__TargetStr_10);
            }
#line 2682 "handle_options.m"
            {
#line 2682 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Errors_45_45, &libs__handle_options__STATE_VARIABLE_Errors_50_50);
            }
#line 2681 "handle_options.m"
          }
#line 2684 "handle_options.m"
          break;
#line 2684 "handle_options.m"
      }
#line 2687 "handle_options.m"
    else
#line 2687 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_50_50 = libs__handle_options__STATE_VARIABLE_Errors_45_45;
#line 2693 "handle_options.m"
    {
#line 2693 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 229, &libs__handle_options__StackSegments_18);
    }
#line 2716 "handle_options.m"
#line 2716 "handle_options.m"
    switch (libs__handle_options__StackSegments_18) {
#line 2716 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2716 "handle_options.m"
      case (MR_Integer) 0:
#line 2717 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_58_58 = libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2716 "handle_options.m"
        break;
#line 2716 "handle_options.m"
      case (MR_Integer) 1:
#line 2707 "handle_options.m"
#line 2707 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2707 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2707 "handle_options.m"
          case (MR_Integer) 0:
#line 2697 "handle_options.m"
            {
#line 2697 "handle_options.m"
              MR_Word libs__handle_options__HighLevelCode_19;

#line 2698 "handle_options.m"
              {
#line 2698 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 255, &libs__handle_options__HighLevelCode_19);
              }
#line 2704 "handle_options.m"
#line 2704 "handle_options.m"
              switch (libs__handle_options__HighLevelCode_19) {
#line 2704 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2704 "handle_options.m"
                case (MR_Integer) 0:
#line 2705 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Errors_58_58 = libs__handle_options__STATE_VARIABLE_Errors_50_50;
#line 2704 "handle_options.m"
                  break;
#line 2704 "handle_options.m"
                case (MR_Integer) 1:
#line 2700 "handle_options.m"
                  {
#line 2701 "handle_options.m"
                    {
#line 2701 "handle_options.m"
                      libs__handle_options__add_error_3_p_0((MR_String) "stack segments are incompatible with the high-level C backend", libs__handle_options__STATE_VARIABLE_Errors_50_50, &libs__handle_options__STATE_VARIABLE_Errors_58_58);
                    }
#line 2700 "handle_options.m"
                  }
#line 2704 "handle_options.m"
                  break;
#line 2704 "handle_options.m"
              }
#line 2697 "handle_options.m"
            }
#line 2707 "handle_options.m"
            break;
#line 2707 "handle_options.m"
          case (MR_Integer) 2:
#line 2707 "handle_options.m"
          case (MR_Integer) 4:
#line 2707 "handle_options.m"
          case (MR_Integer) 1:
#line 2707 "handle_options.m"
          case (MR_Integer) 3:
#line 2712 "handle_options.m"
            {
#line 2712 "handle_options.m"
              MR_String libs__handle_options__V_53_53;

#line 2713 "handle_options.m"
              {
#line 2713 "handle_options.m"
                libs__handle_options__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) "stack segments are incompatible with target language ", libs__handle_options__TargetStr_10);
              }
#line 2713 "handle_options.m"
              {
#line 2713 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__V_53_53, libs__handle_options__STATE_VARIABLE_Errors_50_50, &libs__handle_options__STATE_VARIABLE_Errors_58_58);
              }
#line 2712 "handle_options.m"
            }
#line 2707 "handle_options.m"
            break;
#line 2707 "handle_options.m"
        }
#line 2716 "handle_options.m"
        break;
#line 2716 "handle_options.m"
    }
#line 2722 "handle_options.m"
    {
#line 2722 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_6, (MR_Integer) 225, &libs__handle_options__SinglePrecFloat_20);
    }
#line 2738 "handle_options.m"
#line 2738 "handle_options.m"
    switch (libs__handle_options__SinglePrecFloat_20) {
#line 2738 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2738 "handle_options.m"
      case (MR_Integer) 0:
#line 2739 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_23 = libs__handle_options__STATE_VARIABLE_Errors_58_58;
#line 2738 "handle_options.m"
        break;
#line 2738 "handle_options.m"
      case (MR_Integer) 1:
#line 2735 "handle_options.m"
#line 2735 "handle_options.m"
        switch (libs__handle_options__Target_7) {
#line 2735 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2735 "handle_options.m"
          case (MR_Integer) 0:
#line 2736 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_23 = libs__handle_options__STATE_VARIABLE_Errors_58_58;
#line 2735 "handle_options.m"
            break;
#line 2735 "handle_options.m"
          case (MR_Integer) 2:
#line 2735 "handle_options.m"
          case (MR_Integer) 4:
#line 2735 "handle_options.m"
          case (MR_Integer) 1:
#line 2735 "handle_options.m"
          case (MR_Integer) 3:
#line 2730 "handle_options.m"
            {
#line 2730 "handle_options.m"
              MR_String libs__handle_options__SinglePrecFloatMsg_21;
#line 2730 "handle_options.m"
              MR_String libs__handle_options__V_89_89;

#line 2733 "handle_options.m"
              {
#line 2733 "handle_options.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__TargetStr_10, &libs__handle_options__V_89_89);
              }
#line 2731 "handle_options.m"
              {
#line 2731 "handle_options.m"
                libs__handle_options__SinglePrecFloatMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "single precision floats are incompatible with target language ", libs__handle_options__V_89_89);
              }
#line 2734 "handle_options.m"
              {
#line 2734 "handle_options.m"
                libs__handle_options__add_error_3_p_0(libs__handle_options__SinglePrecFloatMsg_21, libs__handle_options__STATE_VARIABLE_Errors_58_58, libs__handle_options__STATE_VARIABLE_Errors_23);
#line 2734 "handle_options.m"
                return;
              }
#line 2730 "handle_options.m"
            }
#line 2735 "handle_options.m"
            break;
#line 2735 "handle_options.m"
        }
#line 2738 "handle_options.m"
        break;
#line 2738 "handle_options.m"
    }
#line 2578 "handle_options.m"
  }
#line 2574 "handle_options.m"
}

#line 2533 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2533 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2533 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2533 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2533 "handle_options.m"
{
#line 2536 "handle_options.m"
  {
#line 2536 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2536 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2537 "handle_options.m"
    {
#line 2537 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2538 "handle_options.m"
    {
#line 2538 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2539 "handle_options.m"
    {
#line 2539 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2553 "handle_options.m"
#line 2553 "handle_options.m"
    switch (libs__handle_options__WarnSmart_9) {
#line 2553 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2553 "handle_options.m"
      case (MR_Integer) 0:
#line 2554 "handle_options.m"
        {
#line 2554 "handle_options.m"
        }
#line 2553 "handle_options.m"
        break;
#line 2553 "handle_options.m"
      case (MR_Integer) 1:
#line 2541 "handle_options.m"
        {
#line 2541 "handle_options.m"
          MR_Word libs__handle_options__Halt_10;

#line 2542 "handle_options.m"
          {
#line 2542 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          }
#line 2544 "handle_options.m"
          {
#line 2544 "handle_options.m"
            mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
          }
#line 2545 "handle_options.m"
          {
#line 2545 "handle_options.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 2546 "handle_options.m"
          {
#line 2546 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
          }
#line 2550 "handle_options.m"
#line 2550 "handle_options.m"
          switch (libs__handle_options__Halt_10) {
#line 2550 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2550 "handle_options.m"
            case (MR_Integer) 0:
#line 2551 "handle_options.m"
              {
#line 2551 "handle_options.m"
              }
#line 2550 "handle_options.m"
              break;
#line 2550 "handle_options.m"
            case (MR_Integer) 1:
#line 2548 "handle_options.m"
              {
#line 2549 "handle_options.m"
                {
#line 2549 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2549 "handle_options.m"
                  return;
                }
#line 2548 "handle_options.m"
              }
#line 2550 "handle_options.m"
              break;
#line 2550 "handle_options.m"
          }
#line 2541 "handle_options.m"
        }
#line 2553 "handle_options.m"
        break;
#line 2553 "handle_options.m"
    }
#line 2536 "handle_options.m"
  }
#line 2533 "handle_options.m"
}

#line 2518 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2518 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2518 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2518 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2518 "handle_options.m"
{
#line 2522 "handle_options.m"
  {
#line 2522 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2522 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2523 "handle_options.m"
    {
#line 2523 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2525 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2525 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2526 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2529 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2536 "handle_options.m"
      {
#line 2536 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2537 "handle_options.m"
        {
#line 2537 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2538 "handle_options.m"
        {
#line 2538 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2539 "handle_options.m"
        {
#line 2539 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2553 "handle_options.m"
#line 2553 "handle_options.m"
        switch (libs__handle_options__WarnSmart_29) {
#line 2553 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2553 "handle_options.m"
          case (MR_Integer) 0:
#line 2554 "handle_options.m"
            {
#line 2554 "handle_options.m"
            }
#line 2553 "handle_options.m"
            break;
#line 2553 "handle_options.m"
          case (MR_Integer) 1:
#line 2541 "handle_options.m"
            {
#line 2541 "handle_options.m"
              MR_Word libs__handle_options__Halt_30;

#line 2542 "handle_options.m"
              {
#line 2542 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
              }
#line 2544 "handle_options.m"
              {
#line 2544 "handle_options.m"
                mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
              }
#line 2545 "handle_options.m"
              {
#line 2545 "handle_options.m"
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
#line 2546 "handle_options.m"
              {
#line 2546 "handle_options.m"
                libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
              }
#line 2550 "handle_options.m"
#line 2550 "handle_options.m"
              switch (libs__handle_options__Halt_30) {
#line 2550 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2550 "handle_options.m"
                case (MR_Integer) 0:
#line 2551 "handle_options.m"
                  {
#line 2551 "handle_options.m"
                  }
#line 2550 "handle_options.m"
                  break;
#line 2550 "handle_options.m"
                case (MR_Integer) 1:
#line 2548 "handle_options.m"
                  {
#line 2549 "handle_options.m"
                    {
#line 2549 "handle_options.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2549 "handle_options.m"
                      return;
                    }
#line 2548 "handle_options.m"
                  }
#line 2550 "handle_options.m"
                  break;
#line 2550 "handle_options.m"
              }
#line 2541 "handle_options.m"
            }
#line 2553 "handle_options.m"
            break;
#line 2553 "handle_options.m"
        }
#line 2536 "handle_options.m"
      }
#line 2529 "handle_options.m"
    else
#line 2530 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2522 "handle_options.m"
  }
#line 2518 "handle_options.m"
}

#line 2498 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2498 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2498 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2498 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2498 "handle_options.m"
{
#line 2502 "handle_options.m"
  {
#line 2502 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2502 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2502 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2503 "handle_options.m"
    {
#line 2503 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2504 "handle_options.m"
    {
#line 2504 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2506 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2506 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2506 "handle_options.m"
      {
#line 2507 "handle_options.m"
        {
#line 2507 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2507 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2506 "handle_options.m"
      }
#line 2510 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 657 "handle_options.m"
      {
#line 657 "handle_options.m"
        {
#line 657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Errors_17 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_16, ((MR_Box) (libs__handle_options__ErrorMessage_11)));
        }
#line 657 "handle_options.m"
      }
#line 2510 "handle_options.m"
    else
#line 2510 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2502 "handle_options.m"
  }
#line 2498 "handle_options.m"
}

#line 2480 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2480 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2480 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2480 "handle_options.m"
{
#line 2484 "handle_options.m"
  {
#line 2484 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2484 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2485 "handle_options.m"
    {
#line 2485 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2488 "handle_options.m"
#line 2488 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2488 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2488 "handle_options.m"
      case (MR_Integer) 0:
#line 2490 "handle_options.m"
        {
#line 2490 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2490 "handle_options.m"
          return;
        }
#line 2488 "handle_options.m"
        break;
#line 2488 "handle_options.m"
      case (MR_Integer) 1:
#line 2487 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2488 "handle_options.m"
        break;
#line 2488 "handle_options.m"
    }
#line 2484 "handle_options.m"
  }
#line 2480 "handle_options.m"
}

#line 2464 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2464 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2464 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2464 "handle_options.m"
{
#line 2467 "handle_options.m"
  {
#line 2467 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2467 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2472 "handle_options.m"
#line 2472 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_10) {
#line 2472 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2472 "handle_options.m"
      case (MR_Integer) 0:
#line 2473 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
      case (MR_Integer) 1:
#line 2471 "handle_options.m"
        {
#line 2471 "handle_options.m"
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2471 "handle_options.m"
          return;
        }
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
    }
#line 2467 "handle_options.m"
  }
#line 2464 "handle_options.m"
}

#line 2384 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2384 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2384 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2384 "handle_options.m"
{
#line 2386 "handle_options.m"
  {
#line 2386 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2386 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2386 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2406 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 373, &libs__handle_options__SourceOptionValue_57);
    }
#line 2472 "handle_options.m"
#line 2472 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_57) {
#line 2472 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2472 "handle_options.m"
      case (MR_Integer) 0:
#line 2473 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
      case (MR_Integer) 1:
#line 2471 "handle_options.m"
        {
#line 2471 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 471, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
        }
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
    }
#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 477, &libs__handle_options__SourceOptionValue_65);
    }
#line 2472 "handle_options.m"
#line 2472 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_65) {
#line 2472 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2472 "handle_options.m"
      case (MR_Integer) 0:
#line 2473 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
      case (MR_Integer) 1:
#line 2471 "handle_options.m"
        {
#line 2471 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 474, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
        }
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
    }
#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 477, &libs__handle_options__SourceOptionValue_73);
    }
#line 2472 "handle_options.m"
#line 2472 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_73) {
#line 2472 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2472 "handle_options.m"
      case (MR_Integer) 0:
#line 2473 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
      case (MR_Integer) 1:
#line 2471 "handle_options.m"
        {
#line 2471 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 467, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
        }
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
    }
#line 2468 "handle_options.m"
    {
#line 2468 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 476, &libs__handle_options__SourceOptionValue_81);
    }
#line 2472 "handle_options.m"
#line 2472 "handle_options.m"
    switch (libs__handle_options__SourceOptionValue_81) {
#line 2472 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2472 "handle_options.m"
      case (MR_Integer) 0:
#line 2473 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
      case (MR_Integer) 1:
#line 2471 "handle_options.m"
        {
#line 2471 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 304, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
        }
#line 2472 "handle_options.m"
        break;
#line 2472 "handle_options.m"
    }
#line 2400 "handle_options.m"
    {
#line 2400 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 477, &libs__handle_options__OptFrames_4);
    }
#line 2401 "handle_options.m"
    {
#line 2401 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 471, &libs__handle_options__OptLocalVars_5);
    }
#line 2402 "handle_options.m"
    {
#line 2402 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 480, &libs__handle_options__OptRepeat_6);
    }
#line 2404 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2405 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2405 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2406 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2406 "handle_options.m"
      {
#line 2407 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2407 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2406 "handle_options.m"
      }
#line 2414 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2413 "handle_options.m"
      {
#line 2413 "handle_options.m"
        {
#line 2413 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 480, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[14]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2413 "handle_options.m"
      }
#line 2414 "handle_options.m"
    else
#line 2414 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2420 "handle_options.m"
    {
#line 2420 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 244, &libs__handle_options__UnboxedFloat_7);
    }
#line 2426 "handle_options.m"
#line 2426 "handle_options.m"
    switch (libs__handle_options__UnboxedFloat_7) {
#line 2426 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2426 "handle_options.m"
      case (MR_Integer) 0:
#line 2435 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2426 "handle_options.m"
        break;
#line 2426 "handle_options.m"
      case (MR_Integer) 1:
#line 2425 "handle_options.m"
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2426 "handle_options.m"
        break;
#line 2426 "handle_options.m"
    }
#line 2437 "handle_options.m"
    {
#line 2437 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2437 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2437 "handle_options.m"
    }
#line 2437 "handle_options.m"
    {
#line 2437 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 452, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2442 "handle_options.m"
    {
#line 2442 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 250, &libs__handle_options__NonLocalGotos_9);
    }
#line 2443 "handle_options.m"
    {
#line 2443 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 252, &libs__handle_options__AsmLabels_10);
    }
#line 2445 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2445 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2446 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2454 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2453 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2454 "handle_options.m"
    else
#line 2455 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2457 "handle_options.m"
    {
#line 2457 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2457 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2457 "handle_options.m"
    }
#line 2457 "handle_options.m"
    {
#line 2457 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 453, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2457 "handle_options.m"
      return;
    }
#line 2386 "handle_options.m"
  }
#line 2384 "handle_options.m"
}

#line 2243 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2243 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2243 "handle_options.m"
{
#line 2243 "handle_options.m"
  {
#line 2243 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2243 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2243 "handle_options.m"
    MR_String libs__handle_options__conv10_HeadVar__3_1536;

#line 2243 "handle_options.m"
    {
#line 2243 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1536 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2243__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2243 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1536));
#line 2243 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2243 "handle_options.m"
  }
#line 2243 "handle_options.m"
}

#line 2241 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
#line 2241 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2241 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2241 "handle_options.m"
{
#line 2241 "handle_options.m"
  {
#line 2241 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2241 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2241 "handle_options.m"
    MR_String libs__handle_options__conv9_HeadVar__3_1530;

#line 2241 "handle_options.m"
    {
#line 2241 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1530 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2241__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2241 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1530));
#line 2241 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2241 "handle_options.m"
  }
#line 2241 "handle_options.m"
}

#line 2250 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
#line 2250 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2250 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2250 "handle_options.m"
{
#line 2250 "handle_options.m"
  {
#line 2250 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2250 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2250 "handle_options.m"
    MR_String libs__handle_options__conv8_HeadVar__2_1525;

#line 2250 "handle_options.m"
    {
#line 2250 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1525 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2250__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2250 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1525));
#line 2250 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2250 "handle_options.m"
  }
#line 2250 "handle_options.m"
}

#line 2249 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
#line 2249 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2249 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2249 "handle_options.m"
{
#line 2249 "handle_options.m"
  {
#line 2249 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2249 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2249 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1520;

#line 2249 "handle_options.m"
    {
#line 2249 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1520 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2249__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2249 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1520));
#line 2249 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2249 "handle_options.m"
  }
#line 2249 "handle_options.m"
}

#line 2219 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2219 "handle_options.m"
{
#line 2219 "handle_options.m"
  {
#line 2219 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2219 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1507;

#line 2219 "handle_options.m"
    {
#line 2219 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1507 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2219 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1507));
#line 2219 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2219 "handle_options.m"
  }
#line 2219 "handle_options.m"
}

#line 2215 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
#line 2215 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2215 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2215 "handle_options.m"
{
#line 2215 "handle_options.m"
  {
#line 2215 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2215 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2215 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1501;

#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1501 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2215__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2215 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1501));
#line 2215 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2215 "handle_options.m"
  }
#line 2215 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2197 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2197 "handle_options.m"
    {
#line 2197 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2197 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2197 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2197 "handle_options.m"
    {
#line 2197 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2197__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2197 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2179 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
#line 2179 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2179 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2179 "handle_options.m"
{
#line 2179 "handle_options.m"
  {
#line 2179 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2179 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2179 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1482;

#line 2179 "handle_options.m"
    {
#line 2179 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1482 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2179__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2179 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1482));
#line 2179 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2179 "handle_options.m"
  }
#line 2179 "handle_options.m"
}

#line 2143 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
#line 2143 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2143 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2143 "handle_options.m"
{
#line 2143 "handle_options.m"
  {
#line 2143 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2143 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2143 "handle_options.m"
    MR_String libs__handle_options__conv3_HeadVar__3_1463;

#line 2143 "handle_options.m"
    {
#line 2143 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1463 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2143__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2143 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1463));
#line 2143 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2143 "handle_options.m"
  }
#line 2143 "handle_options.m"
}

#line 2133 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
#line 2133 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2133 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2133 "handle_options.m"
{
#line 2133 "handle_options.m"
  {
#line 2133 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2133 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2133 "handle_options.m"
    MR_String libs__handle_options__conv2_HeadVar__3_1453;

#line 2133 "handle_options.m"
    {
#line 2133 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1453 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2133__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2133 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1453));
#line 2133 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2133 "handle_options.m"
  }
#line 2133 "handle_options.m"
}

#line 2120 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2120 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2120 "handle_options.m"
{
#line 2120 "handle_options.m"
  {
#line 2120 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2120 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2120 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1436;

#line 2120 "handle_options.m"
    {
#line 2120 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1436 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2120 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1436));
#line 2120 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2120 "handle_options.m"
  }
#line 2120 "handle_options.m"
}

#line 2105 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2105 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2105 "handle_options.m"
{
#line 2105 "handle_options.m"
  {
#line 2105 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2105 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2105 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__3_1421;

#line 2105 "handle_options.m"
    {
#line 2105 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1421 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2105__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2105 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1421));
#line 2105 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2105 "handle_options.m"
  }
#line 2105 "handle_options.m"
}

#line 661 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
#line 661 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_25,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__Target_26,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_27,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_28,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_29,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_30,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_31,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_32,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_33,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_34,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_35,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_36,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_37,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_38,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_40,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_41,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_42,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
#line 661 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_189,
#line 661 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_190,
#line 661 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_191)
#line 661 "handle_options.m"
{
#line 676 "handle_options.m"
  {
#line 676 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1643_1643 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 676 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_47;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_48;
#line 676 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_50;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_53;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_54;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_55;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_57;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_58;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_59;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__Parallel_60;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_61;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_62;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ILFuncPtrTypes_64;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ILRefAnyFields_65;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_66;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_69;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_72;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_73;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_74;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_75;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__Smart_77;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_78;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__Statistics_79;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_80;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_84;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_85;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_88;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_89;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_94;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_95;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_101;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_102;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_103;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_104;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_105;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_110;
#line 676 "handle_options.m"
    MR_String libs__handle_options__ExpComp_111;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_112;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_113;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_116;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_117;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_118;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_119;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_120;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_121;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_122;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_123;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_124;
#line 676 "handle_options.m"
    MR_String libs__handle_options__TargetArch_129;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_130;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_135;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_138;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_140;
#line 676 "handle_options.m"
    MR_String libs__handle_options__GradeString_141;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_155;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_158;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_159;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_160;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_161;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_170;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_173;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_174;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_184;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_185;
#line 676 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_188;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_203_203;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_211_211;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_232_232;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_251_251;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_253_253;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_267_267;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_271_271;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_274_274;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_275_275;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_334_334;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_341_341;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_461_461;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_466_466;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_471_471;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_475_475;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_476_476;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_481_481;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_485_485;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_486_486;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_491_491;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_496_496;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_501_501;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_506_506;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_511_511;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_516_516;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_525_525;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_530_530;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_535_535;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_540_540;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_545_545;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_550_550;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_555_555;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_562_562;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_568_568;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_573_573;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_578_578;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_584_584;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_589_589;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_594_594;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_599_599;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_604_604;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_609_609;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_614_614;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_619_619;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_624_624;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_629_629;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_639_639;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_643_643;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_648_648;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_653_653;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_658_658;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_663_663;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_668_668;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_673_673;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_678_678;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_683_683;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_688_688;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_693_693;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_698_698;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_703_703;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_708_708;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_713_713;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_718_718;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_723_723;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_728_728;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_733_733;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_738_738;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_743_743;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_748_748;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_753_753;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_758_758;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_764_764;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_769_769;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_774_774;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_779_779;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_784_784;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_789_789;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_795_795;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_800_800;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_805_805;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_810_810;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_818_818;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_822_822;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_833_833;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_851_851;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_855_855;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_860_860;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_865_865;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_870_870;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_877_877;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_890_890;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_891_891;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_914_914;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_918_918;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_923_923;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_928_928;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_932_932;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_936_936;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_941_941;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_951_951;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_956_956;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_962_962;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_967_967;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_972_972;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_977_977;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_982_982;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_987_987;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_992_992;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_997_997;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1002_1002;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1007_1007;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1012_1012;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1017_1017;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1022_1022;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1117_1117;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1126_1126;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1130_1130;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1143_1143;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1148_1148;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1157_1157;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1165_1165;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1169_1169;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1174_1174;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1179_1179;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1184_1184;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1189_1189;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1194_1194;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1199_1199;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1248_1248;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1258_1258;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1263_1263;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1268_1268;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1273_1273;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1278_1278;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1283_1283;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1288_1288;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1293_1293;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1298_1298;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1303_1303;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1309_1309;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1313_1313;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1321_1321;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1326_1326;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1331_1331;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1336_1336;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1341_1341;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1346_1346;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1351_1351;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1356_1356;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1361_1361;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1366_1366;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1371_1371;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1376_1376;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1400_1400;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1412_1412;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1469_1469;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1476_1476;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1497_1497;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_1513_1513;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1514_1514;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__V_1516_1516;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1517_1517;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1553_1553;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1557_1557;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1569_1569;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1577_1577;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1601_1601;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1608_1608;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1617_1617;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1622_1622;
#line 676 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1628_1628;
#line 718 "handle_options.m"
    MR_Word libs__handle_options__V_204_204;
#line 1183 "handle_options.m"
    MR_String libs__handle_options__V_76_76;
#line 1345 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_81;
#line 1333 "handle_options.m"
    MR_String libs__handle_options__V_814_814;
#line 1596 "handle_options.m"
    MR_Word libs__handle_options__V_1025_1025;
#line 2084 "handle_options.m"
    MR_String libs__handle_options__V_1405_1405;
#line 2272 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_175;
#line 2272 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_176;
#line 2353 "handle_options.m"
    MR_Integer libs__handle_options__V_1619_1619;

#line 678 "handle_options.m"
    {
#line 678 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 636)), &libs__handle_options__InstallCmd_47);
    }
#line 679 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_47, (MR_String) "") == 0);
#line 681 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 680 "handle_options.m"
      libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "handle_options.m"
    else
#line 683 "handle_options.m"
      {
#line 683 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_49;

#line 682 "handle_options.m"
        {
#line 682 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1643_1643, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 637)), &libs__handle_options__InstallCmdDirOption_49);
        }
#line 684 "handle_options.m"
        {
#line 684 "handle_options.m"
          libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 0) = ((MR_Box) (libs__handle_options__InstallCmd_47));
#line 684 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_49));
#line 684 "handle_options.m"
        }
#line 683 "handle_options.m"
      }
#line 688 "handle_options.m"
    {
#line 688 "handle_options.m"
      libs__globals__globals_init_21_p_0(libs__handle_options__OptionTable0_25, libs__handle_options__Target_26, libs__handle_options__GC_Method_27, libs__handle_options__TagsMethod0_28, libs__handle_options__TermNorm_29, libs__handle_options__Term2Norm_30, libs__handle_options__TraceLevel_31, libs__handle_options__TraceSuppress_32, libs__handle_options__SSTraceLevel_33, libs__handle_options__MaybeThreadSafe_34, libs__handle_options__C_CompilerType_35, libs__handle_options__CSharp_CompilerType_36, libs__handle_options__ReuseStrategy_37, libs__handle_options__MaybeILVersion_38, libs__handle_options__MaybeFeedbackInfo_39, libs__handle_options__HostEnvType_40, libs__handle_options__SystemEnvType_41, libs__handle_options__TargetEnvType_42, libs__handle_options__FileInstallCmd_48, libs__handle_options__LimitErrorContextsMap_43, &libs__handle_options__STATE_VARIABLE_Globals_196_196);
    }
#line 698 "handle_options.m"
    {
#line 698 "handle_options.m"
      libs__handle_options__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_196_196, libs__handle_options__Target_26, libs__handle_options__GC_Method_27, libs__handle_options__STATE_VARIABLE_Errors_0_189, &libs__handle_options__STATE_VARIABLE_Errors_197_197);
    }
#line 701 "handle_options.m"
    {
#line 701 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_196_196, (MR_Integer) 175, &libs__handle_options__EventSetFileName0_50);
    }
#line 703 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
#line 713 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 705 "handle_options.m"
      {
#line 705 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

#line 704 "handle_options.m"
        {
#line 704 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
#line 710 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_203_203 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 710 "handle_options.m"
        else
#line 707 "handle_options.m"
          {
#line 707 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
#line 707 "handle_options.m"
            MR_Word libs__handle_options__V_202_202;

#line 709 "handle_options.m"
            {
#line 709 "handle_options.m"
              libs__handle_options__V_202_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_202_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 709 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_202_202, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
#line 709 "handle_options.m"
            }
#line 708 "handle_options.m"
            {
#line 708 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 175, libs__handle_options__V_202_202, libs__handle_options__STATE_VARIABLE_Globals_196_196, &libs__handle_options__STATE_VARIABLE_Globals_203_203);
            }
#line 707 "handle_options.m"
          }
#line 705 "handle_options.m"
      }
#line 713 "handle_options.m"
    else
#line 714 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_203_203 = libs__handle_options__STATE_VARIABLE_Globals_196_196;
#line 718 "handle_options.m"
    {
#line 718 "handle_options.m"
      libs__handle_options__V_204_204 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_27);
    }
#line 718 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_204_204 == (MR_Integer) 1);
#line 723 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 720 "handle_options.m"
      {
#line 720 "handle_options.m"
        MR_Word libs__handle_options__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 720 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_207_207;

#line 719 "handle_options.m"
        {
#line 719 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_206_206, libs__handle_options__STATE_VARIABLE_Globals_203_203, &libs__handle_options__STATE_VARIABLE_Globals_207_207);
        }
#line 721 "handle_options.m"
        {
#line 721 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 310, libs__handle_options__V_206_206, libs__handle_options__STATE_VARIABLE_Globals_207_207, &libs__handle_options__STATE_VARIABLE_Globals_211_211);
        }
#line 720 "handle_options.m"
      }
#line 723 "handle_options.m"
    else
#line 723 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_211_211 = libs__handle_options__STATE_VARIABLE_Globals_203_203;
#line 729 "handle_options.m"
    {
#line 729 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_211_211, (MR_Integer) 224, &libs__handle_options__PregeneratedDist_53);
    }
#line 737 "handle_options.m"
#line 737 "handle_options.m"
    switch (libs__handle_options__PregeneratedDist_53) {
#line 737 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 737 "handle_options.m"
      case (MR_Integer) 0:
#line 738 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_232_232 = libs__handle_options__STATE_VARIABLE_Globals_211_211;
#line 737 "handle_options.m"
        break;
#line 737 "handle_options.m"
      case (MR_Integer) 1:
#line 731 "handle_options.m"
        {
#line 731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_216_216;
#line 731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_220_220;
#line 731 "handle_options.m"
          MR_Word libs__handle_options__V_223_223;
#line 731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_224_224;
#line 731 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_228_228;

#line 732 "handle_options.m"
          {
#line 732 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 238, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), libs__handle_options__STATE_VARIABLE_Globals_211_211, &libs__handle_options__STATE_VARIABLE_Globals_216_216);
          }
#line 733 "handle_options.m"
          {
#line 733 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), libs__handle_options__STATE_VARIABLE_Globals_216_216, &libs__handle_options__STATE_VARIABLE_Globals_220_220);
          }
#line 734 "handle_options.m"
          libs__handle_options__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 734 "handle_options.m"
          {
#line 734 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_223_223, libs__handle_options__STATE_VARIABLE_Globals_220_220, &libs__handle_options__STATE_VARIABLE_Globals_224_224);
          }
#line 735 "handle_options.m"
          {
#line 735 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 225, libs__handle_options__V_223_223, libs__handle_options__STATE_VARIABLE_Globals_224_224, &libs__handle_options__STATE_VARIABLE_Globals_228_228);
          }
#line 736 "handle_options.m"
          {
#line 736 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_223_223, libs__handle_options__STATE_VARIABLE_Globals_228_228, &libs__handle_options__STATE_VARIABLE_Globals_232_232);
          }
#line 731 "handle_options.m"
        }
#line 737 "handle_options.m"
        break;
#line 737 "handle_options.m"
    }
#line 745 "handle_options.m"
#line 745 "handle_options.m"
    switch (libs__handle_options__TagsMethod0_28) {
#line 745 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 745 "handle_options.m"
      case (MR_Integer) 2:
#line 745 "handle_options.m"
      case (MR_Integer) 1:
#line 748 "handle_options.m"
        {
#line 749 "handle_options.m"
          {
#line 749 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_232_232, (MR_Integer) 238, &libs__handle_options__NumTagBits0_54);
          }
#line 748 "handle_options.m"
        }
#line 745 "handle_options.m"
        break;
#line 745 "handle_options.m"
      case (MR_Integer) 0:
#line 744 "handle_options.m"
        libs__handle_options__NumTagBits0_54 = (MR_Integer) 0;
#line 745 "handle_options.m"
        break;
#line 745 "handle_options.m"
    }
#line 757 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_28 == (MR_Integer) 1);
#line 757 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 758 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_54 == (MR_Integer) -1);
#line 762 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 760 "handle_options.m"
      {
#line 760 "handle_options.m"
        {
#line 760 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_232_232, (MR_Integer) 243, &libs__handle_options__NumTagBits1_55);
        }
#line 760 "handle_options.m"
      }
#line 762 "handle_options.m"
    else
#line 763 "handle_options.m"
      libs__handle_options__NumTagBits1_55 = libs__handle_options__NumTagBits0_54;
#line 768 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_55 < (MR_Integer) 0);
#line 776 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 769 "handle_options.m"
      {
#line 769 "handle_options.m"
        MR_String libs__handle_options__ProgName_56;
#line 769 "handle_options.m"
        MR_String libs__handle_options__V_1656_1656;
#line 769 "handle_options.m"
        MR_Word libs__handle_options__V_1662_1662;
#line 769 "handle_options.m"
        MR_String libs__handle_options__V_1665_1665;

#line 769 "handle_options.m"
        {
#line 769 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_56);
        }
#line 10688 "libs.handle_options.c"
        libs__handle_options__V_1662_1662 = (MR_Word) &libs__handle_options_scalar_common_3[9];
#line 771 "handle_options.m"
        {
#line 771 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1662_1662, libs__handle_options__ProgName_56, &libs__handle_options__V_1656_1656);
        }
#line 771 "handle_options.m"
        {
#line 771 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1656_1656);
        }
#line 770 "handle_options.m"
        {
#line 770 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 773 "handle_options.m"
        {
#line 773 "handle_options.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__handle_options__V_1662_1662, libs__handle_options__ProgName_56, &libs__handle_options__V_1665_1665);
        }
#line 773 "handle_options.m"
        {
#line 773 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1665_1665);
        }
#line 772 "handle_options.m"
        {
#line 772 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 774 "handle_options.m"
        {
#line 774 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_232_232);
        }
#line 775 "handle_options.m"
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
#line 769 "handle_options.m"
      }
#line 776 "handle_options.m"
    else
#line 777 "handle_options.m"
      libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_55;
#line 780 "handle_options.m"
    {
#line 780 "handle_options.m"
      libs__handle_options__V_251_251 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_251_251, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
#line 780 "handle_options.m"
    }
#line 780 "handle_options.m"
    {
#line 780 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 238, libs__handle_options__V_251_251, libs__handle_options__STATE_VARIABLE_Globals_232_232, &libs__handle_options__STATE_VARIABLE_Globals_252_252);
    }
#line 781 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
#line 784 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 782 "handle_options.m"
      {
#line 782 "handle_options.m"
        libs__handle_options__TagsMethod_58 = (MR_Integer) 0;
#line 783 "handle_options.m"
        {
#line 783 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_58, libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__STATE_VARIABLE_Globals_253_253);
        }
#line 782 "handle_options.m"
      }
#line 784 "handle_options.m"
    else
#line 785 "handle_options.m"
      {
#line 785 "handle_options.m"
        libs__handle_options__TagsMethod_58 = libs__handle_options__TagsMethod0_28;
#line 785 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_253_253 = libs__handle_options__STATE_VARIABLE_Globals_252_252;
#line 785 "handle_options.m"
      }
#line 788 "handle_options.m"
    {
#line 788 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_253_253, &libs__handle_options__GradeSupportsParConj_59);
    }
#line 789 "handle_options.m"
    {
#line 789 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_253_253, (MR_Integer) 217, &libs__handle_options__Parallel_60);
    }
#line 790 "handle_options.m"
    {
#line 790 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_253_253, (MR_Integer) 218, &libs__handle_options__Threadscope_61);
    }
#line 792 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_59 == (MR_Integer) 0);
#line 792 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 793 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_61 == (MR_Integer) 1);
#line 797 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 795 "handle_options.m"
      {
#line 795 "handle_options.m"
        {
#line 795 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_197_197, &libs__handle_options__STATE_VARIABLE_Errors_257_257);
        }
#line 795 "handle_options.m"
      }
#line 797 "handle_options.m"
    else
#line 797 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_257_257 = libs__handle_options__STATE_VARIABLE_Errors_197_197;
#line 804 "handle_options.m"
    {
#line 804 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_253_253, (MR_Integer) 675, &libs__handle_options__ImplicitParallelism_62);
    }
#line 838 "handle_options.m"
#line 838 "handle_options.m"
    switch (libs__handle_options__ImplicitParallelism_62) {
#line 838 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 838 "handle_options.m"
      case (MR_Integer) 0:
#line 839 "handle_options.m"
        {
#line 839 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_271_271 = libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 839 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_267_267 = libs__handle_options__STATE_VARIABLE_Globals_253_253;
#line 839 "handle_options.m"
        }
#line 838 "handle_options.m"
        break;
#line 838 "handle_options.m"
      case (MR_Integer) 1:
#line 821 "handle_options.m"
#line 821 "handle_options.m"
        switch (libs__handle_options__GradeSupportsParConj_59) {
#line 821 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 821 "handle_options.m"
          case (MR_Integer) 0:
#line 825 "handle_options.m"
            {
#line 833 "handle_options.m"
#line 833 "handle_options.m"
              switch (libs__handle_options__Parallel_60) {
#line 833 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 833 "handle_options.m"
                case (MR_Integer) 0:
#line 834 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Errors_271_271 = libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 833 "handle_options.m"
                  break;
#line 833 "handle_options.m"
                case (MR_Integer) 1:
#line 827 "handle_options.m"
                  {
#line 828 "handle_options.m"
                    {
#line 828 "handle_options.m"
                      libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_257_257, &libs__handle_options__STATE_VARIABLE_Errors_271_271);
                    }
#line 827 "handle_options.m"
                  }
#line 833 "handle_options.m"
                  break;
#line 833 "handle_options.m"
              }
#line 836 "handle_options.m"
              {
#line 836 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 675, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_253_253, &libs__handle_options__STATE_VARIABLE_Globals_267_267);
              }
#line 825 "handle_options.m"
            }
#line 821 "handle_options.m"
            break;
#line 821 "handle_options.m"
          case (MR_Integer) 1:
#line 809 "handle_options.m"
            {
#line 809 "handle_options.m"
              MR_String libs__handle_options__FeedbackFile_63;

#line 810 "handle_options.m"
              {
#line 810 "handle_options.m"
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_253_253, (MR_Integer) 676, &libs__handle_options__FeedbackFile_63);
              }
#line 813 "handle_options.m"
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_63, (MR_String) "") == 0);
#line 818 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 815 "handle_options.m"
                {
#line 815 "handle_options.m"
                  {
#line 815 "handle_options.m"
                    libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_257_257, &libs__handle_options__STATE_VARIABLE_Errors_271_271);
                  }
#line 815 "handle_options.m"
                }
#line 818 "handle_options.m"
              else
#line 818 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Errors_271_271 = libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 809 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_267_267 = libs__handle_options__STATE_VARIABLE_Globals_253_253;
#line 809 "handle_options.m"
            }
#line 821 "handle_options.m"
            break;
#line 821 "handle_options.m"
        }
#line 838 "handle_options.m"
        break;
#line 838 "handle_options.m"
    }
#line 844 "handle_options.m"
    libs__handle_options__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 843 "handle_options.m"
    {
#line 843 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 675, (MR_Integer) 199, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_267_267, &libs__handle_options__STATE_VARIABLE_Globals_275_275);
    }
#line 849 "handle_options.m"
#line 849 "handle_options.m"
    switch (libs__handle_options__GradeSupportsParConj_59) {
#line 849 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 849 "handle_options.m"
      case (MR_Integer) 0:
#line 850 "handle_options.m"
        {
#line 851 "handle_options.m"
          {
#line 851 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 677, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_275_275, &libs__handle_options__STATE_VARIABLE_Globals_279_279);
          }
#line 850 "handle_options.m"
        }
#line 849 "handle_options.m"
        break;
#line 849 "handle_options.m"
      case (MR_Integer) 1:
#line 848 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_279_279 = libs__handle_options__STATE_VARIABLE_Globals_275_275;
#line 849 "handle_options.m"
        break;
#line 849 "handle_options.m"
    }
#line 921 "handle_options.m"
#line 921 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 921 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 921 "handle_options.m"
      case (MR_Integer) 0:
#line 922 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_334_334 = libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 921 "handle_options.m"
        break;
#line 921 "handle_options.m"
      case (MR_Integer) 2:
#line 923 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_334_334 = libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 921 "handle_options.m"
        break;
#line 921 "handle_options.m"
      case (MR_Integer) 4:
#line 925 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_334_334 = libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 921 "handle_options.m"
        break;
#line 921 "handle_options.m"
      case (MR_Integer) 1:
#line 896 "handle_options.m"
        {
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_282_282;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_285_285;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__V_288_288;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_289_289;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_293_293;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_297_297;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_301_301;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_305_305;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_309_309;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_313_313;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_317_317;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_321_321;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_325_325;
#line 896 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_329_329;
#line 916 "handle_options.m"
          MR_Word libs__handle_options__V_331_331;

#line 897 "handle_options.m"
          {
#line 897 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_279_279, &libs__handle_options__STATE_VARIABLE_Globals_282_282);
          }
#line 898 "handle_options.m"
          {
#line 898 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 216, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_282_282, &libs__handle_options__STATE_VARIABLE_Globals_285_285);
          }
#line 899 "handle_options.m"
          libs__handle_options__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 899 "handle_options.m"
          {
#line 899 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 310, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_285_285, &libs__handle_options__STATE_VARIABLE_Globals_289_289);
          }
#line 901 "handle_options.m"
          {
#line 901 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_289_289, &libs__handle_options__STATE_VARIABLE_Globals_293_293);
          }
#line 903 "handle_options.m"
          {
#line 903 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_293_293, &libs__handle_options__STATE_VARIABLE_Globals_297_297);
          }
#line 904 "handle_options.m"
          {
#line 904 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_297_297, &libs__handle_options__STATE_VARIABLE_Globals_301_301);
          }
#line 905 "handle_options.m"
          {
#line 905 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_301_301, &libs__handle_options__STATE_VARIABLE_Globals_305_305);
          }
#line 906 "handle_options.m"
          {
#line 906 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 259, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_305_305, &libs__handle_options__STATE_VARIABLE_Globals_309_309);
          }
#line 907 "handle_options.m"
          {
#line 907 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 238, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_309_309, &libs__handle_options__STATE_VARIABLE_Globals_313_313);
          }
#line 908 "handle_options.m"
          {
#line 908 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_313_313, &libs__handle_options__STATE_VARIABLE_Globals_317_317);
          }
#line 909 "handle_options.m"
          {
#line 909 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_317_317, &libs__handle_options__STATE_VARIABLE_Globals_321_321);
          }
#line 911 "handle_options.m"
          {
#line 911 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_321_321, &libs__handle_options__STATE_VARIABLE_Globals_325_325);
          }
#line 912 "handle_options.m"
          {
#line 912 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 652, libs__handle_options__V_288_288, libs__handle_options__STATE_VARIABLE_Globals_325_325, &libs__handle_options__STATE_VARIABLE_Globals_329_329);
          }
#line 916 "handle_options.m"
          {
#line 916 "handle_options.m"
            libs__handle_options__V_331_331 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
          }
#line 916 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__V_331_331 == (MR_Integer) 0);
#line 918 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 917 "handle_options.m"
            {
#line 917 "handle_options.m"
              {
#line 917 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_329_329, &libs__handle_options__STATE_VARIABLE_Globals_334_334);
              }
#line 917 "handle_options.m"
            }
#line 918 "handle_options.m"
          else
#line 918 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_334_334 = libs__handle_options__STATE_VARIABLE_Globals_329_329;
#line 896 "handle_options.m"
        }
#line 921 "handle_options.m"
        break;
#line 921 "handle_options.m"
      case (MR_Integer) 3:
#line 924 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_334_334 = libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 921 "handle_options.m"
        break;
#line 921 "handle_options.m"
    }
#line 932 "handle_options.m"
    {
#line 932 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_334_334, (MR_Integer) 264, &libs__handle_options__ILFuncPtrTypes_64);
    }
#line 934 "handle_options.m"
    {
#line 934 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_334_334, (MR_Integer) 263, &libs__handle_options__ILRefAnyFields_65);
    }
#line 937 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__ILFuncPtrTypes_64 == (MR_Integer) 1);
#line 937 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 938 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__ILRefAnyFields_65 == (MR_Integer) 1);
#line 941 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 941 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_341_341 = libs__handle_options__STATE_VARIABLE_Globals_334_334;
#line 941 "handle_options.m"
    else
#line 942 "handle_options.m"
      {
#line 942 "handle_options.m"
        {
#line 942 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 261, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_334_334, &libs__handle_options__STATE_VARIABLE_Globals_341_341);
        }
#line 942 "handle_options.m"
      }
#line 11139 "libs.handle_options.c"
#line 11140 "libs.handle_options.c"
    switch (libs__handle_options__Target_26) {
#line 11142 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 11144 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 1055 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_461_461 = libs__handle_options__STATE_VARIABLE_Globals_341_341;
#line 11148 "libs.handle_options.c"
        break;
#line 11150 "libs.handle_options.c"
      case (MR_Integer) 2:
#line 11152 "libs.handle_options.c"
      case (MR_Integer) 3:
#line 11154 "libs.handle_options.c"
        {
#line 11156 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_344_344;
#line 11158 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_347_347;
#line 11160 "libs.handle_options.c"
          MR_Word libs__handle_options__V_350_350;
#line 11162 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_351_351;
#line 11164 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_355_355;
#line 11166 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_359_359;
#line 11168 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_363_363;
#line 11170 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_367_367;
#line 11172 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_371_371;
#line 11174 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_375_375;
#line 11176 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_379_379;
#line 11178 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_383_383;
#line 11180 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_387_387;
#line 11182 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_391_391;
#line 11184 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_395_395;
#line 11186 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_399_399;

#line 983 "handle_options.m"
          {
#line 983 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_341_341, &libs__handle_options__STATE_VARIABLE_Globals_344_344);
          }
#line 984 "handle_options.m"
          {
#line 984 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 216, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_344_344, &libs__handle_options__STATE_VARIABLE_Globals_347_347);
          }
#line 985 "handle_options.m"
          libs__handle_options__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 985 "handle_options.m"
          {
#line 985 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 310, libs__handle_options__V_350_350, libs__handle_options__STATE_VARIABLE_Globals_347_347, &libs__handle_options__STATE_VARIABLE_Globals_351_351);
          }
#line 987 "handle_options.m"
          {
#line 987 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_350_350, libs__handle_options__STATE_VARIABLE_Globals_351_351, &libs__handle_options__STATE_VARIABLE_Globals_355_355);
          }
#line 989 "handle_options.m"
          {
#line 989 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_355_355, &libs__handle_options__STATE_VARIABLE_Globals_359_359);
          }
#line 990 "handle_options.m"
          {
#line 990 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_359_359, &libs__handle_options__STATE_VARIABLE_Globals_363_363);
          }
#line 991 "handle_options.m"
          {
#line 991 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_363_363, &libs__handle_options__STATE_VARIABLE_Globals_367_367);
          }
#line 992 "handle_options.m"
          {
#line 992 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_350_350, libs__handle_options__STATE_VARIABLE_Globals_367_367, &libs__handle_options__STATE_VARIABLE_Globals_371_371);
          }
#line 993 "handle_options.m"
          {
#line 993 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 259, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_371_371, &libs__handle_options__STATE_VARIABLE_Globals_375_375);
          }
#line 994 "handle_options.m"
          {
#line 994 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_375_375, &libs__handle_options__STATE_VARIABLE_Globals_379_379);
          }
#line 995 "handle_options.m"
          {
#line 995 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 238, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_379_379, &libs__handle_options__STATE_VARIABLE_Globals_383_383);
          }
#line 996 "handle_options.m"
          {
#line 996 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_350_350, libs__handle_options__STATE_VARIABLE_Globals_383_383, &libs__handle_options__STATE_VARIABLE_Globals_387_387);
          }
#line 997 "handle_options.m"
          {
#line 997 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_387_387, &libs__handle_options__STATE_VARIABLE_Globals_391_391);
          }
#line 998 "handle_options.m"
          {
#line 998 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 274, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_391_391, &libs__handle_options__STATE_VARIABLE_Globals_395_395);
          }
#line 1000 "handle_options.m"
          {
#line 1000 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 652, libs__handle_options__V_350_350, libs__handle_options__STATE_VARIABLE_Globals_395_395, &libs__handle_options__STATE_VARIABLE_Globals_399_399);
          }
#line 11266 "libs.handle_options.c"
#line 11267 "libs.handle_options.c"
          switch (libs__handle_options__Target_26) {
#line 11269 "libs.handle_options.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 11271 "libs.handle_options.c"
            case (MR_Integer) 2:
#line 11273 "libs.handle_options.c"
              {
#line 1003 "handle_options.m"
                {
#line 1003 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 577, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[197]), libs__handle_options__STATE_VARIABLE_Globals_399_399, &libs__handle_options__STATE_VARIABLE_Globals_461_461);
                }
#line 11280 "libs.handle_options.c"
              }
#line 11282 "libs.handle_options.c"
              break;
#line 11284 "libs.handle_options.c"
            case (MR_Integer) 3:
#line 1057 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_461_461 = libs__handle_options__STATE_VARIABLE_Globals_399_399;
#line 11288 "libs.handle_options.c"
              break;
#line 11290 "libs.handle_options.c"
          }
#line 11292 "libs.handle_options.c"
        }
#line 11294 "libs.handle_options.c"
        break;
#line 11296 "libs.handle_options.c"
      case (MR_Integer) 4:
#line 11298 "libs.handle_options.c"
        {
#line 11300 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_406_406;
#line 11302 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_409_409;
#line 11304 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_413_413;
#line 11306 "libs.handle_options.c"
          MR_Word libs__handle_options__V_416_416;
#line 11308 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_417_417;
#line 11310 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_421_421;
#line 11312 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_425_425;
#line 11314 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_429_429;
#line 11316 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_433_433;
#line 11318 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_437_437;
#line 11320 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_441_441;
#line 11322 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_445_445;
#line 11324 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_449_449;
#line 11326 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_453_453;
#line 11328 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_457_457;

#line 1028 "handle_options.m"
          {
#line 1028 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_341_341, &libs__handle_options__STATE_VARIABLE_Globals_406_406);
          }
#line 1029 "handle_options.m"
          {
#line 1029 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 216, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_406_406, &libs__handle_options__STATE_VARIABLE_Globals_409_409);
          }
#line 1030 "handle_options.m"
          {
#line 1030 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 244, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_409_409, &libs__handle_options__STATE_VARIABLE_Globals_413_413);
          }
#line 1031 "handle_options.m"
          libs__handle_options__V_416_416 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1031 "handle_options.m"
          {
#line 1031 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 310, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_413_413, &libs__handle_options__STATE_VARIABLE_Globals_417_417);
          }
#line 1033 "handle_options.m"
          {
#line 1033 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_417_417, &libs__handle_options__STATE_VARIABLE_Globals_421_421);
          }
#line 1035 "handle_options.m"
          {
#line 1035 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 277, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_421_421, &libs__handle_options__STATE_VARIABLE_Globals_425_425);
          }
#line 1037 "handle_options.m"
          {
#line 1037 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_425_425, &libs__handle_options__STATE_VARIABLE_Globals_429_429);
          }
#line 1039 "handle_options.m"
          {
#line 1039 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 275, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_429_429, &libs__handle_options__STATE_VARIABLE_Globals_433_433);
          }
#line 1041 "handle_options.m"
          {
#line 1041 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 276, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_433_433, &libs__handle_options__STATE_VARIABLE_Globals_437_437);
          }
#line 1043 "handle_options.m"
          {
#line 1043 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 652, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_437_437, &libs__handle_options__STATE_VARIABLE_Globals_441_441);
          }
#line 1049 "handle_options.m"
          {
#line 1049 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_441_441, &libs__handle_options__STATE_VARIABLE_Globals_445_445);
          }
#line 1050 "handle_options.m"
          {
#line 1050 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_445_445, &libs__handle_options__STATE_VARIABLE_Globals_449_449);
          }
#line 1051 "handle_options.m"
          {
#line 1051 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_449_449, &libs__handle_options__STATE_VARIABLE_Globals_453_453);
          }
#line 1052 "handle_options.m"
          {
#line 1052 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_453_453, &libs__handle_options__STATE_VARIABLE_Globals_457_457);
          }
#line 1053 "handle_options.m"
          {
#line 1053 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_416_416, libs__handle_options__STATE_VARIABLE_Globals_457_457, &libs__handle_options__STATE_VARIABLE_Globals_461_461);
          }
#line 11408 "libs.handle_options.c"
        }
#line 11410 "libs.handle_options.c"
        break;
#line 11412 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 1056 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_461_461 = libs__handle_options__STATE_VARIABLE_Globals_341_341;
#line 11416 "libs.handle_options.c"
        break;
#line 11418 "libs.handle_options.c"
    }
#line 1065 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 1068 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1066 "handle_options.m"
      {
#line 1066 "handle_options.m"
        {
#line 1066 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 260, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_461_461, &libs__handle_options__STATE_VARIABLE_Globals_466_466);
        }
#line 1066 "handle_options.m"
      }
#line 1068 "handle_options.m"
    else
#line 1068 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_466_466 = libs__handle_options__STATE_VARIABLE_Globals_461_461;
#line 1073 "handle_options.m"
    {
#line 1073 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 219, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_466_466, &libs__handle_options__STATE_VARIABLE_Globals_471_471);
    }
#line 1080 "handle_options.m"
    libs__handle_options__V_475_475 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[198]);
#line 1080 "handle_options.m"
    {
#line 1080 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 560, libs__handle_options__V_475_475, libs__handle_options__STATE_VARIABLE_Globals_471_471, &libs__handle_options__STATE_VARIABLE_Globals_476_476);
    }
#line 1082 "handle_options.m"
    {
#line 1082 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 562, libs__handle_options__V_475_475, libs__handle_options__STATE_VARIABLE_Globals_476_476, &libs__handle_options__STATE_VARIABLE_Globals_481_481);
    }
#line 1086 "handle_options.m"
    libs__handle_options__V_485_485 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1086 "handle_options.m"
    {
#line 1086 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 250, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_481_481, &libs__handle_options__STATE_VARIABLE_Globals_486_486);
    }
#line 1088 "handle_options.m"
    {
#line 1088 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 251, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_486_486, &libs__handle_options__STATE_VARIABLE_Globals_491_491);
    }
#line 1090 "handle_options.m"
    {
#line 1090 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 252, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_491_491, &libs__handle_options__STATE_VARIABLE_Globals_496_496);
    }
#line 1093 "handle_options.m"
    {
#line 1093 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 257, (MR_Integer) 323, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_496_496, &libs__handle_options__STATE_VARIABLE_Globals_501_501);
    }
#line 1097 "handle_options.m"
    {
#line 1097 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 464, (MR_Integer) 458, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_501_501, &libs__handle_options__STATE_VARIABLE_Globals_506_506);
    }
#line 1101 "handle_options.m"
    {
#line 1101 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 626, (MR_Integer) 624, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_506_506, &libs__handle_options__STATE_VARIABLE_Globals_511_511);
    }
#line 1105 "handle_options.m"
    {
#line 1105 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_511_511, (MR_Integer) 642, &libs__handle_options__LibLinkages0_66);
    }
#line 1111 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "handle_options.m"
      {
#line 1109 "handle_options.m"
        {
#line 1109 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 642, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[11]), libs__handle_options__STATE_VARIABLE_Globals_511_511, &libs__handle_options__STATE_VARIABLE_Globals_516_516);
        }
#line 1108 "handle_options.m"
      }
#line 1111 "handle_options.m"
    else
#line 1112 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_516_516 = libs__handle_options__STATE_VARIABLE_Globals_511_511;
#line 1118 "handle_options.m"
    {
#line 1118 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 100, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_516_516, &libs__handle_options__STATE_VARIABLE_Globals_525_525);
    }
#line 1119 "handle_options.m"
    {
#line 1119 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 99, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_525_525, &libs__handle_options__STATE_VARIABLE_Globals_530_530);
    }
#line 1124 "handle_options.m"
    {
#line 1124 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 647, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_530_530, &libs__handle_options__STATE_VARIABLE_Globals_535_535);
    }
#line 1125 "handle_options.m"
    {
#line 1125 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 629, (MR_Integer) 647, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_535_535, &libs__handle_options__STATE_VARIABLE_Globals_540_540);
    }
#line 1126 "handle_options.m"
    {
#line 1126 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 629, (MR_Integer) 624, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_540_540, &libs__handle_options__STATE_VARIABLE_Globals_545_545);
    }
#line 1130 "handle_options.m"
    {
#line 1130 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 629, (MR_Integer) 118, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_545_545, &libs__handle_options__STATE_VARIABLE_Globals_550_550);
    }
#line 1134 "handle_options.m"
    {
#line 1134 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 624, (MR_Integer) 652, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_550_550, &libs__handle_options__STATE_VARIABLE_Globals_555_555);
    }
#line 1139 "handle_options.m"
    {
#line 1139 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_555_555, (MR_Integer) 333, &libs__handle_options__TransOpt_69);
    }
#line 1152 "handle_options.m"
#line 1152 "handle_options.m"
    switch (libs__handle_options__TransOpt_69) {
#line 1152 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1152 "handle_options.m"
      case (MR_Integer) 0:
#line 1153 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_562_562 = libs__handle_options__STATE_VARIABLE_Errors_271_271;
#line 1152 "handle_options.m"
        break;
#line 1152 "handle_options.m"
      case (MR_Integer) 1:
#line 1142 "handle_options.m"
        {
#line 1142 "handle_options.m"
          MR_Word libs__handle_options__UsingMMC_Make_70;
#line 1142 "handle_options.m"
          MR_Word libs__handle_options__InvokedByMMC_Make_71;
#line 1146 "handle_options.m"
          MR_Word libs__handle_options__V_560_560;

#line 1143 "handle_options.m"
          {
#line 1143 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_555_555, (MR_Integer) 624, &libs__handle_options__UsingMMC_Make_70);
          }
#line 1144 "handle_options.m"
          {
#line 1144 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_555_555, (MR_Integer) 629, &libs__handle_options__InvokedByMMC_Make_71);
          }
#line 1146 "handle_options.m"
          {
#line 1146 "handle_options.m"
            libs__handle_options__V_560_560 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMC_Make_70, libs__handle_options__InvokedByMMC_Make_71);
          }
#line 1146 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__V_560_560 == (MR_Integer) 1);
#line 1149 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1147 "handle_options.m"
            {
#line 1147 "handle_options.m"
              {
#line 1147 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_271_271, &libs__handle_options__STATE_VARIABLE_Errors_562_562);
              }
#line 1147 "handle_options.m"
            }
#line 1149 "handle_options.m"
          else
#line 1149 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_562_562 = libs__handle_options__STATE_VARIABLE_Errors_271_271;
#line 1142 "handle_options.m"
        }
#line 1152 "handle_options.m"
        break;
#line 1152 "handle_options.m"
    }
#line 1158 "handle_options.m"
    {
#line 1158 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_555_555, (MR_Integer) 329, &libs__handle_options__InterModOpt_72);
    }
#line 1160 "handle_options.m"
    {
#line 1160 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_555_555, (MR_Integer) 334, &libs__handle_options__InterModAnalysis_73);
    }
#line 1163 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_72 == (MR_Integer) 1);
#line 1163 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1164 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_73 == (MR_Integer) 1);
#line 1168 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1166 "handle_options.m"
      {
#line 1166 "handle_options.m"
        {
#line 1166 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_562_562, &libs__handle_options__STATE_VARIABLE_Errors_568_568);
        }
#line 1166 "handle_options.m"
      }
#line 1168 "handle_options.m"
    else
#line 1168 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_568_568 = libs__handle_options__STATE_VARIABLE_Errors_562_562;
#line 1172 "handle_options.m"
    {
#line 1172 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1174 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1174 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_573_573 = libs__handle_options__STATE_VARIABLE_Globals_555_555;
#line 1174 "handle_options.m"
    else
#line 1175 "handle_options.m"
      {
#line 1175 "handle_options.m"
        {
#line 1175 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 633, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_555_555, &libs__handle_options__STATE_VARIABLE_Globals_573_573);
        }
#line 1175 "handle_options.m"
      }
#line 1178 "handle_options.m"
    {
#line 1178 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_573_573, (MR_Integer) 95, &libs__handle_options__MaybeStandaloneInt_74);
    }
#line 1180 "handle_options.m"
    {
#line 1180 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_573_573, (MR_Integer) 570, &libs__handle_options__ExtraInitFunctions_75);
    }
#line 1183 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_74)) == (MR_mktag((MR_Integer) 1)));
#line 1183 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1183 "handle_options.m"
      {
#line 1183 "handle_options.m"
        libs__handle_options__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_74, (MR_Integer) 0)));
#line 1184 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_75 == (MR_Integer) 1);
#line 1183 "handle_options.m"
      }
#line 1189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1186 "handle_options.m"
      {
#line 1186 "handle_options.m"
        {
#line 1186 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_568_568, &libs__handle_options__STATE_VARIABLE_Errors_578_578);
        }
#line 1186 "handle_options.m"
      }
#line 1189 "handle_options.m"
    else
#line 1189 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_578_578 = libs__handle_options__STATE_VARIABLE_Errors_568_568;
#line 1193 "handle_options.m"
    {
#line 1193 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 409, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_573_573, &libs__handle_options__STATE_VARIABLE_Globals_584_584);
    }
#line 1195 "handle_options.m"
    {
#line 1195 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 419, (MR_Integer) 418, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_584_584, &libs__handle_options__STATE_VARIABLE_Globals_589_589);
    }
#line 1197 "handle_options.m"
    {
#line 1197 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_589_589, &libs__handle_options__STATE_VARIABLE_Globals_594_594);
    }
#line 1198 "handle_options.m"
    {
#line 1198 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 13, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_594_594, &libs__handle_options__STATE_VARIABLE_Globals_599_599);
    }
#line 1200 "handle_options.m"
    {
#line 1200 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 426, (MR_Integer) 425, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_599_599, &libs__handle_options__STATE_VARIABLE_Globals_604_604);
    }
#line 1202 "handle_options.m"
    {
#line 1202 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 424, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_604_604, &libs__handle_options__STATE_VARIABLE_Globals_609_609);
    }
#line 1203 "handle_options.m"
    {
#line 1203 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 13, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_609_609, &libs__handle_options__STATE_VARIABLE_Globals_614_614);
    }
#line 1205 "handle_options.m"
    {
#line 1205 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 333, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_614_614, &libs__handle_options__STATE_VARIABLE_Globals_619_619);
    }
#line 1207 "handle_options.m"
    {
#line 1207 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 333, (MR_Integer) 329, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_619_619, &libs__handle_options__STATE_VARIABLE_Globals_624_624);
    }
#line 1209 "handle_options.m"
    {
#line 1209 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 332, (MR_Integer) 331, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_624_624, &libs__handle_options__STATE_VARIABLE_Globals_629_629);
    }
#line 1214 "handle_options.m"
    {
#line 1214 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 331, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_629_629, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
#line 1216 "handle_options.m"
    {
#line 1216 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 333, (MR_Integer) 332, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_639_639);
    }
#line 1225 "handle_options.m"
    {
#line 1225 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 331, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_639_639, &libs__handle_options__STATE_VARIABLE_Globals_643_643);
    }
#line 1227 "handle_options.m"
    {
#line 1227 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 117, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_643_643, &libs__handle_options__STATE_VARIABLE_Globals_648_648);
    }
#line 1229 "handle_options.m"
    {
#line 1229 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 49, (MR_Integer) 48, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_648_648, &libs__handle_options__STATE_VARIABLE_Globals_653_653);
    }
#line 1236 "handle_options.m"
    {
#line 1236 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_653_653, &libs__handle_options__STATE_VARIABLE_Globals_658_658);
    }
#line 1238 "handle_options.m"
    {
#line 1238 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_658_658, &libs__handle_options__STATE_VARIABLE_Globals_663_663);
    }
#line 1240 "handle_options.m"
    {
#line 1240 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_663_663, &libs__handle_options__STATE_VARIABLE_Globals_668_668);
    }
#line 1242 "handle_options.m"
    {
#line 1242 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_668_668, &libs__handle_options__STATE_VARIABLE_Globals_673_673);
    }
#line 1244 "handle_options.m"
    {
#line 1244 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_673_673, &libs__handle_options__STATE_VARIABLE_Globals_678_678);
    }
#line 1246 "handle_options.m"
    {
#line 1246 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_678_678, &libs__handle_options__STATE_VARIABLE_Globals_683_683);
    }
#line 1248 "handle_options.m"
    {
#line 1248 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_683_683, &libs__handle_options__STATE_VARIABLE_Globals_688_688);
    }
#line 1250 "handle_options.m"
    {
#line 1250 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_688_688, &libs__handle_options__STATE_VARIABLE_Globals_693_693);
    }
#line 1252 "handle_options.m"
    {
#line 1252 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_693_693, &libs__handle_options__STATE_VARIABLE_Globals_698_698);
    }
#line 1254 "handle_options.m"
    {
#line 1254 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_698_698, &libs__handle_options__STATE_VARIABLE_Globals_703_703);
    }
#line 1256 "handle_options.m"
    {
#line 1256 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_703_703, &libs__handle_options__STATE_VARIABLE_Globals_708_708);
    }
#line 1258 "handle_options.m"
    {
#line 1258 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_708_708, &libs__handle_options__STATE_VARIABLE_Globals_713_713);
    }
#line 1260 "handle_options.m"
    {
#line 1260 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_713_713, &libs__handle_options__STATE_VARIABLE_Globals_718_718);
    }
#line 1262 "handle_options.m"
    {
#line 1262 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 116, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_718_718, &libs__handle_options__STATE_VARIABLE_Globals_723_723);
    }
#line 1268 "handle_options.m"
    {
#line 1268 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 138, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_723_723, &libs__handle_options__STATE_VARIABLE_Globals_728_728);
    }
#line 1270 "handle_options.m"
    {
#line 1270 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 138, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_728_728, &libs__handle_options__STATE_VARIABLE_Globals_733_733);
    }
#line 1272 "handle_options.m"
    {
#line 1272 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 138, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_733_733, &libs__handle_options__STATE_VARIABLE_Globals_738_738);
    }
#line 1274 "handle_options.m"
    {
#line 1274 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 138, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_738_738, &libs__handle_options__STATE_VARIABLE_Globals_743_743);
    }
#line 1276 "handle_options.m"
    {
#line 1276 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 138, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_743_743, &libs__handle_options__STATE_VARIABLE_Globals_748_748);
    }
#line 1281 "handle_options.m"
    {
#line 1281 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 117, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_748_748, &libs__handle_options__STATE_VARIABLE_Globals_753_753);
    }
#line 1288 "handle_options.m"
    {
#line 1288 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 329, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_753_753, &libs__handle_options__STATE_VARIABLE_Globals_758_758);
    }
#line 1296 "handle_options.m"
    {
#line 1296 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_758_758, (MR_Integer) 116, &libs__handle_options__Smart_77);
    }
#line 1297 "handle_options.m"
    {
#line 1297 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 329, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_758_758, &libs__handle_options__STATE_VARIABLE_Globals_764_764);
    }
#line 1299 "handle_options.m"
    {
#line 1299 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 331, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_764_764, &libs__handle_options__STATE_VARIABLE_Globals_769_769);
    }
#line 1308 "handle_options.m"
    {
#line 1308 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_77, (MR_Integer) 99, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_769_769, &libs__handle_options__STATE_VARIABLE_Globals_774_774);
    }
#line 1311 "handle_options.m"
    {
#line 1311 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 648, (MR_Integer) 647, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_774_774, &libs__handle_options__STATE_VARIABLE_Globals_779_779);
    }
#line 1313 "handle_options.m"
    {
#line 1313 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 46, (MR_Integer) 45, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_779_779, &libs__handle_options__STATE_VARIABLE_Globals_784_784);
    }
#line 1314 "handle_options.m"
    {
#line 1314 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 51, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_784_784, &libs__handle_options__STATE_VARIABLE_Globals_789_789);
    }
#line 1315 "handle_options.m"
    {
#line 1315 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_789_789, (MR_Integer) 46, &libs__handle_options__VeryVerbose_78);
    }
#line 1316 "handle_options.m"
    {
#line 1316 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_789_789, (MR_Integer) 55, &libs__handle_options__Statistics_79);
    }
#line 1318 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_78 == (MR_Integer) 1);
#line 1318 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1319 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_79 == (MR_Integer) 1);
#line 1322 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1321 "handle_options.m"
      {
#line 1321 "handle_options.m"
        {
#line 1321 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_789_789, &libs__handle_options__STATE_VARIABLE_Globals_795_795);
        }
#line 1321 "handle_options.m"
      }
#line 1322 "handle_options.m"
    else
#line 1322 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_795_795 = libs__handle_options__STATE_VARIABLE_Globals_789_789;
#line 1326 "handle_options.m"
    {
#line 1326 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 62, (MR_Integer) 60, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_795_795, &libs__handle_options__STATE_VARIABLE_Globals_800_800);
    }
#line 1327 "handle_options.m"
    {
#line 1327 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_800_800, &libs__handle_options__STATE_VARIABLE_Globals_805_805);
    }
#line 1328 "handle_options.m"
    {
#line 1328 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 60, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_805_805, &libs__handle_options__STATE_VARIABLE_Globals_810_810);
    }
#line 1331 "handle_options.m"
    {
#line 1331 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_810_810, (MR_Integer) 74, &libs__handle_options__DebugLiveness_80);
    }
#line 1333 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_80 >= (MR_Integer) 0);
#line 1333 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1333 "handle_options.m"
      {
#line 1334 "handle_options.m"
        libs__handle_options__V_814_814 = (MR_String) "all";
#line 1334 "handle_options.m"
        {
#line 1334 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_814_814, &libs__handle_options__AllDumpOptions_81);
        }
#line 1333 "handle_options.m"
      }
#line 1345 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1341 "handle_options.m"
      {
#line 1341 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_82;
#line 1341 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_83;
#line 1341 "handle_options.m"
        MR_Word libs__handle_options__V_817_817;

#line 1340 "handle_options.m"
        {
#line 1340 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_810_810, (MR_Integer) 151, &libs__handle_options__DumpOptions0_82);
        }
#line 1342 "handle_options.m"
        {
#line 1342 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_82, libs__handle_options__AllDumpOptions_81, &libs__handle_options__DumpOptions1_83);
        }
#line 1343 "handle_options.m"
        {
#line 1343 "handle_options.m"
          libs__handle_options__V_817_817 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_817_817, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1343 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_817_817, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_83));
#line 1343 "handle_options.m"
        }
#line 1343 "handle_options.m"
        {
#line 1343 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_817_817, libs__handle_options__STATE_VARIABLE_Globals_810_810, &libs__handle_options__STATE_VARIABLE_Globals_818_818);
        }
#line 1341 "handle_options.m"
      }
#line 1345 "handle_options.m"
    else
#line 1345 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_818_818 = libs__handle_options__STATE_VARIABLE_Globals_810_810;
#line 1349 "handle_options.m"
    {
#line 1349 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 60, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_818_818, &libs__handle_options__STATE_VARIABLE_Globals_822_822);
    }
#line 1350 "handle_options.m"
    {
#line 1350 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_822_822, (MR_Integer) 64, &libs__handle_options__DebugModesPredId_84);
    }
#line 1352 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_84 > (MR_Integer) 0);
#line 1354 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1353 "handle_options.m"
      {
#line 1353 "handle_options.m"
        {
#line 1353 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 60, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_822_822, &libs__handle_options__STATE_VARIABLE_Globals_828_828);
        }
#line 1353 "handle_options.m"
      }
#line 1354 "handle_options.m"
    else
#line 1354 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_828_828 = libs__handle_options__STATE_VARIABLE_Globals_822_822;
#line 1358 "handle_options.m"
    {
#line 1358 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_828_828, (MR_Integer) 361, &libs__handle_options__DebugUnneededCodePredNames_85);
    }
#line 1362 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1361 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_833_833 = libs__handle_options__STATE_VARIABLE_Globals_828_828;
#line 1362 "handle_options.m"
    else
#line 1363 "handle_options.m"
      {
#line 1364 "handle_options.m"
        {
#line 1364 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_828_828, &libs__handle_options__STATE_VARIABLE_Globals_833_833);
        }
#line 1363 "handle_options.m"
      }
#line 1367 "handle_options.m"
    {
#line 1367 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_833_833, (MR_Integer) 70, &libs__handle_options__DebugOptPredIdStrs_88);
    }
#line 1369 "handle_options.m"
    {
#line 1369 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_833_833, (MR_Integer) 71, &libs__handle_options__DebugOptPredNames_89);
    }
#line 1372 "handle_options.m"
    {
#line 1372 "handle_options.m"
      MR_String libs__handle_options__V_90_90;
#line 1372 "handle_options.m"
      MR_Word libs__handle_options__V_91_91;

#line 1372 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_88)) == (MR_mktag((MR_Integer) 1)));
#line 1372 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1372 "handle_options.m"
        {
#line 1372 "handle_options.m"
          libs__handle_options__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_88, (MR_Integer) 0)));
#line 1372 "handle_options.m"
          libs__handle_options__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_88, (MR_Integer) 1)));
#line 1372 "handle_options.m"
        }
#line 1372 "handle_options.m"
    }
#line 1373 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1373 "handle_options.m"
      {
#line 1373 "handle_options.m"
        MR_String libs__handle_options__V_92_92;
#line 1373 "handle_options.m"
        MR_Word libs__handle_options__V_93_93;

#line 1373 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_89)) == (MR_mktag((MR_Integer) 1)));
#line 1373 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1373 "handle_options.m"
          {
#line 1373 "handle_options.m"
            libs__handle_options__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_89, (MR_Integer) 0)));
#line 1373 "handle_options.m"
            libs__handle_options__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_89, (MR_Integer) 1)));
#line 1373 "handle_options.m"
          }
#line 1373 "handle_options.m"
      }
#line 1377 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1376 "handle_options.m"
      {
#line 1376 "handle_options.m"
        {
#line 1376 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 68, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_833_833, &libs__handle_options__STATE_VARIABLE_Globals_839_839);
        }
#line 1376 "handle_options.m"
      }
#line 1377 "handle_options.m"
    else
#line 1377 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_839_839 = libs__handle_options__STATE_VARIABLE_Globals_833_833;
#line 1381 "handle_options.m"
    {
#line 1381 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 80, &libs__handle_options__DebugIntermoduleAnalysis_94);
    }
#line 1383 "handle_options.m"
    {
#line 1383 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_94);
    }
#line 1385 "handle_options.m"
    {
#line 1385 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 147, &libs__handle_options__DumpHLDSPredIds_95);
    }
#line 1396 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_851_851 = libs__handle_options__STATE_VARIABLE_Globals_839_839;
#line 1396 "handle_options.m"
    else
#line 1388 "handle_options.m"
      {
#line 1388 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_98;
#line 1388 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_99;
#line 1388 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_100;
#line 1388 "handle_options.m"
        MR_Word libs__handle_options__V_850_850;

#line 1389 "handle_options.m"
        {
#line 1389 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 151, &libs__handle_options__DumpOptions2_98);
        }
#line 1392 "handle_options.m"
        {
#line 1392 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_98, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_99);
        }
#line 1393 "handle_options.m"
        {
#line 1393 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_99, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_100);
        }
#line 1394 "handle_options.m"
        {
#line 1394 "handle_options.m"
          libs__handle_options__V_850_850 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_850_850, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1394 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_850_850, 1) = ((MR_Box) (libs__handle_options__DumpOptions_100));
#line 1394 "handle_options.m"
        }
#line 1394 "handle_options.m"
        {
#line 1394 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 151, libs__handle_options__V_850_850, libs__handle_options__STATE_VARIABLE_Globals_839_839, &libs__handle_options__STATE_VARIABLE_Globals_851_851);
        }
#line 1388 "handle_options.m"
      }
#line 1400 "handle_options.m"
    {
#line 1400 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 159, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_851_851, &libs__handle_options__STATE_VARIABLE_Globals_855_855);
    }
#line 1402 "handle_options.m"
    {
#line 1402 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 159, (MR_Integer) 157, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_855_855, &libs__handle_options__STATE_VARIABLE_Globals_860_860);
    }
#line 1404 "handle_options.m"
    {
#line 1404 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 158, (MR_Integer) 157, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_860_860, &libs__handle_options__STATE_VARIABLE_Globals_865_865);
    }
#line 1407 "handle_options.m"
    {
#line 1407 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 141, (MR_Integer) 140, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_865_865, &libs__handle_options__STATE_VARIABLE_Globals_870_870);
    }
#line 1412 "handle_options.m"
    {
#line 1412 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_870_870, (MR_Integer) 219, &libs__handle_options__UseTrail_101);
    }
#line 1413 "handle_options.m"
    {
#line 1413 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_870_870, (MR_Integer) 255, &libs__handle_options__HighLevelCode_102);
    }
#line 1414 "handle_options.m"
    {
#line 1414 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_870_870, (MR_Integer) 221, &libs__handle_options__UseMinimalModelStackCopy_103);
    }
#line 1416 "handle_options.m"
    {
#line 1416 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_870_870, (MR_Integer) 222, &libs__handle_options__UseMinimalModelOwnStacks_104);
    }
#line 1418 "handle_options.m"
    {
#line 1418 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_103, libs__handle_options__UseMinimalModelOwnStacks_104, &libs__handle_options__UseMinimalModel_105);
    }
#line 1421 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1421 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1422 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_104 == (MR_Integer) 1);
#line 1426 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1424 "handle_options.m"
      {
#line 1424 "handle_options.m"
        {
#line 1424 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_578_578, &libs__handle_options__STATE_VARIABLE_Errors_877_877);
        }
#line 1424 "handle_options.m"
      }
#line 1426 "handle_options.m"
    else
#line 1432 "handle_options.m"
      {
#line 1427 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_105 == (MR_Integer) 1);
#line 1427 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1428 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 1);
#line 1432 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1430 "handle_options.m"
          {
#line 1430 "handle_options.m"
            {
#line 1430 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_578_578, &libs__handle_options__STATE_VARIABLE_Errors_877_877);
            }
#line 1430 "handle_options.m"
          }
#line 1432 "handle_options.m"
        else
#line 1438 "handle_options.m"
          {
#line 1433 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_105 == (MR_Integer) 1);
#line 1433 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1434 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_101 == (MR_Integer) 1);
#line 1438 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1436 "handle_options.m"
              {
#line 1436 "handle_options.m"
                {
#line 1436 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_578_578, &libs__handle_options__STATE_VARIABLE_Errors_877_877);
                }
#line 1436 "handle_options.m"
              }
#line 1438 "handle_options.m"
            else
#line 1438 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_877_877 = libs__handle_options__STATE_VARIABLE_Errors_578_578;
#line 1438 "handle_options.m"
          }
#line 1432 "handle_options.m"
      }
#line 1448 "handle_options.m"
    libs__handle_options__V_890_890 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]);
#line 1448 "handle_options.m"
    {
#line 1448 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 256, (MR_Integer) 247, libs__handle_options__V_890_890, libs__handle_options__STATE_VARIABLE_Globals_870_870, &libs__handle_options__STATE_VARIABLE_Globals_891_891);
    }
#line 1466 "handle_options.m"
#line 1466 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 1466 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1466 "handle_options.m"
      case (MR_Integer) 0:
#line 1450 "handle_options.m"
        {
#line 1450 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits0_106;
#line 1450 "handle_options.m"
          MR_Integer libs__handle_options__BitsPerWord_107;
#line 1450 "handle_options.m"
          MR_Integer libs__handle_options__ArgPackBits_108;
#line 1450 "handle_options.m"
          MR_Word libs__handle_options__V_913_913;

#line 1451 "handle_options.m"
          {
#line 1451 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_891_891, (MR_Integer) 247, &libs__handle_options__ArgPackBits0_106);
          }
#line 1452 "handle_options.m"
          {
#line 1452 "handle_options.m"
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_891_891, (MR_Integer) 241, &libs__handle_options__BitsPerWord_107);
          }
#line 1454 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_106 < (MR_Integer) 0);
#line 1456 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1455 "handle_options.m"
            libs__handle_options__ArgPackBits_108 = libs__handle_options__BitsPerWord_107;
#line 1456 "handle_options.m"
          else
#line 1462 "handle_options.m"
            {
#line 1456 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_106 > libs__handle_options__BitsPerWord_107);
#line 1462 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 1457 "handle_options.m"
                {
#line 1457 "handle_options.m"
                  MR_String libs__handle_options__ProgNameB_109;
#line 1457 "handle_options.m"
                  MR_String libs__handle_options__V_1674_1674;

#line 1457 "handle_options.m"
                  {
#line 1457 "handle_options.m"
                    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_109);
                  }
#line 1459 "handle_options.m"
                  {
#line 1459 "handle_options.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &libs__handle_options_scalar_common_3[9], libs__handle_options__ProgNameB_109, &libs__handle_options__V_1674_1674);
                  }
#line 1459 "handle_options.m"
                  {
#line 1459 "handle_options.m"
                    mercury__io__write_string_3_p_0(libs__handle_options__V_1674_1674);
                  }
#line 1458 "handle_options.m"
                  {
#line 1458 "handle_options.m"
                    mercury__io__write_string_3_p_0((MR_String) ": warning: --arg-pack-bits invalid\n");
                  }
#line 1460 "handle_options.m"
                  {
#line 1460 "handle_options.m"
                    libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_891_891);
                  }
#line 1461 "handle_options.m"
                  libs__handle_options__ArgPackBits_108 = libs__handle_options__BitsPerWord_107;
#line 1457 "handle_options.m"
                }
#line 1462 "handle_options.m"
              else
#line 1463 "handle_options.m"
                libs__handle_options__ArgPackBits_108 = libs__handle_options__ArgPackBits0_106;
#line 1462 "handle_options.m"
            }
#line 1465 "handle_options.m"
          {
#line 1465 "handle_options.m"
            libs__handle_options__V_913_913 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "handle_options.m"
            MR_hl_field(MR_mktag(2), libs__handle_options__V_913_913, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_108));
#line 1465 "handle_options.m"
          }
#line 1465 "handle_options.m"
          {
#line 1465 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_913_913, libs__handle_options__STATE_VARIABLE_Globals_891_891, &libs__handle_options__STATE_VARIABLE_Globals_914_914);
          }
#line 1450 "handle_options.m"
        }
#line 1466 "handle_options.m"
        break;
#line 1466 "handle_options.m"
      case (MR_Integer) 2:
#line 1466 "handle_options.m"
      case (MR_Integer) 4:
#line 1466 "handle_options.m"
      case (MR_Integer) 1:
#line 1466 "handle_options.m"
      case (MR_Integer) 3:
#line 1471 "handle_options.m"
        {
#line 1471 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_895_895;

#line 1472 "handle_options.m"
          {
#line 1472 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_890_890, libs__handle_options__STATE_VARIABLE_Globals_891_891, &libs__handle_options__STATE_VARIABLE_Globals_895_895);
          }
#line 1473 "handle_options.m"
          {
#line 1473 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_895_895, &libs__handle_options__STATE_VARIABLE_Globals_914_914);
          }
#line 1471 "handle_options.m"
        }
#line 1466 "handle_options.m"
        break;
#line 1466 "handle_options.m"
    }
#line 1477 "handle_options.m"
    {
#line 1477 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 225, (MR_Integer) 244, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_914_914, &libs__handle_options__STATE_VARIABLE_Globals_918_918);
    }
#line 1482 "handle_options.m"
    {
#line 1482 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 254, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_918_918, &libs__handle_options__STATE_VARIABLE_Globals_923_923);
    }
#line 1483 "handle_options.m"
    {
#line 1483 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 244, (MR_Integer) 254, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_923_923, &libs__handle_options__STATE_VARIABLE_Globals_928_928);
    }
#line 1493 "handle_options.m"
#line 1493 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 1493 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1493 "handle_options.m"
      case (MR_Integer) 0:
#line 1489 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_932_932 = libs__handle_options__STATE_VARIABLE_Globals_928_928;
#line 1493 "handle_options.m"
        break;
#line 1493 "handle_options.m"
      case (MR_Integer) 2:
#line 1490 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_932_932 = libs__handle_options__STATE_VARIABLE_Globals_928_928;
#line 1493 "handle_options.m"
        break;
#line 1493 "handle_options.m"
      case (MR_Integer) 4:
#line 1493 "handle_options.m"
      case (MR_Integer) 1:
#line 1496 "handle_options.m"
        {
#line 1497 "handle_options.m"
          {
#line 1497 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_928_928, &libs__handle_options__STATE_VARIABLE_Globals_932_932);
          }
#line 1496 "handle_options.m"
        }
#line 1493 "handle_options.m"
        break;
#line 1493 "handle_options.m"
      case (MR_Integer) 3:
#line 1491 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_932_932 = libs__handle_options__STATE_VARIABLE_Globals_928_928;
#line 1493 "handle_options.m"
        break;
#line 1493 "handle_options.m"
    }
#line 1502 "handle_options.m"
#line 1502 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 1502 "handle_options.m"
      default:
#line 1502 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1502 "handle_options.m"
        break;
#line 1502 "handle_options.m"
      case (MR_Integer) 2:
#line 1501 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1502 "handle_options.m"
        break;
#line 1502 "handle_options.m"
      case (MR_Integer) 3:
#line 1502 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1502 "handle_options.m"
        break;
#line 1502 "handle_options.m"
    }
#line 1508 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1507 "handle_options.m"
      {
#line 1507 "handle_options.m"
        {
#line 1507 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 440, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_932_932, &libs__handle_options__STATE_VARIABLE_Globals_936_936);
        }
#line 1507 "handle_options.m"
      }
#line 1508 "handle_options.m"
    else
#line 1508 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_936_936 = libs__handle_options__STATE_VARIABLE_Globals_932_932;
#line 1512 "handle_options.m"
    {
#line 1512 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 488, (MR_Integer) 564, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_936_936, &libs__handle_options__STATE_VARIABLE_Globals_941_941);
    }
#line 1515 "handle_options.m"
    {
#line 1515 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 200, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_941_941, &libs__handle_options__STATE_VARIABLE_Globals_946_946);
    }
#line 1520 "handle_options.m"
    {
#line 1520 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 200, (MR_Integer) 212, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_946_946, &libs__handle_options__STATE_VARIABLE_Globals_951_951);
    }
#line 1530 "handle_options.m"
    {
#line 1530 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 129, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_951_951, &libs__handle_options__STATE_VARIABLE_Globals_956_956);
    }
#line 1531 "handle_options.m"
    {
#line 1531 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_956_956, (MR_Integer) 129, &libs__handle_options__ProfOptimized_110);
    }
#line 1535 "handle_options.m"
#line 1535 "handle_options.m"
    switch (libs__handle_options__ProfOptimized_110) {
#line 1535 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1535 "handle_options.m"
      case (MR_Integer) 0:
#line 1533 "handle_options.m"
        {
#line 1534 "handle_options.m"
          {
#line 1534 "handle_options.m"
            libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 337, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_956_956, &libs__handle_options__STATE_VARIABLE_Globals_962_962);
          }
#line 1533 "handle_options.m"
        }
#line 1535 "handle_options.m"
        break;
#line 1535 "handle_options.m"
      case (MR_Integer) 1:
#line 1536 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_962_962 = libs__handle_options__STATE_VARIABLE_Globals_956_956;
#line 1535 "handle_options.m"
        break;
#line 1535 "handle_options.m"
    }
#line 1541 "handle_options.m"
    {
#line 1541 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 198, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_962_962, &libs__handle_options__STATE_VARIABLE_Globals_967_967);
    }
#line 1543 "handle_options.m"
    {
#line 1543 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 198, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_967_967, &libs__handle_options__STATE_VARIABLE_Globals_972_972);
    }
#line 1545 "handle_options.m"
    {
#line 1545 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 198, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_972_972, &libs__handle_options__STATE_VARIABLE_Globals_977_977);
    }
#line 1548 "handle_options.m"
    {
#line 1548 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_977_977, (MR_Integer) 215, &libs__handle_options__ExpComp_111);
    }
#line 1550 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_111, (MR_String) "") == 0);
#line 1552 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1552 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_982_982 = libs__handle_options__STATE_VARIABLE_Globals_977_977;
#line 1552 "handle_options.m"
    else
#line 1553 "handle_options.m"
      {
#line 1553 "handle_options.m"
        {
#line 1553 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 337, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_977_977, &libs__handle_options__STATE_VARIABLE_Globals_982_982);
        }
#line 1553 "handle_options.m"
      }
#line 1557 "handle_options.m"
    {
#line 1557 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 188, (MR_Integer) 187, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_982_982, &libs__handle_options__STATE_VARIABLE_Globals_987_987);
    }
#line 1560 "handle_options.m"
    {
#line 1560 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 234, (MR_Integer) 236, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_987_987, &libs__handle_options__STATE_VARIABLE_Globals_992_992);
    }
#line 1566 "handle_options.m"
    {
#line 1566 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 267, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_992_992, &libs__handle_options__STATE_VARIABLE_Globals_997_997);
    }
#line 1567 "handle_options.m"
    {
#line 1567 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 267, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_997_997, &libs__handle_options__STATE_VARIABLE_Globals_1002_1002);
    }
#line 1573 "handle_options.m"
    {
#line 1573 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 320, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1002_1002, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
    }
#line 1578 "handle_options.m"
    {
#line 1578 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 127, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1007_1007, &libs__handle_options__STATE_VARIABLE_Globals_1012_1012);
    }
#line 1581 "handle_options.m"
    {
#line 1581 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 127, (MR_Integer) 123, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1012_1012, &libs__handle_options__STATE_VARIABLE_Globals_1017_1017);
    }
#line 1585 "handle_options.m"
    {
#line 1585 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 123, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1017_1017, &libs__handle_options__STATE_VARIABLE_Globals_1022_1022);
    }
#line 1595 "handle_options.m"
    {
#line 1595 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1022_1022, (MR_Integer) 121, &libs__handle_options__TraceOptimized_112);
    }
#line 1596 "handle_options.m"
    {
#line 1596 "handle_options.m"
      libs__handle_options__V_1025_1025 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
    }
#line 1596 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_1025_1025 == (MR_Integer) 0);
#line 1690 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1639 "handle_options.m"
      {
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1084_1084;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__V_1087_1087;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1088_1088;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1092_1092;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1096_1096;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1100_1100;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1104_1104;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1108_1108;
#line 1639 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1112_1112;
#line 1685 "handle_options.m"
        MR_Word libs__handle_options__V_1114_1114;

#line 1637 "handle_options.m"
#line 1637 "handle_options.m"
        switch (libs__handle_options__TraceOptimized_112) {
#line 1637 "handle_options.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1637 "handle_options.m"
          case (MR_Integer) 0:
#line 1598 "handle_options.m"
            {
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__V_1027_1027 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1028_1028;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1032_1032;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1036_1036;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1040_1040;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1044_1044;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1048_1048;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1052_1052;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1056_1056;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1060_1060;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1064_1064;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1068_1068;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1072_1072;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1076_1076;
#line 1598 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_1080_1080;

#line 1603 "handle_options.m"
              {
#line 1603 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 337, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1022_1022, &libs__handle_options__STATE_VARIABLE_Globals_1028_1028);
              }
#line 1604 "handle_options.m"
              {
#line 1604 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 353, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1028_1028, &libs__handle_options__STATE_VARIABLE_Globals_1032_1032);
              }
#line 1605 "handle_options.m"
              {
#line 1605 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1032_1032, &libs__handle_options__STATE_VARIABLE_Globals_1036_1036);
              }
#line 1606 "handle_options.m"
              {
#line 1606 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1036_1036, &libs__handle_options__STATE_VARIABLE_Globals_1040_1040);
              }
#line 1607 "handle_options.m"
              {
#line 1607 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1040_1040, &libs__handle_options__STATE_VARIABLE_Globals_1044_1044);
              }
#line 1609 "handle_options.m"
              {
#line 1609 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 391, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1044_1044, &libs__handle_options__STATE_VARIABLE_Globals_1048_1048);
              }
#line 1610 "handle_options.m"
              {
#line 1610 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 351, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1048_1048, &libs__handle_options__STATE_VARIABLE_Globals_1052_1052);
              }
#line 1612 "handle_options.m"
              {
#line 1612 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1052_1052, &libs__handle_options__STATE_VARIABLE_Globals_1056_1056);
              }
#line 1614 "handle_options.m"
              {
#line 1614 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 368, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1056_1056, &libs__handle_options__STATE_VARIABLE_Globals_1060_1060);
              }
#line 1616 "handle_options.m"
              {
#line 1616 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1060_1060, &libs__handle_options__STATE_VARIABLE_Globals_1064_1064);
              }
#line 1618 "handle_options.m"
              {
#line 1618 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 373, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1064_1064, &libs__handle_options__STATE_VARIABLE_Globals_1068_1068);
              }
#line 1620 "handle_options.m"
              {
#line 1620 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 387, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1068_1068, &libs__handle_options__STATE_VARIABLE_Globals_1072_1072);
              }
#line 1621 "handle_options.m"
              {
#line 1621 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 400, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1072_1072, &libs__handle_options__STATE_VARIABLE_Globals_1076_1076);
              }
#line 1622 "handle_options.m"
              {
#line 1622 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 401, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1076_1076, &libs__handle_options__STATE_VARIABLE_Globals_1080_1080);
              }
#line 1630 "handle_options.m"
#line 1630 "handle_options.m"
              switch (libs__handle_options__Target_26) {
#line 1630 "handle_options.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1630 "handle_options.m"
                case (MR_Integer) 0:
#line 1631 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1084_1084 = libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
#line 1630 "handle_options.m"
                  break;
#line 1630 "handle_options.m"
                case (MR_Integer) 2:
#line 1632 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1084_1084 = libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
#line 1630 "handle_options.m"
                  break;
#line 1630 "handle_options.m"
                case (MR_Integer) 4:
#line 1634 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1084_1084 = libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
#line 1630 "handle_options.m"
                  break;
#line 1630 "handle_options.m"
                case (MR_Integer) 1:
#line 1628 "handle_options.m"
                  {
#line 1629 "handle_options.m"
                    {
#line 1629 "handle_options.m"
                      libs__globals__set_option_4_p_0((MR_Integer) 465, libs__handle_options__V_1027_1027, libs__handle_options__STATE_VARIABLE_Globals_1080_1080, &libs__handle_options__STATE_VARIABLE_Globals_1084_1084);
                    }
#line 1628 "handle_options.m"
                  }
#line 1630 "handle_options.m"
                  break;
#line 1630 "handle_options.m"
                case (MR_Integer) 3:
#line 1633 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1084_1084 = libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
#line 1630 "handle_options.m"
                  break;
#line 1630 "handle_options.m"
              }
#line 1598 "handle_options.m"
            }
#line 1637 "handle_options.m"
            break;
#line 1637 "handle_options.m"
          case (MR_Integer) 1:
#line 1638 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1084_1084 = libs__handle_options__STATE_VARIABLE_Globals_1022_1022;
#line 1637 "handle_options.m"
            break;
#line 1637 "handle_options.m"
        }
#line 1660 "handle_options.m"
        libs__handle_options__V_1087_1087 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1660 "handle_options.m"
        {
#line 1660 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 457, libs__handle_options__V_1087_1087, libs__handle_options__STATE_VARIABLE_Globals_1084_1084, &libs__handle_options__STATE_VARIABLE_Globals_1088_1088);
        }
#line 1665 "handle_options.m"
        {
#line 1665 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 370, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1088_1088, &libs__handle_options__STATE_VARIABLE_Globals_1092_1092);
        }
#line 1669 "handle_options.m"
        {
#line 1669 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 389, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1092_1092, &libs__handle_options__STATE_VARIABLE_Globals_1096_1096);
        }
#line 1673 "handle_options.m"
        {
#line 1673 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 455, libs__handle_options__V_1087_1087, libs__handle_options__STATE_VARIABLE_Globals_1096_1096, &libs__handle_options__STATE_VARIABLE_Globals_1100_1100);
        }
#line 1677 "handle_options.m"
        {
#line 1677 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1100_1100, &libs__handle_options__STATE_VARIABLE_Globals_1104_1104);
        }
#line 1678 "handle_options.m"
        {
#line 1678 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1104_1104, &libs__handle_options__STATE_VARIABLE_Globals_1108_1108);
        }
#line 1682 "handle_options.m"
        {
#line 1682 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 325, libs__handle_options__V_1087_1087, libs__handle_options__STATE_VARIABLE_Globals_1108_1108, &libs__handle_options__STATE_VARIABLE_Globals_1112_1112);
        }
#line 1685 "handle_options.m"
        {
#line 1685 "handle_options.m"
          libs__handle_options__V_1114_1114 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_31);
        }
#line 1685 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1114_1114 == (MR_Integer) 0);
#line 1687 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1686 "handle_options.m"
          {
#line 1686 "handle_options.m"
            {
#line 1686 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 130, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_1112_1112, &libs__handle_options__STATE_VARIABLE_Globals_1117_1117);
            }
#line 1686 "handle_options.m"
          }
#line 1687 "handle_options.m"
        else
#line 1687 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1117_1117 = libs__handle_options__STATE_VARIABLE_Globals_1112_1112;
#line 1639 "handle_options.m"
      }
#line 1690 "handle_options.m"
    else
#line 1693 "handle_options.m"
      {
#line 1693 "handle_options.m"
        {
#line 1693 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 130, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1022_1022, &libs__handle_options__STATE_VARIABLE_Globals_1117_1117);
        }
#line 1693 "handle_options.m"
      }
#line 1696 "handle_options.m"
    {
#line 1696 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 196, (MR_Integer) 270, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1117_1117, &libs__handle_options__STATE_VARIABLE_Globals_1126_1126);
    }
#line 1697 "handle_options.m"
    {
#line 1697 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1126_1126, (MR_Integer) 196, &libs__handle_options__ProfileDeep_113);
    }
#line 1722 "handle_options.m"
#line 1722 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_113) {
#line 1722 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1722 "handle_options.m"
      case (MR_Integer) 0:
#line 1723 "handle_options.m"
        {
#line 1723 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1130_1130 = libs__handle_options__STATE_VARIABLE_Errors_877_877;
#line 1723 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1143_1143 = libs__handle_options__STATE_VARIABLE_Globals_1126_1126;
#line 1723 "handle_options.m"
        }
#line 1722 "handle_options.m"
        break;
#line 1722 "handle_options.m"
      case (MR_Integer) 1:
#line 1699 "handle_options.m"
        {
#line 1699 "handle_options.m"
          MR_Word libs__handle_options__LotsOfHOSpec_114;
#line 1699 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1135_1135;

#line 1701 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 0);
#line 1701 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1702 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 1705 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1705 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1130_1130 = libs__handle_options__STATE_VARIABLE_Errors_877_877;
#line 1705 "handle_options.m"
          else
#line 1706 "handle_options.m"
            {
#line 1706 "handle_options.m"
              {
#line 1706 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_877_877, &libs__handle_options__STATE_VARIABLE_Errors_1130_1130);
              }
#line 1706 "handle_options.m"
            }
#line 1709 "handle_options.m"
          {
#line 1709 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1126_1126, &libs__handle_options__STATE_VARIABLE_Globals_1135_1135);
          }
#line 1711 "handle_options.m"
          {
#line 1711 "handle_options.m"
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1135_1135, (MR_Integer) 211, &libs__handle_options__LotsOfHOSpec_114);
          }
#line 1719 "handle_options.m"
#line 1719 "handle_options.m"
          switch (libs__handle_options__LotsOfHOSpec_114) {
#line 1719 "handle_options.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1719 "handle_options.m"
            case (MR_Integer) 0:
#line 1720 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1143_1143 = libs__handle_options__STATE_VARIABLE_Globals_1135_1135;
#line 1719 "handle_options.m"
              break;
#line 1719 "handle_options.m"
            case (MR_Integer) 1:
#line 1714 "handle_options.m"
              {
#line 1714 "handle_options.m"
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1140_1140;

#line 1716 "handle_options.m"
                {
#line 1716 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1135_1135, &libs__handle_options__STATE_VARIABLE_Globals_1140_1140);
                }
#line 1717 "handle_options.m"
                {
#line 1717 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 356, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1140_1140, &libs__handle_options__STATE_VARIABLE_Globals_1143_1143);
                }
#line 1714 "handle_options.m"
              }
#line 1719 "handle_options.m"
              break;
#line 1719 "handle_options.m"
          }
#line 1699 "handle_options.m"
        }
#line 1722 "handle_options.m"
        break;
#line 1722 "handle_options.m"
    }
#line 1726 "handle_options.m"
    {
#line 1726 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1143_1143, (MR_Integer) 213, &libs__handle_options__RecordTermSizesAsWords_116);
    }
#line 1728 "handle_options.m"
    {
#line 1728 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1143_1143, (MR_Integer) 214, &libs__handle_options__RecordTermSizesAsCells_117);
    }
#line 1731 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1731 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1732 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1736 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1734 "handle_options.m"
      {
#line 1734 "handle_options.m"
        {
#line 1734 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1130_1130, &libs__handle_options__STATE_VARIABLE_Errors_1148_1148);
        }
#line 1734 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1157_1157 = libs__handle_options__STATE_VARIABLE_Globals_1143_1143;
#line 1734 "handle_options.m"
      }
#line 1736 "handle_options.m"
    else
#line 1754 "handle_options.m"
      {
#line 1737 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_116 == (MR_Integer) 1);
#line 1738 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1738 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_117 == (MR_Integer) 1);
#line 1754 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1742 "handle_options.m"
          {
#line 1742 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1153_1153;

#line 1741 "handle_options.m"
            {
#line 1741 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1143_1143, &libs__handle_options__STATE_VARIABLE_Globals_1153_1153);
            }
#line 1745 "handle_options.m"
            {
#line 1745 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 248, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1153_1153, &libs__handle_options__STATE_VARIABLE_Globals_1157_1157);
            }
#line 1751 "handle_options.m"
#line 1751 "handle_options.m"
            switch (libs__handle_options__HighLevelCode_102) {
#line 1751 "handle_options.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1751 "handle_options.m"
              case (MR_Integer) 0:
#line 1752 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Errors_1148_1148 = libs__handle_options__STATE_VARIABLE_Errors_1130_1130;
#line 1751 "handle_options.m"
                break;
#line 1751 "handle_options.m"
              case (MR_Integer) 1:
#line 1748 "handle_options.m"
                {
#line 1749 "handle_options.m"
                  {
#line 1749 "handle_options.m"
                    libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1130_1130, &libs__handle_options__STATE_VARIABLE_Errors_1148_1148);
                  }
#line 1748 "handle_options.m"
                }
#line 1751 "handle_options.m"
                break;
#line 1751 "handle_options.m"
            }
#line 1742 "handle_options.m"
          }
#line 1754 "handle_options.m"
        else
#line 1755 "handle_options.m"
          {
#line 1755 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1157_1157 = libs__handle_options__STATE_VARIABLE_Globals_1143_1143;
#line 1755 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1148_1148 = libs__handle_options__STATE_VARIABLE_Errors_1130_1130;
#line 1755 "handle_options.m"
          }
#line 1754 "handle_options.m"
      }
#line 1760 "handle_options.m"
#line 1760 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 1760 "handle_options.m"
      default:
#line 1760 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1760 "handle_options.m"
        break;
#line 1760 "handle_options.m"
      case (MR_Integer) 0:
#line 1760 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 0);
#line 1760 "handle_options.m"
        break;
#line 1760 "handle_options.m"
      case (MR_Integer) 1:
#line 1761 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1760 "handle_options.m"
        break;
#line 1760 "handle_options.m"
    }
#line 1760 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1759 "handle_options.m"
      {
#line 1759 "handle_options.m"
        MR_Word libs__handle_options__V_1163_1163;

#line 1759 "handle_options.m"
        {
#line 1759 "handle_options.m"
          libs__handle_options__V_1163_1163 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_31);
        }
#line 1759 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1163_1163 == (MR_Integer) 1);
#line 1759 "handle_options.m"
      }
#line 1765 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1765 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1165_1165 = libs__handle_options__STATE_VARIABLE_Errors_1148_1148;
#line 1765 "handle_options.m"
    else
#line 1766 "handle_options.m"
      {
#line 1766 "handle_options.m"
        {
#line 1766 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1148_1148, &libs__handle_options__STATE_VARIABLE_Errors_1165_1165);
        }
#line 1766 "handle_options.m"
      }
#line 1772 "handle_options.m"
    {
#line 1772 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 494, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1157_1157, &libs__handle_options__STATE_VARIABLE_Globals_1169_1169);
    }
#line 1774 "handle_options.m"
    {
#line 1774 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 340, (MR_Integer) 369, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1169_1169, &libs__handle_options__STATE_VARIABLE_Globals_1174_1174);
    }
#line 1791 "handle_options.m"
#line 1791 "handle_options.m"
    switch (libs__handle_options__ProfileDeep_113) {
#line 1791 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1791 "handle_options.m"
      case (MR_Integer) 0:
#line 1788 "handle_options.m"
        {
#line 1789 "handle_options.m"
          {
#line 1789 "handle_options.m"
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 337, (MR_Integer) 369, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1174_1174, &libs__handle_options__STATE_VARIABLE_Globals_1179_1179);
          }
#line 1788 "handle_options.m"
        }
#line 1791 "handle_options.m"
        break;
#line 1791 "handle_options.m"
      case (MR_Integer) 1:
#line 1792 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1179_1179 = libs__handle_options__STATE_VARIABLE_Globals_1174_1174;
#line 1791 "handle_options.m"
        break;
#line 1791 "handle_options.m"
    }
#line 1797 "handle_options.m"
    {
#line 1797 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 164, (MR_Integer) 391, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1179_1179, &libs__handle_options__STATE_VARIABLE_Globals_1184_1184);
    }
#line 1798 "handle_options.m"
    {
#line 1798 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 164, (MR_Integer) 351, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1184_1184, &libs__handle_options__STATE_VARIABLE_Globals_1189_1189);
    }
#line 1800 "handle_options.m"
    {
#line 1800 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 164, (MR_Integer) 352, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1189_1189, &libs__handle_options__STATE_VARIABLE_Globals_1194_1194);
    }
#line 1804 "handle_options.m"
    {
#line 1804 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 270, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1194_1194, &libs__handle_options__STATE_VARIABLE_Globals_1199_1199);
    }
#line 1807 "handle_options.m"
    {
#line 1807 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 271, (MR_Integer) 270, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1199_1199, &libs__handle_options__STATE_VARIABLE_Globals_1204_1204);
    }
#line 1862 "handle_options.m"
#line 1862 "handle_options.m"
    switch (libs__handle_options__GC_Method_27) {
#line 1862 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1862 "handle_options.m"
      case (MR_Integer) 5:
#line 1846 "handle_options.m"
        {
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1212_1212;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1216_1216;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1220_1220;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1224_1224;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1228_1228;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1232_1232;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1240_1240;
#line 1846 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1244_1244;

#line 1847 "handle_options.m"
          {
#line 1847 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1204_1204, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
          }
#line 1848 "handle_options.m"
          {
#line 1848 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1212_1212);
          }
#line 1849 "handle_options.m"
          {
#line 1849 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 457, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1212_1212, &libs__handle_options__STATE_VARIABLE_Globals_1216_1216);
          }
#line 1850 "handle_options.m"
          {
#line 1850 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 477, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1216_1216, &libs__handle_options__STATE_VARIABLE_Globals_1220_1220);
          }
#line 1851 "handle_options.m"
          {
#line 1851 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 325, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1220_1220, &libs__handle_options__STATE_VARIABLE_Globals_1224_1224);
          }
#line 1852 "handle_options.m"
          {
#line 1852 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 455, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1224_1224, &libs__handle_options__STATE_VARIABLE_Globals_1228_1228);
          }
#line 1853 "handle_options.m"
          {
#line 1853 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 309, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1228_1228, &libs__handle_options__STATE_VARIABLE_Globals_1232_1232);
          }
#line 1855 "handle_options.m"
          {
#line 1855 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 310, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1232_1232, &libs__handle_options__STATE_VARIABLE_Globals_1236_1236);
          }
#line 1857 "handle_options.m"
          {
#line 1857 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1236_1236, &libs__handle_options__STATE_VARIABLE_Globals_1240_1240);
          }
#line 1859 "handle_options.m"
          {
#line 1859 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 362, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1240_1240, &libs__handle_options__STATE_VARIABLE_Globals_1244_1244);
          }
#line 1860 "handle_options.m"
          {
#line 1860 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1244_1244, &libs__handle_options__STATE_VARIABLE_Globals_1248_1248);
          }
#line 1846 "handle_options.m"
        }
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
      case (MR_Integer) 0:
#line 1863 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1248_1248 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
      case (MR_Integer) 2:
#line 1865 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1248_1248 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
      case (MR_Integer) 3:
#line 1866 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1248_1248 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
      case (MR_Integer) 4:
#line 1867 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1248_1248 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
      case (MR_Integer) 1:
#line 1864 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1248_1248 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
#line 1862 "handle_options.m"
        break;
#line 1862 "handle_options.m"
    }
#line 1875 "handle_options.m"
    {
#line 1875 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1248_1248, (MR_Integer) 261, &libs__handle_options__PutNondetEnvOnHeap_118);
    }
#line 1889 "handle_options.m"
    {
#line 1889 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 270, (MR_Integer) 268, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1248_1248, &libs__handle_options__STATE_VARIABLE_Globals_1258_1258);
    }
#line 1891 "handle_options.m"
    {
#line 1891 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 269, (MR_Integer) 268, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1258_1258, &libs__handle_options__STATE_VARIABLE_Globals_1263_1263);
    }
#line 1898 "handle_options.m"
    {
#line 1898 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 270, (MR_Integer) 475, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1263_1263, &libs__handle_options__STATE_VARIABLE_Globals_1268_1268);
    }
#line 1900 "handle_options.m"
    {
#line 1900 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 269, (MR_Integer) 475, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1268_1268, &libs__handle_options__STATE_VARIABLE_Globals_1273_1273);
    }
#line 1904 "handle_options.m"
    {
#line 1904 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 473, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1273_1273, &libs__handle_options__STATE_VARIABLE_Globals_1278_1278);
    }
#line 1910 "handle_options.m"
    {
#line 1910 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 272, (MR_Integer) 391, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1278_1278, &libs__handle_options__STATE_VARIABLE_Globals_1283_1283);
    }
#line 1912 "handle_options.m"
    {
#line 1912 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 272, (MR_Integer) 351, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1283_1283, &libs__handle_options__STATE_VARIABLE_Globals_1288_1288);
    }
#line 1921 "handle_options.m"
    {
#line 1921 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 455, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1288_1288, &libs__handle_options__STATE_VARIABLE_Globals_1293_1293);
    }
#line 1928 "handle_options.m"
    {
#line 1928 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 229, (MR_Integer) 455, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1293_1293, &libs__handle_options__STATE_VARIABLE_Globals_1298_1298);
    }
#line 1937 "handle_options.m"
    {
#line 1937 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 221, (MR_Integer) 457, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1298_1298, &libs__handle_options__STATE_VARIABLE_Globals_1303_1303);
    }
#line 1946 "handle_options.m"
    {
#line 1946 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1303_1303, (MR_Integer) 285, &libs__handle_options__DisablePneg_119);
    }
#line 1948 "handle_options.m"
    {
#line 1948 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1303_1303, (MR_Integer) 286, &libs__handle_options__DisableCut_120);
    }
#line 1951 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1951 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1952 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_119 == (MR_Integer) 0);
#line 1956 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1954 "handle_options.m"
      {
#line 1954 "handle_options.m"
        {
#line 1954 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 287, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1303_1303, &libs__handle_options__STATE_VARIABLE_Globals_1309_1309);
        }
#line 1954 "handle_options.m"
      }
#line 1956 "handle_options.m"
    else
#line 1956 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1309_1309 = libs__handle_options__STATE_VARIABLE_Globals_1303_1303;
#line 1960 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_103 == (MR_Integer) 1);
#line 1960 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1961 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_120 == (MR_Integer) 0);
#line 1965 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1963 "handle_options.m"
      {
#line 1963 "handle_options.m"
        {
#line 1963 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 288, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1309_1309, &libs__handle_options__STATE_VARIABLE_Globals_1313_1313);
        }
#line 1963 "handle_options.m"
      }
#line 1965 "handle_options.m"
    else
#line 1965 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1313_1313 = libs__handle_options__STATE_VARIABLE_Globals_1309_1309;
#line 1971 "handle_options.m"
    {
#line 1971 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1313_1313, (MR_Integer) 146, &libs__handle_options__DumpHLDSStages_121);
    }
#line 1973 "handle_options.m"
    {
#line 1973 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1313_1313, (MR_Integer) 145, &libs__handle_options__DumpTraceStages_122);
    }
#line 1975 "handle_options.m"
    {
#line 1975 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1313_1313, (MR_Integer) 305, &libs__handle_options__ParallelLiveness_123);
    }
#line 1977 "handle_options.m"
    {
#line 1977 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1313_1313, (MR_Integer) 306, &libs__handle_options__ParallelCodeGen_124);
    }
#line 1980 "handle_options.m"
    {
#line 1980 "handle_options.m"
      MR_String libs__handle_options__V_125_125;
#line 1980 "handle_options.m"
      MR_Word libs__handle_options__V_126_126;

#line 1980 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_121)) == (MR_mktag((MR_Integer) 1)));
#line 1980 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1980 "handle_options.m"
        {
#line 1980 "handle_options.m"
          libs__handle_options__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 0)));
#line 1980 "handle_options.m"
          libs__handle_options__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_121, (MR_Integer) 1)));
#line 1980 "handle_options.m"
        }
#line 1980 "handle_options.m"
    }
#line 1981 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1981 "handle_options.m"
      {
#line 1981 "handle_options.m"
        {
#line 1981 "handle_options.m"
          MR_String libs__handle_options__V_127_127;
#line 1981 "handle_options.m"
          MR_Word libs__handle_options__V_128_128;

#line 1981 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_122)) == (MR_mktag((MR_Integer) 1)));
#line 1981 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1981 "handle_options.m"
            {
#line 1981 "handle_options.m"
              libs__handle_options__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 0)));
#line 1981 "handle_options.m"
              libs__handle_options__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_122, (MR_Integer) 1)));
#line 1981 "handle_options.m"
            }
#line 1981 "handle_options.m"
        }
#line 1981 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1981 "handle_options.m"
          {
#line 1982 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_79 == (MR_Integer) 1);
#line 1981 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1981 "handle_options.m"
              {
#line 1983 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_123 == (MR_Integer) 1);
#line 1981 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1984 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_124 == (MR_Integer) 1);
#line 1981 "handle_options.m"
              }
#line 1981 "handle_options.m"
          }
#line 1981 "handle_options.m"
      }
#line 1988 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1987 "handle_options.m"
      {
#line 1987 "handle_options.m"
        {
#line 1987 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 304, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1313_1313, &libs__handle_options__STATE_VARIABLE_Globals_1321_1321);
        }
#line 1987 "handle_options.m"
      }
#line 1988 "handle_options.m"
    else
#line 1988 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1321_1321 = libs__handle_options__STATE_VARIABLE_Globals_1313_1313;
#line 1994 "handle_options.m"
    {
#line 1994 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 362, (MR_Integer) 363, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1321_1321, &libs__handle_options__STATE_VARIABLE_Globals_1326_1326);
    }
#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 352, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1326_1326, &libs__handle_options__STATE_VARIABLE_Globals_1331_1331);
    }
#line 2005 "handle_options.m"
    {
#line 2005 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 354, (MR_Integer) 329, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1331_1331, &libs__handle_options__STATE_VARIABLE_Globals_1336_1336);
    }
#line 2007 "handle_options.m"
    {
#line 2007 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 354, (MR_Integer) 353, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1336_1336, &libs__handle_options__STATE_VARIABLE_Globals_1341_1341);
    }
#line 2012 "handle_options.m"
    {
#line 2012 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 364, (MR_Integer) 370, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1341_1341, &libs__handle_options__STATE_VARIABLE_Globals_1346_1346);
    }
#line 2014 "handle_options.m"
    {
#line 2014 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 364, (MR_Integer) 349, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1346_1346, &libs__handle_options__STATE_VARIABLE_Globals_1351_1351);
    }
#line 2019 "handle_options.m"
    {
#line 2019 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 353, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1351_1351, &libs__handle_options__STATE_VARIABLE_Globals_1356_1356);
    }
#line 2025 "handle_options.m"
    {
#line 2025 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 396, (MR_Integer) 397, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1356_1356, &libs__handle_options__STATE_VARIABLE_Globals_1361_1361);
    }
#line 2030 "handle_options.m"
    {
#line 2030 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 93, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1361_1361, &libs__handle_options__STATE_VARIABLE_Globals_1366_1366);
    }
#line 2035 "handle_options.m"
    {
#line 2035 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 144, (MR_Integer) 93, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1366_1366, &libs__handle_options__STATE_VARIABLE_Globals_1371_1371);
    }
#line 2039 "handle_options.m"
    {
#line 2039 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 22, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1371_1371, &libs__handle_options__STATE_VARIABLE_Globals_1376_1376);
    }
#line 2042 "handle_options.m"
    {
#line 2042 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1376_1376, (MR_Integer) 666, &libs__handle_options__TargetArch_129);
    }
#line 2045 "handle_options.m"
    {
#line 2045 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1376_1376, (MR_Integer) 555, &libs__handle_options__MaybeStdLibDir_130);
    }
#line 2063 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2064 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1392_1392 = libs__handle_options__STATE_VARIABLE_Globals_1376_1376;
#line 2063 "handle_options.m"
    else
#line 2048 "handle_options.m"
      {
#line 2048 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_131 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_130, (MR_Integer) 0)));
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_132;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_133;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_134;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__V_1380_1380;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1381_1381;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__V_1384_1384;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1385_1385;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__V_1386_1386;
#line 2048 "handle_options.m"
        MR_String libs__handle_options__V_1387_1387;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__V_1391_1391;
#line 2048 "handle_options.m"
        MR_Word libs__handle_options__V_1393_1393;
#line 2048 "handle_options.m"
        MR_String libs__handle_options__V_1394_1394;

#line 2049 "handle_options.m"
        {
#line 2049 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1376_1376, &libs__handle_options__OptionTable2_132);
        }
#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__handle_options__V_1380_1380 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_132, libs__handle_options__StdLibDir_131);
        }
#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1380_1380, libs__handle_options__STATE_VARIABLE_Globals_1376_1376, &libs__handle_options__STATE_VARIABLE_Globals_1381_1381);
        }
#line 2054 "handle_options.m"
        {
#line 2054 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1381_1381, (MR_Integer) 545, &libs__handle_options__LinkLibDirs0_133);
        }
#line 2057 "handle_options.m"
        {
#line 2057 "handle_options.m"
          libs__handle_options__V_1387_1387 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 2057 "handle_options.m"
        {
#line 2057 "handle_options.m"
          libs__handle_options__V_1386_1386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1386_1386, 0) = ((MR_Box) (libs__handle_options__V_1387_1387));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1386_1386, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_133));
#line 2057 "handle_options.m"
        }
#line 2057 "handle_options.m"
        {
#line 2057 "handle_options.m"
          libs__handle_options__V_1384_1384 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1384_1384, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1384_1384, 1) = ((MR_Box) (libs__handle_options__V_1386_1386));
#line 2057 "handle_options.m"
        }
#line 2056 "handle_options.m"
        {
#line 2056 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 545, libs__handle_options__V_1384_1384, libs__handle_options__STATE_VARIABLE_Globals_1381_1381, &libs__handle_options__STATE_VARIABLE_Globals_1385_1385);
        }
#line 2059 "handle_options.m"
        {
#line 2059 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1385_1385, (MR_Integer) 546, &libs__handle_options__Rpath0_134);
        }
#line 2062 "handle_options.m"
        {
#line 2062 "handle_options.m"
          libs__handle_options__V_1394_1394 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_131, (MR_String) "lib");
        }
#line 2062 "handle_options.m"
        {
#line 2062 "handle_options.m"
          libs__handle_options__V_1393_1393 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1393_1393, 0) = ((MR_Box) (libs__handle_options__V_1394_1394));
#line 2062 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1393_1393, 1) = ((MR_Box) (libs__handle_options__Rpath0_134));
#line 2062 "handle_options.m"
        }
#line 2062 "handle_options.m"
        {
#line 2062 "handle_options.m"
          libs__handle_options__V_1391_1391 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1391_1391, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2062 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1391_1391, 1) = ((MR_Box) (libs__handle_options__V_1393_1393));
#line 2062 "handle_options.m"
        }
#line 2061 "handle_options.m"
        {
#line 2061 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 546, libs__handle_options__V_1391_1391, libs__handle_options__STATE_VARIABLE_Globals_1385_1385, &libs__handle_options__STATE_VARIABLE_Globals_1392_1392);
        }
#line 2048 "handle_options.m"
      }
#line 2068 "handle_options.m"
    {
#line 2068 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1392_1392, (MR_Integer) 634, &libs__handle_options__MaybeConfDir_135);
    }
#line 2076 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2077 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1400_1400 = libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
#line 2076 "handle_options.m"
    else
#line 2071 "handle_options.m"
      {
#line 2071 "handle_options.m"
        MR_String libs__handle_options__ConfDir_136 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 2071 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_137;
#line 2071 "handle_options.m"
        MR_Word libs__handle_options__V_1399_1399;
#line 2071 "handle_options.m"
        MR_Word libs__handle_options__V_1401_1401;
#line 2071 "handle_options.m"
        MR_String libs__handle_options__V_1402_1402;

#line 2072 "handle_options.m"
        {
#line 2072 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1392_1392, (MR_Integer) 492, &libs__handle_options__CIncludeDirs0_137);
        }
#line 2075 "handle_options.m"
        {
#line 2075 "handle_options.m"
          libs__handle_options__V_1402_1402 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_136, (MR_String) "conf");
        }
#line 2075 "handle_options.m"
        {
#line 2075 "handle_options.m"
          libs__handle_options__V_1401_1401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1401_1401, 0) = ((MR_Box) (libs__handle_options__V_1402_1402));
#line 2075 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1401_1401, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_137));
#line 2075 "handle_options.m"
        }
#line 2075 "handle_options.m"
        {
#line 2075 "handle_options.m"
          libs__handle_options__V_1399_1399 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1399_1399, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2075 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1399_1399, 1) = ((MR_Box) (libs__handle_options__V_1401_1401));
#line 2075 "handle_options.m"
        }
#line 2074 "handle_options.m"
        {
#line 2074 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 492, libs__handle_options__V_1399_1399, libs__handle_options__STATE_VARIABLE_Globals_1392_1392, &libs__handle_options__STATE_VARIABLE_Globals_1400_1400);
        }
#line 2071 "handle_options.m"
      }
#line 2081 "handle_options.m"
    {
#line 2081 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1400_1400, (MR_Integer) 645, &libs__handle_options__ConfigFile_138);
    }
#line 2084 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_138)) == (MR_mktag((MR_Integer) 1)));
#line 2084 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2084 "handle_options.m"
      {
#line 2084 "handle_options.m"
        libs__handle_options__V_1405_1405 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_138, (MR_Integer) 0)));
#line 2084 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1405_1405, (MR_String) "") == 0);
#line 2084 "handle_options.m"
      }
#line 2093 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2089 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2090 "handle_options.m"
        {
#line 2091 "handle_options.m"
          {
#line 2091 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 645, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_1400_1400, &libs__handle_options__STATE_VARIABLE_Globals_1412_1412);
          }
#line 2090 "handle_options.m"
        }
#line 2089 "handle_options.m"
      else
#line 2086 "handle_options.m"
        {
#line 2086 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_139 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_135, (MR_Integer) 0)));
#line 2086 "handle_options.m"
          MR_Word libs__handle_options__V_1411_1411;
#line 2086 "handle_options.m"
          MR_Word libs__handle_options__V_1413_1413;
#line 2086 "handle_options.m"
          MR_String libs__handle_options__V_1414_1414;
#line 2086 "handle_options.m"
          MR_String libs__handle_options__V_1415_1415;

#line 2088 "handle_options.m"
          {
#line 2088 "handle_options.m"
            libs__handle_options__V_1415_1415 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_139, (MR_String) "conf");
          }
#line 2088 "handle_options.m"
          {
#line 2088 "handle_options.m"
            libs__handle_options__V_1414_1414 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1415_1415, (MR_String) "Mercury.config");
          }
#line 2087 "handle_options.m"
          {
#line 2087 "handle_options.m"
            libs__handle_options__V_1413_1413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1413_1413, 0) = ((MR_Box) (libs__handle_options__V_1414_1414));
#line 2087 "handle_options.m"
          }
#line 2087 "handle_options.m"
          {
#line 2087 "handle_options.m"
            libs__handle_options__V_1411_1411 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1411_1411, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2087 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1411_1411, 1) = ((MR_Box) (libs__handle_options__V_1413_1413));
#line 2087 "handle_options.m"
          }
#line 2087 "handle_options.m"
          {
#line 2087 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_1411_1411, libs__handle_options__STATE_VARIABLE_Globals_1400_1400, &libs__handle_options__STATE_VARIABLE_Globals_1412_1412);
          }
#line 2086 "handle_options.m"
        }
#line 2093 "handle_options.m"
    else
#line 2093 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1412_1412 = libs__handle_options__STATE_VARIABLE_Globals_1400_1400;
#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1412_1412, (MR_Integer) 549, &libs__handle_options__MercuryLibDirs_140);
    }
#line 2102 "handle_options.m"
    {
#line 2102 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1412_1412, &libs__handle_options__GradeString_141);
    }
#line 2152 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2153 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1469_1469 = libs__handle_options__STATE_VARIABLE_Globals_1412_1412;
#line 2152 "handle_options.m"
    else
#line 2104 "handle_options.m"
      {
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1644_1644 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_144;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_146;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__Rpath_147;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_148;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_149;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_150;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_151;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_152;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_153;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_154;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1419_1419;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1426_1426;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1427_1427;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1428_1428;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1431_1431;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1432_1432;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1433_1433;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1434_1434;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1443_1443;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1444_1444;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1445_1445;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1448_1448;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1449_1449;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1450_1450;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1451_1451;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1458_1458;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1459_1459;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1460_1460;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1461_1461;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1468_1468;
#line 2104 "handle_options.m"
        MR_Word libs__handle_options__V_1470_1470;

#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__V_1419_1419 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1419_1419, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1419_1419, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1419_1419, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1419_1419, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2105 "handle_options.m"
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_144 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__V_1419_1419, libs__handle_options__MercuryLibDirs_140);
        }
#line 2110 "handle_options.m"
        {
#line 2110 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1412_1412, (MR_Integer) 545, &libs__handle_options__LinkLibDirs1_146);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1428_1428 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__LinkLibDirs1_146, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1426_1426 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1426_1426, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2113 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1426_1426, 1) = ((MR_Box) (libs__handle_options__V_1428_1428));
#line 2113 "handle_options.m"
        }
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 545, libs__handle_options__V_1426_1426, libs__handle_options__STATE_VARIABLE_Globals_1412_1412, &libs__handle_options__STATE_VARIABLE_Globals_1427_1427);
        }
#line 2115 "handle_options.m"
        {
#line 2115 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1427_1427, (MR_Integer) 546, &libs__handle_options__Rpath_147);
        }
#line 2118 "handle_options.m"
        {
#line 2118 "handle_options.m"
          libs__handle_options__V_1433_1433 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__Rpath_147, libs__handle_options__ExtraLinkLibDirs_144);
        }
#line 2118 "handle_options.m"
        {
#line 2118 "handle_options.m"
          libs__handle_options__V_1431_1431 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1431_1431, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2118 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1431_1431, 1) = ((MR_Box) (libs__handle_options__V_1433_1433));
#line 2118 "handle_options.m"
        }
#line 2117 "handle_options.m"
        {
#line 2117 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 546, libs__handle_options__V_1431_1431, libs__handle_options__STATE_VARIABLE_Globals_1427_1427, &libs__handle_options__STATE_VARIABLE_Globals_1432_1432);
        }
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__V_1434_1434 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1434_1434, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1434_1434, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1434_1434, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2120 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1434_1434, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2120 "handle_options.m"
        }
#line 2120 "handle_options.m"
        {
#line 2120 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_148 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__V_1434_1434, libs__handle_options__MercuryLibDirs_140);
        }
#line 2124 "handle_options.m"
        {
#line 2124 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 492, &libs__handle_options__CIncludeDirs_149);
        }
#line 2127 "handle_options.m"
        {
#line 2127 "handle_options.m"
          libs__handle_options__V_1445_1445 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__CIncludeDirs_149);
        }
#line 2127 "handle_options.m"
        {
#line 2127 "handle_options.m"
          libs__handle_options__V_1443_1443 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1443_1443, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2127 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1443_1443, 1) = ((MR_Box) (libs__handle_options__V_1445_1445));
#line 2127 "handle_options.m"
        }
#line 2126 "handle_options.m"
        {
#line 2126 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 492, libs__handle_options__V_1443_1443, libs__handle_options__STATE_VARIABLE_Globals_1432_1432, &libs__handle_options__STATE_VARIABLE_Globals_1444_1444);
        }
#line 2128 "handle_options.m"
        {
#line 2128 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1444_1444, (MR_Integer) 536, &libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2131 "handle_options.m"
        {
#line 2131 "handle_options.m"
          libs__handle_options__V_1450_1450 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__ExtraIncludeDirs_148, libs__handle_options__ErlangIncludeDirs_150);
        }
#line 2131 "handle_options.m"
        {
#line 2131 "handle_options.m"
          libs__handle_options__V_1448_1448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1448_1448, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2131 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1448_1448, 1) = ((MR_Box) (libs__handle_options__V_1450_1450));
#line 2131 "handle_options.m"
        }
#line 2130 "handle_options.m"
        {
#line 2130 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 536, libs__handle_options__V_1448_1448, libs__handle_options__STATE_VARIABLE_Globals_1444_1444, &libs__handle_options__STATE_VARIABLE_Globals_1449_1449);
        }
#line 2133 "handle_options.m"
        {
#line 2133 "handle_options.m"
          libs__handle_options__V_1451_1451 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2133 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1451_1451, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2133 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1451_1451, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
#line 2133 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1451_1451, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2133 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1451_1451, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2133 "handle_options.m"
        }
#line 2133 "handle_options.m"
        {
#line 2133 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_151 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__V_1451_1451, libs__handle_options__MercuryLibDirs_140);
        }
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1449_1449, (MR_Integer) 650, &libs__handle_options__IntermodDirs0_152);
        }
#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__handle_options__V_1460_1460 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__ExtraIntermodDirs_151, libs__handle_options__IntermodDirs0_152);
        }
#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__handle_options__V_1458_1458 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1458_1458, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2141 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1458_1458, 1) = ((MR_Box) (libs__handle_options__V_1460_1460));
#line 2141 "handle_options.m"
        }
#line 2140 "handle_options.m"
        {
#line 2140 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 650, libs__handle_options__V_1458_1458, libs__handle_options__STATE_VARIABLE_Globals_1449_1449, &libs__handle_options__STATE_VARIABLE_Globals_1459_1459);
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__handle_options__V_1461_1461 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1461_1461, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1461_1461, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1461_1461, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2143 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1461_1461, 3) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2143 "handle_options.m"
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__handle_options__ExtraInitDirs_153 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__V_1461_1461, libs__handle_options__MercuryLibDirs_140);
        }
#line 2148 "handle_options.m"
        {
#line 2148 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1459_1459, (MR_Integer) 557, &libs__handle_options__InitDirs1_154);
        }
#line 2151 "handle_options.m"
        {
#line 2151 "handle_options.m"
          libs__handle_options__V_1470_1470 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1644_1644, libs__handle_options__InitDirs1_154, libs__handle_options__ExtraInitDirs_153);
        }
#line 2151 "handle_options.m"
        {
#line 2151 "handle_options.m"
          libs__handle_options__V_1468_1468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1468_1468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2151 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1468_1468, 1) = ((MR_Box) (libs__handle_options__V_1470_1470));
#line 2151 "handle_options.m"
        }
#line 2150 "handle_options.m"
        {
#line 2150 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 557, libs__handle_options__V_1468_1468, libs__handle_options__STATE_VARIABLE_Globals_1459_1459, &libs__handle_options__STATE_VARIABLE_Globals_1469_1469);
        }
#line 2104 "handle_options.m"
      }
#line 2159 "handle_options.m"
    {
#line 2159 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1469_1469, (MR_Integer) 651, &libs__handle_options__UseSearchDirs_155);
    }
#line 2169 "handle_options.m"
#line 2169 "handle_options.m"
    switch (libs__handle_options__UseSearchDirs_155) {
#line 2169 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2169 "handle_options.m"
      case (MR_Integer) 0:
#line 2170 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1476_1476 = libs__handle_options__STATE_VARIABLE_Globals_1469_1469;
#line 2169 "handle_options.m"
        break;
#line 2169 "handle_options.m"
      case (MR_Integer) 1:
#line 2162 "handle_options.m"
        {
#line 2162 "handle_options.m"
          MR_Word libs__handle_options__IntermodDirs1_156;
#line 2162 "handle_options.m"
          MR_Word libs__handle_options__SearchDirs_157;
#line 2162 "handle_options.m"
          MR_Word libs__handle_options__V_1475_1475;
#line 2162 "handle_options.m"
          MR_Word libs__handle_options__V_1477_1477;

#line 2163 "handle_options.m"
          {
#line 2163 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1469_1469, (MR_Integer) 650, &libs__handle_options__IntermodDirs1_156);
          }
#line 2165 "handle_options.m"
          {
#line 2165 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1469_1469, (MR_Integer) 649, &libs__handle_options__SearchDirs_157);
          }
#line 2168 "handle_options.m"
          {
#line 2168 "handle_options.m"
            libs__handle_options__V_1477_1477 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_156, libs__handle_options__SearchDirs_157);
          }
#line 2168 "handle_options.m"
          {
#line 2168 "handle_options.m"
            libs__handle_options__V_1475_1475 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1475_1475, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2168 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1475_1475, 1) = ((MR_Box) (libs__handle_options__V_1477_1477));
#line 2168 "handle_options.m"
          }
#line 2167 "handle_options.m"
          {
#line 2167 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 650, libs__handle_options__V_1475_1475, libs__handle_options__STATE_VARIABLE_Globals_1469_1469, &libs__handle_options__STATE_VARIABLE_Globals_1476_1476);
          }
#line 2162 "handle_options.m"
        }
#line 2169 "handle_options.m"
        break;
#line 2169 "handle_options.m"
    }
#line 2173 "handle_options.m"
    {
#line 2173 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 648, &libs__handle_options__UseGradeSubdirs_158);
    }
#line 2175 "handle_options.m"
    {
#line 2175 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 551, &libs__handle_options__SearchLibFilesDirs_159);
    }
#line 2177 "handle_options.m"
    {
#line 2177 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1476_1476, (MR_Integer) 650, &libs__handle_options__IntermodDirs2_160);
    }
#line 2179 "handle_options.m"
    {
#line 2179 "handle_options.m"
      libs__handle_options__ToGradeSubdir_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2179 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2179 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
#line 2179 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2179 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 3) = ((MR_Box) (libs__handle_options__TargetArch_129));
#line 2179 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_161, 4) = ((MR_Box) (libs__handle_options__GradeString_141));
#line 2179 "handle_options.m"
    }
#line 14330 "libs.handle_options.c"
#line 14331 "libs.handle_options.c"
    switch (libs__handle_options__UseGradeSubdirs_158) {
#line 14333 "libs.handle_options.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 14335 "libs.handle_options.c"
      case (MR_Integer) 0:
#line 14337 "libs.handle_options.c"
        {
#line 14339 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1653_1653;
#line 14341 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_165;
#line 14343 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_166;
#line 14345 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_167;
#line 14347 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1496_1496;

#line 2200 "handle_options.m"
          {
#line 2200 "handle_options.m"
            libs__handle_options__IntermodDirs3_165 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__IntermodDirs2_160);
          }
#line 2203 "handle_options.m"
          {
#line 2203 "handle_options.m"
            libs__handle_options__V_1496_1496 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2203 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1496_1496, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2203 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1496_1496, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_165));
#line 2203 "handle_options.m"
          }
#line 2202 "handle_options.m"
          {
#line 2202 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 650, libs__handle_options__V_1496_1496, libs__handle_options__STATE_VARIABLE_Globals_1476_1476, &libs__handle_options__STATE_VARIABLE_Globals_1497_1497);
          }
#line 2205 "handle_options.m"
          {
#line 2205 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1497_1497, (MR_Integer) 545, &libs__handle_options__LinkLibDirs2_166);
          }
#line 2207 "handle_options.m"
          {
#line 2207 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1497_1497, (MR_Integer) 557, &libs__handle_options__InitDirs2_167);
          }
#line 14380 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1653_1653 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2225 "handle_options.m"
          {
#line 2225 "handle_options.m"
            libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1653_1653, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__LinkLibDirs2_166);
          }
#line 2226 "handle_options.m"
          {
#line 2226 "handle_options.m"
            libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1653_1653, libs__handle_options__SearchLibFilesDirs_159, libs__handle_options__InitDirs2_167);
          }
#line 14392 "libs.handle_options.c"
        }
#line 14394 "libs.handle_options.c"
        break;
#line 14396 "libs.handle_options.c"
      case (MR_Integer) 1:
#line 14398 "libs.handle_options.c"
        {
#line 14400 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1646_1646;
#line 14402 "libs.handle_options.c"
          MR_Word libs__handle_options__TypeCtorInfo_1652_1652;
#line 14404 "libs.handle_options.c"
          MR_String libs__handle_options__GradeSubdir_163;
#line 14406 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_164;
#line 14408 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeLibDir_168;
#line 14410 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeLibDirs_169;
#line 14412 "libs.handle_options.c"
          MR_Word libs__handle_options__ToGradeInitDir_171;
#line 14414 "libs.handle_options.c"
          MR_Word libs__handle_options__SearchGradeInitDirs_172;
#line 14416 "libs.handle_options.c"
          MR_String libs__handle_options__V_1486_1486;
#line 14418 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1488_1488;
#line 14420 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1490_1490;
#line 14422 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1491_1491;
#line 14424 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1492_1492;
#line 14426 "libs.handle_options.c"
          MR_Word libs__handle_options__V_1493_1493;
#line 14428 "libs.handle_options.c"
          MR_String libs__handle_options__V_1494_1494;
#line 14430 "libs.handle_options.c"
          MR_Word libs__handle_options__IntermodDirs3_6217;
#line 14432 "libs.handle_options.c"
          MR_Word libs__handle_options__LinkLibDirs2_6218;
#line 14434 "libs.handle_options.c"
          MR_Word libs__handle_options__InitDirs2_6219;
#line 14436 "libs.handle_options.c"
          MR_Word libs__handle_options__V_6220_6220;

#line 2190 "handle_options.m"
          {
#line 2190 "handle_options.m"
            libs__handle_options__V_1486_1486 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_141);
          }
#line 2190 "handle_options.m"
          {
#line 2190 "handle_options.m"
            libs__handle_options__GradeSubdir_163 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1486_1486, libs__handle_options__TargetArch_129);
          }
#line 14449 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1646_1646 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2194 "handle_options.m"
          {
#line 2194 "handle_options.m"
            libs__handle_options__SearchLibFilesGradeSubdirs_164 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1646_1646, libs__handle_options__TypeCtorInfo_1646_1646, libs__handle_options__ToGradeSubdir_161, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2196 "handle_options.m"
          {
#line 2196 "handle_options.m"
            libs__handle_options__V_1488_1488 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1488_1488, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_163));
#line 2196 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1488_1488, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2196 "handle_options.m"
          }
#line 2197 "handle_options.m"
          {
#line 2197 "handle_options.m"
            libs__handle_options__V_1494_1494 = mercury__dir__this_directory_0_f_0();
          }
#line 2197 "handle_options.m"
          {
#line 2197 "handle_options.m"
            libs__handle_options__V_1493_1493 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1493_1493, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1493_1493, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1493_1493, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1493_1493, 3) = ((MR_Box) (libs__handle_options__V_1494_1494));
#line 2197 "handle_options.m"
          }
#line 2197 "handle_options.m"
          {
#line 2197 "handle_options.m"
            libs__handle_options__V_1492_1492 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2197 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1492_1492, 3) = ((MR_Box) (libs__handle_options__V_1493_1493));
#line 2197 "handle_options.m"
          }
#line 2197 "handle_options.m"
          {
#line 2197 "handle_options.m"
            libs__handle_options__V_1491_1491 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1646_1646, libs__handle_options__V_1492_1492, libs__handle_options__IntermodDirs2_160);
          }
#line 2196 "handle_options.m"
          {
#line 2196 "handle_options.m"
            libs__handle_options__V_1490_1490 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1646_1646, libs__handle_options__SearchLibFilesGradeSubdirs_164, libs__handle_options__V_1491_1491);
          }
#line 2196 "handle_options.m"
          {
#line 2196 "handle_options.m"
            libs__handle_options__IntermodDirs3_6217 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1646_1646, libs__handle_options__V_1488_1488, libs__handle_options__V_1490_1490);
          }
#line 2203 "handle_options.m"
          {
#line 2203 "handle_options.m"
            libs__handle_options__V_6220_6220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2203 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6220_6220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2203 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6220_6220, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6217));
#line 2203 "handle_options.m"
          }
#line 2202 "handle_options.m"
          {
#line 2202 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 650, libs__handle_options__V_6220_6220, libs__handle_options__STATE_VARIABLE_Globals_1476_1476, &libs__handle_options__STATE_VARIABLE_Globals_1497_1497);
          }
#line 2205 "handle_options.m"
          {
#line 2205 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1497_1497, (MR_Integer) 545, &libs__handle_options__LinkLibDirs2_6218);
          }
#line 2207 "handle_options.m"
          {
#line 2207 "handle_options.m"
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1497_1497, (MR_Integer) 557, &libs__handle_options__InitDirs2_6219);
          }
#line 2215 "handle_options.m"
          {
#line 2215 "handle_options.m"
            libs__handle_options__ToGradeLibDir_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2215 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2215 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
#line 2215 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2215 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_168, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2215 "handle_options.m"
          }
#line 14553 "libs.handle_options.c"
          libs__handle_options__TypeCtorInfo_1652_1652 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2216 "handle_options.m"
          {
#line 2216 "handle_options.m"
            libs__handle_options__SearchGradeLibDirs_169 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__ToGradeLibDir_168, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2217 "handle_options.m"
          {
#line 2217 "handle_options.m"
            libs__handle_options__LinkLibDirs_170 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__SearchGradeLibDirs_169, libs__handle_options__LinkLibDirs2_6218);
          }
#line 2219 "handle_options.m"
          {
#line 2219 "handle_options.m"
            libs__handle_options__ToGradeInitDir_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2219 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2219 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
#line 2219 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2219 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_171, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2219 "handle_options.m"
          }
#line 2221 "handle_options.m"
          {
#line 2221 "handle_options.m"
            libs__handle_options__SearchGradeInitDirs_172 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__ToGradeInitDir_171, libs__handle_options__SearchLibFilesDirs_159);
          }
#line 2222 "handle_options.m"
          {
#line 2222 "handle_options.m"
            libs__handle_options__InitDirs_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1652_1652, libs__handle_options__SearchGradeInitDirs_172, libs__handle_options__InitDirs2_6219);
          }
#line 14589 "libs.handle_options.c"
        }
#line 14591 "libs.handle_options.c"
        break;
#line 14593 "libs.handle_options.c"
    }
#line 2229 "handle_options.m"
    {
#line 2229 "handle_options.m"
      libs__handle_options__V_1513_1513 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2229 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1513_1513, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2229 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1513_1513, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_170));
#line 2229 "handle_options.m"
    }
#line 2228 "handle_options.m"
    {
#line 2228 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 545, libs__handle_options__V_1513_1513, libs__handle_options__STATE_VARIABLE_Globals_1497_1497, &libs__handle_options__STATE_VARIABLE_Globals_1514_1514);
    }
#line 2231 "handle_options.m"
    {
#line 2231 "handle_options.m"
      libs__handle_options__V_1516_1516 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2231 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1516_1516, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2231 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1516_1516, 1) = ((MR_Box) (libs__handle_options__InitDirs_173));
#line 2231 "handle_options.m"
    }
#line 2230 "handle_options.m"
    {
#line 2230 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 557, libs__handle_options__V_1516_1516, libs__handle_options__STATE_VARIABLE_Globals_1514_1514, &libs__handle_options__STATE_VARIABLE_Globals_1517_1517);
    }
#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1517_1517, (MR_Integer) 647, &libs__handle_options__UseSubdirs_174);
    }
#line 2245 "handle_options.m"
#line 2245 "handle_options.m"
    switch (libs__handle_options__UseGradeSubdirs_158) {
#line 2245 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2245 "handle_options.m"
      case (MR_Integer) 0:
#line 2246 "handle_options.m"
        {
#line 14639 "libs.handle_options.c"
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_174 == (MR_Integer) 1);
#line 2246 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 2246 "handle_options.m"
            {
#line 2249 "handle_options.m"
              libs__handle_options__ToMihsSubdir_175 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2250 "handle_options.m"
              libs__handle_options__ToHrlsSubdir_176 = (MR_Word) &libs__handle_options_scalar_common_1[16];
#line 2250 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 2246 "handle_options.m"
            }
#line 2246 "handle_options.m"
        }
#line 2245 "handle_options.m"
        break;
#line 2245 "handle_options.m"
      case (MR_Integer) 1:
#line 2240 "handle_options.m"
        {
#line 2241 "handle_options.m"
          {
#line 2241 "handle_options.m"
            libs__handle_options__ToMihsSubdir_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2241 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2241 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
#line 2241 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2241 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2241 "handle_options.m"
          }
#line 2243 "handle_options.m"
          {
#line 2243 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2243 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2243 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
#line 2243 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2243 "handle_options.m"
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_161));
#line 2243 "handle_options.m"
          }
#line 2240 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2240 "handle_options.m"
        }
#line 2245 "handle_options.m"
        break;
#line 2245 "handle_options.m"
    }
#line 2272 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2258 "handle_options.m"
      {
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1654_1654;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_177;
#line 2258 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_178;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_179;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_180;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_181;
#line 2258 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_182;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_183;
#line 2258 "handle_options.m"
        MR_String libs__handle_options__V_1542_1542;
#line 2258 "handle_options.m"
        MR_String libs__handle_options__V_1543_1543;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__V_1544_1544;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__V_1545_1545;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__V_1547_1547;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1548_1548;
#line 2258 "handle_options.m"
        MR_String libs__handle_options__V_1550_1550;
#line 2258 "handle_options.m"
        MR_Word libs__handle_options__V_1552_1552;
#line 2259 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2259 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_178;
#line 2268 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2268 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_182;

#line 2257 "handle_options.m"
        {
#line 2257 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1517_1517, (MR_Integer) 492, &libs__handle_options__CIncludeDirs1_177);
        }
#line 2259 "handle_options.m"
        {
#line 2259 "handle_options.m"
          libs__handle_options__V_1542_1542 = mercury__dir__this_directory_0_f_0();
        }
#line 2259 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_175, (MR_Integer) 1)));
#line 2259 "handle_options.m"
        {
#line 2259 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_178 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_175), ((MR_Box) (libs__handle_options__V_1542_1542)));
        }
#line 2259 "handle_options.m"
        libs__handle_options__MihsSubdir_178 = ((MR_String) libs__handle_options__conv12_MihsSubdir_178);
#line 14761 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1654_1654 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2260 "handle_options.m"
        {
#line 2260 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_179 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__ToMihsSubdir_175, libs__handle_options__SearchLibFilesDirs_159);
        }
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__handle_options__V_1543_1543 = mercury__dir__this_directory_0_f_0();
        }
#line 2262 "handle_options.m"
        {
#line 2262 "handle_options.m"
          libs__handle_options__V_1545_1545 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1654_1654, libs__handle_options__SearchLibMihsSubdirs_179, libs__handle_options__CIncludeDirs1_177);
        }
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__handle_options__V_1544_1544 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2261 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1544_1544, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_178));
#line 2261 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1544_1544, 1) = ((MR_Box) (libs__handle_options__V_1545_1545));
#line 2261 "handle_options.m"
        }
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2261 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 0) = ((MR_Box) (libs__handle_options__V_1543_1543));
#line 2261 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_180, 1) = ((MR_Box) (libs__handle_options__V_1544_1544));
#line 2261 "handle_options.m"
        }
#line 2264 "handle_options.m"
        {
#line 2264 "handle_options.m"
          libs__handle_options__V_1547_1547 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1547_1547, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1547_1547, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_180));
#line 2264 "handle_options.m"
        }
#line 2263 "handle_options.m"
        {
#line 2263 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 492, libs__handle_options__V_1547_1547, libs__handle_options__STATE_VARIABLE_Globals_1517_1517, &libs__handle_options__STATE_VARIABLE_Globals_1548_1548);
        }
#line 2266 "handle_options.m"
        {
#line 2266 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1548_1548, (MR_Integer) 536, &libs__handle_options__ErlangIncludeDirs1_181);
        }
#line 2268 "handle_options.m"
        {
#line 2268 "handle_options.m"
          libs__handle_options__V_1550_1550 = mercury__dir__this_directory_0_f_0();
        }
#line 2268 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_176, (MR_Integer) 1)));
#line 2268 "handle_options.m"
        {
#line 2268 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_182 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_176), ((MR_Box) (libs__handle_options__V_1550_1550)));
        }
#line 2268 "handle_options.m"
        libs__handle_options__HrlsSubdir_182 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_182);
#line 2269 "handle_options.m"
        {
#line 2269 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2269 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_182));
#line 2269 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_183, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_181));
#line 2269 "handle_options.m"
        }
#line 2271 "handle_options.m"
        {
#line 2271 "handle_options.m"
          libs__handle_options__V_1552_1552 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1552_1552, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2271 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1552_1552, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_183));
#line 2271 "handle_options.m"
        }
#line 2270 "handle_options.m"
        {
#line 2270 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 536, libs__handle_options__V_1552_1552, libs__handle_options__STATE_VARIABLE_Globals_1548_1548, &libs__handle_options__STATE_VARIABLE_Globals_1553_1553);
        }
#line 2258 "handle_options.m"
      }
#line 2272 "handle_options.m"
    else
#line 2272 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1553_1553 = libs__handle_options__STATE_VARIABLE_Globals_1517_1517;
#line 2278 "handle_options.m"
    {
#line 2278 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 331, (MR_Integer) 12, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1553_1553, &libs__handle_options__STATE_VARIABLE_Globals_1557_1557);
    }
#line 1878 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_102 == (MR_Integer) 1);
#line 1878 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1878 "handle_options.m"
      {
#line 1879 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_27 == (MR_Integer) 5);
#line 1878 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1880 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_118 == (MR_Integer) 1);
#line 1878 "handle_options.m"
      }
#line 14882 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 14884 "libs.handle_options.c"
      {
#line 14886 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1252_1252;

#line 1882 "handle_options.m"
        {
#line 1882 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1165_1165, &libs__handle_options__STATE_VARIABLE_Errors_1252_1252);
        }
#line 2291 "handle_options.m"
        {
#line 2291 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 458, libs__handle_options__V_274_274, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1557_1557, libs__handle_options__STATE_VARIABLE_Errors_1252_1252, &libs__handle_options__STATE_VARIABLE_Errors_1569_1569);
        }
#line 14899 "libs.handle_options.c"
      }
#line 14901 "libs.handle_options.c"
    else
#line 2289 "handle_options.m"
#line 2289 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_102) {
#line 2289 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2289 "handle_options.m"
        case (MR_Integer) 0:
#line 2284 "handle_options.m"
          {
#line 2285 "handle_options.m"
            {
#line 2285 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 469, libs__handle_options__V_485_485, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1557_1557, libs__handle_options__STATE_VARIABLE_Errors_1165_1165, &libs__handle_options__STATE_VARIABLE_Errors_1569_1569);
            }
#line 2284 "handle_options.m"
          }
#line 2289 "handle_options.m"
          break;
#line 2289 "handle_options.m"
        case (MR_Integer) 1:
#line 2290 "handle_options.m"
          {
#line 2291 "handle_options.m"
            {
#line 2291 "handle_options.m"
              libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 458, libs__handle_options__V_274_274, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1557_1557, libs__handle_options__STATE_VARIABLE_Errors_1165_1165, &libs__handle_options__STATE_VARIABLE_Errors_1569_1569);
            }
#line 2290 "handle_options.m"
          }
#line 2289 "handle_options.m"
          break;
#line 2289 "handle_options.m"
      }
#line 2295 "handle_options.m"
    {
#line 2295 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 98, libs__handle_options__V_485_485, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1557_1557, libs__handle_options__STATE_VARIABLE_Errors_1569_1569, &libs__handle_options__STATE_VARIABLE_Errors_1577_1577);
    }
#line 2304 "handle_options.m"
#line 2304 "handle_options.m"
    switch (libs__handle_options__Target_26) {
#line 2304 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2304 "handle_options.m"
      case (MR_Integer) 0:
#line 2302 "handle_options.m"
        {
#line 2303 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[200]);
#line 2302 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1601_1601 = libs__handle_options__STATE_VARIABLE_Globals_1557_1557;
#line 2302 "handle_options.m"
        }
#line 2304 "handle_options.m"
        break;
#line 2304 "handle_options.m"
      case (MR_Integer) 2:
#line 2309 "handle_options.m"
        {
#line 2310 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[12]);
#line 2309 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1601_1601 = libs__handle_options__STATE_VARIABLE_Globals_1557_1557;
#line 2309 "handle_options.m"
        }
#line 2304 "handle_options.m"
        break;
#line 2304 "handle_options.m"
      case (MR_Integer) 4:
#line 2315 "handle_options.m"
        {
#line 2315 "handle_options.m"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1585_1585;

#line 2316 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[201]);
#line 2317 "handle_options.m"
          {
#line 2317 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1557_1557, &libs__handle_options__STATE_VARIABLE_Globals_1585_1585);
          }
#line 2318 "handle_options.m"
          {
#line 2318 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1585_1585, &libs__handle_options__STATE_VARIABLE_Globals_1601_1601);
          }
#line 2315 "handle_options.m"
        }
#line 2304 "handle_options.m"
        break;
#line 2304 "handle_options.m"
      case (MR_Integer) 1:
#line 2305 "handle_options.m"
        {
#line 2306 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]);
#line 2307 "handle_options.m"
          {
#line 2307 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1557_1557, &libs__handle_options__STATE_VARIABLE_Globals_1601_1601);
          }
#line 2305 "handle_options.m"
        }
#line 2304 "handle_options.m"
        break;
#line 2304 "handle_options.m"
      case (MR_Integer) 3:
#line 2312 "handle_options.m"
        {
#line 2313 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_184 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[202]);
#line 2312 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1601_1601 = libs__handle_options__STATE_VARIABLE_Globals_1557_1557;
#line 2312 "handle_options.m"
        }
#line 2304 "handle_options.m"
        break;
#line 2304 "handle_options.m"
    }
#line 2322 "handle_options.m"
    {
#line 2322 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1601_1601, (MR_Integer) 266, &libs__handle_options__CurrentBackendForeignLanguage_185);
    }
#line 2328 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2325 "handle_options.m"
      {
#line 2325 "handle_options.m"
        MR_Word libs__handle_options__V_1607_1607;

#line 2327 "handle_options.m"
        {
#line 2327 "handle_options.m"
          libs__handle_options__V_1607_1607 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1607_1607, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2327 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1607_1607, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_184));
#line 2327 "handle_options.m"
        }
#line 2326 "handle_options.m"
        {
#line 2326 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_1607_1607, libs__handle_options__STATE_VARIABLE_Globals_1601_1601, &libs__handle_options__STATE_VARIABLE_Globals_1608_1608);
        }
#line 2325 "handle_options.m"
      }
#line 2328 "handle_options.m"
    else
#line 2329 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1608_1608 = libs__handle_options__STATE_VARIABLE_Globals_1601_1601;
#line 2332 "handle_options.m"
    {
#line 2332 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1608_1608, (MR_Integer) 319, &libs__handle_options__CompareSpec_188);
    }
#line 2334 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_188 < (MR_Integer) 0);
#line 2346 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2342 "handle_options.m"
#line 2342 "handle_options.m"
      switch (libs__handle_options__HighLevelCode_102) {
#line 2342 "handle_options.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2342 "handle_options.m"
        case (MR_Integer) 0:
#line 2340 "handle_options.m"
          {
#line 2341 "handle_options.m"
            {
#line 2341 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1608_1608, &libs__handle_options__STATE_VARIABLE_Globals_1617_1617);
            }
#line 2340 "handle_options.m"
          }
#line 2342 "handle_options.m"
          break;
#line 2342 "handle_options.m"
        case (MR_Integer) 1:
#line 2343 "handle_options.m"
          {
#line 2344 "handle_options.m"
            {
#line 2344 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_1608_1608, &libs__handle_options__STATE_VARIABLE_Globals_1617_1617);
            }
#line 2343 "handle_options.m"
          }
#line 2342 "handle_options.m"
          break;
#line 2342 "handle_options.m"
      }
#line 2346 "handle_options.m"
    else
#line 2346 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1608_1608;
#line 2353 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_26 == (MR_Integer) 0);
#line 2353 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2353 "handle_options.m"
      {
#line 2359 "handle_options.m"
#line 2359 "handle_options.m"
        switch (libs__handle_options__TagsMethod_58) {
#line 2359 "handle_options.m"
          default:
#line 2359 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2359 "handle_options.m"
            break;
#line 2359 "handle_options.m"
          case (MR_Integer) 2:
#line 2359 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2359 "handle_options.m"
            break;
#line 2359 "handle_options.m"
          case (MR_Integer) 1:
#line 2358 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2359 "handle_options.m"
            break;
#line 2359 "handle_options.m"
        }
#line 2353 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2353 "handle_options.m"
          {
#line 2361 "handle_options.m"
            libs__handle_options__V_1619_1619 = (MR_Integer) 2;
#line 2361 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1619_1619);
#line 2353 "handle_options.m"
          }
#line 2353 "handle_options.m"
      }
#line 2365 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2363 "handle_options.m"
      {
#line 2363 "handle_options.m"
        {
#line 2363 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_274_274, libs__handle_options__STATE_VARIABLE_Globals_1617_1617, &libs__handle_options__STATE_VARIABLE_Globals_1622_1622);
        }
#line 2363 "handle_options.m"
      }
#line 2365 "handle_options.m"
    else
#line 2366 "handle_options.m"
      {
#line 2366 "handle_options.m"
        {
#line 2366 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_485_485, libs__handle_options__STATE_VARIABLE_Globals_1617_1617, &libs__handle_options__STATE_VARIABLE_Globals_1622_1622);
        }
#line 2366 "handle_options.m"
      }
#line 2373 "handle_options.m"
#line 2373 "handle_options.m"
    switch (libs__handle_options__HighLevelCode_102) {
#line 2373 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2373 "handle_options.m"
      case (MR_Integer) 0:
#line 2372 "handle_options.m"
        {
#line 2372 "handle_options.m"
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1622_1622, &libs__handle_options__STATE_VARIABLE_Globals_1628_1628);
        }
#line 2373 "handle_options.m"
        break;
#line 2373 "handle_options.m"
      case (MR_Integer) 1:
#line 2374 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1628_1628 = libs__handle_options__STATE_VARIABLE_Globals_1622_1622;
#line 2373 "handle_options.m"
        break;
#line 2373 "handle_options.m"
    }
#line 2376 "handle_options.m"
    {
#line 2376 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1628_1628, libs__handle_options__STATE_VARIABLE_Globals_191, libs__handle_options__STATE_VARIABLE_Errors_1577_1577, libs__handle_options__STATE_VARIABLE_Errors_190);
    }
#line 2377 "handle_options.m"
    {
#line 2377 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_191);
#line 2377 "handle_options.m"
      return;
    }
#line 676 "handle_options.m"
  }
#line 661 "handle_options.m"
}

#line 654 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 654 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_6,
#line 654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_7)
#line 654 "handle_options.m"
{
#line 657 "handle_options.m"
  {
#line 657 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 657 "handle_options.m"
    {
#line 657 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_7 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_6, ((MR_Box) (libs__handle_options__Error_4)));
    }
#line 657 "handle_options.m"
  }
#line 654 "handle_options.m"
}

#line 530 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_24_p_0_1(
#line 530 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 530 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 530 "handle_options.m"
{
#line 530 "handle_options.m"
  {
#line 530 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 530 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 530 "handle_options.m"
    {
#line 530 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__check_option_values__530__1_1_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 530 "handle_options.m"
    return libs__handle_options__succeeded;
#line 530 "handle_options.m"
  }
#line 530 "handle_options.m"
}

#line 239 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_24_p_0(
#line 239 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_133,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_134,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__Target_26,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_27,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_28,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_29,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_30,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_31,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_32,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_33,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_34,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_35,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_36,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_37,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_38,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_39,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_40,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_41,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_42,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__LimitErrorContextsMap_43,
#line 239 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_135,
#line 239 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_136)
#line 239 "handle_options.m"
{
#line 254 "handle_options.m"
  {
#line 254 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_322_322 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_323_323 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__Target0_46;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__GC_Method0_49;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod0_52;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__PercentFull_55;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__TermNorm0_57;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__Term2Norm0_60;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableTracing_63;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__Suppress_71;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableSSDB_74;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafeOption_80;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__DumpAliasOption_83;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerType0_87;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerType0_90;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraint0_93;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraintArg0_94;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__DotNetLibVersionOpt_98;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__FeedbackFile0_110;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__HostEnvType0_117;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvType0_120;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvType0_123;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__LimitErrorContextsOption_126;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_141_141;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_146_146;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_153_153;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_160_160;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_167_167;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_174_174;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_185_185;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_196_196;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_202_202;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_205_205;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_209_209;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_211_211;
#line 254 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_213_213;
#line 254 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_214_214;
#line 254 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_217_217;
#line 254 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_221_221;
#line 254 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_245_245;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__V_248_248;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_249_249;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_252_252;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_263_263;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_274_274;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_287_287;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_290_290;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_295_295;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_300_300;
#line 254 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_304_304;
#line 255 "handle_options.m"
    MR_Box libs__handle_options__conv0_Target0_46;
#line 261 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_48;
#line 257 "handle_options.m"
    MR_String libs__handle_options__TargetStr_47;
#line 268 "handle_options.m"
    MR_Box libs__handle_options__conv1_GC_Method0_49;
#line 274 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_51;
#line 270 "handle_options.m"
    MR_String libs__handle_options__GC_MethodStr_50;
#line 282 "handle_options.m"
    MR_Box libs__handle_options__conv2_TagsMethod0_52;
#line 288 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_54;
#line 284 "handle_options.m"
    MR_String libs__handle_options__TagsMethodStr_53;
#line 294 "handle_options.m"
    MR_Box libs__handle_options__conv3_PercentFull_55;
#line 296 "handle_options.m"
    MR_Integer libs__handle_options__Percent_56;
#line 296 "handle_options.m"
    MR_Integer libs__handle_options__V_157_157;
#line 296 "handle_options.m"
    MR_Integer libs__handle_options__V_158_158;
#line 307 "handle_options.m"
    MR_Box libs__handle_options__conv4_TermNorm0_57;
#line 313 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_59;
#line 309 "handle_options.m"
    MR_String libs__handle_options__TermNormStr_58;
#line 320 "handle_options.m"
    MR_Box libs__handle_options__conv5_Term2Norm0_60;
#line 326 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_62;
#line 322 "handle_options.m"
    MR_String libs__handle_options__Term2NormStr_61;
#line 333 "handle_options.m"
    MR_Box libs__handle_options__conv6_ForceDisableTracing_63;
#line 334 "handle_options.m"
    MR_Word libs__handle_options__V_180_180;
#line 363 "handle_options.m"
    MR_Box libs__handle_options__conv10_Suppress_71;
#line 369 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_73;
#line 365 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_72;
#line 374 "handle_options.m"
    MR_Box libs__handle_options__conv11_ForceDisableSSDB_74;
#line 375 "handle_options.m"
    MR_Word libs__handle_options__V_198_198;
#line 392 "handle_options.m"
    MR_Box libs__handle_options__conv14_MaybeThreadSafeOption_80;
#line 398 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafe0_82;
#line 394 "handle_options.m"
    MR_String libs__handle_options__MaybeThreadSafeString_81;
#line 403 "handle_options.m"
    MR_Box libs__handle_options__conv15_DumpAliasOption_83;
#line 405 "handle_options.m"
    MR_String libs__handle_options__DumpAlias_84;
#line 432 "handle_options.m"
    MR_Char libs__handle_options__V_216_216;
#line 441 "handle_options.m"
    MR_Char libs__handle_options__V_220_220;
#line 472 "handle_options.m"
    MR_Char libs__handle_options__V_244_244;
#line 481 "handle_options.m"
    MR_Box libs__handle_options__conv16_C_CompilerType0_87;
#line 487 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_89;
#line 483 "handle_options.m"
    MR_String libs__handle_options__C_CompilerTypeStr_88;
#line 494 "handle_options.m"
    MR_Box libs__handle_options__conv17_CSharp_CompilerType0_90;
#line 501 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_92;
#line 496 "handle_options.m"
    MR_String libs__handle_options__CSharp_CompilerTypeStr_91;
#line 509 "handle_options.m"
    MR_Box libs__handle_options__conv18_ReuseConstraint0_93;
#line 510 "handle_options.m"
    MR_Box libs__handle_options__conv19_ReuseConstraintArg0_94;
#line 519 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_97;
#line 513 "handle_options.m"
    MR_String libs__handle_options__ReuseConstraintStr_95;
#line 513 "handle_options.m"
    MR_Integer libs__handle_options__ReuseConstraintArgNum_96;
#line 527 "handle_options.m"
    MR_Box libs__handle_options__conv20_DotNetLibVersionOpt_98;
#line 539 "handle_options.m"
    MR_Integer libs__handle_options__Major_105;
#line 539 "handle_options.m"
    MR_Integer libs__handle_options__Minor_106;
#line 539 "handle_options.m"
    MR_Integer libs__handle_options__Build_107;
#line 539 "handle_options.m"
    MR_Integer libs__handle_options__Revision_108;
#line 529 "handle_options.m"
    MR_String libs__handle_options__DotNetLibVersionStr_99;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__IsSep_100;
#line 529 "handle_options.m"
    MR_String libs__handle_options__Mj_101;
#line 529 "handle_options.m"
    MR_String libs__handle_options__Mn_102;
#line 529 "handle_options.m"
    MR_String libs__handle_options__Bu_103;
#line 529 "handle_options.m"
    MR_String libs__handle_options__Rv_104;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__V_268_268;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__V_269_269;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__V_270_270;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__V_271_271;
#line 529 "handle_options.m"
    MR_Word libs__handle_options__V_272_272;
#line 550 "handle_options.m"
    MR_Box libs__handle_options__conv21_FeedbackFile0_110;
#line 573 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_111;
#line 577 "handle_options.m"
    MR_Box libs__handle_options__conv22_HostEnvType0_117;
#line 583 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_119;
#line 579 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_118;
#line 590 "handle_options.m"
    MR_Box libs__handle_options__conv23_SystemEnvType0_120;
#line 600 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_122;
#line 592 "handle_options.m"
    MR_String libs__handle_options__SystemEnvTypeStr_121;
#line 607 "handle_options.m"
    MR_Box libs__handle_options__conv24_TargetEnvType0_123;
#line 613 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_125;
#line 609 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_124;
#line 630 "handle_options.m"
    MR_Box libs__handle_options__conv25_LimitErrorContextsOption_126;
#line 649 "handle_options.m"
    MR_Word libs__handle_options__LimitErrorContextsOptionStrs_127;

#line 255 "handle_options.m"
    {
#line 255 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 177)), &libs__handle_options__conv0_Target0_46);
    }
#line 255 "handle_options.m"
    libs__handle_options__Target0_46 = ((MR_Word) libs__handle_options__conv0_Target0_46);
#line 257 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Target0_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_46, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 257 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 257 "handle_options.m"
      {
#line 257 "handle_options.m"
        libs__handle_options__TargetStr_47 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_46, (MR_Integer) 1)));
#line 258 "handle_options.m"
        {
#line 258 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_47, &libs__handle_options__TargetPrime_48);
        }
#line 257 "handle_options.m"
      }
#line 261 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 260 "handle_options.m"
      {
#line 260 "handle_options.m"
        *libs__handle_options__Target_26 = libs__handle_options__TargetPrime_48;
#line 260 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_141_141 = libs__handle_options__STATE_VARIABLE_Errors_0_135;
#line 260 "handle_options.m"
      }
#line 261 "handle_options.m"
    else
#line 262 "handle_options.m"
      {
#line 262 "handle_options.m"
        *libs__handle_options__Target_26 = (MR_Integer) 0;
#line 263 "handle_options.m"
        {
#line 263 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid target option (must be \140c\', \140il\', \140java\', \'csharp\', or \140erlang\')", libs__handle_options__STATE_VARIABLE_Errors_0_135, &libs__handle_options__STATE_VARIABLE_Errors_141_141);
        }
#line 262 "handle_options.m"
      }
#line 268 "handle_options.m"
    {
#line 268 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 216)), &libs__handle_options__conv1_GC_Method0_49);
    }
#line 268 "handle_options.m"
    libs__handle_options__GC_Method0_49 = ((MR_Word) libs__handle_options__conv1_GC_Method0_49);
#line 270 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__GC_Method0_49)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_49, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 270 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 270 "handle_options.m"
      {
#line 270 "handle_options.m"
        libs__handle_options__GC_MethodStr_50 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_49, (MR_Integer) 1)));
#line 271 "handle_options.m"
        {
#line 271 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_50, &libs__handle_options__GC_MethodPrime_51);
        }
#line 270 "handle_options.m"
      }
#line 274 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 273 "handle_options.m"
      {
#line 273 "handle_options.m"
        *libs__handle_options__GC_Method_27 = libs__handle_options__GC_MethodPrime_51;
#line 273 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_146_146 = libs__handle_options__STATE_VARIABLE_Errors_141_141;
#line 273 "handle_options.m"
      }
#line 274 "handle_options.m"
    else
#line 275 "handle_options.m"
      {
#line 275 "handle_options.m"
        *libs__handle_options__GC_Method_27 = (MR_Integer) 1;
#line 276 "handle_options.m"
        {
#line 276 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140accurate\', or \140automatic\')", libs__handle_options__STATE_VARIABLE_Errors_141_141, &libs__handle_options__STATE_VARIABLE_Errors_146_146);
        }
#line 275 "handle_options.m"
      }
#line 282 "handle_options.m"
    {
#line 282 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 237)), &libs__handle_options__conv2_TagsMethod0_52);
    }
#line 282 "handle_options.m"
    libs__handle_options__TagsMethod0_52 = ((MR_Word) libs__handle_options__conv2_TagsMethod0_52);
#line 284 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TagsMethod0_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 284 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 284 "handle_options.m"
      {
#line 284 "handle_options.m"
        libs__handle_options__TagsMethodStr_53 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_52, (MR_Integer) 1)));
#line 285 "handle_options.m"
        {
#line 285 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_53, &libs__handle_options__TagsMethodPrime_54);
        }
#line 284 "handle_options.m"
      }
#line 288 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 287 "handle_options.m"
      {
#line 287 "handle_options.m"
        *libs__handle_options__TagsMethod_28 = libs__handle_options__TagsMethodPrime_54;
#line 287 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_153_153 = libs__handle_options__STATE_VARIABLE_Errors_146_146;
#line 287 "handle_options.m"
      }
#line 288 "handle_options.m"
    else
#line 289 "handle_options.m"
      {
#line 289 "handle_options.m"
        *libs__handle_options__TagsMethod_28 = (MR_Integer) 0;
#line 290 "handle_options.m"
        {
#line 290 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid tags option (must be \140none\', \140low\' or \140high\')", libs__handle_options__STATE_VARIABLE_Errors_146_146, &libs__handle_options__STATE_VARIABLE_Errors_153_153);
        }
#line 289 "handle_options.m"
      }
#line 294 "handle_options.m"
    {
#line 294 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 322)), &libs__handle_options__conv3_PercentFull_55);
    }
#line 294 "handle_options.m"
    libs__handle_options__PercentFull_55 = ((MR_Word) libs__handle_options__conv3_PercentFull_55);
#line 296 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__PercentFull_55)) == (MR_mktag((MR_Integer) 2)));
#line 296 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 296 "handle_options.m"
      {
#line 296 "handle_options.m"
        libs__handle_options__Percent_56 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__PercentFull_55, (MR_Integer) 0)));
#line 297 "handle_options.m"
        libs__handle_options__V_157_157 = (MR_Integer) 1;
#line 297 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Percent_56 >= libs__handle_options__V_157_157);
#line 296 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 296 "handle_options.m"
          {
#line 298 "handle_options.m"
            libs__handle_options__V_158_158 = (MR_Integer) 100;
#line 298 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Percent_56 <= libs__handle_options__V_158_158);
#line 296 "handle_options.m"
          }
#line 296 "handle_options.m"
      }
#line 301 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 301 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_160_160 = libs__handle_options__STATE_VARIABLE_Errors_153_153;
#line 301 "handle_options.m"
    else
#line 302 "handle_options.m"
      {
#line 302 "handle_options.m"
        {
#line 302 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", libs__handle_options__STATE_VARIABLE_Errors_153_153, &libs__handle_options__STATE_VARIABLE_Errors_160_160);
        }
#line 302 "handle_options.m"
      }
#line 307 "handle_options.m"
    {
#line 307 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 421)), &libs__handle_options__conv4_TermNorm0_57);
    }
#line 307 "handle_options.m"
    libs__handle_options__TermNorm0_57 = ((MR_Word) libs__handle_options__conv4_TermNorm0_57);
#line 309 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TermNorm0_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_57, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 309 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 309 "handle_options.m"
      {
#line 309 "handle_options.m"
        libs__handle_options__TermNormStr_58 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_57, (MR_Integer) 1)));
#line 310 "handle_options.m"
        {
#line 310 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_58, &libs__handle_options__TermNormPrime_59);
        }
#line 309 "handle_options.m"
      }
#line 313 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 312 "handle_options.m"
      {
#line 312 "handle_options.m"
        *libs__handle_options__TermNorm_29 = libs__handle_options__TermNormPrime_59;
#line 312 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_167_167 = libs__handle_options__STATE_VARIABLE_Errors_160_160;
#line 312 "handle_options.m"
      }
#line 313 "handle_options.m"
    else
#line 314 "handle_options.m"
      {
#line 314 "handle_options.m"
        *libs__handle_options__TermNorm_29 = (MR_Integer) 0;
#line 315 "handle_options.m"
        {
#line 315 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_160_160, &libs__handle_options__STATE_VARIABLE_Errors_167_167);
        }
#line 314 "handle_options.m"
      }
#line 320 "handle_options.m"
    {
#line 320 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 427)), &libs__handle_options__conv5_Term2Norm0_60);
    }
#line 320 "handle_options.m"
    libs__handle_options__Term2Norm0_60 = ((MR_Word) libs__handle_options__conv5_Term2Norm0_60);
#line 322 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Term2Norm0_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_60, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 322 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 322 "handle_options.m"
      {
#line 322 "handle_options.m"
        libs__handle_options__Term2NormStr_61 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_60, (MR_Integer) 1)));
#line 323 "handle_options.m"
        {
#line 323 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_61, &libs__handle_options__Term2NormPrime_62);
        }
#line 322 "handle_options.m"
      }
#line 326 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 325 "handle_options.m"
      {
#line 325 "handle_options.m"
        *libs__handle_options__Term2Norm_30 = libs__handle_options__Term2NormPrime_62;
#line 325 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_174_174 = libs__handle_options__STATE_VARIABLE_Errors_167_167;
#line 325 "handle_options.m"
      }
#line 326 "handle_options.m"
    else
#line 327 "handle_options.m"
      {
#line 327 "handle_options.m"
        *libs__handle_options__Term2Norm_30 = (MR_Integer) 0;
#line 328 "handle_options.m"
        {
#line 328 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_167_167, &libs__handle_options__STATE_VARIABLE_Errors_174_174);
        }
#line 327 "handle_options.m"
      }
#line 333 "handle_options.m"
    {
#line 333 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 132)), &libs__handle_options__conv6_ForceDisableTracing_63);
    }
#line 333 "handle_options.m"
    libs__handle_options__ForceDisableTracing_63 = ((MR_Word) libs__handle_options__conv6_ForceDisableTracing_63);
#line 334 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableTracing_63)) == (MR_mktag((MR_Integer) 1)));
#line 334 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 334 "handle_options.m"
      {
#line 334 "handle_options.m"
        libs__handle_options__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableTracing_63, (MR_Integer) 0)));
#line 334 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_180_180 == (MR_Integer) 1);
#line 334 "handle_options.m"
      }
#line 336 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 335 "handle_options.m"
      {
#line 335 "handle_options.m"
        {
#line 335 "handle_options.m"
          *libs__handle_options__TraceLevel_31 = libs__trace_params__trace_level_none_0_f_0();
        }
#line 335 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_185_185 = libs__handle_options__STATE_VARIABLE_Errors_174_174;
#line 335 "handle_options.m"
      }
#line 336 "handle_options.m"
    else
#line 337 "handle_options.m"
      {
#line 337 "handle_options.m"
        MR_Word libs__handle_options__Trace_64;
#line 337 "handle_options.m"
        MR_Word libs__handle_options__ExecTraceOpt_65;
#line 337 "handle_options.m"
        MR_Word libs__handle_options__DeclDebugOpt_66;
#line 337 "handle_options.m"
        MR_Box libs__handle_options__conv7_Trace_64;
#line 338 "handle_options.m"
        MR_Box libs__handle_options__conv8_ExecTraceOpt_65;
#line 339 "handle_options.m"
        MR_Box libs__handle_options__conv9_DeclDebugOpt_66;
#line 355 "handle_options.m"
        MR_Word libs__handle_options__MaybeTraceLevel_70;
#line 341 "handle_options.m"
        MR_String libs__handle_options__TraceStr_67;
#line 341 "handle_options.m"
        MR_Word libs__handle_options__ExecTrace_68;
#line 341 "handle_options.m"
        MR_Word libs__handle_options__DeclDebug_69;

#line 337 "handle_options.m"
        {
#line 337 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 120)), &libs__handle_options__conv7_Trace_64);
        }
#line 337 "handle_options.m"
        libs__handle_options__Trace_64 = ((MR_Word) libs__handle_options__conv7_Trace_64);
#line 338 "handle_options.m"
        {
#line 338 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 187)), &libs__handle_options__conv8_ExecTraceOpt_65);
        }
#line 338 "handle_options.m"
        libs__handle_options__ExecTraceOpt_65 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_65);
#line 339 "handle_options.m"
        {
#line 339 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 188)), &libs__handle_options__conv9_DeclDebugOpt_66);
        }
#line 339 "handle_options.m"
        libs__handle_options__DeclDebugOpt_66 = ((MR_Word) libs__handle_options__conv9_DeclDebugOpt_66);
#line 341 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Trace_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_64, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 341 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 341 "handle_options.m"
          {
#line 341 "handle_options.m"
            libs__handle_options__TraceStr_67 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_64, (MR_Integer) 1)));
#line 342 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ExecTraceOpt_65)) == (MR_mktag((MR_Integer) 1)));
#line 342 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 342 "handle_options.m"
              {
#line 342 "handle_options.m"
                libs__handle_options__ExecTrace_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ExecTraceOpt_65, (MR_Integer) 0)));
#line 343 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DeclDebugOpt_66)) == (MR_mktag((MR_Integer) 1)));
#line 343 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 343 "handle_options.m"
                  {
#line 343 "handle_options.m"
                    libs__handle_options__DeclDebug_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DeclDebugOpt_66, (MR_Integer) 0)));
#line 344 "handle_options.m"
                    {
#line 344 "handle_options.m"
                      libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__TraceStr_67, libs__handle_options__ExecTrace_68, libs__handle_options__DeclDebug_69, &libs__handle_options__MaybeTraceLevel_70);
                    }
#line 343 "handle_options.m"
                  }
#line 342 "handle_options.m"
              }
#line 341 "handle_options.m"
          }
#line 355 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 349 "handle_options.m"
          if ((libs__handle_options__MaybeTraceLevel_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "handle_options.m"
            {
#line 351 "handle_options.m"
              {
#line 351 "handle_options.m"
                *libs__handle_options__TraceLevel_31 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 352 "handle_options.m"
              {
#line 352 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "Specified trace level is not compatible with grade", libs__handle_options__STATE_VARIABLE_Errors_174_174, &libs__handle_options__STATE_VARIABLE_Errors_185_185);
              }
#line 350 "handle_options.m"
            }
#line 349 "handle_options.m"
          else
#line 348 "handle_options.m"
            {
#line 348 "handle_options.m"
              *libs__handle_options__TraceLevel_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_70, (MR_Integer) 0)));
#line 348 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_185_185 = libs__handle_options__STATE_VARIABLE_Errors_174_174;
#line 348 "handle_options.m"
            }
#line 355 "handle_options.m"
        else
#line 356 "handle_options.m"
          {
#line 356 "handle_options.m"
            {
#line 356 "handle_options.m"
              *libs__handle_options__TraceLevel_31 = libs__trace_params__trace_level_none_0_f_0();
            }
#line 357 "handle_options.m"
            {
#line 357 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", libs__handle_options__STATE_VARIABLE_Errors_174_174, &libs__handle_options__STATE_VARIABLE_Errors_185_185);
            }
#line 356 "handle_options.m"
          }
#line 337 "handle_options.m"
      }
#line 363 "handle_options.m"
    {
#line 363 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 131)), &libs__handle_options__conv10_Suppress_71);
    }
#line 363 "handle_options.m"
    libs__handle_options__Suppress_71 = ((MR_Word) libs__handle_options__conv10_Suppress_71);
#line 365 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Suppress_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_71, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 365 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 365 "handle_options.m"
      {
#line 365 "handle_options.m"
        libs__handle_options__SuppressStr_72 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_71, (MR_Integer) 1)));
#line 366 "handle_options.m"
        {
#line 366 "handle_options.m"
          libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_72, &libs__handle_options__TraceSuppressPrime_73);
        }
#line 365 "handle_options.m"
      }
#line 369 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 368 "handle_options.m"
      {
#line 368 "handle_options.m"
        *libs__handle_options__TraceSuppress_32 = libs__handle_options__TraceSuppressPrime_73;
#line 368 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_196_196 = libs__handle_options__STATE_VARIABLE_Errors_185_185;
#line 368 "handle_options.m"
      }
#line 369 "handle_options.m"
    else
#line 370 "handle_options.m"
      {
#line 370 "handle_options.m"
        {
#line 370 "handle_options.m"
          *libs__handle_options__TraceSuppress_32 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 371 "handle_options.m"
        {
#line 371 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--suppress-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_185_185, &libs__handle_options__STATE_VARIABLE_Errors_196_196);
        }
#line 370 "handle_options.m"
      }
#line 374 "handle_options.m"
    {
#line 374 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 136)), &libs__handle_options__conv11_ForceDisableSSDB_74);
    }
#line 374 "handle_options.m"
    libs__handle_options__ForceDisableSSDB_74 = ((MR_Word) libs__handle_options__conv11_ForceDisableSSDB_74);
#line 375 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableSSDB_74)) == (MR_mktag((MR_Integer) 1)));
#line 375 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 375 "handle_options.m"
      {
#line 375 "handle_options.m"
        libs__handle_options__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableSSDB_74, (MR_Integer) 0)));
#line 375 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_198_198 == (MR_Integer) 1);
#line 375 "handle_options.m"
      }
#line 377 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 376 "handle_options.m"
      {
#line 376 "handle_options.m"
        *libs__handle_options__SSTraceLevel_33 = (MR_Integer) 0;
#line 376 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_202_202 = libs__handle_options__STATE_VARIABLE_Errors_196_196;
#line 376 "handle_options.m"
      }
#line 377 "handle_options.m"
    else
#line 378 "handle_options.m"
      {
#line 378 "handle_options.m"
        MR_Word libs__handle_options__SSTrace_75;
#line 378 "handle_options.m"
        MR_Word libs__handle_options__SSDB_76;
#line 378 "handle_options.m"
        MR_Box libs__handle_options__conv12_SSTrace_75;
#line 379 "handle_options.m"
        MR_Box libs__handle_options__conv13_SSDB_76;
#line 386 "handle_options.m"
        MR_Word libs__handle_options__SSTL_79;
#line 381 "handle_options.m"
        MR_String libs__handle_options__SSTraceStr_77;
#line 381 "handle_options.m"
        MR_Word libs__handle_options__IsInSSDebugGrade_78;

#line 378 "handle_options.m"
        {
#line 378 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 235)), &libs__handle_options__conv12_SSTrace_75);
        }
#line 378 "handle_options.m"
        libs__handle_options__SSTrace_75 = ((MR_Word) libs__handle_options__conv12_SSTrace_75);
#line 379 "handle_options.m"
        {
#line 379 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 234)), &libs__handle_options__conv13_SSDB_76);
        }
#line 379 "handle_options.m"
        libs__handle_options__SSDB_76 = ((MR_Word) libs__handle_options__conv13_SSDB_76);
#line 381 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SSTrace_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_75, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 381 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 381 "handle_options.m"
          {
#line 381 "handle_options.m"
            libs__handle_options__SSTraceStr_77 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_75, (MR_Integer) 1)));
#line 382 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__SSDB_76)) == (MR_mktag((MR_Integer) 1)));
#line 382 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 382 "handle_options.m"
              {
#line 382 "handle_options.m"
                libs__handle_options__IsInSSDebugGrade_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__SSDB_76, (MR_Integer) 0)));
#line 383 "handle_options.m"
                {
#line 383 "handle_options.m"
                  libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTraceStr_77, libs__handle_options__IsInSSDebugGrade_78, &libs__handle_options__SSTL_79);
                }
#line 382 "handle_options.m"
              }
#line 381 "handle_options.m"
          }
#line 386 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 385 "handle_options.m"
          {
#line 385 "handle_options.m"
            *libs__handle_options__SSTraceLevel_33 = libs__handle_options__SSTL_79;
#line 385 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_202_202 = libs__handle_options__STATE_VARIABLE_Errors_196_196;
#line 385 "handle_options.m"
          }
#line 386 "handle_options.m"
        else
#line 387 "handle_options.m"
          {
#line 387 "handle_options.m"
            *libs__handle_options__SSTraceLevel_33 = (MR_Integer) 0;
#line 388 "handle_options.m"
            {
#line 388 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--ssdb-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_196_196, &libs__handle_options__STATE_VARIABLE_Errors_202_202);
            }
#line 387 "handle_options.m"
          }
#line 378 "handle_options.m"
      }
#line 392 "handle_options.m"
    {
#line 392 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 227)), &libs__handle_options__conv14_MaybeThreadSafeOption_80);
    }
#line 392 "handle_options.m"
    libs__handle_options__MaybeThreadSafeOption_80 = ((MR_Word) libs__handle_options__conv14_MaybeThreadSafeOption_80);
#line 394 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__MaybeThreadSafeOption_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_80, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 394 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 394 "handle_options.m"
      {
#line 394 "handle_options.m"
        libs__handle_options__MaybeThreadSafeString_81 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_80, (MR_Integer) 1)));
#line 395 "handle_options.m"
        {
#line 395 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeString_81, &libs__handle_options__MaybeThreadSafe0_82);
        }
#line 394 "handle_options.m"
      }
#line 398 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 397 "handle_options.m"
      {
#line 397 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_34 = libs__handle_options__MaybeThreadSafe0_82;
#line 397 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_205_205 = libs__handle_options__STATE_VARIABLE_Errors_202_202;
#line 397 "handle_options.m"
      }
#line 398 "handle_options.m"
    else
#line 399 "handle_options.m"
      {
#line 399 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_34 = (MR_Integer) 0;
#line 400 "handle_options.m"
        {
#line 400 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--maybe-thread-safe\'.", libs__handle_options__STATE_VARIABLE_Errors_202_202, &libs__handle_options__STATE_VARIABLE_Errors_205_205);
        }
#line 399 "handle_options.m"
      }
#line 403 "handle_options.m"
    {
#line 403 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_0_133, ((MR_Box) ((MR_Integer) 150)), &libs__handle_options__conv15_DumpAliasOption_83);
    }
#line 403 "handle_options.m"
    libs__handle_options__DumpAliasOption_83 = ((MR_Word) libs__handle_options__conv15_DumpAliasOption_83);
#line 405 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_83, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 405 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 405 "handle_options.m"
      {
#line 405 "handle_options.m"
        libs__handle_options__DumpAlias_84 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_83, (MR_Integer) 1)));
#line 406 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_84, (MR_String) "") == 0);
#line 405 "handle_options.m"
      }
#line 409 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 408 "handle_options.m"
      {
#line 408 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_211_211 = libs__handle_options__STATE_VARIABLE_Errors_205_205;
#line 408 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_209_209 = libs__handle_options__STATE_VARIABLE_OptionTable_0_133;
#line 408 "handle_options.m"
      }
#line 409 "handle_options.m"
    else
#line 414 "handle_options.m"
      {
#line 414 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_85;
#line 410 "handle_options.m"
        MR_String libs__handle_options__DumpAlias_320;

#line 410 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_83, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 410 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 410 "handle_options.m"
          {
#line 410 "handle_options.m"
            libs__handle_options__DumpAlias_320 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_83, (MR_Integer) 1)));
#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_320, &libs__handle_options__AliasDumpOptions_85);
            }
#line 410 "handle_options.m"
          }
#line 414 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 413 "handle_options.m"
          {
#line 413 "handle_options.m"
            MR_Word libs__handle_options__V_208_208;

#line 413 "handle_options.m"
            {
#line 413 "handle_options.m"
              libs__handle_options__V_208_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_208_208, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 413 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_208_208, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_85));
#line 413 "handle_options.m"
            }
#line 413 "handle_options.m"
            {
#line 413 "handle_options.m"
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_208_208)), libs__handle_options__STATE_VARIABLE_OptionTable_0_133, &libs__handle_options__STATE_VARIABLE_OptionTable_209_209);
            }
#line 413 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_211_211 = libs__handle_options__STATE_VARIABLE_Errors_205_205;
#line 413 "handle_options.m"
          }
#line 414 "handle_options.m"
        else
#line 415 "handle_options.m"
          {
#line 415 "handle_options.m"
            {
#line 415 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--hlds-dump-alias\'.", libs__handle_options__STATE_VARIABLE_Errors_205_205, &libs__handle_options__STATE_VARIABLE_Errors_211_211);
            }
#line 415 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_209_209 = libs__handle_options__STATE_VARIABLE_OptionTable_0_133;
#line 415 "handle_options.m"
          }
#line 414 "handle_options.m"
      }
#line 419 "handle_options.m"
    {
#line 419 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__STATE_VARIABLE_OptionTable_209_209, ((MR_Box) ((MR_Integer) 151)), &libs__handle_options__STATE_VARIABLE_DumpOptions_213_213);
    }
#line 423 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_213_213, (MR_String) "") == 0);
#line 425 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 424 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_214_214 = (MR_String) "x";
#line 425 "handle_options.m"
    else
#line 425 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_214_214 = libs__handle_options__STATE_VARIABLE_DumpOptions_213_213;
#line 431 "handle_options.m"
    {
#line 431 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_214_214, (MR_Char) 121);
    }
#line 431 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 431 "handle_options.m"
      {
#line 432 "handle_options.m"
        libs__handle_options__V_216_216 = (MR_Char) 97;
#line 432 "handle_options.m"
        {
#line 432 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_214_214, libs__handle_options__V_216_216);
        }
#line 432 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 431 "handle_options.m"
      }
#line 435 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 434 "handle_options.m"
      {
#line 434 "handle_options.m"
        {
#line 434 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_217_217 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_214_214);
        }
#line 434 "handle_options.m"
      }
#line 435 "handle_options.m"
    else
#line 435 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_217_217 = libs__handle_options__STATE_VARIABLE_DumpOptions_214_214;
#line 440 "handle_options.m"
    {
#line 440 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_217_217, (MR_Char) 97);
    }
#line 440 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 440 "handle_options.m"
      {
#line 441 "handle_options.m"
        libs__handle_options__V_220_220 = (MR_Char) 117;
#line 441 "handle_options.m"
        {
#line 441 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_217_217, libs__handle_options__V_220_220);
        }
#line 441 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 440 "handle_options.m"
      }
#line 444 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 443 "handle_options.m"
      {
#line 443 "handle_options.m"
        {
#line 443 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_221_221 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_217_217);
        }
#line 443 "handle_options.m"
      }
#line 444 "handle_options.m"
    else
#line 444 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_221_221 = libs__handle_options__STATE_VARIABLE_DumpOptions_217_217;
#line 450 "handle_options.m"
    {
#line 450 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 65);
    }
#line 451 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
      {
#line 451 "handle_options.m"
        {
#line 451 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 66);
        }
#line 451 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
          {
#line 452 "handle_options.m"
            {
#line 452 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 68);
            }
#line 451 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
              {
#line 453 "handle_options.m"
                {
#line 453 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 71);
                }
#line 451 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                  {
#line 454 "handle_options.m"
                    {
#line 454 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 80);
                    }
#line 451 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                      {
#line 455 "handle_options.m"
                        {
#line 455 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 82);
                        }
#line 451 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                          {
#line 456 "handle_options.m"
                            {
#line 456 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 83);
                            }
#line 451 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                              {
#line 457 "handle_options.m"
                                {
#line 457 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 98);
                                }
#line 451 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                  {
#line 458 "handle_options.m"
                                    {
#line 458 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 99);
                                    }
#line 451 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                      {
#line 459 "handle_options.m"
                                        {
#line 459 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 100);
                                        }
#line 451 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                          {
#line 460 "handle_options.m"
                                            {
#line 460 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 102);
                                            }
#line 451 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                              {
#line 461 "handle_options.m"
                                                {
#line 461 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 103);
                                                }
#line 451 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                  {
#line 462 "handle_options.m"
                                                    {
#line 462 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 105);
                                                    }
#line 451 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                      {
#line 463 "handle_options.m"
                                                        {
#line 463 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 108);
                                                        }
#line 451 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                          {
#line 464 "handle_options.m"
                                                            {
#line 464 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 109);
                                                            }
#line 451 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                              {
#line 465 "handle_options.m"
                                                                {
#line 465 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 110);
                                                                }
#line 451 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                                  {
#line 466 "handle_options.m"
                                                                    {
#line 466 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 112);
                                                                    }
#line 451 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                                      {
#line 467 "handle_options.m"
                                                                        {
#line 467 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 115);
                                                                        }
#line 451 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                                          {
#line 468 "handle_options.m"
                                                                            {
#line 468 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 116);
                                                                            }
#line 451 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 451 "handle_options.m"
                                                                              {
#line 469 "handle_options.m"
                                                                                {
#line 469 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 117);
                                                                                }
#line 451 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 470 "handle_options.m"
                                                                                  {
#line 470 "handle_options.m"
                                                                                    {
#line 470 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, (MR_Char) 122);
                                                                                    }
#line 470 "handle_options.m"
                                                                                  }
#line 451 "handle_options.m"
                                                                              }
#line 451 "handle_options.m"
                                                                          }
#line 451 "handle_options.m"
                                                                      }
#line 451 "handle_options.m"
                                                                  }
#line 451 "handle_options.m"
                                                              }
#line 451 "handle_options.m"
                                                          }
#line 451 "handle_options.m"
                                                      }
#line 451 "handle_options.m"
                                                  }
#line 451 "handle_options.m"
                                              }
#line 451 "handle_options.m"
                                          }
#line 451 "handle_options.m"
                                      }
#line 451 "handle_options.m"
                                  }
#line 451 "handle_options.m"
                              }
#line 451 "handle_options.m"
                          }
#line 451 "handle_options.m"
                      }
#line 451 "handle_options.m"
                  }
#line 451 "handle_options.m"
              }
#line 451 "handle_options.m"
          }
#line 451 "handle_options.m"
      }
#line 471 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 471 "handle_options.m"
      {
#line 472 "handle_options.m"
        libs__handle_options__V_244_244 = (MR_Char) 120;
#line 472 "handle_options.m"
        {
#line 472 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_221_221, libs__handle_options__V_244_244);
        }
#line 472 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 471 "handle_options.m"
      }
#line 475 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 474 "handle_options.m"
      {
#line 474 "handle_options.m"
        {
#line 474 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_245_245 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_221_221);
        }
#line 474 "handle_options.m"
      }
#line 475 "handle_options.m"
    else
#line 475 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_245_245 = libs__handle_options__STATE_VARIABLE_DumpOptions_221_221;
#line 478 "handle_options.m"
    {
#line 478 "handle_options.m"
      libs__handle_options__V_248_248 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_248_248, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 478 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_248_248, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_245_245));
#line 478 "handle_options.m"
    }
#line 478 "handle_options.m"
    {
#line 478 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, ((MR_Box) ((MR_Integer) 151)), ((MR_Box) (libs__handle_options__V_248_248)), libs__handle_options__STATE_VARIABLE_OptionTable_209_209, &libs__handle_options__STATE_VARIABLE_OptionTable_249_249);
    }
#line 481 "handle_options.m"
    {
#line 481 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 514)), &libs__handle_options__conv16_C_CompilerType0_87);
    }
#line 481 "handle_options.m"
    libs__handle_options__C_CompilerType0_87 = ((MR_Word) libs__handle_options__conv16_C_CompilerType0_87);
#line 483 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__C_CompilerType0_87)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_87, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 483 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 483 "handle_options.m"
      {
#line 483 "handle_options.m"
        libs__handle_options__C_CompilerTypeStr_88 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_87, (MR_Integer) 1)));
#line 484 "handle_options.m"
        {
#line 484 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_88, &libs__handle_options__C_CompilerTypePrime_89);
        }
#line 483 "handle_options.m"
      }
#line 487 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 486 "handle_options.m"
      {
#line 486 "handle_options.m"
        *libs__handle_options__C_CompilerType_35 = libs__handle_options__C_CompilerTypePrime_89;
#line 486 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_252_252 = libs__handle_options__STATE_VARIABLE_Errors_211_211;
#line 486 "handle_options.m"
      }
#line 487 "handle_options.m"
    else
#line 488 "handle_options.m"
      {
#line 488 "handle_options.m"
        *libs__handle_options__C_CompilerType_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "handle_options.m"
        {
#line 489 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140clang\', \'msvc\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_211_211, &libs__handle_options__STATE_VARIABLE_Errors_252_252);
        }
#line 488 "handle_options.m"
      }
#line 494 "handle_options.m"
    {
#line 494 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 515)), &libs__handle_options__conv17_CSharp_CompilerType0_90);
    }
#line 494 "handle_options.m"
    libs__handle_options__CSharp_CompilerType0_90 = ((MR_Word) libs__handle_options__conv17_CSharp_CompilerType0_90);
#line 496 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__CSharp_CompilerType0_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_90, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 496 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 496 "handle_options.m"
      {
#line 496 "handle_options.m"
        libs__handle_options__CSharp_CompilerTypeStr_91 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_90, (MR_Integer) 1)));
#line 497 "handle_options.m"
        {
#line 497 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_91, &libs__handle_options__CSharp_CompilerTypePrime_92);
        }
#line 496 "handle_options.m"
      }
#line 501 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 500 "handle_options.m"
      {
#line 500 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_36 = libs__handle_options__CSharp_CompilerTypePrime_92;
#line 500 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_257_257 = libs__handle_options__STATE_VARIABLE_Errors_252_252;
#line 500 "handle_options.m"
      }
#line 501 "handle_options.m"
    else
#line 502 "handle_options.m"
      {
#line 502 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_36 = (MR_Integer) 2;
#line 503 "handle_options.m"
        {
#line 503 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_252_252, &libs__handle_options__STATE_VARIABLE_Errors_257_257);
        }
#line 502 "handle_options.m"
      }
#line 509 "handle_options.m"
    {
#line 509 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 412)), &libs__handle_options__conv18_ReuseConstraint0_93);
    }
#line 509 "handle_options.m"
    libs__handle_options__ReuseConstraint0_93 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_93);
#line 510 "handle_options.m"
    {
#line 510 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 413)), &libs__handle_options__conv19_ReuseConstraintArg0_94);
    }
#line 510 "handle_options.m"
    libs__handle_options__ReuseConstraintArg0_94 = ((MR_Word) libs__handle_options__conv19_ReuseConstraintArg0_94);
#line 513 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__ReuseConstraint0_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_93, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 513 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 513 "handle_options.m"
      {
#line 513 "handle_options.m"
        libs__handle_options__ReuseConstraintStr_95 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_93, (MR_Integer) 1)));
#line 514 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ReuseConstraintArg0_94)) == (MR_mktag((MR_Integer) 2)));
#line 514 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 514 "handle_options.m"
          {
#line 514 "handle_options.m"
            libs__handle_options__ReuseConstraintArgNum_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__ReuseConstraintArg0_94, (MR_Integer) 0)));
#line 515 "handle_options.m"
            {
#line 515 "handle_options.m"
              libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_95, libs__handle_options__ReuseConstraintArgNum_96, &libs__handle_options__ReuseStrategyPrime_97);
            }
#line 514 "handle_options.m"
          }
#line 513 "handle_options.m"
      }
#line 519 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 518 "handle_options.m"
      {
#line 518 "handle_options.m"
        *libs__handle_options__ReuseStrategy_37 = libs__handle_options__ReuseStrategyPrime_97;
#line 518 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_263_263 = libs__handle_options__STATE_VARIABLE_Errors_257_257;
#line 518 "handle_options.m"
      }
#line 519 "handle_options.m"
    else
#line 520 "handle_options.m"
      {
#line 520 "handle_options.m"
        *libs__handle_options__ReuseStrategy_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "handle_options.m"
        {
#line 521 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", libs__handle_options__STATE_VARIABLE_Errors_257_257, &libs__handle_options__STATE_VARIABLE_Errors_263_263);
        }
#line 520 "handle_options.m"
      }
#line 527 "handle_options.m"
    {
#line 527 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, libs__handle_options__STATE_VARIABLE_OptionTable_249_249, ((MR_Box) ((MR_Integer) 525)), &libs__handle_options__conv20_DotNetLibVersionOpt_98);
    }
#line 527 "handle_options.m"
    libs__handle_options__DotNetLibVersionOpt_98 = ((MR_Word) libs__handle_options__conv20_DotNetLibVersionOpt_98);
#line 529 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DotNetLibVersionOpt_98)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_98, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 529 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
      {
#line 529 "handle_options.m"
        libs__handle_options__DotNetLibVersionStr_99 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_98, (MR_Integer) 1)));
#line 530 "handle_options.m"
        libs__handle_options__IsSep_100 = (MR_Word) &libs__handle_options_scalar_common_1[14];
#line 531 "handle_options.m"
        {
#line 531 "handle_options.m"
          libs__handle_options__V_268_268 = mercury__string__words_separator_2_f_0(libs__handle_options__IsSep_100, libs__handle_options__DotNetLibVersionStr_99);
        }
#line 531 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_268_268)) == (MR_mktag((MR_Integer) 1)));
#line 531 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 531 "handle_options.m"
          {
#line 531 "handle_options.m"
            libs__handle_options__Mj_101 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_268_268, (MR_Integer) 0)));
#line 531 "handle_options.m"
            libs__handle_options__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_268_268, (MR_Integer) 1)));
#line 531 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 531 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 531 "handle_options.m"
              {
#line 531 "handle_options.m"
                libs__handle_options__Mn_102 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_269_269, (MR_Integer) 0)));
#line 531 "handle_options.m"
                libs__handle_options__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_269_269, (MR_Integer) 1)));
#line 531 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_270_270)) == (MR_mktag((MR_Integer) 1)));
#line 531 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 531 "handle_options.m"
                  {
#line 531 "handle_options.m"
                    libs__handle_options__Bu_103 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_270_270, (MR_Integer) 0)));
#line 531 "handle_options.m"
                    libs__handle_options__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_270_270, (MR_Integer) 1)));
#line 531 "handle_options.m"
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_271_271)) == (MR_mktag((MR_Integer) 1)));
#line 531 "handle_options.m"
                    if (libs__handle_options__succeeded)
#line 531 "handle_options.m"
                      {
#line 531 "handle_options.m"
                        libs__handle_options__Rv_104 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_271_271, (MR_Integer) 0)));
#line 531 "handle_options.m"
                        libs__handle_options__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_271_271, (MR_Integer) 1)));
#line 531 "handle_options.m"
                        libs__handle_options__succeeded = (libs__handle_options__V_272_272 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "handle_options.m"
                        if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
                          {
#line 532 "handle_options.m"
                            {
#line 532 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mj_101, &libs__handle_options__Major_105);
                            }
#line 529 "handle_options.m"
                            if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
                              {
#line 533 "handle_options.m"
                                {
#line 533 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mn_102, &libs__handle_options__Minor_106);
                                }
#line 529 "handle_options.m"
                                if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
                                  {
#line 534 "handle_options.m"
                                    {
#line 534 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Bu_103, &libs__handle_options__Build_107);
                                    }
#line 529 "handle_options.m"
                                    if (libs__handle_options__succeeded)
#line 535 "handle_options.m"
                                      {
#line 535 "handle_options.m"
                                        libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Rv_104, &libs__handle_options__Revision_108);
                                      }
#line 529 "handle_options.m"
                                  }
#line 529 "handle_options.m"
                              }
#line 529 "handle_options.m"
                          }
#line 531 "handle_options.m"
                      }
#line 531 "handle_options.m"
                  }
#line 531 "handle_options.m"
              }
#line 531 "handle_options.m"
          }
#line 529 "handle_options.m"
      }
#line 539 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 537 "handle_options.m"
      {
#line 537 "handle_options.m"
        MR_Word libs__handle_options__ILVersion_109;

#line 537 "handle_options.m"
        {
#line 537 "handle_options.m"
          libs__handle_options__ILVersion_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 537 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_109, 0) = ((MR_Box) (libs__handle_options__Major_105));
#line 537 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_109, 1) = ((MR_Box) (libs__handle_options__Minor_106));
#line 537 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_109, 2) = ((MR_Box) (libs__handle_options__Build_107));
#line 537 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_109, 3) = ((MR_Box) (libs__handle_options__Revision_108));
#line 537 "handle_options.m"
        }
#line 538 "handle_options.m"
        {
#line 538 "handle_options.m"
          MR_Word base;
#line 538 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "handle_options.m"
          *libs__handle_options__MaybeILVersion_38 = base;
#line 538 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ILVersion_109));
#line 538 "handle_options.m"
        }
#line 537 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_274_274 = libs__handle_options__STATE_VARIABLE_Errors_263_263;
#line 537 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_OptionTable_134 = libs__handle_options__STATE_VARIABLE_OptionTable_249_249;
#line 537 "handle_options.m"
      }
#line 539 "handle_options.m"
    else
#line 540 "handle_options.m"
      {
#line 540 "handle_options.m"
        *libs__handle_options__MaybeILVersion_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "handle_options.m"
        {
#line 541 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", libs__handle_options__STATE_VARIABLE_Errors_263_263, &libs__handle_options__STATE_VARIABLE_Errors_274_274);
        }
#line 547 "handle_options.m"
        {
#line 547 "handle_options.m"
          mercury__map__det_update_4_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, ((MR_Box) ((MR_Integer) 98)), ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]))), libs__handle_options__STATE_VARIABLE_OptionTable_249_249, libs__handle_options__STATE_VARIABLE_OptionTable_134);
        }
#line 540 "handle_options.m"
      }
#line 550 "handle_options.m"
    {
#line 550 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 676)), &libs__handle_options__conv21_FeedbackFile0_110);
    }
#line 550 "handle_options.m"
    libs__handle_options__FeedbackFile0_110 = ((MR_Word) libs__handle_options__conv21_FeedbackFile0_110);
#line 552 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__FeedbackFile0_110)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_110, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 552 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 552 "handle_options.m"
      {
#line 552 "handle_options.m"
        libs__handle_options__FeedbackFile_111 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_110, (MR_Integer) 1)));
#line 553 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_111, (MR_String) "") == 0);
#line 553 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 552 "handle_options.m"
      }
#line 573 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 560 "handle_options.m"
      {
#line 560 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_113;

#line 561 "handle_options.m"
        {
#line 561 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_5_p_0(libs__handle_options__FeedbackFile_111, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__FeedbackReadResult_113);
        }
#line 566 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_113)) == (MR_mktag((MR_Integer) 1))))
#line 567 "handle_options.m"
          {
#line 567 "handle_options.m"
            MR_Word libs__handle_options__Error_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_113, (MR_Integer) 0)));
#line 567 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_116;

#line 568 "handle_options.m"
            {
#line 568 "handle_options.m"
              mdbcomp__feedback__feedback_read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_111, libs__handle_options__Error_115, &libs__handle_options__ErrorMessage_116);
            }
#line 570 "handle_options.m"
            {
#line 570 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__ErrorMessage_116, libs__handle_options__STATE_VARIABLE_Errors_274_274, &libs__handle_options__STATE_VARIABLE_Errors_287_287);
            }
#line 571 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "handle_options.m"
          }
#line 566 "handle_options.m"
        else
#line 564 "handle_options.m"
          {
#line 564 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_113, (MR_Integer) 0)));

#line 565 "handle_options.m"
            {
#line 565 "handle_options.m"
              MR_Word base;
#line 565 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_39 = base;
#line 565 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_114));
#line 565 "handle_options.m"
            }
#line 564 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_287_287 = libs__handle_options__STATE_VARIABLE_Errors_274_274;
#line 564 "handle_options.m"
          }
#line 560 "handle_options.m"
      }
#line 573 "handle_options.m"
    else
#line 575 "handle_options.m"
      {
#line 575 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_287_287 = libs__handle_options__STATE_VARIABLE_Errors_274_274;
#line 575 "handle_options.m"
      }
#line 577 "handle_options.m"
    {
#line 577 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 658)), &libs__handle_options__conv22_HostEnvType0_117);
    }
#line 577 "handle_options.m"
    libs__handle_options__HostEnvType0_117 = ((MR_Word) libs__handle_options__conv22_HostEnvType0_117);
#line 579 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__HostEnvType0_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_117, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 579 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 579 "handle_options.m"
      {
#line 579 "handle_options.m"
        libs__handle_options__HostEnvTypeStr_118 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_117, (MR_Integer) 1)));
#line 580 "handle_options.m"
        {
#line 580 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_118, &libs__handle_options__HostEnvTypePrime_119);
        }
#line 579 "handle_options.m"
      }
#line 583 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 582 "handle_options.m"
      {
#line 582 "handle_options.m"
        *libs__handle_options__HostEnvType_40 = libs__handle_options__HostEnvTypePrime_119;
#line 582 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_290_290 = libs__handle_options__STATE_VARIABLE_Errors_287_287;
#line 582 "handle_options.m"
      }
#line 583 "handle_options.m"
    else
#line 584 "handle_options.m"
      {
#line 584 "handle_options.m"
        *libs__handle_options__HostEnvType_40 = (MR_Integer) 0;
#line 585 "handle_options.m"
        {
#line 585 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_287_287, &libs__handle_options__STATE_VARIABLE_Errors_290_290);
        }
#line 584 "handle_options.m"
      }
#line 590 "handle_options.m"
    {
#line 590 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 659)), &libs__handle_options__conv23_SystemEnvType0_120);
    }
#line 590 "handle_options.m"
    libs__handle_options__SystemEnvType0_120 = ((MR_Word) libs__handle_options__conv23_SystemEnvType0_120);
#line 592 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SystemEnvType0_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 592 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 592 "handle_options.m"
      {
#line 592 "handle_options.m"
        libs__handle_options__SystemEnvTypeStr_121 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_120, (MR_Integer) 1)));
#line 593 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_121, (MR_String) "") == 0);
#line 595 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 594 "handle_options.m"
          {
#line 594 "handle_options.m"
            libs__handle_options__SystemEnvTypePrime_122 = *libs__handle_options__HostEnvType_40;
#line 594 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 594 "handle_options.m"
          }
#line 595 "handle_options.m"
        else
#line 596 "handle_options.m"
          {
#line 596 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_121, &libs__handle_options__SystemEnvTypePrime_122);
          }
#line 592 "handle_options.m"
      }
#line 600 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 599 "handle_options.m"
      {
#line 599 "handle_options.m"
        *libs__handle_options__SystemEnvType_41 = libs__handle_options__SystemEnvTypePrime_122;
#line 599 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_295_295 = libs__handle_options__STATE_VARIABLE_Errors_290_290;
#line 599 "handle_options.m"
      }
#line 600 "handle_options.m"
    else
#line 601 "handle_options.m"
      {
#line 601 "handle_options.m"
        *libs__handle_options__SystemEnvType_41 = (MR_Integer) 0;
#line 602 "handle_options.m"
        {
#line 602 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--system-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_290_290, &libs__handle_options__STATE_VARIABLE_Errors_295_295);
        }
#line 601 "handle_options.m"
      }
#line 607 "handle_options.m"
    {
#line 607 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 660)), &libs__handle_options__conv24_TargetEnvType0_123);
    }
#line 607 "handle_options.m"
    libs__handle_options__TargetEnvType0_123 = ((MR_Word) libs__handle_options__conv24_TargetEnvType0_123);
#line 609 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TargetEnvType0_123)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_123, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 609 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 609 "handle_options.m"
      {
#line 609 "handle_options.m"
        libs__handle_options__TargetEnvTypeStr_124 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_123, (MR_Integer) 1)));
#line 610 "handle_options.m"
        {
#line 610 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_124, &libs__handle_options__TargetEnvTypePrime_125);
        }
#line 609 "handle_options.m"
      }
#line 613 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 612 "handle_options.m"
      {
#line 612 "handle_options.m"
        *libs__handle_options__TargetEnvType_42 = libs__handle_options__TargetEnvTypePrime_125;
#line 612 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_300_300 = libs__handle_options__STATE_VARIABLE_Errors_295_295;
#line 612 "handle_options.m"
      }
#line 613 "handle_options.m"
    else
#line 614 "handle_options.m"
      {
#line 614 "handle_options.m"
        *libs__handle_options__TargetEnvType_42 = (MR_Integer) 0;
#line 615 "handle_options.m"
        {
#line 615 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_295_295, &libs__handle_options__STATE_VARIABLE_Errors_300_300);
        }
#line 614 "handle_options.m"
      }
#line 621 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_40 == (MR_Integer) 0);
#line 621 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 621 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_36 == (MR_Integer) 0);
#line 626 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 622 "handle_options.m"
      {
#line 622 "handle_options.m"
        {
#line 622 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", libs__handle_options__STATE_VARIABLE_Errors_300_300, &libs__handle_options__STATE_VARIABLE_Errors_304_304);
        }
#line 622 "handle_options.m"
      }
#line 626 "handle_options.m"
    else
#line 626 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_304_304 = libs__handle_options__STATE_VARIABLE_Errors_300_300;
#line 630 "handle_options.m"
    {
#line 630 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_322_322, libs__handle_options__TypeCtorInfo_323_323, *libs__handle_options__STATE_VARIABLE_OptionTable_134, ((MR_Box) ((MR_Integer) 58)), &libs__handle_options__conv25_LimitErrorContextsOption_126);
    }
#line 630 "handle_options.m"
    libs__handle_options__LimitErrorContextsOption_126 = ((MR_Word) libs__handle_options__conv25_LimitErrorContextsOption_126);
#line 631 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__LimitErrorContextsOption_126)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__LimitErrorContextsOption_126, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 631 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 631 "handle_options.m"
      {
#line 631 "handle_options.m"
        libs__handle_options__LimitErrorContextsOptionStrs_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__LimitErrorContextsOption_126, (MR_Integer) 1)));
#line 633 "handle_options.m"
        {
#line 633 "handle_options.m"
          MR_Word libs__handle_options__BadLimitErrorContextsOptions_128;

#line 632 "handle_options.m"
          {
#line 632 "handle_options.m"
            libs__globals__convert_limit_error_contexts_3_p_0(libs__handle_options__LimitErrorContextsOptionStrs_127, &libs__handle_options__BadLimitErrorContextsOptions_128, libs__handle_options__LimitErrorContextsMap_43);
          }
#line 636 "handle_options.m"
          if ((libs__handle_options__BadLimitErrorContextsOptions_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_136 = libs__handle_options__STATE_VARIABLE_Errors_304_304;
#line 636 "handle_options.m"
          else
#line 636 "handle_options.m"
            {
#line 636 "handle_options.m"
              MR_Word libs__handle_options__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_128, (MR_Integer) 1)));
#line 636 "handle_options.m"
              MR_String libs__handle_options__V_327_327 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_128, (MR_Integer) 0)));

#line 636 "handle_options.m"
              if ((libs__handle_options__V_326_326 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "handle_options.m"
                {
#line 637 "handle_options.m"
                  MR_String libs__handle_options__V_315_315;

#line 639 "handle_options.m"
                  {
#line 639 "handle_options.m"
                    libs__handle_options__V_315_315 = mercury__string__f_43_43_2_f_0((MR_String) "invalid --limit-error-contexts option\n", libs__handle_options__V_327_327);
                  }
#line 638 "handle_options.m"
                  {
#line 638 "handle_options.m"
                    libs__handle_options__add_error_3_p_0(libs__handle_options__V_315_315, libs__handle_options__STATE_VARIABLE_Errors_304_304, libs__handle_options__STATE_VARIABLE_Errors_136);
#line 638 "handle_options.m"
                    return;
                  }
#line 637 "handle_options.m"
                }
#line 636 "handle_options.m"
              else
#line 643 "handle_options.m"
                {
#line 643 "handle_options.m"
                  MR_String libs__handle_options__V_309_309;
#line 643 "handle_options.m"
                  MR_String libs__handle_options__V_312_312;

#line 646 "handle_options.m"
                  {
#line 646 "handle_options.m"
                    libs__handle_options__V_312_312 = mercury__string__join_list_2_f_0((MR_String) "\n", libs__handle_options__BadLimitErrorContextsOptions_128);
                  }
#line 645 "handle_options.m"
                  {
#line 645 "handle_options.m"
                    libs__handle_options__V_309_309 = mercury__string__f_43_43_2_f_0((MR_String) "invalid --limit-error-contexts options\n  ", libs__handle_options__V_312_312);
                  }
#line 644 "handle_options.m"
                  {
#line 644 "handle_options.m"
                    libs__handle_options__add_error_3_p_0(libs__handle_options__V_309_309, libs__handle_options__STATE_VARIABLE_Errors_304_304, libs__handle_options__STATE_VARIABLE_Errors_136);
#line 644 "handle_options.m"
                    return;
                  }
#line 643 "handle_options.m"
                }
#line 636 "handle_options.m"
            }
#line 633 "handle_options.m"
        }
#line 631 "handle_options.m"
      }
#line 631 "handle_options.m"
    else
#line 650 "handle_options.m"
      {
#line 650 "handle_options.m"
        {
#line 650 "handle_options.m"
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__handle_options_scalar_common_2[1], libs__handle_options__LimitErrorContextsMap_43);
        }
#line 651 "handle_options.m"
        {
#line 651 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "unexpected --limit-error-contexts option.", libs__handle_options__STATE_VARIABLE_Errors_304_304, libs__handle_options__STATE_VARIABLE_Errors_136);
#line 651 "handle_options.m"
          return;
        }
#line 650 "handle_options.m"
      }
#line 254 "handle_options.m"
  }
#line 239 "handle_options.m"
}

#line 210 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 210 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 210 "handle_options.m"
  MR_Word * libs__handle_options__Errors_2,
#line 210 "handle_options.m"
  MR_Word * libs__handle_options__Globals_3)
#line 210 "handle_options.m"
{
#line 214 "handle_options.m"
  {
#line 214 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 214 "handle_options.m"
    if (((MR_tag((MR_Word) libs__handle_options__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 214 "handle_options.m"
      {
#line 214 "handle_options.m"
        MR_String libs__handle_options__ErrorMessage_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_50_50;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_51_51;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_52_52;
#line 112 "handle_options.m"
        MR_Word libs__handle_options__V_53_53;

#line 215 "handle_options.m"
        {
#line 215 "handle_options.m"
          MR_Word base;
#line 215 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "handle_options.m"
          *libs__handle_options__Errors_2 = base;
#line 215 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_6));
#line 215 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "handle_options.m"
        }
#line 112 "handle_options.m"
        {
#line 112 "handle_options.m"
          libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_50_50, &libs__handle_options__V_51_51, &libs__handle_options__V_52_52, &libs__handle_options__V_53_53, libs__handle_options__Globals_3);
        }
#line 214 "handle_options.m"
      }
#line 214 "handle_options.m"
    else
#line 218 "handle_options.m"
      {
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_18;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__Target_19;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__GC_Method_20;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TagsMethod_21;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TermNorm_22;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__Term2Norm_23;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TraceLevel_24;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppress_25;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__SSTraceLevel_26;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__MaybeThreadSafe_27;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__C_CompilerType_28;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__CSharp_CompilerType_29;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__ReuseStrategy_30;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__MaybeILVersion_31;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__MaybeFeedbackInfo_32;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__HostEnvType_33;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvType_34;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvType_35;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__LimitErrorContextsMap_36;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__CheckErrorsCord_37;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__ErrorsCord_38;
#line 218 "handle_options.m"
        MR_Word libs__handle_options__V_41_41;

#line 224 "handle_options.m"
        {
#line 224 "handle_options.m"
          libs__handle_options__V_41_41 = mercury__cord__init_0_f_0(libs__handle_options__TypeCtorInfo_45_45);
        }
#line 219 "handle_options.m"
        {
#line 219 "handle_options.m"
          libs__handle_options__check_option_values_24_p_0(libs__handle_options__OptionTable0_14, &libs__handle_options__OptionTable_18, &libs__handle_options__Target_19, &libs__handle_options__GC_Method_20, &libs__handle_options__TagsMethod_21, &libs__handle_options__TermNorm_22, &libs__handle_options__Term2Norm_23, &libs__handle_options__TraceLevel_24, &libs__handle_options__TraceSuppress_25, &libs__handle_options__SSTraceLevel_26, &libs__handle_options__MaybeThreadSafe_27, &libs__handle_options__C_CompilerType_28, &libs__handle_options__CSharp_CompilerType_29, &libs__handle_options__ReuseStrategy_30, &libs__handle_options__MaybeILVersion_31, &libs__handle_options__MaybeFeedbackInfo_32, &libs__handle_options__HostEnvType_33, &libs__handle_options__SystemEnvType_34, &libs__handle_options__TargetEnvType_35, &libs__handle_options__LimitErrorContextsMap_36, libs__handle_options__V_41_41, &libs__handle_options__CheckErrorsCord_37);
        }
#line 225 "handle_options.m"
        {
#line 225 "handle_options.m"
          libs__handle_options__succeeded = mercury__cord__is_empty_1_p_0(libs__handle_options__TypeCtorInfo_45_45, libs__handle_options__CheckErrorsCord_37);
        }
#line 233 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 226 "handle_options.m"
          {
#line 226 "handle_options.m"
            libs__handle_options__convert_options_to_globals_24_p_0(libs__handle_options__OptionTable_18, libs__handle_options__Target_19, libs__handle_options__GC_Method_20, libs__handle_options__TagsMethod_21, libs__handle_options__TermNorm_22, libs__handle_options__Term2Norm_23, libs__handle_options__TraceLevel_24, libs__handle_options__TraceSuppress_25, libs__handle_options__SSTraceLevel_26, libs__handle_options__MaybeThreadSafe_27, libs__handle_options__C_CompilerType_28, libs__handle_options__CSharp_CompilerType_29, libs__handle_options__ReuseStrategy_30, libs__handle_options__MaybeILVersion_31, libs__handle_options__MaybeFeedbackInfo_32, libs__handle_options__HostEnvType_33, libs__handle_options__SystemEnvType_34, libs__handle_options__TargetEnvType_35, libs__handle_options__LimitErrorContextsMap_36, libs__handle_options__CheckErrorsCord_37, &libs__handle_options__ErrorsCord_38, libs__handle_options__Globals_3);
          }
#line 233 "handle_options.m"
        else
#line 234 "handle_options.m"
          {
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_60_60;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_61_61;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_62_62;
#line 112 "handle_options.m"
            MR_Word libs__handle_options__V_63_63;

#line 234 "handle_options.m"
            libs__handle_options__ErrorsCord_38 = libs__handle_options__CheckErrorsCord_37;
#line 112 "handle_options.m"
            {
#line 112 "handle_options.m"
              libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_60_60, &libs__handle_options__V_61_61, &libs__handle_options__V_62_62, &libs__handle_options__V_63_63, libs__handle_options__Globals_3);
            }
#line 234 "handle_options.m"
          }
#line 237 "handle_options.m"
        {
#line 237 "handle_options.m"
          *libs__handle_options__Errors_2 = mercury__cord__list_1_f_0(libs__handle_options__TypeCtorInfo_45_45, libs__handle_options__ErrorsCord_38);
        }
#line 218 "handle_options.m"
      }
#line 214 "handle_options.m"
  }
#line 210 "handle_options.m"
}

#line 191 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 191 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 191 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 191 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 191 "handle_options.m"
      {
#line 191 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 191 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 191 "handle_options.m"
      }
#line 191 "handle_options.m"
    return libs__handle_options__succeeded;
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 191 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__process_given_options_6_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 191 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1));
#line 191 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2));
#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr);
#line 191 "handle_options.m"
      return;
    }
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 191 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s libs__handle_options__env;

#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont = libs__handle_options__cont;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 191 "handle_options.m"
      {
#line 191 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__process_given_options_6_p_0_3, &libs__handle_options__env);
      }
#line 191 "handle_options.m"
    }
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 190 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 190 "handle_options.m"
      }
#line 190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
}

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 190 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 190 "handle_options.m"
      }
#line 190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
}

#line 185 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 185 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 185 "handle_options.m"
  MR_Word * libs__handle_options__Result_10)
#line 185 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 192 "handle_options.m"
    {
#line 192 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[2]), libs__handle_options__Args0_7, libs__handle_options__OptionArgs_8, libs__handle_options__Args_9, libs__handle_options__Result_10);
#line 192 "handle_options.m"
      return;
    }
#line 189 "handle_options.m"
  }
#line 185 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3051 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 3051 "handle_options.m"
      return;
    }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 3051 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3051 "handle_options.m"
      {
#line 3051 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 3051 "handle_options.m"
    }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
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
#line 3007 "handle_options.m"
  {
#line 3007 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3007 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 3007 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 3007 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 3007 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 3018 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 3018 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 3013 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 3013 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 3013 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 3023 "handle_options.m"
    {
#line 3023 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 3051 "handle_options.m"
    }
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 3028 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3027 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 3028 "handle_options.m"
    else
#line 3030 "handle_options.m"
      {
#line 3030 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 3013 "handle_options.m"
    {
#line 3013 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 3013 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 3013 "handle_options.m"
      {
#line 3014 "handle_options.m"
        {
#line 3014 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 3015 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 3015 "handle_options.m"
        {
#line 3015 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 3013 "handle_options.m"
      }
#line 3018 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 3017 "handle_options.m"
      {
#line 3017 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 3018 "handle_options.m"
    else
#line 3019 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 3007 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2979 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2979 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2979 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2979 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2979 "handle_options.m"
{
#line 2979 "handle_options.m"
  {
#line 2979 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2979 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2979 "handle_options.m"
    {
#line 2979 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2979__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2979 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2979 "handle_options.m"
      {
#line 2979 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2979 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2979 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2979 "handle_options.m"
      }
#line 2979 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2979 "handle_options.m"
  }
#line 2979 "handle_options.m"
}

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3349 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3349 "handle_options.m"
{
#line 3349 "handle_options.m"
  {
#line 3349 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3349 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3349 "handle_options.m"
    {
#line 3349 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3349__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3349 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3349 "handle_options.m"
  }
#line 3349 "handle_options.m"
}

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3349 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3349 "handle_options.m"
{
#line 3349 "handle_options.m"
  {
#line 3349 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3349 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3349 "handle_options.m"
    {
#line 3349 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3349 "handle_options.m"
      return;
    }
#line 3349 "handle_options.m"
  }
#line 3349 "handle_options.m"
}

#line 3349 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3349 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3349 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3349 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3349 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3349 "handle_options.m"
{
#line 3349 "handle_options.m"
  {
#line 3349 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3349 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3349 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3349 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3349 "handle_options.m"
    {
#line 3349 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3349 "handle_options.m"
      {
#line 3349 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3349 "handle_options.m"
    }
#line 3349 "handle_options.m"
  }
#line 3349 "handle_options.m"
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
#line 2975 "handle_options.m"
  {
#line 2975 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2975 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3349 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2979 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2979 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2979 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3349 "handle_options.m"
    {
#line 3349 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3349 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3391 "handle_options.m"
    {
#line 3391 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3392 "handle_options.m"
    {
#line 3392 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2975 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2975 "handle_options.m"
      {
#line 18126 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2978 "handle_options.m"
        {
#line 2978 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2979 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 18135 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 18137 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 18139 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2979 "handle_options.m"
        {
#line 2979 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2979 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2979 "handle_options.m"
          {
#line 2979 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2979 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2979 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2979 "handle_options.m"
          }
#line 2975 "handle_options.m"
      }
#line 2975 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2975 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 3051 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3051 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 3051 "handle_options.m"
      return;
    }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
}

#line 3051 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 3051 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3051 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3051 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3051 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3051 "handle_options.m"
{
#line 3051 "handle_options.m"
  {
#line 3051 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3051 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3051 "handle_options.m"
      {
#line 3051 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__3051__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 3051 "handle_options.m"
    }
#line 3051 "handle_options.m"
  }
#line 3051 "handle_options.m"
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
#line 3022 "handle_options.m"
  {
#line 3022 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3022 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 3022 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 3022 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 3023 "handle_options.m"
    {
#line 3023 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3051 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 3051 "handle_options.m"
    }
#line 3051 "handle_options.m"
    {
#line 3051 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 3028 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3027 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 3028 "handle_options.m"
    else
#line 3030 "handle_options.m"
      {
#line 3030 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 3030 "handle_options.m"
        return;
      }
#line 3022 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2777 "handle_options.m"
  {
#line 2777 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2777 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2777 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2777 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2777 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2777 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2777 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2781 "handle_options.m"
    {
#line 2781 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2783 "handle_options.m"
    {
#line 2783 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[195])));
#line 2783 "handle_options.m"
    }
#line 2783 "handle_options.m"
    {
#line 2783 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2783 "handle_options.m"
    }
#line 2783 "handle_options.m"
    {
#line 2783 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2783 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2783 "handle_options.m"
    }
#line 2782 "handle_options.m"
    {
#line 2782 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2782 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2782 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2782 "handle_options.m"
    }
#line 2782 "handle_options.m"
    {
#line 2782 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2784 "handle_options.m"
    {
#line 2784 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
#line 2786 "handle_options.m"
    {
#line 2786 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
    }
#line 2788 "handle_options.m"
    {
#line 2788 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2789 "handle_options.m"
    {
#line 2789 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2790 "handle_options.m"
    {
#line 2790 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2792 "handle_options.m"
    {
#line 2792 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2794 "handle_options.m"
    {
#line 2794 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2796 "handle_options.m"
    {
#line 2796 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2797 "handle_options.m"
    {
#line 2797 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2797 "handle_options.m"
      return;
    }
#line 2777 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2761 "handle_options.m"
  {
#line 2761 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2761 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 18444 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2758 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 18460 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 18479 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2773 "handle_options.m"
#line 2773 "handle_options.m"
    switch (libs__handle_options__AlreadyPrinted_4) {
#line 2773 "handle_options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2773 "handle_options.m"
      case (MR_Integer) 0:
#line 2766 "handle_options.m"
        {
#line 2767 "handle_options.m"
          {
#line 2767 "handle_options.m"
            libs__handle_options__display_compiler_version_2_p_0();
          }
#line 2768 "handle_options.m"
          {
#line 2768 "handle_options.m"
            mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[8]));
          }
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 18516 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2758 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 18533 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2758 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2758 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 18551 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2758 "handle_options.m"
}
#line 2766 "handle_options.m"
        }
#line 2773 "handle_options.m"
        break;
#line 2773 "handle_options.m"
      case (MR_Integer) 1:
#line 2774 "handle_options.m"
        {
#line 2774 "handle_options.m"
        }
#line 2773 "handle_options.m"
        break;
#line 2773 "handle_options.m"
    }
#line 2761 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2746 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2746 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2746 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2746 "handle_options.m"
{
#line 2746 "handle_options.m"
  {
#line 2746 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2746 "handle_options.m"
    {
#line 2746 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2746 "handle_options.m"
      return;
    }
#line 2746 "handle_options.m"
  }
#line 2746 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2744 "handle_options.m"
  {
#line 2744 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2744 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2744 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2746 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2745 "handle_options.m"
    {
#line 2745 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2746 "handle_options.m"
    {
#line 2746 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2746 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2746 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2746 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2746 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2746 "handle_options.m"
    }
#line 2746 "handle_options.m"
    {
#line 2746 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2747 "handle_options.m"
    {
#line 2747 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2748 "handle_options.m"
    {
#line 2748 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2748 "handle_options.m"
      return;
    }
#line 2744 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2750 "handle_options.m"
  {
#line 2750 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2750 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2750 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2750 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2750 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2750 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2750 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2751 "handle_options.m"
    {
#line 2751 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2753 "handle_options.m"
    {
#line 2753 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[6])));
#line 2753 "handle_options.m"
    }
#line 2753 "handle_options.m"
    {
#line 2753 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2753 "handle_options.m"
    }
#line 2753 "handle_options.m"
    {
#line 2753 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2753 "handle_options.m"
    }
#line 2753 "handle_options.m"
    {
#line 2753 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2753 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2753 "handle_options.m"
    }
#line 2752 "handle_options.m"
    {
#line 2752 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
#line 2752 "handle_options.m"
      return;
    }
#line 2750 "handle_options.m"
  }
#line 54 "handle_options.m"
}

#line 191 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 191 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 191 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 191 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 191 "handle_options.m"
      {
#line 191 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
#line 191 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 191 "handle_options.m"
      }
#line 191 "handle_options.m"
    return libs__handle_options__succeeded;
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 191 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 191 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
#line 191 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
#line 191 "handle_options.m"
      return;
    }
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 191 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 191 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 191 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 191 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 191 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 191 "handle_options.m"
{
#line 191 "handle_options.m"
  {
#line 191 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s libs__handle_options__env;

#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = libs__handle_options__cont;
#line 191 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 191 "handle_options.m"
      {
#line 191 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &libs__handle_options__env);
      }
#line 191 "handle_options.m"
    }
#line 191 "handle_options.m"
  }
#line 191 "handle_options.m"
}

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
#line 190 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 190 "handle_options.m"
      }
#line 190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
}

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
#line 190 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 190 "handle_options.m"
      }
#line 190 "handle_options.m"
    return libs__handle_options__succeeded;
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
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
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 192 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 192 "handle_options.m"
    {
#line 192 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__Args0_6, libs__handle_options__OptionArgs_7, libs__handle_options__Args_8, &libs__handle_options__V_10_10);
    }
#line 189 "handle_options.m"
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
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_37)
#line 41 "handle_options.m"
{
#line 114 "handle_options.m"
  {
#line 114 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 114 "handle_options.m"
    MR_Word libs__handle_options__Result_16;
#line 114 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_41_41;

#line 117 "handle_options.m"
    {
#line 117 "handle_options.m"
      libs__handle_options__process_given_options_6_p_0(libs__handle_options__Args0_9, libs__handle_options__OptionArgs_10, libs__handle_options__Args_11, &libs__handle_options__Result_16);
    }
#line 120 "handle_options.m"
    {
#line 120 "handle_options.m"
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_16, libs__handle_options__Errors_13, &libs__handle_options__STATE_VARIABLE_Globals_41_41);
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
        MR_Word libs__handle_options__Target_32;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__GenerateIL_33;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__CompileOnly_34;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__NotLink_35;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__Smart_36;
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
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_69_69;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_70_70;
#line 127 "handle_options.m"
        MR_Word libs__handle_options__V_71_71;

#line 128 "handle_options.m"
        {
#line 128 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 93, &libs__handle_options__GenerateDependencies_19);
        }
#line 130 "handle_options.m"
        {
#line 130 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 92, &libs__handle_options__GenerateDependencyFile_20);
        }
#line 132 "handle_options.m"
        {
#line 132 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 85, &libs__handle_options__MakeInterface_21);
        }
#line 133 "handle_options.m"
        {
#line 133 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 86, &libs__handle_options__MakePrivateInterface_22);
        }
#line 135 "handle_options.m"
        {
#line 135 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 84, &libs__handle_options__MakeShortInterface_23);
        }
#line 137 "handle_options.m"
        {
#line 137 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 87, &libs__handle_options__MakeOptimizationInt_24);
        }
#line 139 "handle_options.m"
        {
#line 139 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 88, &libs__handle_options__MakeTransOptInt_25);
        }
#line 141 "handle_options.m"
        {
#line 141 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 89, &libs__handle_options__MakeAnalysisRegistry_26);
        }
#line 143 "handle_options.m"
        {
#line 143 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 90, &libs__handle_options__MakeXmlDocumentation_27);
        }
#line 145 "handle_options.m"
        {
#line 145 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 96, &libs__handle_options__ConvertToMercury_28);
        }
#line 147 "handle_options.m"
        {
#line 147 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 97, &libs__handle_options__TypecheckOnly_29);
        }
#line 148 "handle_options.m"
        {
#line 148 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 98, &libs__handle_options__ErrorcheckOnly_30);
        }
#line 149 "handle_options.m"
        {
#line 149 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 99, &libs__handle_options__TargetCodeOnly_31);
        }
#line 151 "handle_options.m"
        {
#line 151 "handle_options.m"
          libs__globals__get_target_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, &libs__handle_options__Target_32);
        }
#line 152 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Target_32 == (MR_Integer) 1);
#line 152 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 152 "handle_options.m"
          libs__handle_options__GenerateIL_33 = (MR_Integer) 1;
#line 152 "handle_options.m"
        else
#line 152 "handle_options.m"
          libs__handle_options__GenerateIL_33 = (MR_Integer) 0;
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 100, &libs__handle_options__CompileOnly_34);
        }
#line 158 "handle_options.m"
        {
#line 158 "handle_options.m"
          libs__handle_options__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_71_71, 0) = ((MR_Box) (libs__handle_options__CompileOnly_34));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "handle_options.m"
        }
#line 158 "handle_options.m"
        {
#line 158 "handle_options.m"
          libs__handle_options__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_70_70, 0) = ((MR_Box) (libs__handle_options__GenerateIL_33));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_70_70, 1) = ((MR_Box) (libs__handle_options__V_71_71));
#line 158 "handle_options.m"
        }
#line 158 "handle_options.m"
        {
#line 158 "handle_options.m"
          libs__handle_options__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_69_69, 0) = ((MR_Box) (libs__handle_options__TargetCodeOnly_31));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_69_69, 1) = ((MR_Box) (libs__handle_options__V_70_70));
#line 158 "handle_options.m"
        }
#line 158 "handle_options.m"
        {
#line 158 "handle_options.m"
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 0) = ((MR_Box) (libs__handle_options__ErrorcheckOnly_30));
#line 158 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 1) = ((MR_Box) (libs__handle_options__V_69_69));
#line 158 "handle_options.m"
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 0) = ((MR_Box) (libs__handle_options__TypecheckOnly_29));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 1) = ((MR_Box) (libs__handle_options__V_68_68));
#line 157 "handle_options.m"
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 0) = ((MR_Box) (libs__handle_options__ConvertToMercury_28));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 1) = ((MR_Box) (libs__handle_options__V_67_67));
#line 157 "handle_options.m"
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 0) = ((MR_Box) (libs__handle_options__MakeXmlDocumentation_27));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 1) = ((MR_Box) (libs__handle_options__V_66_66));
#line 157 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 0) = ((MR_Box) (libs__handle_options__MakeAnalysisRegistry_26));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 1) = ((MR_Box) (libs__handle_options__V_65_65));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 0) = ((MR_Box) (libs__handle_options__MakeTransOptInt_25));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 1) = ((MR_Box) (libs__handle_options__V_64_64));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 0) = ((MR_Box) (libs__handle_options__MakeOptimizationInt_24));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 1) = ((MR_Box) (libs__handle_options__V_63_63));
#line 156 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 0) = ((MR_Box) (libs__handle_options__MakeShortInterface_23));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 1) = ((MR_Box) (libs__handle_options__V_62_62));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__MakePrivateInterface_22));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (libs__handle_options__V_61_61));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 0) = ((MR_Box) (libs__handle_options__MakeInterface_21));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 1) = ((MR_Box) (libs__handle_options__V_60_60));
#line 155 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 0) = ((MR_Box) (libs__handle_options__GenerateDependencyFile_20));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 1) = ((MR_Box) (libs__handle_options__V_59_59));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 0) = ((MR_Box) (libs__handle_options__GenerateDependencies_19));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 1) = ((MR_Box) (libs__handle_options__V_58_58));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          mercury__bool__or_list_2_p_0(libs__handle_options__V_57_57, &libs__handle_options__NotLink_35);
        }
#line 160 "handle_options.m"
        {
#line 160 "handle_options.m"
          mercury__bool__not_2_p_0(libs__handle_options__NotLink_35, libs__handle_options__Link_12);
        }
#line 161 "handle_options.m"
        {
#line 161 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 116, &libs__handle_options__Smart_36);
        }
#line 163 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Smart_36 == (MR_Integer) 1);
#line 163 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 164 "handle_options.m"
          libs__handle_options__succeeded = (*libs__handle_options__Link_12 == (MR_Integer) 1);
#line 169 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 168 "handle_options.m"
          {
#line 168 "handle_options.m"
            {
#line 168 "handle_options.m"
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_41_41, libs__handle_options__STATE_VARIABLE_Globals_37);
#line 168 "handle_options.m"
              return;
            }
#line 168 "handle_options.m"
          }
#line 169 "handle_options.m"
        else
#line 170 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Globals_37 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
#line 127 "handle_options.m"
      }
#line 126 "handle_options.m"
    else
#line 122 "handle_options.m"
      {
#line 123 "handle_options.m"
        *libs__handle_options__Link_12 = (MR_Integer) 0;
#line 122 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_37 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
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
