/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2860 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s {
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Options_3;
#line 2860 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__HeadVar__2_16;
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont;
#line 2860 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont_env_ptr;
#line 2860 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded;
#line 2860 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Name_6;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Comp_7;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__CompOpts_8;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__MaybeTargets_9;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__IncludeInGradeString_10;
#line 2867 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_0;
#line 2867 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Opt_11;
#line 2867 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Value_12;
#line 2867 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_17_17;
#line 2868 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv0_V_17_17;
#line 2881 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_1;
#line 2881 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 2881 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 2881 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Target_14;
#line 2881 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_18_18;
#line 2881 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_27_27;
#line 2882 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv2_Target_14;
#line 2860 "handle_options.m"
};

#line 2701 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2704 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2704 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2704 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2704 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2705 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2701 "handle_options.m"
};

#line 2692 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2695 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2695 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2695 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2695 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2696 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2692 "handle_options.m"
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

#line 2860 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 2860 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2860 "handle_options.m"
};

#line 3159 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3159 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3159 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3159 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3159 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3159 "handle_options.m"
};

#line 2860 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 2860 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2860 "handle_options.m"
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


#line 296 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 299 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 302 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

#line 305 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 308 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0;

#line 311 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 314 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 317 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 320 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0;

#line 323 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 326 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0;

#line 329 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1;

#line 332 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2;

#line 335 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3;

#line 338 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4;

#line 341 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5;

#line 344 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6;

#line 347 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7;

#line 350 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8;

#line 353 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9;

#line 356 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10;

#line 359 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11;

#line 362 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12;

#line 365 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13;

#line 368 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0[14];

#line 371 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0[14];

#line 374 "libs.handle_options.c"
static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_grade_component_0[14];

#line 377 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 380 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 382 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 385 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 388 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 390 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 392 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3);

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3159__1_3_p_0(
#line 3159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3159 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_2(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2868 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_4(
#line 2868 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_3(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_5(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_6(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2882 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_8(
#line 2882 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_7(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_9(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0(
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2860 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2811__1_3_p_0(
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2720 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2720__1_2_p_0(
#line 2720 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2720 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2238 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2238__1_2_f_0(
#line 2238 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2238 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1549);

#line 2236 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(
#line 2236 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2236 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1543);

#line 2245 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2245__1_1_f_0(
#line 2245 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1538);

#line 2244 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2244__1_1_f_0(
#line 2244 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1533);

#line 2214 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2214__1_2_f_0(
#line 2214 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2214 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1520);

#line 2210 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2210__1_2_f_0(
#line 2210 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2210 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1514);

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__2_2_p_0(
#line 2192 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1507,
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1663);

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__1_2_p_0(
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1508,
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1665);

#line 2174 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2174__1_3_f_0(
#line 2174 "handle_options.m"
  MR_String libs__handle_options__FullArch_127,
#line 2174 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2174 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1495);

#line 2138 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(
#line 2138 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2138 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1476);

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_2_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2128 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1466);

#line 2115 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(
#line 2115 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2115 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1449);

#line 2100 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2100__1_2_f_0(
#line 2100 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2100 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434);

#line 528 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__528__1_1_p_0(
#line 528 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_257);

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_2(
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2811 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_1(
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2811 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2788 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0(
#line 2788 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2788 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2788 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2788 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2788 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2760 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2760 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2760 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3235 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3235 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3235 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3220 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3220 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3220 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3209 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3209 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3209 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3204 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3204 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3204 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3165 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3165 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3165 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3165 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2904 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2904 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2904 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2904 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2902 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2902 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 2842 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2842 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2842 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2705 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2705 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2701 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2696 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2696 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2692 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2720 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2720 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2720 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2720 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2674 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2674 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2674 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2674 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2651 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2651 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2651 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2651 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2651 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2651 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2651 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2639 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2639 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2639 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2639 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2637 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2637 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2637 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2637 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2629 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2629 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2629 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2627 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2627 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2627 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2619 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2619 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2619 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2619 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2619 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2568 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2568 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2531 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2531 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2531 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2516 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2516 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2516 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2496 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2496 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2496 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2478 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2478 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2462 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2462 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2382 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2382 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2382 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2238 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2238 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2238 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2236 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2245 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2245 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2245 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2244 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2244 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2244 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2214 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2214 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2214 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2210 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2210 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2210 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2174 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2174 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2174 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2138 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
#line 2138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2128 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2115 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 2115 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2115 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2100 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 2100 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2100 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 629 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 629 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_37,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_38,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_39,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_40,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_41,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_187,
#line 629 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_188,
#line 629 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_189);

#line 620 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 620 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 620 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 620 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6);

#line 528 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_23_p_0_1(
#line 528 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 528 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 238 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
#line 238 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_123,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_124,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__Target_25,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_26,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_27,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_28,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_29,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_30,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_31,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_32,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_33,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_34,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_35,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_36,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_37,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_38,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_39,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_40,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_41,
#line 238 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_125,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_126);

#line 209 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 209 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 209 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 209 "handle_options.m"
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

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 184 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 184 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__Result_10);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2860 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2788 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2788 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2788 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3159 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3159 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3159 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3159 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3159 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2860 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2557 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2557 "handle_options.m"
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

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[22][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[218][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[15][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[8][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[3][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[7][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9];

static /* final */ const MR_Box libs__handle_options_scalar_common_10[1][10];


#line 2909 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 2909 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2909 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2909 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2909 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2909 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2909 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[51];

#line 3167 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 3167 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3167 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[30];



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
    ((MR_Box) (libs__handle_options__check_option_values_23_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_11)),
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
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[218][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2013 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "accurate"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 17 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 19 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[17])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 246)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[20])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[19])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 245)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 23 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[21])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 25 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "c"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 246)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 29 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[19])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 251)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 33 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[32])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 250)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 35 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 245)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 39 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[37])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 247)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 41 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "csharp"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 183)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 45 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[44])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 182)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 47 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[46])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[45])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 183)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 49 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[48])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[46])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 52 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 54 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[52])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 56 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[54])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Integer) 217)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 58 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[52])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 216)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 60 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[15])))
  },
  /* row 62 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "erlang"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 69 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[68])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 71 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[70])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[23])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[74])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "boehm_debug"))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Integer) 211)),
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
    ((MR_Box) ((MR_String) "hgc"))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[80])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 83 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "asm"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[88])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 91 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 92 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[17])))
  },
  /* row 97 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96])))
  },
  /* row 98 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[15])))
  },
  /* row 101 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
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
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Integer) 484)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[110])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 298)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 115 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[114])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 117 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 119 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[117])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[122])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123])))
  },
  /* row 127 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mps"))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[129])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[29])))
  },
  /* row 132 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[131])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[133])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 136 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[135])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[137])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 140 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[115])))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 143 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[142])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[142])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[119])))
  },
  /* row 145 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 147 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[146])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 148 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[139])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[147])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 150 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[150])))
  },
  /* row 152 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[149])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[140])))
  },
  /* row 153 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[142])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 155 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[154])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 157 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[156])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[155])))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[158])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[157])))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[160])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[155])))
  },
  /* row 162 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[158])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 164 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[163])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 165 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[160])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[158])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[156])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[164])))
  },
  /* row 168 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[158])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[21])))
  },
  /* row 170 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[169])))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_Integer) 239)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 172 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[171])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 174 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[173])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[172])))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 176 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[175])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 178 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[177])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 180 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[179])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[178])))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 182 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[181])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 184 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[183])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 186 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[185])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[184])))
  },
  /* row 187 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 188 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[187])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[185])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[188])))
  },
  /* row 190 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 191 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[190])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 192 */
  {
    ((MR_Box) ((MR_Integer) 208)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 193 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[192])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[191])))
  },
  /* row 194 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 195 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[194])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 196 */
  {
    ((MR_Box) ((MR_Integer) 208)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 197 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[196])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[195])))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[208])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Integer) 182)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Integer) 298)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[27])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[43])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[67])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[106])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[108])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 32))
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
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[51] = {
  /* row 0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[132]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[170]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 5 */
  {
    (MR_String) "asm_fast",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[25]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "hl",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "hl_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "hlc_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "il",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "ilc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[7]),
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "csharp",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]),
    (MR_Integer) 1
  },
  /* row 14 */
  {
    (MR_String) "erlang",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]),
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "par",
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 17 */
  {
    (MR_String) "gc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "gcd",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 19 */
  {
    (MR_String) "hgc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 20 */
  {
    (MR_String) "mps",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[130]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[143]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[153]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[151]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[197]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[193]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[189]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 32 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 34 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[60]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[174]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "picreg",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[136]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "debug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[47]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[176]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "exts",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[71]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "stseg",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[180]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 48 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 49 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[168]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 50 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[166]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__handle_options__vector_common_type_12_0_s libs__handle_options_vector_common_12[30] = {
  /* row 0 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[40]
  },
  /* row 1 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[38]
  },
  /* row 2 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[28]
  },
  /* row 3 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[18]
  },
  /* row 4 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[14]
  },
  /* row 5 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[16]
  },
  /* row 6 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[206]
  },
  /* row 7 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[207]
  },
  /* row 8 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[209]
  },
  /* row 9 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[114]
  },
  /* row 10 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[120]
  },
  /* row 11 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[149]
  },
  /* row 12 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[139]
  },
  /* row 13 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[210]
  },
  /* row 14 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[183]
  },
  /* row 15 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[59]
  },
  /* row 16 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[53]
  },
  /* row 17 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[122]
  },
  /* row 18 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[211]
  },
  /* row 19 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[212]
  },
  /* row 20 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[213]
  },
  /* row 21 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[214]
  },
  /* row 22 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[44]
  },
  /* row 23 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[215]
  },
  /* row 24 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[179]
  },
  /* row 25 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[68]
  },
  /* row 26 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[216]
  },
  /* row 27 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[156]
  },
  /* row 28 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[154]
  },
  /* row 29 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[217]
  },
};


#include "libs.handle_options.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#line 2568 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2568 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3620 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3629 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3637 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3646 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3655 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3663 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3672 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3682 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3690 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3698 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 3708 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3714 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3720 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3726 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3732 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3738 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3744 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3750 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3756 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3762 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 3768 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 3774 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 3780 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 3786 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 3792 "libs.handle_options.c"
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

#line 3810 "libs.handle_options.c"
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

#line 3828 "libs.handle_options.c"
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

#line 3846 "libs.handle_options.c"
const MR_TypeCtorInfo_Struct libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__handle_options____Unify____grade_component_0_0_10001)),
  ((MR_Box) (libs__handle_options____Compare____grade_component_0_0_10001)),
  (MR_String) "libs.handle_options",
  (MR_String) "grade_component",
  {
    libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0
  },
  {
    libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0
  },
  (MR_Integer) 14,
  (MR_Integer) 4,
  libs__handle_options__libs__handle_options__functor_number_map_grade_component_0
};

#line 3867 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 3870 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3872 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 3874 "libs.handle_options.c"
{
#line 3876 "libs.handle_options.c"
  {
#line 3878 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 3881 "libs.handle_options.c"
    {
#line 3883 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 3886 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 3888 "libs.handle_options.c"
  }
#line 3890 "libs.handle_options.c"
}

#line 3893 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 3896 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3898 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3900 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 3902 "libs.handle_options.c"
{
#line 3904 "libs.handle_options.c"
  {
#line 3906 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 3909 "libs.handle_options.c"
    {
#line 3911 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 3914 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 3916 "libs.handle_options.c"
  }
#line 3918 "libs.handle_options.c"
}

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3159__1_3_p_0(
#line 3159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3159 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3159 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3159 "handle_options.m"
{
#line 3159 "handle_options.m"
  {
#line 3159 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3159 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3159 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3162 "handle_options.m"
    {
#line 3162 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3162 "handle_options.m"
      return;
    }
#line 3159 "handle_options.m"
  }
#line 3159 "handle_options.m"
}

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_2(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2867 "handle_options.m"
{
#line 2867 "handle_options.m"
  {
#line 2867 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2867 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_0, 1);
#line 2867 "handle_options.m"
  }
#line 2867 "handle_options.m"
}

#line 2868 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_4(
#line 2868 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2868 "handle_options.m"
{
#line 2868 "handle_options.m"
  {
#line 2868 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2868 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv0_V_17_17);
#line 2868 "handle_options.m"
    {
#line 2868 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_3(libs__handle_options__env_ptr);
#line 2868 "handle_options.m"
      return;
    }
#line 2868 "handle_options.m"
  }
#line 2868 "handle_options.m"
}

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_3(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2867 "handle_options.m"
{
#line 2867 "handle_options.m"
  {
#line 2867 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2867 "handle_options.m"
    {
#line 2870 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 2870 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 2868 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 2868 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 2870 "handle_options.m"
      {
#line 2870 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 2870 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2870 "handle_options.m"
        {
#line 2870 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 2870 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2870 "handle_options.m"
        }
#line 2870 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2870 "handle_options.m"
        {
#line 2870 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 2869 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded);
#line 2869 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2869 "handle_options.m"
        {
#line 2869 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_2(libs__handle_options__env_ptr);
#line 2869 "handle_options.m"
          return;
        }
#line 2867 "handle_options.m"
    }
#line 2867 "handle_options.m"
  }
#line 2867 "handle_options.m"
}

#line 2867 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_5(
#line 2867 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2867 "handle_options.m"
{
#line 2867 "handle_options.m"
  {
#line 2867 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2867 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_0) == 0)
#line 2867 "handle_options.m"
      {
#line 2867 "handle_options.m"
        {
#line 2868 "handle_options.m"
          {
#line 2868 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 2867 "handle_options.m"
        }
#line 2867 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2867 "handle_options.m"
      }
#line 2867 "handle_options.m"
    else
#line 2867 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2867 "handle_options.m"
  }
#line 2867 "handle_options.m"
}

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_6(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2881 "handle_options.m"
{
#line 2881 "handle_options.m"
  {
#line 2881 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2881 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_1, 1);
#line 2881 "handle_options.m"
  }
#line 2881 "handle_options.m"
}

#line 2882 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_8(
#line 2882 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2882 "handle_options.m"
{
#line 2882 "handle_options.m"
  {
#line 2882 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2882 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv2_Target_14);
#line 2882 "handle_options.m"
    {
#line 2882 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_7(libs__handle_options__env_ptr);
#line 2882 "handle_options.m"
      return;
    }
#line 2882 "handle_options.m"
  }
#line 2882 "handle_options.m"
}

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_7(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2881 "handle_options.m"
{
#line 2881 "handle_options.m"
  {
#line 2881 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2881 "handle_options.m"
    {
#line 2883 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 2883 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_18_18 = (MR_Integer) 170;
#line 4163 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2883 "handle_options.m"
      {
#line 2883 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 2883 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2883 "handle_options.m"
        {
#line 2883 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 2883 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2883 "handle_options.m"
        }
#line 2881 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2881 "handle_options.m"
        {
#line 2883 "handle_options.m"
          {
#line 2883 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__V_27_27);
          }
#line 2883 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2883 "handle_options.m"
            {
#line 2883 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_6(libs__handle_options__env_ptr);
#line 2883 "handle_options.m"
              return;
            }
#line 2881 "handle_options.m"
        }
#line 2881 "handle_options.m"
    }
#line 2881 "handle_options.m"
  }
#line 2881 "handle_options.m"
}

#line 2881 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_9(
#line 2881 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2881 "handle_options.m"
{
#line 2881 "handle_options.m"
  {
#line 2881 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2881 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__commit_1) == 0)
#line 2881 "handle_options.m"
      {
#line 2881 "handle_options.m"
        {
#line 2881 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4228 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 2882 "handle_options.m"
          {
#line 2882 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 2881 "handle_options.m"
        }
#line 2881 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2881 "handle_options.m"
      }
#line 2881 "handle_options.m"
    else
#line 2881 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2881 "handle_options.m"
  }
#line 2881 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2867 "handle_options.m"
    {
#line 2867 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 2867 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded);
#line 2860 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2860 "handle_options.m"
      {
#line 2875 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 2860 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2860 "handle_options.m"
          {
#line 2884 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2885 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2884 "handle_options.m"
            else
#line 2881 "handle_options.m"
              {
#line 2881 "handle_options.m"
                {
#line 2881 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 2881 "handle_options.m"
              }
#line 2860 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__succeeded)
#line 2860 "handle_options.m"
              {
#line 2887 "handle_options.m"
                {
#line 2887 "handle_options.m"
                  MR_Word base;
#line 2887 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2887 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 2887 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Comp_7));
#line 2887 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Name_6));
#line 2887 "handle_options.m"
                }
#line 2887 "handle_options.m"
                {
#line 2887 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont_env_ptr);
#line 2887 "handle_options.m"
                  return;
                }
#line 2860 "handle_options.m"
              }
#line 2860 "handle_options.m"
          }
#line 2860 "handle_options.m"
      }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0(
#line 2860 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2860 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0_s libs__handle_options__env;

#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2861 "handle_options.m"
    {
#line 2861 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0_1, &libs__handle_options__env);
    }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
}

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2811__1_3_p_0(
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2811 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2811 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 2811 "handle_options.m"
{
#line 2811 "handle_options.m"
  {
#line 2811 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 2813 "handle_options.m"
    {
#line 2813 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 2813 "handle_options.m"
      return;
    }
#line 2811 "handle_options.m"
  }
#line 2811 "handle_options.m"
}

#line 2720 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2720__1_2_p_0(
#line 2720 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2720 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2720 "handle_options.m"
{
#line 2720 "handle_options.m"
  {
#line 2720 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2721 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2721 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2721 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2721 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2721 "handle_options.m"
    {
#line 2721 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2720 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2720 "handle_options.m"
      {
#line 2720 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2720 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2720 "handle_options.m"
      }
#line 2720 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2720 "handle_options.m"
  }
#line 2720 "handle_options.m"
}

#line 2238 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2238__1_2_f_0(
#line 2238 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2238 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1549)
#line 2238 "handle_options.m"
{
#line 2238 "handle_options.m"
  {
#line 2238 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2238 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1550;
#line 2238 "handle_options.m"
    MR_String libs__handle_options__V_1551_1551;
#line 2238 "handle_options.m"
    MR_String libs__handle_options__V_1552_1552;
#line 2239 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2239 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1552_1552;

#line 2239 "handle_options.m"
    {
#line 2239 "handle_options.m"
      libs__handle_options__conv1_V_1552_1552 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1549)));
    }
#line 2239 "handle_options.m"
    libs__handle_options__V_1552_1552 = ((MR_String) libs__handle_options__conv1_V_1552_1552);
#line 2239 "handle_options.m"
    {
#line 2239 "handle_options.m"
      libs__handle_options__V_1551_1551 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1552_1552, (MR_String) "Mercury");
    }
#line 2238 "handle_options.m"
    {
#line 2238 "handle_options.m"
      return libs__handle_options__HeadVar__3_1550 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1551_1551, (MR_String) "hrls");
    }
#line 2238 "handle_options.m"
    return libs__handle_options__HeadVar__3_1550;
#line 2238 "handle_options.m"
  }
#line 2238 "handle_options.m"
}

#line 2236 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(
#line 2236 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2236 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1543)
#line 2236 "handle_options.m"
{
#line 2236 "handle_options.m"
  {
#line 2236 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1544;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__V_1545_1545;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__V_1546_1546;
#line 2237 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2237 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1546_1546;

#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      libs__handle_options__conv1_V_1546_1546 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1543)));
    }
#line 2237 "handle_options.m"
    libs__handle_options__V_1546_1546 = ((MR_String) libs__handle_options__conv1_V_1546_1546);
#line 2237 "handle_options.m"
    {
#line 2237 "handle_options.m"
      libs__handle_options__V_1545_1545 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1546_1546, (MR_String) "Mercury");
    }
#line 2236 "handle_options.m"
    {
#line 2236 "handle_options.m"
      return libs__handle_options__HeadVar__3_1544 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1545_1545, (MR_String) "mihs");
    }
#line 2236 "handle_options.m"
    return libs__handle_options__HeadVar__3_1544;
#line 2236 "handle_options.m"
  }
#line 2236 "handle_options.m"
}

#line 2245 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2245__1_1_f_0(
#line 2245 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1538)
#line 2245 "handle_options.m"
{
#line 2245 "handle_options.m"
  {
#line 2245 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2245 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1539;
#line 2245 "handle_options.m"
    MR_String libs__handle_options__V_1540_1540;

#line 2245 "handle_options.m"
    {
#line 2245 "handle_options.m"
      libs__handle_options__V_1540_1540 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1538, (MR_String) "Mercury");
    }
#line 2245 "handle_options.m"
    {
#line 2245 "handle_options.m"
      return libs__handle_options__HeadVar__2_1539 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1540_1540, (MR_String) "hrls");
    }
#line 2245 "handle_options.m"
    return libs__handle_options__HeadVar__2_1539;
#line 2245 "handle_options.m"
  }
#line 2245 "handle_options.m"
}

#line 2244 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2244__1_1_f_0(
#line 2244 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1533)
#line 2244 "handle_options.m"
{
#line 2244 "handle_options.m"
  {
#line 2244 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2244 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1534;
#line 2244 "handle_options.m"
    MR_String libs__handle_options__V_1535_1535;

#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      libs__handle_options__V_1535_1535 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1533, (MR_String) "Mercury");
    }
#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      return libs__handle_options__HeadVar__2_1534 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1535_1535, (MR_String) "mihs");
    }
#line 2244 "handle_options.m"
    return libs__handle_options__HeadVar__2_1534;
#line 2244 "handle_options.m"
  }
#line 2244 "handle_options.m"
}

#line 2214 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2214__1_2_f_0(
#line 2214 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2214 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1520)
#line 2214 "handle_options.m"
{
#line 2214 "handle_options.m"
  {
#line 2214 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2214 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1521;
#line 2214 "handle_options.m"
    MR_String libs__handle_options__V_1522_1522;
#line 2214 "handle_options.m"
    MR_String libs__handle_options__V_1523_1523;
#line 2215 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2215 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1523_1523;

#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__handle_options__conv1_V_1523_1523 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1520)));
    }
#line 2215 "handle_options.m"
    libs__handle_options__V_1523_1523 = ((MR_String) libs__handle_options__conv1_V_1523_1523);
#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__handle_options__V_1522_1522 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1523_1523, (MR_String) "Mercury");
    }
#line 2214 "handle_options.m"
    {
#line 2214 "handle_options.m"
      return libs__handle_options__HeadVar__3_1521 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1522_1522, (MR_String) "inits");
    }
#line 2214 "handle_options.m"
    return libs__handle_options__HeadVar__3_1521;
#line 2214 "handle_options.m"
  }
#line 2214 "handle_options.m"
}

#line 2210 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2210__1_2_f_0(
#line 2210 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2210 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1514)
#line 2210 "handle_options.m"
{
#line 2210 "handle_options.m"
  {
#line 2210 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2210 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1515;
#line 2210 "handle_options.m"
    MR_String libs__handle_options__V_1516_1516;
#line 2210 "handle_options.m"
    MR_String libs__handle_options__V_1517_1517;
#line 2210 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2210 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1517_1517;

#line 2210 "handle_options.m"
    {
#line 2210 "handle_options.m"
      libs__handle_options__conv1_V_1517_1517 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1514)));
    }
#line 2210 "handle_options.m"
    libs__handle_options__V_1517_1517 = ((MR_String) libs__handle_options__conv1_V_1517_1517);
#line 2210 "handle_options.m"
    {
#line 2210 "handle_options.m"
      libs__handle_options__V_1516_1516 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1517_1517, (MR_String) "Mercury");
    }
#line 2210 "handle_options.m"
    {
#line 2210 "handle_options.m"
      return libs__handle_options__HeadVar__3_1515 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1516_1516, (MR_String) "lib");
    }
#line 2210 "handle_options.m"
    return libs__handle_options__HeadVar__3_1515;
#line 2210 "handle_options.m"
  }
#line 2210 "handle_options.m"
}

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__2_2_p_0(
#line 2192 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1507,
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1663)
#line 2192 "handle_options.m"
{
#line 2192 "handle_options.m"
  {
#line 2192 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2192 "handle_options.m"
    {
#line 2192 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1507, ((MR_Box) (libs__handle_options__HeadVar__2_1663)));
    }
#line 2192 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2192 "handle_options.m"
  }
#line 2192 "handle_options.m"
}

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__1_2_p_0(
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1508,
#line 2192 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1665)
#line 2192 "handle_options.m"
{
#line 2192 "handle_options.m"
  {
#line 2192 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1508, libs__handle_options__HeadVar__2_1665) == 0);

#line 2192 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2192 "handle_options.m"
  }
#line 2192 "handle_options.m"
}

#line 2174 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2174__1_3_f_0(
#line 2174 "handle_options.m"
  MR_String libs__handle_options__FullArch_127,
#line 2174 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2174 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1495)
#line 2174 "handle_options.m"
{
#line 2174 "handle_options.m"
  {
#line 2174 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2174 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1496;
#line 2174 "handle_options.m"
    MR_String libs__handle_options__V_1497_1497;
#line 2174 "handle_options.m"
    MR_String libs__handle_options__V_1498_1498;

#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      libs__handle_options__V_1498_1498 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1495, (MR_String) "Mercury");
    }
#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      libs__handle_options__V_1497_1497 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1498_1498, libs__handle_options__GradeString_139);
    }
#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      return libs__handle_options__HeadVar__4_1496 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1497_1497, libs__handle_options__FullArch_127);
    }
#line 2174 "handle_options.m"
    return libs__handle_options__HeadVar__4_1496;
#line 2174 "handle_options.m"
  }
#line 2174 "handle_options.m"
}

#line 2138 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(
#line 2138 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2138 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1476)
#line 2138 "handle_options.m"
{
#line 2138 "handle_options.m"
  {
#line 2138 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2138 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1477;
#line 2138 "handle_options.m"
    MR_String libs__handle_options__V_1478_1478;

#line 2140 "handle_options.m"
    {
#line 2140 "handle_options.m"
      libs__handle_options__V_1478_1478 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1476, (MR_String) "modules");
    }
#line 2138 "handle_options.m"
    {
#line 2138 "handle_options.m"
      return libs__handle_options__HeadVar__3_1477 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1478_1478, libs__handle_options__GradeString_139);
    }
#line 2138 "handle_options.m"
    return libs__handle_options__HeadVar__3_1477;
#line 2138 "handle_options.m"
  }
#line 2138 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_2_f_0(
#line 2128 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2128 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1466)
#line 2128 "handle_options.m"
{
#line 2128 "handle_options.m"
  {
#line 2128 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1467;
#line 2128 "handle_options.m"
    MR_String libs__handle_options__V_1468_1468;

#line 2130 "handle_options.m"
    {
#line 2130 "handle_options.m"
      libs__handle_options__V_1468_1468 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_139);
    }
#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      return libs__handle_options__HeadVar__3_1467 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1466, libs__handle_options__V_1468_1468);
    }
#line 2128 "handle_options.m"
    return libs__handle_options__HeadVar__3_1467;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2115 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(
#line 2115 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2115 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1449)
#line 2115 "handle_options.m"
{
#line 2115 "handle_options.m"
  {
#line 2115 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2115 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1450;
#line 2115 "handle_options.m"
    MR_String libs__handle_options__V_1451_1451;
#line 2115 "handle_options.m"
    MR_String libs__handle_options__V_1452_1452;

#line 2117 "handle_options.m"
    {
#line 2117 "handle_options.m"
      libs__handle_options__V_1452_1452 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1449, (MR_String) "lib");
    }
#line 2117 "handle_options.m"
    {
#line 2117 "handle_options.m"
      libs__handle_options__V_1451_1451 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1452_1452, libs__handle_options__GradeString_139);
    }
#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      return libs__handle_options__HeadVar__3_1450 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1451_1451, (MR_String) "inc");
    }
#line 2115 "handle_options.m"
    return libs__handle_options__HeadVar__3_1450;
#line 2115 "handle_options.m"
  }
#line 2115 "handle_options.m"
}

#line 2100 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2100__1_2_f_0(
#line 2100 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2100 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434)
#line 2100 "handle_options.m"
{
#line 2100 "handle_options.m"
  {
#line 2100 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2100 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1435;
#line 2100 "handle_options.m"
    MR_String libs__handle_options__V_1436_1436;

#line 2102 "handle_options.m"
    {
#line 2102 "handle_options.m"
      libs__handle_options__V_1436_1436 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1434, (MR_String) "lib");
    }
#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      return libs__handle_options__HeadVar__3_1435 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1436_1436, libs__handle_options__GradeString_139);
    }
#line 2100 "handle_options.m"
    return libs__handle_options__HeadVar__3_1435;
#line 2100 "handle_options.m"
  }
#line 2100 "handle_options.m"
}

#line 528 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__528__1_1_p_0(
#line 528 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_257)
#line 528 "handle_options.m"
{
#line 528 "handle_options.m"
  {
#line 528 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__1_257 == (MR_Char) 46);

#line 528 "handle_options.m"
    return libs__handle_options__succeeded;
#line 528 "handle_options.m"
  }
#line 528 "handle_options.m"
}

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_2(
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2811 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2811 "handle_options.m"
{
#line 2811 "handle_options.m"
  {
#line 2811 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 2811 "handle_options.m"
    {
#line 2811 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2811__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 2811 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 2811 "handle_options.m"
  }
#line 2811 "handle_options.m"
}

#line 2811 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0_1(
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2811 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2811 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2811 "handle_options.m"
{
#line 2811 "handle_options.m"
  {
#line 2811 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 2811 "handle_options.m"
    {
#line 2811 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2811__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 2811 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 2811 "handle_options.m"
  }
#line 2811 "handle_options.m"
}

#line 2788 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0(
#line 2788 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2788 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2788 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2788 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2788 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2788 "handle_options.m"
{
#line 2788 "handle_options.m"
  {
#line 2788 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2790 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2793 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 2811 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2802 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2800 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2800 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2790 "handle_options.m"
    {
#line 2790 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2788 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2788 "handle_options.m"
      {
#line 5078 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2793 "handle_options.m"
        {
#line 2793 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2793 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2788 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2788 "handle_options.m"
          {
#line 5091 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2794 "handle_options.m"
            {
#line 2794 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 2811 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[20];
#line 5100 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5102 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 2811 "handle_options.m"
            {
#line 2811 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 2811 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2800 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2800 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2800 "handle_options.m"
              {
#line 2800 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2800 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2800 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2800 "handle_options.m"
                  {
#line 2800 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2800 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2800 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2800 "handle_options.m"
                  }
#line 2800 "handle_options.m"
              }
#line 2802 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2801 "handle_options.m"
              {
#line 2801 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2801 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 2811 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2801 "handle_options.m"
                {
#line 2801 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2801 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 170));
#line 2801 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2801 "handle_options.m"
                }
#line 2801 "handle_options.m"
                {
#line 2801 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2801 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2801 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2801 "handle_options.m"
                }
#line 2811 "handle_options.m"
                {
#line 2811 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[21], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 2811 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2801 "handle_options.m"
              }
#line 2802 "handle_options.m"
            else
#line 2803 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2802 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2788 "handle_options.m"
          }
#line 2788 "handle_options.m"
      }
#line 2788 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2788 "handle_options.m"
  }
#line 2788 "handle_options.m"
}

#line 2760 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2760 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2760 "handle_options.m"
{
#line 2760 "handle_options.m"
  {
#line 2760 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2760 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2760 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2760 "handle_options.m"
    {
#line 2760 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2760 "handle_options.m"
      return;
    }
#line 2760 "handle_options.m"
  }
#line 2760 "handle_options.m"
}

#line 2760 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2760 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2760 "handle_options.m"
{
#line 5233 "libs.handle_options.c"
  {
#line 5235 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5238 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5240 "libs.handle_options.c"
  }
#line 2760 "handle_options.m"
}

#line 3235 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3235 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3235 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3235 "handle_options.m"
{
#line 3238 "handle_options.m"
  {
#line 3238 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3238 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3251 "handle_options.m"
      {
#line 3251 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bdgvP";
#line 3251 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3251 "handle_options.m"
      }
#line 3238 "handle_options.m"
    else
#line 3238 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ALL") == 0))
#line 3238 "handle_options.m"
        {
#line 3238 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ";
#line 3238 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3238 "handle_options.m"
        }
#line 3238 "handle_options.m"
      else
#line 3238 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "all") == 0))
#line 3240 "handle_options.m"
          {
#line 3240 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCMPSTZ";
#line 3240 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3240 "handle_options.m"
          }
#line 3238 "handle_options.m"
        else
#line 3238 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "cmp") == 0))
#line 3242 "handle_options.m"
            {
#line 3242 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_String) "bdfgilmnprstuvzP";
#line 3242 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3242 "handle_options.m"
            }
#line 3238 "handle_options.m"
          else
#line 3238 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "lco") == 0))
#line 3257 "handle_options.m"
              {
#line 3257 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_String) "agiuvzD";
#line 3257 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3257 "handle_options.m"
              }
#line 3238 "handle_options.m"
            else
#line 3238 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "min") == 0))
#line 3247 "handle_options.m"
                {
#line 3247 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_String) "ilv";
#line 3247 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3247 "handle_options.m"
                }
#line 3238 "handle_options.m"
              else
#line 3238 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "osv") == 0))
#line 3252 "handle_options.m"
                  {
#line 3252 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnpruvP";
#line 3252 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3252 "handle_options.m"
                  }
#line 3238 "handle_options.m"
                else
#line 3238 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "allD") == 0))
#line 3239 "handle_options.m"
                    {
#line 3239 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDMPT";
#line 3239 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3239 "handle_options.m"
                    }
#line 3238 "handle_options.m"
                  else
#line 3238 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ctgc") == 0))
#line 3254 "handle_options.m"
                      {
#line 3254 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_String) "cdinpGDRS";
#line 3254 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3254 "handle_options.m"
                      }
#line 3238 "handle_options.m"
                    else
#line 3238 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "most") == 0))
#line 3241 "handle_options.m"
                        {
#line 3241 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdfgilmnprstvzP";
#line 3241 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 3241 "handle_options.m"
                        }
#line 3238 "handle_options.m"
                      else
#line 3238 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "poly") == 0))
#line 3258 "handle_options.m"
                          {
#line 3258 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_String) "vxX";
#line 3258 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 3258 "handle_options.m"
                          }
#line 3238 "handle_options.m"
                        else
#line 3238 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vars") == 0))
#line 3255 "handle_options.m"
                            {
#line 3255 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_String) "npBis";
#line 3255 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3255 "handle_options.m"
                            }
#line 3238 "handle_options.m"
                          else
#line 3238 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "paths") == 0))
#line 3248 "handle_options.m"
                              {
#line 3248 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_String) "cP";
#line 3248 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 3248 "handle_options.m"
                              }
#line 3238 "handle_options.m"
                            else
#line 3238 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "petdr") == 0))
#line 3249 "handle_options.m"
                                {
#line 3249 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_String) "din";
#line 3249 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 3249 "handle_options.m"
                                }
#line 3238 "handle_options.m"
                              else
#line 3238 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trans") == 0))
#line 3243 "handle_options.m"
                                  {
#line 3243 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstuvz";
#line 3243 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3243 "handle_options.m"
                                  }
#line 3238 "handle_options.m"
                                else
#line 3238 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "detism") == 0))
#line 3250 "handle_options.m"
                                    {
#line 3250 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_String) "divM";
#line 3250 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3250 "handle_options.m"
                                    }
#line 3238 "handle_options.m"
                                  else
#line 3238 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "codegen") == 0))
#line 3245 "handle_options.m"
                                      {
#line 3245 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_String) "dfnprsu";
#line 3245 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3245 "handle_options.m"
                                      }
#line 3238 "handle_options.m"
                                    else
#line 3238 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vanessa") == 0))
#line 3246 "handle_options.m"
                                        {
#line 3246 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_String) "ltuCIU";
#line 3246 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 3246 "handle_options.m"
                                        }
#line 3238 "handle_options.m"
                                      else
#line 3238 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mintrans") == 0))
#line 3244 "handle_options.m"
                                          {
#line 3244 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstvz";
#line 3244 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 3244 "handle_options.m"
                                          }
#line 3238 "handle_options.m"
                                        else
#line 3238 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "statevar") == 0))
#line 3256 "handle_options.m"
                                            {
#line 3256 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_String) "gvCP";
#line 3256 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 3256 "handle_options.m"
                                            }
#line 3238 "handle_options.m"
                                          else
#line 3238 "handle_options.m"
                                            libs__handle_options__succeeded = MR_FALSE;
#line 3238 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3238 "handle_options.m"
  }
#line 3235 "handle_options.m"
}

#line 3220 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3220 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3220 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3220 "handle_options.m"
{
#line 3223 "handle_options.m"
  {
#line 3223 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3223 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3223 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3223 "handle_options.m"
  }
#line 3220 "handle_options.m"
}

#line 3209 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3209 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3209 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3209 "handle_options.m"
{
#line 3209 "handle_options.m"
  {
#line 3209 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3209 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3209 "handle_options.m"
    {
#line 3209 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3209 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3209 "handle_options.m"
  }
#line 3209 "handle_options.m"
}

#line 3204 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3204 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3204 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3204 "handle_options.m"
{
#line 3206 "handle_options.m"
  {
#line 3206 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3206 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3206 "handle_options.m"
      {
#line 3206 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3206 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3206 "handle_options.m"
      }
#line 3206 "handle_options.m"
    else
#line 3207 "handle_options.m"
      {
#line 3207 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3207 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3207 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3207 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3209 "handle_options.m"
        {
#line 3209 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[6], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3210 "handle_options.m"
        {
#line 3210 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3215 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3217 "handle_options.m"
          {
#line 3217 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3217 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3217 "handle_options.m"
          }
#line 3215 "handle_options.m"
        else
#line 3213 "handle_options.m"
          {
#line 3213 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3213 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3214 "handle_options.m"
            {
#line 3214 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3213 "handle_options.m"
          }
#line 3207 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3207 "handle_options.m"
          {
#line 3211 "handle_options.m"
            {
#line 3211 "handle_options.m"
              MR_Word base;
#line 3211 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3211 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3211 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3211 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3211 "handle_options.m"
            }
#line 3211 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3207 "handle_options.m"
          }
#line 3207 "handle_options.m"
      }
#line 3206 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3206 "handle_options.m"
  }
#line 3204 "handle_options.m"
}

#line 3165 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3165 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3165 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3165 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3165 "handle_options.m"
{
#line 3167 "handle_options.m"
  {
#line 3167 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3167 "handle_options.m"
    {
#line 3167 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3167 "handle_options.m"
      do
#line 3167 "handle_options.m"
        {
#line 3167 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3167 "handle_options.m"
          {
#line 3167 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3167 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3167 "handle_options.m"
        }
#line 3167 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3167 "handle_options.m"
    }
#line 3167 "handle_options.m"
  }
#line 3165 "handle_options.m"
}

#line 2904 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2904 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2904 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2904 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2904 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2904 "handle_options.m"
{
#line 2909 "handle_options.m"
  {
#line 2909 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2909 "handle_options.m"
    {
#line 2909 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 2909 "handle_options.m"
      do
#line 2909 "handle_options.m"
        {
#line 2909 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2909 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2909 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2909 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2909 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2909 "handle_options.m"
          {
#line 2909 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 2909 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 2909 "handle_options.m"
        }
#line 2909 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 51));
#line 2909 "handle_options.m"
    }
#line 2909 "handle_options.m"
  }
#line 2904 "handle_options.m"
}

#line 2902 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2902 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2902 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 2902 "handle_options.m"
{
#line 2909 "handle_options.m"
  {
#line 2909 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2909 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gc") == 0))
#line 3038 "handle_options.m"
      {
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]);
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3038 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3038 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3038 "handle_options.m"
      }
#line 2909 "handle_options.m"
    else
#line 2909 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl") == 0))
#line 2957 "handle_options.m"
        {
#line 2957 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2957 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2963 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2957 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2957 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2957 "handle_options.m"
        }
#line 2909 "handle_options.m"
      else
#line 2909 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "il") == 0))
#line 2989 "handle_options.m"
          {
#line 2989 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2989 "handle_options.m"
            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2995 "handle_options.m"
            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 2989 "handle_options.m"
            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2989 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2989 "handle_options.m"
          }
#line 2909 "handle_options.m"
        else
#line 2909 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3082 "handle_options.m"
            {
#line 3082 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3082 "handle_options.m"
              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3082 "handle_options.m"
              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3082 "handle_options.m"
              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3082 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3082 "handle_options.m"
            }
#line 2909 "handle_options.m"
          else
#line 2909 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tr") == 0))
#line 3073 "handle_options.m"
              {
#line 3073 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3073 "handle_options.m"
                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[186]);
#line 3073 "handle_options.m"
                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3073 "handle_options.m"
                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3073 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3073 "handle_options.m"
              }
#line 2909 "handle_options.m"
            else
#line 2909 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "agc") == 0))
#line 3042 "handle_options.m"
                {
#line 3042 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3042 "handle_options.m"
                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]);
#line 3042 "handle_options.m"
                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3042 "handle_options.m"
                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3042 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3042 "handle_options.m"
                }
#line 2909 "handle_options.m"
              else
#line 2909 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmm") == 0))
#line 3086 "handle_options.m"
                  {
#line 3086 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3086 "handle_options.m"
                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3086 "handle_options.m"
                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3086 "handle_options.m"
                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3086 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3086 "handle_options.m"
                  }
#line 2909 "handle_options.m"
                else
#line 2909 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gcd") == 0))
#line 3039 "handle_options.m"
                    {
#line 3039 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3039 "handle_options.m"
                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]);
#line 3039 "handle_options.m"
                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3039 "handle_options.m"
                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3039 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3039 "handle_options.m"
                    }
#line 2909 "handle_options.m"
                  else
#line 2909 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 3040 "handle_options.m"
                      {
#line 3040 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3040 "handle_options.m"
                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]);
#line 3040 "handle_options.m"
                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3040 "handle_options.m"
                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3040 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3040 "handle_options.m"
                      }
#line 2909 "handle_options.m"
                    else
#line 2909 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc") == 0))
#line 2965 "handle_options.m"
                        {
#line 2965 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2965 "handle_options.m"
                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 2971 "handle_options.m"
                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2965 "handle_options.m"
                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2965 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 2965 "handle_options.m"
                        }
#line 2909 "handle_options.m"
                      else
#line 2909 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ilc") == 0))
#line 2997 "handle_options.m"
                          {
#line 2997 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2997 "handle_options.m"
                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99]);
#line 3003 "handle_options.m"
                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 2997 "handle_options.m"
                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2997 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 2997 "handle_options.m"
                          }
#line 2909 "handle_options.m"
                        else
#line 2909 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mps") == 0))
#line 3041 "handle_options.m"
                            {
#line 3041 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3041 "handle_options.m"
                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[130]);
#line 3041 "handle_options.m"
                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3041 "handle_options.m"
                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3041 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3041 "handle_options.m"
                            }
#line 2909 "handle_options.m"
                          else
#line 2909 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "par") == 0))
#line 3031 "handle_options.m"
                              {
#line 3031 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 1;
#line 3031 "handle_options.m"
                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134]);
#line 3031 "handle_options.m"
                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3031 "handle_options.m"
                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3031 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 3031 "handle_options.m"
                              }
#line 2909 "handle_options.m"
                            else
#line 2909 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "reg") == 0))
#line 2917 "handle_options.m"
                                {
#line 2917 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2917 "handle_options.m"
                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[170]);
#line 2923 "handle_options.m"
                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2917 "handle_options.m"
                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2917 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 2917 "handle_options.m"
                                }
#line 2909 "handle_options.m"
                              else
#line 2909 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "spf") == 0))
#line 3111 "handle_options.m"
                                  {
#line 3111 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3111 "handle_options.m"
                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[174]);
#line 3111 "handle_options.m"
                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3111 "handle_options.m"
                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3111 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3111 "handle_options.m"
                                  }
#line 2909 "handle_options.m"
                                else
#line 2909 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsc") == 0))
#line 3068 "handle_options.m"
                                    {
#line 3068 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3068 "handle_options.m"
                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[193]);
#line 3068 "handle_options.m"
                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3068 "handle_options.m"
                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3068 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3068 "handle_options.m"
                                    }
#line 2909 "handle_options.m"
                                  else
#line 2909 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsw") == 0))
#line 3065 "handle_options.m"
                                      {
#line 3065 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3065 "handle_options.m"
                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[197]);
#line 3065 "handle_options.m"
                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3065 "handle_options.m"
                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3065 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3065 "handle_options.m"
                                      }
#line 2909 "handle_options.m"
                                    else
#line 2909 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "exts") == 0))
#line 3131 "handle_options.m"
                                        {
#line 3131 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3131 "handle_options.m"
                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[71]);
#line 3131 "handle_options.m"
                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3131 "handle_options.m"
                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3131 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 3131 "handle_options.m"
                                        }
#line 2909 "handle_options.m"
                                      else
#line 2909 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "fast") == 0))
#line 2941 "handle_options.m"
                                          {
#line 2941 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2941 "handle_options.m"
                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]);
#line 2947 "handle_options.m"
                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2941 "handle_options.m"
                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2941 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 2941 "handle_options.m"
                                          }
#line 2909 "handle_options.m"
                                        else
#line 2909 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "java") == 0))
#line 3005 "handle_options.m"
                                            {
#line 3005 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3005 "handle_options.m"
                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 3011 "handle_options.m"
                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[7]);
#line 3005 "handle_options.m"
                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3005 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 3005 "handle_options.m"
                                            }
#line 2909 "handle_options.m"
                                          else
#line 2909 "handle_options.m"
                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "jump") == 0))
#line 2925 "handle_options.m"
                                              {
#line 2925 "handle_options.m"
                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2925 "handle_options.m"
                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[109]);
#line 2931 "handle_options.m"
                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2925 "handle_options.m"
                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2925 "handle_options.m"
                                                libs__handle_options__succeeded = MR_TRUE;
#line 2925 "handle_options.m"
                                              }
#line 2909 "handle_options.m"
                                            else
#line 2909 "handle_options.m"
                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmos") == 0))
#line 3098 "handle_options.m"
                                                {
#line 3098 "handle_options.m"
                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3098 "handle_options.m"
                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[127]);
#line 3098 "handle_options.m"
                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3098 "handle_options.m"
                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3098 "handle_options.m"
                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3098 "handle_options.m"
                                                }
#line 2909 "handle_options.m"
                                              else
#line 2909 "handle_options.m"
                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmsc") == 0))
#line 3090 "handle_options.m"
                                                  {
#line 3090 "handle_options.m"
                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3090 "handle_options.m"
                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125]);
#line 3090 "handle_options.m"
                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3090 "handle_options.m"
                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3090 "handle_options.m"
                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3090 "handle_options.m"
                                                  }
#line 2909 "handle_options.m"
                                                else
#line 2909 "handle_options.m"
                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "none") == 0))
#line 2909 "handle_options.m"
                                                    {
#line 2909 "handle_options.m"
                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2909 "handle_options.m"
                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[132]);
#line 2915 "handle_options.m"
                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2909 "handle_options.m"
                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2909 "handle_options.m"
                                                      libs__handle_options__succeeded = MR_TRUE;
#line 2909 "handle_options.m"
                                                    }
#line 2909 "handle_options.m"
                                                  else
#line 2909 "handle_options.m"
                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "prof") == 0))
#line 3045 "handle_options.m"
                                                      {
#line 3045 "handle_options.m"
                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3045 "handle_options.m"
                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[143]);
#line 3045 "handle_options.m"
                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3045 "handle_options.m"
                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3045 "handle_options.m"
                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3045 "handle_options.m"
                                                      }
#line 2909 "handle_options.m"
                                                    else
#line 2909 "handle_options.m"
                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmm") == 0))
#line 3139 "handle_options.m"
                                                        {
#line 3139 "handle_options.m"
                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3139 "handle_options.m"
                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159]);
#line 3139 "handle_options.m"
                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3139 "handle_options.m"
                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3139 "handle_options.m"
                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3139 "handle_options.m"
                                                        }
#line 2909 "handle_options.m"
                                                      else
#line 2909 "handle_options.m"
                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "debug") == 0))
#line 3121 "handle_options.m"
                                                          {
#line 3121 "handle_options.m"
                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3121 "handle_options.m"
                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[47]);
#line 3121 "handle_options.m"
                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3121 "handle_options.m"
                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3121 "handle_options.m"
                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3121 "handle_options.m"
                                                          }
#line 2909 "handle_options.m"
                                                        else
#line 2909 "handle_options.m"
                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmos") == 0))
#line 3102 "handle_options.m"
                                                            {
#line 3102 "handle_options.m"
                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3102 "handle_options.m"
                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[60]);
#line 3102 "handle_options.m"
                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3102 "handle_options.m"
                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3102 "handle_options.m"
                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3102 "handle_options.m"
                                                            }
#line 2909 "handle_options.m"
                                                          else
#line 2909 "handle_options.m"
                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc") == 0))
#line 3094 "handle_options.m"
                                                              {
#line 3094 "handle_options.m"
                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3094 "handle_options.m"
                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3094 "handle_options.m"
                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3094 "handle_options.m"
                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3094 "handle_options.m"
                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3094 "handle_options.m"
                                                              }
#line 2909 "handle_options.m"
                                                            else
#line 2909 "handle_options.m"
                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmd") == 0))
#line 3143 "handle_options.m"
                                                                {
#line 3143 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3143 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162]);
#line 3143 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3143 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3143 "handle_options.m"
                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3143 "handle_options.m"
                                                                }
#line 2909 "handle_options.m"
                                                              else
#line 2909 "handle_options.m"
                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp") == 0))
#line 3147 "handle_options.m"
                                                                  {
#line 3147 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3147 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[168]);
#line 3147 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3147 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3147 "handle_options.m"
                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3147 "handle_options.m"
                                                                  }
#line 2909 "handle_options.m"
                                                                else
#line 2909 "handle_options.m"
                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "stseg") == 0))
#line 3134 "handle_options.m"
                                                                    {
#line 3134 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3134 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[180]);
#line 3134 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3134 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3134 "handle_options.m"
                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3134 "handle_options.m"
                                                                    }
#line 2909 "handle_options.m"
                                                                  else
#line 2909 "handle_options.m"
                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trseg") == 0))
#line 3075 "handle_options.m"
                                                                      {
#line 3075 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3075 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[189]);
#line 3075 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3075 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3075 "handle_options.m"
                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3075 "handle_options.m"
                                                                      }
#line 2909 "handle_options.m"
                                                                    else
#line 2909 "handle_options.m"
                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "csharp") == 0))
#line 3013 "handle_options.m"
                                                                        {
#line 3013 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3013 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 3019 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]);
#line 3013 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3013 "handle_options.m"
                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3013 "handle_options.m"
                                                                        }
#line 2909 "handle_options.m"
                                                                      else
#line 2909 "handle_options.m"
                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "erlang") == 0))
#line 3021 "handle_options.m"
                                                                          {
#line 3021 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3021 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65]);
#line 3027 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]);
#line 3021 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3021 "handle_options.m"
                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3021 "handle_options.m"
                                                                          }
#line 2909 "handle_options.m"
                                                                        else
#line 2909 "handle_options.m"
                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "picreg") == 0))
#line 3116 "handle_options.m"
                                                                            {
#line 3116 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 9;
#line 3116 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[136]);
#line 3116 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3116 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3116 "handle_options.m"
                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3116 "handle_options.m"
                                                                            }
#line 2909 "handle_options.m"
                                                                          else
#line 2909 "handle_options.m"
                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "pregen") == 0))
#line 3109 "handle_options.m"
                                                                              {
#line 3109 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3109 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]);
#line 3109 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3109 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3109 "handle_options.m"
                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3109 "handle_options.m"
                                                                              }
#line 2909 "handle_options.m"
                                                                            else
#line 2909 "handle_options.m"
                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp") == 0))
#line 3151 "handle_options.m"
                                                                                {
#line 3151 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3151 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[166]);
#line 3151 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3151 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3151 "handle_options.m"
                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3151 "handle_options.m"
                                                                                }
#line 2909 "handle_options.m"
                                                                              else
#line 2909 "handle_options.m"
                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest") == 0))
#line 2973 "handle_options.m"
                                                                                  {
#line 2973 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2973 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95]);
#line 2979 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2973 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2973 "handle_options.m"
                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 2973 "handle_options.m"
                                                                                  }
#line 2909 "handle_options.m"
                                                                                else
#line 2909 "handle_options.m"
                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "memprof") == 0))
#line 3054 "handle_options.m"
                                                                                    {
#line 3054 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3054 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121]);
#line 3054 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3054 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3054 "handle_options.m"
                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3054 "handle_options.m"
                                                                                    }
#line 2909 "handle_options.m"
                                                                                  else
#line 2909 "handle_options.m"
                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profall") == 0))
#line 3057 "handle_options.m"
                                                                                      {
#line 3057 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3057 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144]);
#line 3057 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3057 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3057 "handle_options.m"
                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3057 "handle_options.m"
                                                                                      }
#line 2909 "handle_options.m"
                                                                                    else
#line 2909 "handle_options.m"
                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug") == 0))
#line 3123 "handle_options.m"
                                                                                        {
#line 3123 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3123 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[176]);
#line 3123 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3123 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3123 "handle_options.m"
                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3123 "handle_options.m"
                                                                                        }
#line 2909 "handle_options.m"
                                                                                      else
#line 2909 "handle_options.m"
                                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast") == 0))
#line 2949 "handle_options.m"
                                                                                          {
#line 2949 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2949 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[25]);
#line 2955 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2949 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2949 "handle_options.m"
                                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 2949 "handle_options.m"
                                                                                          }
#line 2909 "handle_options.m"
                                                                                        else
#line 2909 "handle_options.m"
                                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump") == 0))
#line 2933 "handle_options.m"
                                                                                            {
#line 2933 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2933 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31]);
#line 2939 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2933 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2933 "handle_options.m"
                                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 2933 "handle_options.m"
                                                                                            }
#line 2909 "handle_options.m"
                                                                                          else
#line 2909 "handle_options.m"
                                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest") == 0))
#line 2981 "handle_options.m"
                                                                                              {
#line 2981 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2981 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[104]);
#line 2987 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2981 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2981 "handle_options.m"
                                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 2981 "handle_options.m"
                                                                                              }
#line 2909 "handle_options.m"
                                                                                            else
#line 2909 "handle_options.m"
                                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug") == 0))
#line 3127 "handle_options.m"
                                                                                                {
#line 3127 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 10;
#line 3127 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[113]);
#line 3127 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3127 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3127 "handle_options.m"
                                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3127 "handle_options.m"
                                                                                                }
#line 2909 "handle_options.m"
                                                                                              else
#line 2909 "handle_options.m"
                                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profdeep") == 0))
#line 3060 "handle_options.m"
                                                                                                  {
#line 3060 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3060 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[151]);
#line 3060 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3060 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3060 "handle_options.m"
                                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3060 "handle_options.m"
                                                                                                  }
#line 2909 "handle_options.m"
                                                                                                else
#line 2909 "handle_options.m"
                                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "proftime") == 0))
#line 3048 "handle_options.m"
                                                                                                    {
#line 3048 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3048 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[153]);
#line 3048 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3048 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3048 "handle_options.m"
                                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3048 "handle_options.m"
                                                                                                    }
#line 2909 "handle_options.m"
                                                                                                  else
#line 2909 "handle_options.m"
                                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "decldebug") == 0))
#line 3119 "handle_options.m"
                                                                                                      {
#line 3119 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3119 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]);
#line 3119 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3119 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3119 "handle_options.m"
                                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3119 "handle_options.m"
                                                                                                      }
#line 2909 "handle_options.m"
                                                                                                    else
#line 2909 "handle_options.m"
                                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profcalls") == 0))
#line 3051 "handle_options.m"
                                                                                                        {
#line 3051 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3051 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145]);
#line 3051 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3051 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3051 "handle_options.m"
                                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3051 "handle_options.m"
                                                                                                        }
#line 2909 "handle_options.m"
                                                                                                      else
#line 2909 "handle_options.m"
                                                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "threadscope") == 0))
#line 3034 "handle_options.m"
                                                                                                          {
#line 3034 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 2;
#line 3034 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182]);
#line 3034 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3034 "handle_options.m"
                                                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3034 "handle_options.m"
                                                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3034 "handle_options.m"
                                                                                                          }
#line 2909 "handle_options.m"
                                                                                                        else
#line 2909 "handle_options.m"
                                                                                                          libs__handle_options__succeeded = MR_FALSE;
#line 2909 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2909 "handle_options.m"
  }
#line 2902 "handle_options.m"
}

#line 2842 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2842 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2842 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2842 "handle_options.m"
{
#line 2845 "handle_options.m"
  {
#line 2845 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2845 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2845 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 2845 "handle_options.m"
    else
#line 2846 "handle_options.m"
      {
#line 2846 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 2846 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 2846 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 2846 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 2846 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 2851 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2853 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 2851 "handle_options.m"
        else
#line 2848 "handle_options.m"
          {
#line 2848 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 2848 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 2848 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 2848 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 2848 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 2848 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 2848 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 2846 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 2846 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 2851 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2853 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 2851 "handle_options.m"
            else
#line 2848 "handle_options.m"
              {
#line 2848 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 2848 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 2848 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 2848 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 2849 "handle_options.m"
                {
#line 2849 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 2850 "handle_options.m"
                {
#line 2850 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2850 "handle_options.m"
                }
#line 2850 "handle_options.m"
                {
#line 2850 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 2850 "handle_options.m"
                }
#line 2850 "handle_options.m"
                {
#line 2850 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 2850 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 2850 "handle_options.m"
                }
#line 2850 "handle_options.m"
                {
#line 2850 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 2848 "handle_options.m"
              }
#line 2850 "handle_options.m"
            {
#line 2850 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2850 "handle_options.m"
            }
#line 2850 "handle_options.m"
            {
#line 2850 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2850 "handle_options.m"
            }
#line 2850 "handle_options.m"
            {
#line 2850 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 2850 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2850 "handle_options.m"
            }
#line 2850 "handle_options.m"
            {
#line 2850 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 2850 "handle_options.m"
              return;
            }
#line 2848 "handle_options.m"
          }
#line 2846 "handle_options.m"
      }
#line 2845 "handle_options.m"
  }
#line 2842 "handle_options.m"
}

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2704 "handle_options.m"
{
#line 2704 "handle_options.m"
  {
#line 2704 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2704 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2704 "handle_options.m"
  }
#line 2704 "handle_options.m"
}

#line 2705 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2705 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2705 "handle_options.m"
{
#line 2705 "handle_options.m"
  {
#line 2705 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2705 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2705 "handle_options.m"
    {
#line 2705 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2705 "handle_options.m"
      return;
    }
#line 2705 "handle_options.m"
  }
#line 2705 "handle_options.m"
}

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2704 "handle_options.m"
{
#line 2704 "handle_options.m"
  {
#line 2704 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2706 "handle_options.m"
    {
#line 2706 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2706 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2706 "handle_options.m"
      {
#line 2706 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2706 "handle_options.m"
        return;
      }
#line 2704 "handle_options.m"
  }
#line 2704 "handle_options.m"
}

#line 2704 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2704 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2704 "handle_options.m"
{
#line 2704 "handle_options.m"
  {
#line 2704 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2704 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2704 "handle_options.m"
      {
#line 6973 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2705 "handle_options.m"
        {
#line 2705 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2704 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2704 "handle_options.m"
      }
#line 2704 "handle_options.m"
    else
#line 2704 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2704 "handle_options.m"
  }
#line 2704 "handle_options.m"
}

#line 2701 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2701 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2701 "handle_options.m"
{
#line 2701 "handle_options.m"
  {
#line 2701 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2701 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2701 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2704 "handle_options.m"
    {
#line 2704 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2704 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2704 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2701 "handle_options.m"
  }
#line 2701 "handle_options.m"
}

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2695 "handle_options.m"
{
#line 2695 "handle_options.m"
  {
#line 2695 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2695 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2695 "handle_options.m"
  }
#line 2695 "handle_options.m"
}

#line 2696 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2696 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2696 "handle_options.m"
{
#line 2696 "handle_options.m"
  {
#line 2696 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2696 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2696 "handle_options.m"
    {
#line 2696 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2696 "handle_options.m"
      return;
    }
#line 2696 "handle_options.m"
  }
#line 2696 "handle_options.m"
}

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2695 "handle_options.m"
{
#line 2695 "handle_options.m"
  {
#line 2695 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2698 "handle_options.m"
    {
#line 2698 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2697 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2697 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2697 "handle_options.m"
      {
#line 2697 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2697 "handle_options.m"
        return;
      }
#line 2695 "handle_options.m"
  }
#line 2695 "handle_options.m"
}

#line 2695 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2695 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2695 "handle_options.m"
{
#line 2695 "handle_options.m"
  {
#line 2695 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2695 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2695 "handle_options.m"
      {
#line 7119 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2696 "handle_options.m"
        {
#line 2696 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2695 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2695 "handle_options.m"
      }
#line 2695 "handle_options.m"
    else
#line 2695 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2695 "handle_options.m"
  }
#line 2695 "handle_options.m"
}

#line 2692 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2692 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2692 "handle_options.m"
{
#line 2692 "handle_options.m"
  {
#line 2692 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2692 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2692 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2695 "handle_options.m"
    {
#line 2695 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2695 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2695 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2692 "handle_options.m"
  }
#line 2692 "handle_options.m"
}

#line 2720 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2720 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2720 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2720 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2720 "handle_options.m"
{
#line 2720 "handle_options.m"
  {
#line 2720 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2720 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2720 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2720 "handle_options.m"
    {
#line 2720 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2720__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2720 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2720 "handle_options.m"
      {
#line 2720 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2720 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2720 "handle_options.m"
      }
#line 2720 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2720 "handle_options.m"
  }
#line 2720 "handle_options.m"
}

#line 2674 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2674 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2674 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2674 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2674 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2674 "handle_options.m"
{
#line 7232 "libs.handle_options.c"
  {
#line 7234 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7236 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2719 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2719 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2719 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2719 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3202 "handle_options.m"
    {
#line 3202 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2719 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2719 "handle_options.m"
      {
#line 2720 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 7263 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2723 "handle_options.m"
        {
#line 2723 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2719 "handle_options.m"
      }
#line 7272 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7274 "libs.handle_options.c"
      {
#line 7276 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7278 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2726 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2726 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2725 "handle_options.m"
        {
#line 2725 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2726 "handle_options.m"
        {
#line 2726 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2726 "handle_options.m"
        {
#line 2726 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2726 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7302 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7304 "libs.handle_options.c"
          {
#line 7306 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;
#line 7308 "libs.handle_options.c"
            MR_Word libs__handle_options__V_54_54;

#line 2727 "handle_options.m"
            {
#line 2727 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 625 "handle_options.m"
            {
#line 625 "handle_options.m"
              libs__handle_options__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 0) = ((MR_Box) (libs__handle_options__V_39_39));
#line 625 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "handle_options.m"
            }
#line 625 "handle_options.m"
            {
#line 625 "handle_options.m"
              mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_54_54, libs__handle_options__STATE_VARIABLE_Errors_18);
            }
#line 2689 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7333 "libs.handle_options.c"
          }
#line 7335 "libs.handle_options.c"
        else
#line 7337 "libs.handle_options.c"
          {
#line 2683 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2730 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2683 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2683 "handle_options.m"
            {
#line 2683 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2685 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2684 "handle_options.m"
              {
#line 2684 "handle_options.m"
                MR_Word base;
#line 2684 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2684 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2684 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2684 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2684 "handle_options.m"
              }
#line 2685 "handle_options.m"
            else
#line 2684 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7371 "libs.handle_options.c"
          }
#line 7373 "libs.handle_options.c"
      }
#line 7375 "libs.handle_options.c"
    else
#line 7377 "libs.handle_options.c"
      {
#line 7379 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;
#line 7381 "libs.handle_options.c"
        MR_Word libs__handle_options__V_60_60;

#line 2733 "handle_options.m"
        {
#line 2733 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__V_42_42));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "handle_options.m"
        }
#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_60_60, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2689 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7406 "libs.handle_options.c"
      }
#line 7408 "libs.handle_options.c"
  }
#line 2674 "handle_options.m"
}

#line 2651 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2651 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2651 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2651 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2651 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2651 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2651 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2651 "handle_options.m"
{
#line 2658 "handle_options.m"
  {
#line 2658 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2656 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2656 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2656 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2656 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2656 "handle_options.m"
    {
#line 2656 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2658 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2657 "handle_options.m"
      {
#line 2657 "handle_options.m"
        {
#line 2657 "handle_options.m"
          MR_Word base;
#line 2657 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2657 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2657 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2657 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2657 "handle_options.m"
        }
#line 2657 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2657 "handle_options.m"
      }
#line 2658 "handle_options.m"
    else
#line 2659 "handle_options.m"
      {
#line 2659 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2659 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2659 "handle_options.m"
        MR_String libs__handle_options__V_24_24;
#line 2659 "handle_options.m"
        MR_Word libs__handle_options__V_29_29;

#line 2659 "handle_options.m"
        {
#line 2659 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2659 "handle_options.m"
        {
#line 2659 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2659 "handle_options.m"
        {
#line 2659 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          libs__handle_options__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 0) = ((MR_Box) (libs__handle_options__V_20_20));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "handle_options.m"
        }
#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_29_29, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2659 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2659 "handle_options.m"
      }
#line 2658 "handle_options.m"
  }
#line 2651 "handle_options.m"
}

#line 2639 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2639 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2639 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2639 "handle_options.m"
{
#line 2639 "handle_options.m"
  {
#line 2639 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2639 "handle_options.m"
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2639 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2639 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2639 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2639 "handle_options.m"
  }
#line 2639 "handle_options.m"
}

#line 2639 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2639 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2639 "handle_options.m"
{
#line 2639 "handle_options.m"
  {
#line 2639 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2639 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2639 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2639 "handle_options.m"
  }
#line 2639 "handle_options.m"
}

#line 2637 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2637 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2637 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2637 "handle_options.m"
{
#line 2637 "handle_options.m"
  {
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2637 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2637 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2637 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2637 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2637 "handle_options.m"
  }
#line 2637 "handle_options.m"
}

#line 2637 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2637 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2637 "handle_options.m"
{
#line 2637 "handle_options.m"
  {
#line 2637 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2637 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2637 "handle_options.m"
  }
#line 2637 "handle_options.m"
}

#line 2629 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2629 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2629 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2629 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2629 "handle_options.m"
{
#line 2629 "handle_options.m"
  {
#line 2629 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2629 "handle_options.m"
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2629 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2629 "handle_options.m"
    {
#line 2629 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2629 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2629 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2629 "handle_options.m"
  }
#line 2629 "handle_options.m"
}

#line 2627 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2627 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2627 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2627 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2627 "handle_options.m"
{
#line 2627 "handle_options.m"
  {
#line 2627 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2627 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2627 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2627 "handle_options.m"
    {
#line 2627 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2627 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2627 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2627 "handle_options.m"
  }
#line 2627 "handle_options.m"
}

#line 2619 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2619 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2619 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2619 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2619 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2619 "handle_options.m"
{
#line 2622 "handle_options.m"
  {
#line 2622 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2622 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2627 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2627 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2629 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2629 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2637 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2639 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2639 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2623 "handle_options.m"
    {
#line 2623 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 633, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2625 "handle_options.m"
    {
#line 2625 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 634, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7816 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7818 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[1];
#line 2627 "handle_options.m"
    {
#line 2627 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2627 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2627 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2629 "handle_options.m"
    {
#line 2629 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2629 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2629 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2632 "handle_options.m"
    {
#line 2632 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 632, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2637 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2637 "handle_options.m"
    }
#line 2637 "handle_options.m"
    {
#line 2637 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2637 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2637 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[18]));
#line 2639 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2639 "handle_options.m"
    }
#line 2639 "handle_options.m"
    {
#line 2639 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2639 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2639 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2641 "handle_options.m"
    {
#line 2641 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2641 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2641 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2641 "handle_options.m"
    }
#line 2641 "handle_options.m"
    {
#line 2641 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 632, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2641 "handle_options.m"
      return;
    }
#line 2622 "handle_options.m"
  }
#line 2619 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2568 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2568 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7938 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2568 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2568 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7971 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8005 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8038 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8070 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2568 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2568 "handle_options.m"
{
#line 2568 "handle_options.m"
  {
#line 2568 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8102 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8120 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2568 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 8137 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8155 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
  }
#line 2568 "handle_options.m"
}

#line 2531 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2531 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2531 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2531 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2531 "handle_options.m"
{
#line 2534 "handle_options.m"
  {
#line 2534 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2534 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2535 "handle_options.m"
    {
#line 2535 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2536 "handle_options.m"
    {
#line 2536 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2537 "handle_options.m"
    {
#line 2537 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2551 "handle_options.m"
    if ((libs__handle_options__WarnSmart_9 == (MR_Integer) 0))
#line 2552 "handle_options.m"
      {
#line 2552 "handle_options.m"
      }
#line 2551 "handle_options.m"
    else
#line 2539 "handle_options.m"
      {
#line 2539 "handle_options.m"
        MR_Word libs__handle_options__Halt_10;

#line 2540 "handle_options.m"
        {
#line 2540 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
        }
#line 2542 "handle_options.m"
        {
#line 2542 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
        }
#line 2543 "handle_options.m"
        {
#line 2543 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 2544 "handle_options.m"
        {
#line 2544 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
        }
#line 2548 "handle_options.m"
        if ((libs__handle_options__Halt_10 == (MR_Integer) 0))
#line 2549 "handle_options.m"
          {
#line 2549 "handle_options.m"
          }
#line 2548 "handle_options.m"
        else
#line 2546 "handle_options.m"
          {
#line 2547 "handle_options.m"
            {
#line 2547 "handle_options.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2547 "handle_options.m"
              return;
            }
#line 2546 "handle_options.m"
          }
#line 2539 "handle_options.m"
      }
#line 2534 "handle_options.m"
  }
#line 2531 "handle_options.m"
}

#line 2516 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2516 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2516 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2516 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2516 "handle_options.m"
{
#line 2520 "handle_options.m"
  {
#line 2520 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2520 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2521 "handle_options.m"
    {
#line 2521 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2523 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2523 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2524 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2527 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2534 "handle_options.m"
      {
#line 2534 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2535 "handle_options.m"
        {
#line 2535 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2536 "handle_options.m"
        {
#line 2536 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2537 "handle_options.m"
        {
#line 2537 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2551 "handle_options.m"
        if ((libs__handle_options__WarnSmart_29 == (MR_Integer) 0))
#line 2552 "handle_options.m"
          {
#line 2552 "handle_options.m"
          }
#line 2551 "handle_options.m"
        else
#line 2539 "handle_options.m"
          {
#line 2539 "handle_options.m"
            MR_Word libs__handle_options__Halt_30;

#line 2540 "handle_options.m"
            {
#line 2540 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
            }
#line 2542 "handle_options.m"
            {
#line 2542 "handle_options.m"
              mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
            }
#line 2543 "handle_options.m"
            {
#line 2543 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 2544 "handle_options.m"
            {
#line 2544 "handle_options.m"
              libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
            }
#line 2548 "handle_options.m"
            if ((libs__handle_options__Halt_30 == (MR_Integer) 0))
#line 2549 "handle_options.m"
              {
#line 2549 "handle_options.m"
              }
#line 2548 "handle_options.m"
            else
#line 2546 "handle_options.m"
              {
#line 2547 "handle_options.m"
                {
#line 2547 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2547 "handle_options.m"
                  return;
                }
#line 2546 "handle_options.m"
              }
#line 2539 "handle_options.m"
          }
#line 2534 "handle_options.m"
      }
#line 2527 "handle_options.m"
    else
#line 2528 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2520 "handle_options.m"
  }
#line 2516 "handle_options.m"
}

#line 2496 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2496 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2496 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2496 "handle_options.m"
{
#line 2500 "handle_options.m"
  {
#line 2500 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2500 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2500 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2501 "handle_options.m"
    {
#line 2501 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2502 "handle_options.m"
    {
#line 2502 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2504 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2504 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2504 "handle_options.m"
      {
#line 2505 "handle_options.m"
        {
#line 2505 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2505 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2504 "handle_options.m"
      }
#line 2508 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 622 "handle_options.m"
      {
#line 622 "handle_options.m"
        MR_Word libs__handle_options__V_23_23;

#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          libs__handle_options__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
#line 625 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "handle_options.m"
        }
#line 625 "handle_options.m"
        {
#line 625 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_16, libs__handle_options__V_23_23, libs__handle_options__STATE_VARIABLE_Errors_17);
#line 625 "handle_options.m"
          return;
        }
#line 622 "handle_options.m"
      }
#line 2508 "handle_options.m"
    else
#line 2507 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2500 "handle_options.m"
  }
#line 2496 "handle_options.m"
}

#line 2478 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2478 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2478 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2478 "handle_options.m"
{
#line 2482 "handle_options.m"
  {
#line 2482 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2482 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2483 "handle_options.m"
    {
#line 2483 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2486 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2488 "handle_options.m"
      {
#line 2488 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2488 "handle_options.m"
        return;
      }
#line 2486 "handle_options.m"
    else
#line 2485 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2482 "handle_options.m"
  }
#line 2478 "handle_options.m"
}

#line 2462 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2462 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2462 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2462 "handle_options.m"
{
#line 2465 "handle_options.m"
  {
#line 2465 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2465 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2466 "handle_options.m"
    {
#line 2466 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2470 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2471 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2470 "handle_options.m"
    else
#line 2469 "handle_options.m"
      {
#line 2469 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2469 "handle_options.m"
        return;
      }
#line 2465 "handle_options.m"
  }
#line 2462 "handle_options.m"
}

#line 2382 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2382 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2382 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2382 "handle_options.m"
{
#line 2384 "handle_options.m"
  {
#line 2384 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2384 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2384 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2404 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2466 "handle_options.m"
    {
#line 2466 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 370, &libs__handle_options__SourceOptionValue_57);
    }
#line 2470 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_57 == (MR_Integer) 0))
#line 2471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2470 "handle_options.m"
    else
#line 2469 "handle_options.m"
      {
#line 2469 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 467, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
      }
#line 2466 "handle_options.m"
    {
#line 2466 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 473, &libs__handle_options__SourceOptionValue_65);
    }
#line 2470 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_65 == (MR_Integer) 0))
#line 2471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2470 "handle_options.m"
    else
#line 2469 "handle_options.m"
      {
#line 2469 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 470, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
      }
#line 2466 "handle_options.m"
    {
#line 2466 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 473, &libs__handle_options__SourceOptionValue_73);
    }
#line 2470 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_73 == (MR_Integer) 0))
#line 2471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2470 "handle_options.m"
    else
#line 2469 "handle_options.m"
      {
#line 2469 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 463, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
      }
#line 2466 "handle_options.m"
    {
#line 2466 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 472, &libs__handle_options__SourceOptionValue_81);
    }
#line 2470 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_81 == (MR_Integer) 0))
#line 2471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2470 "handle_options.m"
    else
#line 2469 "handle_options.m"
      {
#line 2469 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
      }
#line 2398 "handle_options.m"
    {
#line 2398 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 473, &libs__handle_options__OptFrames_4);
    }
#line 2399 "handle_options.m"
    {
#line 2399 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 467, &libs__handle_options__OptLocalVars_5);
    }
#line 2400 "handle_options.m"
    {
#line 2400 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 476, &libs__handle_options__OptRepeat_6);
    }
#line 2402 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2403 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2403 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2404 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2404 "handle_options.m"
      {
#line 2405 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2405 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2404 "handle_options.m"
      }
#line 2412 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2411 "handle_options.m"
      {
#line 2411 "handle_options.m"
        {
#line 2411 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 476, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[14]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2411 "handle_options.m"
      }
#line 2412 "handle_options.m"
    else
#line 2411 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2418 "handle_options.m"
    {
#line 2418 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 239, &libs__handle_options__UnboxedFloat_7);
    }
#line 2424 "handle_options.m"
    if ((libs__handle_options__UnboxedFloat_7 == (MR_Integer) 0))
#line 2433 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2424 "handle_options.m"
    else
#line 2423 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2435 "handle_options.m"
    {
#line 2435 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2435 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2435 "handle_options.m"
    }
#line 2435 "handle_options.m"
    {
#line 2435 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2440 "handle_options.m"
    {
#line 2440 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 245, &libs__handle_options__NonLocalGotos_9);
    }
#line 2441 "handle_options.m"
    {
#line 2441 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 247, &libs__handle_options__AsmLabels_10);
    }
#line 2443 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2443 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2444 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2452 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2451 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2452 "handle_options.m"
    else
#line 2453 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2455 "handle_options.m"
    {
#line 2455 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2455 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2455 "handle_options.m"
    }
#line 2455 "handle_options.m"
    {
#line 2455 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 449, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2455 "handle_options.m"
      return;
    }
#line 2384 "handle_options.m"
  }
#line 2382 "handle_options.m"
}

#line 2238 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2238 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2238 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2238 "handle_options.m"
{
#line 2238 "handle_options.m"
  {
#line 2238 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2238 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2238 "handle_options.m"
    MR_String libs__handle_options__conv10_HeadVar__3_1550;

#line 2238 "handle_options.m"
    {
#line 2238 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1550 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2238__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2238 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1550));
#line 2238 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2238 "handle_options.m"
  }
#line 2238 "handle_options.m"
}

#line 2236 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2236 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2236 "handle_options.m"
{
#line 2236 "handle_options.m"
  {
#line 2236 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2236 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2236 "handle_options.m"
    MR_String libs__handle_options__conv9_HeadVar__3_1544;

#line 2236 "handle_options.m"
    {
#line 2236 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1544 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2236__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2236 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1544));
#line 2236 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2236 "handle_options.m"
  }
#line 2236 "handle_options.m"
}

#line 2245 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2245 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2245 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2245 "handle_options.m"
{
#line 2245 "handle_options.m"
  {
#line 2245 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2245 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2245 "handle_options.m"
    MR_String libs__handle_options__conv8_HeadVar__2_1539;

#line 2245 "handle_options.m"
    {
#line 2245 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1539 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2245__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2245 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1539));
#line 2245 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2245 "handle_options.m"
  }
#line 2245 "handle_options.m"
}

#line 2244 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2244 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2244 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2244 "handle_options.m"
{
#line 2244 "handle_options.m"
  {
#line 2244 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2244 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2244 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1534;

#line 2244 "handle_options.m"
    {
#line 2244 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1534 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2244__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2244 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1534));
#line 2244 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2244 "handle_options.m"
  }
#line 2244 "handle_options.m"
}

#line 2214 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2214 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2214 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2214 "handle_options.m"
{
#line 2214 "handle_options.m"
  {
#line 2214 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2214 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2214 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1521;

#line 2214 "handle_options.m"
    {
#line 2214 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1521 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2214__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2214 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1521));
#line 2214 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2214 "handle_options.m"
  }
#line 2214 "handle_options.m"
}

#line 2210 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2210 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2210 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2210 "handle_options.m"
{
#line 2210 "handle_options.m"
  {
#line 2210 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2210 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2210 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1515;

#line 2210 "handle_options.m"
    {
#line 2210 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1515 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2210__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2210 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1515));
#line 2210 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2210 "handle_options.m"
  }
#line 2210 "handle_options.m"
}

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2192 "handle_options.m"
{
#line 2192 "handle_options.m"
  {
#line 2192 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2192 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2192 "handle_options.m"
    {
#line 2192 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2192 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2192 "handle_options.m"
  }
#line 2192 "handle_options.m"
}

#line 2192 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2192 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2192 "handle_options.m"
{
#line 2192 "handle_options.m"
  {
#line 2192 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2192 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2192 "handle_options.m"
    {
#line 2192 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2192__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2192 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2192 "handle_options.m"
  }
#line 2192 "handle_options.m"
}

#line 2174 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2174 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2174 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2174 "handle_options.m"
{
#line 2174 "handle_options.m"
  {
#line 2174 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2174 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2174 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1496;

#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1496 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2174__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2174 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1496));
#line 2174 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2174 "handle_options.m"
  }
#line 2174 "handle_options.m"
}

#line 2138 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
#line 2138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2138 "handle_options.m"
{
#line 2138 "handle_options.m"
  {
#line 2138 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2138 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2138 "handle_options.m"
    MR_String libs__handle_options__conv3_HeadVar__3_1477;

#line 2138 "handle_options.m"
    {
#line 2138 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1477 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2138 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1477));
#line 2138 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2138 "handle_options.m"
  }
#line 2138 "handle_options.m"
}

#line 2128 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
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
    MR_String libs__handle_options__conv2_HeadVar__3_1467;

#line 2128 "handle_options.m"
    {
#line 2128 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1467 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2128__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2128 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1467));
#line 2128 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2128 "handle_options.m"
  }
#line 2128 "handle_options.m"
}

#line 2115 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 2115 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2115 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2115 "handle_options.m"
{
#line 2115 "handle_options.m"
  {
#line 2115 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2115 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2115 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1450;

#line 2115 "handle_options.m"
    {
#line 2115 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1450 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2115__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2115 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1450));
#line 2115 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2115 "handle_options.m"
  }
#line 2115 "handle_options.m"
}

#line 2100 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 2100 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2100 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2100 "handle_options.m"
{
#line 2100 "handle_options.m"
  {
#line 2100 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2100 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2100 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__3_1435;

#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1435 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2100__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2100 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1435));
#line 2100 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2100 "handle_options.m"
  }
#line 2100 "handle_options.m"
}

#line 629 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 629 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_37,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_38,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_39,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_40,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_41,
#line 629 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_187,
#line 629 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_188,
#line 629 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_189)
#line 629 "handle_options.m"
{
#line 644 "handle_options.m"
  {
#line 644 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1659_1659 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 644 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_45;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_46;
#line 644 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_48;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_51;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_52;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_53;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_55;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_56;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_57;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__Parallel_58;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_59;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_60;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ILFuncPtrTypes_62;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ILRefAnyFields_63;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_64;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_67;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_70;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_71;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_72;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_73;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__Smart_75;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_76;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__Statistics_77;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_78;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_82;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_83;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_86;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_87;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_92;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_93;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_99;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_100;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_101;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_102;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_103;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_108;
#line 644 "handle_options.m"
    MR_String libs__handle_options__ExpComp_109;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_110;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_111;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_114;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_115;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_116;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_117;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_118;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_119;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_120;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_121;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_122;
#line 644 "handle_options.m"
    MR_String libs__handle_options__FullArch_127;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_128;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_133;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_136;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_138;
#line 644 "handle_options.m"
    MR_String libs__handle_options__GradeString_139;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_153;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_156;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_157;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_158;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_159;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_168;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_171;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_172;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_182;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_183;
#line 644 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_186;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_200_200;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_208_208;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_229_229;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_248_248;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_249_249;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_264_264;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_271_271;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_272_272;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_479_479;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_484_484;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_488_488;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_489_489;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_494_494;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_498_498;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_499_499;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_504_504;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_509_509;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_514_514;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_519_519;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_524_524;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_529_529;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_538_538;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_543_543;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_548_548;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_553_553;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_558_558;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_563_563;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_568_568;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_575_575;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_581_581;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_586_586;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_591_591;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_597_597;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_602_602;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_607_607;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_612_612;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_617_617;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_622_622;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_627_627;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_632_632;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_637_637;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_642_642;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_647_647;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_652_652;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_656_656;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_661_661;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_666_666;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_671_671;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_676_676;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_681_681;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_686_686;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_691_691;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_696_696;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_701_701;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_706_706;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_711_711;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_716_716;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_721_721;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_726_726;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_731_731;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_736_736;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_741_741;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_746_746;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_751_751;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_756_756;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_761_761;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_766_766;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_771_771;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_777_777;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_782_782;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_787_787;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_792_792;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_797_797;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_802_802;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_808_808;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_813_813;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_818_818;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_823_823;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_831_831;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_835_835;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_841_841;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_846_846;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_852_852;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_868_868;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_873_873;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_878_878;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_883_883;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_890_890;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_903_903;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_904_904;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_931_931;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_936_936;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_941_941;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_950_950;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_954_954;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_959_959;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_964_964;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_969_969;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_974_974;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_980_980;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_985_985;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_990_990;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_995_995;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1000_1000;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1005_1005;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1010_1010;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1015_1015;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1020_1020;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1030_1030;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1035_1035;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1040_1040;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1135_1135;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1144_1144;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1148_1148;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1161_1161;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1166_1166;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1171_1171;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1179_1179;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1183_1183;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1193_1193;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1198_1198;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1262_1262;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1272_1272;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1277_1277;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1282_1282;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1287_1287;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1292_1292;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1297_1297;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1302_1302;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1307_1307;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1312_1312;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1317_1317;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1335_1335;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1340_1340;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1345_1345;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1350_1350;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1360_1360;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1365_1365;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1370_1370;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1375_1375;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1380_1380;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1385_1385;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1390_1390;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1406_1406;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1414_1414;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1490_1490;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1511_1511;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_1527_1527;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1528_1528;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__V_1530_1530;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1531_1531;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1567_1567;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1583_1583;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1591_1591;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1617_1617;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1624_1624;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1633_1633;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1638_1638;
#line 644 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1644_1644;
#line 680 "handle_options.m"
    MR_Word libs__handle_options__V_201_201;
#line 1173 "handle_options.m"
    MR_String libs__handle_options__V_74_74;
#line 1334 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_79;
#line 1322 "handle_options.m"
    MR_String libs__handle_options__V_827_827;
#line 1593 "handle_options.m"
    MR_Word libs__handle_options__V_1043_1043;
#line 2079 "handle_options.m"
    MR_String libs__handle_options__V_1419_1419;
#line 2267 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_173;
#line 2267 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_174;
#line 2351 "handle_options.m"
    MR_Integer libs__handle_options__V_1635_1635;

#line 646 "handle_options.m"
    {
#line 646 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1659_1659, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 629)), &libs__handle_options__InstallCmd_45);
    }
#line 647 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_45, (MR_String) "") == 0);
#line 649 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 648 "handle_options.m"
      libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 649 "handle_options.m"
    else
#line 651 "handle_options.m"
      {
#line 651 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_47;

#line 650 "handle_options.m"
        {
#line 650 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1659_1659, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 630)), &libs__handle_options__InstallCmdDirOption_47);
        }
#line 652 "handle_options.m"
        {
#line 652 "handle_options.m"
          libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 0) = ((MR_Box) (libs__handle_options__InstallCmd_45));
#line 652 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_47));
#line 652 "handle_options.m"
        }
#line 651 "handle_options.m"
      }
#line 656 "handle_options.m"
    {
#line 656 "handle_options.m"
      libs__globals__globals_init_20_p_0(libs__handle_options__OptionTable0_24, libs__handle_options__Target_25, libs__handle_options__GC_Method_26, libs__handle_options__TagsMethod0_27, libs__handle_options__TermNorm_28, libs__handle_options__Term2Norm_29, libs__handle_options__TraceLevel_30, libs__handle_options__TraceSuppress_31, libs__handle_options__SSTraceLevel_32, libs__handle_options__MaybeThreadSafe_33, libs__handle_options__C_CompilerType_34, libs__handle_options__CSharp_CompilerType_35, libs__handle_options__ReuseStrategy_36, libs__handle_options__MaybeILVersion_37, libs__handle_options__MaybeFeedbackInfo_38, libs__handle_options__HostEnvType_39, libs__handle_options__SystemEnvType_40, libs__handle_options__TargetEnvType_41, libs__handle_options__FileInstallCmd_46, &libs__handle_options__STATE_VARIABLE_Globals_194_194);
    }
#line 663 "handle_options.m"
    {
#line 663 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_194_194, (MR_Integer) 168, &libs__handle_options__EventSetFileName0_48);
    }
#line 665 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_48, (MR_String) "") == 0);
#line 675 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 667 "handle_options.m"
      {
#line 667 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_49;

#line 666 "handle_options.m"
        {
#line 666 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_49);
        }
#line 672 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_200_200 = libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 672 "handle_options.m"
        else
#line 669 "handle_options.m"
          {
#line 669 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_50 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_49, (MR_Integer) 0)));
#line 669 "handle_options.m"
            MR_Word libs__handle_options__V_199_199;

#line 670 "handle_options.m"
            {
#line 670 "handle_options.m"
              libs__handle_options__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 670 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_199_199, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_50));
#line 670 "handle_options.m"
            }
#line 670 "handle_options.m"
            {
#line 670 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 168, libs__handle_options__V_199_199, libs__handle_options__STATE_VARIABLE_Globals_194_194, &libs__handle_options__STATE_VARIABLE_Globals_200_200);
            }
#line 669 "handle_options.m"
          }
#line 667 "handle_options.m"
      }
#line 675 "handle_options.m"
    else
#line 676 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_200_200 = libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 680 "handle_options.m"
    {
#line 680 "handle_options.m"
      libs__handle_options__V_201_201 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_26);
    }
#line 680 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_201_201 == (MR_Integer) 1);
#line 685 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 682 "handle_options.m"
      {
#line 682 "handle_options.m"
        MR_Word libs__handle_options__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 682 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_204_204;

#line 681 "handle_options.m"
        {
#line 681 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_203_203, libs__handle_options__STATE_VARIABLE_Globals_200_200, &libs__handle_options__STATE_VARIABLE_Globals_204_204);
        }
#line 683 "handle_options.m"
        {
#line 683 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_203_203, libs__handle_options__STATE_VARIABLE_Globals_204_204, &libs__handle_options__STATE_VARIABLE_Globals_208_208);
        }
#line 682 "handle_options.m"
      }
#line 685 "handle_options.m"
    else
#line 683 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_208_208 = libs__handle_options__STATE_VARIABLE_Globals_200_200;
#line 691 "handle_options.m"
    {
#line 691 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_208_208, (MR_Integer) 219, &libs__handle_options__PregeneratedDist_51);
    }
#line 699 "handle_options.m"
    if ((libs__handle_options__PregeneratedDist_51 == (MR_Integer) 0))
#line 700 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_229_229 = libs__handle_options__STATE_VARIABLE_Globals_208_208;
#line 699 "handle_options.m"
    else
#line 693 "handle_options.m"
      {
#line 693 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 693 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_217_217;
#line 693 "handle_options.m"
        MR_Word libs__handle_options__V_220_220;
#line 693 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_221_221;
#line 693 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_225_225;

#line 694 "handle_options.m"
        {
#line 694 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), libs__handle_options__STATE_VARIABLE_Globals_208_208, &libs__handle_options__STATE_VARIABLE_Globals_213_213);
        }
#line 695 "handle_options.m"
        {
#line 695 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]), libs__handle_options__STATE_VARIABLE_Globals_213_213, &libs__handle_options__STATE_VARIABLE_Globals_217_217);
        }
#line 696 "handle_options.m"
        libs__handle_options__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 696 "handle_options.m"
        {
#line 696 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_217_217, &libs__handle_options__STATE_VARIABLE_Globals_221_221);
        }
#line 697 "handle_options.m"
        {
#line 697 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 220, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_221_221, &libs__handle_options__STATE_VARIABLE_Globals_225_225);
        }
#line 698 "handle_options.m"
        {
#line 698 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_225_225, &libs__handle_options__STATE_VARIABLE_Globals_229_229);
        }
#line 693 "handle_options.m"
      }
#line 707 "handle_options.m"
    if ((libs__handle_options__TagsMethod0_27 == (MR_Integer) 0))
#line 706 "handle_options.m"
      libs__handle_options__NumTagBits0_52 = (MR_Integer) 0;
#line 707 "handle_options.m"
    else
#line 710 "handle_options.m"
      {
#line 711 "handle_options.m"
        {
#line 711 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229, (MR_Integer) 233, &libs__handle_options__NumTagBits0_52);
        }
#line 710 "handle_options.m"
      }
#line 719 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_27 == (MR_Integer) 1);
#line 719 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 720 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_52 == (MR_Integer) -1);
#line 724 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 722 "handle_options.m"
      {
#line 722 "handle_options.m"
        {
#line 722 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229, (MR_Integer) 238, &libs__handle_options__NumTagBits1_53);
        }
#line 722 "handle_options.m"
      }
#line 724 "handle_options.m"
    else
#line 725 "handle_options.m"
      libs__handle_options__NumTagBits1_53 = libs__handle_options__NumTagBits0_52;
#line 730 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_53 < (MR_Integer) 0);
#line 738 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 731 "handle_options.m"
      {
#line 731 "handle_options.m"
        MR_String libs__handle_options__ProgName_54;
#line 731 "handle_options.m"
        MR_String libs__handle_options__V_1672_1672;
#line 731 "handle_options.m"
        MR_String libs__handle_options__V_1674_1674;

#line 731 "handle_options.m"
        {
#line 731 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_54);
        }
#line 10002 "libs.handle_options.c"
        {
#line 10004 "libs.handle_options.c"
          libs__handle_options__V_1672_1672 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_54, (MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 10007 "libs.handle_options.c"
        {
#line 10009 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1672_1672);
        }
#line 10012 "libs.handle_options.c"
        {
#line 10014 "libs.handle_options.c"
          libs__handle_options__V_1674_1674 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_54, (MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 10017 "libs.handle_options.c"
        {
#line 10019 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1674_1674);
        }
#line 736 "handle_options.m"
        {
#line 736 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229);
        }
#line 737 "handle_options.m"
        libs__handle_options__NumTagBits_55 = (MR_Integer) 0;
#line 731 "handle_options.m"
      }
#line 738 "handle_options.m"
    else
#line 739 "handle_options.m"
      libs__handle_options__NumTagBits_55 = libs__handle_options__NumTagBits1_53;
#line 742 "handle_options.m"
    {
#line 742 "handle_options.m"
      libs__handle_options__V_248_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_248_248, 0) = ((MR_Box) (libs__handle_options__NumTagBits_55));
#line 742 "handle_options.m"
    }
#line 742 "handle_options.m"
    {
#line 742 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 233, libs__handle_options__V_248_248, libs__handle_options__STATE_VARIABLE_Globals_229_229, &libs__handle_options__STATE_VARIABLE_Globals_249_249);
    }
#line 743 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_55 == (MR_Integer) 0);
#line 746 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 744 "handle_options.m"
      {
#line 744 "handle_options.m"
        libs__handle_options__TagsMethod_56 = (MR_Integer) 0;
#line 745 "handle_options.m"
        {
#line 745 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_56, libs__handle_options__STATE_VARIABLE_Globals_249_249, &libs__handle_options__STATE_VARIABLE_Globals_250_250);
        }
#line 744 "handle_options.m"
      }
#line 746 "handle_options.m"
    else
#line 747 "handle_options.m"
      {
#line 747 "handle_options.m"
        libs__handle_options__TagsMethod_56 = libs__handle_options__TagsMethod0_27;
#line 747 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_250_250 = libs__handle_options__STATE_VARIABLE_Globals_249_249;
#line 747 "handle_options.m"
      }
#line 750 "handle_options.m"
    {
#line 750 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, &libs__handle_options__GradeSupportsParConj_57);
    }
#line 751 "handle_options.m"
    {
#line 751 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 212, &libs__handle_options__Parallel_58);
    }
#line 752 "handle_options.m"
    {
#line 752 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 213, &libs__handle_options__Threadscope_59);
    }
#line 754 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0);
#line 754 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 755 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_59 == (MR_Integer) 1);
#line 759 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 757 "handle_options.m"
      {
#line 757 "handle_options.m"
        {
#line 757 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_0_187, &libs__handle_options__STATE_VARIABLE_Errors_254_254);
        }
#line 757 "handle_options.m"
      }
#line 759 "handle_options.m"
    else
#line 757 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_254_254 = libs__handle_options__STATE_VARIABLE_Errors_0_187;
#line 766 "handle_options.m"
    {
#line 766 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 668, &libs__handle_options__ImplicitParallelism_60);
    }
#line 800 "handle_options.m"
    if ((libs__handle_options__ImplicitParallelism_60 == (MR_Integer) 0))
#line 801 "handle_options.m"
      {
#line 801 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 801 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_264_264 = libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 801 "handle_options.m"
      }
#line 800 "handle_options.m"
    else
#line 783 "handle_options.m"
      if ((libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0))
#line 787 "handle_options.m"
        {
#line 795 "handle_options.m"
          if ((libs__handle_options__Parallel_58 == (MR_Integer) 0))
#line 796 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 795 "handle_options.m"
          else
#line 789 "handle_options.m"
            {
#line 790 "handle_options.m"
              {
#line 790 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_254_254, &libs__handle_options__STATE_VARIABLE_Errors_268_268);
              }
#line 789 "handle_options.m"
            }
#line 798 "handle_options.m"
          {
#line 798 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 668, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_250_250, &libs__handle_options__STATE_VARIABLE_Globals_264_264);
          }
#line 787 "handle_options.m"
        }
#line 783 "handle_options.m"
      else
#line 771 "handle_options.m"
        {
#line 771 "handle_options.m"
          MR_String libs__handle_options__FeedbackFile_61;

#line 772 "handle_options.m"
          {
#line 772 "handle_options.m"
            libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 669, &libs__handle_options__FeedbackFile_61);
          }
#line 775 "handle_options.m"
          libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_61, (MR_String) "") == 0);
#line 780 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 777 "handle_options.m"
            {
#line 777 "handle_options.m"
              {
#line 777 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_254_254, &libs__handle_options__STATE_VARIABLE_Errors_268_268);
              }
#line 777 "handle_options.m"
            }
#line 780 "handle_options.m"
          else
#line 777 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 777 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_264_264 = libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 771 "handle_options.m"
        }
#line 805 "handle_options.m"
    libs__handle_options__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 805 "handle_options.m"
    {
#line 805 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 668, (MR_Integer) 194, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_264_264, &libs__handle_options__STATE_VARIABLE_Globals_272_272);
    }
#line 811 "handle_options.m"
    if ((libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0))
#line 812 "handle_options.m"
      {
#line 813 "handle_options.m"
        {
#line 813 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 670, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_272_272, &libs__handle_options__STATE_VARIABLE_Globals_276_276);
        }
#line 812 "handle_options.m"
      }
#line 811 "handle_options.m"
    else
#line 810 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_276_276 = libs__handle_options__STATE_VARIABLE_Globals_272_272;
#line 887 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 888 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 887 "handle_options.m"
    else
#line 887 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 889 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 887 "handle_options.m"
      else
#line 887 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 5))
#line 892 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 887 "handle_options.m"
        else
#line 887 "handle_options.m"
          if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 861 "handle_options.m"
            {
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_282_282;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__V_285_285;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_286_286;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_290_290;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_294_294;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_298_298;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_302_302;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_306_306;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_310_310;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_314_314;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_318_318;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_322_322;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_326_326;
#line 861 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_330_330;
#line 882 "handle_options.m"
              MR_Word libs__handle_options__V_332_332;

#line 862 "handle_options.m"
              {
#line 862 "handle_options.m"
                libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_276_276, &libs__handle_options__STATE_VARIABLE_Globals_279_279);
              }
#line 863 "handle_options.m"
              {
#line 863 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_279_279, &libs__handle_options__STATE_VARIABLE_Globals_282_282);
              }
#line 864 "handle_options.m"
              libs__handle_options__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 864 "handle_options.m"
              {
#line 864 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_282_282, &libs__handle_options__STATE_VARIABLE_Globals_286_286);
              }
#line 866 "handle_options.m"
              {
#line 866 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_286_286, &libs__handle_options__STATE_VARIABLE_Globals_290_290);
              }
#line 868 "handle_options.m"
              {
#line 868 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_290_290, &libs__handle_options__STATE_VARIABLE_Globals_294_294);
              }
#line 869 "handle_options.m"
              {
#line 869 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_294_294, &libs__handle_options__STATE_VARIABLE_Globals_298_298);
              }
#line 870 "handle_options.m"
              {
#line 870 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_298_298, &libs__handle_options__STATE_VARIABLE_Globals_302_302);
              }
#line 871 "handle_options.m"
              {
#line 871 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_302_302, &libs__handle_options__STATE_VARIABLE_Globals_306_306);
              }
#line 872 "handle_options.m"
              {
#line 872 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_306_306, &libs__handle_options__STATE_VARIABLE_Globals_310_310);
              }
#line 873 "handle_options.m"
              {
#line 873 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_310_310, &libs__handle_options__STATE_VARIABLE_Globals_314_314);
              }
#line 874 "handle_options.m"
              {
#line 874 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_314_314, &libs__handle_options__STATE_VARIABLE_Globals_318_318);
              }
#line 876 "handle_options.m"
              {
#line 876 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_318_318, &libs__handle_options__STATE_VARIABLE_Globals_322_322);
              }
#line 877 "handle_options.m"
              {
#line 877 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_322_322, &libs__handle_options__STATE_VARIABLE_Globals_326_326);
              }
#line 878 "handle_options.m"
              {
#line 878 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 660, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_326_326, &libs__handle_options__STATE_VARIABLE_Globals_330_330);
              }
#line 882 "handle_options.m"
              {
#line 882 "handle_options.m"
                libs__handle_options__V_332_332 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
              }
#line 882 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__V_332_332 == (MR_Integer) 0);
#line 884 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 883 "handle_options.m"
                {
#line 883 "handle_options.m"
                  {
#line 883 "handle_options.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 484, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_330_330, &libs__handle_options__STATE_VARIABLE_Globals_335_335);
                  }
#line 883 "handle_options.m"
                }
#line 884 "handle_options.m"
              else
#line 883 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_330_330;
#line 861 "handle_options.m"
            }
#line 887 "handle_options.m"
          else
#line 887 "handle_options.m"
            if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 890 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 887 "handle_options.m"
            else
#line 891 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 899 "handle_options.m"
    {
#line 899 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_335_335, (MR_Integer) 259, &libs__handle_options__ILFuncPtrTypes_62);
    }
#line 901 "handle_options.m"
    {
#line 901 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_335_335, (MR_Integer) 258, &libs__handle_options__ILRefAnyFields_63);
    }
#line 904 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__ILFuncPtrTypes_62 == (MR_Integer) 1);
#line 904 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 905 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__ILRefAnyFields_63 == (MR_Integer) 1);
#line 908 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 905 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_342_342 = libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 908 "handle_options.m"
    else
#line 909 "handle_options.m"
      {
#line 909 "handle_options.m"
        {
#line 909 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 257, (MR_Integer) 256, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_342_342);
        }
#line 909 "handle_options.m"
      }
#line 10399 "libs.handle_options.c"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1045 "handle_options.m"
      {
#line 1042 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1045 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1043 "handle_options.m"
          {
#line 1043 "handle_options.m"
            {
#line 1043 "handle_options.m"
              libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 255, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_479_479);
            }
#line 1043 "handle_options.m"
          }
#line 1045 "handle_options.m"
        else
#line 1043 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_479_479 = libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 1045 "handle_options.m"
      }
#line 10422 "libs.handle_options.c"
    else
#line 10424 "libs.handle_options.c"
      if ((libs__handle_options__Target_25 == (MR_Integer) 5))
#line 10426 "libs.handle_options.c"
        {
#line 10428 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_411_411;
#line 10430 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_414_414;
#line 10432 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_418_418;
#line 10434 "libs.handle_options.c"
          MR_Word libs__handle_options__V_421_421;
#line 10436 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_422_422;
#line 10438 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_426_426;
#line 10440 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_430_430;
#line 10442 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_434_434;
#line 10444 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_438_438;
#line 10446 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_442_442;
#line 10448 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_446_446;
#line 10450 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_450_450;
#line 10452 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_454_454;
#line 10454 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_458_458;
#line 10456 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_462_462;
#line 10458 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_466_466;

#line 1003 "handle_options.m"
          {
#line 1003 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_411_411);
          }
#line 1004 "handle_options.m"
          {
#line 1004 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_411_411, &libs__handle_options__STATE_VARIABLE_Globals_414_414);
          }
#line 1005 "handle_options.m"
          {
#line 1005 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_414_414, &libs__handle_options__STATE_VARIABLE_Globals_418_418);
          }
#line 1006 "handle_options.m"
          libs__handle_options__V_421_421 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1006 "handle_options.m"
          {
#line 1006 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_418_418, &libs__handle_options__STATE_VARIABLE_Globals_422_422);
          }
#line 1008 "handle_options.m"
          {
#line 1008 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_422_422, &libs__handle_options__STATE_VARIABLE_Globals_426_426);
          }
#line 1010 "handle_options.m"
          {
#line 1010 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_426_426, &libs__handle_options__STATE_VARIABLE_Globals_430_430);
          }
#line 1012 "handle_options.m"
          {
#line 1012 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_430_430, &libs__handle_options__STATE_VARIABLE_Globals_434_434);
          }
#line 1014 "handle_options.m"
          {
#line 1014 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_434_434, &libs__handle_options__STATE_VARIABLE_Globals_438_438);
          }
#line 1016 "handle_options.m"
          {
#line 1016 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_438_438, &libs__handle_options__STATE_VARIABLE_Globals_442_442);
          }
#line 1018 "handle_options.m"
          {
#line 1018 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_442_442, &libs__handle_options__STATE_VARIABLE_Globals_446_446);
          }
#line 1019 "handle_options.m"
          {
#line 1019 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 660, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_446_446, &libs__handle_options__STATE_VARIABLE_Globals_450_450);
          }
#line 1025 "handle_options.m"
          {
#line 1025 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_450_450, &libs__handle_options__STATE_VARIABLE_Globals_454_454);
          }
#line 1026 "handle_options.m"
          {
#line 1026 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_454_454, &libs__handle_options__STATE_VARIABLE_Globals_458_458);
          }
#line 1027 "handle_options.m"
          {
#line 1027 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_458_458, &libs__handle_options__STATE_VARIABLE_Globals_462_462);
          }
#line 1028 "handle_options.m"
          {
#line 1028 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_462_462, &libs__handle_options__STATE_VARIABLE_Globals_466_466);
          }
#line 1029 "handle_options.m"
          {
#line 1029 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_466_466, &libs__handle_options__STATE_VARIABLE_Globals_479_479);
          }
#line 10543 "libs.handle_options.c"
        }
#line 10545 "libs.handle_options.c"
      else
#line 10547 "libs.handle_options.c"
        if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1055 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_479_479 = libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 10551 "libs.handle_options.c"
        else
#line 10553 "libs.handle_options.c"
          if ((libs__handle_options__Target_25 == (MR_Integer) 4))
#line 10555 "libs.handle_options.c"
            {
#line 1052 "handle_options.m"
              {
#line 1052 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 467, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_479_479);
              }
#line 10562 "libs.handle_options.c"
            }
#line 10564 "libs.handle_options.c"
          else
#line 10566 "libs.handle_options.c"
            {
#line 10568 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_345_345;
#line 10570 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_348_348;
#line 10572 "libs.handle_options.c"
              MR_Word libs__handle_options__V_351_351;
#line 10574 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_352_352;
#line 10576 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_356_356;
#line 10578 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_360_360;
#line 10580 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_364_364;
#line 10582 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_368_368;
#line 10584 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_372_372;
#line 10586 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_376_376;
#line 10588 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_380_380;
#line 10590 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_384_384;
#line 10592 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_388_388;
#line 10594 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_392_392;
#line 10596 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_396_396;
#line 10598 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_400_400;
#line 10600 "libs.handle_options.c"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_404_404;

#line 953 "handle_options.m"
              {
#line 953 "handle_options.m"
                libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_345_345);
              }
#line 954 "handle_options.m"
              {
#line 954 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[199]), libs__handle_options__STATE_VARIABLE_Globals_345_345, &libs__handle_options__STATE_VARIABLE_Globals_348_348);
              }
#line 955 "handle_options.m"
              libs__handle_options__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 955 "handle_options.m"
              {
#line 955 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_348_348, &libs__handle_options__STATE_VARIABLE_Globals_352_352);
              }
#line 957 "handle_options.m"
              {
#line 957 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_352_352, &libs__handle_options__STATE_VARIABLE_Globals_356_356);
              }
#line 959 "handle_options.m"
              {
#line 959 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_356_356, &libs__handle_options__STATE_VARIABLE_Globals_360_360);
              }
#line 960 "handle_options.m"
              {
#line 960 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_360_360, &libs__handle_options__STATE_VARIABLE_Globals_364_364);
              }
#line 961 "handle_options.m"
              {
#line 961 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_364_364, &libs__handle_options__STATE_VARIABLE_Globals_368_368);
              }
#line 962 "handle_options.m"
              {
#line 962 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_368_368, &libs__handle_options__STATE_VARIABLE_Globals_372_372);
              }
#line 963 "handle_options.m"
              {
#line 963 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_372_372, &libs__handle_options__STATE_VARIABLE_Globals_376_376);
              }
#line 964 "handle_options.m"
              {
#line 964 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_376_376, &libs__handle_options__STATE_VARIABLE_Globals_380_380);
              }
#line 965 "handle_options.m"
              {
#line 965 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_380_380, &libs__handle_options__STATE_VARIABLE_Globals_384_384);
              }
#line 966 "handle_options.m"
              {
#line 966 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_384_384, &libs__handle_options__STATE_VARIABLE_Globals_388_388);
              }
#line 967 "handle_options.m"
              {
#line 967 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_388_388, &libs__handle_options__STATE_VARIABLE_Globals_392_392);
              }
#line 968 "handle_options.m"
              {
#line 968 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_392_392, &libs__handle_options__STATE_VARIABLE_Globals_396_396);
              }
#line 970 "handle_options.m"
              {
#line 970 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_396_396, &libs__handle_options__STATE_VARIABLE_Globals_400_400);
              }
#line 971 "handle_options.m"
              {
#line 971 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 660, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_400_400, &libs__handle_options__STATE_VARIABLE_Globals_404_404);
              }
#line 10685 "libs.handle_options.c"
              if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 10687 "libs.handle_options.c"
                {
#line 974 "handle_options.m"
                  {
#line 974 "handle_options.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 573, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[200]), libs__handle_options__STATE_VARIABLE_Globals_404_404, &libs__handle_options__STATE_VARIABLE_Globals_479_479);
                  }
#line 10694 "libs.handle_options.c"
                }
#line 10696 "libs.handle_options.c"
              else
#line 1057 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_479_479 = libs__handle_options__STATE_VARIABLE_Globals_404_404;
#line 10700 "libs.handle_options.c"
            }
#line 1063 "handle_options.m"
    {
#line 1063 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 214, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_479_479, &libs__handle_options__STATE_VARIABLE_Globals_484_484);
    }
#line 1070 "handle_options.m"
    libs__handle_options__V_488_488 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[201]);
#line 1070 "handle_options.m"
    {
#line 1070 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 556, libs__handle_options__V_488_488, libs__handle_options__STATE_VARIABLE_Globals_484_484, &libs__handle_options__STATE_VARIABLE_Globals_489_489);
    }
#line 1072 "handle_options.m"
    {
#line 1072 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 558, libs__handle_options__V_488_488, libs__handle_options__STATE_VARIABLE_Globals_489_489, &libs__handle_options__STATE_VARIABLE_Globals_494_494);
    }
#line 1076 "handle_options.m"
    libs__handle_options__V_498_498 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1076 "handle_options.m"
    {
#line 1076 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 245, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_494_494, &libs__handle_options__STATE_VARIABLE_Globals_499_499);
    }
#line 1078 "handle_options.m"
    {
#line 1078 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 246, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_499_499, &libs__handle_options__STATE_VARIABLE_Globals_504_504);
    }
#line 1080 "handle_options.m"
    {
#line 1080 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 247, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_504_504, &libs__handle_options__STATE_VARIABLE_Globals_509_509);
    }
#line 1083 "handle_options.m"
    {
#line 1083 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 252, (MR_Integer) 319, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_509_509, &libs__handle_options__STATE_VARIABLE_Globals_514_514);
    }
#line 1087 "handle_options.m"
    {
#line 1087 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 460, (MR_Integer) 454, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_514_514, &libs__handle_options__STATE_VARIABLE_Globals_519_519);
    }
#line 1091 "handle_options.m"
    {
#line 1091 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 619, (MR_Integer) 617, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_519_519, &libs__handle_options__STATE_VARIABLE_Globals_524_524);
    }
#line 1095 "handle_options.m"
    {
#line 1095 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_524_524, (MR_Integer) 635, &libs__handle_options__LibLinkages0_64);
    }
#line 1101 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "handle_options.m"
      {
#line 1099 "handle_options.m"
        {
#line 1099 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 635, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[8]), libs__handle_options__STATE_VARIABLE_Globals_524_524, &libs__handle_options__STATE_VARIABLE_Globals_529_529);
        }
#line 1098 "handle_options.m"
      }
#line 1101 "handle_options.m"
    else
#line 1102 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_529_529 = libs__handle_options__STATE_VARIABLE_Globals_524_524;
#line 1108 "handle_options.m"
    {
#line 1108 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 98, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_529_529, &libs__handle_options__STATE_VARIABLE_Globals_538_538);
    }
#line 1109 "handle_options.m"
    {
#line 1109 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 97, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_538_538, &libs__handle_options__STATE_VARIABLE_Globals_543_543);
    }
#line 1114 "handle_options.m"
    {
#line 1114 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 617, (MR_Integer) 640, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_543_543, &libs__handle_options__STATE_VARIABLE_Globals_548_548);
    }
#line 1115 "handle_options.m"
    {
#line 1115 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 640, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_548_548, &libs__handle_options__STATE_VARIABLE_Globals_553_553);
    }
#line 1116 "handle_options.m"
    {
#line 1116 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 617, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_553_553, &libs__handle_options__STATE_VARIABLE_Globals_558_558);
    }
#line 1120 "handle_options.m"
    {
#line 1120 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 622, (MR_Integer) 113, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_558_558, &libs__handle_options__STATE_VARIABLE_Globals_563_563);
    }
#line 1124 "handle_options.m"
    {
#line 1124 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 617, (MR_Integer) 645, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_563_563, &libs__handle_options__STATE_VARIABLE_Globals_568_568);
    }
#line 1129 "handle_options.m"
    {
#line 1129 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_568_568, (MR_Integer) 329, &libs__handle_options__TransOpt_67);
    }
#line 1142 "handle_options.m"
    if ((libs__handle_options__TransOpt_67 == (MR_Integer) 0))
#line 1143 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_575_575 = libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 1142 "handle_options.m"
    else
#line 1132 "handle_options.m"
      {
#line 1132 "handle_options.m"
        MR_Word libs__handle_options__UsingMMC_Make_68;
#line 1132 "handle_options.m"
        MR_Word libs__handle_options__InvokedByMMC_Make_69;
#line 1136 "handle_options.m"
        MR_Word libs__handle_options__V_573_573;

#line 1133 "handle_options.m"
        {
#line 1133 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_568_568, (MR_Integer) 617, &libs__handle_options__UsingMMC_Make_68);
        }
#line 1134 "handle_options.m"
        {
#line 1134 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_568_568, (MR_Integer) 622, &libs__handle_options__InvokedByMMC_Make_69);
        }
#line 1136 "handle_options.m"
        {
#line 1136 "handle_options.m"
          libs__handle_options__V_573_573 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMC_Make_68, libs__handle_options__InvokedByMMC_Make_69);
        }
#line 1136 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_573_573 == (MR_Integer) 1);
#line 1139 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1137 "handle_options.m"
          {
#line 1137 "handle_options.m"
            {
#line 1137 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_268_268, &libs__handle_options__STATE_VARIABLE_Errors_575_575);
            }
#line 1137 "handle_options.m"
          }
#line 1139 "handle_options.m"
        else
#line 1137 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_575_575 = libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 1132 "handle_options.m"
      }
#line 1148 "handle_options.m"
    {
#line 1148 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_568_568, (MR_Integer) 325, &libs__handle_options__InterModOpt_70);
    }
#line 1150 "handle_options.m"
    {
#line 1150 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_568_568, (MR_Integer) 330, &libs__handle_options__InterModAnalysis_71);
    }
#line 1153 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_70 == (MR_Integer) 1);
#line 1153 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1154 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_71 == (MR_Integer) 1);
#line 1158 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1156 "handle_options.m"
      {
#line 1156 "handle_options.m"
        {
#line 1156 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_575_575, &libs__handle_options__STATE_VARIABLE_Errors_581_581);
        }
#line 1156 "handle_options.m"
      }
#line 1158 "handle_options.m"
    else
#line 1156 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_581_581 = libs__handle_options__STATE_VARIABLE_Errors_575_575;
#line 1162 "handle_options.m"
    {
#line 1162 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1164 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1162 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_586_586 = libs__handle_options__STATE_VARIABLE_Globals_568_568;
#line 1164 "handle_options.m"
    else
#line 1165 "handle_options.m"
      {
#line 1165 "handle_options.m"
        {
#line 1165 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 626, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_568_568, &libs__handle_options__STATE_VARIABLE_Globals_586_586);
        }
#line 1165 "handle_options.m"
      }
#line 1168 "handle_options.m"
    {
#line 1168 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_586_586, (MR_Integer) 93, &libs__handle_options__MaybeStandaloneInt_72);
    }
#line 1170 "handle_options.m"
    {
#line 1170 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_586_586, (MR_Integer) 566, &libs__handle_options__ExtraInitFunctions_73);
    }
#line 1173 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_72)) == (MR_mktag((MR_Integer) 1)));
#line 1173 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1173 "handle_options.m"
      {
#line 1173 "handle_options.m"
        libs__handle_options__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_72, (MR_Integer) 0)));
#line 1174 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_73 == (MR_Integer) 1);
#line 1173 "handle_options.m"
      }
#line 1179 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1176 "handle_options.m"
      {
#line 1176 "handle_options.m"
        {
#line 1176 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_581_581, &libs__handle_options__STATE_VARIABLE_Errors_591_591);
        }
#line 1176 "handle_options.m"
      }
#line 1179 "handle_options.m"
    else
#line 1176 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_591_591 = libs__handle_options__STATE_VARIABLE_Errors_581_581;
#line 1183 "handle_options.m"
    {
#line 1183 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 408, (MR_Integer) 406, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_586_586, &libs__handle_options__STATE_VARIABLE_Globals_597_597);
    }
#line 1185 "handle_options.m"
    {
#line 1185 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 416, (MR_Integer) 415, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_597_597, &libs__handle_options__STATE_VARIABLE_Globals_602_602);
    }
#line 1187 "handle_options.m"
    {
#line 1187 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 415, (MR_Integer) 414, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_602_602, &libs__handle_options__STATE_VARIABLE_Globals_607_607);
    }
#line 1188 "handle_options.m"
    {
#line 1188 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 415, (MR_Integer) 13, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_607_607, &libs__handle_options__STATE_VARIABLE_Globals_612_612);
    }
#line 1190 "handle_options.m"
    {
#line 1190 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 423, (MR_Integer) 422, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_612_612, &libs__handle_options__STATE_VARIABLE_Globals_617_617);
    }
#line 1192 "handle_options.m"
    {
#line 1192 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 422, (MR_Integer) 421, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_617_617, &libs__handle_options__STATE_VARIABLE_Globals_622_622);
    }
#line 1193 "handle_options.m"
    {
#line 1193 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 422, (MR_Integer) 13, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_622_622, &libs__handle_options__STATE_VARIABLE_Globals_627_627);
    }
#line 1195 "handle_options.m"
    {
#line 1195 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 329, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_627_627, &libs__handle_options__STATE_VARIABLE_Globals_632_632);
    }
#line 1197 "handle_options.m"
    {
#line 1197 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 325, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_632_632, &libs__handle_options__STATE_VARIABLE_Globals_637_637);
    }
#line 1199 "handle_options.m"
    {
#line 1199 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 328, (MR_Integer) 327, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_637_637, &libs__handle_options__STATE_VARIABLE_Globals_642_642);
    }
#line 1204 "handle_options.m"
    {
#line 1204 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 327, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_642_642, &libs__handle_options__STATE_VARIABLE_Globals_647_647);
    }
#line 1206 "handle_options.m"
    {
#line 1206 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 328, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_647_647, &libs__handle_options__STATE_VARIABLE_Globals_652_652);
    }
#line 1214 "handle_options.m"
    {
#line 1214 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 327, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_652_652, &libs__handle_options__STATE_VARIABLE_Globals_656_656);
    }
#line 1216 "handle_options.m"
    {
#line 1216 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 112, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_656_656, &libs__handle_options__STATE_VARIABLE_Globals_661_661);
    }
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 48, (MR_Integer) 47, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_661_661, &libs__handle_options__STATE_VARIABLE_Globals_666_666);
    }
#line 1225 "handle_options.m"
    {
#line 1225 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_666_666, &libs__handle_options__STATE_VARIABLE_Globals_671_671);
    }
#line 1227 "handle_options.m"
    {
#line 1227 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_671_671, &libs__handle_options__STATE_VARIABLE_Globals_676_676);
    }
#line 1229 "handle_options.m"
    {
#line 1229 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_676_676, &libs__handle_options__STATE_VARIABLE_Globals_681_681);
    }
#line 1231 "handle_options.m"
    {
#line 1231 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_681_681, &libs__handle_options__STATE_VARIABLE_Globals_686_686);
    }
#line 1233 "handle_options.m"
    {
#line 1233 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_686_686, &libs__handle_options__STATE_VARIABLE_Globals_691_691);
    }
#line 1235 "handle_options.m"
    {
#line 1235 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_691_691, &libs__handle_options__STATE_VARIABLE_Globals_696_696);
    }
#line 1237 "handle_options.m"
    {
#line 1237 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_696_696, &libs__handle_options__STATE_VARIABLE_Globals_701_701);
    }
#line 1239 "handle_options.m"
    {
#line 1239 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_701_701, &libs__handle_options__STATE_VARIABLE_Globals_706_706);
    }
#line 1241 "handle_options.m"
    {
#line 1241 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_706_706, &libs__handle_options__STATE_VARIABLE_Globals_711_711);
    }
#line 1243 "handle_options.m"
    {
#line 1243 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_711_711, &libs__handle_options__STATE_VARIABLE_Globals_716_716);
    }
#line 1245 "handle_options.m"
    {
#line 1245 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_716_716, &libs__handle_options__STATE_VARIABLE_Globals_721_721);
    }
#line 1247 "handle_options.m"
    {
#line 1247 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_721_721, &libs__handle_options__STATE_VARIABLE_Globals_726_726);
    }
#line 1249 "handle_options.m"
    {
#line 1249 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_726_726, &libs__handle_options__STATE_VARIABLE_Globals_731_731);
    }
#line 1251 "handle_options.m"
    {
#line 1251 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 111, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_731_731, &libs__handle_options__STATE_VARIABLE_Globals_736_736);
    }
#line 1257 "handle_options.m"
    {
#line 1257 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 133, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_736_736, &libs__handle_options__STATE_VARIABLE_Globals_741_741);
    }
#line 1259 "handle_options.m"
    {
#line 1259 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 133, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_741_741, &libs__handle_options__STATE_VARIABLE_Globals_746_746);
    }
#line 1261 "handle_options.m"
    {
#line 1261 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 133, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_746_746, &libs__handle_options__STATE_VARIABLE_Globals_751_751);
    }
#line 1263 "handle_options.m"
    {
#line 1263 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 133, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_751_751, &libs__handle_options__STATE_VARIABLE_Globals_756_756);
    }
#line 1265 "handle_options.m"
    {
#line 1265 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 133, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_756_756, &libs__handle_options__STATE_VARIABLE_Globals_761_761);
    }
#line 1270 "handle_options.m"
    {
#line 1270 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 112, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_761_761, &libs__handle_options__STATE_VARIABLE_Globals_766_766);
    }
#line 1277 "handle_options.m"
    {
#line 1277 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 325, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_766_766, &libs__handle_options__STATE_VARIABLE_Globals_771_771);
    }
#line 1285 "handle_options.m"
    {
#line 1285 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_771_771, (MR_Integer) 111, &libs__handle_options__Smart_75);
    }
#line 1286 "handle_options.m"
    {
#line 1286 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 325, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_771_771, &libs__handle_options__STATE_VARIABLE_Globals_777_777);
    }
#line 1288 "handle_options.m"
    {
#line 1288 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 327, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_777_777, &libs__handle_options__STATE_VARIABLE_Globals_782_782);
    }
#line 1297 "handle_options.m"
    {
#line 1297 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 97, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_782_782, &libs__handle_options__STATE_VARIABLE_Globals_787_787);
    }
#line 1300 "handle_options.m"
    {
#line 1300 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 641, (MR_Integer) 640, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_787_787, &libs__handle_options__STATE_VARIABLE_Globals_792_792);
    }
#line 1302 "handle_options.m"
    {
#line 1302 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 44, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_792_792, &libs__handle_options__STATE_VARIABLE_Globals_797_797);
    }
#line 1303 "handle_options.m"
    {
#line 1303 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 44, (MR_Integer) 50, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_797_797, &libs__handle_options__STATE_VARIABLE_Globals_802_802);
    }
#line 1304 "handle_options.m"
    {
#line 1304 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_802_802, (MR_Integer) 45, &libs__handle_options__VeryVerbose_76);
    }
#line 1305 "handle_options.m"
    {
#line 1305 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_802_802, (MR_Integer) 54, &libs__handle_options__Statistics_77);
    }
#line 1307 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_76 == (MR_Integer) 1);
#line 1307 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1308 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1311 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1310 "handle_options.m"
      {
#line 1310 "handle_options.m"
        {
#line 1310 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 55, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_802_802, &libs__handle_options__STATE_VARIABLE_Globals_808_808);
        }
#line 1310 "handle_options.m"
      }
#line 1311 "handle_options.m"
    else
#line 1310 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_808_808 = libs__handle_options__STATE_VARIABLE_Globals_802_802;
#line 1315 "handle_options.m"
    {
#line 1315 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 60, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_808_808, &libs__handle_options__STATE_VARIABLE_Globals_813_813);
    }
#line 1316 "handle_options.m"
    {
#line 1316 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_813_813, &libs__handle_options__STATE_VARIABLE_Globals_818_818);
    }
#line 1317 "handle_options.m"
    {
#line 1317 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 59, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_818_818, &libs__handle_options__STATE_VARIABLE_Globals_823_823);
    }
#line 1320 "handle_options.m"
    {
#line 1320 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_823_823, (MR_Integer) 72, &libs__handle_options__DebugLiveness_78);
    }
#line 1322 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_78 >= (MR_Integer) 0);
#line 1322 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1322 "handle_options.m"
      {
#line 1323 "handle_options.m"
        libs__handle_options__V_827_827 = (MR_String) "all";
#line 1323 "handle_options.m"
        {
#line 1323 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_827_827, &libs__handle_options__AllDumpOptions_79);
        }
#line 1322 "handle_options.m"
      }
#line 1334 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1330 "handle_options.m"
      {
#line 1330 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_80;
#line 1330 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_81;
#line 1330 "handle_options.m"
        MR_Word libs__handle_options__V_830_830;

#line 1329 "handle_options.m"
        {
#line 1329 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_823_823, (MR_Integer) 144, &libs__handle_options__DumpOptions0_80);
        }
#line 1331 "handle_options.m"
        {
#line 1331 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_80, libs__handle_options__AllDumpOptions_79, &libs__handle_options__DumpOptions1_81);
        }
#line 1332 "handle_options.m"
        {
#line 1332 "handle_options.m"
          libs__handle_options__V_830_830 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_830_830, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1332 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_830_830, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_81));
#line 1332 "handle_options.m"
        }
#line 1332 "handle_options.m"
        {
#line 1332 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 144, libs__handle_options__V_830_830, libs__handle_options__STATE_VARIABLE_Globals_823_823, &libs__handle_options__STATE_VARIABLE_Globals_831_831);
        }
#line 1330 "handle_options.m"
      }
#line 1334 "handle_options.m"
    else
#line 1332 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_831_831 = libs__handle_options__STATE_VARIABLE_Globals_823_823;
#line 1338 "handle_options.m"
    {
#line 1338 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_831_831, &libs__handle_options__STATE_VARIABLE_Globals_835_835);
    }
#line 1339 "handle_options.m"
    {
#line 1339 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_835_835, (MR_Integer) 62, &libs__handle_options__DebugModesPredId_82);
    }
#line 1341 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_82 > (MR_Integer) 0);
#line 1343 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1342 "handle_options.m"
      {
#line 1342 "handle_options.m"
        {
#line 1342 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_835_835, &libs__handle_options__STATE_VARIABLE_Globals_841_841);
        }
#line 1342 "handle_options.m"
      }
#line 1343 "handle_options.m"
    else
#line 1342 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_841_841 = libs__handle_options__STATE_VARIABLE_Globals_835_835;
#line 1347 "handle_options.m"
    {
#line 1347 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_841_841, (MR_Integer) 358, &libs__handle_options__DebugUnneededCodePredNames_83);
    }
#line 1351 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_846_846 = libs__handle_options__STATE_VARIABLE_Globals_841_841;
#line 1351 "handle_options.m"
    else
#line 1352 "handle_options.m"
      {
#line 1353 "handle_options.m"
        {
#line 1353 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 357, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_841_841, &libs__handle_options__STATE_VARIABLE_Globals_846_846);
        }
#line 1352 "handle_options.m"
      }
#line 1356 "handle_options.m"
    {
#line 1356 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_846_846, (MR_Integer) 68, &libs__handle_options__DebugOptPredIdStrs_86);
    }
#line 1358 "handle_options.m"
    {
#line 1358 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_846_846, (MR_Integer) 69, &libs__handle_options__DebugOptPredNames_87);
    }
#line 1361 "handle_options.m"
    {
#line 1361 "handle_options.m"
      MR_String libs__handle_options__V_88_88;
#line 1361 "handle_options.m"
      MR_Word libs__handle_options__V_89_89;

#line 1361 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_86)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1361 "handle_options.m"
        {
#line 1361 "handle_options.m"
          libs__handle_options__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 0)));
#line 1361 "handle_options.m"
          libs__handle_options__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 1)));
#line 1361 "handle_options.m"
        }
#line 1361 "handle_options.m"
    }
#line 1362 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1362 "handle_options.m"
      {
#line 1362 "handle_options.m"
        MR_String libs__handle_options__V_90_90;
#line 1362 "handle_options.m"
        MR_Word libs__handle_options__V_91_91;

#line 1362 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_87)) == (MR_mktag((MR_Integer) 1)));
#line 1362 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1362 "handle_options.m"
          {
#line 1362 "handle_options.m"
            libs__handle_options__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 0)));
#line 1362 "handle_options.m"
            libs__handle_options__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 1)));
#line 1362 "handle_options.m"
          }
#line 1362 "handle_options.m"
      }
#line 1366 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1365 "handle_options.m"
      {
#line 1365 "handle_options.m"
        {
#line 1365 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 66, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_846_846, &libs__handle_options__STATE_VARIABLE_Globals_852_852);
        }
#line 1365 "handle_options.m"
      }
#line 1366 "handle_options.m"
    else
#line 1365 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_852_852 = libs__handle_options__STATE_VARIABLE_Globals_846_846;
#line 1370 "handle_options.m"
    {
#line 1370 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_852_852, (MR_Integer) 78, &libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1372 "handle_options.m"
    {
#line 1372 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1374 "handle_options.m"
    {
#line 1374 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_852_852, (MR_Integer) 141, &libs__handle_options__DumpHLDSPredIds_93);
    }
#line 1385 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_864_864 = libs__handle_options__STATE_VARIABLE_Globals_852_852;
#line 1385 "handle_options.m"
    else
#line 1377 "handle_options.m"
      {
#line 1377 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_96;
#line 1377 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_97;
#line 1377 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_98;
#line 1377 "handle_options.m"
        MR_Word libs__handle_options__V_863_863;

#line 1378 "handle_options.m"
        {
#line 1378 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_852_852, (MR_Integer) 144, &libs__handle_options__DumpOptions2_96);
        }
#line 1381 "handle_options.m"
        {
#line 1381 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_96, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_97);
        }
#line 1382 "handle_options.m"
        {
#line 1382 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_97, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_98);
        }
#line 1383 "handle_options.m"
        {
#line 1383 "handle_options.m"
          libs__handle_options__V_863_863 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_863_863, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1383 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_863_863, 1) = ((MR_Box) (libs__handle_options__DumpOptions_98));
#line 1383 "handle_options.m"
        }
#line 1383 "handle_options.m"
        {
#line 1383 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 144, libs__handle_options__V_863_863, libs__handle_options__STATE_VARIABLE_Globals_852_852, &libs__handle_options__STATE_VARIABLE_Globals_864_864);
        }
#line 1377 "handle_options.m"
      }
#line 1389 "handle_options.m"
    {
#line 1389 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 152, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_864_864, &libs__handle_options__STATE_VARIABLE_Globals_868_868);
    }
#line 1391 "handle_options.m"
    {
#line 1391 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 152, (MR_Integer) 150, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_868_868, &libs__handle_options__STATE_VARIABLE_Globals_873_873);
    }
#line 1393 "handle_options.m"
    {
#line 1393 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 151, (MR_Integer) 150, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_873_873, &libs__handle_options__STATE_VARIABLE_Globals_878_878);
    }
#line 1396 "handle_options.m"
    {
#line 1396 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 134, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_878_878, &libs__handle_options__STATE_VARIABLE_Globals_883_883);
    }
#line 1401 "handle_options.m"
    {
#line 1401 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 214, &libs__handle_options__UseTrail_99);
    }
#line 1402 "handle_options.m"
    {
#line 1402 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 250, &libs__handle_options__HighLevelCode_100);
    }
#line 1403 "handle_options.m"
    {
#line 1403 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 216, &libs__handle_options__UseMinimalModelStackCopy_101);
    }
#line 1405 "handle_options.m"
    {
#line 1405 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 217, &libs__handle_options__UseMinimalModelOwnStacks_102);
    }
#line 1407 "handle_options.m"
    {
#line 1407 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_101, libs__handle_options__UseMinimalModelOwnStacks_102, &libs__handle_options__UseMinimalModel_103);
    }
#line 1410 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1410 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1411 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_102 == (MR_Integer) 1);
#line 1415 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1413 "handle_options.m"
      {
#line 1413 "handle_options.m"
        {
#line 1413 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_591_591, &libs__handle_options__STATE_VARIABLE_Errors_890_890);
        }
#line 1413 "handle_options.m"
      }
#line 1415 "handle_options.m"
    else
#line 1421 "handle_options.m"
      {
#line 1416 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1416 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1417 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1421 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1419 "handle_options.m"
          {
#line 1419 "handle_options.m"
            {
#line 1419 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_591_591, &libs__handle_options__STATE_VARIABLE_Errors_890_890);
            }
#line 1419 "handle_options.m"
          }
#line 1421 "handle_options.m"
        else
#line 1427 "handle_options.m"
          {
#line 1422 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1422 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1423 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_99 == (MR_Integer) 1);
#line 1427 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1425 "handle_options.m"
              {
#line 1425 "handle_options.m"
                {
#line 1425 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_591_591, &libs__handle_options__STATE_VARIABLE_Errors_890_890);
                }
#line 1425 "handle_options.m"
              }
#line 1427 "handle_options.m"
            else
#line 1425 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_890_890 = libs__handle_options__STATE_VARIABLE_Errors_591_591;
#line 1427 "handle_options.m"
          }
#line 1421 "handle_options.m"
      }
#line 1437 "handle_options.m"
    libs__handle_options__V_903_903 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]);
#line 1437 "handle_options.m"
    {
#line 1437 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 242, libs__handle_options__V_903_903, libs__handle_options__STATE_VARIABLE_Globals_883_883, &libs__handle_options__STATE_VARIABLE_Globals_904_904);
    }
#line 1455 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1439 "handle_options.m"
      {
#line 1439 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits0_104;
#line 1439 "handle_options.m"
        MR_Integer libs__handle_options__BitsPerWord_105;
#line 1439 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits_106;
#line 1439 "handle_options.m"
        MR_Word libs__handle_options__V_926_926;

#line 1440 "handle_options.m"
        {
#line 1440 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_904_904, (MR_Integer) 242, &libs__handle_options__ArgPackBits0_104);
        }
#line 1441 "handle_options.m"
        {
#line 1441 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_904_904, (MR_Integer) 236, &libs__handle_options__BitsPerWord_105);
        }
#line 1443 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 < (MR_Integer) 0);
#line 1445 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1444 "handle_options.m"
          libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1445 "handle_options.m"
        else
#line 1451 "handle_options.m"
          {
#line 1445 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 > libs__handle_options__BitsPerWord_105);
#line 1451 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1446 "handle_options.m"
              {
#line 1446 "handle_options.m"
                MR_String libs__handle_options__ProgNameB_107;
#line 1446 "handle_options.m"
                MR_String libs__handle_options__V_1676_1676;

#line 1446 "handle_options.m"
                {
#line 1446 "handle_options.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_107);
                }
#line 11619 "libs.handle_options.c"
                {
#line 11621 "libs.handle_options.c"
                  libs__handle_options__V_1676_1676 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgNameB_107, (MR_String) ": warning: --arg-pack-bits invalid\n");
                }
#line 11624 "libs.handle_options.c"
                {
#line 11626 "libs.handle_options.c"
                  mercury__io__write_string_3_p_0(libs__handle_options__V_1676_1676);
                }
#line 1449 "handle_options.m"
                {
#line 1449 "handle_options.m"
                  libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_904_904);
                }
#line 1450 "handle_options.m"
                libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1446 "handle_options.m"
              }
#line 1451 "handle_options.m"
            else
#line 1452 "handle_options.m"
              libs__handle_options__ArgPackBits_106 = libs__handle_options__ArgPackBits0_104;
#line 1451 "handle_options.m"
          }
#line 1454 "handle_options.m"
        {
#line 1454 "handle_options.m"
          libs__handle_options__V_926_926 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "handle_options.m"
          MR_hl_field(MR_mktag(2), libs__handle_options__V_926_926, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_106));
#line 1454 "handle_options.m"
        }
#line 1454 "handle_options.m"
        {
#line 1454 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_926_926, libs__handle_options__STATE_VARIABLE_Globals_904_904, &libs__handle_options__STATE_VARIABLE_Globals_927_927);
        }
#line 1439 "handle_options.m"
      }
#line 1455 "handle_options.m"
    else
#line 1461 "handle_options.m"
      {
#line 1461 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_908_908;

#line 1462 "handle_options.m"
        {
#line 1462 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_903_903, libs__handle_options__STATE_VARIABLE_Globals_904_904, &libs__handle_options__STATE_VARIABLE_Globals_908_908);
        }
#line 1463 "handle_options.m"
        {
#line 1463 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_908_908, &libs__handle_options__STATE_VARIABLE_Globals_927_927);
        }
#line 1461 "handle_options.m"
      }
#line 1467 "handle_options.m"
    {
#line 1467 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_927_927, &libs__handle_options__STATE_VARIABLE_Globals_931_931);
    }
#line 1472 "handle_options.m"
    {
#line 1472 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 249, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_931_931, &libs__handle_options__STATE_VARIABLE_Globals_936_936);
    }
#line 1473 "handle_options.m"
    {
#line 1473 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 249, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_936_936, &libs__handle_options__STATE_VARIABLE_Globals_941_941);
    }
#line 1478 "handle_options.m"
    {
#line 1478 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 272, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_941_941, &libs__handle_options__STATE_VARIABLE_Globals_946_946);
    }
#line 1489 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1485 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_950_950 = libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 1489 "handle_options.m"
    else
#line 1489 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1486 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_950_950 = libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 1489 "handle_options.m"
      else
#line 1489 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 1487 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_950_950 = libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 1489 "handle_options.m"
        else
#line 1493 "handle_options.m"
          {
#line 1494 "handle_options.m"
            {
#line 1494 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_946_946, &libs__handle_options__STATE_VARIABLE_Globals_950_950);
            }
#line 1493 "handle_options.m"
          }
#line 1499 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1498 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1499 "handle_options.m"
    else
#line 1499 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 1499 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1499 "handle_options.m"
      else
#line 1499 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1505 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1504 "handle_options.m"
      {
#line 1504 "handle_options.m"
        {
#line 1504 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 436, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_950_950, &libs__handle_options__STATE_VARIABLE_Globals_954_954);
        }
#line 1504 "handle_options.m"
      }
#line 1505 "handle_options.m"
    else
#line 1504 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_954_954 = libs__handle_options__STATE_VARIABLE_Globals_950_950;
#line 1509 "handle_options.m"
    {
#line 1509 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 484, (MR_Integer) 560, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_954_954, &libs__handle_options__STATE_VARIABLE_Globals_959_959);
    }
#line 1512 "handle_options.m"
    {
#line 1512 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 195, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_964_964);
    }
#line 1517 "handle_options.m"
    {
#line 1517 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 207, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_964_964, &libs__handle_options__STATE_VARIABLE_Globals_969_969);
    }
#line 1527 "handle_options.m"
    {
#line 1527 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 124, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_969_969, &libs__handle_options__STATE_VARIABLE_Globals_974_974);
    }
#line 1528 "handle_options.m"
    {
#line 1528 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_974_974, (MR_Integer) 124, &libs__handle_options__ProfOptimized_108);
    }
#line 1532 "handle_options.m"
    if ((libs__handle_options__ProfOptimized_108 == (MR_Integer) 0))
#line 1530 "handle_options.m"
      {
#line 1531 "handle_options.m"
        {
#line 1531 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 333, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_974_974, &libs__handle_options__STATE_VARIABLE_Globals_980_980);
        }
#line 1530 "handle_options.m"
      }
#line 1532 "handle_options.m"
    else
#line 1533 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_980_980 = libs__handle_options__STATE_VARIABLE_Globals_974_974;
#line 1538 "handle_options.m"
    {
#line 1538 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_980_980, &libs__handle_options__STATE_VARIABLE_Globals_985_985);
    }
#line 1540 "handle_options.m"
    {
#line 1540 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_985_985, &libs__handle_options__STATE_VARIABLE_Globals_990_990);
    }
#line 1542 "handle_options.m"
    {
#line 1542 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_990_990, &libs__handle_options__STATE_VARIABLE_Globals_995_995);
    }
#line 1545 "handle_options.m"
    {
#line 1545 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_995_995, (MR_Integer) 210, &libs__handle_options__ExpComp_109);
    }
#line 1547 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_109, (MR_String) "") == 0);
#line 1549 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1547 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1000_1000 = libs__handle_options__STATE_VARIABLE_Globals_995_995;
#line 1549 "handle_options.m"
    else
#line 1550 "handle_options.m"
      {
#line 1550 "handle_options.m"
        {
#line 1550 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_995_995, &libs__handle_options__STATE_VARIABLE_Globals_1000_1000);
        }
#line 1550 "handle_options.m"
      }
#line 1554 "handle_options.m"
    {
#line 1554 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 182, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1000_1000, &libs__handle_options__STATE_VARIABLE_Globals_1005_1005);
    }
#line 1557 "handle_options.m"
    {
#line 1557 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 229, (MR_Integer) 231, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1005_1005, &libs__handle_options__STATE_VARIABLE_Globals_1010_1010);
    }
#line 1563 "handle_options.m"
    {
#line 1563 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 262, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1010_1010, &libs__handle_options__STATE_VARIABLE_Globals_1015_1015);
    }
#line 1564 "handle_options.m"
    {
#line 1564 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 262, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1015_1015, &libs__handle_options__STATE_VARIABLE_Globals_1020_1020);
    }
#line 1570 "handle_options.m"
    {
#line 1570 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 316, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1020_1020, &libs__handle_options__STATE_VARIABLE_Globals_1025_1025);
    }
#line 1575 "handle_options.m"
    {
#line 1575 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 122, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1025_1025, &libs__handle_options__STATE_VARIABLE_Globals_1030_1030);
    }
#line 1578 "handle_options.m"
    {
#line 1578 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 122, (MR_Integer) 118, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1030_1030, &libs__handle_options__STATE_VARIABLE_Globals_1035_1035);
    }
#line 1582 "handle_options.m"
    {
#line 1582 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 121, (MR_Integer) 118, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1035_1035, &libs__handle_options__STATE_VARIABLE_Globals_1040_1040);
    }
#line 1592 "handle_options.m"
    {
#line 1592 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1040_1040, (MR_Integer) 116, &libs__handle_options__TraceOptimized_110);
    }
#line 1593 "handle_options.m"
    {
#line 1593 "handle_options.m"
      libs__handle_options__V_1043_1043 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
    }
#line 1593 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_1043_1043 == (MR_Integer) 0);
#line 1688 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1637 "handle_options.m"
      {
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1102_1102;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__V_1105_1105;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1106_1106;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1110_1110;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1114_1114;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1118_1118;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1122_1122;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1126_1126;
#line 1637 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1130_1130;
#line 1683 "handle_options.m"
        MR_Word libs__handle_options__V_1132_1132;

#line 1635 "handle_options.m"
        if ((libs__handle_options__TraceOptimized_110 == (MR_Integer) 0))
#line 1595 "handle_options.m"
          {
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__V_1045_1045 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1046_1046;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1050_1050;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1054_1054;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1058_1058;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1062_1062;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1066_1066;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1074_1074;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1078_1078;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1082_1082;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1086_1086;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1090_1090;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1094_1094;
#line 1595 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1098_1098;

#line 1600 "handle_options.m"
            {
#line 1600 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1040_1040, &libs__handle_options__STATE_VARIABLE_Globals_1046_1046);
            }
#line 1601 "handle_options.m"
            {
#line 1601 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 350, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1046_1046, &libs__handle_options__STATE_VARIABLE_Globals_1050_1050);
            }
#line 1602 "handle_options.m"
            {
#line 1602 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1050_1050, &libs__handle_options__STATE_VARIABLE_Globals_1054_1054);
            }
#line 1603 "handle_options.m"
            {
#line 1603 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1054_1054, &libs__handle_options__STATE_VARIABLE_Globals_1058_1058);
            }
#line 1604 "handle_options.m"
            {
#line 1604 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1058_1058, &libs__handle_options__STATE_VARIABLE_Globals_1062_1062);
            }
#line 1606 "handle_options.m"
            {
#line 1606 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 388, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1062_1062, &libs__handle_options__STATE_VARIABLE_Globals_1066_1066);
            }
#line 1607 "handle_options.m"
            {
#line 1607 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1066_1066, &libs__handle_options__STATE_VARIABLE_Globals_1070_1070);
            }
#line 1609 "handle_options.m"
            {
#line 1609 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 349, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1070_1070, &libs__handle_options__STATE_VARIABLE_Globals_1074_1074);
            }
#line 1611 "handle_options.m"
            {
#line 1611 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 365, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1074_1074, &libs__handle_options__STATE_VARIABLE_Globals_1078_1078);
            }
#line 1613 "handle_options.m"
            {
#line 1613 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1078_1078, &libs__handle_options__STATE_VARIABLE_Globals_1082_1082);
            }
#line 1615 "handle_options.m"
            {
#line 1615 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 370, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1082_1082, &libs__handle_options__STATE_VARIABLE_Globals_1086_1086);
            }
#line 1617 "handle_options.m"
            {
#line 1617 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 384, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1086_1086, &libs__handle_options__STATE_VARIABLE_Globals_1090_1090);
            }
#line 1618 "handle_options.m"
            {
#line 1618 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 397, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1090_1090, &libs__handle_options__STATE_VARIABLE_Globals_1094_1094);
            }
#line 1619 "handle_options.m"
            {
#line 1619 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 398, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1094_1094, &libs__handle_options__STATE_VARIABLE_Globals_1098_1098);
            }
#line 1627 "handle_options.m"
            if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1628 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1627 "handle_options.m"
            else
#line 1627 "handle_options.m"
              if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1629 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1627 "handle_options.m"
              else
#line 1627 "handle_options.m"
                if ((libs__handle_options__Target_25 == (MR_Integer) 5))
#line 1632 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1627 "handle_options.m"
                else
#line 1627 "handle_options.m"
                  if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1625 "handle_options.m"
                    {
#line 1626 "handle_options.m"
                      {
#line 1626 "handle_options.m"
                        libs__globals__set_option_4_p_0((MR_Integer) 461, libs__handle_options__V_1045_1045, libs__handle_options__STATE_VARIABLE_Globals_1098_1098, &libs__handle_options__STATE_VARIABLE_Globals_1102_1102);
                      }
#line 1625 "handle_options.m"
                    }
#line 1627 "handle_options.m"
                  else
#line 1627 "handle_options.m"
                    if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 1630 "handle_options.m"
                      libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1627 "handle_options.m"
                    else
#line 1631 "handle_options.m"
                      libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1595 "handle_options.m"
          }
#line 1635 "handle_options.m"
        else
#line 1636 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1102_1102 = libs__handle_options__STATE_VARIABLE_Globals_1040_1040;
#line 1658 "handle_options.m"
        libs__handle_options__V_1105_1105 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1658 "handle_options.m"
        {
#line 1658 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 453, libs__handle_options__V_1105_1105, libs__handle_options__STATE_VARIABLE_Globals_1102_1102, &libs__handle_options__STATE_VARIABLE_Globals_1106_1106);
        }
#line 1663 "handle_options.m"
        {
#line 1663 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 367, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1106_1106, &libs__handle_options__STATE_VARIABLE_Globals_1110_1110);
        }
#line 1667 "handle_options.m"
        {
#line 1667 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 386, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1110_1110, &libs__handle_options__STATE_VARIABLE_Globals_1114_1114);
        }
#line 1671 "handle_options.m"
        {
#line 1671 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_1105_1105, libs__handle_options__STATE_VARIABLE_Globals_1114_1114, &libs__handle_options__STATE_VARIABLE_Globals_1118_1118);
        }
#line 1675 "handle_options.m"
        {
#line 1675 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1118_1118, &libs__handle_options__STATE_VARIABLE_Globals_1122_1122);
        }
#line 1676 "handle_options.m"
        {
#line 1676 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1122_1122, &libs__handle_options__STATE_VARIABLE_Globals_1126_1126);
        }
#line 1680 "handle_options.m"
        {
#line 1680 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_1105_1105, libs__handle_options__STATE_VARIABLE_Globals_1126_1126, &libs__handle_options__STATE_VARIABLE_Globals_1130_1130);
        }
#line 1683 "handle_options.m"
        {
#line 1683 "handle_options.m"
          libs__handle_options__V_1132_1132 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_30);
        }
#line 1683 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1132_1132 == (MR_Integer) 0);
#line 1685 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1684 "handle_options.m"
          {
#line 1684 "handle_options.m"
            {
#line 1684 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 125, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_1130_1130, &libs__handle_options__STATE_VARIABLE_Globals_1135_1135);
            }
#line 1684 "handle_options.m"
          }
#line 1685 "handle_options.m"
        else
#line 1684 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1135_1135 = libs__handle_options__STATE_VARIABLE_Globals_1130_1130;
#line 1637 "handle_options.m"
      }
#line 1688 "handle_options.m"
    else
#line 1691 "handle_options.m"
      {
#line 1691 "handle_options.m"
        {
#line 1691 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 125, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1040_1040, &libs__handle_options__STATE_VARIABLE_Globals_1135_1135);
        }
#line 1691 "handle_options.m"
      }
#line 1694 "handle_options.m"
    {
#line 1694 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1135_1135, &libs__handle_options__STATE_VARIABLE_Globals_1144_1144);
    }
#line 1695 "handle_options.m"
    {
#line 1695 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1144_1144, (MR_Integer) 191, &libs__handle_options__ProfileDeep_111);
    }
#line 1720 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_111 == (MR_Integer) 0))
#line 1721 "handle_options.m"
      {
#line 1721 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_1148_1148 = libs__handle_options__STATE_VARIABLE_Errors_890_890;
#line 1721 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1161_1161 = libs__handle_options__STATE_VARIABLE_Globals_1144_1144;
#line 1721 "handle_options.m"
      }
#line 1720 "handle_options.m"
    else
#line 1697 "handle_options.m"
      {
#line 1697 "handle_options.m"
        MR_Word libs__handle_options__LotsOfHOSpec_112;
#line 1697 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1153_1153;

#line 1699 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1699 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1700 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1703 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1700 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1148_1148 = libs__handle_options__STATE_VARIABLE_Errors_890_890;
#line 1703 "handle_options.m"
        else
#line 1704 "handle_options.m"
          {
#line 1704 "handle_options.m"
            {
#line 1704 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_890_890, &libs__handle_options__STATE_VARIABLE_Errors_1148_1148);
            }
#line 1704 "handle_options.m"
          }
#line 1707 "handle_options.m"
        {
#line 1707 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1144_1144, &libs__handle_options__STATE_VARIABLE_Globals_1153_1153);
        }
#line 1709 "handle_options.m"
        {
#line 1709 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1153_1153, (MR_Integer) 206, &libs__handle_options__LotsOfHOSpec_112);
        }
#line 1717 "handle_options.m"
        if ((libs__handle_options__LotsOfHOSpec_112 == (MR_Integer) 0))
#line 1718 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1161_1161 = libs__handle_options__STATE_VARIABLE_Globals_1153_1153;
#line 1717 "handle_options.m"
        else
#line 1712 "handle_options.m"
          {
#line 1712 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1158_1158;

#line 1714 "handle_options.m"
            {
#line 1714 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1153_1153, &libs__handle_options__STATE_VARIABLE_Globals_1158_1158);
            }
#line 1715 "handle_options.m"
            {
#line 1715 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 353, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1158_1158, &libs__handle_options__STATE_VARIABLE_Globals_1161_1161);
            }
#line 1712 "handle_options.m"
          }
#line 1697 "handle_options.m"
      }
#line 1724 "handle_options.m"
    {
#line 1724 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1161_1161, (MR_Integer) 208, &libs__handle_options__RecordTermSizesAsWords_114);
    }
#line 1726 "handle_options.m"
    {
#line 1726 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1161_1161, (MR_Integer) 209, &libs__handle_options__RecordTermSizesAsCells_115);
    }
#line 1729 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_114 == (MR_Integer) 1);
#line 1729 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1730 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_115 == (MR_Integer) 1);
#line 1734 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1732 "handle_options.m"
      {
#line 1732 "handle_options.m"
        {
#line 1732 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1148_1148, &libs__handle_options__STATE_VARIABLE_Errors_1166_1166);
        }
#line 1732 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1171_1171 = libs__handle_options__STATE_VARIABLE_Globals_1161_1161;
#line 1732 "handle_options.m"
      }
#line 1734 "handle_options.m"
    else
#line 1748 "handle_options.m"
      {
#line 1735 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_114 == (MR_Integer) 1);
#line 1736 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1736 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_115 == (MR_Integer) 1);
#line 1748 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1740 "handle_options.m"
          {
#line 1739 "handle_options.m"
            {
#line 1739 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1161_1161, &libs__handle_options__STATE_VARIABLE_Globals_1171_1171);
            }
#line 1745 "handle_options.m"
            if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 1746 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_1166_1166 = libs__handle_options__STATE_VARIABLE_Errors_1148_1148;
#line 1745 "handle_options.m"
            else
#line 1742 "handle_options.m"
              {
#line 1743 "handle_options.m"
                {
#line 1743 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1148_1148, &libs__handle_options__STATE_VARIABLE_Errors_1166_1166);
                }
#line 1742 "handle_options.m"
              }
#line 1740 "handle_options.m"
          }
#line 1748 "handle_options.m"
        else
#line 1749 "handle_options.m"
          {
#line 1749 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1171_1171 = libs__handle_options__STATE_VARIABLE_Globals_1161_1161;
#line 1749 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1166_1166 = libs__handle_options__STATE_VARIABLE_Errors_1148_1148;
#line 1749 "handle_options.m"
          }
#line 1748 "handle_options.m"
      }
#line 1754 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1754 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1754 "handle_options.m"
    else
#line 1754 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1755 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1754 "handle_options.m"
      else
#line 1754 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1754 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1753 "handle_options.m"
      {
#line 1753 "handle_options.m"
        MR_Word libs__handle_options__V_1177_1177;

#line 1753 "handle_options.m"
        {
#line 1753 "handle_options.m"
          libs__handle_options__V_1177_1177 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
        }
#line 1753 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1177_1177 == (MR_Integer) 1);
#line 1753 "handle_options.m"
      }
#line 1759 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1755 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1179_1179 = libs__handle_options__STATE_VARIABLE_Errors_1166_1166;
#line 1759 "handle_options.m"
    else
#line 1760 "handle_options.m"
      {
#line 1760 "handle_options.m"
        {
#line 1760 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1166_1166, &libs__handle_options__STATE_VARIABLE_Errors_1179_1179);
        }
#line 1760 "handle_options.m"
      }
#line 1766 "handle_options.m"
    {
#line 1766 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 490, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1171_1171, &libs__handle_options__STATE_VARIABLE_Globals_1183_1183);
    }
#line 1768 "handle_options.m"
    {
#line 1768 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 336, (MR_Integer) 366, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1183_1183, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
    }
#line 1785 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_111 == (MR_Integer) 0))
#line 1782 "handle_options.m"
      {
#line 1783 "handle_options.m"
        {
#line 1783 "handle_options.m"
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 333, (MR_Integer) 366, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1193_1193);
        }
#line 1782 "handle_options.m"
      }
#line 1785 "handle_options.m"
    else
#line 1786 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1193_1193 = libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 1791 "handle_options.m"
    {
#line 1791 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 388, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1193_1193, &libs__handle_options__STATE_VARIABLE_Globals_1198_1198);
    }
#line 1792 "handle_options.m"
    {
#line 1792 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 348, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1198_1198, &libs__handle_options__STATE_VARIABLE_Globals_1203_1203);
    }
#line 1794 "handle_options.m"
    {
#line 1794 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 157, (MR_Integer) 349, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1203_1203, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
    }
#line 1798 "handle_options.m"
    {
#line 1798 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1213_1213);
    }
#line 1801 "handle_options.m"
    {
#line 1801 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1213_1213, &libs__handle_options__STATE_VARIABLE_Globals_1218_1218);
    }
#line 1856 "handle_options.m"
    if ((libs__handle_options__GC_Method_26 == (MR_Integer) 6))
#line 1840 "handle_options.m"
      {
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1222_1222;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1230_1230;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1234_1234;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1238_1238;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1242_1242;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1246_1246;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1250_1250;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1254_1254;
#line 1840 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1258_1258;

#line 1841 "handle_options.m"
        {
#line 1841 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1218_1218, &libs__handle_options__STATE_VARIABLE_Globals_1222_1222);
        }
#line 1842 "handle_options.m"
        {
#line 1842 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1222_1222, &libs__handle_options__STATE_VARIABLE_Globals_1226_1226);
        }
#line 1843 "handle_options.m"
        {
#line 1843 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 453, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1226_1226, &libs__handle_options__STATE_VARIABLE_Globals_1230_1230);
        }
#line 1844 "handle_options.m"
        {
#line 1844 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 473, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1230_1230, &libs__handle_options__STATE_VARIABLE_Globals_1234_1234);
        }
#line 1845 "handle_options.m"
        {
#line 1845 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1234_1234, &libs__handle_options__STATE_VARIABLE_Globals_1238_1238);
        }
#line 1846 "handle_options.m"
        {
#line 1846 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1238_1238, &libs__handle_options__STATE_VARIABLE_Globals_1242_1242);
        }
#line 1847 "handle_options.m"
        {
#line 1847 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1242_1242, &libs__handle_options__STATE_VARIABLE_Globals_1246_1246);
        }
#line 1849 "handle_options.m"
        {
#line 1849 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1246_1246, &libs__handle_options__STATE_VARIABLE_Globals_1250_1250);
        }
#line 1851 "handle_options.m"
        {
#line 1851 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1250_1250, &libs__handle_options__STATE_VARIABLE_Globals_1254_1254);
        }
#line 1853 "handle_options.m"
        {
#line 1853 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1254_1254, &libs__handle_options__STATE_VARIABLE_Globals_1258_1258);
        }
#line 1854 "handle_options.m"
        {
#line 1854 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1258_1258, &libs__handle_options__STATE_VARIABLE_Globals_1262_1262);
        }
#line 1840 "handle_options.m"
      }
#line 1856 "handle_options.m"
    else
#line 1856 "handle_options.m"
      if ((libs__handle_options__GC_Method_26 == (MR_Integer) 0))
#line 1857 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1856 "handle_options.m"
      else
#line 1856 "handle_options.m"
        if ((libs__handle_options__GC_Method_26 == (MR_Integer) 2))
#line 1859 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1856 "handle_options.m"
        else
#line 1856 "handle_options.m"
          if ((libs__handle_options__GC_Method_26 == (MR_Integer) 3))
#line 1860 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1856 "handle_options.m"
          else
#line 1856 "handle_options.m"
            if ((libs__handle_options__GC_Method_26 == (MR_Integer) 4))
#line 1861 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1856 "handle_options.m"
            else
#line 1856 "handle_options.m"
              if ((libs__handle_options__GC_Method_26 == (MR_Integer) 5))
#line 1862 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1856 "handle_options.m"
              else
#line 1858 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1870 "handle_options.m"
    {
#line 1870 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1262_1262, (MR_Integer) 256, &libs__handle_options__PutNondetEnvOnHeap_116);
    }
#line 1884 "handle_options.m"
    {
#line 1884 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 263, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1262_1262, &libs__handle_options__STATE_VARIABLE_Globals_1272_1272);
    }
#line 1886 "handle_options.m"
    {
#line 1886 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1272_1272, &libs__handle_options__STATE_VARIABLE_Globals_1277_1277);
    }
#line 1893 "handle_options.m"
    {
#line 1893 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 471, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1277_1277, &libs__handle_options__STATE_VARIABLE_Globals_1282_1282);
    }
#line 1895 "handle_options.m"
    {
#line 1895 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 471, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1282_1282, &libs__handle_options__STATE_VARIABLE_Globals_1287_1287);
    }
#line 1899 "handle_options.m"
    {
#line 1899 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 469, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1287_1287, &libs__handle_options__STATE_VARIABLE_Globals_1292_1292);
    }
#line 1905 "handle_options.m"
    {
#line 1905 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 388, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1292_1292, &libs__handle_options__STATE_VARIABLE_Globals_1297_1297);
    }
#line 1907 "handle_options.m"
    {
#line 1907 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 348, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1297_1297, &libs__handle_options__STATE_VARIABLE_Globals_1302_1302);
    }
#line 1916 "handle_options.m"
    {
#line 1916 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 451, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1302_1302, &libs__handle_options__STATE_VARIABLE_Globals_1307_1307);
    }
#line 1923 "handle_options.m"
    {
#line 1923 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 451, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1307_1307, &libs__handle_options__STATE_VARIABLE_Globals_1312_1312);
    }
#line 1932 "handle_options.m"
    {
#line 1932 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 453, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1312_1312, &libs__handle_options__STATE_VARIABLE_Globals_1317_1317);
    }
#line 1941 "handle_options.m"
    {
#line 1941 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1317_1317, (MR_Integer) 281, &libs__handle_options__DisablePneg_117);
    }
#line 1943 "handle_options.m"
    {
#line 1943 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1317_1317, (MR_Integer) 282, &libs__handle_options__DisableCut_118);
    }
#line 1946 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1946 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1947 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_117 == (MR_Integer) 0);
#line 1951 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1949 "handle_options.m"
      {
#line 1949 "handle_options.m"
        {
#line 1949 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 283, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1317_1317, &libs__handle_options__STATE_VARIABLE_Globals_1323_1323);
        }
#line 1949 "handle_options.m"
      }
#line 1951 "handle_options.m"
    else
#line 1949 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1323_1323 = libs__handle_options__STATE_VARIABLE_Globals_1317_1317;
#line 1955 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1955 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1956 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_118 == (MR_Integer) 0);
#line 1960 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1958 "handle_options.m"
      {
#line 1958 "handle_options.m"
        {
#line 1958 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 284, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1323_1323, &libs__handle_options__STATE_VARIABLE_Globals_1327_1327);
        }
#line 1958 "handle_options.m"
      }
#line 1960 "handle_options.m"
    else
#line 1958 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1327_1327 = libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
#line 1966 "handle_options.m"
    {
#line 1966 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 140, &libs__handle_options__DumpHLDSStages_119);
    }
#line 1968 "handle_options.m"
    {
#line 1968 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 139, &libs__handle_options__DumpTraceStages_120);
    }
#line 1970 "handle_options.m"
    {
#line 1970 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 301, &libs__handle_options__ParallelLiveness_121);
    }
#line 1972 "handle_options.m"
    {
#line 1972 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 302, &libs__handle_options__ParallelCodeGen_122);
    }
#line 1975 "handle_options.m"
    {
#line 1975 "handle_options.m"
      MR_String libs__handle_options__V_123_123;
#line 1975 "handle_options.m"
      MR_Word libs__handle_options__V_124_124;

#line 1975 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_119)) == (MR_mktag((MR_Integer) 1)));
#line 1975 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1975 "handle_options.m"
        {
#line 1975 "handle_options.m"
          libs__handle_options__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_119, (MR_Integer) 0)));
#line 1975 "handle_options.m"
          libs__handle_options__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_119, (MR_Integer) 1)));
#line 1975 "handle_options.m"
        }
#line 1975 "handle_options.m"
    }
#line 1976 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1976 "handle_options.m"
      {
#line 1976 "handle_options.m"
        {
#line 1976 "handle_options.m"
          MR_String libs__handle_options__V_125_125;
#line 1976 "handle_options.m"
          MR_Word libs__handle_options__V_126_126;

#line 1976 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_120)) == (MR_mktag((MR_Integer) 1)));
#line 1976 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1976 "handle_options.m"
            {
#line 1976 "handle_options.m"
              libs__handle_options__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_120, (MR_Integer) 0)));
#line 1976 "handle_options.m"
              libs__handle_options__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_120, (MR_Integer) 1)));
#line 1976 "handle_options.m"
            }
#line 1976 "handle_options.m"
        }
#line 1976 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1976 "handle_options.m"
          {
#line 1977 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1976 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1976 "handle_options.m"
              {
#line 1978 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_121 == (MR_Integer) 1);
#line 1976 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1979 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_122 == (MR_Integer) 1);
#line 1976 "handle_options.m"
              }
#line 1976 "handle_options.m"
          }
#line 1976 "handle_options.m"
      }
#line 1983 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1982 "handle_options.m"
      {
#line 1982 "handle_options.m"
        {
#line 1982 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1327_1327, &libs__handle_options__STATE_VARIABLE_Globals_1335_1335);
        }
#line 1982 "handle_options.m"
      }
#line 1983 "handle_options.m"
    else
#line 1982 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1335_1335 = libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
#line 1989 "handle_options.m"
    {
#line 1989 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 360, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1335_1335, &libs__handle_options__STATE_VARIABLE_Globals_1340_1340);
    }
#line 1995 "handle_options.m"
    {
#line 1995 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 348, (MR_Integer) 349, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1340_1340, &libs__handle_options__STATE_VARIABLE_Globals_1345_1345);
    }
#line 2000 "handle_options.m"
    {
#line 2000 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 325, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1345_1345, &libs__handle_options__STATE_VARIABLE_Globals_1350_1350);
    }
#line 2002 "handle_options.m"
    {
#line 2002 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 351, (MR_Integer) 350, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1350_1350, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
    }
#line 2007 "handle_options.m"
    {
#line 2007 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 361, (MR_Integer) 367, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1360_1360);
    }
#line 2009 "handle_options.m"
    {
#line 2009 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 361, (MR_Integer) 345, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1360_1360, &libs__handle_options__STATE_VARIABLE_Globals_1365_1365);
    }
#line 2014 "handle_options.m"
    {
#line 2014 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 350, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1365_1365, &libs__handle_options__STATE_VARIABLE_Globals_1370_1370);
    }
#line 2020 "handle_options.m"
    {
#line 2020 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 393, (MR_Integer) 394, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1370_1370, &libs__handle_options__STATE_VARIABLE_Globals_1375_1375);
    }
#line 2025 "handle_options.m"
    {
#line 2025 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 91, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1375_1375, &libs__handle_options__STATE_VARIABLE_Globals_1380_1380);
    }
#line 2030 "handle_options.m"
    {
#line 2030 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 138, (MR_Integer) 91, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1380_1380, &libs__handle_options__STATE_VARIABLE_Globals_1385_1385);
    }
#line 2034 "handle_options.m"
    {
#line 2034 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 22, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1385_1385, &libs__handle_options__STATE_VARIABLE_Globals_1390_1390);
    }
#line 2037 "handle_options.m"
    {
#line 2037 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, (MR_Integer) 659, &libs__handle_options__FullArch_127);
    }
#line 2040 "handle_options.m"
    {
#line 2040 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, (MR_Integer) 551, &libs__handle_options__MaybeStdLibDir_128);
    }
#line 2058 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2059 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1406_1406 = libs__handle_options__STATE_VARIABLE_Globals_1390_1390;
#line 2058 "handle_options.m"
    else
#line 2043 "handle_options.m"
      {
#line 2043 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_129 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_128, (MR_Integer) 0)));
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_130;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_131;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_132;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__V_1394_1394;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1395_1395;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__V_1398_1398;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__V_1400_1400;
#line 2043 "handle_options.m"
        MR_String libs__handle_options__V_1401_1401;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__V_1405_1405;
#line 2043 "handle_options.m"
        MR_Word libs__handle_options__V_1407_1407;
#line 2043 "handle_options.m"
        MR_String libs__handle_options__V_1408_1408;

#line 2044 "handle_options.m"
        {
#line 2044 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, &libs__handle_options__OptionTable2_130);
        }
#line 2045 "handle_options.m"
        {
#line 2045 "handle_options.m"
          libs__handle_options__V_1394_1394 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_130, libs__handle_options__StdLibDir_129);
        }
#line 2045 "handle_options.m"
        {
#line 2045 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1394_1394, libs__handle_options__STATE_VARIABLE_Globals_1390_1390, &libs__handle_options__STATE_VARIABLE_Globals_1395_1395);
        }
#line 2049 "handle_options.m"
        {
#line 2049 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1395_1395, (MR_Integer) 541, &libs__handle_options__LinkLibDirs0_131);
        }
#line 2052 "handle_options.m"
        {
#line 2052 "handle_options.m"
          libs__handle_options__V_1401_1401 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_129, (MR_String) "lib");
        }
#line 2052 "handle_options.m"
        {
#line 2052 "handle_options.m"
          libs__handle_options__V_1400_1400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 0) = ((MR_Box) (libs__handle_options__V_1401_1401));
#line 2052 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_131));
#line 2052 "handle_options.m"
        }
#line 2051 "handle_options.m"
        {
#line 2051 "handle_options.m"
          libs__handle_options__V_1398_1398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2051 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 1) = ((MR_Box) (libs__handle_options__V_1400_1400));
#line 2051 "handle_options.m"
        }
#line 2051 "handle_options.m"
        {
#line 2051 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1398_1398, libs__handle_options__STATE_VARIABLE_Globals_1395_1395, &libs__handle_options__STATE_VARIABLE_Globals_1399_1399);
        }
#line 2054 "handle_options.m"
        {
#line 2054 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 542, &libs__handle_options__Rpath0_132);
        }
#line 2057 "handle_options.m"
        {
#line 2057 "handle_options.m"
          libs__handle_options__V_1408_1408 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_129, (MR_String) "lib");
        }
#line 2057 "handle_options.m"
        {
#line 2057 "handle_options.m"
          libs__handle_options__V_1407_1407 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1407_1407, 0) = ((MR_Box) (libs__handle_options__V_1408_1408));
#line 2057 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1407_1407, 1) = ((MR_Box) (libs__handle_options__Rpath0_132));
#line 2057 "handle_options.m"
        }
#line 2056 "handle_options.m"
        {
#line 2056 "handle_options.m"
          libs__handle_options__V_1405_1405 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2056 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 1) = ((MR_Box) (libs__handle_options__V_1407_1407));
#line 2056 "handle_options.m"
        }
#line 2056 "handle_options.m"
        {
#line 2056 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1405_1405, libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1406_1406);
        }
#line 2043 "handle_options.m"
      }
#line 2063 "handle_options.m"
    {
#line 2063 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 627, &libs__handle_options__MaybeConfDir_133);
    }
#line 2071 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2072 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1414_1414 = libs__handle_options__STATE_VARIABLE_Globals_1406_1406;
#line 2071 "handle_options.m"
    else
#line 2066 "handle_options.m"
      {
#line 2066 "handle_options.m"
        MR_String libs__handle_options__ConfDir_134 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_133, (MR_Integer) 0)));
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_135;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1413_1413;
#line 2066 "handle_options.m"
        MR_Word libs__handle_options__V_1415_1415;
#line 2066 "handle_options.m"
        MR_String libs__handle_options__V_1416_1416;

#line 2067 "handle_options.m"
        {
#line 2067 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 488, &libs__handle_options__CIncludeDirs0_135);
        }
#line 2070 "handle_options.m"
        {
#line 2070 "handle_options.m"
          libs__handle_options__V_1416_1416 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_134, (MR_String) "conf");
        }
#line 2070 "handle_options.m"
        {
#line 2070 "handle_options.m"
          libs__handle_options__V_1415_1415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2070 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1415_1415, 0) = ((MR_Box) (libs__handle_options__V_1416_1416));
#line 2070 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1415_1415, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_135));
#line 2070 "handle_options.m"
        }
#line 2069 "handle_options.m"
        {
#line 2069 "handle_options.m"
          libs__handle_options__V_1413_1413 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2069 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1413_1413, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2069 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1413_1413, 1) = ((MR_Box) (libs__handle_options__V_1415_1415));
#line 2069 "handle_options.m"
        }
#line 2069 "handle_options.m"
        {
#line 2069 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1413_1413, libs__handle_options__STATE_VARIABLE_Globals_1406_1406, &libs__handle_options__STATE_VARIABLE_Globals_1414_1414);
        }
#line 2066 "handle_options.m"
      }
#line 2076 "handle_options.m"
    {
#line 2076 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1414_1414, (MR_Integer) 638, &libs__handle_options__ConfigFile_136);
    }
#line 2079 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_136)) == (MR_mktag((MR_Integer) 1)));
#line 2079 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2079 "handle_options.m"
      {
#line 2079 "handle_options.m"
        libs__handle_options__V_1419_1419 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_136, (MR_Integer) 0)));
#line 2079 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1419_1419, (MR_String) "") == 0);
#line 2079 "handle_options.m"
      }
#line 2088 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2084 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2085 "handle_options.m"
        {
#line 2086 "handle_options.m"
          {
#line 2086 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[202]), libs__handle_options__STATE_VARIABLE_Globals_1414_1414, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
          }
#line 2085 "handle_options.m"
        }
#line 2084 "handle_options.m"
      else
#line 2081 "handle_options.m"
        {
#line 2081 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_137 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_133, (MR_Integer) 0)));
#line 2081 "handle_options.m"
          MR_Word libs__handle_options__V_1425_1425;
#line 2081 "handle_options.m"
          MR_Word libs__handle_options__V_1427_1427;
#line 2081 "handle_options.m"
          MR_String libs__handle_options__V_1428_1428;
#line 2081 "handle_options.m"
          MR_String libs__handle_options__V_1429_1429;

#line 2083 "handle_options.m"
          {
#line 2083 "handle_options.m"
            libs__handle_options__V_1429_1429 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_137, (MR_String) "conf");
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__handle_options__V_1428_1428 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1429_1429, (MR_String) "Mercury.config");
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__handle_options__V_1427_1427 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1427_1427, 0) = ((MR_Box) (libs__handle_options__V_1428_1428));
#line 2082 "handle_options.m"
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__handle_options__V_1425_1425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2082 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 1) = ((MR_Box) (libs__handle_options__V_1427_1427));
#line 2082 "handle_options.m"
          }
#line 2082 "handle_options.m"
          {
#line 2082 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 638, libs__handle_options__V_1425_1425, libs__handle_options__STATE_VARIABLE_Globals_1414_1414, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
          }
#line 2081 "handle_options.m"
        }
#line 2088 "handle_options.m"
    else
#line 2086 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1426_1426 = libs__handle_options__STATE_VARIABLE_Globals_1414_1414;
#line 2095 "handle_options.m"
    {
#line 2095 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 545, &libs__handle_options__MercuryLibDirs_138);
    }
#line 2097 "handle_options.m"
    {
#line 2097 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__GradeString_139);
    }
#line 2147 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2148 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1483_1483 = libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 2147 "handle_options.m"
    else
#line 2099 "handle_options.m"
      {
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1660_1660 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_142;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_144;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__Rpath_145;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_146;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_147;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_148;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_149;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_150;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_151;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_152;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1433_1433;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1440_1440;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1441_1441;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1442_1442;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1445_1445;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1446_1446;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1447_1447;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1448_1448;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1457_1457;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1458_1458;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1459_1459;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1462_1462;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1463_1463;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1464_1464;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1465_1465;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1472_1472;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1473_1473;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1474_1474;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1475_1475;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1482_1482;
#line 2099 "handle_options.m"
        MR_Word libs__handle_options__V_1484_1484;

#line 2100 "handle_options.m"
        {
#line 2100 "handle_options.m"
          libs__handle_options__V_1433_1433 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2100 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2100 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_1));
#line 2100 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2100 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2100 "handle_options.m"
        }
#line 2100 "handle_options.m"
        {
#line 2100 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_142 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1433_1433, libs__handle_options__MercuryLibDirs_138);
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 541, &libs__handle_options__LinkLibDirs1_144);
        }
#line 2108 "handle_options.m"
        {
#line 2108 "handle_options.m"
          libs__handle_options__V_1442_1442 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__LinkLibDirs1_144, libs__handle_options__ExtraLinkLibDirs_142);
        }
#line 2107 "handle_options.m"
        {
#line 2107 "handle_options.m"
          libs__handle_options__V_1440_1440 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2107 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1440_1440, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2107 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1440_1440, 1) = ((MR_Box) (libs__handle_options__V_1442_1442));
#line 2107 "handle_options.m"
        }
#line 2107 "handle_options.m"
        {
#line 2107 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1440_1440, libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__STATE_VARIABLE_Globals_1441_1441);
        }
#line 2110 "handle_options.m"
        {
#line 2110 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1441_1441, (MR_Integer) 542, &libs__handle_options__Rpath_145);
        }
#line 2113 "handle_options.m"
        {
#line 2113 "handle_options.m"
          libs__handle_options__V_1447_1447 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__Rpath_145, libs__handle_options__ExtraLinkLibDirs_142);
        }
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__handle_options__V_1445_1445 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2112 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1445_1445, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2112 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1445_1445, 1) = ((MR_Box) (libs__handle_options__V_1447_1447));
#line 2112 "handle_options.m"
        }
#line 2112 "handle_options.m"
        {
#line 2112 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 542, libs__handle_options__V_1445_1445, libs__handle_options__STATE_VARIABLE_Globals_1441_1441, &libs__handle_options__STATE_VARIABLE_Globals_1446_1446);
        }
#line 2115 "handle_options.m"
        {
#line 2115 "handle_options.m"
          libs__handle_options__V_1448_1448 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2115 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2115 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_2));
#line 2115 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2115 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2115 "handle_options.m"
        }
#line 2115 "handle_options.m"
        {
#line 2115 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_146 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1448_1448, libs__handle_options__MercuryLibDirs_138);
        }
#line 2119 "handle_options.m"
        {
#line 2119 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1446_1446, (MR_Integer) 488, &libs__handle_options__CIncludeDirs_147);
        }
#line 2122 "handle_options.m"
        {
#line 2122 "handle_options.m"
          libs__handle_options__V_1459_1459 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ExtraIncludeDirs_146, libs__handle_options__CIncludeDirs_147);
        }
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__handle_options__V_1457_1457 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 1) = ((MR_Box) (libs__handle_options__V_1459_1459));
#line 2121 "handle_options.m"
        }
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1457_1457, libs__handle_options__STATE_VARIABLE_Globals_1446_1446, &libs__handle_options__STATE_VARIABLE_Globals_1458_1458);
        }
#line 2123 "handle_options.m"
        {
#line 2123 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1458_1458, (MR_Integer) 532, &libs__handle_options__ErlangIncludeDirs_148);
        }
#line 2126 "handle_options.m"
        {
#line 2126 "handle_options.m"
          libs__handle_options__V_1464_1464 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ExtraIncludeDirs_146, libs__handle_options__ErlangIncludeDirs_148);
        }
#line 2125 "handle_options.m"
        {
#line 2125 "handle_options.m"
          libs__handle_options__V_1462_1462 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2125 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1462_1462, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2125 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1462_1462, 1) = ((MR_Box) (libs__handle_options__V_1464_1464));
#line 2125 "handle_options.m"
        }
#line 2125 "handle_options.m"
        {
#line 2125 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1462_1462, libs__handle_options__STATE_VARIABLE_Globals_1458_1458, &libs__handle_options__STATE_VARIABLE_Globals_1463_1463);
        }
#line 2128 "handle_options.m"
        {
#line 2128 "handle_options.m"
          libs__handle_options__V_1465_1465 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2128 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2128 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_3));
#line 2128 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2128 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2128 "handle_options.m"
        }
#line 2128 "handle_options.m"
        {
#line 2128 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_149 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1465_1465, libs__handle_options__MercuryLibDirs_138);
        }
#line 2133 "handle_options.m"
        {
#line 2133 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1463_1463, (MR_Integer) 643, &libs__handle_options__IntermodDirs0_150);
        }
#line 2136 "handle_options.m"
        {
#line 2136 "handle_options.m"
          libs__handle_options__V_1474_1474 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ExtraIntermodDirs_149, libs__handle_options__IntermodDirs0_150);
        }
#line 2135 "handle_options.m"
        {
#line 2135 "handle_options.m"
          libs__handle_options__V_1472_1472 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2135 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1472_1472, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2135 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1472_1472, 1) = ((MR_Box) (libs__handle_options__V_1474_1474));
#line 2135 "handle_options.m"
        }
#line 2135 "handle_options.m"
        {
#line 2135 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 643, libs__handle_options__V_1472_1472, libs__handle_options__STATE_VARIABLE_Globals_1463_1463, &libs__handle_options__STATE_VARIABLE_Globals_1473_1473);
        }
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__handle_options__V_1475_1475 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2138 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2138 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_4));
#line 2138 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2138 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2138 "handle_options.m"
        }
#line 2138 "handle_options.m"
        {
#line 2138 "handle_options.m"
          libs__handle_options__ExtraInitDirs_151 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1475_1475, libs__handle_options__MercuryLibDirs_138);
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1473_1473, (MR_Integer) 553, &libs__handle_options__InitDirs1_152);
        }
#line 2146 "handle_options.m"
        {
#line 2146 "handle_options.m"
          libs__handle_options__V_1484_1484 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__InitDirs1_152, libs__handle_options__ExtraInitDirs_151);
        }
#line 2145 "handle_options.m"
        {
#line 2145 "handle_options.m"
          libs__handle_options__V_1482_1482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2145 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2145 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 1) = ((MR_Box) (libs__handle_options__V_1484_1484));
#line 2145 "handle_options.m"
        }
#line 2145 "handle_options.m"
        {
#line 2145 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 553, libs__handle_options__V_1482_1482, libs__handle_options__STATE_VARIABLE_Globals_1473_1473, &libs__handle_options__STATE_VARIABLE_Globals_1483_1483);
        }
#line 2099 "handle_options.m"
      }
#line 2154 "handle_options.m"
    {
#line 2154 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 644, &libs__handle_options__UseSearchDirs_153);
    }
#line 2164 "handle_options.m"
    if ((libs__handle_options__UseSearchDirs_153 == (MR_Integer) 0))
#line 2165 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1490_1490 = libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 2164 "handle_options.m"
    else
#line 2157 "handle_options.m"
      {
#line 2157 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs1_154;
#line 2157 "handle_options.m"
        MR_Word libs__handle_options__SearchDirs_155;
#line 2157 "handle_options.m"
        MR_Word libs__handle_options__V_1489_1489;
#line 2157 "handle_options.m"
        MR_Word libs__handle_options__V_1491_1491;

#line 2158 "handle_options.m"
        {
#line 2158 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 643, &libs__handle_options__IntermodDirs1_154);
        }
#line 2160 "handle_options.m"
        {
#line 2160 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 642, &libs__handle_options__SearchDirs_155);
        }
#line 2163 "handle_options.m"
        {
#line 2163 "handle_options.m"
          libs__handle_options__V_1491_1491 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_154, libs__handle_options__SearchDirs_155);
        }
#line 2162 "handle_options.m"
        {
#line 2162 "handle_options.m"
          libs__handle_options__V_1489_1489 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1489_1489, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2162 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1489_1489, 1) = ((MR_Box) (libs__handle_options__V_1491_1491));
#line 2162 "handle_options.m"
        }
#line 2162 "handle_options.m"
        {
#line 2162 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 643, libs__handle_options__V_1489_1489, libs__handle_options__STATE_VARIABLE_Globals_1483_1483, &libs__handle_options__STATE_VARIABLE_Globals_1490_1490);
        }
#line 2157 "handle_options.m"
      }
#line 2168 "handle_options.m"
    {
#line 2168 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 641, &libs__handle_options__UseGradeSubdirs_156);
    }
#line 2170 "handle_options.m"
    {
#line 2170 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 547, &libs__handle_options__SearchLibFilesDirs_157);
    }
#line 2172 "handle_options.m"
    {
#line 2172 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 643, &libs__handle_options__IntermodDirs2_158);
    }
#line 2174 "handle_options.m"
    {
#line 2174 "handle_options.m"
      libs__handle_options__ToGradeSubdir_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2174 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2174 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_5));
#line 2174 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2174 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 3) = ((MR_Box) (libs__handle_options__FullArch_127));
#line 2174 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 4) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2174 "handle_options.m"
    }
#line 13441 "libs.handle_options.c"
    if ((libs__handle_options__UseGradeSubdirs_156 == (MR_Integer) 0))
#line 13443 "libs.handle_options.c"
      {
#line 13445 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1669_1669;
#line 13447 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_163;
#line 13449 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_164;
#line 13451 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_165;
#line 13453 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1510_1510;

#line 2195 "handle_options.m"
        {
#line 2195 "handle_options.m"
          libs__handle_options__IntermodDirs3_163 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__IntermodDirs2_158);
        }
#line 2197 "handle_options.m"
        {
#line 2197 "handle_options.m"
          libs__handle_options__V_1510_1510 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1510_1510, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1510_1510, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_163));
#line 2197 "handle_options.m"
        }
#line 2197 "handle_options.m"
        {
#line 2197 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 643, libs__handle_options__V_1510_1510, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1511_1511);
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 541, &libs__handle_options__LinkLibDirs2_164);
        }
#line 2202 "handle_options.m"
        {
#line 2202 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 553, &libs__handle_options__InitDirs2_165);
        }
#line 13486 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1669_1669 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2220 "handle_options.m"
        {
#line 2220 "handle_options.m"
          libs__handle_options__LinkLibDirs_168 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__LinkLibDirs2_164);
        }
#line 2221 "handle_options.m"
        {
#line 2221 "handle_options.m"
          libs__handle_options__InitDirs_171 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__InitDirs2_165);
        }
#line 13498 "libs.handle_options.c"
      }
#line 13500 "libs.handle_options.c"
    else
#line 13502 "libs.handle_options.c"
      {
#line 13504 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1662_1662;
#line 13506 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1668_1668;
#line 13508 "libs.handle_options.c"
        MR_String libs__handle_options__GradeSubdir_161;
#line 13510 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_162;
#line 13512 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeLibDir_166;
#line 13514 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeLibDirs_167;
#line 13516 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeInitDir_169;
#line 13518 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeInitDirs_170;
#line 13520 "libs.handle_options.c"
        MR_String libs__handle_options__V_1500_1500;
#line 13522 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1502_1502;
#line 13524 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1504_1504;
#line 13526 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1505_1505;
#line 13528 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1506_1506;
#line 13530 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1507_1507;
#line 13532 "libs.handle_options.c"
        MR_String libs__handle_options__V_1508_1508;
#line 13534 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_6077;
#line 13536 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_6078;
#line 13538 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_6079;
#line 13540 "libs.handle_options.c"
        MR_Word libs__handle_options__V_6080_6080;

#line 2185 "handle_options.m"
        {
#line 2185 "handle_options.m"
          libs__handle_options__V_1500_1500 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_139);
        }
#line 2185 "handle_options.m"
        {
#line 2185 "handle_options.m"
          libs__handle_options__GradeSubdir_161 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1500_1500, libs__handle_options__FullArch_127);
        }
#line 13553 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1662_1662 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2189 "handle_options.m"
        {
#line 2189 "handle_options.m"
          libs__handle_options__SearchLibFilesGradeSubdirs_162 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__ToGradeSubdir_159, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2191 "handle_options.m"
        {
#line 2191 "handle_options.m"
          libs__handle_options__V_1502_1502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1502_1502, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_161));
#line 2191 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1502_1502, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2191 "handle_options.m"
        }
#line 2192 "handle_options.m"
        {
#line 2192 "handle_options.m"
          libs__handle_options__V_1508_1508 = mercury__dir__this_directory_0_f_0();
        }
#line 2192 "handle_options.m"
        {
#line 2192 "handle_options.m"
          libs__handle_options__V_1507_1507 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_6));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 3) = ((MR_Box) (libs__handle_options__V_1508_1508));
#line 2192 "handle_options.m"
        }
#line 2192 "handle_options.m"
        {
#line 2192 "handle_options.m"
          libs__handle_options__V_1506_1506 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_7));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2192 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 3) = ((MR_Box) (libs__handle_options__V_1507_1507));
#line 2192 "handle_options.m"
        }
#line 2191 "handle_options.m"
        {
#line 2191 "handle_options.m"
          libs__handle_options__V_1505_1505 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__V_1506_1506, libs__handle_options__IntermodDirs2_158);
        }
#line 2191 "handle_options.m"
        {
#line 2191 "handle_options.m"
          libs__handle_options__V_1504_1504 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__SearchLibFilesGradeSubdirs_162, libs__handle_options__V_1505_1505);
        }
#line 2191 "handle_options.m"
        {
#line 2191 "handle_options.m"
          libs__handle_options__IntermodDirs3_6077 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1662_1662, libs__handle_options__V_1502_1502, libs__handle_options__V_1504_1504);
        }
#line 2197 "handle_options.m"
        {
#line 2197 "handle_options.m"
          libs__handle_options__V_6080_6080 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6080_6080, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6080_6080, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6077));
#line 2197 "handle_options.m"
        }
#line 2197 "handle_options.m"
        {
#line 2197 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 643, libs__handle_options__V_6080_6080, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1511_1511);
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 541, &libs__handle_options__LinkLibDirs2_6078);
        }
#line 2202 "handle_options.m"
        {
#line 2202 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 553, &libs__handle_options__InitDirs2_6079);
        }
#line 2210 "handle_options.m"
        {
#line 2210 "handle_options.m"
          libs__handle_options__ToGradeLibDir_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2210 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2210 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_8));
#line 2210 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2210 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2210 "handle_options.m"
        }
#line 13657 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1668_1668 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2211 "handle_options.m"
        {
#line 2211 "handle_options.m"
          libs__handle_options__SearchGradeLibDirs_167 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__ToGradeLibDir_166, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2212 "handle_options.m"
        {
#line 2212 "handle_options.m"
          libs__handle_options__LinkLibDirs_168 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__SearchGradeLibDirs_167, libs__handle_options__LinkLibDirs2_6078);
        }
#line 2214 "handle_options.m"
        {
#line 2214 "handle_options.m"
          libs__handle_options__ToGradeInitDir_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2214 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2214 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_9));
#line 2214 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2214 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2214 "handle_options.m"
        }
#line 2216 "handle_options.m"
        {
#line 2216 "handle_options.m"
          libs__handle_options__SearchGradeInitDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__ToGradeInitDir_169, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2217 "handle_options.m"
        {
#line 2217 "handle_options.m"
          libs__handle_options__InitDirs_171 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__SearchGradeInitDirs_170, libs__handle_options__InitDirs2_6079);
        }
#line 13693 "libs.handle_options.c"
      }
#line 2223 "handle_options.m"
    {
#line 2223 "handle_options.m"
      libs__handle_options__V_1527_1527 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1527_1527, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2223 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1527_1527, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_168));
#line 2223 "handle_options.m"
    }
#line 2223 "handle_options.m"
    {
#line 2223 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1527_1527, libs__handle_options__STATE_VARIABLE_Globals_1511_1511, &libs__handle_options__STATE_VARIABLE_Globals_1528_1528);
    }
#line 2225 "handle_options.m"
    {
#line 2225 "handle_options.m"
      libs__handle_options__V_1530_1530 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1530_1530, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2225 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1530_1530, 1) = ((MR_Box) (libs__handle_options__InitDirs_171));
#line 2225 "handle_options.m"
    }
#line 2225 "handle_options.m"
    {
#line 2225 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 553, libs__handle_options__V_1530_1530, libs__handle_options__STATE_VARIABLE_Globals_1528_1528, &libs__handle_options__STATE_VARIABLE_Globals_1531_1531);
    }
#line 2232 "handle_options.m"
    {
#line 2232 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1531_1531, (MR_Integer) 640, &libs__handle_options__UseSubdirs_172);
    }
#line 2240 "handle_options.m"
    if ((libs__handle_options__UseGradeSubdirs_156 == (MR_Integer) 0))
#line 2241 "handle_options.m"
      {
#line 13734 "libs.handle_options.c"
        libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_172 == (MR_Integer) 1);
#line 2241 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2241 "handle_options.m"
          {
#line 2244 "handle_options.m"
            libs__handle_options__ToMihsSubdir_173 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2245 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_174 = (MR_Word) &libs__handle_options_scalar_common_1[16];
#line 2245 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2241 "handle_options.m"
          }
#line 2241 "handle_options.m"
      }
#line 2240 "handle_options.m"
    else
#line 2235 "handle_options.m"
      {
#line 2236 "handle_options.m"
        {
#line 2236 "handle_options.m"
          libs__handle_options__ToMihsSubdir_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_12));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2236 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2236 "handle_options.m"
        }
#line 2238 "handle_options.m"
        {
#line 2238 "handle_options.m"
          libs__handle_options__ToHrlsSubdir_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2238 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2238 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_13));
#line 2238 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2238 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2238 "handle_options.m"
        }
#line 2235 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2235 "handle_options.m"
      }
#line 2267 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2253 "handle_options.m"
      {
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1670_1670;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_175;
#line 2253 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_176;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_177;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_178;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_179;
#line 2253 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_180;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_181;
#line 2253 "handle_options.m"
        MR_String libs__handle_options__V_1556_1556;
#line 2253 "handle_options.m"
        MR_String libs__handle_options__V_1557_1557;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__V_1558_1558;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__V_1559_1559;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__V_1561_1561;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
#line 2253 "handle_options.m"
        MR_String libs__handle_options__V_1564_1564;
#line 2253 "handle_options.m"
        MR_Word libs__handle_options__V_1566_1566;
#line 2254 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2254 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_176;
#line 2263 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2263 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_180;

#line 2252 "handle_options.m"
        {
#line 2252 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1531_1531, (MR_Integer) 488, &libs__handle_options__CIncludeDirs1_175);
        }
#line 2254 "handle_options.m"
        {
#line 2254 "handle_options.m"
          libs__handle_options__V_1556_1556 = mercury__dir__this_directory_0_f_0();
        }
#line 2254 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, (MR_Integer) 1)));
#line 2254 "handle_options.m"
        {
#line 2254 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_176 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_173), ((MR_Box) (libs__handle_options__V_1556_1556)));
        }
#line 2254 "handle_options.m"
        libs__handle_options__MihsSubdir_176 = ((MR_String) libs__handle_options__conv12_MihsSubdir_176);
#line 13850 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1670_1670 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2255 "handle_options.m"
        {
#line 2255 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_177 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1670_1670, libs__handle_options__TypeCtorInfo_1670_1670, libs__handle_options__ToMihsSubdir_173, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2256 "handle_options.m"
        {
#line 2256 "handle_options.m"
          libs__handle_options__V_1557_1557 = mercury__dir__this_directory_0_f_0();
        }
#line 2256 "handle_options.m"
        {
#line 2256 "handle_options.m"
          libs__handle_options__V_1559_1559 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1670_1670, libs__handle_options__SearchLibMihsSubdirs_177, libs__handle_options__CIncludeDirs1_175);
        }
#line 2256 "handle_options.m"
        {
#line 2256 "handle_options.m"
          libs__handle_options__V_1558_1558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2256 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1558_1558, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_176));
#line 2256 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1558_1558, 1) = ((MR_Box) (libs__handle_options__V_1559_1559));
#line 2256 "handle_options.m"
        }
#line 2256 "handle_options.m"
        {
#line 2256 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2256 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_178, 0) = ((MR_Box) (libs__handle_options__V_1557_1557));
#line 2256 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_178, 1) = ((MR_Box) (libs__handle_options__V_1558_1558));
#line 2256 "handle_options.m"
        }
#line 2258 "handle_options.m"
        {
#line 2258 "handle_options.m"
          libs__handle_options__V_1561_1561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2258 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2258 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_178));
#line 2258 "handle_options.m"
        }
#line 2258 "handle_options.m"
        {
#line 2258 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 488, libs__handle_options__V_1561_1561, libs__handle_options__STATE_VARIABLE_Globals_1531_1531, &libs__handle_options__STATE_VARIABLE_Globals_1562_1562);
        }
#line 2261 "handle_options.m"
        {
#line 2261 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 532, &libs__handle_options__ErlangIncludeDirs1_179);
        }
#line 2263 "handle_options.m"
        {
#line 2263 "handle_options.m"
          libs__handle_options__V_1564_1564 = mercury__dir__this_directory_0_f_0();
        }
#line 2263 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, (MR_Integer) 1)));
#line 2263 "handle_options.m"
        {
#line 2263 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_180 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_174), ((MR_Box) (libs__handle_options__V_1564_1564)));
        }
#line 2263 "handle_options.m"
        libs__handle_options__HrlsSubdir_180 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_180);
#line 2264 "handle_options.m"
        {
#line 2264 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_181, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_180));
#line 2264 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_181, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_179));
#line 2264 "handle_options.m"
        }
#line 2265 "handle_options.m"
        {
#line 2265 "handle_options.m"
          libs__handle_options__V_1566_1566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2265 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_181));
#line 2265 "handle_options.m"
        }
#line 2265 "handle_options.m"
        {
#line 2265 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1566_1566, libs__handle_options__STATE_VARIABLE_Globals_1562_1562, &libs__handle_options__STATE_VARIABLE_Globals_1567_1567);
        }
#line 2253 "handle_options.m"
      }
#line 2267 "handle_options.m"
    else
#line 2265 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1567_1567 = libs__handle_options__STATE_VARIABLE_Globals_1531_1531;
#line 2273 "handle_options.m"
    {
#line 2273 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 327, (MR_Integer) 12, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1567_1567, &libs__handle_options__STATE_VARIABLE_Globals_1571_1571);
    }
#line 1873 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1873 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1873 "handle_options.m"
      {
#line 1874 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_26 == (MR_Integer) 6);
#line 1873 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1875 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_116 == (MR_Integer) 1);
#line 1873 "handle_options.m"
      }
#line 13971 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 13973 "libs.handle_options.c"
      {
#line 13975 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1266_1266;

#line 1877 "handle_options.m"
        {
#line 1877 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1266_1266);
        }
#line 2286 "handle_options.m"
        {
#line 2286 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 454, libs__handle_options__V_271_271, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1266_1266, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
        }
#line 13988 "libs.handle_options.c"
      }
#line 13990 "libs.handle_options.c"
    else
#line 2284 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2279 "handle_options.m"
        {
#line 2280 "handle_options.m"
          {
#line 2280 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 465, libs__handle_options__V_498_498, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
          }
#line 2279 "handle_options.m"
        }
#line 2284 "handle_options.m"
      else
#line 2285 "handle_options.m"
        {
#line 2286 "handle_options.m"
          {
#line 2286 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 454, libs__handle_options__V_271_271, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
          }
#line 2285 "handle_options.m"
        }
#line 2290 "handle_options.m"
    {
#line 2290 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 96, libs__handle_options__V_498_498, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1583_1583, &libs__handle_options__STATE_VARIABLE_Errors_1591_1591);
    }
#line 2299 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 2297 "handle_options.m"
      {
#line 2298 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[203]);
#line 2298 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2297 "handle_options.m"
      }
#line 2299 "handle_options.m"
    else
#line 2299 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 2304 "handle_options.m"
        {
#line 2305 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[9]);
#line 2305 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2304 "handle_options.m"
        }
#line 2299 "handle_options.m"
      else
#line 2299 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 5))
#line 2313 "handle_options.m"
          {
#line 2313 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1599_1599;

#line 2314 "handle_options.m"
            libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[204]);
#line 2315 "handle_options.m"
            {
#line 2315 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1571_1571, &libs__handle_options__STATE_VARIABLE_Globals_1599_1599);
            }
#line 2316 "handle_options.m"
            {
#line 2316 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1599_1599, &libs__handle_options__STATE_VARIABLE_Globals_1617_1617);
            }
#line 2313 "handle_options.m"
          }
#line 2299 "handle_options.m"
        else
#line 2299 "handle_options.m"
          if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 2300 "handle_options.m"
            {
#line 2301 "handle_options.m"
              libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[10]);
#line 2302 "handle_options.m"
              {
#line 2302 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1571_1571, &libs__handle_options__STATE_VARIABLE_Globals_1617_1617);
              }
#line 2300 "handle_options.m"
            }
#line 2299 "handle_options.m"
          else
#line 2299 "handle_options.m"
            if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 2307 "handle_options.m"
              {
#line 2308 "handle_options.m"
                libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[205]);
#line 2308 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2307 "handle_options.m"
              }
#line 2299 "handle_options.m"
            else
#line 2310 "handle_options.m"
              {
#line 2311 "handle_options.m"
                libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[203]);
#line 2311 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1617_1617 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2310 "handle_options.m"
              }
#line 2320 "handle_options.m"
    {
#line 2320 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1617_1617, (MR_Integer) 261, &libs__handle_options__CurrentBackendForeignLanguage_183);
    }
#line 2326 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2323 "handle_options.m"
      {
#line 2323 "handle_options.m"
        MR_Word libs__handle_options__V_1623_1623;

#line 2324 "handle_options.m"
        {
#line 2324 "handle_options.m"
          libs__handle_options__V_1623_1623 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1623_1623, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2324 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1623_1623, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_182));
#line 2324 "handle_options.m"
        }
#line 2324 "handle_options.m"
        {
#line 2324 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_1623_1623, libs__handle_options__STATE_VARIABLE_Globals_1617_1617, &libs__handle_options__STATE_VARIABLE_Globals_1624_1624);
        }
#line 2323 "handle_options.m"
      }
#line 2326 "handle_options.m"
    else
#line 2327 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1624_1624 = libs__handle_options__STATE_VARIABLE_Globals_1617_1617;
#line 2330 "handle_options.m"
    {
#line 2330 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1624_1624, (MR_Integer) 315, &libs__handle_options__CompareSpec_186);
    }
#line 2332 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_186 < (MR_Integer) 0);
#line 2344 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2340 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2338 "handle_options.m"
        {
#line 2339 "handle_options.m"
          {
#line 2339 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1624_1624, &libs__handle_options__STATE_VARIABLE_Globals_1633_1633);
          }
#line 2338 "handle_options.m"
        }
#line 2340 "handle_options.m"
      else
#line 2341 "handle_options.m"
        {
#line 2342 "handle_options.m"
          {
#line 2342 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_1624_1624, &libs__handle_options__STATE_VARIABLE_Globals_1633_1633);
          }
#line 2341 "handle_options.m"
        }
#line 2344 "handle_options.m"
    else
#line 2342 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1633_1633 = libs__handle_options__STATE_VARIABLE_Globals_1624_1624;
#line 2351 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 2351 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2351 "handle_options.m"
      {
#line 2357 "handle_options.m"
        if ((libs__handle_options__TagsMethod_56 == (MR_Integer) 2))
#line 2357 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2357 "handle_options.m"
        else
#line 2357 "handle_options.m"
          if ((libs__handle_options__TagsMethod_56 == (MR_Integer) 1))
#line 2356 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2357 "handle_options.m"
          else
#line 2357 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2351 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2351 "handle_options.m"
          {
#line 2359 "handle_options.m"
            libs__handle_options__V_1635_1635 = (MR_Integer) 2;
#line 2359 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_55 >= libs__handle_options__V_1635_1635);
#line 2351 "handle_options.m"
          }
#line 2351 "handle_options.m"
      }
#line 2363 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2361 "handle_options.m"
      {
#line 2361 "handle_options.m"
        {
#line 2361 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1633_1633, &libs__handle_options__STATE_VARIABLE_Globals_1638_1638);
        }
#line 2361 "handle_options.m"
      }
#line 2363 "handle_options.m"
    else
#line 2364 "handle_options.m"
      {
#line 2364 "handle_options.m"
        {
#line 2364 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_498_498, libs__handle_options__STATE_VARIABLE_Globals_1633_1633, &libs__handle_options__STATE_VARIABLE_Globals_1638_1638);
        }
#line 2364 "handle_options.m"
      }
#line 2371 "handle_options.m"
    if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2370 "handle_options.m"
      {
#line 2370 "handle_options.m"
        libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1638_1638, &libs__handle_options__STATE_VARIABLE_Globals_1644_1644);
      }
#line 2371 "handle_options.m"
    else
#line 2372 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1644_1644 = libs__handle_options__STATE_VARIABLE_Globals_1638_1638;
#line 2374 "handle_options.m"
    {
#line 2374 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1644_1644, libs__handle_options__STATE_VARIABLE_Globals_189, libs__handle_options__STATE_VARIABLE_Errors_1591_1591, libs__handle_options__STATE_VARIABLE_Errors_188);
    }
#line 2375 "handle_options.m"
    {
#line 2375 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_189);
#line 2375 "handle_options.m"
      return;
    }
#line 644 "handle_options.m"
  }
#line 629 "handle_options.m"
}

#line 620 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 620 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 620 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 620 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6)
#line 620 "handle_options.m"
{
#line 622 "handle_options.m"
  {
#line 622 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 622 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;

#line 625 "handle_options.m"
    {
#line 625 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) (libs__handle_options__Error_4));
#line 625 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "handle_options.m"
    }
#line 625 "handle_options.m"
    {
#line 625 "handle_options.m"
      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__Errors0_5, libs__handle_options__V_7_7, libs__handle_options__Errors_6);
#line 625 "handle_options.m"
      return;
    }
#line 622 "handle_options.m"
  }
#line 620 "handle_options.m"
}

#line 528 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_23_p_0_1(
#line 528 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 528 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 528 "handle_options.m"
{
#line 528 "handle_options.m"
  {
#line 528 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 528 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 528 "handle_options.m"
    {
#line 528 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__check_option_values__528__1_1_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 528 "handle_options.m"
    return libs__handle_options__succeeded;
#line 528 "handle_options.m"
  }
#line 528 "handle_options.m"
}

#line 238 "handle_options.m"
static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
#line 238 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_123,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_124,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__Target_25,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__GC_Method_26,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TagsMethod_27,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TermNorm_28,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__Term2Norm_29,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TraceLevel_30,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TraceSuppress_31,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__SSTraceLevel_32,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeThreadSafe_33,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__C_CompilerType_34,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__CSharp_CompilerType_35,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__ReuseStrategy_36,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeILVersion_37,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__MaybeFeedbackInfo_38,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__HostEnvType_39,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__SystemEnvType_40,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__TargetEnvType_41,
#line 238 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_125,
#line 238 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_126)
#line 238 "handle_options.m"
{
#line 251 "handle_options.m"
  {
#line 251 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_299_299 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_300_300 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__Target0_44;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__GC_Method0_47;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod0_50;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__PercentFull_53;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__TermNorm0_55;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__Term2Norm0_58;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableTracing_61;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__Suppress_69;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__ForceDisableSSDB_72;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafeOption_78;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__DumpAliasOption_81;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerType0_85;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerType0_88;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraint0_91;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__ReuseConstraintArg0_92;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__DotNetLibVersionOpt_96;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__FeedbackFile0_108;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__HostEnvType0_114;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvType0_117;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvType0_120;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_131_131;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_136_136;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_143_143;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_150_150;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_157_157;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_164_164;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_175_175;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_186_186;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_192_192;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_195_195;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_199_199;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_201_201;
#line 251 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_203_203;
#line 251 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_204_204;
#line 251 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_207_207;
#line 251 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_211_211;
#line 251 "handle_options.m"
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_235_235;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__V_238_238;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_239_239;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_242_242;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_253_253;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_264_264;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_277_277;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_280_280;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_285_285;
#line 251 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_290_290;
#line 252 "handle_options.m"
    MR_Box libs__handle_options__conv0_Target0_44;
#line 258 "handle_options.m"
    MR_Word libs__handle_options__TargetPrime_46;
#line 254 "handle_options.m"
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
    MR_Integer libs__handle_options__V_147_147;
#line 294 "handle_options.m"
    MR_Integer libs__handle_options__V_148_148;
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
    MR_Word libs__handle_options__V_170_170;
#line 361 "handle_options.m"
    MR_Box libs__handle_options__conv10_Suppress_69;
#line 367 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_71;
#line 363 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_70;
#line 372 "handle_options.m"
    MR_Box libs__handle_options__conv11_ForceDisableSSDB_72;
#line 373 "handle_options.m"
    MR_Word libs__handle_options__V_188_188;
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
    MR_Char libs__handle_options__V_206_206;
#line 439 "handle_options.m"
    MR_Char libs__handle_options__V_210_210;
#line 470 "handle_options.m"
    MR_Char libs__handle_options__V_234_234;
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
    MR_Box libs__handle_options__conv20_DotNetLibVersionOpt_96;
#line 537 "handle_options.m"
    MR_Integer libs__handle_options__Major_103;
#line 537 "handle_options.m"
    MR_Integer libs__handle_options__Minor_104;
#line 537 "handle_options.m"
    MR_Integer libs__handle_options__Build_105;
#line 537 "handle_options.m"
    MR_Integer libs__handle_options__Revision_106;
#line 527 "handle_options.m"
    MR_String libs__handle_options__DotNetLibVersionStr_97;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__IsSep_98;
#line 527 "handle_options.m"
    MR_String libs__handle_options__Mj_99;
#line 527 "handle_options.m"
    MR_String libs__handle_options__Mn_100;
#line 527 "handle_options.m"
    MR_String libs__handle_options__Bu_101;
#line 527 "handle_options.m"
    MR_String libs__handle_options__Rv_102;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__V_258_258;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__V_259_259;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__V_260_260;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__V_261_261;
#line 527 "handle_options.m"
    MR_Word libs__handle_options__V_262_262;
#line 548 "handle_options.m"
    MR_Box libs__handle_options__conv21_FeedbackFile0_108;
#line 563 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_109;
#line 567 "handle_options.m"
    MR_Box libs__handle_options__conv22_HostEnvType0_114;
#line 573 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_116;
#line 569 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_115;
#line 580 "handle_options.m"
    MR_Box libs__handle_options__conv23_SystemEnvType0_117;
#line 590 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_119;
#line 582 "handle_options.m"
    MR_String libs__handle_options__SystemEnvTypeStr_118;
#line 597 "handle_options.m"
    MR_Box libs__handle_options__conv24_TargetEnvType0_120;
#line 603 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_122;
#line 599 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_121;

#line 252 "handle_options.m"
    {
#line 252 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 170)), &libs__handle_options__conv0_Target0_44);
    }
#line 252 "handle_options.m"
    libs__handle_options__Target0_44 = ((MR_Word) libs__handle_options__conv0_Target0_44);
#line 254 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Target0_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_44, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 254 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 254 "handle_options.m"
      {
#line 254 "handle_options.m"
        libs__handle_options__TargetStr_45 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Target0_44, (MR_Integer) 1)));
#line 255 "handle_options.m"
        {
#line 255 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_45, &libs__handle_options__TargetPrime_46);
        }
#line 254 "handle_options.m"
      }
#line 258 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 257 "handle_options.m"
      {
#line 257 "handle_options.m"
        *libs__handle_options__Target_25 = libs__handle_options__TargetPrime_46;
#line 257 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_131_131 = libs__handle_options__STATE_VARIABLE_Errors_0_125;
#line 257 "handle_options.m"
      }
#line 258 "handle_options.m"
    else
#line 259 "handle_options.m"
      {
#line 259 "handle_options.m"
        *libs__handle_options__Target_25 = (MR_Integer) 0;
#line 261 "handle_options.m"
        {
#line 261 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid target option (must be \140c\', \140il\', \140java\', \'csharp\', or \140erlang\')", libs__handle_options__STATE_VARIABLE_Errors_0_125, &libs__handle_options__STATE_VARIABLE_Errors_131_131);
        }
#line 259 "handle_options.m"
      }
#line 266 "handle_options.m"
    {
#line 266 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 211)), &libs__handle_options__conv1_GC_Method0_47);
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
        libs__handle_options__STATE_VARIABLE_Errors_136_136 = libs__handle_options__STATE_VARIABLE_Errors_131_131;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140mps\', \140accurate\', or \140automatic\')", libs__handle_options__STATE_VARIABLE_Errors_131_131, &libs__handle_options__STATE_VARIABLE_Errors_136_136);
        }
#line 273 "handle_options.m"
      }
#line 280 "handle_options.m"
    {
#line 280 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 232)), &libs__handle_options__conv2_TagsMethod0_50);
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
        libs__handle_options__STATE_VARIABLE_Errors_143_143 = libs__handle_options__STATE_VARIABLE_Errors_136_136;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid tags option (must be \140none\', \140low\' or \140high\')", libs__handle_options__STATE_VARIABLE_Errors_136_136, &libs__handle_options__STATE_VARIABLE_Errors_143_143);
        }
#line 287 "handle_options.m"
      }
#line 292 "handle_options.m"
    {
#line 292 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 318)), &libs__handle_options__conv3_PercentFull_53);
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
        libs__handle_options__V_147_147 = (MR_Integer) 1;
#line 295 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Percent_54 >= libs__handle_options__V_147_147);
#line 294 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 294 "handle_options.m"
          {
#line 296 "handle_options.m"
            libs__handle_options__V_148_148 = (MR_Integer) 100;
#line 296 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Percent_54 <= libs__handle_options__V_148_148);
#line 294 "handle_options.m"
          }
#line 294 "handle_options.m"
      }
#line 299 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 296 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_150_150 = libs__handle_options__STATE_VARIABLE_Errors_143_143;
#line 299 "handle_options.m"
    else
#line 300 "handle_options.m"
      {
#line 300 "handle_options.m"
        {
#line 300 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", libs__handle_options__STATE_VARIABLE_Errors_143_143, &libs__handle_options__STATE_VARIABLE_Errors_150_150);
        }
#line 300 "handle_options.m"
      }
#line 305 "handle_options.m"
    {
#line 305 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 418)), &libs__handle_options__conv4_TermNorm0_55);
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
        libs__handle_options__STATE_VARIABLE_Errors_157_157 = libs__handle_options__STATE_VARIABLE_Errors_150_150;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_150_150, &libs__handle_options__STATE_VARIABLE_Errors_157_157);
        }
#line 312 "handle_options.m"
      }
#line 318 "handle_options.m"
    {
#line 318 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 424)), &libs__handle_options__conv5_Term2Norm0_58);
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
        libs__handle_options__STATE_VARIABLE_Errors_164_164 = libs__handle_options__STATE_VARIABLE_Errors_157_157;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_157_157, &libs__handle_options__STATE_VARIABLE_Errors_164_164);
        }
#line 325 "handle_options.m"
      }
#line 331 "handle_options.m"
    {
#line 331 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 127)), &libs__handle_options__conv6_ForceDisableTracing_61);
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
        libs__handle_options__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableTracing_61, (MR_Integer) 0)));
#line 332 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_170_170 == (MR_Integer) 1);
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
        libs__handle_options__STATE_VARIABLE_Errors_175_175 = libs__handle_options__STATE_VARIABLE_Errors_164_164;
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
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 115)), &libs__handle_options__conv7_Trace_62);
        }
#line 335 "handle_options.m"
        libs__handle_options__Trace_62 = ((MR_Word) libs__handle_options__conv7_Trace_62);
#line 336 "handle_options.m"
        {
#line 336 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 182)), &libs__handle_options__conv8_ExecTraceOpt_63);
        }
#line 336 "handle_options.m"
        libs__handle_options__ExecTraceOpt_63 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_63);
#line 337 "handle_options.m"
        {
#line 337 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 183)), &libs__handle_options__conv9_DeclDebugOpt_64);
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
                libs__handle_options__add_error_3_p_0((MR_String) "Specified trace level is not compatible with grade", libs__handle_options__STATE_VARIABLE_Errors_164_164, &libs__handle_options__STATE_VARIABLE_Errors_175_175);
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
              libs__handle_options__STATE_VARIABLE_Errors_175_175 = libs__handle_options__STATE_VARIABLE_Errors_164_164;
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
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", libs__handle_options__STATE_VARIABLE_Errors_164_164, &libs__handle_options__STATE_VARIABLE_Errors_175_175);
            }
#line 354 "handle_options.m"
          }
#line 335 "handle_options.m"
      }
#line 361 "handle_options.m"
    {
#line 361 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 126)), &libs__handle_options__conv10_Suppress_69);
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
        libs__handle_options__STATE_VARIABLE_Errors_186_186 = libs__handle_options__STATE_VARIABLE_Errors_175_175;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--suppress-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_175_175, &libs__handle_options__STATE_VARIABLE_Errors_186_186);
        }
#line 368 "handle_options.m"
      }
#line 372 "handle_options.m"
    {
#line 372 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 131)), &libs__handle_options__conv11_ForceDisableSSDB_72);
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
        libs__handle_options__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableSSDB_72, (MR_Integer) 0)));
#line 373 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_188_188 == (MR_Integer) 1);
#line 373 "handle_options.m"
      }
#line 375 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 374 "handle_options.m"
      {
#line 374 "handle_options.m"
        *libs__handle_options__SSTraceLevel_32 = (MR_Integer) 0;
#line 374 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_192_192 = libs__handle_options__STATE_VARIABLE_Errors_186_186;
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
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 230)), &libs__handle_options__conv12_SSTrace_73);
        }
#line 376 "handle_options.m"
        libs__handle_options__SSTrace_73 = ((MR_Word) libs__handle_options__conv12_SSTrace_73);
#line 377 "handle_options.m"
        {
#line 377 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 229)), &libs__handle_options__conv13_SSDB_74);
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
            libs__handle_options__STATE_VARIABLE_Errors_192_192 = libs__handle_options__STATE_VARIABLE_Errors_186_186;
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
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--ssdb-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_186_186, &libs__handle_options__STATE_VARIABLE_Errors_192_192);
            }
#line 385 "handle_options.m"
          }
#line 376 "handle_options.m"
      }
#line 390 "handle_options.m"
    {
#line 390 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 222)), &libs__handle_options__conv14_MaybeThreadSafeOption_78);
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
        libs__handle_options__STATE_VARIABLE_Errors_195_195 = libs__handle_options__STATE_VARIABLE_Errors_192_192;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--maybe-thread-safe\'.", libs__handle_options__STATE_VARIABLE_Errors_192_192, &libs__handle_options__STATE_VARIABLE_Errors_195_195);
        }
#line 397 "handle_options.m"
      }
#line 401 "handle_options.m"
    {
#line 401 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 143)), &libs__handle_options__conv15_DumpAliasOption_81);
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
        libs__handle_options__STATE_VARIABLE_Errors_201_201 = libs__handle_options__STATE_VARIABLE_Errors_195_195;
#line 406 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_199_199 = libs__handle_options__STATE_VARIABLE_OptionTable_0_123;
#line 406 "handle_options.m"
      }
#line 407 "handle_options.m"
    else
#line 412 "handle_options.m"
      {
#line 412 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_83;
#line 408 "handle_options.m"
        MR_String libs__handle_options__DumpAlias_297;

#line 408 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 408 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 408 "handle_options.m"
          {
#line 408 "handle_options.m"
            libs__handle_options__DumpAlias_297 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 1)));
#line 409 "handle_options.m"
            {
#line 409 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_297, &libs__handle_options__AliasDumpOptions_83);
            }
#line 408 "handle_options.m"
          }
#line 412 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 411 "handle_options.m"
          {
#line 411 "handle_options.m"
            MR_Word libs__handle_options__V_198_198;

#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              libs__handle_options__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 411 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_198_198, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_83));
#line 411 "handle_options.m"
            }
#line 411 "handle_options.m"
            {
#line 411 "handle_options.m"
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 144)), ((MR_Box) (libs__handle_options__V_198_198)), libs__handle_options__STATE_VARIABLE_OptionTable_0_123, &libs__handle_options__STATE_VARIABLE_OptionTable_199_199);
            }
#line 411 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_201_201 = libs__handle_options__STATE_VARIABLE_Errors_195_195;
#line 411 "handle_options.m"
          }
#line 412 "handle_options.m"
        else
#line 413 "handle_options.m"
          {
#line 413 "handle_options.m"
            {
#line 413 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--hlds-dump-alias\'.", libs__handle_options__STATE_VARIABLE_Errors_195_195, &libs__handle_options__STATE_VARIABLE_Errors_201_201);
            }
#line 413 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_199_199 = libs__handle_options__STATE_VARIABLE_OptionTable_0_123;
#line 413 "handle_options.m"
          }
#line 412 "handle_options.m"
      }
#line 417 "handle_options.m"
    {
#line 417 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__STATE_VARIABLE_OptionTable_199_199, ((MR_Box) ((MR_Integer) 144)), &libs__handle_options__STATE_VARIABLE_DumpOptions_203_203);
    }
#line 421 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_203_203, (MR_String) "") == 0);
#line 423 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 422 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_204_204 = (MR_String) "x";
#line 423 "handle_options.m"
    else
#line 422 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_204_204 = libs__handle_options__STATE_VARIABLE_DumpOptions_203_203;
#line 429 "handle_options.m"
    {
#line 429 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_204_204, (MR_Char) 121);
    }
#line 429 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 429 "handle_options.m"
      {
#line 430 "handle_options.m"
        libs__handle_options__V_206_206 = (MR_Char) 97;
#line 430 "handle_options.m"
        {
#line 430 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_204_204, libs__handle_options__V_206_206);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_204_204);
        }
#line 432 "handle_options.m"
      }
#line 433 "handle_options.m"
    else
#line 432 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = libs__handle_options__STATE_VARIABLE_DumpOptions_204_204;
#line 438 "handle_options.m"
    {
#line 438 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 97);
    }
#line 438 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 438 "handle_options.m"
      {
#line 439 "handle_options.m"
        libs__handle_options__V_210_210 = (MR_Char) 117;
#line 439 "handle_options.m"
        {
#line 439 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, libs__handle_options__V_210_210);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_211_211 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_207_207);
        }
#line 441 "handle_options.m"
      }
#line 442 "handle_options.m"
    else
#line 441 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_211_211 = libs__handle_options__STATE_VARIABLE_DumpOptions_207_207;
#line 448 "handle_options.m"
    {
#line 448 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 65);
    }
#line 449 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
      {
#line 449 "handle_options.m"
        {
#line 449 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 66);
        }
#line 449 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
          {
#line 450 "handle_options.m"
            {
#line 450 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 68);
            }
#line 449 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
              {
#line 451 "handle_options.m"
                {
#line 451 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 71);
                }
#line 449 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                  {
#line 452 "handle_options.m"
                    {
#line 452 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 80);
                    }
#line 449 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                      {
#line 453 "handle_options.m"
                        {
#line 453 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 82);
                        }
#line 449 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                          {
#line 454 "handle_options.m"
                            {
#line 454 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 83);
                            }
#line 449 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                              {
#line 455 "handle_options.m"
                                {
#line 455 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 98);
                                }
#line 449 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                  {
#line 456 "handle_options.m"
                                    {
#line 456 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 99);
                                    }
#line 449 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                      {
#line 457 "handle_options.m"
                                        {
#line 457 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 100);
                                        }
#line 449 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                          {
#line 458 "handle_options.m"
                                            {
#line 458 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 102);
                                            }
#line 449 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                              {
#line 459 "handle_options.m"
                                                {
#line 459 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 103);
                                                }
#line 449 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                  {
#line 460 "handle_options.m"
                                                    {
#line 460 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 105);
                                                    }
#line 449 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                      {
#line 461 "handle_options.m"
                                                        {
#line 461 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 108);
                                                        }
#line 449 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                          {
#line 462 "handle_options.m"
                                                            {
#line 462 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 109);
                                                            }
#line 449 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                              {
#line 463 "handle_options.m"
                                                                {
#line 463 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 110);
                                                                }
#line 449 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                  {
#line 464 "handle_options.m"
                                                                    {
#line 464 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 112);
                                                                    }
#line 449 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                      {
#line 465 "handle_options.m"
                                                                        {
#line 465 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 115);
                                                                        }
#line 449 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                          {
#line 466 "handle_options.m"
                                                                            {
#line 466 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 116);
                                                                            }
#line 449 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 449 "handle_options.m"
                                                                              {
#line 467 "handle_options.m"
                                                                                {
#line 467 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 117);
                                                                                }
#line 449 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 468 "handle_options.m"
                                                                                  {
#line 468 "handle_options.m"
                                                                                    {
#line 468 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 122);
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
        libs__handle_options__V_234_234 = (MR_Char) 120;
#line 470 "handle_options.m"
        {
#line 470 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, libs__handle_options__V_234_234);
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
          libs__handle_options__STATE_VARIABLE_DumpOptions_235_235 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_211_211);
        }
#line 472 "handle_options.m"
      }
#line 473 "handle_options.m"
    else
#line 472 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_235_235 = libs__handle_options__STATE_VARIABLE_DumpOptions_211_211;
#line 476 "handle_options.m"
    {
#line 476 "handle_options.m"
      libs__handle_options__V_238_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_238_238, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 476 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_238_238, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_235_235));
#line 476 "handle_options.m"
    }
#line 476 "handle_options.m"
    {
#line 476 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 144)), ((MR_Box) (libs__handle_options__V_238_238)), libs__handle_options__STATE_VARIABLE_OptionTable_199_199, &libs__handle_options__STATE_VARIABLE_OptionTable_239_239);
    }
#line 479 "handle_options.m"
    {
#line 479 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 510)), &libs__handle_options__conv16_C_CompilerType0_85);
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
        libs__handle_options__STATE_VARIABLE_Errors_242_242 = libs__handle_options__STATE_VARIABLE_Errors_201_201;
#line 484 "handle_options.m"
      }
#line 485 "handle_options.m"
    else
#line 486 "handle_options.m"
      {
#line 486 "handle_options.m"
        *libs__handle_options__C_CompilerType_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 487 "handle_options.m"
        {
#line 487 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140lcc\', \140clang\', \'msvc\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_201_201, &libs__handle_options__STATE_VARIABLE_Errors_242_242);
        }
#line 486 "handle_options.m"
      }
#line 492 "handle_options.m"
    {
#line 492 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 511)), &libs__handle_options__conv17_CSharp_CompilerType0_88);
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
        libs__handle_options__STATE_VARIABLE_Errors_247_247 = libs__handle_options__STATE_VARIABLE_Errors_242_242;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_242_242, &libs__handle_options__STATE_VARIABLE_Errors_247_247);
        }
#line 500 "handle_options.m"
      }
#line 507 "handle_options.m"
    {
#line 507 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 409)), &libs__handle_options__conv18_ReuseConstraint0_91);
    }
#line 507 "handle_options.m"
    libs__handle_options__ReuseConstraint0_91 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_91);
#line 508 "handle_options.m"
    {
#line 508 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 410)), &libs__handle_options__conv19_ReuseConstraintArg0_92);
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
        libs__handle_options__STATE_VARIABLE_Errors_253_253 = libs__handle_options__STATE_VARIABLE_Errors_247_247;
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
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", libs__handle_options__STATE_VARIABLE_Errors_247_247, &libs__handle_options__STATE_VARIABLE_Errors_253_253);
        }
#line 518 "handle_options.m"
      }
#line 525 "handle_options.m"
    {
#line 525 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 521)), &libs__handle_options__conv20_DotNetLibVersionOpt_96);
    }
#line 525 "handle_options.m"
    libs__handle_options__DotNetLibVersionOpt_96 = ((MR_Word) libs__handle_options__conv20_DotNetLibVersionOpt_96);
#line 527 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DotNetLibVersionOpt_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_96, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 527 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
      {
#line 527 "handle_options.m"
        libs__handle_options__DotNetLibVersionStr_97 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_96, (MR_Integer) 1)));
#line 528 "handle_options.m"
        libs__handle_options__IsSep_98 = (MR_Word) &libs__handle_options_scalar_common_1[14];
#line 529 "handle_options.m"
        {
#line 529 "handle_options.m"
          libs__handle_options__V_258_258 = mercury__string__words_separator_2_f_0(libs__handle_options__IsSep_98, libs__handle_options__DotNetLibVersionStr_97);
        }
#line 529 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_258_258)) == (MR_mktag((MR_Integer) 1)));
#line 529 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
          {
#line 529 "handle_options.m"
            libs__handle_options__Mj_99 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_258_258, (MR_Integer) 0)));
#line 529 "handle_options.m"
            libs__handle_options__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_258_258, (MR_Integer) 1)));
#line 529 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 529 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
              {
#line 529 "handle_options.m"
                libs__handle_options__Mn_100 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_259_259, (MR_Integer) 0)));
#line 529 "handle_options.m"
                libs__handle_options__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_259_259, (MR_Integer) 1)));
#line 529 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 529 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
                  {
#line 529 "handle_options.m"
                    libs__handle_options__Bu_101 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_260_260, (MR_Integer) 0)));
#line 529 "handle_options.m"
                    libs__handle_options__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_260_260, (MR_Integer) 1)));
#line 529 "handle_options.m"
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_261_261)) == (MR_mktag((MR_Integer) 1)));
#line 529 "handle_options.m"
                    if (libs__handle_options__succeeded)
#line 529 "handle_options.m"
                      {
#line 529 "handle_options.m"
                        libs__handle_options__Rv_102 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_261_261, (MR_Integer) 0)));
#line 529 "handle_options.m"
                        libs__handle_options__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_261_261, (MR_Integer) 1)));
#line 529 "handle_options.m"
                        libs__handle_options__succeeded = (libs__handle_options__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "handle_options.m"
                        if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
                          {
#line 530 "handle_options.m"
                            {
#line 530 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mj_99, &libs__handle_options__Major_103);
                            }
#line 527 "handle_options.m"
                            if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
                              {
#line 531 "handle_options.m"
                                {
#line 531 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mn_100, &libs__handle_options__Minor_104);
                                }
#line 527 "handle_options.m"
                                if (libs__handle_options__succeeded)
#line 527 "handle_options.m"
                                  {
#line 532 "handle_options.m"
                                    {
#line 532 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Bu_101, &libs__handle_options__Build_105);
                                    }
#line 527 "handle_options.m"
                                    if (libs__handle_options__succeeded)
#line 533 "handle_options.m"
                                      {
#line 533 "handle_options.m"
                                        libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Rv_102, &libs__handle_options__Revision_106);
                                      }
#line 527 "handle_options.m"
                                  }
#line 527 "handle_options.m"
                              }
#line 527 "handle_options.m"
                          }
#line 529 "handle_options.m"
                      }
#line 529 "handle_options.m"
                  }
#line 529 "handle_options.m"
              }
#line 529 "handle_options.m"
          }
#line 527 "handle_options.m"
      }
#line 537 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 535 "handle_options.m"
      {
#line 535 "handle_options.m"
        MR_Word libs__handle_options__ILVersion_107;

#line 535 "handle_options.m"
        {
#line 535 "handle_options.m"
          libs__handle_options__ILVersion_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 535 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 0) = ((MR_Box) (libs__handle_options__Major_103));
#line 535 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 1) = ((MR_Box) (libs__handle_options__Minor_104));
#line 535 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 2) = ((MR_Box) (libs__handle_options__Build_105));
#line 535 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 3) = ((MR_Box) (libs__handle_options__Revision_106));
#line 535 "handle_options.m"
        }
#line 536 "handle_options.m"
        {
#line 536 "handle_options.m"
          MR_Word base;
#line 536 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "handle_options.m"
          *libs__handle_options__MaybeILVersion_37 = base;
#line 536 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ILVersion_107));
#line 536 "handle_options.m"
        }
#line 536 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_264_264 = libs__handle_options__STATE_VARIABLE_Errors_253_253;
#line 536 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_OptionTable_124 = libs__handle_options__STATE_VARIABLE_OptionTable_239_239;
#line 535 "handle_options.m"
      }
#line 537 "handle_options.m"
    else
#line 538 "handle_options.m"
      {
#line 538 "handle_options.m"
        *libs__handle_options__MaybeILVersion_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "handle_options.m"
        {
#line 539 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", libs__handle_options__STATE_VARIABLE_Errors_253_253, &libs__handle_options__STATE_VARIABLE_Errors_264_264);
        }
#line 545 "handle_options.m"
        {
#line 545 "handle_options.m"
          mercury__map__det_update_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 96)), ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]))), libs__handle_options__STATE_VARIABLE_OptionTable_239_239, libs__handle_options__STATE_VARIABLE_OptionTable_124);
        }
#line 538 "handle_options.m"
      }
#line 548 "handle_options.m"
    {
#line 548 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 669)), &libs__handle_options__conv21_FeedbackFile0_108);
    }
#line 548 "handle_options.m"
    libs__handle_options__FeedbackFile0_108 = ((MR_Word) libs__handle_options__conv21_FeedbackFile0_108);
#line 550 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__FeedbackFile0_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 550 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 550 "handle_options.m"
      {
#line 550 "handle_options.m"
        libs__handle_options__FeedbackFile_109 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_108, (MR_Integer) 1)));
#line 551 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_109, (MR_String) "") == 0);
#line 551 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 550 "handle_options.m"
      }
#line 563 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 553 "handle_options.m"
      {
#line 553 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_110;

#line 553 "handle_options.m"
        {
#line 553 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_4_p_0(libs__handle_options__FeedbackFile_109, &libs__handle_options__FeedbackReadResult_110);
        }
#line 557 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_110)) == (MR_mktag((MR_Integer) 1))))
#line 558 "handle_options.m"
          {
#line 558 "handle_options.m"
            MR_Word libs__handle_options__Error_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_110, (MR_Integer) 0)));
#line 558 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_113;

#line 559 "handle_options.m"
            {
#line 559 "handle_options.m"
              mdbcomp__feedback__read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_109, libs__handle_options__Error_112, &libs__handle_options__ErrorMessage_113);
            }
#line 560 "handle_options.m"
            {
#line 560 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__ErrorMessage_113, libs__handle_options__STATE_VARIABLE_Errors_264_264, &libs__handle_options__STATE_VARIABLE_Errors_277_277);
            }
#line 561 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "handle_options.m"
          }
#line 557 "handle_options.m"
        else
#line 555 "handle_options.m"
          {
#line 555 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_110, (MR_Integer) 0)));

#line 556 "handle_options.m"
            {
#line 556 "handle_options.m"
              MR_Word base;
#line 556 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_38 = base;
#line 556 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_111));
#line 556 "handle_options.m"
            }
#line 556 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_277_277 = libs__handle_options__STATE_VARIABLE_Errors_264_264;
#line 555 "handle_options.m"
          }
#line 553 "handle_options.m"
      }
#line 563 "handle_options.m"
    else
#line 565 "handle_options.m"
      {
#line 565 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_277_277 = libs__handle_options__STATE_VARIABLE_Errors_264_264;
#line 565 "handle_options.m"
      }
#line 567 "handle_options.m"
    {
#line 567 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 651)), &libs__handle_options__conv22_HostEnvType0_114);
    }
#line 567 "handle_options.m"
    libs__handle_options__HostEnvType0_114 = ((MR_Word) libs__handle_options__conv22_HostEnvType0_114);
#line 569 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__HostEnvType0_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_114, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 569 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 569 "handle_options.m"
      {
#line 569 "handle_options.m"
        libs__handle_options__HostEnvTypeStr_115 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_114, (MR_Integer) 1)));
#line 570 "handle_options.m"
        {
#line 570 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_115, &libs__handle_options__HostEnvTypePrime_116);
        }
#line 569 "handle_options.m"
      }
#line 573 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 572 "handle_options.m"
      {
#line 572 "handle_options.m"
        *libs__handle_options__HostEnvType_39 = libs__handle_options__HostEnvTypePrime_116;
#line 572 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_280_280 = libs__handle_options__STATE_VARIABLE_Errors_277_277;
#line 572 "handle_options.m"
      }
#line 573 "handle_options.m"
    else
#line 574 "handle_options.m"
      {
#line 574 "handle_options.m"
        *libs__handle_options__HostEnvType_39 = (MR_Integer) 0;
#line 575 "handle_options.m"
        {
#line 575 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_277_277, &libs__handle_options__STATE_VARIABLE_Errors_280_280);
        }
#line 574 "handle_options.m"
      }
#line 580 "handle_options.m"
    {
#line 580 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 652)), &libs__handle_options__conv23_SystemEnvType0_117);
    }
#line 580 "handle_options.m"
    libs__handle_options__SystemEnvType0_117 = ((MR_Word) libs__handle_options__conv23_SystemEnvType0_117);
#line 582 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SystemEnvType0_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_117, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 582 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 582 "handle_options.m"
      {
#line 582 "handle_options.m"
        libs__handle_options__SystemEnvTypeStr_118 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_117, (MR_Integer) 1)));
#line 583 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_118, (MR_String) "") == 0);
#line 585 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 584 "handle_options.m"
          {
#line 584 "handle_options.m"
            libs__handle_options__SystemEnvTypePrime_119 = *libs__handle_options__HostEnvType_39;
#line 584 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 584 "handle_options.m"
          }
#line 585 "handle_options.m"
        else
#line 586 "handle_options.m"
          {
#line 586 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_118, &libs__handle_options__SystemEnvTypePrime_119);
          }
#line 582 "handle_options.m"
      }
#line 590 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 589 "handle_options.m"
      {
#line 589 "handle_options.m"
        *libs__handle_options__SystemEnvType_40 = libs__handle_options__SystemEnvTypePrime_119;
#line 589 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_285_285 = libs__handle_options__STATE_VARIABLE_Errors_280_280;
#line 589 "handle_options.m"
      }
#line 590 "handle_options.m"
    else
#line 591 "handle_options.m"
      {
#line 591 "handle_options.m"
        *libs__handle_options__SystemEnvType_40 = (MR_Integer) 0;
#line 592 "handle_options.m"
        {
#line 592 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--system-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_280_280, &libs__handle_options__STATE_VARIABLE_Errors_285_285);
        }
#line 591 "handle_options.m"
      }
#line 597 "handle_options.m"
    {
#line 597 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 653)), &libs__handle_options__conv24_TargetEnvType0_120);
    }
#line 597 "handle_options.m"
    libs__handle_options__TargetEnvType0_120 = ((MR_Word) libs__handle_options__conv24_TargetEnvType0_120);
#line 599 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TargetEnvType0_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 599 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 599 "handle_options.m"
      {
#line 599 "handle_options.m"
        libs__handle_options__TargetEnvTypeStr_121 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_120, (MR_Integer) 1)));
#line 600 "handle_options.m"
        {
#line 600 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_121, &libs__handle_options__TargetEnvTypePrime_122);
        }
#line 599 "handle_options.m"
      }
#line 603 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 602 "handle_options.m"
      {
#line 602 "handle_options.m"
        *libs__handle_options__TargetEnvType_41 = libs__handle_options__TargetEnvTypePrime_122;
#line 602 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_290_290 = libs__handle_options__STATE_VARIABLE_Errors_285_285;
#line 602 "handle_options.m"
      }
#line 603 "handle_options.m"
    else
#line 604 "handle_options.m"
      {
#line 604 "handle_options.m"
        *libs__handle_options__TargetEnvType_41 = (MR_Integer) 0;
#line 605 "handle_options.m"
        {
#line 605 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_285_285, &libs__handle_options__STATE_VARIABLE_Errors_290_290);
        }
#line 604 "handle_options.m"
      }
#line 611 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_39 == (MR_Integer) 0);
#line 611 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 611 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_35 == (MR_Integer) 0);
#line 616 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 612 "handle_options.m"
      {
#line 612 "handle_options.m"
        {
#line 612 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", libs__handle_options__STATE_VARIABLE_Errors_290_290, libs__handle_options__STATE_VARIABLE_Errors_126);
#line 612 "handle_options.m"
          return;
        }
#line 612 "handle_options.m"
      }
#line 616 "handle_options.m"
    else
#line 612 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_126 = libs__handle_options__STATE_VARIABLE_Errors_290_290;
#line 251 "handle_options.m"
  }
#line 238 "handle_options.m"
}

#line 209 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
#line 209 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 209 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 209 "handle_options.m"
  MR_Word * libs__handle_options__Globals_3)
#line 209 "handle_options.m"
{
#line 213 "handle_options.m"
  {
#line 213 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 213 "handle_options.m"
    if (((MR_tag((MR_Word) libs__handle_options__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 213 "handle_options.m"
      {
#line 213 "handle_options.m"
        MR_String libs__handle_options__ErrorMessage_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_49_49;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_50_50;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_51_51;
#line 111 "handle_options.m"
        MR_Word libs__handle_options__V_52_52;

#line 213 "handle_options.m"
        {
#line 213 "handle_options.m"
          MR_Word base;
#line 213 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = base;
#line 213 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_6));
#line 213 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "handle_options.m"
        }
#line 111 "handle_options.m"
        {
#line 111 "handle_options.m"
          libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_49_49, &libs__handle_options__V_50_50, &libs__handle_options__V_51_51, &libs__handle_options__V_52_52, libs__handle_options__Globals_3);
        }
#line 213 "handle_options.m"
      }
#line 213 "handle_options.m"
    else
#line 216 "handle_options.m"
      {
#line 216 "handle_options.m"
        MR_Word libs__handle_options__OptionTable0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "handle_options.m"
        MR_Word libs__handle_options__OptionTable_17;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__Target_18;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__GC_Method_19;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TagsMethod_20;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TermNorm_21;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__Term2Norm_22;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TraceLevel_23;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TraceSuppress_24;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__SSTraceLevel_25;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__MaybeThreadSafe_26;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__C_CompilerType_27;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__CSharp_CompilerType_28;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__ReuseStrategy_29;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__MaybeILVersion_30;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__MaybeFeedbackInfo_31;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__HostEnvType_32;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__SystemEnvType_33;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__TargetEnvType_34;
#line 216 "handle_options.m"
        MR_Word libs__handle_options__CheckErrors_35;

#line 217 "handle_options.m"
        {
#line 217 "handle_options.m"
          libs__handle_options__check_option_values_23_p_0(libs__handle_options__OptionTable0_13, &libs__handle_options__OptionTable_17, &libs__handle_options__Target_18, &libs__handle_options__GC_Method_19, &libs__handle_options__TagsMethod_20, &libs__handle_options__TermNorm_21, &libs__handle_options__Term2Norm_22, &libs__handle_options__TraceLevel_23, &libs__handle_options__TraceSuppress_24, &libs__handle_options__SSTraceLevel_25, &libs__handle_options__MaybeThreadSafe_26, &libs__handle_options__C_CompilerType_27, &libs__handle_options__CSharp_CompilerType_28, &libs__handle_options__ReuseStrategy_29, &libs__handle_options__MaybeILVersion_30, &libs__handle_options__MaybeFeedbackInfo_31, &libs__handle_options__HostEnvType_32, &libs__handle_options__SystemEnvType_33, &libs__handle_options__TargetEnvType_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__CheckErrors_35);
        }
#line 232 "handle_options.m"
        if ((libs__handle_options__CheckErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "handle_options.m"
          {
#line 225 "handle_options.m"
            {
#line 225 "handle_options.m"
              libs__handle_options__convert_options_to_globals_23_p_0(libs__handle_options__OptionTable_17, libs__handle_options__Target_18, libs__handle_options__GC_Method_19, libs__handle_options__TagsMethod_20, libs__handle_options__TermNorm_21, libs__handle_options__Term2Norm_22, libs__handle_options__TraceLevel_23, libs__handle_options__TraceSuppress_24, libs__handle_options__SSTraceLevel_25, libs__handle_options__MaybeThreadSafe_26, libs__handle_options__C_CompilerType_27, libs__handle_options__CSharp_CompilerType_28, libs__handle_options__ReuseStrategy_29, libs__handle_options__MaybeILVersion_30, libs__handle_options__MaybeFeedbackInfo_31, libs__handle_options__HostEnvType_32, libs__handle_options__SystemEnvType_33, libs__handle_options__TargetEnvType_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__HeadVar__2_2, libs__handle_options__Globals_3);
#line 225 "handle_options.m"
              return;
            }
#line 224 "handle_options.m"
          }
#line 232 "handle_options.m"
        else
#line 233 "handle_options.m"
          {
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_59_59;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_60_60;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_61_61;
#line 111 "handle_options.m"
            MR_Word libs__handle_options__V_62_62;

#line 234 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = libs__handle_options__CheckErrors_35;
#line 111 "handle_options.m"
            {
#line 111 "handle_options.m"
              libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_59_59, &libs__handle_options__V_60_60, &libs__handle_options__V_61_61, &libs__handle_options__V_62_62, libs__handle_options__Globals_3);
            }
#line 233 "handle_options.m"
          }
#line 216 "handle_options.m"
      }
#line 213 "handle_options.m"
  }
#line 209 "handle_options.m"
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

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_2(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
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
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_1(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
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

#line 184 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0(
#line 184 "handle_options.m"
  MR_Word libs__handle_options__Args0_7,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__OptionArgs_8,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__Args_9,
#line 184 "handle_options.m"
  MR_Word * libs__handle_options__Result_10)
#line 184 "handle_options.m"
{
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[2]), libs__handle_options__Args0_7, libs__handle_options__OptionArgs_8, libs__handle_options__Args_9, libs__handle_options__Result_10);
#line 191 "handle_options.m"
      return;
    }
#line 188 "handle_options.m"
  }
#line 184 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2860 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 2860 "handle_options.m"
      return;
    }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2860 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2860 "handle_options.m"
      {
#line 2860 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 2860 "handle_options.m"
    }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
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
#line 2816 "handle_options.m"
  {
#line 2816 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2816 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 2816 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 2816 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 2816 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 2827 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 2827 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 2822 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 2822 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 2822 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 2832 "handle_options.m"
    {
#line 2832 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 2860 "handle_options.m"
    }
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 2837 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2836 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 2837 "handle_options.m"
    else
#line 2839 "handle_options.m"
      {
#line 2839 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 2822 "handle_options.m"
    {
#line 2822 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 2822 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2822 "handle_options.m"
      {
#line 2823 "handle_options.m"
        {
#line 2823 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 2824 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 2824 "handle_options.m"
        {
#line 2824 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 2822 "handle_options.m"
      }
#line 2827 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2826 "handle_options.m"
      {
#line 2826 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 2827 "handle_options.m"
    else
#line 2828 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 2816 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2788 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2788 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2788 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2788 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2788 "handle_options.m"
{
#line 2788 "handle_options.m"
  {
#line 2788 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2788 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2788 "handle_options.m"
    {
#line 2788 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2788__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2788 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2788 "handle_options.m"
      {
#line 2788 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2788 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2788 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2788 "handle_options.m"
      }
#line 2788 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2788 "handle_options.m"
  }
#line 2788 "handle_options.m"
}

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3159 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3159 "handle_options.m"
{
#line 3159 "handle_options.m"
  {
#line 3159 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3159 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3159 "handle_options.m"
    {
#line 3159 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3159__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3159 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3159 "handle_options.m"
  }
#line 3159 "handle_options.m"
}

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3159 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3159 "handle_options.m"
{
#line 3159 "handle_options.m"
  {
#line 3159 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3159 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3159 "handle_options.m"
    {
#line 3159 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3159 "handle_options.m"
      return;
    }
#line 3159 "handle_options.m"
  }
#line 3159 "handle_options.m"
}

#line 3159 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3159 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3159 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3159 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3159 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3159 "handle_options.m"
{
#line 3159 "handle_options.m"
  {
#line 3159 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3159 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3159 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3159 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3159 "handle_options.m"
    {
#line 3159 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3159 "handle_options.m"
      {
#line 3159 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3159 "handle_options.m"
    }
#line 3159 "handle_options.m"
  }
#line 3159 "handle_options.m"
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
#line 2784 "handle_options.m"
  {
#line 2784 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2784 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3159 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2788 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2788 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2788 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3159 "handle_options.m"
    {
#line 3159 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3159 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3201 "handle_options.m"
    {
#line 3201 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3202 "handle_options.m"
    {
#line 3202 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2784 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2784 "handle_options.m"
      {
#line 17052 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2787 "handle_options.m"
        {
#line 2787 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2788 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 17061 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 17063 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 17065 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2788 "handle_options.m"
        {
#line 2788 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2788 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2788 "handle_options.m"
          {
#line 2788 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2788 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2788 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2788 "handle_options.m"
          }
#line 2784 "handle_options.m"
      }
#line 2784 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2784 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2860 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2860 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 2860 "handle_options.m"
      return;
    }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
}

#line 2860 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2860 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2860 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2860 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2860 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2860 "handle_options.m"
{
#line 2860 "handle_options.m"
  {
#line 2860 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2860 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2860 "handle_options.m"
      {
#line 2860 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2860__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 2860 "handle_options.m"
    }
#line 2860 "handle_options.m"
  }
#line 2860 "handle_options.m"
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
#line 2831 "handle_options.m"
  {
#line 2831 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2831 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 2831 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 2831 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 2832 "handle_options.m"
    {
#line 2832 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2860 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 2860 "handle_options.m"
    }
#line 2860 "handle_options.m"
    {
#line 2860 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 2837 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2836 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 2837 "handle_options.m"
    else
#line 2839 "handle_options.m"
      {
#line 2839 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 2839 "handle_options.m"
        return;
      }
#line 2831 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2587 "handle_options.m"
  {
#line 2587 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2587 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2587 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 2587 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 2591 "handle_options.m"
    {
#line 2591 "handle_options.m"
      mercury__library__version_1_p_0(&libs__handle_options__Version_4);
    }
#line 2592 "handle_options.m"
    {
#line 2592 "handle_options.m"
      libs__handle_options__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2592 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2592 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[198])));
#line 2592 "handle_options.m"
    }
#line 2592 "handle_options.m"
    {
#line 2592 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2592 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2592 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (libs__handle_options__V_10_10));
#line 2592 "handle_options.m"
    }
#line 2592 "handle_options.m"
    {
#line 2592 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_7_7);
    }
#line 2594 "handle_options.m"
    {
#line 2594 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2013 The University of Melbourne\n");
    }
#line 2596 "handle_options.m"
    {
#line 2596 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2597 "handle_options.m"
    {
#line 2597 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2598 "handle_options.m"
    {
#line 2598 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2600 "handle_options.m"
    {
#line 2600 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2602 "handle_options.m"
    {
#line 2602 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2604 "handle_options.m"
    {
#line 2604 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2605 "handle_options.m"
    {
#line 2605 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2605 "handle_options.m"
      return;
    }
#line 2587 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2571 "handle_options.m"
  {
#line 2571 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2571 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17339 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2568 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 17355 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17374 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2583 "handle_options.m"
    if ((libs__handle_options__AlreadyPrinted_4 == (MR_Integer) 0))
#line 2576 "handle_options.m"
      {
#line 2576 "handle_options.m"
        MR_String libs__handle_options__Version_22;
#line 2576 "handle_options.m"
        MR_Word libs__handle_options__V_23_23;
#line 2576 "handle_options.m"
        MR_Word libs__handle_options__V_26_26;

#line 2562 "handle_options.m"
        {
#line 2562 "handle_options.m"
          mercury__library__version_1_p_0(&libs__handle_options__Version_22);
        }
#line 2564 "handle_options.m"
        {
#line 2564 "handle_options.m"
          libs__handle_options__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2564 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_26_26, 0) = ((MR_Box) (libs__handle_options__Version_22));
#line 2564 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[3])));
#line 2564 "handle_options.m"
        }
#line 2563 "handle_options.m"
        {
#line 2563 "handle_options.m"
          libs__handle_options__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2563 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2563 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 1) = ((MR_Box) (libs__handle_options__V_26_26));
#line 2563 "handle_options.m"
        }
#line 2563 "handle_options.m"
        {
#line 2563 "handle_options.m"
          mercury__io__write_strings_3_p_0(libs__handle_options__V_23_23);
        }
#line 2578 "handle_options.m"
        {
#line 2578 "handle_options.m"
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[5]));
        }
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17438 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2568 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 17455 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2568 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2568 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17473 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2568 "handle_options.m"
}
#line 2576 "handle_options.m"
      }
#line 2583 "handle_options.m"
    else
#line 2584 "handle_options.m"
      {
#line 2584 "handle_options.m"
      }
#line 2571 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2557 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2557 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2557 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2557 "handle_options.m"
{
#line 2557 "handle_options.m"
  {
#line 2557 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2557 "handle_options.m"
    {
#line 2557 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2557 "handle_options.m"
      return;
    }
#line 2557 "handle_options.m"
  }
#line 2557 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2555 "handle_options.m"
  {
#line 2555 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2555 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2555 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2557 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2556 "handle_options.m"
    {
#line 2556 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2557 "handle_options.m"
    {
#line 2557 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2557 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2557 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2557 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2557 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2557 "handle_options.m"
    }
#line 2557 "handle_options.m"
    {
#line 2557 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2558 "handle_options.m"
    {
#line 2558 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2559 "handle_options.m"
    {
#line 2559 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2559 "handle_options.m"
      return;
    }
#line 2555 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2561 "handle_options.m"
  {
#line 2561 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2561 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2561 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 2561 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 2562 "handle_options.m"
    {
#line 2562 "handle_options.m"
      mercury__library__version_1_p_0(&libs__handle_options__Version_4);
    }
#line 2564 "handle_options.m"
    {
#line 2564 "handle_options.m"
      libs__handle_options__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2564 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2564 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[3])));
#line 2564 "handle_options.m"
    }
#line 2563 "handle_options.m"
    {
#line 2563 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2563 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2563 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (libs__handle_options__V_10_10));
#line 2563 "handle_options.m"
    }
#line 2563 "handle_options.m"
    {
#line 2563 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_7_7);
#line 2563 "handle_options.m"
      return;
    }
#line 2561 "handle_options.m"
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

#line 189 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
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
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
#line 189 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 189 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 189 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 189 "handle_options.m"
{
#line 189 "handle_options.m"
  {
#line 189 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 189 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 189 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

#line 189 "handle_options.m"
    {
#line 189 "handle_options.m"
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
#line 189 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 189 "handle_options.m"
      {
#line 189 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
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
#line 188 "handle_options.m"
  {
#line 188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 191 "handle_options.m"
    MR_Word libs__handle_options__V_10_10;

#line 191 "handle_options.m"
    {
#line 191 "handle_options.m"
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__Args0_6, libs__handle_options__OptionArgs_7, libs__handle_options__Args_8, &libs__handle_options__V_10_10);
    }
#line 188 "handle_options.m"
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
#line 113 "handle_options.m"
  {
#line 113 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 113 "handle_options.m"
    MR_Word libs__handle_options__Result_16;
#line 113 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_41_41;

#line 116 "handle_options.m"
    {
#line 116 "handle_options.m"
      libs__handle_options__process_given_options_6_p_0(libs__handle_options__Args0_9, libs__handle_options__OptionArgs_10, libs__handle_options__Args_11, &libs__handle_options__Result_16);
    }
#line 119 "handle_options.m"
    {
#line 119 "handle_options.m"
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_16, libs__handle_options__Errors_13, &libs__handle_options__STATE_VARIABLE_Globals_41_41);
    }
#line 125 "handle_options.m"
    if ((*libs__handle_options__Errors_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "handle_options.m"
      {
#line 126 "handle_options.m"
        MR_Word libs__handle_options__GenerateDependencies_19;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__GenerateDependencyFile_20;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeInterface_21;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakePrivateInterface_22;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeShortInterface_23;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeOptimizationInt_24;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeTransOptInt_25;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeAnalysisRegistry_26;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__MakeXmlDocumentation_27;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__ConvertToMercury_28;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__TypecheckOnly_29;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__ErrorcheckOnly_30;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__TargetCodeOnly_31;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__Target_32;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__GenerateIL_33;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__CompileOnly_34;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__NotLink_35;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__Smart_36;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_57_57;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_58_58;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_59_59;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_60_60;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_61_61;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_62_62;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_63_63;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_64_64;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_65_65;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_66_66;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_67_67;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_68_68;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_69_69;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_70_70;
#line 126 "handle_options.m"
        MR_Word libs__handle_options__V_71_71;

#line 127 "handle_options.m"
        {
#line 127 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 91, &libs__handle_options__GenerateDependencies_19);
        }
#line 129 "handle_options.m"
        {
#line 129 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 90, &libs__handle_options__GenerateDependencyFile_20);
        }
#line 131 "handle_options.m"
        {
#line 131 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 83, &libs__handle_options__MakeInterface_21);
        }
#line 132 "handle_options.m"
        {
#line 132 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 84, &libs__handle_options__MakePrivateInterface_22);
        }
#line 134 "handle_options.m"
        {
#line 134 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 82, &libs__handle_options__MakeShortInterface_23);
        }
#line 136 "handle_options.m"
        {
#line 136 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 85, &libs__handle_options__MakeOptimizationInt_24);
        }
#line 138 "handle_options.m"
        {
#line 138 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 86, &libs__handle_options__MakeTransOptInt_25);
        }
#line 140 "handle_options.m"
        {
#line 140 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 87, &libs__handle_options__MakeAnalysisRegistry_26);
        }
#line 142 "handle_options.m"
        {
#line 142 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 88, &libs__handle_options__MakeXmlDocumentation_27);
        }
#line 144 "handle_options.m"
        {
#line 144 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 94, &libs__handle_options__ConvertToMercury_28);
        }
#line 146 "handle_options.m"
        {
#line 146 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 95, &libs__handle_options__TypecheckOnly_29);
        }
#line 147 "handle_options.m"
        {
#line 147 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 96, &libs__handle_options__ErrorcheckOnly_30);
        }
#line 148 "handle_options.m"
        {
#line 148 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 97, &libs__handle_options__TargetCodeOnly_31);
        }
#line 150 "handle_options.m"
        {
#line 150 "handle_options.m"
          libs__globals__get_target_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, &libs__handle_options__Target_32);
        }
#line 151 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Target_32 == (MR_Integer) 1);
#line 151 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 151 "handle_options.m"
          libs__handle_options__GenerateIL_33 = (MR_Integer) 1;
#line 151 "handle_options.m"
        else
#line 151 "handle_options.m"
          libs__handle_options__GenerateIL_33 = (MR_Integer) 0;
#line 152 "handle_options.m"
        {
#line 152 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 98, &libs__handle_options__CompileOnly_34);
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_71_71, 0) = ((MR_Box) (libs__handle_options__CompileOnly_34));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "handle_options.m"
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_70_70, 0) = ((MR_Box) (libs__handle_options__GenerateIL_33));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_70_70, 1) = ((MR_Box) (libs__handle_options__V_71_71));
#line 157 "handle_options.m"
        }
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_69_69, 0) = ((MR_Box) (libs__handle_options__TargetCodeOnly_31));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_69_69, 1) = ((MR_Box) (libs__handle_options__V_70_70));
#line 157 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 0) = ((MR_Box) (libs__handle_options__ErrorcheckOnly_30));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 1) = ((MR_Box) (libs__handle_options__V_69_69));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 0) = ((MR_Box) (libs__handle_options__TypecheckOnly_29));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_67_67, 1) = ((MR_Box) (libs__handle_options__V_68_68));
#line 156 "handle_options.m"
        }
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 0) = ((MR_Box) (libs__handle_options__ConvertToMercury_28));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_66_66, 1) = ((MR_Box) (libs__handle_options__V_67_67));
#line 156 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 0) = ((MR_Box) (libs__handle_options__MakeXmlDocumentation_27));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 1) = ((MR_Box) (libs__handle_options__V_66_66));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 0) = ((MR_Box) (libs__handle_options__MakeAnalysisRegistry_26));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_64_64, 1) = ((MR_Box) (libs__handle_options__V_65_65));
#line 155 "handle_options.m"
        }
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 0) = ((MR_Box) (libs__handle_options__MakeTransOptInt_25));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_63_63, 1) = ((MR_Box) (libs__handle_options__V_64_64));
#line 155 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 0) = ((MR_Box) (libs__handle_options__MakeOptimizationInt_24));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 1) = ((MR_Box) (libs__handle_options__V_63_63));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 0) = ((MR_Box) (libs__handle_options__MakeShortInterface_23));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_61_61, 1) = ((MR_Box) (libs__handle_options__V_62_62));
#line 154 "handle_options.m"
        }
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__MakePrivateInterface_22));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (libs__handle_options__V_61_61));
#line 154 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 0) = ((MR_Box) (libs__handle_options__MakeInterface_21));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 1) = ((MR_Box) (libs__handle_options__V_60_60));
#line 153 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 0) = ((MR_Box) (libs__handle_options__GenerateDependencyFile_20));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_58_58, 1) = ((MR_Box) (libs__handle_options__V_59_59));
#line 153 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          libs__handle_options__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 0) = ((MR_Box) (libs__handle_options__GenerateDependencies_19));
#line 153 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_57_57, 1) = ((MR_Box) (libs__handle_options__V_58_58));
#line 153 "handle_options.m"
        }
#line 153 "handle_options.m"
        {
#line 153 "handle_options.m"
          mercury__bool__or_list_2_p_0(libs__handle_options__V_57_57, &libs__handle_options__NotLink_35);
        }
#line 159 "handle_options.m"
        {
#line 159 "handle_options.m"
          mercury__bool__not_2_p_0(libs__handle_options__NotLink_35, libs__handle_options__Link_12);
        }
#line 160 "handle_options.m"
        {
#line 160 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 111, &libs__handle_options__Smart_36);
        }
#line 162 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Smart_36 == (MR_Integer) 1);
#line 162 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 163 "handle_options.m"
          libs__handle_options__succeeded = (*libs__handle_options__Link_12 == (MR_Integer) 1);
#line 168 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 167 "handle_options.m"
          {
#line 167 "handle_options.m"
            {
#line 167 "handle_options.m"
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_41_41, libs__handle_options__STATE_VARIABLE_Globals_37);
#line 167 "handle_options.m"
              return;
            }
#line 167 "handle_options.m"
          }
#line 168 "handle_options.m"
        else
#line 169 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Globals_37 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
#line 126 "handle_options.m"
      }
#line 125 "handle_options.m"
    else
#line 121 "handle_options.m"
      {
#line 122 "handle_options.m"
        *libs__handle_options__Link_12 = (MR_Integer) 0;
#line 122 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Globals_37 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
#line 121 "handle_options.m"
      }
#line 113 "handle_options.m"
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
#line 110 "handle_options.m"
  {
#line 110 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 111 "handle_options.m"
    MR_Word libs__handle_options__V_6_6;
#line 111 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;
#line 111 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 111 "handle_options.m"
    MR_Word libs__handle_options__V_9_9;

#line 111 "handle_options.m"
    {
#line 111 "handle_options.m"
      libs__handle_options__handle_given_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_6_6, &libs__handle_options__V_7_7, &libs__handle_options__V_8_8, &libs__handle_options__V_9_9, libs__handle_options__DefaultGlobals_4);
    }
#line 110 "handle_options.m"
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
