/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "mdbcomp.sym_name.mih"
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



#line 2840 "handle_options.m"
struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s {
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Options_3;
#line 2840 "handle_options.m"
  MR_Word * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__HeadVar__2_16;
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont;
#line 2840 "handle_options.m"
  void * libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont_env_ptr;
#line 2840 "handle_options.m"
  MR_bool libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded;
#line 2840 "handle_options.m"
  MR_String libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Name_6;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Comp_7;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__CompOpts_8;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__MaybeTargets_9;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__IncludeInGradeString_10;
#line 2847 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_0;
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Opt_11;
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Value_12;
#line 2847 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_17_17;
#line 2848 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv0_V_17_17;
#line 2861 "handle_options.m"
  jmp_buf libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_1;
#line 2861 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_23_23;
#line 2861 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_24_24;
#line 2861 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Target_14;
#line 2861 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_18_18;
#line 2861 "handle_options.m"
  MR_Word libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_27_27;
#line 2862 "handle_options.m"
  MR_Box libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv2_Target_14;
#line 2840 "handle_options.m"
};

#line 2681 "handle_options.m"
struct libs__handle_options__must_not_contain_2_p_0_env_0_s {
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3;
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4;
#line 2684 "handle_options.m"
  MR_bool libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2684 "handle_options.m"
  jmp_buf libs__handle_options__must_not_contain_2_p_0_env_0__commit_0;
#line 2684 "handle_options.m"
  MR_Word libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2684 "handle_options.m"
  MR_String libs__handle_options__must_not_contain_2_p_0_env_0__Component_5;
#line 2685 "handle_options.m"
  MR_Box libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5;
#line 2681 "handle_options.m"
};

#line 2672 "handle_options.m"
struct libs__handle_options__must_contain_2_p_0_env_0_s {
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3;
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4;
#line 2675 "handle_options.m"
  MR_bool libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2675 "handle_options.m"
  jmp_buf libs__handle_options__must_contain_2_p_0_env_0__commit_0;
#line 2675 "handle_options.m"
  MR_Word libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6;
#line 2675 "handle_options.m"
  MR_String libs__handle_options__must_contain_2_p_0_env_0__Component_5;
#line 2676 "handle_options.m"
  MR_Box libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5;
#line 2672 "handle_options.m"
};

#line 190 "handle_options.m"
struct libs__handle_options__process_given_options_6_p_0_4_env_0_s {
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1;
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2;
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__process_given_options_6_p_0_4_env_0__cont;
#line 190 "handle_options.m"
  void * libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr;
#line 190 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1;
#line 190 "handle_options.m"
  MR_Word libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2;
#line 190 "handle_options.m"
};

#line 2840 "handle_options.m"
struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s {
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1;
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont;
#line 2840 "handle_options.m"
  void * libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2840 "handle_options.m"
};

#line 3138 "handle_options.m"
struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s {
#line 3138 "handle_options.m"
  MR_Box * libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1;
#line 3138 "handle_options.m"
  MR_Cont libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont;
#line 3138 "handle_options.m"
  void * libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr;
#line 3138 "handle_options.m"
  MR_Word libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1;
#line 3138 "handle_options.m"
};

#line 2840 "handle_options.m"
struct libs__handle_options__compute_grade_2_p_0_2_env_0_s {
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1;
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__compute_grade_2_p_0_2_env_0__cont;
#line 2840 "handle_options.m"
  void * libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr;
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16;
#line 2840 "handle_options.m"
};

#line 190 "handle_options.m"
struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
#line 190 "handle_options.m"
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
#line 190 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
#line 190 "handle_options.m"
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
#line 190 "handle_options.m"
};


#line 298 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 301 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

#line 304 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0;

#line 307 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 310 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0;

#line 313 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

#line 316 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 319 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 322 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0;

#line 325 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 328 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0;

#line 331 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1;

#line 334 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2;

#line 337 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3;

#line 340 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4;

#line 343 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5;

#line 346 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6;

#line 349 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7;

#line 352 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8;

#line 355 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9;

#line 358 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10;

#line 361 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11;

#line 364 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12;

#line 367 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13;

#line 370 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_value_ordered_grade_component_0[14];

#line 373 "libs.handle_options.c"
static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_grade_component_0[14];

#line 376 "libs.handle_options.c"
static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_grade_component_0[14];

#line 379 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 382 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 384 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 387 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 390 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 392 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 394 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3);

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3138__1_3_p_0(
#line 3138 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3138 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3138 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14);

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_2(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_4(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_3(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_5(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_6(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2862 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_8(
#line 2862 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_7(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_9(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0(
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2840 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2791__1_3_p_0(
#line 2791 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2791 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2791 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15);

#line 2700 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2700__1_2_p_0(
#line 2700 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2700 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20);

#line 2221 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2221__1_2_f_0(
#line 2221 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2221 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1549);

#line 2219 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(
#line 2219 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2219 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1543);

#line 2228 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2228__1_1_f_0(
#line 2228 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1538);

#line 2227 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2227__1_1_f_0(
#line 2227 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1533);

#line 2197 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2197__1_2_f_0(
#line 2197 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1520);

#line 2193 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2193__1_2_f_0(
#line 2193 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2193 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1514);

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__2_2_p_0(
#line 2175 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1507,
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1661);

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__1_2_p_0(
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1508,
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1663);

#line 2157 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_3_f_0(
#line 2157 "handle_options.m"
  MR_String libs__handle_options__TargetArch_127,
#line 2157 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2157 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1495);

#line 2121 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
#line 2121 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2121 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1476);

#line 2111 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(
#line 2111 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2111 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1466);

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1449);

#line 2083 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_2_f_0(
#line 2083 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2083 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434);

#line 527 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__527__1_1_p_0(
#line 527 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_257);

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_2(
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2791 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_1(
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2791 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 2768 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0(
#line 2768 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2768 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2768 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2768 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2768 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27);

#line 2740 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2740 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3);

#line 2740 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2);

#line 3214 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3214 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3214 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 3199 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3199 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3199 "handle_options.m"
  MR_Char libs__handle_options__B_4);

#line 3188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 3183 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3183 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3183 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2);

#line 3144 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3144 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3144 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3144 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2884 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2884 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2884 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2884 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2882 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2882 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5);

#line 2822 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2822 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2822 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2);

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2685 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2685 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2681 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2676 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2676 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2672 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4);

#line 2700 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2700 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2700 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2700 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2);

#line 2654 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2654 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2631 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2631 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2631 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2631 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2631 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2631 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2631 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18);

#line 2619 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2619 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2619 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2619 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2617 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2617 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2617 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2617 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2);

#line 2609 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2609 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2609 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2607 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2607 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2607 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 2599 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2599 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2599 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2599 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2599 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2548 "handle_options.m"
  MR_Word libs__handle_options__X_1);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2548 "handle_options.m"
  MR_Word * libs__handle_options__X_1);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

#line 2511 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2511 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2511 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2496 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2496 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2496 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

#line 2476 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2476 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2476 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17);

#line 2458 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2458 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2442 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2442 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

#line 2362 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2362 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2362 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

#line 2221 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2221 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2221 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2219 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2219 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2228 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2228 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2228 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2227 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2227 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2227 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2197 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2193 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2193 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2193 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2157 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2157 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2157 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2121 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2121 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2111 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
#line 2111 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2111 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 2083 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 2083 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2083 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1);

#line 628 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 628 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_37,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_38,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_39,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_40,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_41,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_187,
#line 628 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_188,
#line 628 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_189);

#line 619 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 619 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 619 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 619 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6);

#line 527 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_23_p_0_1(
#line 527 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 527 "handle_options.m"
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

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 190 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 190 "handle_options.m"
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

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2840 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2768 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2768 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2768 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5);

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3138 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3138 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3138 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3138 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3138 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2840 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr);

#line 2537 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2537 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3);

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4);

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 190 "handle_options.m"
  void * libs__handle_options__env_ptr_arg);

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 190 "handle_options.m"
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

static /* final */ const MR_Box libs__handle_options_scalar_common_2[212][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[14][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[8][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[3][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[7][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9];

static /* final */ const MR_Box libs__handle_options_scalar_common_10[1][10];


#line 2889 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_11_0_s {
#line 2889 "handle_options.m"
  const MR_String libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2889 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2889 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2889 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2889 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2889 "handle_options.m"
};

static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[50];

#line 3146 "handle_options.m"
/* sealed */ struct libs__handle_options__vector_common_type_12_0_s {
#line 3146 "handle_options.m"
  const MR_Word libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3146 "handle_options.m"
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
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_2)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2014 The University of Melbourne\n")),
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
    ((MR_Box) ((MR_Integer) 252)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 88 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[87])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[33])))
  },
  /* row 89 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[17])))
  },
  /* row 94 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[93])))
  },
  /* row 95 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[95])))
  },
  /* row 97 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[87])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[15])))
  },
  /* row 98 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[34])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "il"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "java"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[30])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Integer) 483)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 108 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[107])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Integer) 298)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 110 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[109])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[108])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 112 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[111])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 114 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[113])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[112])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 116 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[115])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[114])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 118 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[117])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[116])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Integer) 218)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 120 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[119])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[120])))
  },
  /* row 124 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[29])))
  },
  /* row 126 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 128 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[127])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 130 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[129])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 132 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[131])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Integer) 190)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 134 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[133])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[112])))
  },
  /* row 135 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[115])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134])))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Integer) 189)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 137 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[136])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[136])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[116])))
  },
  /* row 139 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[117])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[135])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Integer) 191)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 141 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[140])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 142 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[133])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[141])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Integer) 188)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 144 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[143])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[117])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[143])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[134])))
  },
  /* row 147 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[136])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[146])))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 149 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[148])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 151 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[150])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[149])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 153 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[152])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[151])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Integer) 227)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 155 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[154])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[149])))
  },
  /* row 156 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[152])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[155])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Integer) 228)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 158 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[157])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 159 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[154])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[152])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[150])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[158])))
  },
  /* row 162 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[152])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[21])))
  },
  /* row 164 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[163])))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_Integer) 239)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 166 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[165])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 167 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 168 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[167])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[166])))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 170 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[169])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_Integer) 224)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 172 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[171])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Integer) 223)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 174 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[173])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[172])))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 176 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[175])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 178 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[177])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 180 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[179])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[178])))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Integer) 215)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 182 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[181])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[179])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[182])))
  },
  /* row 184 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 185 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[184])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 186 */
  {
    ((MR_Box) ((MR_Integer) 208)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 187 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[186])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[185])))
  },
  /* row 188 */
  {
    ((MR_Box) ((MR_Integer) 209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 189 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[188])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 190 */
  {
    ((MR_Box) ((MR_Integer) 208)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])))
  },
  /* row 191 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[190])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[189])))
  },
  /* row 192 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 197 */
  {
    ((MR_Box) ((MR_String) "c")),
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
    ((MR_Box) ((MR_Integer) 212)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Integer) 213)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "none"))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Integer) 211)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[202])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Integer) 214)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Integer) 219)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 220)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Integer) 248)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Integer) 182)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Integer) 229)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 225)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Integer) 298)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[103])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[105])))
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


static /* final */ const struct libs__handle_options__vector_common_type_11_0_s libs__handle_options_vector_common_11[50] = {
  /* row 0 */
  {
    (MR_String) "none",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[126]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "reg",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[164]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "jump",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[106]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "hlc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) "hl_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[92]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "hlc_nest",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[101]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]),
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "il",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "ilc",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]),
    (MR_Integer) 1
  },
  /* row 12 */
  {
    (MR_String) "java",
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]),
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]),
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
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[128]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "threadscope",
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[176]),
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
    (MR_String) "agc",
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 21 */
  {
    (MR_String) "prof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 22 */
  {
    (MR_String) "proftime",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[147]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) "profcalls",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[139]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 24 */
  {
    (MR_String) "memprof",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[118]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 25 */
  {
    (MR_String) "profall",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 26 */
  {
    (MR_String) "profdeep",
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 27 */
  {
    (MR_String) "tsw",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[191]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) "tsc",
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[187]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 29 */
  {
    (MR_String) "tr",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[180]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 30 */
  {
    (MR_String) "trseg",
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[183]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 31 */
  {
    (MR_String) "mm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[122]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 32 */
  {
    (MR_String) "dmm",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "mmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[122]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "dmmsc",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 35 */
  {
    (MR_String) "mmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[124]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 36 */
  {
    (MR_String) "dmmos",
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[60]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 37 */
  {
    (MR_String) "pregen",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[132]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) "spf",
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[168]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 39 */
  {
    (MR_String) "picreg",
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[130]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 40 */
  {
    (MR_String) "decldebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 41 */
  {
    (MR_String) "debug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[47]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 42 */
  {
    (MR_String) "ssdebug",
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[170]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "ll_debug",
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[110]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 44 */
  {
    (MR_String) "exts",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[71]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 45 */
  {
    (MR_String) "stseg",
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[174]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 46 */
  {
    (MR_String) "rbmm",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[153]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "rbmmd",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[156]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 48 */
  {
    (MR_String) "rbmmp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162]),
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)),
    (MR_Integer) 1
  },
  /* row 49 */
  {
    (MR_String) "rbmmdp",
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[160]),
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
    (MR_Word) &libs__handle_options_scalar_common_2[200]
  },
  /* row 7 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[201]
  },
  /* row 8 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[203]
  },
  /* row 9 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[111]
  },
  /* row 10 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[117]
  },
  /* row 11 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[143]
  },
  /* row 12 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[133]
  },
  /* row 13 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[204]
  },
  /* row 14 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[177]
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
    (MR_Word) &libs__handle_options_scalar_common_2[119]
  },
  /* row 18 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[205]
  },
  /* row 19 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[206]
  },
  /* row 20 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[207]
  },
  /* row 21 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[208]
  },
  /* row 22 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[44]
  },
  /* row 23 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[209]
  },
  /* row 24 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[173]
  },
  /* row 25 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[68]
  },
  /* row 26 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[210]
  },
  /* row 27 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[150]
  },
  /* row 28 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[148]
  },
  /* row 29 */
  {
    (MR_Word) &libs__handle_options_scalar_common_2[211]
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
#line 2548 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2548 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


#line 3580 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3589 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 3597 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__handle_options__type_ctor_info_grade_component_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3606 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 3615 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__set_ordlist__pti_set_ordlist_1__plain_libs__handle_options__type_ctor_info_grade_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0
  }
};

#line 3623 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3632 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3642 "libs.handle_options.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3650 "libs.handle_options.c"
static const MR_FA_TypeInfo_Struct1 libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 3658 "libs.handle_options.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &libs__handle_options__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 3668 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_0 = {
  (MR_String) "comp_gcc_ext",
  (MR_Integer) 0
};

#line 3674 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_1 = {
  (MR_String) "comp_par",
  (MR_Integer) 1
};

#line 3680 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_2 = {
  (MR_String) "comp_par_threadscope",
  (MR_Integer) 2
};

#line 3686 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_3 = {
  (MR_String) "comp_gc",
  (MR_Integer) 3
};

#line 3692 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_4 = {
  (MR_String) "comp_prof",
  (MR_Integer) 4
};

#line 3698 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_5 = {
  (MR_String) "comp_term_size",
  (MR_Integer) 5
};

#line 3704 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_6 = {
  (MR_String) "comp_trail",
  (MR_Integer) 6
};

#line 3710 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_7 = {
  (MR_String) "comp_minimal_model",
  (MR_Integer) 7
};

#line 3716 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_8 = {
  (MR_String) "comp_pregen_spf",
  (MR_Integer) 8
};

#line 3722 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_9 = {
  (MR_String) "comp_pic",
  (MR_Integer) 9
};

#line 3728 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_10 = {
  (MR_String) "comp_lowlevel",
  (MR_Integer) 10
};

#line 3734 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_11 = {
  (MR_String) "comp_trace",
  (MR_Integer) 11
};

#line 3740 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_12 = {
  (MR_String) "comp_stack_extend",
  (MR_Integer) 12
};

#line 3746 "libs.handle_options.c"
static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_grade_component_0_13 = {
  (MR_String) "comp_regions",
  (MR_Integer) 13
};

#line 3752 "libs.handle_options.c"
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

#line 3770 "libs.handle_options.c"
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

#line 3788 "libs.handle_options.c"
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

#line 3806 "libs.handle_options.c"
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

#line 3827 "libs.handle_options.c"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0_10001(
#line 3830 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3832 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 3834 "libs.handle_options.c"
{
#line 3836 "libs.handle_options.c"
  {
#line 3838 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;

#line 3841 "libs.handle_options.c"
    {
#line 3843 "libs.handle_options.c"
      libs__handle_options__succeeded = libs__handle_options____Unify____grade_component_0_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 3846 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 3848 "libs.handle_options.c"
  }
#line 3850 "libs.handle_options.c"
}

#line 3853 "libs.handle_options.c"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0_10001(
#line 3856 "libs.handle_options.c"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3858 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3860 "libs.handle_options.c"
  MR_Box libs__handle_options__wrapper_arg_3)
#line 3862 "libs.handle_options.c"
{
#line 3864 "libs.handle_options.c"
  {
#line 3866 "libs.handle_options.c"
    MR_Word libs__handle_options__conv0_HeadVar__1_1;

#line 3869 "libs.handle_options.c"
    {
#line 3871 "libs.handle_options.c"
      libs__handle_options____Compare____grade_component_0_0(&libs__handle_options__conv0_HeadVar__1_1, ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3));
    }
#line 3874 "libs.handle_options.c"
    *libs__handle_options__wrapper_arg_1 = ((MR_Box) (libs__handle_options__conv0_HeadVar__1_1));
#line 3876 "libs.handle_options.c"
  }
#line 3878 "libs.handle_options.c"
}

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__reset_grade_options__3138__1_3_p_0(
#line 3138 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_12,
#line 3138 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_13,
#line 3138 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_14)
#line 3138 "handle_options.m"
{
#line 3138 "handle_options.m"
  {
#line 3138 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3138 "handle_options.m"
    MR_Word libs__handle_options__Option_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 0)));
#line 3138 "handle_options.m"
    MR_Word libs__handle_options__Value_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_12, (MR_Integer) 1)));

#line 3141 "handle_options.m"
    {
#line 3141 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_8)), ((MR_Box) (libs__handle_options__Value_9)), libs__handle_options__HeadVar__2_13, libs__handle_options__HeadVar__3_14);
#line 3141 "handle_options.m"
      return;
    }
#line 3138 "handle_options.m"
  }
#line 3138 "handle_options.m"
}

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_2(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2847 "handle_options.m"
{
#line 2847 "handle_options.m"
  {
#line 2847 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2847 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_0, 1);
#line 2847 "handle_options.m"
  }
#line 2847 "handle_options.m"
}

#line 2848 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_4(
#line 2848 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2848 "handle_options.m"
{
#line 2848 "handle_options.m"
  {
#line 2848 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2848 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_17_17 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv0_V_17_17);
#line 2848 "handle_options.m"
    {
#line 2848 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_3(libs__handle_options__env_ptr);
#line 2848 "handle_options.m"
      return;
    }
#line 2848 "handle_options.m"
  }
#line 2848 "handle_options.m"
}

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_3(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2847 "handle_options.m"
{
#line 2847 "handle_options.m"
  {
#line 2847 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2847 "handle_options.m"
    {
#line 2850 "handle_options.m"
      MR_Word libs__handle_options__V_26_26;
#line 2850 "handle_options.m"
      MR_Box libs__handle_options__conv1_V_26_26;

#line 2848 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Opt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_17_17, (MR_Integer) 0)));
#line 2848 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Value_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_17_17, (MR_Integer) 1)));
#line 2850 "handle_options.m"
      {
#line 2850 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Opt_11)), &libs__handle_options__conv1_V_26_26);
      }
#line 2850 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2850 "handle_options.m"
        {
#line 2850 "handle_options.m"
          libs__handle_options__V_26_26 = ((MR_Word) libs__handle_options__conv1_V_26_26);
#line 2850 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2850 "handle_options.m"
        }
#line 2850 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2850 "handle_options.m"
        {
#line 2850 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Value_12, libs__handle_options__V_26_26);
        }
#line 2849 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded);
#line 2849 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2849 "handle_options.m"
        {
#line 2849 "handle_options.m"
          libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_2(libs__handle_options__env_ptr);
#line 2849 "handle_options.m"
          return;
        }
#line 2847 "handle_options.m"
    }
#line 2847 "handle_options.m"
  }
#line 2847 "handle_options.m"
}

#line 2847 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_5(
#line 2847 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2847 "handle_options.m"
{
#line 2847 "handle_options.m"
  {
#line 2847 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2847 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_0) == 0)
#line 2847 "handle_options.m"
      {
#line 2847 "handle_options.m"
        {
#line 2848 "handle_options.m"
          {
#line 2848 "handle_options.m"
            mercury__list__member_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[1], &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv0_V_17_17, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__CompOpts_8, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_4, libs__handle_options__env_ptr);
          }
#line 2847 "handle_options.m"
        }
#line 2847 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2847 "handle_options.m"
      }
#line 2847 "handle_options.m"
    else
#line 2847 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2847 "handle_options.m"
  }
#line 2847 "handle_options.m"
}

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_6(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2861 "handle_options.m"
{
#line 2861 "handle_options.m"
  {
#line 2861 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2861 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_1, 1);
#line 2861 "handle_options.m"
  }
#line 2861 "handle_options.m"
}

#line 2862 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_8(
#line 2862 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2862 "handle_options.m"
{
#line 2862 "handle_options.m"
  {
#line 2862 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2862 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Target_14 = ((MR_Word) (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv2_Target_14);
#line 2862 "handle_options.m"
    {
#line 2862 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_7(libs__handle_options__env_ptr);
#line 2862 "handle_options.m"
      return;
    }
#line 2862 "handle_options.m"
  }
#line 2862 "handle_options.m"
}

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_7(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2861 "handle_options.m"
{
#line 2861 "handle_options.m"
  {
#line 2861 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2861 "handle_options.m"
    {
#line 2863 "handle_options.m"
      MR_Box libs__handle_options__conv3_V_27_27;

#line 2863 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_18_18 = (MR_Integer) 172;
#line 4123 "libs.handle_options.c"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_24_24 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 2863 "handle_options.m"
      {
#line 2863 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_24_24, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_23_23, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Options_3, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_18_18)), &libs__handle_options__conv3_V_27_27);
      }
#line 2863 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2863 "handle_options.m"
        {
#line 2863 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_27_27 = ((MR_Word) libs__handle_options__conv3_V_27_27);
#line 2863 "handle_options.m"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2863 "handle_options.m"
        }
#line 2861 "handle_options.m"
      if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2861 "handle_options.m"
        {
#line 2863 "handle_options.m"
          {
#line 2863 "handle_options.m"
            (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = mercury__getopt_io____Unify____option_data_0_0((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Target_14, (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__V_27_27);
          }
#line 2863 "handle_options.m"
          if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2863 "handle_options.m"
            {
#line 2863 "handle_options.m"
              libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_6(libs__handle_options__env_ptr);
#line 2863 "handle_options.m"
              return;
            }
#line 2861 "handle_options.m"
        }
#line 2861 "handle_options.m"
    }
#line 2861 "handle_options.m"
  }
#line 2861 "handle_options.m"
}

#line 2861 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_9(
#line 2861 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2861 "handle_options.m"
{
#line 2861 "handle_options.m"
  {
#line 2861 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2861 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__commit_1) == 0)
#line 2861 "handle_options.m"
      {
#line 2861 "handle_options.m"
        {
#line 2861 "handle_options.m"
          MR_Word libs__handle_options__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__MaybeTargets_9, (MR_Integer) 0)));

#line 4188 "libs.handle_options.c"
          (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
#line 2862 "handle_options.m"
          {
#line 2862 "handle_options.m"
            mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__TypeCtorInfo_23_23, &(libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__conv2_Target_14, libs__handle_options__Targets_13, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_8, libs__handle_options__env_ptr);
          }
#line 2861 "handle_options.m"
        }
#line 2861 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_FALSE;
#line 2861 "handle_options.m"
      }
#line 2861 "handle_options.m"
    else
#line 2861 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2861 "handle_options.m"
  }
#line 2861 "handle_options.m"
}

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2847 "handle_options.m"
    {
#line 2847 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_5(libs__handle_options__env_ptr);
    }
#line 2847 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded);
#line 2840 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2840 "handle_options.m"
      {
#line 2855 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__IncludeInGradeString_10 == (MR_Integer) 1);
#line 2840 "handle_options.m"
        if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2840 "handle_options.m"
          {
#line 2864 "handle_options.m"
            if (((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__MaybeTargets_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2865 "handle_options.m"
              (libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded = MR_TRUE;
#line 2864 "handle_options.m"
            else
#line 2861 "handle_options.m"
              {
#line 2861 "handle_options.m"
                {
#line 2861 "handle_options.m"
                  libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_9(libs__handle_options__env_ptr);
                }
#line 2861 "handle_options.m"
              }
#line 2840 "handle_options.m"
            if ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__succeeded)
#line 2840 "handle_options.m"
              {
#line 2867 "handle_options.m"
                {
#line 2867 "handle_options.m"
                  MR_Word base;
#line 2867 "handle_options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2867 "handle_options.m"
                  *((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__HeadVar__2_16) = base;
#line 2867 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Comp_7));
#line 2867 "handle_options.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Name_6));
#line 2867 "handle_options.m"
                }
#line 2867 "handle_options.m"
                {
#line 2867 "handle_options.m"
                  ((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont_env_ptr);
#line 2867 "handle_options.m"
                  return;
                }
#line 2840 "handle_options.m"
              }
#line 2840 "handle_options.m"
          }
#line 2840 "handle_options.m"
      }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
}

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0(
#line 2840 "handle_options.m"
  MR_Word libs__handle_options__Options_3,
#line 2840 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_16,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0_s libs__handle_options__env;

#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Options_3 = libs__handle_options__Options_3;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__HeadVar__2_16 = libs__handle_options__HeadVar__2_16;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont = libs__handle_options__cont;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2841 "handle_options.m"
    {
#line 2841 "handle_options.m"
      libs__handle_options__grade_component_table_5_p_2(&(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Name_6, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__Comp_7, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__CompOpts_8, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__MaybeTargets_9, &(libs__handle_options__env).libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_env_0__IncludeInGradeString_10, libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0_1, &libs__handle_options__env);
    }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
}

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__add_option_list__2791__1_3_p_0(
#line 2791 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_13,
#line 2791 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_14,
#line 2791 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_15)
#line 2791 "handle_options.m"
{
#line 2791 "handle_options.m"
  {
#line 2791 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2791 "handle_options.m"
    MR_Word libs__handle_options__Option_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 0)));
#line 2791 "handle_options.m"
    MR_Word libs__handle_options__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__HeadVar__1_13, (MR_Integer) 1)));

#line 2793 "handle_options.m"
    {
#line 2793 "handle_options.m"
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__handle_options__Option_10)), ((MR_Box) (libs__handle_options__Data_11)), libs__handle_options__HeadVar__2_14, libs__handle_options__HeadVar__3_15);
#line 2793 "handle_options.m"
      return;
    }
#line 2791 "handle_options.m"
  }
#line 2791 "handle_options.m"
}

#line 2700 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2700__1_2_p_0(
#line 2700 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_19,
#line 2700 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_20)
#line 2700 "handle_options.m"
{
#line 2700 "handle_options.m"
  {
#line 2700 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2701 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2701 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2701 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2701 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2701 "handle_options.m"
    {
#line 2701 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_19, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2700 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2700 "handle_options.m"
      {
#line 2700 "handle_options.m"
        *libs__handle_options__HeadVar__2_20 = libs__handle_options__HeadVar__1_19;
#line 2700 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2700 "handle_options.m"
      }
#line 2700 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2700 "handle_options.m"
  }
#line 2700 "handle_options.m"
}

#line 2221 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2221__1_2_f_0(
#line 2221 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2221 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1549)
#line 2221 "handle_options.m"
{
#line 2221 "handle_options.m"
  {
#line 2221 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2221 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1550;
#line 2221 "handle_options.m"
    MR_String libs__handle_options__V_1551_1551;
#line 2221 "handle_options.m"
    MR_String libs__handle_options__V_1552_1552;
#line 2222 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2222 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1552_1552;

#line 2222 "handle_options.m"
    {
#line 2222 "handle_options.m"
      libs__handle_options__conv1_V_1552_1552 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1549)));
    }
#line 2222 "handle_options.m"
    libs__handle_options__V_1552_1552 = ((MR_String) libs__handle_options__conv1_V_1552_1552);
#line 2222 "handle_options.m"
    {
#line 2222 "handle_options.m"
      libs__handle_options__V_1551_1551 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1552_1552, (MR_String) "Mercury");
    }
#line 2222 "handle_options.m"
    {
#line 2222 "handle_options.m"
      return libs__handle_options__HeadVar__3_1550 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1551_1551, (MR_String) "hrls");
    }
#line 2221 "handle_options.m"
    return libs__handle_options__HeadVar__3_1550;
#line 2221 "handle_options.m"
  }
#line 2221 "handle_options.m"
}

#line 2219 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(
#line 2219 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2219 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1543)
#line 2219 "handle_options.m"
{
#line 2219 "handle_options.m"
  {
#line 2219 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1544;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__V_1545_1545;
#line 2219 "handle_options.m"
    MR_String libs__handle_options__V_1546_1546;
#line 2220 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2220 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1546_1546;

#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      libs__handle_options__conv1_V_1546_1546 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1543)));
    }
#line 2220 "handle_options.m"
    libs__handle_options__V_1546_1546 = ((MR_String) libs__handle_options__conv1_V_1546_1546);
#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      libs__handle_options__V_1545_1545 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1546_1546, (MR_String) "Mercury");
    }
#line 2220 "handle_options.m"
    {
#line 2220 "handle_options.m"
      return libs__handle_options__HeadVar__3_1544 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1545_1545, (MR_String) "mihs");
    }
#line 2219 "handle_options.m"
    return libs__handle_options__HeadVar__3_1544;
#line 2219 "handle_options.m"
  }
#line 2219 "handle_options.m"
}

#line 2228 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2228__1_1_f_0(
#line 2228 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1538)
#line 2228 "handle_options.m"
{
#line 2228 "handle_options.m"
  {
#line 2228 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2228 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1539;
#line 2228 "handle_options.m"
    MR_String libs__handle_options__V_1540_1540;

#line 2228 "handle_options.m"
    {
#line 2228 "handle_options.m"
      libs__handle_options__V_1540_1540 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1538, (MR_String) "Mercury");
    }
#line 2228 "handle_options.m"
    {
#line 2228 "handle_options.m"
      return libs__handle_options__HeadVar__2_1539 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1540_1540, (MR_String) "hrls");
    }
#line 2228 "handle_options.m"
    return libs__handle_options__HeadVar__2_1539;
#line 2228 "handle_options.m"
  }
#line 2228 "handle_options.m"
}

#line 2227 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2227__1_1_f_0(
#line 2227 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1533)
#line 2227 "handle_options.m"
{
#line 2227 "handle_options.m"
  {
#line 2227 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2227 "handle_options.m"
    MR_String libs__handle_options__HeadVar__2_1534;
#line 2227 "handle_options.m"
    MR_String libs__handle_options__V_1535_1535;

#line 2227 "handle_options.m"
    {
#line 2227 "handle_options.m"
      libs__handle_options__V_1535_1535 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__1_1533, (MR_String) "Mercury");
    }
#line 2227 "handle_options.m"
    {
#line 2227 "handle_options.m"
      return libs__handle_options__HeadVar__2_1534 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1535_1535, (MR_String) "mihs");
    }
#line 2227 "handle_options.m"
    return libs__handle_options__HeadVar__2_1534;
#line 2227 "handle_options.m"
  }
#line 2227 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2197__1_2_f_0(
#line 2197 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2197 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1520)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2197 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1521;
#line 2197 "handle_options.m"
    MR_String libs__handle_options__V_1522_1522;
#line 2197 "handle_options.m"
    MR_String libs__handle_options__V_1523_1523;
#line 2198 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2198 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1523_1523;

#line 2198 "handle_options.m"
    {
#line 2198 "handle_options.m"
      libs__handle_options__conv1_V_1523_1523 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1520)));
    }
#line 2198 "handle_options.m"
    libs__handle_options__V_1523_1523 = ((MR_String) libs__handle_options__conv1_V_1523_1523);
#line 2198 "handle_options.m"
    {
#line 2198 "handle_options.m"
      libs__handle_options__V_1522_1522 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1523_1523, (MR_String) "Mercury");
    }
#line 2198 "handle_options.m"
    {
#line 2198 "handle_options.m"
      return libs__handle_options__HeadVar__3_1521 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1522_1522, (MR_String) "inits");
    }
#line 2197 "handle_options.m"
    return libs__handle_options__HeadVar__3_1521;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2193 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2193__1_2_f_0(
#line 2193 "handle_options.m"
  MR_Word libs__handle_options__ToGradeSubdir_159,
#line 2193 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1514)
#line 2193 "handle_options.m"
{
#line 2193 "handle_options.m"
  {
#line 2193 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2193 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1515;
#line 2193 "handle_options.m"
    MR_String libs__handle_options__V_1516_1516;
#line 2193 "handle_options.m"
    MR_String libs__handle_options__V_1517_1517;
#line 2193 "handle_options.m"
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, (MR_Integer) 1)));
#line 2193 "handle_options.m"
    MR_Box libs__handle_options__conv1_V_1517_1517;

#line 2193 "handle_options.m"
    {
#line 2193 "handle_options.m"
      libs__handle_options__conv1_V_1517_1517 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_159), ((MR_Box) (libs__handle_options__HeadVar__2_1514)));
    }
#line 2193 "handle_options.m"
    libs__handle_options__V_1517_1517 = ((MR_String) libs__handle_options__conv1_V_1517_1517);
#line 2193 "handle_options.m"
    {
#line 2193 "handle_options.m"
      libs__handle_options__V_1516_1516 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1517_1517, (MR_String) "Mercury");
    }
#line 2193 "handle_options.m"
    {
#line 2193 "handle_options.m"
      return libs__handle_options__HeadVar__3_1515 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1516_1516, (MR_String) "lib");
    }
#line 2193 "handle_options.m"
    return libs__handle_options__HeadVar__3_1515;
#line 2193 "handle_options.m"
  }
#line 2193 "handle_options.m"
}

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__2_2_p_0(
#line 2175 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1507,
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1661)
#line 2175 "handle_options.m"
{
#line 2175 "handle_options.m"
  {
#line 2175 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2175 "handle_options.m"
    {
#line 2175 "handle_options.m"
      return libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1507, ((MR_Box) (libs__handle_options__HeadVar__2_1661)));
    }
#line 2175 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2175 "handle_options.m"
  }
#line 2175 "handle_options.m"
}

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__1_2_p_0(
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1508,
#line 2175 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1663)
#line 2175 "handle_options.m"
{
#line 2175 "handle_options.m"
  {
#line 2175 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1508, libs__handle_options__HeadVar__2_1663) == 0);

#line 2175 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2175 "handle_options.m"
  }
#line 2175 "handle_options.m"
}

#line 2157 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_3_f_0(
#line 2157 "handle_options.m"
  MR_String libs__handle_options__TargetArch_127,
#line 2157 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2157 "handle_options.m"
  MR_String libs__handle_options__HeadVar__3_1495)
#line 2157 "handle_options.m"
{
#line 2157 "handle_options.m"
  {
#line 2157 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2157 "handle_options.m"
    MR_String libs__handle_options__HeadVar__4_1496;
#line 2157 "handle_options.m"
    MR_String libs__handle_options__V_1497_1497;
#line 2157 "handle_options.m"
    MR_String libs__handle_options__V_1498_1498;

#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      libs__handle_options__V_1498_1498 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__3_1495, (MR_String) "Mercury");
    }
#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      libs__handle_options__V_1497_1497 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1498_1498, libs__handle_options__GradeString_139);
    }
#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      return libs__handle_options__HeadVar__4_1496 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1497_1497, libs__handle_options__TargetArch_127);
    }
#line 2157 "handle_options.m"
    return libs__handle_options__HeadVar__4_1496;
#line 2157 "handle_options.m"
  }
#line 2157 "handle_options.m"
}

#line 2121 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(
#line 2121 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2121 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1476)
#line 2121 "handle_options.m"
{
#line 2121 "handle_options.m"
  {
#line 2121 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1477;
#line 2121 "handle_options.m"
    MR_String libs__handle_options__V_1478_1478;

#line 2123 "handle_options.m"
    {
#line 2123 "handle_options.m"
      libs__handle_options__V_1478_1478 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1476, (MR_String) "modules");
    }
#line 2123 "handle_options.m"
    {
#line 2123 "handle_options.m"
      return libs__handle_options__HeadVar__3_1477 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1478_1478, libs__handle_options__GradeString_139);
    }
#line 2121 "handle_options.m"
    return libs__handle_options__HeadVar__3_1477;
#line 2121 "handle_options.m"
  }
#line 2121 "handle_options.m"
}

#line 2111 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(
#line 2111 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2111 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1466)
#line 2111 "handle_options.m"
{
#line 2111 "handle_options.m"
  {
#line 2111 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2111 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1467;
#line 2111 "handle_options.m"
    MR_String libs__handle_options__V_1468_1468;

#line 2114 "handle_options.m"
    {
#line 2114 "handle_options.m"
      libs__handle_options__V_1468_1468 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_139);
    }
#line 2113 "handle_options.m"
    {
#line 2113 "handle_options.m"
      return libs__handle_options__HeadVar__3_1467 = mercury__dir__make_path_name_2_f_0(libs__handle_options__HeadVar__2_1466, libs__handle_options__V_1468_1468);
    }
#line 2111 "handle_options.m"
    return libs__handle_options__HeadVar__3_1467;
#line 2111 "handle_options.m"
  }
#line 2111 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(
#line 2098 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2098 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1449)
#line 2098 "handle_options.m"
{
#line 2098 "handle_options.m"
  {
#line 2098 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1450;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__V_1451_1451;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__V_1452_1452;

#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      libs__handle_options__V_1452_1452 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1449, (MR_String) "lib");
    }
#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      libs__handle_options__V_1451_1451 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1452_1452, libs__handle_options__GradeString_139);
    }
#line 2100 "handle_options.m"
    {
#line 2100 "handle_options.m"
      return libs__handle_options__HeadVar__3_1450 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1451_1451, (MR_String) "inc");
    }
#line 2098 "handle_options.m"
    return libs__handle_options__HeadVar__3_1450;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
}

#line 2083 "handle_options.m"
static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_2_f_0(
#line 2083 "handle_options.m"
  MR_String libs__handle_options__GradeString_139,
#line 2083 "handle_options.m"
  MR_String libs__handle_options__HeadVar__2_1434)
#line 2083 "handle_options.m"
{
#line 2083 "handle_options.m"
  {
#line 2083 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2083 "handle_options.m"
    MR_String libs__handle_options__HeadVar__3_1435;
#line 2083 "handle_options.m"
    MR_String libs__handle_options__V_1436_1436;

#line 2085 "handle_options.m"
    {
#line 2085 "handle_options.m"
      libs__handle_options__V_1436_1436 = mercury__dir__f_slash_2_f_0(libs__handle_options__HeadVar__2_1434, (MR_String) "lib");
    }
#line 2085 "handle_options.m"
    {
#line 2085 "handle_options.m"
      return libs__handle_options__HeadVar__3_1435 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1436_1436, libs__handle_options__GradeString_139);
    }
#line 2083 "handle_options.m"
    return libs__handle_options__HeadVar__3_1435;
#line 2083 "handle_options.m"
  }
#line 2083 "handle_options.m"
}

#line 527 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__check_option_values__527__1_1_p_0(
#line 527 "handle_options.m"
  MR_Char libs__handle_options__HeadVar__1_257)
#line 527 "handle_options.m"
{
#line 527 "handle_options.m"
  {
#line 527 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__1_257 == (MR_Char) 46);

#line 527 "handle_options.m"
    return libs__handle_options__succeeded;
#line 527 "handle_options.m"
  }
#line 527 "handle_options.m"
}

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_2(
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2791 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2791 "handle_options.m"
{
#line 2791 "handle_options.m"
  {
#line 2791 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2791 "handle_options.m"
    MR_Word libs__handle_options__conv2_HeadVar__3_15;

#line 2791 "handle_options.m"
    {
#line 2791 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2791__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv2_HeadVar__3_15);
    }
#line 2791 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_15));
#line 2791 "handle_options.m"
  }
#line 2791 "handle_options.m"
}

#line 2791 "handle_options.m"
static void MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0_1(
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2791 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2791 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2791 "handle_options.m"
{
#line 2791 "handle_options.m"
  {
#line 2791 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2791 "handle_options.m"
    MR_Word libs__handle_options__conv0_HeadVar__3_15;

#line 2791 "handle_options.m"
    {
#line 2791 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__add_option_list__2791__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv0_HeadVar__3_15);
    }
#line 2791 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_15));
#line 2791 "handle_options.m"
  }
#line 2791 "handle_options.m"
}

#line 2768 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0(
#line 2768 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_23,
#line 2768 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_24,
#line 2768 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_25,
#line 2768 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__4_26,
#line 2768 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_27)
#line 2768 "handle_options.m"
{
#line 2768 "handle_options.m"
  {
#line 2768 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_41_41;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_21_62;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_22_63;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__Comp_15;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__CompOpts_16;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__MaybeTargets_17;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__Opts1_19;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__V_53_53;
#line 2770 "handle_options.m"
    MR_Word libs__handle_options__V_18_18;
#line 2773 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_40_40;
#line 2791 "handle_options.m"
    MR_Box libs__handle_options__conv1_Opts1_19;
#line 2782 "handle_options.m"
    MR_Word libs__handle_options__Target_20;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2780 "handle_options.m"
    MR_Word libs__handle_options__V_29_29;

#line 2770 "handle_options.m"
    {
#line 2770 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__HeadVar__1_23, &libs__handle_options__Comp_15, &libs__handle_options__CompOpts_16, &libs__handle_options__MaybeTargets_17, &libs__handle_options__V_18_18);
    }
#line 2768 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2768 "handle_options.m"
      {
#line 5038 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_40_40 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2773 "handle_options.m"
        {
#line 2773 "handle_options.m"
          libs__handle_options__succeeded = mercury__set__member_2_p_0(libs__handle_options__TypeCtorInfo_40_40, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26);
        }
#line 2773 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2768 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2768 "handle_options.m"
          {
#line 5051 "libs.handle_options.c"
            libs__handle_options__TypeCtorInfo_41_41 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2774 "handle_options.m"
            {
#line 2774 "handle_options.m"
              mercury__set__insert_3_p_0(libs__handle_options__TypeCtorInfo_41_41, ((MR_Box) (libs__handle_options__Comp_15)), libs__handle_options__HeadVar__4_26, libs__handle_options__HeadVar__5_27);
            }
#line 2791 "handle_options.m"
            libs__handle_options__V_53_53 = (MR_Word) &libs__handle_options_scalar_common_1[20];
#line 5060 "libs.handle_options.c"
            libs__handle_options__TypeInfo_21_62 = (MR_Word) &libs__handle_options_scalar_common_1[1];
#line 5062 "libs.handle_options.c"
            libs__handle_options__TypeInfo_22_63 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 2791 "handle_options.m"
            {
#line 2791 "handle_options.m"
              mercury__list__foldl_4_p_0(libs__handle_options__TypeInfo_21_62, libs__handle_options__TypeInfo_22_63, libs__handle_options__V_53_53, libs__handle_options__CompOpts_16, ((MR_Box) (libs__handle_options__HeadVar__2_24)), &libs__handle_options__conv1_Opts1_19);
            }
#line 2791 "handle_options.m"
            libs__handle_options__Opts1_19 = ((MR_Word) libs__handle_options__conv1_Opts1_19);
#line 2780 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeTargets_17)) == (MR_mktag((MR_Integer) 1)));
#line 2780 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2780 "handle_options.m"
              {
#line 2780 "handle_options.m"
                libs__handle_options__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTargets_17, (MR_Integer) 0)));
#line 2780 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2780 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 2780 "handle_options.m"
                  {
#line 2780 "handle_options.m"
                    libs__handle_options__Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 0)));
#line 2780 "handle_options.m"
                    libs__handle_options__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_28_28, (MR_Integer) 1)));
#line 2780 "handle_options.m"
                    libs__handle_options__succeeded = (libs__handle_options__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2780 "handle_options.m"
                  }
#line 2780 "handle_options.m"
              }
#line 2782 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2781 "handle_options.m"
              {
#line 2781 "handle_options.m"
                MR_Word libs__handle_options__V_30_30;
#line 2781 "handle_options.m"
                MR_Word libs__handle_options__V_31_31;
#line 2791 "handle_options.m"
                MR_Box libs__handle_options__conv3_HeadVar__3_25;

#line 2781 "handle_options.m"
                {
#line 2781 "handle_options.m"
                  libs__handle_options__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2781 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 0) = ((MR_Box) ((MR_Integer) 172));
#line 2781 "handle_options.m"
                  MR_hl_field(MR_mktag(0), libs__handle_options__V_31_31, 1) = ((MR_Box) (libs__handle_options__Target_20));
#line 2781 "handle_options.m"
                }
#line 2781 "handle_options.m"
                {
#line 2781 "handle_options.m"
                  libs__handle_options__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2781 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 0) = ((MR_Box) (libs__handle_options__V_31_31));
#line 2781 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2781 "handle_options.m"
                }
#line 2791 "handle_options.m"
                {
#line 2791 "handle_options.m"
                  mercury__list__foldl_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[21], libs__handle_options__V_30_30, ((MR_Box) (libs__handle_options__Opts1_19)), &libs__handle_options__conv3_HeadVar__3_25);
                }
#line 2791 "handle_options.m"
                *libs__handle_options__HeadVar__3_25 = ((MR_Word) libs__handle_options__conv3_HeadVar__3_25);
#line 2781 "handle_options.m"
              }
#line 2782 "handle_options.m"
            else
#line 2783 "handle_options.m"
              *libs__handle_options__HeadVar__3_25 = libs__handle_options__Opts1_19;
#line 2782 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2768 "handle_options.m"
          }
#line 2768 "handle_options.m"
      }
#line 2768 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2768 "handle_options.m"
  }
#line 2768 "handle_options.m"
}

#line 2740 "handle_options.m"
static void MR_CALL 
libs__handle_options____Compare____grade_component_0_0(
#line 2740 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__3_3)
#line 2740 "handle_options.m"
{
#line 2740 "handle_options.m"
  {
#line 2740 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2740 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar1_4 = (MR_Integer) libs__handle_options__HeadVar__2_2;
#line 2740 "handle_options.m"
    MR_Integer libs__handle_options__Cast_HeadVar2_5 = (MR_Integer) libs__handle_options__HeadVar__3_3;

#line 2740 "handle_options.m"
    {
#line 2740 "handle_options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__handle_options__HeadVar__1_1, libs__handle_options__Cast_HeadVar1_4, libs__handle_options__Cast_HeadVar2_5);
#line 2740 "handle_options.m"
      return;
    }
#line 2740 "handle_options.m"
  }
#line 2740 "handle_options.m"
}

#line 2740 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options____Unify____grade_component_0_0(
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_1,
#line 2740 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__2_2)
#line 2740 "handle_options.m"
{
#line 5193 "libs.handle_options.c"
  {
#line 5195 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__HeadVar__2_1 == libs__handle_options__HeadVar__2_2);

#line 5198 "libs.handle_options.c"
    return libs__handle_options__succeeded;
#line 5200 "libs.handle_options.c"
  }
#line 2740 "handle_options.m"
}

#line 3214 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
#line 3214 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 3214 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 3214 "handle_options.m"
{
#line 3217 "handle_options.m"
  {
#line 3217 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3217 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3230 "handle_options.m"
      {
#line 3230 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_String) "bdgvP";
#line 3230 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3230 "handle_options.m"
      }
#line 3217 "handle_options.m"
    else
#line 3217 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ALL") == 0))
#line 3217 "handle_options.m"
        {
#line 3217 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ";
#line 3217 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 3217 "handle_options.m"
        }
#line 3217 "handle_options.m"
      else
#line 3217 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "all") == 0))
#line 3219 "handle_options.m"
          {
#line 3219 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCMPSTZ";
#line 3219 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3219 "handle_options.m"
          }
#line 3217 "handle_options.m"
        else
#line 3217 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "cmp") == 0))
#line 3221 "handle_options.m"
            {
#line 3221 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_String) "bdfgilmnprstuvzP";
#line 3221 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3221 "handle_options.m"
            }
#line 3217 "handle_options.m"
          else
#line 3217 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "lco") == 0))
#line 3236 "handle_options.m"
              {
#line 3236 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_String) "agiuvzD";
#line 3236 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3236 "handle_options.m"
              }
#line 3217 "handle_options.m"
            else
#line 3217 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "min") == 0))
#line 3226 "handle_options.m"
                {
#line 3226 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_String) "ilv";
#line 3226 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3226 "handle_options.m"
                }
#line 3217 "handle_options.m"
              else
#line 3217 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "osv") == 0))
#line 3231 "handle_options.m"
                  {
#line 3231 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnpruvP";
#line 3231 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3231 "handle_options.m"
                  }
#line 3217 "handle_options.m"
                else
#line 3217 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "allD") == 0))
#line 3218 "handle_options.m"
                    {
#line 3218 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_String) "abcdEfgilmnprstuvzBCDMPT";
#line 3218 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3218 "handle_options.m"
                    }
#line 3217 "handle_options.m"
                  else
#line 3217 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ctgc") == 0))
#line 3233 "handle_options.m"
                      {
#line 3233 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_String) "cdinpGDRS";
#line 3233 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3233 "handle_options.m"
                      }
#line 3217 "handle_options.m"
                    else
#line 3217 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "most") == 0))
#line 3220 "handle_options.m"
                        {
#line 3220 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdfgilmnprstvzP";
#line 3220 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 3220 "handle_options.m"
                        }
#line 3217 "handle_options.m"
                      else
#line 3217 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "poly") == 0))
#line 3237 "handle_options.m"
                          {
#line 3237 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_String) "vxX";
#line 3237 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 3237 "handle_options.m"
                          }
#line 3217 "handle_options.m"
                        else
#line 3217 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vars") == 0))
#line 3234 "handle_options.m"
                            {
#line 3234 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_String) "npBis";
#line 3234 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3234 "handle_options.m"
                            }
#line 3217 "handle_options.m"
                          else
#line 3217 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "paths") == 0))
#line 3227 "handle_options.m"
                              {
#line 3227 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_String) "cP";
#line 3227 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 3227 "handle_options.m"
                              }
#line 3217 "handle_options.m"
                            else
#line 3217 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "petdr") == 0))
#line 3228 "handle_options.m"
                                {
#line 3228 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_String) "din";
#line 3228 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 3228 "handle_options.m"
                                }
#line 3217 "handle_options.m"
                              else
#line 3217 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trans") == 0))
#line 3222 "handle_options.m"
                                  {
#line 3222 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstuvz";
#line 3222 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3222 "handle_options.m"
                                  }
#line 3217 "handle_options.m"
                                else
#line 3217 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "detism") == 0))
#line 3229 "handle_options.m"
                                    {
#line 3229 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_String) "divM";
#line 3229 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3229 "handle_options.m"
                                    }
#line 3217 "handle_options.m"
                                  else
#line 3217 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "codegen") == 0))
#line 3224 "handle_options.m"
                                      {
#line 3224 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_String) "dfnprsu";
#line 3224 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3224 "handle_options.m"
                                      }
#line 3217 "handle_options.m"
                                    else
#line 3217 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "vanessa") == 0))
#line 3225 "handle_options.m"
                                        {
#line 3225 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_String) "ltuCIU";
#line 3225 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 3225 "handle_options.m"
                                        }
#line 3217 "handle_options.m"
                                      else
#line 3217 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mintrans") == 0))
#line 3223 "handle_options.m"
                                          {
#line 3223 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_String) "bcdglmnstvz";
#line 3223 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 3223 "handle_options.m"
                                          }
#line 3217 "handle_options.m"
                                        else
#line 3217 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "statevar") == 0))
#line 3235 "handle_options.m"
                                            {
#line 3235 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_String) "gvCP";
#line 3235 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 3235 "handle_options.m"
                                            }
#line 3217 "handle_options.m"
                                          else
#line 3217 "handle_options.m"
                                            libs__handle_options__succeeded = MR_FALSE;
#line 3217 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3217 "handle_options.m"
  }
#line 3214 "handle_options.m"
}

#line 3199 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__char_is_not_2_p_0(
#line 3199 "handle_options.m"
  MR_Char libs__handle_options__A_3,
#line 3199 "handle_options.m"
  MR_Char libs__handle_options__B_4)
#line 3199 "handle_options.m"
{
#line 3202 "handle_options.m"
  {
#line 3202 "handle_options.m"
    MR_bool libs__handle_options__succeeded = (libs__handle_options__A_3 == libs__handle_options__B_4);

#line 3202 "handle_options.m"
    libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 3202 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3202 "handle_options.m"
  }
#line 3199 "handle_options.m"
}

#line 3188 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0_1(
#line 3188 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3188 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 3188 "handle_options.m"
{
#line 3188 "handle_options.m"
  {
#line 3188 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 3188 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3188 "handle_options.m"
    {
#line 3188 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__char_is_not_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 3188 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3188 "handle_options.m"
  }
#line 3188 "handle_options.m"
}

#line 3183 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__split_grade_string_2_2_p_0(
#line 3183 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 3183 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2)
#line 3183 "handle_options.m"
{
#line 3185 "handle_options.m"
  {
#line 3185 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3185 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3185 "handle_options.m"
      {
#line 3185 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3185 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3185 "handle_options.m"
      }
#line 3185 "handle_options.m"
    else
#line 3186 "handle_options.m"
      {
#line 3186 "handle_options.m"
        MR_Word libs__handle_options__ThisChars_7;
#line 3186 "handle_options.m"
        MR_Word libs__handle_options__RestChars0_8;
#line 3186 "handle_options.m"
        MR_String libs__handle_options__ThisComponent_9;
#line 3186 "handle_options.m"
        MR_Word libs__handle_options__RestComponents_10;

#line 3188 "handle_options.m"
        {
#line 3188 "handle_options.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &libs__handle_options_scalar_common_6[6], libs__handle_options__HeadVar__1_1, &libs__handle_options__ThisChars_7, &libs__handle_options__RestChars0_8);
        }
#line 3189 "handle_options.m"
        {
#line 3189 "handle_options.m"
          mercury__string__from_char_list_2_p_0(libs__handle_options__ThisChars_7, &libs__handle_options__ThisComponent_9);
        }
#line 3194 "handle_options.m"
        if ((libs__handle_options__RestChars0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3196 "handle_options.m"
          {
#line 3196 "handle_options.m"
            libs__handle_options__RestComponents_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3196 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3196 "handle_options.m"
          }
#line 3194 "handle_options.m"
        else
#line 3192 "handle_options.m"
          {
#line 3192 "handle_options.m"
            MR_Word libs__handle_options__RestChars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 1)));
#line 3192 "handle_options.m"
            MR_Char libs__handle_options__V_11_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__RestChars0_8, (MR_Integer) 0)));

#line 3193 "handle_options.m"
            {
#line 3193 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__RestChars_12, &libs__handle_options__RestComponents_10);
            }
#line 3192 "handle_options.m"
          }
#line 3186 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 3186 "handle_options.m"
          {
#line 3190 "handle_options.m"
            {
#line 3190 "handle_options.m"
              MR_Word base;
#line 3190 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3190 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = base;
#line 3190 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ThisComponent_9));
#line 3190 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__RestComponents_10));
#line 3190 "handle_options.m"
            }
#line 3190 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 3186 "handle_options.m"
          }
#line 3186 "handle_options.m"
      }
#line 3185 "handle_options.m"
    return libs__handle_options__succeeded;
#line 3185 "handle_options.m"
  }
#line 3183 "handle_options.m"
}

#line 3144 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_start_values_1_p_0(
#line 3144 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__1_1,
#line 3144 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3144 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3144 "handle_options.m"
{
#line 3146 "handle_options.m"
  {
#line 3146 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 3146 "handle_options.m"
    {
#line 3146 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 3146 "handle_options.m"
      do
#line 3146 "handle_options.m"
        {
#line 3146 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_12[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_12_0__vct_12_f_0;
#line 3146 "handle_options.m"
          {
#line 3146 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 3146 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 3146 "handle_options.m"
        }
#line 3146 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 30));
#line 3146 "handle_options.m"
    }
#line 3146 "handle_options.m"
  }
#line 3144 "handle_options.m"
}

#line 2884 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_component_table_5_p_2(
#line 2884 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__1_1,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2884 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5,
#line 2884 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2884 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2884 "handle_options.m"
{
#line 2889 "handle_options.m"
  {
#line 2889 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2889 "handle_options.m"
    {
#line 2889 "handle_options.m"
      MR_Integer libs__handle_options__slot_0 = (MR_Integer) 0;

#line 2889 "handle_options.m"
      do
#line 2889 "handle_options.m"
        {
#line 2889 "handle_options.m"
          *libs__handle_options__HeadVar__1_1 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_0;
#line 2889 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_1;
#line 2889 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_2;
#line 2889 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_3;
#line 2889 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = ((&libs__handle_options_vector_common_11[0 + libs__handle_options__slot_0]))->libs__handle_options__vector_common_type_11_0__vct_11_f_4;
#line 2889 "handle_options.m"
          {
#line 2889 "handle_options.m"
            libs__handle_options__cont(libs__handle_options__cont_env_ptr);
          }
#line 2889 "handle_options.m"
          libs__handle_options__slot_0 = (libs__handle_options__slot_0 + (MR_Integer) 1);
#line 2889 "handle_options.m"
        }
#line 2889 "handle_options.m"
      while ((libs__handle_options__slot_0 < (MR_Integer) 50));
#line 2889 "handle_options.m"
    }
#line 2889 "handle_options.m"
  }
#line 2884 "handle_options.m"
}

#line 2882 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__grade_component_table_5_p_0(
#line 2882 "handle_options.m"
  MR_String libs__handle_options__HeadVar__1_1,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__2_2,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__3_3,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__4_4,
#line 2882 "handle_options.m"
  MR_Word * libs__handle_options__HeadVar__5_5)
#line 2882 "handle_options.m"
{
#line 2889 "handle_options.m"
  {
#line 2889 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2889 "handle_options.m"
    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gc") == 0))
#line 3018 "handle_options.m"
      {
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[75]);
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3018 "handle_options.m"
        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3018 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 3018 "handle_options.m"
      }
#line 2889 "handle_options.m"
    else
#line 2889 "handle_options.m"
      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl") == 0))
#line 2937 "handle_options.m"
        {
#line 2937 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2937 "handle_options.m"
          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2943 "handle_options.m"
          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2944 "handle_options.m"
          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2937 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2937 "handle_options.m"
        }
#line 2889 "handle_options.m"
      else
#line 2889 "handle_options.m"
        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "il") == 0))
#line 2969 "handle_options.m"
          {
#line 2969 "handle_options.m"
            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2969 "handle_options.m"
            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[86]);
#line 2975 "handle_options.m"
            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2976 "handle_options.m"
            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2969 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2969 "handle_options.m"
          }
#line 2889 "handle_options.m"
        else
#line 2889 "handle_options.m"
          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mm") == 0))
#line 3061 "handle_options.m"
            {
#line 3061 "handle_options.m"
              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3061 "handle_options.m"
              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[122]);
#line 3064 "handle_options.m"
              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3064 "handle_options.m"
              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3061 "handle_options.m"
              libs__handle_options__succeeded = MR_TRUE;
#line 3061 "handle_options.m"
            }
#line 2889 "handle_options.m"
          else
#line 2889 "handle_options.m"
            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tr") == 0))
#line 3052 "handle_options.m"
              {
#line 3052 "handle_options.m"
                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3052 "handle_options.m"
                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[180]);
#line 3053 "handle_options.m"
                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3053 "handle_options.m"
                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3052 "handle_options.m"
                libs__handle_options__succeeded = MR_TRUE;
#line 3052 "handle_options.m"
              }
#line 2889 "handle_options.m"
            else
#line 2889 "handle_options.m"
              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "agc") == 0))
#line 3021 "handle_options.m"
                {
#line 3021 "handle_options.m"
                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3021 "handle_options.m"
                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[13]);
#line 3021 "handle_options.m"
                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3021 "handle_options.m"
                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3021 "handle_options.m"
                  libs__handle_options__succeeded = MR_TRUE;
#line 3021 "handle_options.m"
                }
#line 2889 "handle_options.m"
              else
#line 2889 "handle_options.m"
                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmm") == 0))
#line 3065 "handle_options.m"
                  {
#line 3065 "handle_options.m"
                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3065 "handle_options.m"
                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3068 "handle_options.m"
                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3068 "handle_options.m"
                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 0;
#line 3065 "handle_options.m"
                    libs__handle_options__succeeded = MR_TRUE;
#line 3065 "handle_options.m"
                  }
#line 2889 "handle_options.m"
                else
#line 2889 "handle_options.m"
                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "gcd") == 0))
#line 3019 "handle_options.m"
                    {
#line 3019 "handle_options.m"
                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3019 "handle_options.m"
                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[78]);
#line 3019 "handle_options.m"
                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3019 "handle_options.m"
                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3019 "handle_options.m"
                      libs__handle_options__succeeded = MR_TRUE;
#line 3019 "handle_options.m"
                    }
#line 2889 "handle_options.m"
                  else
#line 2889 "handle_options.m"
                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hgc") == 0))
#line 3020 "handle_options.m"
                      {
#line 3020 "handle_options.m"
                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 3;
#line 3020 "handle_options.m"
                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[81]);
#line 3020 "handle_options.m"
                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3020 "handle_options.m"
                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3020 "handle_options.m"
                        libs__handle_options__succeeded = MR_TRUE;
#line 3020 "handle_options.m"
                      }
#line 2889 "handle_options.m"
                    else
#line 2889 "handle_options.m"
                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc") == 0))
#line 2945 "handle_options.m"
                        {
#line 2945 "handle_options.m"
                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2945 "handle_options.m"
                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96]);
#line 2951 "handle_options.m"
                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2952 "handle_options.m"
                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2945 "handle_options.m"
                          libs__handle_options__succeeded = MR_TRUE;
#line 2945 "handle_options.m"
                        }
#line 2889 "handle_options.m"
                      else
#line 2889 "handle_options.m"
                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ilc") == 0))
#line 2977 "handle_options.m"
                          {
#line 2977 "handle_options.m"
                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2977 "handle_options.m"
                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[96]);
#line 2983 "handle_options.m"
                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[5]);
#line 2984 "handle_options.m"
                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2977 "handle_options.m"
                            libs__handle_options__succeeded = MR_TRUE;
#line 2977 "handle_options.m"
                          }
#line 2889 "handle_options.m"
                        else
#line 2889 "handle_options.m"
                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "par") == 0))
#line 3011 "handle_options.m"
                            {
#line 3011 "handle_options.m"
                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 1;
#line 3011 "handle_options.m"
                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[128]);
#line 3011 "handle_options.m"
                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3011 "handle_options.m"
                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3011 "handle_options.m"
                              libs__handle_options__succeeded = MR_TRUE;
#line 3011 "handle_options.m"
                            }
#line 2889 "handle_options.m"
                          else
#line 2889 "handle_options.m"
                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "reg") == 0))
#line 2897 "handle_options.m"
                              {
#line 2897 "handle_options.m"
                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2897 "handle_options.m"
                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[164]);
#line 2903 "handle_options.m"
                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2904 "handle_options.m"
                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2897 "handle_options.m"
                                libs__handle_options__succeeded = MR_TRUE;
#line 2897 "handle_options.m"
                              }
#line 2889 "handle_options.m"
                            else
#line 2889 "handle_options.m"
                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "spf") == 0))
#line 3090 "handle_options.m"
                                {
#line 3090 "handle_options.m"
                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3090 "handle_options.m"
                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[168]);
#line 3092 "handle_options.m"
                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3092 "handle_options.m"
                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3090 "handle_options.m"
                                  libs__handle_options__succeeded = MR_TRUE;
#line 3090 "handle_options.m"
                                }
#line 2889 "handle_options.m"
                              else
#line 2889 "handle_options.m"
                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsc") == 0))
#line 3047 "handle_options.m"
                                  {
#line 3047 "handle_options.m"
                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3047 "handle_options.m"
                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[187]);
#line 3049 "handle_options.m"
                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3049 "handle_options.m"
                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3047 "handle_options.m"
                                    libs__handle_options__succeeded = MR_TRUE;
#line 3047 "handle_options.m"
                                  }
#line 2889 "handle_options.m"
                                else
#line 2889 "handle_options.m"
                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "tsw") == 0))
#line 3044 "handle_options.m"
                                    {
#line 3044 "handle_options.m"
                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 5;
#line 3044 "handle_options.m"
                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[191]);
#line 3046 "handle_options.m"
                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3046 "handle_options.m"
                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3044 "handle_options.m"
                                      libs__handle_options__succeeded = MR_TRUE;
#line 3044 "handle_options.m"
                                    }
#line 2889 "handle_options.m"
                                  else
#line 2889 "handle_options.m"
                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "exts") == 0))
#line 3110 "handle_options.m"
                                      {
#line 3110 "handle_options.m"
                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3110 "handle_options.m"
                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[71]);
#line 3112 "handle_options.m"
                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3112 "handle_options.m"
                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3110 "handle_options.m"
                                        libs__handle_options__succeeded = MR_TRUE;
#line 3110 "handle_options.m"
                                      }
#line 2889 "handle_options.m"
                                    else
#line 2889 "handle_options.m"
                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "fast") == 0))
#line 2921 "handle_options.m"
                                        {
#line 2921 "handle_options.m"
                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2921 "handle_options.m"
                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[72]);
#line 2927 "handle_options.m"
                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2928 "handle_options.m"
                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2921 "handle_options.m"
                                          libs__handle_options__succeeded = MR_TRUE;
#line 2921 "handle_options.m"
                                        }
#line 2889 "handle_options.m"
                                      else
#line 2889 "handle_options.m"
                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "java") == 0))
#line 2985 "handle_options.m"
                                          {
#line 2985 "handle_options.m"
                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2985 "handle_options.m"
                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 2991 "handle_options.m"
                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[6]);
#line 2992 "handle_options.m"
                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2985 "handle_options.m"
                                            libs__handle_options__succeeded = MR_TRUE;
#line 2985 "handle_options.m"
                                          }
#line 2889 "handle_options.m"
                                        else
#line 2889 "handle_options.m"
                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "jump") == 0))
#line 2905 "handle_options.m"
                                            {
#line 2905 "handle_options.m"
                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2905 "handle_options.m"
                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[106]);
#line 2911 "handle_options.m"
                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2912 "handle_options.m"
                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2905 "handle_options.m"
                                              libs__handle_options__succeeded = MR_TRUE;
#line 2905 "handle_options.m"
                                            }
#line 2889 "handle_options.m"
                                          else
#line 2889 "handle_options.m"
                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmos") == 0))
#line 3077 "handle_options.m"
                                              {
#line 3077 "handle_options.m"
                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3077 "handle_options.m"
                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[124]);
#line 3080 "handle_options.m"
                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3080 "handle_options.m"
                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3077 "handle_options.m"
                                                libs__handle_options__succeeded = MR_TRUE;
#line 3077 "handle_options.m"
                                              }
#line 2889 "handle_options.m"
                                            else
#line 2889 "handle_options.m"
                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "mmsc") == 0))
#line 3069 "handle_options.m"
                                                {
#line 3069 "handle_options.m"
                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3069 "handle_options.m"
                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[122]);
#line 3072 "handle_options.m"
                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3072 "handle_options.m"
                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3069 "handle_options.m"
                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3069 "handle_options.m"
                                                }
#line 2889 "handle_options.m"
                                              else
#line 2889 "handle_options.m"
                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "none") == 0))
#line 2889 "handle_options.m"
                                                  {
#line 2889 "handle_options.m"
                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2889 "handle_options.m"
                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[126]);
#line 2895 "handle_options.m"
                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2896 "handle_options.m"
                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2889 "handle_options.m"
                                                    libs__handle_options__succeeded = MR_TRUE;
#line 2889 "handle_options.m"
                                                  }
#line 2889 "handle_options.m"
                                                else
#line 2889 "handle_options.m"
                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "prof") == 0))
#line 3024 "handle_options.m"
                                                    {
#line 3024 "handle_options.m"
                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3024 "handle_options.m"
                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[137]);
#line 3026 "handle_options.m"
                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3026 "handle_options.m"
                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3024 "handle_options.m"
                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3024 "handle_options.m"
                                                    }
#line 2889 "handle_options.m"
                                                  else
#line 2889 "handle_options.m"
                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmm") == 0))
#line 3118 "handle_options.m"
                                                      {
#line 3118 "handle_options.m"
                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3118 "handle_options.m"
                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[153]);
#line 3121 "handle_options.m"
                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3121 "handle_options.m"
                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3118 "handle_options.m"
                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3118 "handle_options.m"
                                                      }
#line 2889 "handle_options.m"
                                                    else
#line 2889 "handle_options.m"
                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "debug") == 0))
#line 3100 "handle_options.m"
                                                        {
#line 3100 "handle_options.m"
                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3100 "handle_options.m"
                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[47]);
#line 3101 "handle_options.m"
                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3101 "handle_options.m"
                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3100 "handle_options.m"
                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3100 "handle_options.m"
                                                        }
#line 2889 "handle_options.m"
                                                      else
#line 2889 "handle_options.m"
                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmos") == 0))
#line 3081 "handle_options.m"
                                                          {
#line 3081 "handle_options.m"
                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3081 "handle_options.m"
                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[60]);
#line 3084 "handle_options.m"
                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3084 "handle_options.m"
                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3081 "handle_options.m"
                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3081 "handle_options.m"
                                                          }
#line 2889 "handle_options.m"
                                                        else
#line 2889 "handle_options.m"
                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "dmmsc") == 0))
#line 3073 "handle_options.m"
                                                            {
#line 3073 "handle_options.m"
                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 7;
#line 3073 "handle_options.m"
                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[56]);
#line 3076 "handle_options.m"
                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3076 "handle_options.m"
                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3073 "handle_options.m"
                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3073 "handle_options.m"
                                                            }
#line 2889 "handle_options.m"
                                                          else
#line 2889 "handle_options.m"
                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmd") == 0))
#line 3122 "handle_options.m"
                                                              {
#line 3122 "handle_options.m"
                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3122 "handle_options.m"
                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[156]);
#line 3125 "handle_options.m"
                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3125 "handle_options.m"
                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3122 "handle_options.m"
                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3122 "handle_options.m"
                                                              }
#line 2889 "handle_options.m"
                                                            else
#line 2889 "handle_options.m"
                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmp") == 0))
#line 3126 "handle_options.m"
                                                                {
#line 3126 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3126 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[162]);
#line 3129 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3129 "handle_options.m"
                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3126 "handle_options.m"
                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3126 "handle_options.m"
                                                                }
#line 2889 "handle_options.m"
                                                              else
#line 2889 "handle_options.m"
                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "stseg") == 0))
#line 3113 "handle_options.m"
                                                                  {
#line 3113 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 12;
#line 3113 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[174]);
#line 3115 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3115 "handle_options.m"
                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3113 "handle_options.m"
                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3113 "handle_options.m"
                                                                  }
#line 2889 "handle_options.m"
                                                                else
#line 2889 "handle_options.m"
                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "trseg") == 0))
#line 3054 "handle_options.m"
                                                                    {
#line 3054 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 6;
#line 3054 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[183]);
#line 3055 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3055 "handle_options.m"
                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3054 "handle_options.m"
                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3054 "handle_options.m"
                                                                    }
#line 2889 "handle_options.m"
                                                                  else
#line 2889 "handle_options.m"
                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "csharp") == 0))
#line 2993 "handle_options.m"
                                                                      {
#line 2993 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2993 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[41]);
#line 2999 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]);
#line 3000 "handle_options.m"
                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2993 "handle_options.m"
                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 2993 "handle_options.m"
                                                                      }
#line 2889 "handle_options.m"
                                                                    else
#line 2889 "handle_options.m"
                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "erlang") == 0))
#line 3001 "handle_options.m"
                                                                        {
#line 3001 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 3001 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[65]);
#line 3007 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[4]);
#line 3008 "handle_options.m"
                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3001 "handle_options.m"
                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3001 "handle_options.m"
                                                                        }
#line 2889 "handle_options.m"
                                                                      else
#line 2889 "handle_options.m"
                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "picreg") == 0))
#line 3095 "handle_options.m"
                                                                          {
#line 3095 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 9;
#line 3095 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[130]);
#line 3095 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3095 "handle_options.m"
                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3095 "handle_options.m"
                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 3095 "handle_options.m"
                                                                          }
#line 2889 "handle_options.m"
                                                                        else
#line 2889 "handle_options.m"
                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "pregen") == 0))
#line 3088 "handle_options.m"
                                                                            {
#line 3088 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 8;
#line 3088 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[132]);
#line 3089 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3089 "handle_options.m"
                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3088 "handle_options.m"
                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 3088 "handle_options.m"
                                                                            }
#line 2889 "handle_options.m"
                                                                          else
#line 2889 "handle_options.m"
                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "rbmmdp") == 0))
#line 3130 "handle_options.m"
                                                                              {
#line 3130 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 13;
#line 3130 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[160]);
#line 3133 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3133 "handle_options.m"
                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3130 "handle_options.m"
                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3130 "handle_options.m"
                                                                              }
#line 2889 "handle_options.m"
                                                                            else
#line 2889 "handle_options.m"
                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hl_nest") == 0))
#line 2953 "handle_options.m"
                                                                                {
#line 2953 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2953 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[92]);
#line 2959 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2960 "handle_options.m"
                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2953 "handle_options.m"
                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 2953 "handle_options.m"
                                                                                }
#line 2889 "handle_options.m"
                                                                              else
#line 2889 "handle_options.m"
                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "memprof") == 0))
#line 3033 "handle_options.m"
                                                                                  {
#line 3033 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3033 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[118]);
#line 3035 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3035 "handle_options.m"
                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3033 "handle_options.m"
                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3033 "handle_options.m"
                                                                                  }
#line 2889 "handle_options.m"
                                                                                else
#line 2889 "handle_options.m"
                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profall") == 0))
#line 3036 "handle_options.m"
                                                                                    {
#line 3036 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3036 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[138]);
#line 3038 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3038 "handle_options.m"
                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3036 "handle_options.m"
                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3036 "handle_options.m"
                                                                                    }
#line 2889 "handle_options.m"
                                                                                  else
#line 2889 "handle_options.m"
                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ssdebug") == 0))
#line 3102 "handle_options.m"
                                                                                      {
#line 3102 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3102 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[170]);
#line 3103 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3103 "handle_options.m"
                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3102 "handle_options.m"
                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3102 "handle_options.m"
                                                                                      }
#line 2889 "handle_options.m"
                                                                                    else
#line 2889 "handle_options.m"
                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_fast") == 0))
#line 2929 "handle_options.m"
                                                                                        {
#line 2929 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2929 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[25]);
#line 2935 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2936 "handle_options.m"
                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2929 "handle_options.m"
                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 2929 "handle_options.m"
                                                                                        }
#line 2889 "handle_options.m"
                                                                                      else
#line 2889 "handle_options.m"
                                                                                        if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "asm_jump") == 0))
#line 2913 "handle_options.m"
                                                                                          {
#line 2913 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2913 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[31]);
#line 2919 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2920 "handle_options.m"
                                                                                            *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2913 "handle_options.m"
                                                                                            libs__handle_options__succeeded = MR_TRUE;
#line 2913 "handle_options.m"
                                                                                          }
#line 2889 "handle_options.m"
                                                                                        else
#line 2889 "handle_options.m"
                                                                                          if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "hlc_nest") == 0))
#line 2961 "handle_options.m"
                                                                                            {
#line 2961 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__2_2 = (MR_Integer) 0;
#line 2961 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[101]);
#line 2967 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
#line 2968 "handle_options.m"
                                                                                              *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 2961 "handle_options.m"
                                                                                              libs__handle_options__succeeded = MR_TRUE;
#line 2961 "handle_options.m"
                                                                                            }
#line 2889 "handle_options.m"
                                                                                          else
#line 2889 "handle_options.m"
                                                                                            if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "ll_debug") == 0))
#line 3106 "handle_options.m"
                                                                                              {
#line 3106 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__2_2 = (MR_Integer) 10;
#line 3106 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[110]);
#line 3107 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3107 "handle_options.m"
                                                                                                *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3106 "handle_options.m"
                                                                                                libs__handle_options__succeeded = MR_TRUE;
#line 3106 "handle_options.m"
                                                                                              }
#line 2889 "handle_options.m"
                                                                                            else
#line 2889 "handle_options.m"
                                                                                              if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profdeep") == 0))
#line 3039 "handle_options.m"
                                                                                                {
#line 3039 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3039 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[145]);
#line 3041 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3041 "handle_options.m"
                                                                                                  *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3039 "handle_options.m"
                                                                                                  libs__handle_options__succeeded = MR_TRUE;
#line 3039 "handle_options.m"
                                                                                                }
#line 2889 "handle_options.m"
                                                                                              else
#line 2889 "handle_options.m"
                                                                                                if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "proftime") == 0))
#line 3027 "handle_options.m"
                                                                                                  {
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3027 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[147]);
#line 3029 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3029 "handle_options.m"
                                                                                                    *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3027 "handle_options.m"
                                                                                                    libs__handle_options__succeeded = MR_TRUE;
#line 3027 "handle_options.m"
                                                                                                  }
#line 2889 "handle_options.m"
                                                                                                else
#line 2889 "handle_options.m"
                                                                                                  if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "decldebug") == 0))
#line 3098 "handle_options.m"
                                                                                                    {
#line 3098 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__2_2 = (MR_Integer) 11;
#line 3098 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[50]);
#line 3099 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3099 "handle_options.m"
                                                                                                      *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3098 "handle_options.m"
                                                                                                      libs__handle_options__succeeded = MR_TRUE;
#line 3098 "handle_options.m"
                                                                                                    }
#line 2889 "handle_options.m"
                                                                                                  else
#line 2889 "handle_options.m"
                                                                                                    if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "profcalls") == 0))
#line 3030 "handle_options.m"
                                                                                                      {
#line 3030 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__2_2 = (MR_Integer) 4;
#line 3030 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[139]);
#line 3032 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3032 "handle_options.m"
                                                                                                        *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3030 "handle_options.m"
                                                                                                        libs__handle_options__succeeded = MR_TRUE;
#line 3030 "handle_options.m"
                                                                                                      }
#line 2889 "handle_options.m"
                                                                                                    else
#line 2889 "handle_options.m"
                                                                                                      if ((strcmp(libs__handle_options__HeadVar__1_1, (MR_String) "threadscope") == 0))
#line 3014 "handle_options.m"
                                                                                                        {
#line 3014 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__2_2 = (MR_Integer) 2;
#line 3014 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[176]);
#line 3015 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3015 "handle_options.m"
                                                                                                          *libs__handle_options__HeadVar__5_5 = (MR_Integer) 1;
#line 3014 "handle_options.m"
                                                                                                          libs__handle_options__succeeded = MR_TRUE;
#line 3014 "handle_options.m"
                                                                                                        }
#line 2889 "handle_options.m"
                                                                                                      else
#line 2889 "handle_options.m"
                                                                                                        libs__handle_options__succeeded = MR_FALSE;
#line 2889 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2889 "handle_options.m"
  }
#line 2882 "handle_options.m"
}

#line 2822 "handle_options.m"
static void MR_CALL 
libs__handle_options__construct_string_2_p_0(
#line 2822 "handle_options.m"
  MR_Word libs__handle_options__HeadVar__1_1,
#line 2822 "handle_options.m"
  MR_String * libs__handle_options__HeadVar__2_2)
#line 2822 "handle_options.m"
{
#line 2825 "handle_options.m"
  {
#line 2825 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2825 "handle_options.m"
    if ((libs__handle_options__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2825 "handle_options.m"
      *libs__handle_options__HeadVar__2_2 = (MR_String) "";
#line 2825 "handle_options.m"
    else
#line 2826 "handle_options.m"
      {
#line 2826 "handle_options.m"
        MR_String libs__handle_options__Bit_4;
#line 2826 "handle_options.m"
        MR_Word libs__handle_options__Bits_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 1)));
#line 2826 "handle_options.m"
        MR_Word libs__handle_options__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__HeadVar__1_1, (MR_Integer) 0)));
#line 2826 "handle_options.m"
        MR_Word libs__handle_options__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 0)));

#line 2826 "handle_options.m"
        libs__handle_options__Bit_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_10_10, (MR_Integer) 1)));
#line 2831 "handle_options.m"
        if ((libs__handle_options__Bits_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2833 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = libs__handle_options__Bit_4;
#line 2831 "handle_options.m"
        else
#line 2828 "handle_options.m"
          {
#line 2828 "handle_options.m"
            MR_String libs__handle_options__Grade0_9;
#line 2828 "handle_options.m"
            MR_Word libs__handle_options__V_11_11;
#line 2828 "handle_options.m"
            MR_Word libs__handle_options__V_12_12;
#line 2828 "handle_options.m"
            MR_Word libs__handle_options__V_14_14;
#line 2828 "handle_options.m"
            MR_String libs__handle_options__Bit_17;
#line 2828 "handle_options.m"
            MR_Word libs__handle_options__Bits_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 1)));
#line 2828 "handle_options.m"
            MR_Word libs__handle_options__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__Bits_5, (MR_Integer) 0)));
#line 2826 "handle_options.m"
            MR_Word libs__handle_options__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 0)));

#line 2826 "handle_options.m"
            libs__handle_options__Bit_17 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__V_23_23, (MR_Integer) 1)));
#line 2831 "handle_options.m"
            if ((libs__handle_options__Bits_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2833 "handle_options.m"
              libs__handle_options__Grade0_9 = libs__handle_options__Bit_17;
#line 2831 "handle_options.m"
            else
#line 2828 "handle_options.m"
              {
#line 2828 "handle_options.m"
                MR_String libs__handle_options__Grade0_22;
#line 2828 "handle_options.m"
                MR_Word libs__handle_options__V_24_24;
#line 2828 "handle_options.m"
                MR_Word libs__handle_options__V_25_25;
#line 2828 "handle_options.m"
                MR_Word libs__handle_options__V_27_27;

#line 2829 "handle_options.m"
                {
#line 2829 "handle_options.m"
                  libs__handle_options__construct_string_2_p_0(libs__handle_options__Bits_18, &libs__handle_options__Grade0_22);
                }
#line 2830 "handle_options.m"
                {
#line 2830 "handle_options.m"
                  libs__handle_options__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 0) = ((MR_Box) (libs__handle_options__Grade0_22));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2830 "handle_options.m"
                }
#line 2830 "handle_options.m"
                {
#line 2830 "handle_options.m"
                  libs__handle_options__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 0) = ((MR_Box) ((MR_String) "."));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_25_25, 1) = ((MR_Box) (libs__handle_options__V_27_27));
#line 2830 "handle_options.m"
                }
#line 2830 "handle_options.m"
                {
#line 2830 "handle_options.m"
                  libs__handle_options__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 0) = ((MR_Box) (libs__handle_options__Bit_17));
#line 2830 "handle_options.m"
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_24_24, 1) = ((MR_Box) (libs__handle_options__V_25_25));
#line 2830 "handle_options.m"
                }
#line 2830 "handle_options.m"
                {
#line 2830 "handle_options.m"
                  mercury__string__append_list_2_p_0(libs__handle_options__V_24_24, &libs__handle_options__Grade0_9);
                }
#line 2828 "handle_options.m"
              }
#line 2830 "handle_options.m"
            {
#line 2830 "handle_options.m"
              libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Grade0_9));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2830 "handle_options.m"
            }
#line 2830 "handle_options.m"
            {
#line 2830 "handle_options.m"
              libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) "."));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2830 "handle_options.m"
            }
#line 2830 "handle_options.m"
            {
#line 2830 "handle_options.m"
              libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Bit_4));
#line 2830 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2830 "handle_options.m"
            }
#line 2830 "handle_options.m"
            {
#line 2830 "handle_options.m"
              mercury__string__append_list_2_p_0(libs__handle_options__V_11_11, libs__handle_options__HeadVar__2_2);
#line 2830 "handle_options.m"
              return;
            }
#line 2828 "handle_options.m"
          }
#line 2826 "handle_options.m"
      }
#line 2825 "handle_options.m"
  }
#line 2822 "handle_options.m"
}

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_1(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2684 "handle_options.m"
{
#line 2684 "handle_options.m"
  {
#line 2684 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2684 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0, 1);
#line 2684 "handle_options.m"
  }
#line 2684 "handle_options.m"
}

#line 2685 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_3(
#line 2685 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2685 "handle_options.m"
{
#line 2685 "handle_options.m"
  {
#line 2685 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2685 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5);
#line 2685 "handle_options.m"
    {
#line 2685 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2685 "handle_options.m"
      return;
    }
#line 2685 "handle_options.m"
  }
#line 2685 "handle_options.m"
}

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_2(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2684 "handle_options.m"
{
#line 2684 "handle_options.m"
  {
#line 2684 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2686 "handle_options.m"
    {
#line 2686 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2686 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded)
#line 2686 "handle_options.m"
      {
#line 2686 "handle_options.m"
        libs__handle_options__must_not_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2686 "handle_options.m"
        return;
      }
#line 2684 "handle_options.m"
  }
#line 2684 "handle_options.m"
}

#line 2684 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_not_contain_2_p_0_4(
#line 2684 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2684 "handle_options.m"
{
#line 2684 "handle_options.m"
  {
#line 2684 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_not_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2684 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__commit_0) == 0)
#line 2684 "handle_options.m"
      {
#line 6915 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2685 "handle_options.m"
        {
#line 2685 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3, libs__handle_options__must_not_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2684 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2684 "handle_options.m"
      }
#line 2684 "handle_options.m"
    else
#line 2684 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2684 "handle_options.m"
  }
#line 2684 "handle_options.m"
}

#line 2681 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_not_contain_2_p_0(
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__OmitComponents_3,
#line 2681 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2681 "handle_options.m"
{
#line 2681 "handle_options.m"
  {
#line 2681 "handle_options.m"
    struct libs__handle_options__must_not_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2681 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__OmitComponents_3 = libs__handle_options__OmitComponents_3;
#line 2681 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2684 "handle_options.m"
    {
#line 2684 "handle_options.m"
      libs__handle_options__must_not_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2684 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded);
#line 2684 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_not_contain_2_p_0_env_0__succeeded;
#line 2681 "handle_options.m"
  }
#line 2681 "handle_options.m"
}

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_1(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2675 "handle_options.m"
{
#line 2675 "handle_options.m"
  {
#line 2675 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2675 "handle_options.m"
    MR_builtin_longjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0, 1);
#line 2675 "handle_options.m"
  }
#line 2675 "handle_options.m"
}

#line 2676 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_3(
#line 2676 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2676 "handle_options.m"
{
#line 2676 "handle_options.m"
  {
#line 2676 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2676 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5 = ((MR_String) (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5);
#line 2676 "handle_options.m"
    {
#line 2676 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_2(libs__handle_options__env_ptr);
#line 2676 "handle_options.m"
      return;
    }
#line 2676 "handle_options.m"
  }
#line 2676 "handle_options.m"
}

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_2(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2675 "handle_options.m"
{
#line 2675 "handle_options.m"
  {
#line 2675 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2678 "handle_options.m"
    {
#line 2678 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__Component_5)), (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4);
    }
#line 2677 "handle_options.m"
    (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2677 "handle_options.m"
    if ((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded)
#line 2677 "handle_options.m"
      {
#line 2677 "handle_options.m"
        libs__handle_options__must_contain_2_p_0_1(libs__handle_options__env_ptr);
#line 2677 "handle_options.m"
        return;
      }
#line 2675 "handle_options.m"
  }
#line 2675 "handle_options.m"
}

#line 2675 "handle_options.m"
static void MR_CALL 
libs__handle_options__must_contain_2_p_0_4(
#line 2675 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2675 "handle_options.m"
{
#line 2675 "handle_options.m"
  {
#line 2675 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__must_contain_2_p_0_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2675 "handle_options.m"
    if (MR_builtin_setjmp((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__commit_0) == 0)
#line 2675 "handle_options.m"
      {
#line 7061 "libs.handle_options.c"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2676 "handle_options.m"
        {
#line 2676 "handle_options.m"
          mercury__list__member_2_p_1((libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__TypeCtorInfo_6_6, &(libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__conv0_Component_5, (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3, libs__handle_options__must_contain_2_p_0_3, libs__handle_options__env_ptr);
        }
#line 2675 "handle_options.m"
        (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_FALSE;
#line 2675 "handle_options.m"
      }
#line 2675 "handle_options.m"
    else
#line 2675 "handle_options.m"
      (libs__handle_options__env_ptr)->libs__handle_options__must_contain_2_p_0_env_0__succeeded = MR_TRUE;
#line 2675 "handle_options.m"
  }
#line 2675 "handle_options.m"
}

#line 2672 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__must_contain_2_p_0(
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__IncludeComponents_3,
#line 2672 "handle_options.m"
  MR_Word libs__handle_options__GradeComponents_4)
#line 2672 "handle_options.m"
{
#line 2672 "handle_options.m"
  {
#line 2672 "handle_options.m"
    struct libs__handle_options__must_contain_2_p_0_env_0_s libs__handle_options__env;

#line 2672 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__IncludeComponents_3 = libs__handle_options__IncludeComponents_3;
#line 2672 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__GradeComponents_4 = libs__handle_options__GradeComponents_4;
#line 2675 "handle_options.m"
    {
#line 2675 "handle_options.m"
      libs__handle_options__must_contain_2_p_0_4(&libs__handle_options__env);
    }
#line 2675 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded = !((libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded);
#line 2675 "handle_options.m"
    return (libs__handle_options__env).libs__handle_options__must_contain_2_p_0_env_0__succeeded;
#line 2672 "handle_options.m"
  }
#line 2672 "handle_options.m"
}

#line 2700 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__filter_grade_7_p_0_1(
#line 2700 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2700 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2700 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2)
#line 2700 "handle_options.m"
{
#line 2700 "handle_options.m"
  {
#line 2700 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2700 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2700 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__2_20;

#line 2700 "handle_options.m"
    {
#line 2700 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__grade_string_to_comp_strings__2700__1_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_20);
    }
#line 2700 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2700 "handle_options.m"
      {
#line 2700 "handle_options.m"
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_20));
#line 2700 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2700 "handle_options.m"
      }
#line 2700 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2700 "handle_options.m"
  }
#line 2700 "handle_options.m"
}

#line 2654 "handle_options.m"
static void MR_CALL 
libs__handle_options__filter_grade_7_p_0(
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__FilterPred_8,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__CondComponents_9,
#line 2654 "handle_options.m"
  MR_String libs__handle_options__GradeString_10,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Grades_0_15,
#line 2654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Grades_16,
#line 2654 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2654 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2654 "handle_options.m"
{
#line 7174 "libs.handle_options.c"
  {
#line 7176 "libs.handle_options.c"
    MR_bool libs__handle_options__succeeded;
#line 7178 "libs.handle_options.c"
    MR_Word libs__handle_options__Components0_33;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_30_46;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__ComponentStrs_26;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__StrToComp_27;
#line 2699 "handle_options.m"
    MR_Word libs__handle_options__Chars_50;

#line 3180 "handle_options.m"
    {
#line 3180 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_10, &libs__handle_options__Chars_50);
    }
#line 3181 "handle_options.m"
    {
#line 3181 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_50, &libs__handle_options__ComponentStrs_26);
    }
#line 2699 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2699 "handle_options.m"
      {
#line 2700 "handle_options.m"
        libs__handle_options__StrToComp_27 = (MR_Word) &libs__handle_options_scalar_common_1[19];
#line 7205 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_30_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2703 "handle_options.m"
        {
#line 2703 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__map_3_p_2(libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__TypeCtorInfo_30_46, libs__handle_options__StrToComp_27, libs__handle_options__ComponentStrs_26, &libs__handle_options__Components0_33);
        }
#line 2699 "handle_options.m"
      }
#line 7214 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 7216 "libs.handle_options.c"
      {
#line 7218 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_31_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7220 "libs.handle_options.c"
        MR_Word libs__handle_options__Components_34;
#line 2706 "handle_options.m"
        MR_Integer libs__handle_options__V_37_37;
#line 2706 "handle_options.m"
        MR_Integer libs__handle_options__V_38_38;

#line 2705 "handle_options.m"
        {
#line 2705 "handle_options.m"
          mercury__list__sort_and_remove_dups_2_p_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33, &libs__handle_options__Components_34);
        }
#line 2706 "handle_options.m"
        {
#line 2706 "handle_options.m"
          libs__handle_options__V_37_37 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components0_33);
        }
#line 2706 "handle_options.m"
        {
#line 2706 "handle_options.m"
          libs__handle_options__V_38_38 = mercury__list__length_1_f_0(libs__handle_options__TypeCtorInfo_31_47, libs__handle_options__Components_34);
        }
#line 2706 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_37_37 > libs__handle_options__V_38_38);
#line 7244 "libs.handle_options.c"
        if (libs__handle_options__succeeded)
#line 7246 "libs.handle_options.c"
          {
#line 7248 "libs.handle_options.c"
            MR_String libs__handle_options__V_39_39;
#line 7250 "libs.handle_options.c"
            MR_Word libs__handle_options__V_54_54;

#line 2707 "handle_options.m"
            {
#line 2707 "handle_options.m"
              libs__handle_options__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
            }
#line 624 "handle_options.m"
            {
#line 624 "handle_options.m"
              libs__handle_options__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 0) = ((MR_Box) (libs__handle_options__V_39_39));
#line 624 "handle_options.m"
              MR_hl_field(MR_mktag(1), libs__handle_options__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "handle_options.m"
            }
#line 624 "handle_options.m"
            {
#line 624 "handle_options.m"
              mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_54_54, libs__handle_options__STATE_VARIABLE_Errors_18);
            }
#line 2669 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7275 "libs.handle_options.c"
          }
#line 7277 "libs.handle_options.c"
        else
#line 7279 "libs.handle_options.c"
          {
#line 2663 "handle_options.m"
            MR_bool MR_CALL (* libs__handle_options__func_1)(MR_Box, MR_Box, MR_Box);

#line 2710 "handle_options.m"
            *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2663 "handle_options.m"
            libs__handle_options__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__FilterPred_8, (MR_Integer) 1)));
#line 2663 "handle_options.m"
            {
#line 2663 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__func_1(((MR_Box) libs__handle_options__FilterPred_8), ((MR_Box) (libs__handle_options__CondComponents_9)), ((MR_Box) (libs__handle_options__Components_34)));
            }
#line 2665 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 2664 "handle_options.m"
              {
#line 2664 "handle_options.m"
                MR_Word base;
#line 2664 "handle_options.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2664 "handle_options.m"
                *libs__handle_options__STATE_VARIABLE_Grades_16 = base;
#line 2664 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__GradeString_10));
#line 2664 "handle_options.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Grades_0_15));
#line 2664 "handle_options.m"
              }
#line 2665 "handle_options.m"
            else
#line 2664 "handle_options.m"
              *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7313 "libs.handle_options.c"
          }
#line 7315 "libs.handle_options.c"
      }
#line 7317 "libs.handle_options.c"
    else
#line 7319 "libs.handle_options.c"
      {
#line 7321 "libs.handle_options.c"
        MR_String libs__handle_options__V_42_42;
#line 7323 "libs.handle_options.c"
        MR_Word libs__handle_options__V_60_60;

#line 2713 "handle_options.m"
        {
#line 2713 "handle_options.m"
          libs__handle_options__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "invalid library grade: ", libs__handle_options__GradeString_10);
        }
#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          libs__handle_options__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 0) = ((MR_Box) (libs__handle_options__V_42_42));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "handle_options.m"
        }
#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_60_60, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2669 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Grades_16 = libs__handle_options__STATE_VARIABLE_Grades_0_15;
#line 7348 "libs.handle_options.c"
      }
#line 7350 "libs.handle_options.c"
  }
#line 2654 "handle_options.m"
}

#line 2631 "handle_options.m"
static void MR_CALL 
libs__handle_options__string_to_grade_component_6_p_0(
#line 2631 "handle_options.m"
  MR_String libs__handle_options__FilterDesc_7,
#line 2631 "handle_options.m"
  MR_String libs__handle_options__Comp_8,
#line 2631 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Comps_0_15,
#line 2631 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Comps_16,
#line 2631 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_17,
#line 2631 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_18)
#line 2631 "handle_options.m"
{
#line 2638 "handle_options.m"
  {
#line 2638 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2636 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2636 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2636 "handle_options.m"
    MR_Word libs__handle_options__V_13_13;
#line 2636 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2636 "handle_options.m"
    {
#line 2636 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__grade_component_table_5_p_0(libs__handle_options__Comp_8, &libs__handle_options__V_11_11, &libs__handle_options__V_12_12, &libs__handle_options__V_13_13, &libs__handle_options__V_14_14);
    }
#line 2638 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2637 "handle_options.m"
      {
#line 2637 "handle_options.m"
        {
#line 2637 "handle_options.m"
          MR_Word base;
#line 2637 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2637 "handle_options.m"
          *libs__handle_options__STATE_VARIABLE_Comps_16 = base;
#line 2637 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__Comp_8));
#line 2637 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_Comps_0_15));
#line 2637 "handle_options.m"
        }
#line 2637 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Errors_18 = libs__handle_options__STATE_VARIABLE_Errors_0_17;
#line 2637 "handle_options.m"
      }
#line 2638 "handle_options.m"
    else
#line 2639 "handle_options.m"
      {
#line 2639 "handle_options.m"
        MR_String libs__handle_options__V_20_20;
#line 2639 "handle_options.m"
        MR_String libs__handle_options__V_23_23;
#line 2639 "handle_options.m"
        MR_String libs__handle_options__V_24_24;
#line 2639 "handle_options.m"
        MR_Word libs__handle_options__V_29_29;

#line 2640 "handle_options.m"
        {
#line 2640 "handle_options.m"
          libs__handle_options__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " library grade component: ", libs__handle_options__Comp_8);
        }
#line 2639 "handle_options.m"
        {
#line 2639 "handle_options.m"
          libs__handle_options__V_23_23 = mercury__string__f_43_43_2_f_0(libs__handle_options__FilterDesc_7, libs__handle_options__V_24_24);
        }
#line 2639 "handle_options.m"
        {
#line 2639 "handle_options.m"
          libs__handle_options__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "unknown ", libs__handle_options__V_23_23);
        }
#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          libs__handle_options__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 0) = ((MR_Box) (libs__handle_options__V_20_20));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "handle_options.m"
        }
#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_17, libs__handle_options__V_29_29, libs__handle_options__STATE_VARIABLE_Errors_18);
        }
#line 2639 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_Comps_16 = libs__handle_options__STATE_VARIABLE_Comps_0_15;
#line 2639 "handle_options.m"
      }
#line 2638 "handle_options.m"
  }
#line 2631 "handle_options.m"
}

#line 2619 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_6(
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2619 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2619 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2619 "handle_options.m"
{
#line 2619 "handle_options.m"
  {
#line 2619 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2619 "handle_options.m"
    MR_Word libs__handle_options__conv13_STATE_VARIABLE_Grades_16;
#line 2619 "handle_options.m"
    MR_Word libs__handle_options__conv12_STATE_VARIABLE_Errors_18;

#line 2619 "handle_options.m"
    {
#line 2619 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv13_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv12_STATE_VARIABLE_Errors_18);
    }
#line 2619 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv13_STATE_VARIABLE_Grades_16));
#line 2619 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv12_STATE_VARIABLE_Errors_18));
#line 2619 "handle_options.m"
  }
#line 2619 "handle_options.m"
}

#line 2619 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_5(
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2619 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2619 "handle_options.m"
{
#line 2619 "handle_options.m"
  {
#line 2619 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2619 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2619 "handle_options.m"
    {
#line 2619 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_not_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2619 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2619 "handle_options.m"
  }
#line 2619 "handle_options.m"
}

#line 2617 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_4(
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2617 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2617 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2617 "handle_options.m"
{
#line 2617 "handle_options.m"
  {
#line 2617 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2617 "handle_options.m"
    MR_Word libs__handle_options__conv9_STATE_VARIABLE_Grades_16;
#line 2617 "handle_options.m"
    MR_Word libs__handle_options__conv8_STATE_VARIABLE_Errors_18;

#line 2617 "handle_options.m"
    {
#line 2617 "handle_options.m"
      libs__handle_options__filter_grade_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv9_STATE_VARIABLE_Grades_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv8_STATE_VARIABLE_Errors_18);
    }
#line 2617 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv9_STATE_VARIABLE_Grades_16));
#line 2617 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv8_STATE_VARIABLE_Errors_18));
#line 2617 "handle_options.m"
  }
#line 2617 "handle_options.m"
}

#line 2617 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_3(
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2617 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2)
#line 2617 "handle_options.m"
{
#line 2617 "handle_options.m"
  {
#line 2617 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2617 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2617 "handle_options.m"
    {
#line 2617 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__must_contain_2_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2));
    }
#line 2617 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2617 "handle_options.m"
  }
#line 2617 "handle_options.m"
}

#line 2609 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_2(
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2609 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2609 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2609 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2609 "handle_options.m"
{
#line 2609 "handle_options.m"
  {
#line 2609 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2609 "handle_options.m"
    MR_Word libs__handle_options__conv5_STATE_VARIABLE_Comps_16;
#line 2609 "handle_options.m"
    MR_Word libs__handle_options__conv4_STATE_VARIABLE_Errors_18;

#line 2609 "handle_options.m"
    {
#line 2609 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv5_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv4_STATE_VARIABLE_Errors_18);
    }
#line 2609 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv5_STATE_VARIABLE_Comps_16));
#line 2609 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv4_STATE_VARIABLE_Errors_18));
#line 2609 "handle_options.m"
  }
#line 2609 "handle_options.m"
}

#line 2607 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0_1(
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2607 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2607 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2607 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2607 "handle_options.m"
{
#line 2607 "handle_options.m"
  {
#line 2607 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2607 "handle_options.m"
    MR_Word libs__handle_options__conv1_STATE_VARIABLE_Comps_16;
#line 2607 "handle_options.m"
    MR_Word libs__handle_options__conv0_STATE_VARIABLE_Errors_18;

#line 2607 "handle_options.m"
    {
#line 2607 "handle_options.m"
      libs__handle_options__string_to_grade_component_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_STATE_VARIABLE_Comps_16, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv0_STATE_VARIABLE_Errors_18);
    }
#line 2607 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_STATE_VARIABLE_Comps_16));
#line 2607 "handle_options.m"
    *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv0_STATE_VARIABLE_Errors_18));
#line 2607 "handle_options.m"
  }
#line 2607 "handle_options.m"
}

#line 2599 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_libgrades_4_p_0(
#line 2599 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2599 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13,
#line 2599 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_14,
#line 2599 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_15)
#line 2599 "handle_options.m"
{
#line 2602 "handle_options.m"
  {
#line 2602 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_46_46;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_47_47;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponentStrs_7;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__OmitComponentStrs_8;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__IncludeComponents_9;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__OmitComponents_10;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_20_20;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_24_24;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_27_27;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__V_28_28;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_30_30;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_31_31;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__V_33_33;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_LibGrades_35_35;
#line 2602 "handle_options.m"
    MR_Word libs__handle_options__V_39_39;
#line 2607 "handle_options.m"
    MR_Box libs__handle_options__conv3_IncludeComponents_9;
#line 2607 "handle_options.m"
    MR_Box libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20;
#line 2609 "handle_options.m"
    MR_Box libs__handle_options__conv7_OmitComponents_10;
#line 2609 "handle_options.m"
    MR_Box libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24;
#line 2617 "handle_options.m"
    MR_Box libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30;
#line 2617 "handle_options.m"
    MR_Box libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31;
#line 2619 "handle_options.m"
    MR_Box libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35;
#line 2619 "handle_options.m"
    MR_Box libs__handle_options__conv14_STATE_VARIABLE_Errors_15;

#line 2603 "handle_options.m"
    {
#line 2603 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 635, &libs__handle_options__IncludeComponentStrs_7);
    }
#line 2605 "handle_options.m"
    {
#line 2605 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 636, &libs__handle_options__OmitComponentStrs_8);
    }
#line 7758 "libs.handle_options.c"
    libs__handle_options__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7760 "libs.handle_options.c"
    libs__handle_options__TypeInfo_47_47 = (MR_Word) &libs__handle_options_scalar_common_2[1];
#line 2607 "handle_options.m"
    {
#line 2607 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[4], libs__handle_options__IncludeComponentStrs_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv3_IncludeComponents_9, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_0_14)), &libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
    }
#line 2607 "handle_options.m"
    libs__handle_options__IncludeComponents_9 = ((MR_Word) libs__handle_options__conv3_IncludeComponents_9);
#line 2607 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_20_20 = ((MR_Word) libs__handle_options__conv2_STATE_VARIABLE_Errors_20_20);
#line 2609 "handle_options.m"
    {
#line 2609 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, (MR_Word) &libs__handle_options_scalar_common_6[5], libs__handle_options__OmitComponentStrs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv7_OmitComponents_10, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_20_20)), &libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
    }
#line 2609 "handle_options.m"
    libs__handle_options__OmitComponents_10 = ((MR_Word) libs__handle_options__conv7_OmitComponents_10);
#line 2609 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_24_24 = ((MR_Word) libs__handle_options__conv6_STATE_VARIABLE_Errors_24_24);
#line 2612 "handle_options.m"
    {
#line 2612 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 634, &libs__handle_options__STATE_VARIABLE_LibGrades_27_27);
    }
#line 2617 "handle_options.m"
    {
#line 2617 "handle_options.m"
      libs__handle_options__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2617 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2617 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_4));
#line 2617 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2617 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[17]));
#line 2617 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_28_28, 4) = ((MR_Box) (libs__handle_options__IncludeComponents_9));
#line 2617 "handle_options.m"
    }
#line 2617 "handle_options.m"
    {
#line 2617 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_28_28, libs__handle_options__STATE_VARIABLE_LibGrades_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_24_24)), &libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
    }
#line 2617 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_30_30 = ((MR_Word) libs__handle_options__conv11_STATE_VARIABLE_LibGrades_30_30);
#line 2617 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_Errors_31_31 = ((MR_Word) libs__handle_options__conv10_STATE_VARIABLE_Errors_31_31);
#line 2619 "handle_options.m"
    {
#line 2619 "handle_options.m"
      libs__handle_options__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2619 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 0) = ((MR_Box) (&libs__handle_options_scalar_common_10[0]));
#line 2619 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 1) = ((MR_Box) (libs__handle_options__postprocess_options_libgrades_4_p_0_6));
#line 2619 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2619 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 3) = ((MR_Box) (&libs__handle_options_scalar_common_1[18]));
#line 2619 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_33_33, 4) = ((MR_Box) (libs__handle_options__OmitComponents_10));
#line 2619 "handle_options.m"
    }
#line 2619 "handle_options.m"
    {
#line 2619 "handle_options.m"
      mercury__list__foldl2_6_p_0(libs__handle_options__TypeCtorInfo_46_46, libs__handle_options__TypeInfo_47_47, libs__handle_options__TypeInfo_47_47, libs__handle_options__V_33_33, libs__handle_options__STATE_VARIABLE_LibGrades_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35, ((MR_Box) (libs__handle_options__STATE_VARIABLE_Errors_31_31)), &libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
    }
#line 2619 "handle_options.m"
    libs__handle_options__STATE_VARIABLE_LibGrades_35_35 = ((MR_Word) libs__handle_options__conv15_STATE_VARIABLE_LibGrades_35_35);
#line 2619 "handle_options.m"
    *libs__handle_options__STATE_VARIABLE_Errors_15 = ((MR_Word) libs__handle_options__conv14_STATE_VARIABLE_Errors_15);
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__handle_options__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2621 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_39_39, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_LibGrades_35_35));
#line 2621 "handle_options.m"
    }
#line 2621 "handle_options.m"
    {
#line 2621 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 634, libs__handle_options__V_39_39, libs__handle_options__STATE_VARIABLE_Globals_0_12, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2621 "handle_options.m"
      return;
    }
#line 2602 "handle_options.m"
  }
#line 2599 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
#line 2548 "handle_options.m"
  MR_Word libs__handle_options__X_1)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
#line 2548 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 7880 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
#line 2548 "handle_options.m"
  MR_Word * libs__handle_options__X_1)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
#line 2548 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 7913 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7947 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 7980 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8012 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2548 "handle_options.m"
static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
#line 2548 "handle_options.m"
{
#line 2548 "handle_options.m"
  {
#line 2548 "handle_options.m"
    MR_bool libs__handle_options__succeeded;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif

#line 8044 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8062 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
#line 2548 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 8079 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 8097 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
  }
#line 2548 "handle_options.m"
}

#line 2511 "handle_options.m"
static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
#line 2511 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_6,
#line 2511 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2511 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2511 "handle_options.m"
{
#line 2514 "handle_options.m"
  {
#line 2514 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2514 "handle_options.m"
    MR_Word libs__handle_options__WarnSmart_9;

#line 2515 "handle_options.m"
    {
#line 2515 "handle_options.m"
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
#line 2516 "handle_options.m"
    {
#line 2516 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 113, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
#line 2517 "handle_options.m"
    {
#line 2517 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 23, &libs__handle_options__WarnSmart_9);
    }
#line 2531 "handle_options.m"
    if ((libs__handle_options__WarnSmart_9 == (MR_Integer) 0))
#line 2532 "handle_options.m"
      {
#line 2532 "handle_options.m"
      }
#line 2531 "handle_options.m"
    else
#line 2519 "handle_options.m"
      {
#line 2519 "handle_options.m"
        MR_Word libs__handle_options__Halt_10;

#line 2520 "handle_options.m"
        {
#line 2520 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
        }
#line 2522 "handle_options.m"
        {
#line 2522 "handle_options.m"
          mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
        }
#line 2523 "handle_options.m"
        {
#line 2523 "handle_options.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 2524 "handle_options.m"
        {
#line 2524 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
        }
#line 2528 "handle_options.m"
        if ((libs__handle_options__Halt_10 == (MR_Integer) 0))
#line 2529 "handle_options.m"
          {
#line 2529 "handle_options.m"
          }
#line 2528 "handle_options.m"
        else
#line 2526 "handle_options.m"
          {
#line 2527 "handle_options.m"
            {
#line 2527 "handle_options.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2527 "handle_options.m"
              return;
            }
#line 2526 "handle_options.m"
          }
#line 2519 "handle_options.m"
      }
#line 2514 "handle_options.m"
  }
#line 2511 "handle_options.m"
}

#line 2496 "handle_options.m"
static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__Smart_9,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__ConflictingOption_10,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__ValueToDisableSmart_11,
#line 2496 "handle_options.m"
  MR_String libs__handle_options__OptionDescr_12,
#line 2496 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
#line 2496 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
#line 2496 "handle_options.m"
{
#line 2500 "handle_options.m"
  {
#line 2500 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2500 "handle_options.m"
    MR_Word libs__handle_options__Value_15;

#line 2501 "handle_options.m"
    {
#line 2501 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
#line 2503 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
#line 2503 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2504 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
#line 2507 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2514 "handle_options.m"
      {
#line 2514 "handle_options.m"
        MR_Word libs__handle_options__WarnSmart_29;

#line 2515 "handle_options.m"
        {
#line 2515 "handle_options.m"
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
#line 2516 "handle_options.m"
        {
#line 2516 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 113, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
#line 2517 "handle_options.m"
        {
#line 2517 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 23, &libs__handle_options__WarnSmart_29);
        }
#line 2531 "handle_options.m"
        if ((libs__handle_options__WarnSmart_29 == (MR_Integer) 0))
#line 2532 "handle_options.m"
          {
#line 2532 "handle_options.m"
          }
#line 2531 "handle_options.m"
        else
#line 2519 "handle_options.m"
          {
#line 2519 "handle_options.m"
            MR_Word libs__handle_options__Halt_30;

#line 2520 "handle_options.m"
            {
#line 2520 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
            }
#line 2522 "handle_options.m"
            {
#line 2522 "handle_options.m"
              mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
            }
#line 2523 "handle_options.m"
            {
#line 2523 "handle_options.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 2524 "handle_options.m"
            {
#line 2524 "handle_options.m"
              libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
            }
#line 2528 "handle_options.m"
            if ((libs__handle_options__Halt_30 == (MR_Integer) 0))
#line 2529 "handle_options.m"
              {
#line 2529 "handle_options.m"
              }
#line 2528 "handle_options.m"
            else
#line 2526 "handle_options.m"
              {
#line 2527 "handle_options.m"
                {
#line 2527 "handle_options.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 2527 "handle_options.m"
                  return;
                }
#line 2526 "handle_options.m"
              }
#line 2519 "handle_options.m"
          }
#line 2514 "handle_options.m"
      }
#line 2507 "handle_options.m"
    else
#line 2508 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
#line 2500 "handle_options.m"
  }
#line 2496 "handle_options.m"
}

#line 2476 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_8,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__RequiredOption_9,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__RequiredOptionValue_10,
#line 2476 "handle_options.m"
  MR_String libs__handle_options__ErrorMessage_11,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__Globals_12,
#line 2476 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_16,
#line 2476 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_17)
#line 2476 "handle_options.m"
{
#line 2480 "handle_options.m"
  {
#line 2480 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2480 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_14;
#line 2480 "handle_options.m"
    MR_Word libs__handle_options__OptionValue_15;

#line 2481 "handle_options.m"
    {
#line 2481 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
#line 2482 "handle_options.m"
    {
#line 2482 "handle_options.m"
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
#line 2484 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
#line 2484 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2484 "handle_options.m"
      {
#line 2485 "handle_options.m"
        {
#line 2485 "handle_options.m"
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
#line 2485 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 2484 "handle_options.m"
      }
#line 2488 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 621 "handle_options.m"
      {
#line 621 "handle_options.m"
        MR_Word libs__handle_options__V_23_23;

#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          libs__handle_options__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
#line 624 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "handle_options.m"
        }
#line 624 "handle_options.m"
        {
#line 624 "handle_options.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__STATE_VARIABLE_Errors_0_16, libs__handle_options__V_23_23, libs__handle_options__STATE_VARIABLE_Errors_17);
#line 624 "handle_options.m"
          return;
        }
#line 621 "handle_options.m"
      }
#line 2488 "handle_options.m"
    else
#line 2487 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Errors_17 = libs__handle_options__STATE_VARIABLE_Errors_0_16;
#line 2480 "handle_options.m"
  }
#line 2476 "handle_options.m"
}

#line 2458 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2458 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2458 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2458 "handle_options.m"
{
#line 2462 "handle_options.m"
  {
#line 2462 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2462 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2463 "handle_options.m"
    {
#line 2463 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2466 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2468 "handle_options.m"
      {
#line 2468 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2468 "handle_options.m"
        return;
      }
#line 2466 "handle_options.m"
    else
#line 2465 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2462 "handle_options.m"
  }
#line 2458 "handle_options.m"
}

#line 2442 "handle_options.m"
static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__SourceOption_6,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOption_7,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__ImpliedOptionValue_8,
#line 2442 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
#line 2442 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
#line 2442 "handle_options.m"
{
#line 2445 "handle_options.m"
  {
#line 2445 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2445 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_10;

#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
#line 2450 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_10 == (MR_Integer) 0))
#line 2451 "handle_options.m"
      *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
#line 2450 "handle_options.m"
    else
#line 2449 "handle_options.m"
      {
#line 2449 "handle_options.m"
        libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
#line 2449 "handle_options.m"
        return;
      }
#line 2445 "handle_options.m"
  }
#line 2442 "handle_options.m"
}

#line 2362 "handle_options.m"
static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
#line 2362 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
#line 2362 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
#line 2362 "handle_options.m"
{
#line 2364 "handle_options.m"
  {
#line 2364 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__OptFrames_4;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__OptLocalVars_5;
#line 2364 "handle_options.m"
    MR_Integer libs__handle_options__OptRepeat_6;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__UnboxedFloat_7;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__StaticGroundFloats_8;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__NonLocalGotos_9;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__AsmLabels_10;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__StaticCodeAddrs_11;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__V_44_44;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__V_49_49;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_57;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_65;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_73;
#line 2364 "handle_options.m"
    MR_Word libs__handle_options__SourceOptionValue_81;
#line 2384 "handle_options.m"
    MR_Integer libs__handle_options__V_37_37;

#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 369, &libs__handle_options__SourceOptionValue_57);
    }
#line 2450 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_57 == (MR_Integer) 0))
#line 2451 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
#line 2450 "handle_options.m"
    else
#line 2449 "handle_options.m"
      {
#line 2449 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 466, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
      }
#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 472, &libs__handle_options__SourceOptionValue_65);
    }
#line 2450 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_65 == (MR_Integer) 0))
#line 2451 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
#line 2450 "handle_options.m"
    else
#line 2449 "handle_options.m"
      {
#line 2449 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 469, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
      }
#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 472, &libs__handle_options__SourceOptionValue_73);
    }
#line 2450 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_73 == (MR_Integer) 0))
#line 2451 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
#line 2450 "handle_options.m"
    else
#line 2449 "handle_options.m"
      {
#line 2449 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 462, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
      }
#line 2446 "handle_options.m"
    {
#line 2446 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 471, &libs__handle_options__SourceOptionValue_81);
    }
#line 2450 "handle_options.m"
    if ((libs__handle_options__SourceOptionValue_81 == (MR_Integer) 0))
#line 2451 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
#line 2450 "handle_options.m"
    else
#line 2449 "handle_options.m"
      {
#line 2449 "handle_options.m"
        libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
      }
#line 2378 "handle_options.m"
    {
#line 2378 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 472, &libs__handle_options__OptFrames_4);
    }
#line 2379 "handle_options.m"
    {
#line 2379 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 466, &libs__handle_options__OptLocalVars_5);
    }
#line 2380 "handle_options.m"
    {
#line 2380 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 475, &libs__handle_options__OptRepeat_6);
    }
#line 2382 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
#line 2383 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 2383 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
#line 2384 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2384 "handle_options.m"
      {
#line 2385 "handle_options.m"
        libs__handle_options__V_37_37 = (MR_Integer) 1;
#line 2385 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
#line 2384 "handle_options.m"
      }
#line 2392 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2391 "handle_options.m"
      {
#line 2391 "handle_options.m"
        {
#line 2391 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 475, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[13]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
#line 2391 "handle_options.m"
      }
#line 2392 "handle_options.m"
    else
#line 2391 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
#line 2398 "handle_options.m"
    {
#line 2398 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 239, &libs__handle_options__UnboxedFloat_7);
    }
#line 2404 "handle_options.m"
    if ((libs__handle_options__UnboxedFloat_7 == (MR_Integer) 0))
#line 2413 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2404 "handle_options.m"
    else
#line 2403 "handle_options.m"
      libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
#line 2415 "handle_options.m"
    {
#line 2415 "handle_options.m"
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2415 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
#line 2415 "handle_options.m"
    }
#line 2415 "handle_options.m"
    {
#line 2415 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 447, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
#line 2420 "handle_options.m"
    {
#line 2420 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 245, &libs__handle_options__NonLocalGotos_9);
    }
#line 2421 "handle_options.m"
    {
#line 2421 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 247, &libs__handle_options__AsmLabels_10);
    }
#line 2423 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
#line 2423 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2424 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
#line 2432 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2431 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
#line 2432 "handle_options.m"
    else
#line 2433 "handle_options.m"
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
#line 2435 "handle_options.m"
    {
#line 2435 "handle_options.m"
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2435 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
#line 2435 "handle_options.m"
    }
#line 2435 "handle_options.m"
    {
#line 2435 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
#line 2435 "handle_options.m"
      return;
    }
#line 2364 "handle_options.m"
  }
#line 2362 "handle_options.m"
}

#line 2221 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_13(
#line 2221 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2221 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2221 "handle_options.m"
{
#line 2221 "handle_options.m"
  {
#line 2221 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2221 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2221 "handle_options.m"
    MR_String libs__handle_options__conv10_HeadVar__3_1550;

#line 2221 "handle_options.m"
    {
#line 2221 "handle_options.m"
      libs__handle_options__conv10_HeadVar__3_1550 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2221__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2221 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_HeadVar__3_1550));
#line 2221 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2221 "handle_options.m"
  }
#line 2221 "handle_options.m"
}

#line 2219 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
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
    MR_String libs__handle_options__conv9_HeadVar__3_1544;

#line 2219 "handle_options.m"
    {
#line 2219 "handle_options.m"
      libs__handle_options__conv9_HeadVar__3_1544 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2219__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2219 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_HeadVar__3_1544));
#line 2219 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2219 "handle_options.m"
  }
#line 2219 "handle_options.m"
}

#line 2228 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
#line 2228 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2228 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2228 "handle_options.m"
{
#line 2228 "handle_options.m"
  {
#line 2228 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2228 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2228 "handle_options.m"
    MR_String libs__handle_options__conv8_HeadVar__2_1539;

#line 2228 "handle_options.m"
    {
#line 2228 "handle_options.m"
      libs__handle_options__conv8_HeadVar__2_1539 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2228__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2228 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_HeadVar__2_1539));
#line 2228 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2228 "handle_options.m"
  }
#line 2228 "handle_options.m"
}

#line 2227 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
#line 2227 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2227 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2227 "handle_options.m"
{
#line 2227 "handle_options.m"
  {
#line 2227 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2227 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2227 "handle_options.m"
    MR_String libs__handle_options__conv7_HeadVar__2_1534;

#line 2227 "handle_options.m"
    {
#line 2227 "handle_options.m"
      libs__handle_options__conv7_HeadVar__2_1534 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2227__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2227 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_HeadVar__2_1534));
#line 2227 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2227 "handle_options.m"
  }
#line 2227 "handle_options.m"
}

#line 2197 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2197 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2197 "handle_options.m"
{
#line 2197 "handle_options.m"
  {
#line 2197 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2197 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2197 "handle_options.m"
    MR_String libs__handle_options__conv6_HeadVar__3_1521;

#line 2197 "handle_options.m"
    {
#line 2197 "handle_options.m"
      libs__handle_options__conv6_HeadVar__3_1521 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2197__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2197 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_HeadVar__3_1521));
#line 2197 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2197 "handle_options.m"
  }
#line 2197 "handle_options.m"
}

#line 2193 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
#line 2193 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2193 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2193 "handle_options.m"
{
#line 2193 "handle_options.m"
  {
#line 2193 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2193 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2193 "handle_options.m"
    MR_String libs__handle_options__conv5_HeadVar__3_1515;

#line 2193 "handle_options.m"
    {
#line 2193 "handle_options.m"
      libs__handle_options__conv5_HeadVar__3_1515 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2193__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2193 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_HeadVar__3_1515));
#line 2193 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2193 "handle_options.m"
  }
#line 2193 "handle_options.m"
}

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2175 "handle_options.m"
{
#line 2175 "handle_options.m"
  {
#line 2175 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2175 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2175 "handle_options.m"
    {
#line 2175 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2175 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2175 "handle_options.m"
  }
#line 2175 "handle_options.m"
}

#line 2175 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2175 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2175 "handle_options.m"
{
#line 2175 "handle_options.m"
  {
#line 2175 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2175 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2175 "handle_options.m"
    {
#line 2175 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2175__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2175 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2175 "handle_options.m"
  }
#line 2175 "handle_options.m"
}

#line 2157 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
#line 2157 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2157 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2157 "handle_options.m"
{
#line 2157 "handle_options.m"
  {
#line 2157 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2157 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2157 "handle_options.m"
    MR_String libs__handle_options__conv4_HeadVar__4_1496;

#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      libs__handle_options__conv4_HeadVar__4_1496 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2157__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2157 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_1496));
#line 2157 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2157 "handle_options.m"
  }
#line 2157 "handle_options.m"
}

#line 2121 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
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
    MR_String libs__handle_options__conv3_HeadVar__3_1477;

#line 2121 "handle_options.m"
    {
#line 2121 "handle_options.m"
      libs__handle_options__conv3_HeadVar__3_1477 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2121__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2121 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_HeadVar__3_1477));
#line 2121 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2121 "handle_options.m"
  }
#line 2121 "handle_options.m"
}

#line 2111 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
#line 2111 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2111 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2111 "handle_options.m"
{
#line 2111 "handle_options.m"
  {
#line 2111 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2111 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2111 "handle_options.m"
    MR_String libs__handle_options__conv2_HeadVar__3_1467;

#line 2111 "handle_options.m"
    {
#line 2111 "handle_options.m"
      libs__handle_options__conv2_HeadVar__3_1467 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2111 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_HeadVar__3_1467));
#line 2111 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2111 "handle_options.m"
  }
#line 2111 "handle_options.m"
}

#line 2098 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2098 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2098 "handle_options.m"
{
#line 2098 "handle_options.m"
  {
#line 2098 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2098 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2098 "handle_options.m"
    MR_String libs__handle_options__conv1_HeadVar__3_1450;

#line 2098 "handle_options.m"
    {
#line 2098 "handle_options.m"
      libs__handle_options__conv1_HeadVar__3_1450 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2098__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2098 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_1450));
#line 2098 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2098 "handle_options.m"
  }
#line 2098 "handle_options.m"
}

#line 2083 "handle_options.m"
static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
#line 2083 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2083 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 2083 "handle_options.m"
{
#line 2083 "handle_options.m"
  {
#line 2083 "handle_options.m"
    MR_Box libs__handle_options__wrapper_arg_2;
#line 2083 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2083 "handle_options.m"
    MR_String libs__handle_options__conv0_HeadVar__3_1435;

#line 2083 "handle_options.m"
    {
#line 2083 "handle_options.m"
      libs__handle_options__conv0_HeadVar__3_1435 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
#line 2083 "handle_options.m"
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__3_1435));
#line 2083 "handle_options.m"
    return libs__handle_options__wrapper_arg_2;
#line 2083 "handle_options.m"
  }
#line 2083 "handle_options.m"
}

#line 628 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
#line 628 "handle_options.m"
  MR_Word libs__handle_options__OptionTable0_24,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__Target_25,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__GC_Method_26,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TagsMethod0_27,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TermNorm_28,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__Term2Norm_29,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TraceLevel_30,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TraceSuppress_31,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__SSTraceLevel_32,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeThreadSafe_33,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__C_CompilerType_34,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__CSharp_CompilerType_35,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__ReuseStrategy_36,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeILVersion_37,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__MaybeFeedbackInfo_38,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__HostEnvType_39,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__SystemEnvType_40,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__TargetEnvType_41,
#line 628 "handle_options.m"
  MR_Word libs__handle_options__STATE_VARIABLE_Errors_0_187,
#line 628 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Errors_188,
#line 628 "handle_options.m"
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_189)
#line 628 "handle_options.m"
{
#line 643 "handle_options.m"
  {
#line 643 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_1657_1657 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 643 "handle_options.m"
    MR_String libs__handle_options__InstallCmd_45;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__FileInstallCmd_46;
#line 643 "handle_options.m"
    MR_String libs__handle_options__EventSetFileName0_48;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__PregeneratedDist_51;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits0_52;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits1_53;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__NumTagBits_55;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__TagsMethod_56;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__GradeSupportsParConj_57;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__Parallel_58;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__Threadscope_59;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ImplicitParallelism_60;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ILFuncPtrTypes_62;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ILRefAnyFields_63;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__LibLinkages0_64;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__TransOpt_67;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__InterModOpt_70;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__InterModAnalysis_71;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__MaybeStandaloneInt_72;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ExtraInitFunctions_73;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__Smart_75;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__VeryVerbose_76;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__Statistics_77;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__DebugLiveness_78;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__DebugModesPredId_82;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DebugUnneededCodePredNames_83;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredIdStrs_86;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DebugOptPredNames_87;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_92;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSPredIds_93;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseTrail_99;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__HighLevelCode_100;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelStackCopy_101;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_102;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseMinimalModel_103;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ProfOptimized_108;
#line 643 "handle_options.m"
    MR_String libs__handle_options__ExpComp_109;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__TraceOptimized_110;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ProfileDeep_111;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsWords_114;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__RecordTermSizesAsCells_115;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__PutNondetEnvOnHeap_116;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DisablePneg_117;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DisableCut_118;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DumpHLDSStages_119;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__DumpTraceStages_120;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ParallelLiveness_121;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ParallelCodeGen_122;
#line 643 "handle_options.m"
    MR_String libs__handle_options__TargetArch_127;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__MaybeStdLibDir_128;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__MaybeConfDir_133;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ConfigFile_136;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__MercuryLibDirs_138;
#line 643 "handle_options.m"
    MR_String libs__handle_options__GradeString_139;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseSearchDirs_153;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseGradeSubdirs_156;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__SearchLibFilesDirs_157;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__IntermodDirs2_158;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__ToGradeSubdir_159;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__LinkLibDirs_168;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__InitDirs_171;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__UseSubdirs_172;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__BackendForeignLanguages_182;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_183;
#line 643 "handle_options.m"
    MR_Integer libs__handle_options__CompareSpec_186;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_200_200;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_208_208;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_229_229;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_248_248;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_249_249;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_264_264;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_271_271;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_272_272;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_470_470;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_475_475;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_480_480;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_484_484;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_485_485;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_490_490;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_494_494;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_495_495;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_500_500;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_505_505;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_510_510;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_515_515;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_520_520;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_525_525;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_534_534;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_539_539;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_544_544;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_549_549;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_554_554;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_559_559;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_564_564;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_571_571;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_577_577;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_582_582;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_587_587;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_593_593;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_598_598;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_603_603;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_608_608;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_613_613;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_618_618;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_623_623;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_628_628;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_633_633;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_638_638;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_643_643;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_648_648;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_652_652;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_657_657;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_662_662;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_667_667;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_672_672;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_677_677;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_682_682;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_687_687;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_692_692;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_697_697;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_702_702;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_707_707;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_712_712;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_717_717;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_722_722;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_727_727;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_732_732;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_737_737;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_742_742;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_747_747;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_752_752;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_757_757;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_762_762;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_767_767;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_773_773;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_778_778;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_783_783;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_788_788;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_793_793;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_798_798;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_804_804;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_809_809;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_814_814;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_819_819;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_827_827;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_831_831;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_837_837;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_842_842;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_848_848;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_860_860;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_864_864;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_869_869;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_874_874;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_879_879;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_886_886;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_899_899;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_900_900;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_923_923;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_927_927;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_932_932;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_937_937;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_942_942;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_950_950;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_955_955;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_960_960;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_965_965;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_970_970;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_976_976;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_981_981;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_986_986;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_991_991;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_996_996;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1001_1001;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1006_1006;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1011_1011;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1016_1016;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1026_1026;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1031_1031;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1036_1036;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1131_1131;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1140_1140;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1144_1144;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1157_1157;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1162_1162;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1171_1171;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1179_1179;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1183_1183;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1193_1193;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1198_1198;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1203_1203;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1262_1262;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1272_1272;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1277_1277;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1282_1282;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1287_1287;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1292_1292;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1297_1297;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1302_1302;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1307_1307;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1312_1312;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1317_1317;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1335_1335;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1340_1340;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1345_1345;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1350_1350;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1360_1360;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1365_1365;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1370_1370;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1375_1375;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1380_1380;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1385_1385;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1390_1390;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1406_1406;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1414_1414;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1490_1490;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1511_1511;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_1527_1527;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1528_1528;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__V_1530_1530;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1531_1531;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1567_1567;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1583_1583;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Errors_1591_1591;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1615_1615;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1622_1622;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1631_1631;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1636_1636;
#line 643 "handle_options.m"
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1642_1642;
#line 679 "handle_options.m"
    MR_Word libs__handle_options__V_201_201;
#line 1156 "handle_options.m"
    MR_String libs__handle_options__V_74_74;
#line 1317 "handle_options.m"
    MR_String libs__handle_options__AllDumpOptions_79;
#line 1305 "handle_options.m"
    MR_String libs__handle_options__V_823_823;
#line 1574 "handle_options.m"
    MR_Word libs__handle_options__V_1039_1039;
#line 2062 "handle_options.m"
    MR_String libs__handle_options__V_1419_1419;
#line 2250 "handle_options.m"
    MR_Word libs__handle_options__ToMihsSubdir_173;
#line 2250 "handle_options.m"
    MR_Word libs__handle_options__ToHrlsSubdir_174;
#line 2331 "handle_options.m"
    MR_Integer libs__handle_options__V_1633_1633;

#line 645 "handle_options.m"
    {
#line 645 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1657_1657, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 631)), &libs__handle_options__InstallCmd_45);
    }
#line 646 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_45, (MR_String) "") == 0);
#line 648 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 647 "handle_options.m"
      libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "handle_options.m"
    else
#line 650 "handle_options.m"
      {
#line 650 "handle_options.m"
        MR_String libs__handle_options__InstallCmdDirOption_47;

#line 649 "handle_options.m"
        {
#line 649 "handle_options.m"
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1657_1657, libs__handle_options__OptionTable0_24, ((MR_Box) ((MR_Integer) 632)), &libs__handle_options__InstallCmdDirOption_47);
        }
#line 651 "handle_options.m"
        {
#line 651 "handle_options.m"
          libs__handle_options__FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 0) = ((MR_Box) (libs__handle_options__InstallCmd_45));
#line 651 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_46, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_47));
#line 651 "handle_options.m"
        }
#line 650 "handle_options.m"
      }
#line 655 "handle_options.m"
    {
#line 655 "handle_options.m"
      libs__globals__globals_init_20_p_0(libs__handle_options__OptionTable0_24, libs__handle_options__Target_25, libs__handle_options__GC_Method_26, libs__handle_options__TagsMethod0_27, libs__handle_options__TermNorm_28, libs__handle_options__Term2Norm_29, libs__handle_options__TraceLevel_30, libs__handle_options__TraceSuppress_31, libs__handle_options__SSTraceLevel_32, libs__handle_options__MaybeThreadSafe_33, libs__handle_options__C_CompilerType_34, libs__handle_options__CSharp_CompilerType_35, libs__handle_options__ReuseStrategy_36, libs__handle_options__MaybeILVersion_37, libs__handle_options__MaybeFeedbackInfo_38, libs__handle_options__HostEnvType_39, libs__handle_options__SystemEnvType_40, libs__handle_options__TargetEnvType_41, libs__handle_options__FileInstallCmd_46, &libs__handle_options__STATE_VARIABLE_Globals_194_194);
    }
#line 662 "handle_options.m"
    {
#line 662 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_194_194, (MR_Integer) 170, &libs__handle_options__EventSetFileName0_48);
    }
#line 664 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_48, (MR_String) "") == 0);
#line 674 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 666 "handle_options.m"
      {
#line 666 "handle_options.m"
        MR_Word libs__handle_options__MaybeEventSetFileName_49;

#line 665 "handle_options.m"
        {
#line 665 "handle_options.m"
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_49);
        }
#line 671 "handle_options.m"
        if ((libs__handle_options__MaybeEventSetFileName_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_200_200 = libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 671 "handle_options.m"
        else
#line 668 "handle_options.m"
          {
#line 668 "handle_options.m"
            MR_String libs__handle_options__EventSetFileName_50 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_49, (MR_Integer) 0)));
#line 668 "handle_options.m"
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
#line 669 "handle_options.m"
            {
#line 669 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 170, libs__handle_options__V_199_199, libs__handle_options__STATE_VARIABLE_Globals_194_194, &libs__handle_options__STATE_VARIABLE_Globals_200_200);
            }
#line 668 "handle_options.m"
          }
#line 666 "handle_options.m"
      }
#line 674 "handle_options.m"
    else
#line 675 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_200_200 = libs__handle_options__STATE_VARIABLE_Globals_194_194;
#line 679 "handle_options.m"
    {
#line 679 "handle_options.m"
      libs__handle_options__V_201_201 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_26);
    }
#line 679 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_201_201 == (MR_Integer) 1);
#line 684 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 681 "handle_options.m"
      {
#line 681 "handle_options.m"
        MR_Word libs__handle_options__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 681 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_204_204;

#line 680 "handle_options.m"
        {
#line 680 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_203_203, libs__handle_options__STATE_VARIABLE_Globals_200_200, &libs__handle_options__STATE_VARIABLE_Globals_204_204);
        }
#line 682 "handle_options.m"
        {
#line 682 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_203_203, libs__handle_options__STATE_VARIABLE_Globals_204_204, &libs__handle_options__STATE_VARIABLE_Globals_208_208);
        }
#line 681 "handle_options.m"
      }
#line 684 "handle_options.m"
    else
#line 682 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_208_208 = libs__handle_options__STATE_VARIABLE_Globals_200_200;
#line 690 "handle_options.m"
    {
#line 690 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_208_208, (MR_Integer) 219, &libs__handle_options__PregeneratedDist_51);
    }
#line 698 "handle_options.m"
    if ((libs__handle_options__PregeneratedDist_51 == (MR_Integer) 0))
#line 699 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_229_229 = libs__handle_options__STATE_VARIABLE_Globals_208_208;
#line 698 "handle_options.m"
    else
#line 692 "handle_options.m"
      {
#line 692 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_213_213;
#line 692 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_217_217;
#line 692 "handle_options.m"
        MR_Word libs__handle_options__V_220_220;
#line 692 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_221_221;
#line 692 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_225_225;

#line 693 "handle_options.m"
        {
#line 693 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), libs__handle_options__STATE_VARIABLE_Globals_208_208, &libs__handle_options__STATE_VARIABLE_Globals_213_213);
        }
#line 694 "handle_options.m"
        {
#line 694 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), libs__handle_options__STATE_VARIABLE_Globals_213_213, &libs__handle_options__STATE_VARIABLE_Globals_217_217);
        }
#line 695 "handle_options.m"
        libs__handle_options__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 695 "handle_options.m"
        {
#line 695 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_217_217, &libs__handle_options__STATE_VARIABLE_Globals_221_221);
        }
#line 696 "handle_options.m"
        {
#line 696 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 220, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_221_221, &libs__handle_options__STATE_VARIABLE_Globals_225_225);
        }
#line 697 "handle_options.m"
        {
#line 697 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_220_220, libs__handle_options__STATE_VARIABLE_Globals_225_225, &libs__handle_options__STATE_VARIABLE_Globals_229_229);
        }
#line 692 "handle_options.m"
      }
#line 706 "handle_options.m"
    if ((libs__handle_options__TagsMethod0_27 == (MR_Integer) 0))
#line 705 "handle_options.m"
      libs__handle_options__NumTagBits0_52 = (MR_Integer) 0;
#line 706 "handle_options.m"
    else
#line 709 "handle_options.m"
      {
#line 710 "handle_options.m"
        {
#line 710 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229, (MR_Integer) 233, &libs__handle_options__NumTagBits0_52);
        }
#line 709 "handle_options.m"
      }
#line 718 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_27 == (MR_Integer) 1);
#line 718 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 719 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_52 == (MR_Integer) -1);
#line 723 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 721 "handle_options.m"
      {
#line 721 "handle_options.m"
        {
#line 721 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229, (MR_Integer) 238, &libs__handle_options__NumTagBits1_53);
        }
#line 721 "handle_options.m"
      }
#line 723 "handle_options.m"
    else
#line 724 "handle_options.m"
      libs__handle_options__NumTagBits1_53 = libs__handle_options__NumTagBits0_52;
#line 729 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_53 < (MR_Integer) 0);
#line 737 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 730 "handle_options.m"
      {
#line 730 "handle_options.m"
        MR_String libs__handle_options__ProgName_54;
#line 730 "handle_options.m"
        MR_String libs__handle_options__V_1670_1670;
#line 730 "handle_options.m"
        MR_String libs__handle_options__V_1672_1672;

#line 730 "handle_options.m"
        {
#line 730 "handle_options.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_54);
        }
#line 9946 "libs.handle_options.c"
        {
#line 9948 "libs.handle_options.c"
          libs__handle_options__V_1670_1670 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_54, (MR_String) ": warning: --num-tag-bits invalid or unspecified\n");
        }
#line 9951 "libs.handle_options.c"
        {
#line 9953 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1670_1670);
        }
#line 9956 "libs.handle_options.c"
        {
#line 9958 "libs.handle_options.c"
          libs__handle_options__V_1672_1672 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgName_54, (MR_String) ": using --num-tag-bits 0 (tags disabled)\n");
        }
#line 9961 "libs.handle_options.c"
        {
#line 9963 "libs.handle_options.c"
          mercury__io__write_string_3_p_0(libs__handle_options__V_1672_1672);
        }
#line 735 "handle_options.m"
        {
#line 735 "handle_options.m"
          libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_229_229);
        }
#line 736 "handle_options.m"
        libs__handle_options__NumTagBits_55 = (MR_Integer) 0;
#line 730 "handle_options.m"
      }
#line 737 "handle_options.m"
    else
#line 738 "handle_options.m"
      libs__handle_options__NumTagBits_55 = libs__handle_options__NumTagBits1_53;
#line 741 "handle_options.m"
    {
#line 741 "handle_options.m"
      libs__handle_options__V_248_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "handle_options.m"
      MR_hl_field(MR_mktag(2), libs__handle_options__V_248_248, 0) = ((MR_Box) (libs__handle_options__NumTagBits_55));
#line 741 "handle_options.m"
    }
#line 741 "handle_options.m"
    {
#line 741 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 233, libs__handle_options__V_248_248, libs__handle_options__STATE_VARIABLE_Globals_229_229, &libs__handle_options__STATE_VARIABLE_Globals_249_249);
    }
#line 742 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_55 == (MR_Integer) 0);
#line 745 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 743 "handle_options.m"
      {
#line 743 "handle_options.m"
        libs__handle_options__TagsMethod_56 = (MR_Integer) 0;
#line 744 "handle_options.m"
        {
#line 744 "handle_options.m"
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_56, libs__handle_options__STATE_VARIABLE_Globals_249_249, &libs__handle_options__STATE_VARIABLE_Globals_250_250);
        }
#line 743 "handle_options.m"
      }
#line 745 "handle_options.m"
    else
#line 746 "handle_options.m"
      {
#line 746 "handle_options.m"
        libs__handle_options__TagsMethod_56 = libs__handle_options__TagsMethod0_27;
#line 746 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_250_250 = libs__handle_options__STATE_VARIABLE_Globals_249_249;
#line 746 "handle_options.m"
      }
#line 749 "handle_options.m"
    {
#line 749 "handle_options.m"
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, &libs__handle_options__GradeSupportsParConj_57);
    }
#line 750 "handle_options.m"
    {
#line 750 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 212, &libs__handle_options__Parallel_58);
    }
#line 751 "handle_options.m"
    {
#line 751 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 213, &libs__handle_options__Threadscope_59);
    }
#line 753 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0);
#line 753 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 754 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_59 == (MR_Integer) 1);
#line 758 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 756 "handle_options.m"
      {
#line 756 "handle_options.m"
        {
#line 756 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\'threadscope\' grade component requires a parallel grade", libs__handle_options__STATE_VARIABLE_Errors_0_187, &libs__handle_options__STATE_VARIABLE_Errors_254_254);
        }
#line 756 "handle_options.m"
      }
#line 758 "handle_options.m"
    else
#line 756 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_254_254 = libs__handle_options__STATE_VARIABLE_Errors_0_187;
#line 765 "handle_options.m"
    {
#line 765 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 670, &libs__handle_options__ImplicitParallelism_60);
    }
#line 799 "handle_options.m"
    if ((libs__handle_options__ImplicitParallelism_60 == (MR_Integer) 0))
#line 800 "handle_options.m"
      {
#line 800 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 800 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_264_264 = libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 800 "handle_options.m"
      }
#line 799 "handle_options.m"
    else
#line 782 "handle_options.m"
      if ((libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0))
#line 786 "handle_options.m"
        {
#line 794 "handle_options.m"
          if ((libs__handle_options__Parallel_58 == (MR_Integer) 0))
#line 795 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 794 "handle_options.m"
          else
#line 788 "handle_options.m"
            {
#line 789 "handle_options.m"
              {
#line 789 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires a grade that supports parallel conjunctions, use a low-level C grade without trailing.", libs__handle_options__STATE_VARIABLE_Errors_254_254, &libs__handle_options__STATE_VARIABLE_Errors_268_268);
              }
#line 788 "handle_options.m"
            }
#line 797 "handle_options.m"
          {
#line 797 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 670, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_250_250, &libs__handle_options__STATE_VARIABLE_Globals_264_264);
          }
#line 786 "handle_options.m"
        }
#line 782 "handle_options.m"
      else
#line 770 "handle_options.m"
        {
#line 770 "handle_options.m"
          MR_String libs__handle_options__FeedbackFile_61;

#line 771 "handle_options.m"
          {
#line 771 "handle_options.m"
            libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_250_250, (MR_Integer) 671, &libs__handle_options__FeedbackFile_61);
          }
#line 774 "handle_options.m"
          libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_61, (MR_String) "") == 0);
#line 779 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 776 "handle_options.m"
            {
#line 776 "handle_options.m"
              {
#line 776 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "\'--implicit-parallelism\' requires \'--feedback-file\'", libs__handle_options__STATE_VARIABLE_Errors_254_254, &libs__handle_options__STATE_VARIABLE_Errors_268_268);
              }
#line 776 "handle_options.m"
            }
#line 779 "handle_options.m"
          else
#line 776 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_268_268 = libs__handle_options__STATE_VARIABLE_Errors_254_254;
#line 776 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_264_264 = libs__handle_options__STATE_VARIABLE_Globals_250_250;
#line 770 "handle_options.m"
        }
#line 805 "handle_options.m"
    libs__handle_options__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]);
#line 804 "handle_options.m"
    {
#line 804 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 670, (MR_Integer) 194, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_264_264, &libs__handle_options__STATE_VARIABLE_Globals_272_272);
    }
#line 810 "handle_options.m"
    if ((libs__handle_options__GradeSupportsParConj_57 == (MR_Integer) 0))
#line 811 "handle_options.m"
      {
#line 812 "handle_options.m"
        {
#line 812 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 672, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_272_272, &libs__handle_options__STATE_VARIABLE_Globals_276_276);
        }
#line 811 "handle_options.m"
      }
#line 810 "handle_options.m"
    else
#line 809 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_276_276 = libs__handle_options__STATE_VARIABLE_Globals_272_272;
#line 886 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 887 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 886 "handle_options.m"
    else
#line 886 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 888 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 886 "handle_options.m"
      else
#line 886 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 4))
#line 890 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 886 "handle_options.m"
        else
#line 886 "handle_options.m"
          if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 860 "handle_options.m"
            {
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_279_279;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_282_282;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__V_285_285;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_286_286;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_290_290;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_294_294;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_298_298;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_302_302;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_306_306;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_310_310;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_314_314;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_318_318;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_322_322;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_326_326;
#line 860 "handle_options.m"
              MR_Word libs__handle_options__STATE_VARIABLE_Globals_330_330;
#line 881 "handle_options.m"
              MR_Word libs__handle_options__V_332_332;

#line 861 "handle_options.m"
              {
#line 861 "handle_options.m"
                libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_276_276, &libs__handle_options__STATE_VARIABLE_Globals_279_279);
              }
#line 862 "handle_options.m"
              {
#line 862 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[193]), libs__handle_options__STATE_VARIABLE_Globals_279_279, &libs__handle_options__STATE_VARIABLE_Globals_282_282);
              }
#line 863 "handle_options.m"
              libs__handle_options__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 863 "handle_options.m"
              {
#line 863 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_282_282, &libs__handle_options__STATE_VARIABLE_Globals_286_286);
              }
#line 865 "handle_options.m"
              {
#line 865 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_286_286, &libs__handle_options__STATE_VARIABLE_Globals_290_290);
              }
#line 867 "handle_options.m"
              {
#line 867 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_290_290, &libs__handle_options__STATE_VARIABLE_Globals_294_294);
              }
#line 868 "handle_options.m"
              {
#line 868 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_294_294, &libs__handle_options__STATE_VARIABLE_Globals_298_298);
              }
#line 869 "handle_options.m"
              {
#line 869 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_298_298, &libs__handle_options__STATE_VARIABLE_Globals_302_302);
              }
#line 870 "handle_options.m"
              {
#line 870 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_302_302, &libs__handle_options__STATE_VARIABLE_Globals_306_306);
              }
#line 871 "handle_options.m"
              {
#line 871 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]), libs__handle_options__STATE_VARIABLE_Globals_306_306, &libs__handle_options__STATE_VARIABLE_Globals_310_310);
              }
#line 872 "handle_options.m"
              {
#line 872 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 240, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_310_310, &libs__handle_options__STATE_VARIABLE_Globals_314_314);
              }
#line 873 "handle_options.m"
              {
#line 873 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_314_314, &libs__handle_options__STATE_VARIABLE_Globals_318_318);
              }
#line 875 "handle_options.m"
              {
#line 875 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 446, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_318_318, &libs__handle_options__STATE_VARIABLE_Globals_322_322);
              }
#line 876 "handle_options.m"
              {
#line 876 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 647, libs__handle_options__V_285_285, libs__handle_options__STATE_VARIABLE_Globals_322_322, &libs__handle_options__STATE_VARIABLE_Globals_326_326);
              }
#line 877 "handle_options.m"
              {
#line 877 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 662, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_326_326, &libs__handle_options__STATE_VARIABLE_Globals_330_330);
              }
#line 881 "handle_options.m"
              {
#line 881 "handle_options.m"
                libs__handle_options__V_332_332 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
              }
#line 881 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__V_332_332 == (MR_Integer) 0);
#line 883 "handle_options.m"
              if (libs__handle_options__succeeded)
#line 882 "handle_options.m"
                {
#line 882 "handle_options.m"
                  {
#line 882 "handle_options.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 483, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_330_330, &libs__handle_options__STATE_VARIABLE_Globals_335_335);
                  }
#line 882 "handle_options.m"
                }
#line 883 "handle_options.m"
              else
#line 882 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_330_330;
#line 860 "handle_options.m"
            }
#line 886 "handle_options.m"
          else
#line 889 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_335_335 = libs__handle_options__STATE_VARIABLE_Globals_276_276;
#line 897 "handle_options.m"
    {
#line 897 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_335_335, (MR_Integer) 259, &libs__handle_options__ILFuncPtrTypes_62);
    }
#line 899 "handle_options.m"
    {
#line 899 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_335_335, (MR_Integer) 258, &libs__handle_options__ILRefAnyFields_63);
    }
#line 902 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__ILFuncPtrTypes_62 == (MR_Integer) 1);
#line 902 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 903 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__ILRefAnyFields_63 == (MR_Integer) 1);
#line 906 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 903 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_342_342 = libs__handle_options__STATE_VARIABLE_Globals_335_335;
#line 906 "handle_options.m"
    else
#line 907 "handle_options.m"
      {
#line 907 "handle_options.m"
        {
#line 907 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 257, (MR_Integer) 256, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_335_335, &libs__handle_options__STATE_VARIABLE_Globals_342_342);
        }
#line 907 "handle_options.m"
      }
#line 10337 "libs.handle_options.c"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1028 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_470_470 = libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 10341 "libs.handle_options.c"
    else
#line 10343 "libs.handle_options.c"
      if ((libs__handle_options__Target_25 == (MR_Integer) 4))
#line 10345 "libs.handle_options.c"
        {
#line 10347 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_411_411;
#line 10349 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_414_414;
#line 10351 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_418_418;
#line 10353 "libs.handle_options.c"
          MR_Word libs__handle_options__V_421_421;
#line 10355 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_422_422;
#line 10357 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_426_426;
#line 10359 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_430_430;
#line 10361 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_434_434;
#line 10363 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_438_438;
#line 10365 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_442_442;
#line 10367 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_446_446;
#line 10369 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_450_450;
#line 10371 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_454_454;
#line 10373 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_458_458;
#line 10375 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_462_462;
#line 10377 "libs.handle_options.c"
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_466_466;

#line 1000 "handle_options.m"
          {
#line 1000 "handle_options.m"
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_411_411);
          }
#line 1001 "handle_options.m"
          {
#line 1001 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[193]), libs__handle_options__STATE_VARIABLE_Globals_411_411, &libs__handle_options__STATE_VARIABLE_Globals_414_414);
          }
#line 1002 "handle_options.m"
          {
#line 1002 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_414_414, &libs__handle_options__STATE_VARIABLE_Globals_418_418);
          }
#line 1003 "handle_options.m"
          libs__handle_options__V_421_421 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1003 "handle_options.m"
          {
#line 1003 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_418_418, &libs__handle_options__STATE_VARIABLE_Globals_422_422);
          }
#line 1005 "handle_options.m"
          {
#line 1005 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_422_422, &libs__handle_options__STATE_VARIABLE_Globals_426_426);
          }
#line 1007 "handle_options.m"
          {
#line 1007 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 273, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_426_426, &libs__handle_options__STATE_VARIABLE_Globals_430_430);
          }
#line 1009 "handle_options.m"
          {
#line 1009 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_430_430, &libs__handle_options__STATE_VARIABLE_Globals_434_434);
          }
#line 1011 "handle_options.m"
          {
#line 1011 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_434_434, &libs__handle_options__STATE_VARIABLE_Globals_438_438);
          }
#line 1013 "handle_options.m"
          {
#line 1013 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_438_438, &libs__handle_options__STATE_VARIABLE_Globals_442_442);
          }
#line 1015 "handle_options.m"
          {
#line 1015 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 647, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_442_442, &libs__handle_options__STATE_VARIABLE_Globals_446_446);
          }
#line 1016 "handle_options.m"
          {
#line 1016 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 662, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_446_446, &libs__handle_options__STATE_VARIABLE_Globals_450_450);
          }
#line 1022 "handle_options.m"
          {
#line 1022 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_450_450, &libs__handle_options__STATE_VARIABLE_Globals_454_454);
          }
#line 1023 "handle_options.m"
          {
#line 1023 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_454_454, &libs__handle_options__STATE_VARIABLE_Globals_458_458);
          }
#line 1024 "handle_options.m"
          {
#line 1024 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_458_458, &libs__handle_options__STATE_VARIABLE_Globals_462_462);
          }
#line 1025 "handle_options.m"
          {
#line 1025 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_462_462, &libs__handle_options__STATE_VARIABLE_Globals_466_466);
          }
#line 1026 "handle_options.m"
          {
#line 1026 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_421_421, libs__handle_options__STATE_VARIABLE_Globals_466_466, &libs__handle_options__STATE_VARIABLE_Globals_470_470);
          }
#line 10462 "libs.handle_options.c"
        }
#line 10464 "libs.handle_options.c"
      else
#line 10466 "libs.handle_options.c"
        if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1029 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_470_470 = libs__handle_options__STATE_VARIABLE_Globals_342_342;
#line 10470 "libs.handle_options.c"
        else
#line 10472 "libs.handle_options.c"
          {
#line 10474 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_345_345;
#line 10476 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_348_348;
#line 10478 "libs.handle_options.c"
            MR_Word libs__handle_options__V_351_351;
#line 10480 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_352_352;
#line 10482 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_356_356;
#line 10484 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_360_360;
#line 10486 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_364_364;
#line 10488 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_368_368;
#line 10490 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_372_372;
#line 10492 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_376_376;
#line 10494 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_380_380;
#line 10496 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_384_384;
#line 10498 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_388_388;
#line 10500 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_392_392;
#line 10502 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_396_396;
#line 10504 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_400_400;
#line 10506 "libs.handle_options.c"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_404_404;

#line 951 "handle_options.m"
            {
#line 951 "handle_options.m"
              libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_342_342, &libs__handle_options__STATE_VARIABLE_Globals_345_345);
            }
#line 952 "handle_options.m"
            {
#line 952 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 211, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[193]), libs__handle_options__STATE_VARIABLE_Globals_345_345, &libs__handle_options__STATE_VARIABLE_Globals_348_348);
            }
#line 953 "handle_options.m"
            libs__handle_options__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 953 "handle_options.m"
            {
#line 953 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_348_348, &libs__handle_options__STATE_VARIABLE_Globals_352_352);
            }
#line 955 "handle_options.m"
            {
#line 955 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_352_352, &libs__handle_options__STATE_VARIABLE_Globals_356_356);
            }
#line 957 "handle_options.m"
            {
#line 957 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_356_356, &libs__handle_options__STATE_VARIABLE_Globals_360_360);
            }
#line 958 "handle_options.m"
            {
#line 958 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_360_360, &libs__handle_options__STATE_VARIABLE_Globals_364_364);
            }
#line 959 "handle_options.m"
            {
#line 959 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_364_364, &libs__handle_options__STATE_VARIABLE_Globals_368_368);
            }
#line 960 "handle_options.m"
            {
#line 960 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 252, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_368_368, &libs__handle_options__STATE_VARIABLE_Globals_372_372);
            }
#line 961 "handle_options.m"
            {
#line 961 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_372_372, &libs__handle_options__STATE_VARIABLE_Globals_376_376);
            }
#line 962 "handle_options.m"
            {
#line 962 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 253, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_376_376, &libs__handle_options__STATE_VARIABLE_Globals_380_380);
            }
#line 963 "handle_options.m"
            {
#line 963 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]), libs__handle_options__STATE_VARIABLE_Globals_380_380, &libs__handle_options__STATE_VARIABLE_Globals_384_384);
            }
#line 964 "handle_options.m"
            {
#line 964 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 241, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_384_384, &libs__handle_options__STATE_VARIABLE_Globals_388_388);
            }
#line 965 "handle_options.m"
            {
#line 965 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_388_388, &libs__handle_options__STATE_VARIABLE_Globals_392_392);
            }
#line 966 "handle_options.m"
            {
#line 966 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_392_392, &libs__handle_options__STATE_VARIABLE_Globals_396_396);
            }
#line 968 "handle_options.m"
            {
#line 968 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 647, libs__handle_options__V_351_351, libs__handle_options__STATE_VARIABLE_Globals_396_396, &libs__handle_options__STATE_VARIABLE_Globals_400_400);
            }
#line 969 "handle_options.m"
            {
#line 969 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 662, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_400_400, &libs__handle_options__STATE_VARIABLE_Globals_404_404);
            }
#line 10591 "libs.handle_options.c"
            if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 10593 "libs.handle_options.c"
              {
#line 972 "handle_options.m"
                {
#line 972 "handle_options.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 572, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[194]), libs__handle_options__STATE_VARIABLE_Globals_404_404, &libs__handle_options__STATE_VARIABLE_Globals_470_470);
                }
#line 10600 "libs.handle_options.c"
              }
#line 10602 "libs.handle_options.c"
            else
#line 1030 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_470_470 = libs__handle_options__STATE_VARIABLE_Globals_404_404;
#line 10606 "libs.handle_options.c"
          }
#line 1038 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1041 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1039 "handle_options.m"
      {
#line 1039 "handle_options.m"
        {
#line 1039 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 255, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_470_470, &libs__handle_options__STATE_VARIABLE_Globals_475_475);
        }
#line 1039 "handle_options.m"
      }
#line 1041 "handle_options.m"
    else
#line 1039 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_475_475 = libs__handle_options__STATE_VARIABLE_Globals_470_470;
#line 1046 "handle_options.m"
    {
#line 1046 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 214, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_475_475, &libs__handle_options__STATE_VARIABLE_Globals_480_480);
    }
#line 1053 "handle_options.m"
    libs__handle_options__V_484_484 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[195]);
#line 1053 "handle_options.m"
    {
#line 1053 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 555, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_480_480, &libs__handle_options__STATE_VARIABLE_Globals_485_485);
    }
#line 1055 "handle_options.m"
    {
#line 1055 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 557, libs__handle_options__V_484_484, libs__handle_options__STATE_VARIABLE_Globals_485_485, &libs__handle_options__STATE_VARIABLE_Globals_490_490);
    }
#line 1059 "handle_options.m"
    libs__handle_options__V_494_494 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1059 "handle_options.m"
    {
#line 1059 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 245, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_490_490, &libs__handle_options__STATE_VARIABLE_Globals_495_495);
    }
#line 1061 "handle_options.m"
    {
#line 1061 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 246, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_495_495, &libs__handle_options__STATE_VARIABLE_Globals_500_500);
    }
#line 1063 "handle_options.m"
    {
#line 1063 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 247, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_500_500, &libs__handle_options__STATE_VARIABLE_Globals_505_505);
    }
#line 1066 "handle_options.m"
    {
#line 1066 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 252, (MR_Integer) 319, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_505_505, &libs__handle_options__STATE_VARIABLE_Globals_510_510);
    }
#line 1070 "handle_options.m"
    {
#line 1070 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 459, (MR_Integer) 453, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_510_510, &libs__handle_options__STATE_VARIABLE_Globals_515_515);
    }
#line 1074 "handle_options.m"
    {
#line 1074 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 621, (MR_Integer) 619, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_515_515, &libs__handle_options__STATE_VARIABLE_Globals_520_520);
    }
#line 1078 "handle_options.m"
    {
#line 1078 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_520_520, (MR_Integer) 637, &libs__handle_options__LibLinkages0_64);
    }
#line 1084 "handle_options.m"
    if ((libs__handle_options__LibLinkages0_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "handle_options.m"
      {
#line 1082 "handle_options.m"
        {
#line 1082 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 637, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[8]), libs__handle_options__STATE_VARIABLE_Globals_520_520, &libs__handle_options__STATE_VARIABLE_Globals_525_525);
        }
#line 1081 "handle_options.m"
      }
#line 1084 "handle_options.m"
    else
#line 1085 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_525_525 = libs__handle_options__STATE_VARIABLE_Globals_520_520;
#line 1091 "handle_options.m"
    {
#line 1091 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 619, (MR_Integer) 98, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_525_525, &libs__handle_options__STATE_VARIABLE_Globals_534_534);
    }
#line 1092 "handle_options.m"
    {
#line 1092 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 619, (MR_Integer) 97, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_534_534, &libs__handle_options__STATE_VARIABLE_Globals_539_539);
    }
#line 1097 "handle_options.m"
    {
#line 1097 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 619, (MR_Integer) 642, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_539_539, &libs__handle_options__STATE_VARIABLE_Globals_544_544);
    }
#line 1098 "handle_options.m"
    {
#line 1098 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 642, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_544_544, &libs__handle_options__STATE_VARIABLE_Globals_549_549);
    }
#line 1099 "handle_options.m"
    {
#line 1099 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 619, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_549_549, &libs__handle_options__STATE_VARIABLE_Globals_554_554);
    }
#line 1103 "handle_options.m"
    {
#line 1103 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 624, (MR_Integer) 115, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_554_554, &libs__handle_options__STATE_VARIABLE_Globals_559_559);
    }
#line 1107 "handle_options.m"
    {
#line 1107 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 619, (MR_Integer) 647, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_559_559, &libs__handle_options__STATE_VARIABLE_Globals_564_564);
    }
#line 1112 "handle_options.m"
    {
#line 1112 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_564_564, (MR_Integer) 329, &libs__handle_options__TransOpt_67);
    }
#line 1125 "handle_options.m"
    if ((libs__handle_options__TransOpt_67 == (MR_Integer) 0))
#line 1126 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_571_571 = libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 1125 "handle_options.m"
    else
#line 1115 "handle_options.m"
      {
#line 1115 "handle_options.m"
        MR_Word libs__handle_options__UsingMMC_Make_68;
#line 1115 "handle_options.m"
        MR_Word libs__handle_options__InvokedByMMC_Make_69;
#line 1119 "handle_options.m"
        MR_Word libs__handle_options__V_569_569;

#line 1116 "handle_options.m"
        {
#line 1116 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_564_564, (MR_Integer) 619, &libs__handle_options__UsingMMC_Make_68);
        }
#line 1117 "handle_options.m"
        {
#line 1117 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_564_564, (MR_Integer) 624, &libs__handle_options__InvokedByMMC_Make_69);
        }
#line 1119 "handle_options.m"
        {
#line 1119 "handle_options.m"
          libs__handle_options__V_569_569 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMC_Make_68, libs__handle_options__InvokedByMMC_Make_69);
        }
#line 1119 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_569_569 == (MR_Integer) 1);
#line 1122 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1120 "handle_options.m"
          {
#line 1120 "handle_options.m"
            {
#line 1120 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "\140--transitive-intermodule-optimization\' is incompatible with \140mmc --make\'.", libs__handle_options__STATE_VARIABLE_Errors_268_268, &libs__handle_options__STATE_VARIABLE_Errors_571_571);
            }
#line 1120 "handle_options.m"
          }
#line 1122 "handle_options.m"
        else
#line 1120 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_571_571 = libs__handle_options__STATE_VARIABLE_Errors_268_268;
#line 1115 "handle_options.m"
      }
#line 1131 "handle_options.m"
    {
#line 1131 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_564_564, (MR_Integer) 325, &libs__handle_options__InterModOpt_70);
    }
#line 1133 "handle_options.m"
    {
#line 1133 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_564_564, (MR_Integer) 330, &libs__handle_options__InterModAnalysis_71);
    }
#line 1136 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_70 == (MR_Integer) 1);
#line 1136 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1137 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_71 == (MR_Integer) 1);
#line 1141 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1139 "handle_options.m"
      {
#line 1139 "handle_options.m"
        {
#line 1139 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--intermodule-optimization\' is incompatible with \140--intermodule-analysis\'.", libs__handle_options__STATE_VARIABLE_Errors_571_571, &libs__handle_options__STATE_VARIABLE_Errors_577_577);
        }
#line 1139 "handle_options.m"
      }
#line 1141 "handle_options.m"
    else
#line 1139 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_577_577 = libs__handle_options__STATE_VARIABLE_Errors_571_571;
#line 1145 "handle_options.m"
    {
#line 1145 "handle_options.m"
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
#line 1147 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1145 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_582_582 = libs__handle_options__STATE_VARIABLE_Globals_564_564;
#line 1147 "handle_options.m"
    else
#line 1148 "handle_options.m"
      {
#line 1148 "handle_options.m"
        {
#line 1148 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 628, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_564_564, &libs__handle_options__STATE_VARIABLE_Globals_582_582);
        }
#line 1148 "handle_options.m"
      }
#line 1151 "handle_options.m"
    {
#line 1151 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_582_582, (MR_Integer) 93, &libs__handle_options__MaybeStandaloneInt_72);
    }
#line 1153 "handle_options.m"
    {
#line 1153 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_582_582, (MR_Integer) 565, &libs__handle_options__ExtraInitFunctions_73);
    }
#line 1156 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_72)) == (MR_mktag((MR_Integer) 1)));
#line 1156 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1156 "handle_options.m"
      {
#line 1156 "handle_options.m"
        libs__handle_options__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_72, (MR_Integer) 0)));
#line 1157 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_73 == (MR_Integer) 1);
#line 1156 "handle_options.m"
      }
#line 1162 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1159 "handle_options.m"
      {
#line 1159 "handle_options.m"
        {
#line 1159 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--generate-standalone-interface\' is incompatible with \140--extra-initialization-functions\'.", libs__handle_options__STATE_VARIABLE_Errors_577_577, &libs__handle_options__STATE_VARIABLE_Errors_587_587);
        }
#line 1159 "handle_options.m"
      }
#line 1162 "handle_options.m"
    else
#line 1159 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_587_587 = libs__handle_options__STATE_VARIABLE_Errors_577_577;
#line 1166 "handle_options.m"
    {
#line 1166 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 407, (MR_Integer) 405, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_582_582, &libs__handle_options__STATE_VARIABLE_Globals_593_593);
    }
#line 1168 "handle_options.m"
    {
#line 1168 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 415, (MR_Integer) 414, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_593_593, &libs__handle_options__STATE_VARIABLE_Globals_598_598);
    }
#line 1170 "handle_options.m"
    {
#line 1170 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 414, (MR_Integer) 413, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_598_598, &libs__handle_options__STATE_VARIABLE_Globals_603_603);
    }
#line 1171 "handle_options.m"
    {
#line 1171 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 414, (MR_Integer) 13, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_603_603, &libs__handle_options__STATE_VARIABLE_Globals_608_608);
    }
#line 1173 "handle_options.m"
    {
#line 1173 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 422, (MR_Integer) 421, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_608_608, &libs__handle_options__STATE_VARIABLE_Globals_613_613);
    }
#line 1175 "handle_options.m"
    {
#line 1175 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 421, (MR_Integer) 420, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_613_613, &libs__handle_options__STATE_VARIABLE_Globals_618_618);
    }
#line 1176 "handle_options.m"
    {
#line 1176 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 421, (MR_Integer) 13, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_618_618, &libs__handle_options__STATE_VARIABLE_Globals_623_623);
    }
#line 1178 "handle_options.m"
    {
#line 1178 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 329, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_623_623, &libs__handle_options__STATE_VARIABLE_Globals_628_628);
    }
#line 1180 "handle_options.m"
    {
#line 1180 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 325, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_628_628, &libs__handle_options__STATE_VARIABLE_Globals_633_633);
    }
#line 1182 "handle_options.m"
    {
#line 1182 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 328, (MR_Integer) 327, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_633_633, &libs__handle_options__STATE_VARIABLE_Globals_638_638);
    }
#line 1187 "handle_options.m"
    {
#line 1187 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 327, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_638_638, &libs__handle_options__STATE_VARIABLE_Globals_643_643);
    }
#line 1189 "handle_options.m"
    {
#line 1189 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 329, (MR_Integer) 328, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_643_643, &libs__handle_options__STATE_VARIABLE_Globals_648_648);
    }
#line 1197 "handle_options.m"
    {
#line 1197 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 327, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_648_648, &libs__handle_options__STATE_VARIABLE_Globals_652_652);
    }
#line 1199 "handle_options.m"
    {
#line 1199 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 113, (MR_Integer) 114, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_652_652, &libs__handle_options__STATE_VARIABLE_Globals_657_657);
    }
#line 1201 "handle_options.m"
    {
#line 1201 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 48, (MR_Integer) 47, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_657_657, &libs__handle_options__STATE_VARIABLE_Globals_662_662);
    }
#line 1208 "handle_options.m"
    {
#line 1208 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_662_662, &libs__handle_options__STATE_VARIABLE_Globals_667_667);
    }
#line 1210 "handle_options.m"
    {
#line 1210 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_667_667, &libs__handle_options__STATE_VARIABLE_Globals_672_672);
    }
#line 1212 "handle_options.m"
    {
#line 1212 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_672_672, &libs__handle_options__STATE_VARIABLE_Globals_677_677);
    }
#line 1214 "handle_options.m"
    {
#line 1214 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_677_677, &libs__handle_options__STATE_VARIABLE_Globals_682_682);
    }
#line 1216 "handle_options.m"
    {
#line 1216 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_682_682, &libs__handle_options__STATE_VARIABLE_Globals_687_687);
    }
#line 1218 "handle_options.m"
    {
#line 1218 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_687_687, &libs__handle_options__STATE_VARIABLE_Globals_692_692);
    }
#line 1220 "handle_options.m"
    {
#line 1220 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_692_692, &libs__handle_options__STATE_VARIABLE_Globals_697_697);
    }
#line 1222 "handle_options.m"
    {
#line 1222 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_697_697, &libs__handle_options__STATE_VARIABLE_Globals_702_702);
    }
#line 1224 "handle_options.m"
    {
#line 1224 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_702_702, &libs__handle_options__STATE_VARIABLE_Globals_707_707);
    }
#line 1226 "handle_options.m"
    {
#line 1226 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_707_707, &libs__handle_options__STATE_VARIABLE_Globals_712_712);
    }
#line 1228 "handle_options.m"
    {
#line 1228 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_712_712, &libs__handle_options__STATE_VARIABLE_Globals_717_717);
    }
#line 1230 "handle_options.m"
    {
#line 1230 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_717_717, &libs__handle_options__STATE_VARIABLE_Globals_722_722);
    }
#line 1232 "handle_options.m"
    {
#line 1232 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 96, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_722_722, &libs__handle_options__STATE_VARIABLE_Globals_727_727);
    }
#line 1234 "handle_options.m"
    {
#line 1234 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 113, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_727_727, &libs__handle_options__STATE_VARIABLE_Globals_732_732);
    }
#line 1240 "handle_options.m"
    {
#line 1240 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 84, (MR_Integer) 135, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_732_732, &libs__handle_options__STATE_VARIABLE_Globals_737_737);
    }
#line 1242 "handle_options.m"
    {
#line 1242 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 135, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_737_737, &libs__handle_options__STATE_VARIABLE_Globals_742_742);
    }
#line 1244 "handle_options.m"
    {
#line 1244 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 135, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_742_742, &libs__handle_options__STATE_VARIABLE_Globals_747_747);
    }
#line 1246 "handle_options.m"
    {
#line 1246 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 135, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_747_747, &libs__handle_options__STATE_VARIABLE_Globals_752_752);
    }
#line 1248 "handle_options.m"
    {
#line 1248 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 135, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_752_752, &libs__handle_options__STATE_VARIABLE_Globals_757_757);
    }
#line 1253 "handle_options.m"
    {
#line 1253 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 114, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_757_757, &libs__handle_options__STATE_VARIABLE_Globals_762_762);
    }
#line 1260 "handle_options.m"
    {
#line 1260 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 325, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_762_762, &libs__handle_options__STATE_VARIABLE_Globals_767_767);
    }
#line 1268 "handle_options.m"
    {
#line 1268 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_767_767, (MR_Integer) 113, &libs__handle_options__Smart_75);
    }
#line 1269 "handle_options.m"
    {
#line 1269 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 325, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_767_767, &libs__handle_options__STATE_VARIABLE_Globals_773_773);
    }
#line 1271 "handle_options.m"
    {
#line 1271 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 327, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_773_773, &libs__handle_options__STATE_VARIABLE_Globals_778_778);
    }
#line 1280 "handle_options.m"
    {
#line 1280 "handle_options.m"
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_75, (MR_Integer) 97, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_778_778, &libs__handle_options__STATE_VARIABLE_Globals_783_783);
    }
#line 1283 "handle_options.m"
    {
#line 1283 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 643, (MR_Integer) 642, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_783_783, &libs__handle_options__STATE_VARIABLE_Globals_788_788);
    }
#line 1285 "handle_options.m"
    {
#line 1285 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 45, (MR_Integer) 44, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_788_788, &libs__handle_options__STATE_VARIABLE_Globals_793_793);
    }
#line 1286 "handle_options.m"
    {
#line 1286 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 44, (MR_Integer) 50, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_793_793, &libs__handle_options__STATE_VARIABLE_Globals_798_798);
    }
#line 1287 "handle_options.m"
    {
#line 1287 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_798_798, (MR_Integer) 45, &libs__handle_options__VeryVerbose_76);
    }
#line 1288 "handle_options.m"
    {
#line 1288 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_798_798, (MR_Integer) 54, &libs__handle_options__Statistics_77);
    }
#line 1290 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_76 == (MR_Integer) 1);
#line 1290 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1291 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1294 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1293 "handle_options.m"
      {
#line 1293 "handle_options.m"
        {
#line 1293 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 55, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_798_798, &libs__handle_options__STATE_VARIABLE_Globals_804_804);
        }
#line 1293 "handle_options.m"
      }
#line 1294 "handle_options.m"
    else
#line 1293 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_804_804 = libs__handle_options__STATE_VARIABLE_Globals_798_798;
#line 1298 "handle_options.m"
    {
#line 1298 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 60, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_804_804, &libs__handle_options__STATE_VARIABLE_Globals_809_809);
    }
#line 1299 "handle_options.m"
    {
#line 1299 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_809_809, &libs__handle_options__STATE_VARIABLE_Globals_814_814);
    }
#line 1300 "handle_options.m"
    {
#line 1300 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 59, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_814_814, &libs__handle_options__STATE_VARIABLE_Globals_819_819);
    }
#line 1303 "handle_options.m"
    {
#line 1303 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_819_819, (MR_Integer) 72, &libs__handle_options__DebugLiveness_78);
    }
#line 1305 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_78 >= (MR_Integer) 0);
#line 1305 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1305 "handle_options.m"
      {
#line 1306 "handle_options.m"
        libs__handle_options__V_823_823 = (MR_String) "all";
#line 1306 "handle_options.m"
        {
#line 1306 "handle_options.m"
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_823_823, &libs__handle_options__AllDumpOptions_79);
        }
#line 1305 "handle_options.m"
      }
#line 1317 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1313 "handle_options.m"
      {
#line 1313 "handle_options.m"
        MR_String libs__handle_options__DumpOptions0_80;
#line 1313 "handle_options.m"
        MR_String libs__handle_options__DumpOptions1_81;
#line 1313 "handle_options.m"
        MR_Word libs__handle_options__V_826_826;

#line 1312 "handle_options.m"
        {
#line 1312 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_819_819, (MR_Integer) 146, &libs__handle_options__DumpOptions0_80);
        }
#line 1314 "handle_options.m"
        {
#line 1314 "handle_options.m"
          mercury__string__append_3_p_2(libs__handle_options__DumpOptions0_80, libs__handle_options__AllDumpOptions_79, &libs__handle_options__DumpOptions1_81);
        }
#line 1315 "handle_options.m"
        {
#line 1315 "handle_options.m"
          libs__handle_options__V_826_826 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_826_826, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1315 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_826_826, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_81));
#line 1315 "handle_options.m"
        }
#line 1315 "handle_options.m"
        {
#line 1315 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 146, libs__handle_options__V_826_826, libs__handle_options__STATE_VARIABLE_Globals_819_819, &libs__handle_options__STATE_VARIABLE_Globals_827_827);
        }
#line 1313 "handle_options.m"
      }
#line 1317 "handle_options.m"
    else
#line 1315 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_827_827 = libs__handle_options__STATE_VARIABLE_Globals_819_819;
#line 1321 "handle_options.m"
    {
#line 1321 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 61, (MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_827_827, &libs__handle_options__STATE_VARIABLE_Globals_831_831);
    }
#line 1322 "handle_options.m"
    {
#line 1322 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_831_831, (MR_Integer) 62, &libs__handle_options__DebugModesPredId_82);
    }
#line 1324 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_82 > (MR_Integer) 0);
#line 1326 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1325 "handle_options.m"
      {
#line 1325 "handle_options.m"
        {
#line 1325 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 58, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_831_831, &libs__handle_options__STATE_VARIABLE_Globals_837_837);
        }
#line 1325 "handle_options.m"
      }
#line 1326 "handle_options.m"
    else
#line 1325 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_837_837 = libs__handle_options__STATE_VARIABLE_Globals_831_831;
#line 1330 "handle_options.m"
    {
#line 1330 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_837_837, (MR_Integer) 357, &libs__handle_options__DebugUnneededCodePredNames_83);
    }
#line 1334 "handle_options.m"
    if ((libs__handle_options__DebugUnneededCodePredNames_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_842_842 = libs__handle_options__STATE_VARIABLE_Globals_837_837;
#line 1334 "handle_options.m"
    else
#line 1335 "handle_options.m"
      {
#line 1336 "handle_options.m"
        {
#line 1336 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 356, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_837_837, &libs__handle_options__STATE_VARIABLE_Globals_842_842);
        }
#line 1335 "handle_options.m"
      }
#line 1339 "handle_options.m"
    {
#line 1339 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_842_842, (MR_Integer) 68, &libs__handle_options__DebugOptPredIdStrs_86);
    }
#line 1341 "handle_options.m"
    {
#line 1341 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_842_842, (MR_Integer) 69, &libs__handle_options__DebugOptPredNames_87);
    }
#line 1344 "handle_options.m"
    {
#line 1344 "handle_options.m"
      MR_String libs__handle_options__V_88_88;
#line 1344 "handle_options.m"
      MR_Word libs__handle_options__V_89_89;

#line 1344 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_86)) == (MR_mktag((MR_Integer) 1)));
#line 1344 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1344 "handle_options.m"
        {
#line 1344 "handle_options.m"
          libs__handle_options__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 0)));
#line 1344 "handle_options.m"
          libs__handle_options__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_86, (MR_Integer) 1)));
#line 1344 "handle_options.m"
        }
#line 1344 "handle_options.m"
    }
#line 1345 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1345 "handle_options.m"
      {
#line 1345 "handle_options.m"
        MR_String libs__handle_options__V_90_90;
#line 1345 "handle_options.m"
        MR_Word libs__handle_options__V_91_91;

#line 1345 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_87)) == (MR_mktag((MR_Integer) 1)));
#line 1345 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1345 "handle_options.m"
          {
#line 1345 "handle_options.m"
            libs__handle_options__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 0)));
#line 1345 "handle_options.m"
            libs__handle_options__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_87, (MR_Integer) 1)));
#line 1345 "handle_options.m"
          }
#line 1345 "handle_options.m"
      }
#line 1349 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1348 "handle_options.m"
      {
#line 1348 "handle_options.m"
        {
#line 1348 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 66, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_842_842, &libs__handle_options__STATE_VARIABLE_Globals_848_848);
        }
#line 1348 "handle_options.m"
      }
#line 1349 "handle_options.m"
    else
#line 1348 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_848_848 = libs__handle_options__STATE_VARIABLE_Globals_842_842;
#line 1353 "handle_options.m"
    {
#line 1353 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_848_848, (MR_Integer) 78, &libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1355 "handle_options.m"
    {
#line 1355 "handle_options.m"
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_92);
    }
#line 1357 "handle_options.m"
    {
#line 1357 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_848_848, (MR_Integer) 143, &libs__handle_options__DumpHLDSPredIds_93);
    }
#line 1368 "handle_options.m"
    if ((libs__handle_options__DumpHLDSPredIds_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1369 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_860_860 = libs__handle_options__STATE_VARIABLE_Globals_848_848;
#line 1368 "handle_options.m"
    else
#line 1360 "handle_options.m"
      {
#line 1360 "handle_options.m"
        MR_String libs__handle_options__DumpOptions2_96;
#line 1360 "handle_options.m"
        MR_String libs__handle_options__DumpOptions3_97;
#line 1360 "handle_options.m"
        MR_String libs__handle_options__DumpOptions_98;
#line 1360 "handle_options.m"
        MR_Word libs__handle_options__V_859_859;

#line 1361 "handle_options.m"
        {
#line 1361 "handle_options.m"
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_848_848, (MR_Integer) 146, &libs__handle_options__DumpOptions2_96);
        }
#line 1364 "handle_options.m"
        {
#line 1364 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_96, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_97);
        }
#line 1365 "handle_options.m"
        {
#line 1365 "handle_options.m"
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_97, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_98);
        }
#line 1366 "handle_options.m"
        {
#line 1366 "handle_options.m"
          libs__handle_options__V_859_859 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_859_859, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1366 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_859_859, 1) = ((MR_Box) (libs__handle_options__DumpOptions_98));
#line 1366 "handle_options.m"
        }
#line 1366 "handle_options.m"
        {
#line 1366 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 146, libs__handle_options__V_859_859, libs__handle_options__STATE_VARIABLE_Globals_848_848, &libs__handle_options__STATE_VARIABLE_Globals_860_860);
        }
#line 1360 "handle_options.m"
      }
#line 1372 "handle_options.m"
    {
#line 1372 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 154, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_860_860, &libs__handle_options__STATE_VARIABLE_Globals_864_864);
    }
#line 1374 "handle_options.m"
    {
#line 1374 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 154, (MR_Integer) 152, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_864_864, &libs__handle_options__STATE_VARIABLE_Globals_869_869);
    }
#line 1376 "handle_options.m"
    {
#line 1376 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 153, (MR_Integer) 152, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_869_869, &libs__handle_options__STATE_VARIABLE_Globals_874_874);
    }
#line 1379 "handle_options.m"
    {
#line 1379 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 137, (MR_Integer) 136, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_874_874, &libs__handle_options__STATE_VARIABLE_Globals_879_879);
    }
#line 1384 "handle_options.m"
    {
#line 1384 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_879_879, (MR_Integer) 214, &libs__handle_options__UseTrail_99);
    }
#line 1385 "handle_options.m"
    {
#line 1385 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_879_879, (MR_Integer) 250, &libs__handle_options__HighLevelCode_100);
    }
#line 1386 "handle_options.m"
    {
#line 1386 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_879_879, (MR_Integer) 216, &libs__handle_options__UseMinimalModelStackCopy_101);
    }
#line 1388 "handle_options.m"
    {
#line 1388 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_879_879, (MR_Integer) 217, &libs__handle_options__UseMinimalModelOwnStacks_102);
    }
#line 1390 "handle_options.m"
    {
#line 1390 "handle_options.m"
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_101, libs__handle_options__UseMinimalModelOwnStacks_102, &libs__handle_options__UseMinimalModel_103);
    }
#line 1393 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1393 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1394 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_102 == (MR_Integer) 1);
#line 1398 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1396 "handle_options.m"
      {
#line 1396 "handle_options.m"
        {
#line 1396 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "can\'t use both forms of minimal model tabling at once", libs__handle_options__STATE_VARIABLE_Errors_587_587, &libs__handle_options__STATE_VARIABLE_Errors_886_886);
        }
#line 1396 "handle_options.m"
      }
#line 1398 "handle_options.m"
    else
#line 1404 "handle_options.m"
      {
#line 1399 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1399 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1400 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1404 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1402 "handle_options.m"
          {
#line 1402 "handle_options.m"
            {
#line 1402 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_587_587, &libs__handle_options__STATE_VARIABLE_Errors_886_886);
            }
#line 1402 "handle_options.m"
          }
#line 1404 "handle_options.m"
        else
#line 1410 "handle_options.m"
          {
#line 1405 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_103 == (MR_Integer) 1);
#line 1405 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1406 "handle_options.m"
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_99 == (MR_Integer) 1);
#line 1410 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1408 "handle_options.m"
              {
#line 1408 "handle_options.m"
                {
#line 1408 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "minimal model tabling is incompatible with trailing", libs__handle_options__STATE_VARIABLE_Errors_587_587, &libs__handle_options__STATE_VARIABLE_Errors_886_886);
                }
#line 1408 "handle_options.m"
              }
#line 1410 "handle_options.m"
            else
#line 1408 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_886_886 = libs__handle_options__STATE_VARIABLE_Errors_587_587;
#line 1410 "handle_options.m"
          }
#line 1404 "handle_options.m"
      }
#line 1420 "handle_options.m"
    libs__handle_options__V_899_899 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[9]);
#line 1420 "handle_options.m"
    {
#line 1420 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 242, libs__handle_options__V_899_899, libs__handle_options__STATE_VARIABLE_Globals_879_879, &libs__handle_options__STATE_VARIABLE_Globals_900_900);
    }
#line 1438 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1422 "handle_options.m"
      {
#line 1422 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits0_104;
#line 1422 "handle_options.m"
        MR_Integer libs__handle_options__BitsPerWord_105;
#line 1422 "handle_options.m"
        MR_Integer libs__handle_options__ArgPackBits_106;
#line 1422 "handle_options.m"
        MR_Word libs__handle_options__V_922_922;

#line 1423 "handle_options.m"
        {
#line 1423 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_900_900, (MR_Integer) 242, &libs__handle_options__ArgPackBits0_104);
        }
#line 1424 "handle_options.m"
        {
#line 1424 "handle_options.m"
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_900_900, (MR_Integer) 236, &libs__handle_options__BitsPerWord_105);
        }
#line 1426 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 < (MR_Integer) 0);
#line 1428 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1427 "handle_options.m"
          libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1428 "handle_options.m"
        else
#line 1434 "handle_options.m"
          {
#line 1428 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_104 > libs__handle_options__BitsPerWord_105);
#line 1434 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 1429 "handle_options.m"
              {
#line 1429 "handle_options.m"
                MR_String libs__handle_options__ProgNameB_107;
#line 1429 "handle_options.m"
                MR_String libs__handle_options__V_1674_1674;

#line 1429 "handle_options.m"
                {
#line 1429 "handle_options.m"
                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgNameB_107);
                }
#line 11542 "libs.handle_options.c"
                {
#line 11544 "libs.handle_options.c"
                  libs__handle_options__V_1674_1674 = mercury__string__f_43_43_2_f_0(libs__handle_options__ProgNameB_107, (MR_String) ": warning: --arg-pack-bits invalid\n");
                }
#line 11547 "libs.handle_options.c"
                {
#line 11549 "libs.handle_options.c"
                  mercury__io__write_string_3_p_0(libs__handle_options__V_1674_1674);
                }
#line 1432 "handle_options.m"
                {
#line 1432 "handle_options.m"
                  libs__compiler_util__record_warning_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_900_900);
                }
#line 1433 "handle_options.m"
                libs__handle_options__ArgPackBits_106 = libs__handle_options__BitsPerWord_105;
#line 1429 "handle_options.m"
              }
#line 1434 "handle_options.m"
            else
#line 1435 "handle_options.m"
              libs__handle_options__ArgPackBits_106 = libs__handle_options__ArgPackBits0_104;
#line 1434 "handle_options.m"
          }
#line 1437 "handle_options.m"
        {
#line 1437 "handle_options.m"
          libs__handle_options__V_922_922 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "handle_options.m"
          MR_hl_field(MR_mktag(2), libs__handle_options__V_922_922, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_106));
#line 1437 "handle_options.m"
        }
#line 1437 "handle_options.m"
        {
#line 1437 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_922_922, libs__handle_options__STATE_VARIABLE_Globals_900_900, &libs__handle_options__STATE_VARIABLE_Globals_923_923);
        }
#line 1422 "handle_options.m"
      }
#line 1438 "handle_options.m"
    else
#line 1443 "handle_options.m"
      {
#line 1443 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_904_904;

#line 1444 "handle_options.m"
        {
#line 1444 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 242, libs__handle_options__V_899_899, libs__handle_options__STATE_VARIABLE_Globals_900_900, &libs__handle_options__STATE_VARIABLE_Globals_904_904);
        }
#line 1445 "handle_options.m"
        {
#line 1445 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_904_904, &libs__handle_options__STATE_VARIABLE_Globals_923_923);
        }
#line 1443 "handle_options.m"
      }
#line 1449 "handle_options.m"
    {
#line 1449 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 239, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_923_923, &libs__handle_options__STATE_VARIABLE_Globals_927_927);
    }
#line 1454 "handle_options.m"
    {
#line 1454 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 249, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_927_927, &libs__handle_options__STATE_VARIABLE_Globals_932_932);
    }
#line 1455 "handle_options.m"
    {
#line 1455 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 249, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_932_932, &libs__handle_options__STATE_VARIABLE_Globals_937_937);
    }
#line 1460 "handle_options.m"
    {
#line 1460 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 272, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_937_937, &libs__handle_options__STATE_VARIABLE_Globals_942_942);
    }
#line 1471 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1467 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_946_946 = libs__handle_options__STATE_VARIABLE_Globals_942_942;
#line 1471 "handle_options.m"
    else
#line 1471 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1468 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_946_946 = libs__handle_options__STATE_VARIABLE_Globals_942_942;
#line 1471 "handle_options.m"
      else
#line 1471 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 1469 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_946_946 = libs__handle_options__STATE_VARIABLE_Globals_942_942;
#line 1471 "handle_options.m"
        else
#line 1474 "handle_options.m"
          {
#line 1475 "handle_options.m"
            {
#line 1475 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_942_942, &libs__handle_options__STATE_VARIABLE_Globals_946_946);
            }
#line 1474 "handle_options.m"
          }
#line 1480 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1479 "handle_options.m"
      libs__handle_options__succeeded = MR_TRUE;
#line 1480 "handle_options.m"
    else
#line 1480 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 3))
#line 1480 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1480 "handle_options.m"
      else
#line 1480 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1486 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1485 "handle_options.m"
      {
#line 1485 "handle_options.m"
        {
#line 1485 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 435, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_946_946, &libs__handle_options__STATE_VARIABLE_Globals_950_950);
        }
#line 1485 "handle_options.m"
      }
#line 1486 "handle_options.m"
    else
#line 1485 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_950_950 = libs__handle_options__STATE_VARIABLE_Globals_946_946;
#line 1490 "handle_options.m"
    {
#line 1490 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 483, (MR_Integer) 559, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_950_950, &libs__handle_options__STATE_VARIABLE_Globals_955_955);
    }
#line 1493 "handle_options.m"
    {
#line 1493 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 195, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_955_955, &libs__handle_options__STATE_VARIABLE_Globals_960_960);
    }
#line 1498 "handle_options.m"
    {
#line 1498 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 207, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_960_960, &libs__handle_options__STATE_VARIABLE_Globals_965_965);
    }
#line 1508 "handle_options.m"
    {
#line 1508 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 204, (MR_Integer) 126, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_965_965, &libs__handle_options__STATE_VARIABLE_Globals_970_970);
    }
#line 1509 "handle_options.m"
    {
#line 1509 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_970_970, (MR_Integer) 126, &libs__handle_options__ProfOptimized_108);
    }
#line 1513 "handle_options.m"
    if ((libs__handle_options__ProfOptimized_108 == (MR_Integer) 0))
#line 1511 "handle_options.m"
      {
#line 1512 "handle_options.m"
        {
#line 1512 "handle_options.m"
          libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 333, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_970_970, &libs__handle_options__STATE_VARIABLE_Globals_976_976);
        }
#line 1511 "handle_options.m"
      }
#line 1513 "handle_options.m"
    else
#line 1514 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_976_976 = libs__handle_options__STATE_VARIABLE_Globals_970_970;
#line 1519 "handle_options.m"
    {
#line 1519 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_976_976, &libs__handle_options__STATE_VARIABLE_Globals_981_981);
    }
#line 1521 "handle_options.m"
    {
#line 1521 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_981_981, &libs__handle_options__STATE_VARIABLE_Globals_986_986);
    }
#line 1523 "handle_options.m"
    {
#line 1523 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 209, (MR_Integer) 193, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_986_986, &libs__handle_options__STATE_VARIABLE_Globals_991_991);
    }
#line 1526 "handle_options.m"
    {
#line 1526 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_991_991, (MR_Integer) 210, &libs__handle_options__ExpComp_109);
    }
#line 1528 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_109, (MR_String) "") == 0);
#line 1530 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1528 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_996_996 = libs__handle_options__STATE_VARIABLE_Globals_991_991;
#line 1530 "handle_options.m"
    else
#line 1531 "handle_options.m"
      {
#line 1531 "handle_options.m"
        {
#line 1531 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_991_991, &libs__handle_options__STATE_VARIABLE_Globals_996_996);
        }
#line 1531 "handle_options.m"
      }
#line 1535 "handle_options.m"
    {
#line 1535 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 183, (MR_Integer) 182, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_996_996, &libs__handle_options__STATE_VARIABLE_Globals_1001_1001);
    }
#line 1538 "handle_options.m"
    {
#line 1538 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 229, (MR_Integer) 231, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1001_1001, &libs__handle_options__STATE_VARIABLE_Globals_1006_1006);
    }
#line 1544 "handle_options.m"
    {
#line 1544 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 262, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1006_1006, &libs__handle_options__STATE_VARIABLE_Globals_1011_1011);
    }
#line 1545 "handle_options.m"
    {
#line 1545 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 262, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1011_1011, &libs__handle_options__STATE_VARIABLE_Globals_1016_1016);
    }
#line 1551 "handle_options.m"
    {
#line 1551 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 316, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1016_1016, &libs__handle_options__STATE_VARIABLE_Globals_1021_1021);
    }
#line 1556 "handle_options.m"
    {
#line 1556 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 182, (MR_Integer) 124, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1021_1021, &libs__handle_options__STATE_VARIABLE_Globals_1026_1026);
    }
#line 1559 "handle_options.m"
    {
#line 1559 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 124, (MR_Integer) 120, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1026_1026, &libs__handle_options__STATE_VARIABLE_Globals_1031_1031);
    }
#line 1563 "handle_options.m"
    {
#line 1563 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 123, (MR_Integer) 120, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1031_1031, &libs__handle_options__STATE_VARIABLE_Globals_1036_1036);
    }
#line 1573 "handle_options.m"
    {
#line 1573 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1036_1036, (MR_Integer) 118, &libs__handle_options__TraceOptimized_110);
    }
#line 1574 "handle_options.m"
    {
#line 1574 "handle_options.m"
      libs__handle_options__V_1039_1039 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
    }
#line 1574 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__V_1039_1039 == (MR_Integer) 0);
#line 1668 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1617 "handle_options.m"
      {
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1098_1098;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__V_1101_1101;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1102_1102;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1106_1106;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1110_1110;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1114_1114;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1118_1118;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1122_1122;
#line 1617 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1126_1126;
#line 1663 "handle_options.m"
        MR_Word libs__handle_options__V_1128_1128;

#line 1615 "handle_options.m"
        if ((libs__handle_options__TraceOptimized_110 == (MR_Integer) 0))
#line 1576 "handle_options.m"
          {
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__V_1041_1041 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1042_1042;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1046_1046;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1050_1050;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1054_1054;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1058_1058;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1062_1062;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1066_1066;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1074_1074;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1078_1078;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1082_1082;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1086_1086;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1090_1090;
#line 1576 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1094_1094;

#line 1581 "handle_options.m"
            {
#line 1581 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 333, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1036_1036, &libs__handle_options__STATE_VARIABLE_Globals_1042_1042);
            }
#line 1582 "handle_options.m"
            {
#line 1582 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 349, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1042_1042, &libs__handle_options__STATE_VARIABLE_Globals_1046_1046);
            }
#line 1583 "handle_options.m"
            {
#line 1583 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 351, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1046_1046, &libs__handle_options__STATE_VARIABLE_Globals_1050_1050);
            }
#line 1584 "handle_options.m"
            {
#line 1584 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1050_1050, &libs__handle_options__STATE_VARIABLE_Globals_1054_1054);
            }
#line 1585 "handle_options.m"
            {
#line 1585 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1054_1054, &libs__handle_options__STATE_VARIABLE_Globals_1058_1058);
            }
#line 1587 "handle_options.m"
            {
#line 1587 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 387, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1058_1058, &libs__handle_options__STATE_VARIABLE_Globals_1062_1062);
            }
#line 1588 "handle_options.m"
            {
#line 1588 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 347, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1062_1062, &libs__handle_options__STATE_VARIABLE_Globals_1066_1066);
            }
#line 1590 "handle_options.m"
            {
#line 1590 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1066_1066, &libs__handle_options__STATE_VARIABLE_Globals_1070_1070);
            }
#line 1592 "handle_options.m"
            {
#line 1592 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 364, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1070_1070, &libs__handle_options__STATE_VARIABLE_Globals_1074_1074);
            }
#line 1594 "handle_options.m"
            {
#line 1594 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1074_1074, &libs__handle_options__STATE_VARIABLE_Globals_1078_1078);
            }
#line 1596 "handle_options.m"
            {
#line 1596 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 369, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1078_1078, &libs__handle_options__STATE_VARIABLE_Globals_1082_1082);
            }
#line 1598 "handle_options.m"
            {
#line 1598 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 383, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1082_1082, &libs__handle_options__STATE_VARIABLE_Globals_1086_1086);
            }
#line 1599 "handle_options.m"
            {
#line 1599 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 396, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1086_1086, &libs__handle_options__STATE_VARIABLE_Globals_1090_1090);
            }
#line 1600 "handle_options.m"
            {
#line 1600 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 397, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1090_1090, &libs__handle_options__STATE_VARIABLE_Globals_1094_1094);
            }
#line 1608 "handle_options.m"
            if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1609 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1098_1098 = libs__handle_options__STATE_VARIABLE_Globals_1094_1094;
#line 1608 "handle_options.m"
            else
#line 1608 "handle_options.m"
              if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 1610 "handle_options.m"
                libs__handle_options__STATE_VARIABLE_Globals_1098_1098 = libs__handle_options__STATE_VARIABLE_Globals_1094_1094;
#line 1608 "handle_options.m"
              else
#line 1608 "handle_options.m"
                if ((libs__handle_options__Target_25 == (MR_Integer) 4))
#line 1612 "handle_options.m"
                  libs__handle_options__STATE_VARIABLE_Globals_1098_1098 = libs__handle_options__STATE_VARIABLE_Globals_1094_1094;
#line 1608 "handle_options.m"
                else
#line 1608 "handle_options.m"
                  if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1606 "handle_options.m"
                    {
#line 1607 "handle_options.m"
                      {
#line 1607 "handle_options.m"
                        libs__globals__set_option_4_p_0((MR_Integer) 460, libs__handle_options__V_1041_1041, libs__handle_options__STATE_VARIABLE_Globals_1094_1094, &libs__handle_options__STATE_VARIABLE_Globals_1098_1098);
                      }
#line 1606 "handle_options.m"
                    }
#line 1608 "handle_options.m"
                  else
#line 1611 "handle_options.m"
                    libs__handle_options__STATE_VARIABLE_Globals_1098_1098 = libs__handle_options__STATE_VARIABLE_Globals_1094_1094;
#line 1576 "handle_options.m"
          }
#line 1615 "handle_options.m"
        else
#line 1616 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1098_1098 = libs__handle_options__STATE_VARIABLE_Globals_1036_1036;
#line 1638 "handle_options.m"
        libs__handle_options__V_1101_1101 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
#line 1638 "handle_options.m"
        {
#line 1638 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 452, libs__handle_options__V_1101_1101, libs__handle_options__STATE_VARIABLE_Globals_1098_1098, &libs__handle_options__STATE_VARIABLE_Globals_1102_1102);
        }
#line 1643 "handle_options.m"
        {
#line 1643 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1102_1102, &libs__handle_options__STATE_VARIABLE_Globals_1106_1106);
        }
#line 1647 "handle_options.m"
        {
#line 1647 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 385, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1106_1106, &libs__handle_options__STATE_VARIABLE_Globals_1110_1110);
        }
#line 1651 "handle_options.m"
        {
#line 1651 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_1101_1101, libs__handle_options__STATE_VARIABLE_Globals_1110_1110, &libs__handle_options__STATE_VARIABLE_Globals_1114_1114);
        }
#line 1655 "handle_options.m"
        {
#line 1655 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1114_1114, &libs__handle_options__STATE_VARIABLE_Globals_1118_1118);
        }
#line 1656 "handle_options.m"
        {
#line 1656 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1118_1118, &libs__handle_options__STATE_VARIABLE_Globals_1122_1122);
        }
#line 1660 "handle_options.m"
        {
#line 1660 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_1101_1101, libs__handle_options__STATE_VARIABLE_Globals_1122_1122, &libs__handle_options__STATE_VARIABLE_Globals_1126_1126);
        }
#line 1663 "handle_options.m"
        {
#line 1663 "handle_options.m"
          libs__handle_options__V_1128_1128 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_30);
        }
#line 1663 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1128_1128 == (MR_Integer) 0);
#line 1665 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1664 "handle_options.m"
          {
#line 1664 "handle_options.m"
            {
#line 1664 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 127, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), libs__handle_options__STATE_VARIABLE_Globals_1126_1126, &libs__handle_options__STATE_VARIABLE_Globals_1131_1131);
            }
#line 1664 "handle_options.m"
          }
#line 1665 "handle_options.m"
        else
#line 1664 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1131_1131 = libs__handle_options__STATE_VARIABLE_Globals_1126_1126;
#line 1617 "handle_options.m"
      }
#line 1668 "handle_options.m"
    else
#line 1671 "handle_options.m"
      {
#line 1671 "handle_options.m"
        {
#line 1671 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 127, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1036_1036, &libs__handle_options__STATE_VARIABLE_Globals_1131_1131);
        }
#line 1671 "handle_options.m"
      }
#line 1674 "handle_options.m"
    {
#line 1674 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 191, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1131_1131, &libs__handle_options__STATE_VARIABLE_Globals_1140_1140);
    }
#line 1675 "handle_options.m"
    {
#line 1675 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1140_1140, (MR_Integer) 191, &libs__handle_options__ProfileDeep_111);
    }
#line 1700 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_111 == (MR_Integer) 0))
#line 1701 "handle_options.m"
      {
#line 1701 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_1144_1144 = libs__handle_options__STATE_VARIABLE_Errors_886_886;
#line 1701 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1157_1157 = libs__handle_options__STATE_VARIABLE_Globals_1140_1140;
#line 1701 "handle_options.m"
      }
#line 1700 "handle_options.m"
    else
#line 1677 "handle_options.m"
      {
#line 1677 "handle_options.m"
        MR_Word libs__handle_options__LotsOfHOSpec_112;
#line 1677 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1149_1149;

#line 1679 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1679 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1680 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 1683 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1680 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Errors_1144_1144 = libs__handle_options__STATE_VARIABLE_Errors_886_886;
#line 1683 "handle_options.m"
        else
#line 1684 "handle_options.m"
          {
#line 1684 "handle_options.m"
            {
#line 1684 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "deep profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_886_886, &libs__handle_options__STATE_VARIABLE_Errors_1144_1144);
            }
#line 1684 "handle_options.m"
          }
#line 1687 "handle_options.m"
        {
#line 1687 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1140_1140, &libs__handle_options__STATE_VARIABLE_Globals_1149_1149);
        }
#line 1689 "handle_options.m"
        {
#line 1689 "handle_options.m"
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1149_1149, (MR_Integer) 206, &libs__handle_options__LotsOfHOSpec_112);
        }
#line 1697 "handle_options.m"
        if ((libs__handle_options__LotsOfHOSpec_112 == (MR_Integer) 0))
#line 1698 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1157_1157 = libs__handle_options__STATE_VARIABLE_Globals_1149_1149;
#line 1697 "handle_options.m"
        else
#line 1692 "handle_options.m"
          {
#line 1692 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1154_1154;

#line 1694 "handle_options.m"
            {
#line 1694 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 351, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1149_1149, &libs__handle_options__STATE_VARIABLE_Globals_1154_1154);
            }
#line 1695 "handle_options.m"
            {
#line 1695 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 352, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[10]), libs__handle_options__STATE_VARIABLE_Globals_1154_1154, &libs__handle_options__STATE_VARIABLE_Globals_1157_1157);
            }
#line 1692 "handle_options.m"
          }
#line 1677 "handle_options.m"
      }
#line 1704 "handle_options.m"
    {
#line 1704 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1157_1157, (MR_Integer) 208, &libs__handle_options__RecordTermSizesAsWords_114);
    }
#line 1706 "handle_options.m"
    {
#line 1706 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1157_1157, (MR_Integer) 209, &libs__handle_options__RecordTermSizesAsCells_115);
    }
#line 1709 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_114 == (MR_Integer) 1);
#line 1709 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1710 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_115 == (MR_Integer) 1);
#line 1714 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1712 "handle_options.m"
      {
#line 1712 "handle_options.m"
        {
#line 1712 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "we can\'t record term size as both words and cells", libs__handle_options__STATE_VARIABLE_Errors_1144_1144, &libs__handle_options__STATE_VARIABLE_Errors_1162_1162);
        }
#line 1712 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1171_1171 = libs__handle_options__STATE_VARIABLE_Globals_1157_1157;
#line 1712 "handle_options.m"
      }
#line 1714 "handle_options.m"
    else
#line 1732 "handle_options.m"
      {
#line 1715 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_114 == (MR_Integer) 1);
#line 1716 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1716 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_115 == (MR_Integer) 1);
#line 1732 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1720 "handle_options.m"
          {
#line 1720 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1167_1167;

#line 1719 "handle_options.m"
            {
#line 1719 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1157_1157, &libs__handle_options__STATE_VARIABLE_Globals_1167_1167);
            }
#line 1723 "handle_options.m"
            {
#line 1723 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1167_1167, &libs__handle_options__STATE_VARIABLE_Globals_1171_1171);
            }
#line 1729 "handle_options.m"
            if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 1730 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_1162_1162 = libs__handle_options__STATE_VARIABLE_Errors_1144_1144;
#line 1729 "handle_options.m"
            else
#line 1726 "handle_options.m"
              {
#line 1727 "handle_options.m"
                {
#line 1727 "handle_options.m"
                  libs__handle_options__add_error_3_p_0((MR_String) "term size profiling is incompatible with high level code", libs__handle_options__STATE_VARIABLE_Errors_1144_1144, &libs__handle_options__STATE_VARIABLE_Errors_1162_1162);
                }
#line 1726 "handle_options.m"
              }
#line 1720 "handle_options.m"
          }
#line 1732 "handle_options.m"
        else
#line 1733 "handle_options.m"
          {
#line 1733 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1171_1171 = libs__handle_options__STATE_VARIABLE_Globals_1157_1157;
#line 1733 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_1162_1162 = libs__handle_options__STATE_VARIABLE_Errors_1144_1144;
#line 1733 "handle_options.m"
          }
#line 1732 "handle_options.m"
      }
#line 1738 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 1738 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 0);
#line 1738 "handle_options.m"
    else
#line 1738 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 1739 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 1738 "handle_options.m"
      else
#line 1738 "handle_options.m"
        libs__handle_options__succeeded = MR_FALSE;
#line 1738 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1737 "handle_options.m"
      {
#line 1737 "handle_options.m"
        MR_Word libs__handle_options__V_1177_1177;

#line 1737 "handle_options.m"
        {
#line 1737 "handle_options.m"
          libs__handle_options__V_1177_1177 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_30);
        }
#line 1737 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_1177_1177 == (MR_Integer) 1);
#line 1737 "handle_options.m"
      }
#line 1743 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1739 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_1179_1179 = libs__handle_options__STATE_VARIABLE_Errors_1162_1162;
#line 1743 "handle_options.m"
    else
#line 1744 "handle_options.m"
      {
#line 1744 "handle_options.m"
        {
#line 1744 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "debugging is available only in low level C grades", libs__handle_options__STATE_VARIABLE_Errors_1162_1162, &libs__handle_options__STATE_VARIABLE_Errors_1179_1179);
        }
#line 1744 "handle_options.m"
      }
#line 1750 "handle_options.m"
    {
#line 1750 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 489, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1171_1171, &libs__handle_options__STATE_VARIABLE_Globals_1183_1183);
    }
#line 1752 "handle_options.m"
    {
#line 1752 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 336, (MR_Integer) 365, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1183_1183, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
    }
#line 1769 "handle_options.m"
    if ((libs__handle_options__ProfileDeep_111 == (MR_Integer) 0))
#line 1766 "handle_options.m"
      {
#line 1767 "handle_options.m"
        {
#line 1767 "handle_options.m"
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 333, (MR_Integer) 365, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1193_1193);
        }
#line 1766 "handle_options.m"
      }
#line 1769 "handle_options.m"
    else
#line 1770 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1193_1193 = libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
#line 1775 "handle_options.m"
    {
#line 1775 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 159, (MR_Integer) 387, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1193_1193, &libs__handle_options__STATE_VARIABLE_Globals_1198_1198);
    }
#line 1776 "handle_options.m"
    {
#line 1776 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 159, (MR_Integer) 347, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1198_1198, &libs__handle_options__STATE_VARIABLE_Globals_1203_1203);
    }
#line 1778 "handle_options.m"
    {
#line 1778 "handle_options.m"
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 159, (MR_Integer) 348, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1203_1203, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
    }
#line 1782 "handle_options.m"
    {
#line 1782 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1213_1213);
    }
#line 1785 "handle_options.m"
    {
#line 1785 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1213_1213, &libs__handle_options__STATE_VARIABLE_Globals_1218_1218);
    }
#line 1840 "handle_options.m"
    if ((libs__handle_options__GC_Method_26 == (MR_Integer) 5))
#line 1824 "handle_options.m"
      {
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1222_1222;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1230_1230;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1234_1234;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1238_1238;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1242_1242;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1246_1246;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1250_1250;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1254_1254;
#line 1824 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1258_1258;

#line 1825 "handle_options.m"
        {
#line 1825 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1218_1218, &libs__handle_options__STATE_VARIABLE_Globals_1222_1222);
        }
#line 1826 "handle_options.m"
        {
#line 1826 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1222_1222, &libs__handle_options__STATE_VARIABLE_Globals_1226_1226);
        }
#line 1827 "handle_options.m"
        {
#line 1827 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 452, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1226_1226, &libs__handle_options__STATE_VARIABLE_Globals_1230_1230);
        }
#line 1828 "handle_options.m"
        {
#line 1828 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 472, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1230_1230, &libs__handle_options__STATE_VARIABLE_Globals_1234_1234);
        }
#line 1829 "handle_options.m"
        {
#line 1829 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 321, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1234_1234, &libs__handle_options__STATE_VARIABLE_Globals_1238_1238);
        }
#line 1830 "handle_options.m"
        {
#line 1830 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1238_1238, &libs__handle_options__STATE_VARIABLE_Globals_1242_1242);
        }
#line 1831 "handle_options.m"
        {
#line 1831 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 305, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1242_1242, &libs__handle_options__STATE_VARIABLE_Globals_1246_1246);
        }
#line 1833 "handle_options.m"
        {
#line 1833 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 306, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1246_1246, &libs__handle_options__STATE_VARIABLE_Globals_1250_1250);
        }
#line 1835 "handle_options.m"
        {
#line 1835 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1250_1250, &libs__handle_options__STATE_VARIABLE_Globals_1254_1254);
        }
#line 1837 "handle_options.m"
        {
#line 1837 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 358, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1254_1254, &libs__handle_options__STATE_VARIABLE_Globals_1258_1258);
        }
#line 1838 "handle_options.m"
        {
#line 1838 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 359, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1258_1258, &libs__handle_options__STATE_VARIABLE_Globals_1262_1262);
        }
#line 1824 "handle_options.m"
      }
#line 1840 "handle_options.m"
    else
#line 1840 "handle_options.m"
      if ((libs__handle_options__GC_Method_26 == (MR_Integer) 0))
#line 1841 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1840 "handle_options.m"
      else
#line 1840 "handle_options.m"
        if ((libs__handle_options__GC_Method_26 == (MR_Integer) 2))
#line 1843 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1840 "handle_options.m"
        else
#line 1840 "handle_options.m"
          if ((libs__handle_options__GC_Method_26 == (MR_Integer) 3))
#line 1844 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1840 "handle_options.m"
          else
#line 1840 "handle_options.m"
            if ((libs__handle_options__GC_Method_26 == (MR_Integer) 4))
#line 1845 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1840 "handle_options.m"
            else
#line 1842 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1262_1262 = libs__handle_options__STATE_VARIABLE_Globals_1218_1218;
#line 1853 "handle_options.m"
    {
#line 1853 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1262_1262, (MR_Integer) 256, &libs__handle_options__PutNondetEnvOnHeap_116);
    }
#line 1867 "handle_options.m"
    {
#line 1867 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 263, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1262_1262, &libs__handle_options__STATE_VARIABLE_Globals_1272_1272);
    }
#line 1869 "handle_options.m"
    {
#line 1869 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1272_1272, &libs__handle_options__STATE_VARIABLE_Globals_1277_1277);
    }
#line 1876 "handle_options.m"
    {
#line 1876 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 470, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1277_1277, &libs__handle_options__STATE_VARIABLE_Globals_1282_1282);
    }
#line 1878 "handle_options.m"
    {
#line 1878 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 470, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1282_1282, &libs__handle_options__STATE_VARIABLE_Globals_1287_1287);
    }
#line 1882 "handle_options.m"
    {
#line 1882 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 468, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1287_1287, &libs__handle_options__STATE_VARIABLE_Globals_1292_1292);
    }
#line 1888 "handle_options.m"
    {
#line 1888 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 387, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1292_1292, &libs__handle_options__STATE_VARIABLE_Globals_1297_1297);
    }
#line 1890 "handle_options.m"
    {
#line 1890 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 347, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1297_1297, &libs__handle_options__STATE_VARIABLE_Globals_1302_1302);
    }
#line 1899 "handle_options.m"
    {
#line 1899 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 450, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1302_1302, &libs__handle_options__STATE_VARIABLE_Globals_1307_1307);
    }
#line 1906 "handle_options.m"
    {
#line 1906 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 450, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1307_1307, &libs__handle_options__STATE_VARIABLE_Globals_1312_1312);
    }
#line 1915 "handle_options.m"
    {
#line 1915 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 452, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1312_1312, &libs__handle_options__STATE_VARIABLE_Globals_1317_1317);
    }
#line 1924 "handle_options.m"
    {
#line 1924 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1317_1317, (MR_Integer) 281, &libs__handle_options__DisablePneg_117);
    }
#line 1926 "handle_options.m"
    {
#line 1926 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1317_1317, (MR_Integer) 282, &libs__handle_options__DisableCut_118);
    }
#line 1929 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1929 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1930 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_117 == (MR_Integer) 0);
#line 1934 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1932 "handle_options.m"
      {
#line 1932 "handle_options.m"
        {
#line 1932 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 283, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1317_1317, &libs__handle_options__STATE_VARIABLE_Globals_1323_1323);
        }
#line 1932 "handle_options.m"
      }
#line 1934 "handle_options.m"
    else
#line 1932 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1323_1323 = libs__handle_options__STATE_VARIABLE_Globals_1317_1317;
#line 1938 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_101 == (MR_Integer) 1);
#line 1938 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1939 "handle_options.m"
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_118 == (MR_Integer) 0);
#line 1943 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1941 "handle_options.m"
      {
#line 1941 "handle_options.m"
        {
#line 1941 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 284, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]), libs__handle_options__STATE_VARIABLE_Globals_1323_1323, &libs__handle_options__STATE_VARIABLE_Globals_1327_1327);
        }
#line 1941 "handle_options.m"
      }
#line 1943 "handle_options.m"
    else
#line 1941 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1327_1327 = libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
#line 1949 "handle_options.m"
    {
#line 1949 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 142, &libs__handle_options__DumpHLDSStages_119);
    }
#line 1951 "handle_options.m"
    {
#line 1951 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 141, &libs__handle_options__DumpTraceStages_120);
    }
#line 1953 "handle_options.m"
    {
#line 1953 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 301, &libs__handle_options__ParallelLiveness_121);
    }
#line 1955 "handle_options.m"
    {
#line 1955 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1327_1327, (MR_Integer) 302, &libs__handle_options__ParallelCodeGen_122);
    }
#line 1958 "handle_options.m"
    {
#line 1958 "handle_options.m"
      MR_String libs__handle_options__V_123_123;
#line 1958 "handle_options.m"
      MR_Word libs__handle_options__V_124_124;

#line 1958 "handle_options.m"
      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_119)) == (MR_mktag((MR_Integer) 1)));
#line 1958 "handle_options.m"
      if (libs__handle_options__succeeded)
#line 1958 "handle_options.m"
        {
#line 1958 "handle_options.m"
          libs__handle_options__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_119, (MR_Integer) 0)));
#line 1958 "handle_options.m"
          libs__handle_options__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_119, (MR_Integer) 1)));
#line 1958 "handle_options.m"
        }
#line 1958 "handle_options.m"
    }
#line 1959 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 1959 "handle_options.m"
      {
#line 1959 "handle_options.m"
        {
#line 1959 "handle_options.m"
          MR_String libs__handle_options__V_125_125;
#line 1959 "handle_options.m"
          MR_Word libs__handle_options__V_126_126;

#line 1959 "handle_options.m"
          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_120)) == (MR_mktag((MR_Integer) 1)));
#line 1959 "handle_options.m"
          if (libs__handle_options__succeeded)
#line 1959 "handle_options.m"
            {
#line 1959 "handle_options.m"
              libs__handle_options__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_120, (MR_Integer) 0)));
#line 1959 "handle_options.m"
              libs__handle_options__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_120, (MR_Integer) 1)));
#line 1959 "handle_options.m"
            }
#line 1959 "handle_options.m"
        }
#line 1959 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 1959 "handle_options.m"
          {
#line 1960 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Statistics_77 == (MR_Integer) 1);
#line 1959 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 1959 "handle_options.m"
              {
#line 1961 "handle_options.m"
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_121 == (MR_Integer) 1);
#line 1959 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 1962 "handle_options.m"
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_122 == (MR_Integer) 1);
#line 1959 "handle_options.m"
              }
#line 1959 "handle_options.m"
          }
#line 1959 "handle_options.m"
      }
#line 1966 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1965 "handle_options.m"
      {
#line 1965 "handle_options.m"
        {
#line 1965 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 300, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1327_1327, &libs__handle_options__STATE_VARIABLE_Globals_1335_1335);
        }
#line 1965 "handle_options.m"
      }
#line 1966 "handle_options.m"
    else
#line 1965 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1335_1335 = libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
#line 1972 "handle_options.m"
    {
#line 1972 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 358, (MR_Integer) 359, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1335_1335, &libs__handle_options__STATE_VARIABLE_Globals_1340_1340);
    }
#line 1978 "handle_options.m"
    {
#line 1978 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 348, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1340_1340, &libs__handle_options__STATE_VARIABLE_Globals_1345_1345);
    }
#line 1983 "handle_options.m"
    {
#line 1983 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 350, (MR_Integer) 325, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1345_1345, &libs__handle_options__STATE_VARIABLE_Globals_1350_1350);
    }
#line 1985 "handle_options.m"
    {
#line 1985 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 350, (MR_Integer) 349, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1350_1350, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
    }
#line 1990 "handle_options.m"
    {
#line 1990 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 360, (MR_Integer) 366, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1360_1360);
    }
#line 1992 "handle_options.m"
    {
#line 1992 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 360, (MR_Integer) 345, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1360_1360, &libs__handle_options__STATE_VARIABLE_Globals_1365_1365);
    }
#line 1997 "handle_options.m"
    {
#line 1997 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 349, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1365_1365, &libs__handle_options__STATE_VARIABLE_Globals_1370_1370);
    }
#line 2003 "handle_options.m"
    {
#line 2003 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 392, (MR_Integer) 393, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1370_1370, &libs__handle_options__STATE_VARIABLE_Globals_1375_1375);
    }
#line 2008 "handle_options.m"
    {
#line 2008 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 91, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1375_1375, &libs__handle_options__STATE_VARIABLE_Globals_1380_1380);
    }
#line 2013 "handle_options.m"
    {
#line 2013 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 140, (MR_Integer) 91, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1380_1380, &libs__handle_options__STATE_VARIABLE_Globals_1385_1385);
    }
#line 2017 "handle_options.m"
    {
#line 2017 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 22, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1385_1385, &libs__handle_options__STATE_VARIABLE_Globals_1390_1390);
    }
#line 2020 "handle_options.m"
    {
#line 2020 "handle_options.m"
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, (MR_Integer) 661, &libs__handle_options__TargetArch_127);
    }
#line 2023 "handle_options.m"
    {
#line 2023 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, (MR_Integer) 550, &libs__handle_options__MaybeStdLibDir_128);
    }
#line 2041 "handle_options.m"
    if ((libs__handle_options__MaybeStdLibDir_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2042 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1406_1406 = libs__handle_options__STATE_VARIABLE_Globals_1390_1390;
#line 2041 "handle_options.m"
    else
#line 2026 "handle_options.m"
      {
#line 2026 "handle_options.m"
        MR_String libs__handle_options__StdLibDir_129 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_128, (MR_Integer) 0)));
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__OptionTable2_130;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs0_131;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__Rpath0_132;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__V_1394_1394;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1395_1395;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__V_1398_1398;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1399_1399;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__V_1400_1400;
#line 2026 "handle_options.m"
        MR_String libs__handle_options__V_1401_1401;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__V_1405_1405;
#line 2026 "handle_options.m"
        MR_Word libs__handle_options__V_1407_1407;
#line 2026 "handle_options.m"
        MR_String libs__handle_options__V_1408_1408;

#line 2027 "handle_options.m"
        {
#line 2027 "handle_options.m"
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1390_1390, &libs__handle_options__OptionTable2_130);
        }
#line 2028 "handle_options.m"
        {
#line 2028 "handle_options.m"
          libs__handle_options__V_1394_1394 = libs__options__option_table_add_mercury_library_directory_2_f_0(libs__handle_options__OptionTable2_130, libs__handle_options__StdLibDir_129);
        }
#line 2028 "handle_options.m"
        {
#line 2028 "handle_options.m"
          libs__globals__set_options_3_p_0(libs__handle_options__V_1394_1394, libs__handle_options__STATE_VARIABLE_Globals_1390_1390, &libs__handle_options__STATE_VARIABLE_Globals_1395_1395);
        }
#line 2032 "handle_options.m"
        {
#line 2032 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1395_1395, (MR_Integer) 540, &libs__handle_options__LinkLibDirs0_131);
        }
#line 2035 "handle_options.m"
        {
#line 2035 "handle_options.m"
          libs__handle_options__V_1401_1401 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_129, (MR_String) "lib");
        }
#line 2035 "handle_options.m"
        {
#line 2035 "handle_options.m"
          libs__handle_options__V_1400_1400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 0) = ((MR_Box) (libs__handle_options__V_1401_1401));
#line 2035 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1400_1400, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_131));
#line 2035 "handle_options.m"
        }
#line 2035 "handle_options.m"
        {
#line 2035 "handle_options.m"
          libs__handle_options__V_1398_1398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2035 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1398_1398, 1) = ((MR_Box) (libs__handle_options__V_1400_1400));
#line 2035 "handle_options.m"
        }
#line 2034 "handle_options.m"
        {
#line 2034 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 540, libs__handle_options__V_1398_1398, libs__handle_options__STATE_VARIABLE_Globals_1395_1395, &libs__handle_options__STATE_VARIABLE_Globals_1399_1399);
        }
#line 2037 "handle_options.m"
        {
#line 2037 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1399_1399, (MR_Integer) 541, &libs__handle_options__Rpath0_132);
        }
#line 2040 "handle_options.m"
        {
#line 2040 "handle_options.m"
          libs__handle_options__V_1408_1408 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_129, (MR_String) "lib");
        }
#line 2040 "handle_options.m"
        {
#line 2040 "handle_options.m"
          libs__handle_options__V_1407_1407 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1407_1407, 0) = ((MR_Box) (libs__handle_options__V_1408_1408));
#line 2040 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1407_1407, 1) = ((MR_Box) (libs__handle_options__Rpath0_132));
#line 2040 "handle_options.m"
        }
#line 2040 "handle_options.m"
        {
#line 2040 "handle_options.m"
          libs__handle_options__V_1405_1405 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2040 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1405_1405, 1) = ((MR_Box) (libs__handle_options__V_1407_1407));
#line 2040 "handle_options.m"
        }
#line 2039 "handle_options.m"
        {
#line 2039 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1405_1405, libs__handle_options__STATE_VARIABLE_Globals_1399_1399, &libs__handle_options__STATE_VARIABLE_Globals_1406_1406);
        }
#line 2026 "handle_options.m"
      }
#line 2046 "handle_options.m"
    {
#line 2046 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 629, &libs__handle_options__MaybeConfDir_133);
    }
#line 2054 "handle_options.m"
    if ((libs__handle_options__MaybeConfDir_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2055 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1414_1414 = libs__handle_options__STATE_VARIABLE_Globals_1406_1406;
#line 2054 "handle_options.m"
    else
#line 2049 "handle_options.m"
      {
#line 2049 "handle_options.m"
        MR_String libs__handle_options__ConfDir_134 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_133, (MR_Integer) 0)));
#line 2049 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs0_135;
#line 2049 "handle_options.m"
        MR_Word libs__handle_options__V_1413_1413;
#line 2049 "handle_options.m"
        MR_Word libs__handle_options__V_1415_1415;
#line 2049 "handle_options.m"
        MR_String libs__handle_options__V_1416_1416;

#line 2050 "handle_options.m"
        {
#line 2050 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 487, &libs__handle_options__CIncludeDirs0_135);
        }
#line 2053 "handle_options.m"
        {
#line 2053 "handle_options.m"
          libs__handle_options__V_1416_1416 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_134, (MR_String) "conf");
        }
#line 2053 "handle_options.m"
        {
#line 2053 "handle_options.m"
          libs__handle_options__V_1415_1415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1415_1415, 0) = ((MR_Box) (libs__handle_options__V_1416_1416));
#line 2053 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1415_1415, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_135));
#line 2053 "handle_options.m"
        }
#line 2053 "handle_options.m"
        {
#line 2053 "handle_options.m"
          libs__handle_options__V_1413_1413 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1413_1413, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2053 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1413_1413, 1) = ((MR_Box) (libs__handle_options__V_1415_1415));
#line 2053 "handle_options.m"
        }
#line 2052 "handle_options.m"
        {
#line 2052 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 487, libs__handle_options__V_1413_1413, libs__handle_options__STATE_VARIABLE_Globals_1406_1406, &libs__handle_options__STATE_VARIABLE_Globals_1414_1414);
        }
#line 2049 "handle_options.m"
      }
#line 2059 "handle_options.m"
    {
#line 2059 "handle_options.m"
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1414_1414, (MR_Integer) 640, &libs__handle_options__ConfigFile_136);
    }
#line 2062 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_136)) == (MR_mktag((MR_Integer) 1)));
#line 2062 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2062 "handle_options.m"
      {
#line 2062 "handle_options.m"
        libs__handle_options__V_1419_1419 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_136, (MR_Integer) 0)));
#line 2062 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1419_1419, (MR_String) "") == 0);
#line 2062 "handle_options.m"
      }
#line 2071 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2067 "handle_options.m"
      if ((libs__handle_options__MaybeConfDir_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2068 "handle_options.m"
        {
#line 2069 "handle_options.m"
          {
#line 2069 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 640, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_2[196]), libs__handle_options__STATE_VARIABLE_Globals_1414_1414, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
          }
#line 2068 "handle_options.m"
        }
#line 2067 "handle_options.m"
      else
#line 2064 "handle_options.m"
        {
#line 2064 "handle_options.m"
          MR_String libs__handle_options__ConfDir1_137 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_133, (MR_Integer) 0)));
#line 2064 "handle_options.m"
          MR_Word libs__handle_options__V_1425_1425;
#line 2064 "handle_options.m"
          MR_Word libs__handle_options__V_1427_1427;
#line 2064 "handle_options.m"
          MR_String libs__handle_options__V_1428_1428;
#line 2064 "handle_options.m"
          MR_String libs__handle_options__V_1429_1429;

#line 2066 "handle_options.m"
          {
#line 2066 "handle_options.m"
            libs__handle_options__V_1429_1429 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_137, (MR_String) "conf");
          }
#line 2066 "handle_options.m"
          {
#line 2066 "handle_options.m"
            libs__handle_options__V_1428_1428 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1429_1429, (MR_String) "Mercury.config");
          }
#line 2065 "handle_options.m"
          {
#line 2065 "handle_options.m"
            libs__handle_options__V_1427_1427 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "handle_options.m"
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1427_1427, 0) = ((MR_Box) (libs__handle_options__V_1428_1428));
#line 2065 "handle_options.m"
          }
#line 2065 "handle_options.m"
          {
#line 2065 "handle_options.m"
            libs__handle_options__V_1425_1425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2065 "handle_options.m"
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1425_1425, 1) = ((MR_Box) (libs__handle_options__V_1427_1427));
#line 2065 "handle_options.m"
          }
#line 2065 "handle_options.m"
          {
#line 2065 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 640, libs__handle_options__V_1425_1425, libs__handle_options__STATE_VARIABLE_Globals_1414_1414, &libs__handle_options__STATE_VARIABLE_Globals_1426_1426);
          }
#line 2064 "handle_options.m"
        }
#line 2071 "handle_options.m"
    else
#line 2069 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1426_1426 = libs__handle_options__STATE_VARIABLE_Globals_1414_1414;
#line 2078 "handle_options.m"
    {
#line 2078 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 544, &libs__handle_options__MercuryLibDirs_138);
    }
#line 2080 "handle_options.m"
    {
#line 2080 "handle_options.m"
      libs__handle_options__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__GradeString_139);
    }
#line 2130 "handle_options.m"
    if ((libs__handle_options__MercuryLibDirs_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2131 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1483_1483 = libs__handle_options__STATE_VARIABLE_Globals_1426_1426;
#line 2130 "handle_options.m"
    else
#line 2082 "handle_options.m"
      {
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1658_1658 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__ExtraLinkLibDirs_142;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__LinkLibDirs1_144;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__Rpath_145;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__ExtraIncludeDirs_146;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs_147;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs_148;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__ExtraIntermodDirs_149;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs0_150;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__ExtraInitDirs_151;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__InitDirs1_152;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1433_1433;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1440_1440;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1441_1441;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1442_1442;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1445_1445;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1446_1446;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1447_1447;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1448_1448;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1457_1457;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1458_1458;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1459_1459;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1462_1462;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1463_1463;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1464_1464;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1465_1465;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1472_1472;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1473_1473;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1474_1474;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1475_1475;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1482_1482;
#line 2082 "handle_options.m"
        MR_Word libs__handle_options__V_1484_1484;

#line 2083 "handle_options.m"
        {
#line 2083 "handle_options.m"
          libs__handle_options__V_1433_1433 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2083 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2083 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_1));
#line 2083 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2083 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1433_1433, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2083 "handle_options.m"
        }
#line 2083 "handle_options.m"
        {
#line 2083 "handle_options.m"
          libs__handle_options__ExtraLinkLibDirs_142 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__V_1433_1433, libs__handle_options__MercuryLibDirs_138);
        }
#line 2088 "handle_options.m"
        {
#line 2088 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1426_1426, (MR_Integer) 540, &libs__handle_options__LinkLibDirs1_144);
        }
#line 2091 "handle_options.m"
        {
#line 2091 "handle_options.m"
          libs__handle_options__V_1442_1442 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__LinkLibDirs1_144, libs__handle_options__ExtraLinkLibDirs_142);
        }
#line 2091 "handle_options.m"
        {
#line 2091 "handle_options.m"
          libs__handle_options__V_1440_1440 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1440_1440, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2091 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1440_1440, 1) = ((MR_Box) (libs__handle_options__V_1442_1442));
#line 2091 "handle_options.m"
        }
#line 2090 "handle_options.m"
        {
#line 2090 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 540, libs__handle_options__V_1440_1440, libs__handle_options__STATE_VARIABLE_Globals_1426_1426, &libs__handle_options__STATE_VARIABLE_Globals_1441_1441);
        }
#line 2093 "handle_options.m"
        {
#line 2093 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1441_1441, (MR_Integer) 541, &libs__handle_options__Rpath_145);
        }
#line 2096 "handle_options.m"
        {
#line 2096 "handle_options.m"
          libs__handle_options__V_1447_1447 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__Rpath_145, libs__handle_options__ExtraLinkLibDirs_142);
        }
#line 2096 "handle_options.m"
        {
#line 2096 "handle_options.m"
          libs__handle_options__V_1445_1445 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1445_1445, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2096 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1445_1445, 1) = ((MR_Box) (libs__handle_options__V_1447_1447));
#line 2096 "handle_options.m"
        }
#line 2095 "handle_options.m"
        {
#line 2095 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 541, libs__handle_options__V_1445_1445, libs__handle_options__STATE_VARIABLE_Globals_1441_1441, &libs__handle_options__STATE_VARIABLE_Globals_1446_1446);
        }
#line 2098 "handle_options.m"
        {
#line 2098 "handle_options.m"
          libs__handle_options__V_1448_1448 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_2));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2098 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1448_1448, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2098 "handle_options.m"
        }
#line 2098 "handle_options.m"
        {
#line 2098 "handle_options.m"
          libs__handle_options__ExtraIncludeDirs_146 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__V_1448_1448, libs__handle_options__MercuryLibDirs_138);
        }
#line 2102 "handle_options.m"
        {
#line 2102 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1446_1446, (MR_Integer) 487, &libs__handle_options__CIncludeDirs_147);
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__V_1459_1459 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__ExtraIncludeDirs_146, libs__handle_options__CIncludeDirs_147);
        }
#line 2105 "handle_options.m"
        {
#line 2105 "handle_options.m"
          libs__handle_options__V_1457_1457 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2105 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1457_1457, 1) = ((MR_Box) (libs__handle_options__V_1459_1459));
#line 2105 "handle_options.m"
        }
#line 2104 "handle_options.m"
        {
#line 2104 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 487, libs__handle_options__V_1457_1457, libs__handle_options__STATE_VARIABLE_Globals_1446_1446, &libs__handle_options__STATE_VARIABLE_Globals_1458_1458);
        }
#line 2106 "handle_options.m"
        {
#line 2106 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1458_1458, (MR_Integer) 531, &libs__handle_options__ErlangIncludeDirs_148);
        }
#line 2109 "handle_options.m"
        {
#line 2109 "handle_options.m"
          libs__handle_options__V_1464_1464 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__ExtraIncludeDirs_146, libs__handle_options__ErlangIncludeDirs_148);
        }
#line 2109 "handle_options.m"
        {
#line 2109 "handle_options.m"
          libs__handle_options__V_1462_1462 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1462_1462, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2109 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1462_1462, 1) = ((MR_Box) (libs__handle_options__V_1464_1464));
#line 2109 "handle_options.m"
        }
#line 2108 "handle_options.m"
        {
#line 2108 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1462_1462, libs__handle_options__STATE_VARIABLE_Globals_1458_1458, &libs__handle_options__STATE_VARIABLE_Globals_1463_1463);
        }
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__V_1465_1465 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_3));
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2111 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1465_1465, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2111 "handle_options.m"
        }
#line 2111 "handle_options.m"
        {
#line 2111 "handle_options.m"
          libs__handle_options__ExtraIntermodDirs_149 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__V_1465_1465, libs__handle_options__MercuryLibDirs_138);
        }
#line 2116 "handle_options.m"
        {
#line 2116 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1463_1463, (MR_Integer) 645, &libs__handle_options__IntermodDirs0_150);
        }
#line 2119 "handle_options.m"
        {
#line 2119 "handle_options.m"
          libs__handle_options__V_1474_1474 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__ExtraIntermodDirs_149, libs__handle_options__IntermodDirs0_150);
        }
#line 2119 "handle_options.m"
        {
#line 2119 "handle_options.m"
          libs__handle_options__V_1472_1472 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2119 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1472_1472, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2119 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1472_1472, 1) = ((MR_Box) (libs__handle_options__V_1474_1474));
#line 2119 "handle_options.m"
        }
#line 2118 "handle_options.m"
        {
#line 2118 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_1472_1472, libs__handle_options__STATE_VARIABLE_Globals_1463_1463, &libs__handle_options__STATE_VARIABLE_Globals_1473_1473);
        }
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__handle_options__V_1475_1475 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_4));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2121 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1475_1475, 3) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2121 "handle_options.m"
        }
#line 2121 "handle_options.m"
        {
#line 2121 "handle_options.m"
          libs__handle_options__ExtraInitDirs_151 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__V_1475_1475, libs__handle_options__MercuryLibDirs_138);
        }
#line 2126 "handle_options.m"
        {
#line 2126 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1473_1473, (MR_Integer) 552, &libs__handle_options__InitDirs1_152);
        }
#line 2129 "handle_options.m"
        {
#line 2129 "handle_options.m"
          libs__handle_options__V_1484_1484 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1658_1658, libs__handle_options__InitDirs1_152, libs__handle_options__ExtraInitDirs_151);
        }
#line 2129 "handle_options.m"
        {
#line 2129 "handle_options.m"
          libs__handle_options__V_1482_1482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2129 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2129 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1482_1482, 1) = ((MR_Box) (libs__handle_options__V_1484_1484));
#line 2129 "handle_options.m"
        }
#line 2128 "handle_options.m"
        {
#line 2128 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 552, libs__handle_options__V_1482_1482, libs__handle_options__STATE_VARIABLE_Globals_1473_1473, &libs__handle_options__STATE_VARIABLE_Globals_1483_1483);
        }
#line 2082 "handle_options.m"
      }
#line 2137 "handle_options.m"
    {
#line 2137 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 646, &libs__handle_options__UseSearchDirs_153);
    }
#line 2147 "handle_options.m"
    if ((libs__handle_options__UseSearchDirs_153 == (MR_Integer) 0))
#line 2148 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1490_1490 = libs__handle_options__STATE_VARIABLE_Globals_1483_1483;
#line 2147 "handle_options.m"
    else
#line 2140 "handle_options.m"
      {
#line 2140 "handle_options.m"
        MR_Word libs__handle_options__IntermodDirs1_154;
#line 2140 "handle_options.m"
        MR_Word libs__handle_options__SearchDirs_155;
#line 2140 "handle_options.m"
        MR_Word libs__handle_options__V_1489_1489;
#line 2140 "handle_options.m"
        MR_Word libs__handle_options__V_1491_1491;

#line 2141 "handle_options.m"
        {
#line 2141 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 645, &libs__handle_options__IntermodDirs1_154);
        }
#line 2143 "handle_options.m"
        {
#line 2143 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 644, &libs__handle_options__SearchDirs_155);
        }
#line 2146 "handle_options.m"
        {
#line 2146 "handle_options.m"
          libs__handle_options__V_1491_1491 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_154, libs__handle_options__SearchDirs_155);
        }
#line 2146 "handle_options.m"
        {
#line 2146 "handle_options.m"
          libs__handle_options__V_1489_1489 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1489_1489, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2146 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1489_1489, 1) = ((MR_Box) (libs__handle_options__V_1491_1491));
#line 2146 "handle_options.m"
        }
#line 2145 "handle_options.m"
        {
#line 2145 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_1489_1489, libs__handle_options__STATE_VARIABLE_Globals_1483_1483, &libs__handle_options__STATE_VARIABLE_Globals_1490_1490);
        }
#line 2140 "handle_options.m"
      }
#line 2151 "handle_options.m"
    {
#line 2151 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 643, &libs__handle_options__UseGradeSubdirs_156);
    }
#line 2153 "handle_options.m"
    {
#line 2153 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 546, &libs__handle_options__SearchLibFilesDirs_157);
    }
#line 2155 "handle_options.m"
    {
#line 2155 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1490_1490, (MR_Integer) 645, &libs__handle_options__IntermodDirs2_158);
    }
#line 2157 "handle_options.m"
    {
#line 2157 "handle_options.m"
      libs__handle_options__ToGradeSubdir_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2157 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[2]));
#line 2157 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_5));
#line 2157 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2157 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 3) = ((MR_Box) (libs__handle_options__TargetArch_127));
#line 2157 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_159, 4) = ((MR_Box) (libs__handle_options__GradeString_139));
#line 2157 "handle_options.m"
    }
#line 13360 "libs.handle_options.c"
    if ((libs__handle_options__UseGradeSubdirs_156 == (MR_Integer) 0))
#line 13362 "libs.handle_options.c"
      {
#line 13364 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1667_1667;
#line 13366 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_163;
#line 13368 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_164;
#line 13370 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_165;
#line 13372 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1510_1510;

#line 2178 "handle_options.m"
        {
#line 2178 "handle_options.m"
          libs__handle_options__IntermodDirs3_163 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__IntermodDirs2_158);
        }
#line 2181 "handle_options.m"
        {
#line 2181 "handle_options.m"
          libs__handle_options__V_1510_1510 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1510_1510, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1510_1510, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_163));
#line 2181 "handle_options.m"
        }
#line 2180 "handle_options.m"
        {
#line 2180 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_1510_1510, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1511_1511);
        }
#line 2183 "handle_options.m"
        {
#line 2183 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 540, &libs__handle_options__LinkLibDirs2_164);
        }
#line 2185 "handle_options.m"
        {
#line 2185 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 552, &libs__handle_options__InitDirs2_165);
        }
#line 13405 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1667_1667 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2203 "handle_options.m"
        {
#line 2203 "handle_options.m"
          libs__handle_options__LinkLibDirs_168 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1667_1667, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__LinkLibDirs2_164);
        }
#line 2204 "handle_options.m"
        {
#line 2204 "handle_options.m"
          libs__handle_options__InitDirs_171 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1667_1667, libs__handle_options__SearchLibFilesDirs_157, libs__handle_options__InitDirs2_165);
        }
#line 13417 "libs.handle_options.c"
      }
#line 13419 "libs.handle_options.c"
    else
#line 13421 "libs.handle_options.c"
      {
#line 13423 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1660_1660;
#line 13425 "libs.handle_options.c"
        MR_Word libs__handle_options__TypeCtorInfo_1666_1666;
#line 13427 "libs.handle_options.c"
        MR_String libs__handle_options__GradeSubdir_161;
#line 13429 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_162;
#line 13431 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeLibDir_166;
#line 13433 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeLibDirs_167;
#line 13435 "libs.handle_options.c"
        MR_Word libs__handle_options__ToGradeInitDir_169;
#line 13437 "libs.handle_options.c"
        MR_Word libs__handle_options__SearchGradeInitDirs_170;
#line 13439 "libs.handle_options.c"
        MR_String libs__handle_options__V_1500_1500;
#line 13441 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1502_1502;
#line 13443 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1504_1504;
#line 13445 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1505_1505;
#line 13447 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1506_1506;
#line 13449 "libs.handle_options.c"
        MR_Word libs__handle_options__V_1507_1507;
#line 13451 "libs.handle_options.c"
        MR_String libs__handle_options__V_1508_1508;
#line 13453 "libs.handle_options.c"
        MR_Word libs__handle_options__IntermodDirs3_6084;
#line 13455 "libs.handle_options.c"
        MR_Word libs__handle_options__LinkLibDirs2_6085;
#line 13457 "libs.handle_options.c"
        MR_Word libs__handle_options__InitDirs2_6086;
#line 13459 "libs.handle_options.c"
        MR_Word libs__handle_options__V_6087_6087;

#line 2168 "handle_options.m"
        {
#line 2168 "handle_options.m"
          libs__handle_options__V_1500_1500 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_139);
        }
#line 2168 "handle_options.m"
        {
#line 2168 "handle_options.m"
          libs__handle_options__GradeSubdir_161 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1500_1500, libs__handle_options__TargetArch_127);
        }
#line 13472 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1660_1660 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2172 "handle_options.m"
        {
#line 2172 "handle_options.m"
          libs__handle_options__SearchLibFilesGradeSubdirs_162 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__ToGradeSubdir_159, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2174 "handle_options.m"
        {
#line 2174 "handle_options.m"
          libs__handle_options__V_1502_1502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1502_1502, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_161));
#line 2174 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1502_1502, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2174 "handle_options.m"
        }
#line 2175 "handle_options.m"
        {
#line 2175 "handle_options.m"
          libs__handle_options__V_1508_1508 = mercury__dir__this_directory_0_f_0();
        }
#line 2175 "handle_options.m"
        {
#line 2175 "handle_options.m"
          libs__handle_options__V_1507_1507 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[4]));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_6));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1507_1507, 3) = ((MR_Box) (libs__handle_options__V_1508_1508));
#line 2175 "handle_options.m"
        }
#line 2175 "handle_options.m"
        {
#line 2175 "handle_options.m"
          libs__handle_options__V_1506_1506 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[5]));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_7));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2175 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1506_1506, 3) = ((MR_Box) (libs__handle_options__V_1507_1507));
#line 2175 "handle_options.m"
        }
#line 2175 "handle_options.m"
        {
#line 2175 "handle_options.m"
          libs__handle_options__V_1505_1505 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1506_1506, libs__handle_options__IntermodDirs2_158);
        }
#line 2174 "handle_options.m"
        {
#line 2174 "handle_options.m"
          libs__handle_options__V_1504_1504 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__SearchLibFilesGradeSubdirs_162, libs__handle_options__V_1505_1505);
        }
#line 2174 "handle_options.m"
        {
#line 2174 "handle_options.m"
          libs__handle_options__IntermodDirs3_6084 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__V_1502_1502, libs__handle_options__V_1504_1504);
        }
#line 2181 "handle_options.m"
        {
#line 2181 "handle_options.m"
          libs__handle_options__V_6087_6087 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6087_6087, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2181 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_6087_6087, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6084));
#line 2181 "handle_options.m"
        }
#line 2180 "handle_options.m"
        {
#line 2180 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 645, libs__handle_options__V_6087_6087, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1511_1511);
        }
#line 2183 "handle_options.m"
        {
#line 2183 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 540, &libs__handle_options__LinkLibDirs2_6085);
        }
#line 2185 "handle_options.m"
        {
#line 2185 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1511_1511, (MR_Integer) 552, &libs__handle_options__InitDirs2_6086);
        }
#line 2193 "handle_options.m"
        {
#line 2193 "handle_options.m"
          libs__handle_options__ToGradeLibDir_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2193 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2193 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_8));
#line 2193 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2193 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_166, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2193 "handle_options.m"
        }
#line 13576 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1666_1666 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2194 "handle_options.m"
        {
#line 2194 "handle_options.m"
          libs__handle_options__SearchGradeLibDirs_167 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__ToGradeLibDir_166, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2195 "handle_options.m"
        {
#line 2195 "handle_options.m"
          libs__handle_options__LinkLibDirs_168 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__SearchGradeLibDirs_167, libs__handle_options__LinkLibDirs2_6085);
        }
#line 2197 "handle_options.m"
        {
#line 2197 "handle_options.m"
          libs__handle_options__ToGradeInitDir_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_9));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2197 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_169, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2197 "handle_options.m"
        }
#line 2199 "handle_options.m"
        {
#line 2199 "handle_options.m"
          libs__handle_options__SearchGradeInitDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__ToGradeInitDir_169, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2200 "handle_options.m"
        {
#line 2200 "handle_options.m"
          libs__handle_options__InitDirs_171 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1666_1666, libs__handle_options__SearchGradeInitDirs_170, libs__handle_options__InitDirs2_6086);
        }
#line 13612 "libs.handle_options.c"
      }
#line 2207 "handle_options.m"
    {
#line 2207 "handle_options.m"
      libs__handle_options__V_1527_1527 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1527_1527, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2207 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1527_1527, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_168));
#line 2207 "handle_options.m"
    }
#line 2206 "handle_options.m"
    {
#line 2206 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 540, libs__handle_options__V_1527_1527, libs__handle_options__STATE_VARIABLE_Globals_1511_1511, &libs__handle_options__STATE_VARIABLE_Globals_1528_1528);
    }
#line 2209 "handle_options.m"
    {
#line 2209 "handle_options.m"
      libs__handle_options__V_1530_1530 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1530_1530, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2209 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1530_1530, 1) = ((MR_Box) (libs__handle_options__InitDirs_171));
#line 2209 "handle_options.m"
    }
#line 2208 "handle_options.m"
    {
#line 2208 "handle_options.m"
      libs__globals__set_option_4_p_0((MR_Integer) 552, libs__handle_options__V_1530_1530, libs__handle_options__STATE_VARIABLE_Globals_1528_1528, &libs__handle_options__STATE_VARIABLE_Globals_1531_1531);
    }
#line 2215 "handle_options.m"
    {
#line 2215 "handle_options.m"
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1531_1531, (MR_Integer) 642, &libs__handle_options__UseSubdirs_172);
    }
#line 2223 "handle_options.m"
    if ((libs__handle_options__UseGradeSubdirs_156 == (MR_Integer) 0))
#line 2224 "handle_options.m"
      {
#line 13653 "libs.handle_options.c"
        libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_172 == (MR_Integer) 1);
#line 2224 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2224 "handle_options.m"
          {
#line 2227 "handle_options.m"
            libs__handle_options__ToMihsSubdir_173 = (MR_Word) &libs__handle_options_scalar_common_1[15];
#line 2228 "handle_options.m"
            libs__handle_options__ToHrlsSubdir_174 = (MR_Word) &libs__handle_options_scalar_common_1[16];
#line 2228 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2224 "handle_options.m"
          }
#line 2224 "handle_options.m"
      }
#line 2223 "handle_options.m"
    else
#line 2218 "handle_options.m"
      {
#line 2219 "handle_options.m"
        {
#line 2219 "handle_options.m"
          libs__handle_options__ToMihsSubdir_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2219 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2219 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_12));
#line 2219 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2219 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2219 "handle_options.m"
        }
#line 2221 "handle_options.m"
        {
#line 2221 "handle_options.m"
          libs__handle_options__ToHrlsSubdir_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2221 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
#line 2221 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_13));
#line 2221 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2221 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_159));
#line 2221 "handle_options.m"
        }
#line 2218 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2218 "handle_options.m"
      }
#line 2250 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2236 "handle_options.m"
      {
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__TypeCtorInfo_1668_1668;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__CIncludeDirs1_175;
#line 2236 "handle_options.m"
        MR_String libs__handle_options__MihsSubdir_176;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__SearchLibMihsSubdirs_177;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__SubdirCIncludeDirs_178;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__ErlangIncludeDirs1_179;
#line 2236 "handle_options.m"
        MR_String libs__handle_options__HrlsSubdir_180;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_181;
#line 2236 "handle_options.m"
        MR_String libs__handle_options__V_1556_1556;
#line 2236 "handle_options.m"
        MR_String libs__handle_options__V_1557_1557;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__V_1558_1558;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__V_1559_1559;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__V_1561_1561;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
#line 2236 "handle_options.m"
        MR_String libs__handle_options__V_1564_1564;
#line 2236 "handle_options.m"
        MR_Word libs__handle_options__V_1566_1566;
#line 2237 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
#line 2237 "handle_options.m"
        MR_Box libs__handle_options__conv12_MihsSubdir_176;
#line 2246 "handle_options.m"
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
#line 2246 "handle_options.m"
        MR_Box libs__handle_options__conv14_HrlsSubdir_180;

#line 2235 "handle_options.m"
        {
#line 2235 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1531_1531, (MR_Integer) 487, &libs__handle_options__CIncludeDirs1_175);
        }
#line 2237 "handle_options.m"
        {
#line 2237 "handle_options.m"
          libs__handle_options__V_1556_1556 = mercury__dir__this_directory_0_f_0();
        }
#line 2237 "handle_options.m"
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_173, (MR_Integer) 1)));
#line 2237 "handle_options.m"
        {
#line 2237 "handle_options.m"
          libs__handle_options__conv12_MihsSubdir_176 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_173), ((MR_Box) (libs__handle_options__V_1556_1556)));
        }
#line 2237 "handle_options.m"
        libs__handle_options__MihsSubdir_176 = ((MR_String) libs__handle_options__conv12_MihsSubdir_176);
#line 13769 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_1668_1668 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2238 "handle_options.m"
        {
#line 2238 "handle_options.m"
          libs__handle_options__SearchLibMihsSubdirs_177 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__ToMihsSubdir_173, libs__handle_options__SearchLibFilesDirs_157);
        }
#line 2239 "handle_options.m"
        {
#line 2239 "handle_options.m"
          libs__handle_options__V_1557_1557 = mercury__dir__this_directory_0_f_0();
        }
#line 2240 "handle_options.m"
        {
#line 2240 "handle_options.m"
          libs__handle_options__V_1559_1559 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1668_1668, libs__handle_options__SearchLibMihsSubdirs_177, libs__handle_options__CIncludeDirs1_175);
        }
#line 2239 "handle_options.m"
        {
#line 2239 "handle_options.m"
          libs__handle_options__V_1558_1558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2239 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1558_1558, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_176));
#line 2239 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1558_1558, 1) = ((MR_Box) (libs__handle_options__V_1559_1559));
#line 2239 "handle_options.m"
        }
#line 2239 "handle_options.m"
        {
#line 2239 "handle_options.m"
          libs__handle_options__SubdirCIncludeDirs_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2239 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_178, 0) = ((MR_Box) (libs__handle_options__V_1557_1557));
#line 2239 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_178, 1) = ((MR_Box) (libs__handle_options__V_1558_1558));
#line 2239 "handle_options.m"
        }
#line 2242 "handle_options.m"
        {
#line 2242 "handle_options.m"
          libs__handle_options__V_1561_1561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2242 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2242 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_178));
#line 2242 "handle_options.m"
        }
#line 2241 "handle_options.m"
        {
#line 2241 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 487, libs__handle_options__V_1561_1561, libs__handle_options__STATE_VARIABLE_Globals_1531_1531, &libs__handle_options__STATE_VARIABLE_Globals_1562_1562);
        }
#line 2244 "handle_options.m"
        {
#line 2244 "handle_options.m"
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 531, &libs__handle_options__ErlangIncludeDirs1_179);
        }
#line 2246 "handle_options.m"
        {
#line 2246 "handle_options.m"
          libs__handle_options__V_1564_1564 = mercury__dir__this_directory_0_f_0();
        }
#line 2246 "handle_options.m"
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_174, (MR_Integer) 1)));
#line 2246 "handle_options.m"
        {
#line 2246 "handle_options.m"
          libs__handle_options__conv14_HrlsSubdir_180 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_174), ((MR_Box) (libs__handle_options__V_1564_1564)));
        }
#line 2246 "handle_options.m"
        libs__handle_options__HrlsSubdir_180 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_180);
#line 2247 "handle_options.m"
        {
#line 2247 "handle_options.m"
          libs__handle_options__SubdirErlangIncludeDirs_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_181, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_180));
#line 2247 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_181, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_179));
#line 2247 "handle_options.m"
        }
#line 2249 "handle_options.m"
        {
#line 2249 "handle_options.m"
          libs__handle_options__V_1566_1566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2249 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2249 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_181));
#line 2249 "handle_options.m"
        }
#line 2248 "handle_options.m"
        {
#line 2248 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 531, libs__handle_options__V_1566_1566, libs__handle_options__STATE_VARIABLE_Globals_1562_1562, &libs__handle_options__STATE_VARIABLE_Globals_1567_1567);
        }
#line 2236 "handle_options.m"
      }
#line 2250 "handle_options.m"
    else
#line 2248 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1567_1567 = libs__handle_options__STATE_VARIABLE_Globals_1531_1531;
#line 2256 "handle_options.m"
    {
#line 2256 "handle_options.m"
      libs__handle_options__option_implies_5_p_0((MR_Integer) 327, (MR_Integer) 12, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1567_1567, &libs__handle_options__STATE_VARIABLE_Globals_1571_1571);
    }
#line 1856 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_100 == (MR_Integer) 1);
#line 1856 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 1856 "handle_options.m"
      {
#line 1857 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_26 == (MR_Integer) 5);
#line 1856 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 1858 "handle_options.m"
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_116 == (MR_Integer) 1);
#line 1856 "handle_options.m"
      }
#line 13890 "libs.handle_options.c"
    if (libs__handle_options__succeeded)
#line 13892 "libs.handle_options.c"
      {
#line 13894 "libs.handle_options.c"
        MR_Word libs__handle_options__STATE_VARIABLE_Errors_1266_1266;

#line 1860 "handle_options.m"
        {
#line 1860 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "--gc accurate is incompatible with --put-nondet-env-on-heap", libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1266_1266);
        }
#line 2269 "handle_options.m"
        {
#line 2269 "handle_options.m"
          libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 453, libs__handle_options__V_271_271, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1266_1266, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
        }
#line 13907 "libs.handle_options.c"
      }
#line 13909 "libs.handle_options.c"
    else
#line 2267 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2262 "handle_options.m"
        {
#line 2263 "handle_options.m"
          {
#line 2263 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 464, libs__handle_options__V_494_494, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
          }
#line 2262 "handle_options.m"
        }
#line 2267 "handle_options.m"
      else
#line 2268 "handle_options.m"
        {
#line 2269 "handle_options.m"
          {
#line 2269 "handle_options.m"
            libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 453, libs__handle_options__V_271_271, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1179_1179, &libs__handle_options__STATE_VARIABLE_Errors_1583_1583);
          }
#line 2268 "handle_options.m"
        }
#line 2273 "handle_options.m"
    {
#line 2273 "handle_options.m"
      libs__handle_options__option_requires_7_p_0((MR_Integer) 25, (MR_Integer) 96, libs__handle_options__V_494_494, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1571_1571, libs__handle_options__STATE_VARIABLE_Errors_1583_1583, &libs__handle_options__STATE_VARIABLE_Errors_1591_1591);
    }
#line 2282 "handle_options.m"
    if ((libs__handle_options__Target_25 == (MR_Integer) 0))
#line 2280 "handle_options.m"
      {
#line 2281 "handle_options.m"
        libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[197]);
#line 2281 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Globals_1615_1615 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2280 "handle_options.m"
      }
#line 2282 "handle_options.m"
    else
#line 2282 "handle_options.m"
      if ((libs__handle_options__Target_25 == (MR_Integer) 2))
#line 2287 "handle_options.m"
        {
#line 2288 "handle_options.m"
          libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[9]);
#line 2288 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_Globals_1615_1615 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2287 "handle_options.m"
        }
#line 2282 "handle_options.m"
      else
#line 2282 "handle_options.m"
        if ((libs__handle_options__Target_25 == (MR_Integer) 4))
#line 2293 "handle_options.m"
          {
#line 2293 "handle_options.m"
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1599_1599;

#line 2294 "handle_options.m"
            libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[198]);
#line 2295 "handle_options.m"
            {
#line 2295 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1571_1571, &libs__handle_options__STATE_VARIABLE_Globals_1599_1599);
            }
#line 2296 "handle_options.m"
            {
#line 2296 "handle_options.m"
              libs__globals__set_option_4_p_0((MR_Integer) 296, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1599_1599, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
            }
#line 2293 "handle_options.m"
          }
#line 2282 "handle_options.m"
        else
#line 2282 "handle_options.m"
          if ((libs__handle_options__Target_25 == (MR_Integer) 1))
#line 2283 "handle_options.m"
            {
#line 2284 "handle_options.m"
              libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[10]);
#line 2285 "handle_options.m"
              {
#line 2285 "handle_options.m"
                libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1571_1571, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
              }
#line 2283 "handle_options.m"
            }
#line 2282 "handle_options.m"
          else
#line 2290 "handle_options.m"
            {
#line 2291 "handle_options.m"
              libs__handle_options__BackendForeignLanguages_182 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[199]);
#line 2291 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Globals_1615_1615 = libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
#line 2290 "handle_options.m"
            }
#line 2300 "handle_options.m"
    {
#line 2300 "handle_options.m"
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 261, &libs__handle_options__CurrentBackendForeignLanguage_183);
    }
#line 2306 "handle_options.m"
    if ((libs__handle_options__CurrentBackendForeignLanguage_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2303 "handle_options.m"
      {
#line 2303 "handle_options.m"
        MR_Word libs__handle_options__V_1621_1621;

#line 2305 "handle_options.m"
        {
#line 2305 "handle_options.m"
          libs__handle_options__V_1621_1621 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1621_1621, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2305 "handle_options.m"
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1621_1621, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_182));
#line 2305 "handle_options.m"
        }
#line 2304 "handle_options.m"
        {
#line 2304 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_1621_1621, libs__handle_options__STATE_VARIABLE_Globals_1615_1615, &libs__handle_options__STATE_VARIABLE_Globals_1622_1622);
        }
#line 2303 "handle_options.m"
      }
#line 2306 "handle_options.m"
    else
#line 2307 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1622_1622 = libs__handle_options__STATE_VARIABLE_Globals_1615_1615;
#line 2310 "handle_options.m"
    {
#line 2310 "handle_options.m"
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1622_1622, (MR_Integer) 315, &libs__handle_options__CompareSpec_186);
    }
#line 2312 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_186 < (MR_Integer) 0);
#line 2324 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2320 "handle_options.m"
      if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2318 "handle_options.m"
        {
#line 2319 "handle_options.m"
          {
#line 2319 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[11]), libs__handle_options__STATE_VARIABLE_Globals_1622_1622, &libs__handle_options__STATE_VARIABLE_Globals_1631_1631);
          }
#line 2318 "handle_options.m"
        }
#line 2320 "handle_options.m"
      else
#line 2321 "handle_options.m"
        {
#line 2322 "handle_options.m"
          {
#line 2322 "handle_options.m"
            libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[12]), libs__handle_options__STATE_VARIABLE_Globals_1622_1622, &libs__handle_options__STATE_VARIABLE_Globals_1631_1631);
          }
#line 2321 "handle_options.m"
        }
#line 2324 "handle_options.m"
    else
#line 2322 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1631_1631 = libs__handle_options__STATE_VARIABLE_Globals_1622_1622;
#line 2331 "handle_options.m"
    libs__handle_options__succeeded = (libs__handle_options__Target_25 == (MR_Integer) 0);
#line 2331 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2331 "handle_options.m"
      {
#line 2337 "handle_options.m"
        if ((libs__handle_options__TagsMethod_56 == (MR_Integer) 2))
#line 2337 "handle_options.m"
          libs__handle_options__succeeded = MR_TRUE;
#line 2337 "handle_options.m"
        else
#line 2337 "handle_options.m"
          if ((libs__handle_options__TagsMethod_56 == (MR_Integer) 1))
#line 2336 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2337 "handle_options.m"
          else
#line 2337 "handle_options.m"
            libs__handle_options__succeeded = MR_FALSE;
#line 2331 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2331 "handle_options.m"
          {
#line 2339 "handle_options.m"
            libs__handle_options__V_1633_1633 = (MR_Integer) 2;
#line 2339 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_55 >= libs__handle_options__V_1633_1633);
#line 2331 "handle_options.m"
          }
#line 2331 "handle_options.m"
      }
#line 2343 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2341 "handle_options.m"
      {
#line 2341 "handle_options.m"
        {
#line 2341 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_271_271, libs__handle_options__STATE_VARIABLE_Globals_1631_1631, &libs__handle_options__STATE_VARIABLE_Globals_1636_1636);
        }
#line 2341 "handle_options.m"
      }
#line 2343 "handle_options.m"
    else
#line 2344 "handle_options.m"
      {
#line 2344 "handle_options.m"
        {
#line 2344 "handle_options.m"
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_494_494, libs__handle_options__STATE_VARIABLE_Globals_1631_1631, &libs__handle_options__STATE_VARIABLE_Globals_1636_1636);
        }
#line 2344 "handle_options.m"
      }
#line 2351 "handle_options.m"
    if ((libs__handle_options__HighLevelCode_100 == (MR_Integer) 0))
#line 2350 "handle_options.m"
      {
#line 2350 "handle_options.m"
        libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1636_1636, &libs__handle_options__STATE_VARIABLE_Globals_1642_1642);
      }
#line 2351 "handle_options.m"
    else
#line 2352 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Globals_1642_1642 = libs__handle_options__STATE_VARIABLE_Globals_1636_1636;
#line 2354 "handle_options.m"
    {
#line 2354 "handle_options.m"
      libs__handle_options__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1642_1642, libs__handle_options__STATE_VARIABLE_Globals_189, libs__handle_options__STATE_VARIABLE_Errors_1591_1591, libs__handle_options__STATE_VARIABLE_Errors_188);
    }
#line 2355 "handle_options.m"
    {
#line 2355 "handle_options.m"
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_189);
#line 2355 "handle_options.m"
      return;
    }
#line 643 "handle_options.m"
  }
#line 628 "handle_options.m"
}

#line 619 "handle_options.m"
static void MR_CALL 
libs__handle_options__add_error_3_p_0(
#line 619 "handle_options.m"
  MR_String libs__handle_options__Error_4,
#line 619 "handle_options.m"
  MR_Word libs__handle_options__Errors0_5,
#line 619 "handle_options.m"
  MR_Word * libs__handle_options__Errors_6)
#line 619 "handle_options.m"
{
#line 621 "handle_options.m"
  {
#line 621 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 621 "handle_options.m"
    MR_Word libs__handle_options__V_7_7;

#line 624 "handle_options.m"
    {
#line 624 "handle_options.m"
      libs__handle_options__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 0) = ((MR_Box) (libs__handle_options__Error_4));
#line 624 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "handle_options.m"
    }
#line 624 "handle_options.m"
    {
#line 624 "handle_options.m"
      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__Errors0_5, libs__handle_options__V_7_7, libs__handle_options__Errors_6);
#line 624 "handle_options.m"
      return;
    }
#line 621 "handle_options.m"
  }
#line 619 "handle_options.m"
}

#line 527 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__check_option_values_23_p_0_1(
#line 527 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 527 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1)
#line 527 "handle_options.m"
{
#line 527 "handle_options.m"
  {
#line 527 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 527 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 527 "handle_options.m"
    {
#line 527 "handle_options.m"
      return libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__check_option_values__527__1_1_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1));
    }
#line 527 "handle_options.m"
    return libs__handle_options__succeeded;
#line 527 "handle_options.m"
  }
#line 527 "handle_options.m"
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
#line 265 "handle_options.m"
    MR_Box libs__handle_options__conv1_GC_Method0_47;
#line 271 "handle_options.m"
    MR_Word libs__handle_options__GC_MethodPrime_49;
#line 267 "handle_options.m"
    MR_String libs__handle_options__GC_MethodStr_48;
#line 279 "handle_options.m"
    MR_Box libs__handle_options__conv2_TagsMethod0_50;
#line 285 "handle_options.m"
    MR_Word libs__handle_options__TagsMethodPrime_52;
#line 281 "handle_options.m"
    MR_String libs__handle_options__TagsMethodStr_51;
#line 291 "handle_options.m"
    MR_Box libs__handle_options__conv3_PercentFull_53;
#line 293 "handle_options.m"
    MR_Integer libs__handle_options__Percent_54;
#line 293 "handle_options.m"
    MR_Integer libs__handle_options__V_147_147;
#line 293 "handle_options.m"
    MR_Integer libs__handle_options__V_148_148;
#line 304 "handle_options.m"
    MR_Box libs__handle_options__conv4_TermNorm0_55;
#line 310 "handle_options.m"
    MR_Word libs__handle_options__TermNormPrime_57;
#line 306 "handle_options.m"
    MR_String libs__handle_options__TermNormStr_56;
#line 317 "handle_options.m"
    MR_Box libs__handle_options__conv5_Term2Norm0_58;
#line 323 "handle_options.m"
    MR_Word libs__handle_options__Term2NormPrime_60;
#line 319 "handle_options.m"
    MR_String libs__handle_options__Term2NormStr_59;
#line 330 "handle_options.m"
    MR_Box libs__handle_options__conv6_ForceDisableTracing_61;
#line 331 "handle_options.m"
    MR_Word libs__handle_options__V_170_170;
#line 360 "handle_options.m"
    MR_Box libs__handle_options__conv10_Suppress_69;
#line 366 "handle_options.m"
    MR_Word libs__handle_options__TraceSuppressPrime_71;
#line 362 "handle_options.m"
    MR_String libs__handle_options__SuppressStr_70;
#line 371 "handle_options.m"
    MR_Box libs__handle_options__conv11_ForceDisableSSDB_72;
#line 372 "handle_options.m"
    MR_Word libs__handle_options__V_188_188;
#line 389 "handle_options.m"
    MR_Box libs__handle_options__conv14_MaybeThreadSafeOption_78;
#line 395 "handle_options.m"
    MR_Word libs__handle_options__MaybeThreadSafe0_80;
#line 391 "handle_options.m"
    MR_String libs__handle_options__MaybeThreadSafeString_79;
#line 400 "handle_options.m"
    MR_Box libs__handle_options__conv15_DumpAliasOption_81;
#line 402 "handle_options.m"
    MR_String libs__handle_options__DumpAlias_82;
#line 429 "handle_options.m"
    MR_Char libs__handle_options__V_206_206;
#line 438 "handle_options.m"
    MR_Char libs__handle_options__V_210_210;
#line 469 "handle_options.m"
    MR_Char libs__handle_options__V_234_234;
#line 478 "handle_options.m"
    MR_Box libs__handle_options__conv16_C_CompilerType0_85;
#line 484 "handle_options.m"
    MR_Word libs__handle_options__C_CompilerTypePrime_87;
#line 480 "handle_options.m"
    MR_String libs__handle_options__C_CompilerTypeStr_86;
#line 491 "handle_options.m"
    MR_Box libs__handle_options__conv17_CSharp_CompilerType0_88;
#line 498 "handle_options.m"
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_90;
#line 493 "handle_options.m"
    MR_String libs__handle_options__CSharp_CompilerTypeStr_89;
#line 506 "handle_options.m"
    MR_Box libs__handle_options__conv18_ReuseConstraint0_91;
#line 507 "handle_options.m"
    MR_Box libs__handle_options__conv19_ReuseConstraintArg0_92;
#line 516 "handle_options.m"
    MR_Word libs__handle_options__ReuseStrategyPrime_95;
#line 510 "handle_options.m"
    MR_String libs__handle_options__ReuseConstraintStr_93;
#line 510 "handle_options.m"
    MR_Integer libs__handle_options__ReuseConstraintArgNum_94;
#line 524 "handle_options.m"
    MR_Box libs__handle_options__conv20_DotNetLibVersionOpt_96;
#line 536 "handle_options.m"
    MR_Integer libs__handle_options__Major_103;
#line 536 "handle_options.m"
    MR_Integer libs__handle_options__Minor_104;
#line 536 "handle_options.m"
    MR_Integer libs__handle_options__Build_105;
#line 536 "handle_options.m"
    MR_Integer libs__handle_options__Revision_106;
#line 526 "handle_options.m"
    MR_String libs__handle_options__DotNetLibVersionStr_97;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__IsSep_98;
#line 526 "handle_options.m"
    MR_String libs__handle_options__Mj_99;
#line 526 "handle_options.m"
    MR_String libs__handle_options__Mn_100;
#line 526 "handle_options.m"
    MR_String libs__handle_options__Bu_101;
#line 526 "handle_options.m"
    MR_String libs__handle_options__Rv_102;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__V_258_258;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__V_259_259;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__V_260_260;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__V_261_261;
#line 526 "handle_options.m"
    MR_Word libs__handle_options__V_262_262;
#line 547 "handle_options.m"
    MR_Box libs__handle_options__conv21_FeedbackFile0_108;
#line 562 "handle_options.m"
    MR_String libs__handle_options__FeedbackFile_109;
#line 566 "handle_options.m"
    MR_Box libs__handle_options__conv22_HostEnvType0_114;
#line 572 "handle_options.m"
    MR_Word libs__handle_options__HostEnvTypePrime_116;
#line 568 "handle_options.m"
    MR_String libs__handle_options__HostEnvTypeStr_115;
#line 579 "handle_options.m"
    MR_Box libs__handle_options__conv23_SystemEnvType0_117;
#line 589 "handle_options.m"
    MR_Word libs__handle_options__SystemEnvTypePrime_119;
#line 581 "handle_options.m"
    MR_String libs__handle_options__SystemEnvTypeStr_118;
#line 596 "handle_options.m"
    MR_Box libs__handle_options__conv24_TargetEnvType0_120;
#line 602 "handle_options.m"
    MR_Word libs__handle_options__TargetEnvTypePrime_122;
#line 598 "handle_options.m"
    MR_String libs__handle_options__TargetEnvTypeStr_121;

#line 252 "handle_options.m"
    {
#line 252 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 172)), &libs__handle_options__conv0_Target0_44);
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
#line 260 "handle_options.m"
        {
#line 260 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid target option (must be \140c\', \140il\', \140java\', \'csharp\', or \140erlang\')", libs__handle_options__STATE_VARIABLE_Errors_0_125, &libs__handle_options__STATE_VARIABLE_Errors_131_131);
        }
#line 259 "handle_options.m"
      }
#line 265 "handle_options.m"
    {
#line 265 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 211)), &libs__handle_options__conv1_GC_Method0_47);
    }
#line 265 "handle_options.m"
    libs__handle_options__GC_Method0_47 = ((MR_Word) libs__handle_options__conv1_GC_Method0_47);
#line 267 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__GC_Method0_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_47, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 267 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 267 "handle_options.m"
      {
#line 267 "handle_options.m"
        libs__handle_options__GC_MethodStr_48 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__GC_Method0_47, (MR_Integer) 1)));
#line 268 "handle_options.m"
        {
#line 268 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_48, &libs__handle_options__GC_MethodPrime_49);
        }
#line 267 "handle_options.m"
      }
#line 271 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 270 "handle_options.m"
      {
#line 270 "handle_options.m"
        *libs__handle_options__GC_Method_26 = libs__handle_options__GC_MethodPrime_49;
#line 270 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_136_136 = libs__handle_options__STATE_VARIABLE_Errors_131_131;
#line 270 "handle_options.m"
      }
#line 271 "handle_options.m"
    else
#line 272 "handle_options.m"
      {
#line 272 "handle_options.m"
        *libs__handle_options__GC_Method_26 = (MR_Integer) 1;
#line 273 "handle_options.m"
        {
#line 273 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid GC option (must be \140none\', \140conservative\', \140boehm\', \140hgc\', \140accurate\', or \140automatic\')", libs__handle_options__STATE_VARIABLE_Errors_131_131, &libs__handle_options__STATE_VARIABLE_Errors_136_136);
        }
#line 272 "handle_options.m"
      }
#line 279 "handle_options.m"
    {
#line 279 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 232)), &libs__handle_options__conv2_TagsMethod0_50);
    }
#line 279 "handle_options.m"
    libs__handle_options__TagsMethod0_50 = ((MR_Word) libs__handle_options__conv2_TagsMethod0_50);
#line 281 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TagsMethod0_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_50, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 281 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 281 "handle_options.m"
      {
#line 281 "handle_options.m"
        libs__handle_options__TagsMethodStr_51 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TagsMethod0_50, (MR_Integer) 1)));
#line 282 "handle_options.m"
        {
#line 282 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_51, &libs__handle_options__TagsMethodPrime_52);
        }
#line 281 "handle_options.m"
      }
#line 285 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 284 "handle_options.m"
      {
#line 284 "handle_options.m"
        *libs__handle_options__TagsMethod_27 = libs__handle_options__TagsMethodPrime_52;
#line 284 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_143_143 = libs__handle_options__STATE_VARIABLE_Errors_136_136;
#line 284 "handle_options.m"
      }
#line 285 "handle_options.m"
    else
#line 286 "handle_options.m"
      {
#line 286 "handle_options.m"
        *libs__handle_options__TagsMethod_27 = (MR_Integer) 0;
#line 287 "handle_options.m"
        {
#line 287 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid tags option (must be \140none\', \140low\' or \140high\')", libs__handle_options__STATE_VARIABLE_Errors_136_136, &libs__handle_options__STATE_VARIABLE_Errors_143_143);
        }
#line 286 "handle_options.m"
      }
#line 291 "handle_options.m"
    {
#line 291 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 318)), &libs__handle_options__conv3_PercentFull_53);
    }
#line 291 "handle_options.m"
    libs__handle_options__PercentFull_53 = ((MR_Word) libs__handle_options__conv3_PercentFull_53);
#line 293 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__PercentFull_53)) == (MR_mktag((MR_Integer) 2)));
#line 293 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 293 "handle_options.m"
      {
#line 293 "handle_options.m"
        libs__handle_options__Percent_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__PercentFull_53, (MR_Integer) 0)));
#line 294 "handle_options.m"
        libs__handle_options__V_147_147 = (MR_Integer) 1;
#line 294 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__Percent_54 >= libs__handle_options__V_147_147);
#line 293 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 293 "handle_options.m"
          {
#line 295 "handle_options.m"
            libs__handle_options__V_148_148 = (MR_Integer) 100;
#line 295 "handle_options.m"
            libs__handle_options__succeeded = (libs__handle_options__Percent_54 <= libs__handle_options__V_148_148);
#line 293 "handle_options.m"
          }
#line 293 "handle_options.m"
      }
#line 298 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 295 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_Errors_150_150 = libs__handle_options__STATE_VARIABLE_Errors_143_143;
#line 298 "handle_options.m"
    else
#line 299 "handle_options.m"
      {
#line 299 "handle_options.m"
        {
#line 299 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--fact-table-hash-percent-full\'\n\t(must be an integer between 1 and 100)", libs__handle_options__STATE_VARIABLE_Errors_143_143, &libs__handle_options__STATE_VARIABLE_Errors_150_150);
        }
#line 299 "handle_options.m"
      }
#line 304 "handle_options.m"
    {
#line 304 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 417)), &libs__handle_options__conv4_TermNorm0_55);
    }
#line 304 "handle_options.m"
    libs__handle_options__TermNorm0_55 = ((MR_Word) libs__handle_options__conv4_TermNorm0_55);
#line 306 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TermNorm0_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_55, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 306 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 306 "handle_options.m"
      {
#line 306 "handle_options.m"
        libs__handle_options__TermNormStr_56 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TermNorm0_55, (MR_Integer) 1)));
#line 307 "handle_options.m"
        {
#line 307 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_56, &libs__handle_options__TermNormPrime_57);
        }
#line 306 "handle_options.m"
      }
#line 310 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 309 "handle_options.m"
      {
#line 309 "handle_options.m"
        *libs__handle_options__TermNorm_28 = libs__handle_options__TermNormPrime_57;
#line 309 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_157_157 = libs__handle_options__STATE_VARIABLE_Errors_150_150;
#line 309 "handle_options.m"
      }
#line 310 "handle_options.m"
    else
#line 311 "handle_options.m"
      {
#line 311 "handle_options.m"
        *libs__handle_options__TermNorm_28 = (MR_Integer) 0;
#line 312 "handle_options.m"
        {
#line 312 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination-norm\'\n\t(must be \140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_150_150, &libs__handle_options__STATE_VARIABLE_Errors_157_157);
        }
#line 311 "handle_options.m"
      }
#line 317 "handle_options.m"
    {
#line 317 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 423)), &libs__handle_options__conv5_Term2Norm0_58);
    }
#line 317 "handle_options.m"
    libs__handle_options__Term2Norm0_58 = ((MR_Word) libs__handle_options__conv5_Term2Norm0_58);
#line 319 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Term2Norm0_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_58, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 319 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 319 "handle_options.m"
      {
#line 319 "handle_options.m"
        libs__handle_options__Term2NormStr_59 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Term2Norm0_58, (MR_Integer) 1)));
#line 320 "handle_options.m"
        {
#line 320 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_59, &libs__handle_options__Term2NormPrime_60);
        }
#line 319 "handle_options.m"
      }
#line 323 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 322 "handle_options.m"
      {
#line 322 "handle_options.m"
        *libs__handle_options__Term2Norm_29 = libs__handle_options__Term2NormPrime_60;
#line 322 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_164_164 = libs__handle_options__STATE_VARIABLE_Errors_157_157;
#line 322 "handle_options.m"
      }
#line 323 "handle_options.m"
    else
#line 324 "handle_options.m"
      {
#line 324 "handle_options.m"
        *libs__handle_options__Term2Norm_29 = (MR_Integer) 0;
#line 325 "handle_options.m"
        {
#line 325 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--termination2-norm\'\n\t(must be\140simple\', \140total\' or \140num-data-elems\').", libs__handle_options__STATE_VARIABLE_Errors_157_157, &libs__handle_options__STATE_VARIABLE_Errors_164_164);
        }
#line 324 "handle_options.m"
      }
#line 330 "handle_options.m"
    {
#line 330 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 129)), &libs__handle_options__conv6_ForceDisableTracing_61);
    }
#line 330 "handle_options.m"
    libs__handle_options__ForceDisableTracing_61 = ((MR_Word) libs__handle_options__conv6_ForceDisableTracing_61);
#line 331 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableTracing_61)) == (MR_mktag((MR_Integer) 1)));
#line 331 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 331 "handle_options.m"
      {
#line 331 "handle_options.m"
        libs__handle_options__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableTracing_61, (MR_Integer) 0)));
#line 331 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_170_170 == (MR_Integer) 1);
#line 331 "handle_options.m"
      }
#line 333 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 332 "handle_options.m"
      {
#line 332 "handle_options.m"
        {
#line 332 "handle_options.m"
          *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
        }
#line 332 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_175_175 = libs__handle_options__STATE_VARIABLE_Errors_164_164;
#line 332 "handle_options.m"
      }
#line 333 "handle_options.m"
    else
#line 334 "handle_options.m"
      {
#line 334 "handle_options.m"
        MR_Word libs__handle_options__Trace_62;
#line 334 "handle_options.m"
        MR_Word libs__handle_options__ExecTraceOpt_63;
#line 334 "handle_options.m"
        MR_Word libs__handle_options__DeclDebugOpt_64;
#line 334 "handle_options.m"
        MR_Box libs__handle_options__conv7_Trace_62;
#line 335 "handle_options.m"
        MR_Box libs__handle_options__conv8_ExecTraceOpt_63;
#line 336 "handle_options.m"
        MR_Box libs__handle_options__conv9_DeclDebugOpt_64;
#line 352 "handle_options.m"
        MR_Word libs__handle_options__MaybeTraceLevel_68;
#line 338 "handle_options.m"
        MR_String libs__handle_options__TraceStr_65;
#line 338 "handle_options.m"
        MR_Word libs__handle_options__ExecTrace_66;
#line 338 "handle_options.m"
        MR_Word libs__handle_options__DeclDebug_67;

#line 334 "handle_options.m"
        {
#line 334 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 117)), &libs__handle_options__conv7_Trace_62);
        }
#line 334 "handle_options.m"
        libs__handle_options__Trace_62 = ((MR_Word) libs__handle_options__conv7_Trace_62);
#line 335 "handle_options.m"
        {
#line 335 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 182)), &libs__handle_options__conv8_ExecTraceOpt_63);
        }
#line 335 "handle_options.m"
        libs__handle_options__ExecTraceOpt_63 = ((MR_Word) libs__handle_options__conv8_ExecTraceOpt_63);
#line 336 "handle_options.m"
        {
#line 336 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 183)), &libs__handle_options__conv9_DeclDebugOpt_64);
        }
#line 336 "handle_options.m"
        libs__handle_options__DeclDebugOpt_64 = ((MR_Word) libs__handle_options__conv9_DeclDebugOpt_64);
#line 338 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Trace_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 338 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 338 "handle_options.m"
          {
#line 338 "handle_options.m"
            libs__handle_options__TraceStr_65 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Trace_62, (MR_Integer) 1)));
#line 339 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ExecTraceOpt_63)) == (MR_mktag((MR_Integer) 1)));
#line 339 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 339 "handle_options.m"
              {
#line 339 "handle_options.m"
                libs__handle_options__ExecTrace_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ExecTraceOpt_63, (MR_Integer) 0)));
#line 340 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DeclDebugOpt_64)) == (MR_mktag((MR_Integer) 1)));
#line 340 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 340 "handle_options.m"
                  {
#line 340 "handle_options.m"
                    libs__handle_options__DeclDebug_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DeclDebugOpt_64, (MR_Integer) 0)));
#line 341 "handle_options.m"
                    {
#line 341 "handle_options.m"
                      libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__TraceStr_65, libs__handle_options__ExecTrace_66, libs__handle_options__DeclDebug_67, &libs__handle_options__MaybeTraceLevel_68);
                    }
#line 340 "handle_options.m"
                  }
#line 339 "handle_options.m"
              }
#line 338 "handle_options.m"
          }
#line 352 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 346 "handle_options.m"
          if ((libs__handle_options__MaybeTraceLevel_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "handle_options.m"
            {
#line 348 "handle_options.m"
              {
#line 348 "handle_options.m"
                *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
              }
#line 349 "handle_options.m"
              {
#line 349 "handle_options.m"
                libs__handle_options__add_error_3_p_0((MR_String) "Specified trace level is not compatible with grade", libs__handle_options__STATE_VARIABLE_Errors_164_164, &libs__handle_options__STATE_VARIABLE_Errors_175_175);
              }
#line 347 "handle_options.m"
            }
#line 346 "handle_options.m"
          else
#line 345 "handle_options.m"
            {
#line 345 "handle_options.m"
              *libs__handle_options__TraceLevel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_68, (MR_Integer) 0)));
#line 345 "handle_options.m"
              libs__handle_options__STATE_VARIABLE_Errors_175_175 = libs__handle_options__STATE_VARIABLE_Errors_164_164;
#line 345 "handle_options.m"
            }
#line 352 "handle_options.m"
        else
#line 353 "handle_options.m"
          {
#line 353 "handle_options.m"
            {
#line 353 "handle_options.m"
              *libs__handle_options__TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
            }
#line 354 "handle_options.m"
            {
#line 354 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--trace\'\n\t(must be \140minimum\', \140shallow\', \140deep\', \140decl\', \140rep\' or \140default\').", libs__handle_options__STATE_VARIABLE_Errors_164_164, &libs__handle_options__STATE_VARIABLE_Errors_175_175);
            }
#line 353 "handle_options.m"
          }
#line 334 "handle_options.m"
      }
#line 360 "handle_options.m"
    {
#line 360 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 128)), &libs__handle_options__conv10_Suppress_69);
    }
#line 360 "handle_options.m"
    libs__handle_options__Suppress_69 = ((MR_Word) libs__handle_options__conv10_Suppress_69);
#line 362 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__Suppress_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_69, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 362 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 362 "handle_options.m"
      {
#line 362 "handle_options.m"
        libs__handle_options__SuppressStr_70 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__Suppress_69, (MR_Integer) 1)));
#line 363 "handle_options.m"
        {
#line 363 "handle_options.m"
          libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_70, &libs__handle_options__TraceSuppressPrime_71);
        }
#line 362 "handle_options.m"
      }
#line 366 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 365 "handle_options.m"
      {
#line 365 "handle_options.m"
        *libs__handle_options__TraceSuppress_31 = libs__handle_options__TraceSuppressPrime_71;
#line 365 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_186_186 = libs__handle_options__STATE_VARIABLE_Errors_175_175;
#line 365 "handle_options.m"
      }
#line 366 "handle_options.m"
    else
#line 367 "handle_options.m"
      {
#line 367 "handle_options.m"
        {
#line 367 "handle_options.m"
          *libs__handle_options__TraceSuppress_31 = libs__trace_params__default_trace_suppress_0_f_0();
        }
#line 368 "handle_options.m"
        {
#line 368 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--suppress-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_175_175, &libs__handle_options__STATE_VARIABLE_Errors_186_186);
        }
#line 367 "handle_options.m"
      }
#line 371 "handle_options.m"
    {
#line 371 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 133)), &libs__handle_options__conv11_ForceDisableSSDB_72);
    }
#line 371 "handle_options.m"
    libs__handle_options__ForceDisableSSDB_72 = ((MR_Word) libs__handle_options__conv11_ForceDisableSSDB_72);
#line 372 "handle_options.m"
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ForceDisableSSDB_72)) == (MR_mktag((MR_Integer) 1)));
#line 372 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 372 "handle_options.m"
      {
#line 372 "handle_options.m"
        libs__handle_options__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__ForceDisableSSDB_72, (MR_Integer) 0)));
#line 372 "handle_options.m"
        libs__handle_options__succeeded = (libs__handle_options__V_188_188 == (MR_Integer) 1);
#line 372 "handle_options.m"
      }
#line 374 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 373 "handle_options.m"
      {
#line 373 "handle_options.m"
        *libs__handle_options__SSTraceLevel_32 = (MR_Integer) 0;
#line 373 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_192_192 = libs__handle_options__STATE_VARIABLE_Errors_186_186;
#line 373 "handle_options.m"
      }
#line 374 "handle_options.m"
    else
#line 375 "handle_options.m"
      {
#line 375 "handle_options.m"
        MR_Word libs__handle_options__SSTrace_73;
#line 375 "handle_options.m"
        MR_Word libs__handle_options__SSDB_74;
#line 375 "handle_options.m"
        MR_Box libs__handle_options__conv12_SSTrace_73;
#line 376 "handle_options.m"
        MR_Box libs__handle_options__conv13_SSDB_74;
#line 383 "handle_options.m"
        MR_Word libs__handle_options__SSTL_77;
#line 378 "handle_options.m"
        MR_String libs__handle_options__SSTraceStr_75;
#line 378 "handle_options.m"
        MR_Word libs__handle_options__IsInSSDebugGrade_76;

#line 375 "handle_options.m"
        {
#line 375 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 230)), &libs__handle_options__conv12_SSTrace_73);
        }
#line 375 "handle_options.m"
        libs__handle_options__SSTrace_73 = ((MR_Word) libs__handle_options__conv12_SSTrace_73);
#line 376 "handle_options.m"
        {
#line 376 "handle_options.m"
          mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 229)), &libs__handle_options__conv13_SSDB_74);
        }
#line 376 "handle_options.m"
        libs__handle_options__SSDB_74 = ((MR_Word) libs__handle_options__conv13_SSDB_74);
#line 378 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SSTrace_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_73, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 378 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 378 "handle_options.m"
          {
#line 378 "handle_options.m"
            libs__handle_options__SSTraceStr_75 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SSTrace_73, (MR_Integer) 1)));
#line 379 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__SSDB_74)) == (MR_mktag((MR_Integer) 1)));
#line 379 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 379 "handle_options.m"
              {
#line 379 "handle_options.m"
                libs__handle_options__IsInSSDebugGrade_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__SSDB_74, (MR_Integer) 0)));
#line 380 "handle_options.m"
                {
#line 380 "handle_options.m"
                  libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTraceStr_75, libs__handle_options__IsInSSDebugGrade_76, &libs__handle_options__SSTL_77);
                }
#line 379 "handle_options.m"
              }
#line 378 "handle_options.m"
          }
#line 383 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 382 "handle_options.m"
          {
#line 382 "handle_options.m"
            *libs__handle_options__SSTraceLevel_32 = libs__handle_options__SSTL_77;
#line 382 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_192_192 = libs__handle_options__STATE_VARIABLE_Errors_186_186;
#line 382 "handle_options.m"
          }
#line 383 "handle_options.m"
        else
#line 384 "handle_options.m"
          {
#line 384 "handle_options.m"
            *libs__handle_options__SSTraceLevel_32 = (MR_Integer) 0;
#line 385 "handle_options.m"
            {
#line 385 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--ssdb-trace\'.", libs__handle_options__STATE_VARIABLE_Errors_186_186, &libs__handle_options__STATE_VARIABLE_Errors_192_192);
            }
#line 384 "handle_options.m"
          }
#line 375 "handle_options.m"
      }
#line 389 "handle_options.m"
    {
#line 389 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 222)), &libs__handle_options__conv14_MaybeThreadSafeOption_78);
    }
#line 389 "handle_options.m"
    libs__handle_options__MaybeThreadSafeOption_78 = ((MR_Word) libs__handle_options__conv14_MaybeThreadSafeOption_78);
#line 391 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__MaybeThreadSafeOption_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 391 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 391 "handle_options.m"
      {
#line 391 "handle_options.m"
        libs__handle_options__MaybeThreadSafeString_79 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__MaybeThreadSafeOption_78, (MR_Integer) 1)));
#line 392 "handle_options.m"
        {
#line 392 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeString_79, &libs__handle_options__MaybeThreadSafe0_80);
        }
#line 391 "handle_options.m"
      }
#line 395 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 394 "handle_options.m"
      {
#line 394 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_33 = libs__handle_options__MaybeThreadSafe0_80;
#line 394 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_195_195 = libs__handle_options__STATE_VARIABLE_Errors_192_192;
#line 394 "handle_options.m"
      }
#line 395 "handle_options.m"
    else
#line 396 "handle_options.m"
      {
#line 396 "handle_options.m"
        *libs__handle_options__MaybeThreadSafe_33 = (MR_Integer) 0;
#line 397 "handle_options.m"
        {
#line 397 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--maybe-thread-safe\'.", libs__handle_options__STATE_VARIABLE_Errors_192_192, &libs__handle_options__STATE_VARIABLE_Errors_195_195);
        }
#line 396 "handle_options.m"
      }
#line 400 "handle_options.m"
    {
#line 400 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_0_123, ((MR_Box) ((MR_Integer) 145)), &libs__handle_options__conv15_DumpAliasOption_81);
    }
#line 400 "handle_options.m"
    libs__handle_options__DumpAliasOption_81 = ((MR_Word) libs__handle_options__conv15_DumpAliasOption_81);
#line 402 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 402 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 402 "handle_options.m"
      {
#line 402 "handle_options.m"
        libs__handle_options__DumpAlias_82 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 1)));
#line 403 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_82, (MR_String) "") == 0);
#line 402 "handle_options.m"
      }
#line 406 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 405 "handle_options.m"
      {
#line 405 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_201_201 = libs__handle_options__STATE_VARIABLE_Errors_195_195;
#line 405 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_OptionTable_199_199 = libs__handle_options__STATE_VARIABLE_OptionTable_0_123;
#line 405 "handle_options.m"
      }
#line 406 "handle_options.m"
    else
#line 411 "handle_options.m"
      {
#line 411 "handle_options.m"
        MR_String libs__handle_options__AliasDumpOptions_83;
#line 407 "handle_options.m"
        MR_String libs__handle_options__DumpAlias_297;

#line 407 "handle_options.m"
        libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DumpAliasOption_81)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 407 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 407 "handle_options.m"
          {
#line 407 "handle_options.m"
            libs__handle_options__DumpAlias_297 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DumpAliasOption_81, (MR_Integer) 1)));
#line 408 "handle_options.m"
            {
#line 408 "handle_options.m"
              libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_297, &libs__handle_options__AliasDumpOptions_83);
            }
#line 407 "handle_options.m"
          }
#line 411 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 410 "handle_options.m"
          {
#line 410 "handle_options.m"
            MR_Word libs__handle_options__V_198_198;

#line 410 "handle_options.m"
            {
#line 410 "handle_options.m"
              libs__handle_options__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 410 "handle_options.m"
              MR_hl_field(MR_mktag(3), libs__handle_options__V_198_198, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_83));
#line 410 "handle_options.m"
            }
#line 410 "handle_options.m"
            {
#line 410 "handle_options.m"
              mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 146)), ((MR_Box) (libs__handle_options__V_198_198)), libs__handle_options__STATE_VARIABLE_OptionTable_0_123, &libs__handle_options__STATE_VARIABLE_OptionTable_199_199);
            }
#line 410 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_201_201 = libs__handle_options__STATE_VARIABLE_Errors_195_195;
#line 410 "handle_options.m"
          }
#line 411 "handle_options.m"
        else
#line 412 "handle_options.m"
          {
#line 412 "handle_options.m"
            {
#line 412 "handle_options.m"
              libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--hlds-dump-alias\'.", libs__handle_options__STATE_VARIABLE_Errors_195_195, &libs__handle_options__STATE_VARIABLE_Errors_201_201);
            }
#line 412 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_OptionTable_199_199 = libs__handle_options__STATE_VARIABLE_OptionTable_0_123;
#line 412 "handle_options.m"
          }
#line 411 "handle_options.m"
      }
#line 416 "handle_options.m"
    {
#line 416 "handle_options.m"
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__STATE_VARIABLE_OptionTable_199_199, ((MR_Box) ((MR_Integer) 146)), &libs__handle_options__STATE_VARIABLE_DumpOptions_203_203);
    }
#line 420 "handle_options.m"
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_203_203, (MR_String) "") == 0);
#line 422 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 421 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_204_204 = (MR_String) "x";
#line 422 "handle_options.m"
    else
#line 421 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_204_204 = libs__handle_options__STATE_VARIABLE_DumpOptions_203_203;
#line 428 "handle_options.m"
    {
#line 428 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_204_204, (MR_Char) 121);
    }
#line 428 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 428 "handle_options.m"
      {
#line 429 "handle_options.m"
        libs__handle_options__V_206_206 = (MR_Char) 97;
#line 429 "handle_options.m"
        {
#line 429 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_204_204, libs__handle_options__V_206_206);
        }
#line 429 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 428 "handle_options.m"
      }
#line 432 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 431 "handle_options.m"
      {
#line 431 "handle_options.m"
        {
#line 431 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_204_204);
        }
#line 431 "handle_options.m"
      }
#line 432 "handle_options.m"
    else
#line 431 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_207_207 = libs__handle_options__STATE_VARIABLE_DumpOptions_204_204;
#line 437 "handle_options.m"
    {
#line 437 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, (MR_Char) 97);
    }
#line 437 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 437 "handle_options.m"
      {
#line 438 "handle_options.m"
        libs__handle_options__V_210_210 = (MR_Char) 117;
#line 438 "handle_options.m"
        {
#line 438 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_207_207, libs__handle_options__V_210_210);
        }
#line 438 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 437 "handle_options.m"
      }
#line 441 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 440 "handle_options.m"
      {
#line 440 "handle_options.m"
        {
#line 440 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_211_211 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_207_207);
        }
#line 440 "handle_options.m"
      }
#line 441 "handle_options.m"
    else
#line 440 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_211_211 = libs__handle_options__STATE_VARIABLE_DumpOptions_207_207;
#line 447 "handle_options.m"
    {
#line 447 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 65);
    }
#line 448 "handle_options.m"
    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
      {
#line 448 "handle_options.m"
        {
#line 448 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 66);
        }
#line 448 "handle_options.m"
        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
          {
#line 449 "handle_options.m"
            {
#line 449 "handle_options.m"
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 68);
            }
#line 448 "handle_options.m"
            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
              {
#line 450 "handle_options.m"
                {
#line 450 "handle_options.m"
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 71);
                }
#line 448 "handle_options.m"
                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                  {
#line 451 "handle_options.m"
                    {
#line 451 "handle_options.m"
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 80);
                    }
#line 448 "handle_options.m"
                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                      {
#line 452 "handle_options.m"
                        {
#line 452 "handle_options.m"
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 82);
                        }
#line 448 "handle_options.m"
                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                          {
#line 453 "handle_options.m"
                            {
#line 453 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 83);
                            }
#line 448 "handle_options.m"
                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                              {
#line 454 "handle_options.m"
                                {
#line 454 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 98);
                                }
#line 448 "handle_options.m"
                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                  {
#line 455 "handle_options.m"
                                    {
#line 455 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 99);
                                    }
#line 448 "handle_options.m"
                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                      {
#line 456 "handle_options.m"
                                        {
#line 456 "handle_options.m"
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 100);
                                        }
#line 448 "handle_options.m"
                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                          {
#line 457 "handle_options.m"
                                            {
#line 457 "handle_options.m"
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 102);
                                            }
#line 448 "handle_options.m"
                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                              {
#line 458 "handle_options.m"
                                                {
#line 458 "handle_options.m"
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 103);
                                                }
#line 448 "handle_options.m"
                                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                  {
#line 459 "handle_options.m"
                                                    {
#line 459 "handle_options.m"
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 105);
                                                    }
#line 448 "handle_options.m"
                                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                      {
#line 460 "handle_options.m"
                                                        {
#line 460 "handle_options.m"
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 108);
                                                        }
#line 448 "handle_options.m"
                                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                          {
#line 461 "handle_options.m"
                                                            {
#line 461 "handle_options.m"
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 109);
                                                            }
#line 448 "handle_options.m"
                                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                              {
#line 462 "handle_options.m"
                                                                {
#line 462 "handle_options.m"
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 110);
                                                                }
#line 448 "handle_options.m"
                                                                if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                  {
#line 463 "handle_options.m"
                                                                    {
#line 463 "handle_options.m"
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 112);
                                                                    }
#line 448 "handle_options.m"
                                                                    if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                      {
#line 464 "handle_options.m"
                                                                        {
#line 464 "handle_options.m"
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 115);
                                                                        }
#line 448 "handle_options.m"
                                                                        if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                          {
#line 465 "handle_options.m"
                                                                            {
#line 465 "handle_options.m"
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 116);
                                                                            }
#line 448 "handle_options.m"
                                                                            if (!(libs__handle_options__succeeded))
#line 448 "handle_options.m"
                                                                              {
#line 466 "handle_options.m"
                                                                                {
#line 466 "handle_options.m"
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 117);
                                                                                }
#line 448 "handle_options.m"
                                                                                if (!(libs__handle_options__succeeded))
#line 467 "handle_options.m"
                                                                                  {
#line 467 "handle_options.m"
                                                                                    {
#line 467 "handle_options.m"
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, (MR_Char) 122);
                                                                                    }
#line 467 "handle_options.m"
                                                                                  }
#line 448 "handle_options.m"
                                                                              }
#line 448 "handle_options.m"
                                                                          }
#line 448 "handle_options.m"
                                                                      }
#line 448 "handle_options.m"
                                                                  }
#line 448 "handle_options.m"
                                                              }
#line 448 "handle_options.m"
                                                          }
#line 448 "handle_options.m"
                                                      }
#line 448 "handle_options.m"
                                                  }
#line 448 "handle_options.m"
                                              }
#line 448 "handle_options.m"
                                          }
#line 448 "handle_options.m"
                                      }
#line 448 "handle_options.m"
                                  }
#line 448 "handle_options.m"
                              }
#line 448 "handle_options.m"
                          }
#line 448 "handle_options.m"
                      }
#line 448 "handle_options.m"
                  }
#line 448 "handle_options.m"
              }
#line 448 "handle_options.m"
          }
#line 448 "handle_options.m"
      }
#line 468 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 468 "handle_options.m"
      {
#line 469 "handle_options.m"
        libs__handle_options__V_234_234 = (MR_Char) 120;
#line 469 "handle_options.m"
        {
#line 469 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_211_211, libs__handle_options__V_234_234);
        }
#line 469 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 468 "handle_options.m"
      }
#line 472 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 471 "handle_options.m"
      {
#line 471 "handle_options.m"
        {
#line 471 "handle_options.m"
          libs__handle_options__STATE_VARIABLE_DumpOptions_235_235 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_211_211);
        }
#line 471 "handle_options.m"
      }
#line 472 "handle_options.m"
    else
#line 471 "handle_options.m"
      libs__handle_options__STATE_VARIABLE_DumpOptions_235_235 = libs__handle_options__STATE_VARIABLE_DumpOptions_211_211;
#line 475 "handle_options.m"
    {
#line 475 "handle_options.m"
      libs__handle_options__V_238_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_238_238, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 475 "handle_options.m"
      MR_hl_field(MR_mktag(3), libs__handle_options__V_238_238, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_235_235));
#line 475 "handle_options.m"
    }
#line 475 "handle_options.m"
    {
#line 475 "handle_options.m"
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 146)), ((MR_Box) (libs__handle_options__V_238_238)), libs__handle_options__STATE_VARIABLE_OptionTable_199_199, &libs__handle_options__STATE_VARIABLE_OptionTable_239_239);
    }
#line 478 "handle_options.m"
    {
#line 478 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 509)), &libs__handle_options__conv16_C_CompilerType0_85);
    }
#line 478 "handle_options.m"
    libs__handle_options__C_CompilerType0_85 = ((MR_Word) libs__handle_options__conv16_C_CompilerType0_85);
#line 480 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__C_CompilerType0_85)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_85, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 480 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 480 "handle_options.m"
      {
#line 480 "handle_options.m"
        libs__handle_options__C_CompilerTypeStr_86 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__C_CompilerType0_85, (MR_Integer) 1)));
#line 481 "handle_options.m"
        {
#line 481 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_86, &libs__handle_options__C_CompilerTypePrime_87);
        }
#line 480 "handle_options.m"
      }
#line 484 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 483 "handle_options.m"
      {
#line 483 "handle_options.m"
        *libs__handle_options__C_CompilerType_34 = libs__handle_options__C_CompilerTypePrime_87;
#line 483 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_242_242 = libs__handle_options__STATE_VARIABLE_Errors_201_201;
#line 483 "handle_options.m"
      }
#line 484 "handle_options.m"
    else
#line 485 "handle_options.m"
      {
#line 485 "handle_options.m"
        *libs__handle_options__C_CompilerType_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "handle_options.m"
        {
#line 486 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--c-compiler-type\'\n\t(must be \140gcc\', \140clang\', \'msvc\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_201_201, &libs__handle_options__STATE_VARIABLE_Errors_242_242);
        }
#line 485 "handle_options.m"
      }
#line 491 "handle_options.m"
    {
#line 491 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 510)), &libs__handle_options__conv17_CSharp_CompilerType0_88);
    }
#line 491 "handle_options.m"
    libs__handle_options__CSharp_CompilerType0_88 = ((MR_Word) libs__handle_options__conv17_CSharp_CompilerType0_88);
#line 493 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__CSharp_CompilerType0_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_88, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 493 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 493 "handle_options.m"
      {
#line 493 "handle_options.m"
        libs__handle_options__CSharp_CompilerTypeStr_89 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__CSharp_CompilerType0_88, (MR_Integer) 1)));
#line 494 "handle_options.m"
        {
#line 494 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_89, &libs__handle_options__CSharp_CompilerTypePrime_90);
        }
#line 493 "handle_options.m"
      }
#line 498 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 497 "handle_options.m"
      {
#line 497 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_35 = libs__handle_options__CSharp_CompilerTypePrime_90;
#line 497 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_247_247 = libs__handle_options__STATE_VARIABLE_Errors_242_242;
#line 497 "handle_options.m"
      }
#line 498 "handle_options.m"
    else
#line 499 "handle_options.m"
      {
#line 499 "handle_options.m"
        *libs__handle_options__CSharp_CompilerType_35 = (MR_Integer) 2;
#line 500 "handle_options.m"
        {
#line 500 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--csharp-compiler-type\'\n\t(must be \140microsoft\', \140mono\', or \140unknown\').", libs__handle_options__STATE_VARIABLE_Errors_242_242, &libs__handle_options__STATE_VARIABLE_Errors_247_247);
        }
#line 499 "handle_options.m"
      }
#line 506 "handle_options.m"
    {
#line 506 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 408)), &libs__handle_options__conv18_ReuseConstraint0_91);
    }
#line 506 "handle_options.m"
    libs__handle_options__ReuseConstraint0_91 = ((MR_Word) libs__handle_options__conv18_ReuseConstraint0_91);
#line 507 "handle_options.m"
    {
#line 507 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 409)), &libs__handle_options__conv19_ReuseConstraintArg0_92);
    }
#line 507 "handle_options.m"
    libs__handle_options__ReuseConstraintArg0_92 = ((MR_Word) libs__handle_options__conv19_ReuseConstraintArg0_92);
#line 510 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__ReuseConstraint0_91)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_91, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 510 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 510 "handle_options.m"
      {
#line 510 "handle_options.m"
        libs__handle_options__ReuseConstraintStr_93 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__ReuseConstraint0_91, (MR_Integer) 1)));
#line 511 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ReuseConstraintArg0_92)) == (MR_mktag((MR_Integer) 2)));
#line 511 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 511 "handle_options.m"
          {
#line 511 "handle_options.m"
            libs__handle_options__ReuseConstraintArgNum_94 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__ReuseConstraintArg0_92, (MR_Integer) 0)));
#line 512 "handle_options.m"
            {
#line 512 "handle_options.m"
              libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_93, libs__handle_options__ReuseConstraintArgNum_94, &libs__handle_options__ReuseStrategyPrime_95);
            }
#line 511 "handle_options.m"
          }
#line 510 "handle_options.m"
      }
#line 516 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 515 "handle_options.m"
      {
#line 515 "handle_options.m"
        *libs__handle_options__ReuseStrategy_36 = libs__handle_options__ReuseStrategyPrime_95;
#line 515 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_253_253 = libs__handle_options__STATE_VARIABLE_Errors_247_247;
#line 515 "handle_options.m"
      }
#line 516 "handle_options.m"
    else
#line 517 "handle_options.m"
      {
#line 517 "handle_options.m"
        *libs__handle_options__ReuseStrategy_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "handle_options.m"
        {
#line 518 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--structure-reuse-constraint\'\n\t(must be \140same_cons_id\' or \140within_n_cells_difference\').", libs__handle_options__STATE_VARIABLE_Errors_247_247, &libs__handle_options__STATE_VARIABLE_Errors_253_253);
        }
#line 517 "handle_options.m"
      }
#line 524 "handle_options.m"
    {
#line 524 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, libs__handle_options__STATE_VARIABLE_OptionTable_239_239, ((MR_Box) ((MR_Integer) 520)), &libs__handle_options__conv20_DotNetLibVersionOpt_96);
    }
#line 524 "handle_options.m"
    libs__handle_options__DotNetLibVersionOpt_96 = ((MR_Word) libs__handle_options__conv20_DotNetLibVersionOpt_96);
#line 526 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__DotNetLibVersionOpt_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_96, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 526 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 526 "handle_options.m"
      {
#line 526 "handle_options.m"
        libs__handle_options__DotNetLibVersionStr_97 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__DotNetLibVersionOpt_96, (MR_Integer) 1)));
#line 527 "handle_options.m"
        libs__handle_options__IsSep_98 = (MR_Word) &libs__handle_options_scalar_common_1[14];
#line 528 "handle_options.m"
        {
#line 528 "handle_options.m"
          libs__handle_options__V_258_258 = mercury__string__words_separator_2_f_0(libs__handle_options__IsSep_98, libs__handle_options__DotNetLibVersionStr_97);
        }
#line 528 "handle_options.m"
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_258_258)) == (MR_mktag((MR_Integer) 1)));
#line 528 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 528 "handle_options.m"
          {
#line 528 "handle_options.m"
            libs__handle_options__Mj_99 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_258_258, (MR_Integer) 0)));
#line 528 "handle_options.m"
            libs__handle_options__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_258_258, (MR_Integer) 1)));
#line 528 "handle_options.m"
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_259_259)) == (MR_mktag((MR_Integer) 1)));
#line 528 "handle_options.m"
            if (libs__handle_options__succeeded)
#line 528 "handle_options.m"
              {
#line 528 "handle_options.m"
                libs__handle_options__Mn_100 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_259_259, (MR_Integer) 0)));
#line 528 "handle_options.m"
                libs__handle_options__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_259_259, (MR_Integer) 1)));
#line 528 "handle_options.m"
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 528 "handle_options.m"
                if (libs__handle_options__succeeded)
#line 528 "handle_options.m"
                  {
#line 528 "handle_options.m"
                    libs__handle_options__Bu_101 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_260_260, (MR_Integer) 0)));
#line 528 "handle_options.m"
                    libs__handle_options__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_260_260, (MR_Integer) 1)));
#line 528 "handle_options.m"
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_261_261)) == (MR_mktag((MR_Integer) 1)));
#line 528 "handle_options.m"
                    if (libs__handle_options__succeeded)
#line 528 "handle_options.m"
                      {
#line 528 "handle_options.m"
                        libs__handle_options__Rv_102 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__V_261_261, (MR_Integer) 0)));
#line 528 "handle_options.m"
                        libs__handle_options__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_261_261, (MR_Integer) 1)));
#line 528 "handle_options.m"
                        libs__handle_options__succeeded = (libs__handle_options__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "handle_options.m"
                        if (libs__handle_options__succeeded)
#line 526 "handle_options.m"
                          {
#line 529 "handle_options.m"
                            {
#line 529 "handle_options.m"
                              libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mj_99, &libs__handle_options__Major_103);
                            }
#line 526 "handle_options.m"
                            if (libs__handle_options__succeeded)
#line 526 "handle_options.m"
                              {
#line 530 "handle_options.m"
                                {
#line 530 "handle_options.m"
                                  libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Mn_100, &libs__handle_options__Minor_104);
                                }
#line 526 "handle_options.m"
                                if (libs__handle_options__succeeded)
#line 526 "handle_options.m"
                                  {
#line 531 "handle_options.m"
                                    {
#line 531 "handle_options.m"
                                      libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Bu_101, &libs__handle_options__Build_105);
                                    }
#line 526 "handle_options.m"
                                    if (libs__handle_options__succeeded)
#line 532 "handle_options.m"
                                      {
#line 532 "handle_options.m"
                                        libs__handle_options__succeeded = mercury__string__to_int_2_p_0(libs__handle_options__Rv_102, &libs__handle_options__Revision_106);
                                      }
#line 526 "handle_options.m"
                                  }
#line 526 "handle_options.m"
                              }
#line 526 "handle_options.m"
                          }
#line 528 "handle_options.m"
                      }
#line 528 "handle_options.m"
                  }
#line 528 "handle_options.m"
              }
#line 528 "handle_options.m"
          }
#line 526 "handle_options.m"
      }
#line 536 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 534 "handle_options.m"
      {
#line 534 "handle_options.m"
        MR_Word libs__handle_options__ILVersion_107;

#line 534 "handle_options.m"
        {
#line 534 "handle_options.m"
          libs__handle_options__ILVersion_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 0) = ((MR_Box) (libs__handle_options__Major_103));
#line 534 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 1) = ((MR_Box) (libs__handle_options__Minor_104));
#line 534 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 2) = ((MR_Box) (libs__handle_options__Build_105));
#line 534 "handle_options.m"
          MR_hl_field(MR_mktag(0), libs__handle_options__ILVersion_107, 3) = ((MR_Box) (libs__handle_options__Revision_106));
#line 534 "handle_options.m"
        }
#line 535 "handle_options.m"
        {
#line 535 "handle_options.m"
          MR_Word base;
#line 535 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "handle_options.m"
          *libs__handle_options__MaybeILVersion_37 = base;
#line 535 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ILVersion_107));
#line 535 "handle_options.m"
        }
#line 535 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_264_264 = libs__handle_options__STATE_VARIABLE_Errors_253_253;
#line 535 "handle_options.m"
        *libs__handle_options__STATE_VARIABLE_OptionTable_124 = libs__handle_options__STATE_VARIABLE_OptionTable_239_239;
#line 534 "handle_options.m"
      }
#line 536 "handle_options.m"
    else
#line 537 "handle_options.m"
      {
#line 537 "handle_options.m"
        *libs__handle_options__MaybeILVersion_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "handle_options.m"
        {
#line 538 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--dotnet-library-version\'\n\t(must be of the form \140MajorNum.MinorNum.BuildNum.RevisionNum\').", libs__handle_options__STATE_VARIABLE_Errors_253_253, &libs__handle_options__STATE_VARIABLE_Errors_264_264);
        }
#line 544 "handle_options.m"
        {
#line 544 "handle_options.m"
          mercury__map__det_update_4_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, ((MR_Box) ((MR_Integer) 96)), ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]))), libs__handle_options__STATE_VARIABLE_OptionTable_239_239, libs__handle_options__STATE_VARIABLE_OptionTable_124);
        }
#line 537 "handle_options.m"
      }
#line 547 "handle_options.m"
    {
#line 547 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 671)), &libs__handle_options__conv21_FeedbackFile0_108);
    }
#line 547 "handle_options.m"
    libs__handle_options__FeedbackFile0_108 = ((MR_Word) libs__handle_options__conv21_FeedbackFile0_108);
#line 549 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__FeedbackFile0_108)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_108, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 549 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 549 "handle_options.m"
      {
#line 549 "handle_options.m"
        libs__handle_options__FeedbackFile_109 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__FeedbackFile0_108, (MR_Integer) 1)));
#line 550 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_109, (MR_String) "") == 0);
#line 550 "handle_options.m"
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
#line 549 "handle_options.m"
      }
#line 562 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 552 "handle_options.m"
      {
#line 552 "handle_options.m"
        MR_Word libs__handle_options__FeedbackReadResult_110;

#line 552 "handle_options.m"
        {
#line 552 "handle_options.m"
          mdbcomp__feedback__read_feedback_file_4_p_0(libs__handle_options__FeedbackFile_109, &libs__handle_options__FeedbackReadResult_110);
        }
#line 556 "handle_options.m"
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_110)) == (MR_mktag((MR_Integer) 1))))
#line 557 "handle_options.m"
          {
#line 557 "handle_options.m"
            MR_Word libs__handle_options__Error_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_110, (MR_Integer) 0)));
#line 557 "handle_options.m"
            MR_String libs__handle_options__ErrorMessage_113;

#line 558 "handle_options.m"
            {
#line 558 "handle_options.m"
              mdbcomp__feedback__read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_109, libs__handle_options__Error_112, &libs__handle_options__ErrorMessage_113);
            }
#line 559 "handle_options.m"
            {
#line 559 "handle_options.m"
              libs__handle_options__add_error_3_p_0(libs__handle_options__ErrorMessage_113, libs__handle_options__STATE_VARIABLE_Errors_264_264, &libs__handle_options__STATE_VARIABLE_Errors_277_277);
            }
#line 560 "handle_options.m"
            *libs__handle_options__MaybeFeedbackInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "handle_options.m"
          }
#line 556 "handle_options.m"
        else
#line 554 "handle_options.m"
          {
#line 554 "handle_options.m"
            MR_Word libs__handle_options__FeedbackInfo_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_110, (MR_Integer) 0)));

#line 555 "handle_options.m"
            {
#line 555 "handle_options.m"
              MR_Word base;
#line 555 "handle_options.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "handle_options.m"
              *libs__handle_options__MaybeFeedbackInfo_38 = base;
#line 555 "handle_options.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_111));
#line 555 "handle_options.m"
            }
#line 555 "handle_options.m"
            libs__handle_options__STATE_VARIABLE_Errors_277_277 = libs__handle_options__STATE_VARIABLE_Errors_264_264;
#line 554 "handle_options.m"
          }
#line 552 "handle_options.m"
      }
#line 562 "handle_options.m"
    else
#line 564 "handle_options.m"
      {
#line 564 "handle_options.m"
        *libs__handle_options__MaybeFeedbackInfo_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_277_277 = libs__handle_options__STATE_VARIABLE_Errors_264_264;
#line 564 "handle_options.m"
      }
#line 566 "handle_options.m"
    {
#line 566 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 653)), &libs__handle_options__conv22_HostEnvType0_114);
    }
#line 566 "handle_options.m"
    libs__handle_options__HostEnvType0_114 = ((MR_Word) libs__handle_options__conv22_HostEnvType0_114);
#line 568 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__HostEnvType0_114)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_114, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 568 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 568 "handle_options.m"
      {
#line 568 "handle_options.m"
        libs__handle_options__HostEnvTypeStr_115 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__HostEnvType0_114, (MR_Integer) 1)));
#line 569 "handle_options.m"
        {
#line 569 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_115, &libs__handle_options__HostEnvTypePrime_116);
        }
#line 568 "handle_options.m"
      }
#line 572 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 571 "handle_options.m"
      {
#line 571 "handle_options.m"
        *libs__handle_options__HostEnvType_39 = libs__handle_options__HostEnvTypePrime_116;
#line 571 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_280_280 = libs__handle_options__STATE_VARIABLE_Errors_277_277;
#line 571 "handle_options.m"
      }
#line 572 "handle_options.m"
    else
#line 573 "handle_options.m"
      {
#line 573 "handle_options.m"
        *libs__handle_options__HostEnvType_39 = (MR_Integer) 0;
#line 574 "handle_options.m"
        {
#line 574 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--host-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_277_277, &libs__handle_options__STATE_VARIABLE_Errors_280_280);
        }
#line 573 "handle_options.m"
      }
#line 579 "handle_options.m"
    {
#line 579 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 654)), &libs__handle_options__conv23_SystemEnvType0_117);
    }
#line 579 "handle_options.m"
    libs__handle_options__SystemEnvType0_117 = ((MR_Word) libs__handle_options__conv23_SystemEnvType0_117);
#line 581 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__SystemEnvType0_117)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_117, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 581 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 581 "handle_options.m"
      {
#line 581 "handle_options.m"
        libs__handle_options__SystemEnvTypeStr_118 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__SystemEnvType0_117, (MR_Integer) 1)));
#line 582 "handle_options.m"
        libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_118, (MR_String) "") == 0);
#line 584 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 583 "handle_options.m"
          {
#line 583 "handle_options.m"
            libs__handle_options__SystemEnvTypePrime_119 = *libs__handle_options__HostEnvType_39;
#line 583 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 583 "handle_options.m"
          }
#line 584 "handle_options.m"
        else
#line 585 "handle_options.m"
          {
#line 585 "handle_options.m"
            libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_118, &libs__handle_options__SystemEnvTypePrime_119);
          }
#line 581 "handle_options.m"
      }
#line 589 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 588 "handle_options.m"
      {
#line 588 "handle_options.m"
        *libs__handle_options__SystemEnvType_40 = libs__handle_options__SystemEnvTypePrime_119;
#line 588 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_285_285 = libs__handle_options__STATE_VARIABLE_Errors_280_280;
#line 588 "handle_options.m"
      }
#line 589 "handle_options.m"
    else
#line 590 "handle_options.m"
      {
#line 590 "handle_options.m"
        *libs__handle_options__SystemEnvType_40 = (MR_Integer) 0;
#line 591 "handle_options.m"
        {
#line 591 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--system-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_280_280, &libs__handle_options__STATE_VARIABLE_Errors_285_285);
        }
#line 590 "handle_options.m"
      }
#line 596 "handle_options.m"
    {
#line 596 "handle_options.m"
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_299_299, libs__handle_options__TypeCtorInfo_300_300, *libs__handle_options__STATE_VARIABLE_OptionTable_124, ((MR_Box) ((MR_Integer) 655)), &libs__handle_options__conv24_TargetEnvType0_120);
    }
#line 596 "handle_options.m"
    libs__handle_options__TargetEnvType0_120 = ((MR_Word) libs__handle_options__conv24_TargetEnvType0_120);
#line 598 "handle_options.m"
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__TargetEnvType0_120)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 598 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 598 "handle_options.m"
      {
#line 598 "handle_options.m"
        libs__handle_options__TargetEnvTypeStr_121 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__TargetEnvType0_120, (MR_Integer) 1)));
#line 599 "handle_options.m"
        {
#line 599 "handle_options.m"
          libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_121, &libs__handle_options__TargetEnvTypePrime_122);
        }
#line 598 "handle_options.m"
      }
#line 602 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 601 "handle_options.m"
      {
#line 601 "handle_options.m"
        *libs__handle_options__TargetEnvType_41 = libs__handle_options__TargetEnvTypePrime_122;
#line 601 "handle_options.m"
        libs__handle_options__STATE_VARIABLE_Errors_290_290 = libs__handle_options__STATE_VARIABLE_Errors_285_285;
#line 601 "handle_options.m"
      }
#line 602 "handle_options.m"
    else
#line 603 "handle_options.m"
      {
#line 603 "handle_options.m"
        *libs__handle_options__TargetEnvType_41 = (MR_Integer) 0;
#line 604 "handle_options.m"
        {
#line 604 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "Invalid argument to option \140--target-env-type\'\n\t(must be \140posix\', \140cygwin\', \140msys\' or \140windows\').", libs__handle_options__STATE_VARIABLE_Errors_285_285, &libs__handle_options__STATE_VARIABLE_Errors_290_290);
        }
#line 603 "handle_options.m"
      }
#line 610 "handle_options.m"
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_39 == (MR_Integer) 0);
#line 610 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 610 "handle_options.m"
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_35 == (MR_Integer) 0);
#line 615 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 611 "handle_options.m"
      {
#line 611 "handle_options.m"
        {
#line 611 "handle_options.m"
          libs__handle_options__add_error_3_p_0((MR_String) "\140--host-env-type posix\140 is incompatible with\n\140--csharp-compiler-type microsoft\'.", libs__handle_options__STATE_VARIABLE_Errors_290_290, libs__handle_options__STATE_VARIABLE_Errors_126);
#line 611 "handle_options.m"
          return;
        }
#line 611 "handle_options.m"
      }
#line 615 "handle_options.m"
    else
#line 611 "handle_options.m"
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

#line 212 "handle_options.m"
        {
#line 212 "handle_options.m"
          MR_Word base;
#line 212 "handle_options.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "handle_options.m"
          *libs__handle_options__HeadVar__2_2 = base;
#line 212 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__ErrorMessage_6));
#line 212 "handle_options.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "handle_options.m"
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

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__process_given_options_6_p_0_5(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
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
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_3(
#line 190 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__process_given_options_6_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 190 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1));
#line 190 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2));
#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr);
#line 190 "handle_options.m"
      return;
    }
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
}

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__process_given_options_6_p_0_4(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 190 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    struct libs__handle_options__process_given_options_6_p_0_4_env_0_s libs__handle_options__env;

#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont = libs__handle_options__cont;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__process_given_options_6_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__process_given_options_6_p_0_3, &libs__handle_options__env);
      }
#line 190 "handle_options.m"
    }
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
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

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2840 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr);
#line 2840 "handle_options.m"
      return;
    }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
}

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__grade_directory_component_2_p_0_2(
#line 2840 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__grade_directory_component_2_p_0_2_env_0_s libs__handle_options__env;

#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2840 "handle_options.m"
      {
#line 2840 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__grade_directory_component_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__grade_directory_component_2_p_0_1, &libs__handle_options__env);
      }
#line 2840 "handle_options.m"
    }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
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
#line 2796 "handle_options.m"
  {
#line 2796 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2796 "handle_options.m"
    MR_String libs__handle_options__Grade0_5;
#line 2796 "handle_options.m"
    MR_Word libs__handle_options__Options_14;
#line 2796 "handle_options.m"
    MR_Word libs__handle_options__Components_15;
#line 2796 "handle_options.m"
    MR_Word libs__handle_options__V_30_30;
#line 2807 "handle_options.m"
    MR_String libs__handle_options__LeftPart_7;
#line 2807 "handle_options.m"
    MR_String libs__handle_options__RightPart_9;
#line 2802 "handle_options.m"
    MR_Integer libs__handle_options__PicRegIndex_6;
#line 2802 "handle_options.m"
    MR_String libs__handle_options__RightPart0_8;
#line 2802 "handle_options.m"
    MR_String libs__handle_options__V_11_11;

#line 2812 "handle_options.m"
    {
#line 2812 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_14);
    }
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      libs__handle_options__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 1) = ((MR_Box) (libs__handle_options__grade_directory_component_2_p_0_2));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_30_30, 3) = ((MR_Box) (libs__handle_options__Options_14));
#line 2840 "handle_options.m"
    }
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_30_30, &libs__handle_options__Components_15);
    }
#line 2817 "handle_options.m"
    if ((libs__handle_options__Components_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2816 "handle_options.m"
      libs__handle_options__Grade0_5 = (MR_String) "none";
#line 2817 "handle_options.m"
    else
#line 2819 "handle_options.m"
      {
#line 2819 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_15, &libs__handle_options__Grade0_5);
      }
#line 2802 "handle_options.m"
    {
#line 2802 "handle_options.m"
      libs__handle_options__succeeded = mercury__string__sub_string_search_3_p_0(libs__handle_options__Grade0_5, (MR_String) ".picreg", &libs__handle_options__PicRegIndex_6);
    }
#line 2802 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2802 "handle_options.m"
      {
#line 2803 "handle_options.m"
        {
#line 2803 "handle_options.m"
          mercury__string__split_4_p_0(libs__handle_options__Grade0_5, libs__handle_options__PicRegIndex_6, &libs__handle_options__LeftPart_7, &libs__handle_options__RightPart0_8);
        }
#line 2804 "handle_options.m"
        libs__handle_options__V_11_11 = (MR_String) ".picreg";
#line 2804 "handle_options.m"
        {
#line 2804 "handle_options.m"
          libs__handle_options__succeeded = mercury__string__append_3_p_1(libs__handle_options__V_11_11, &libs__handle_options__RightPart_9, libs__handle_options__RightPart0_8);
        }
#line 2802 "handle_options.m"
      }
#line 2807 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2806 "handle_options.m"
      {
#line 2806 "handle_options.m"
        *libs__handle_options__Grade_4 = mercury__string__f_43_43_2_f_0(libs__handle_options__LeftPart_7, libs__handle_options__RightPart_9);
      }
#line 2807 "handle_options.m"
    else
#line 2808 "handle_options.m"
      *libs__handle_options__Grade_4 = libs__handle_options__Grade0_5;
#line 2796 "handle_options.m"
  }
#line 80 "handle_options.m"
}

#line 2768 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_4(
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2768 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3,
#line 2768 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_4,
#line 2768 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_5)
#line 2768 "handle_options.m"
{
#line 2768 "handle_options.m"
  {
#line 2768 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2768 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__3_25;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options__conv3_HeadVar__5_27;

#line 2768 "handle_options.m"
    {
#line 2768 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_grade_option__2768__1_5_p_0(((MR_String) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv4_HeadVar__3_25, ((MR_Word) libs__handle_options__wrapper_arg_4), &libs__handle_options__conv3_HeadVar__5_27);
    }
#line 2768 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2768 "handle_options.m"
      {
#line 2768 "handle_options.m"
        *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv4_HeadVar__3_25));
#line 2768 "handle_options.m"
        *libs__handle_options__wrapper_arg_5 = ((MR_Box) (libs__handle_options__conv3_HeadVar__5_27));
#line 2768 "handle_options.m"
        libs__handle_options__succeeded = MR_TRUE;
#line 2768 "handle_options.m"
      }
#line 2768 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2768 "handle_options.m"
  }
#line 2768 "handle_options.m"
}

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_3(
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 3138 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 3138 "handle_options.m"
{
#line 3138 "handle_options.m"
  {
#line 3138 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 3138 "handle_options.m"
    MR_Word libs__handle_options__conv1_HeadVar__3_14;

#line 3138 "handle_options.m"
    {
#line 3138 "handle_options.m"
      libs__handle_options__IntroducedFrom__pred__reset_grade_options__3138__1_3_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), &libs__handle_options__conv1_HeadVar__3_14);
    }
#line 3138 "handle_options.m"
    *libs__handle_options__wrapper_arg_3 = ((MR_Box) (libs__handle_options__conv1_HeadVar__3_14));
#line 3138 "handle_options.m"
  }
#line 3138 "handle_options.m"
}

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_1(
#line 3138 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 3138 "handle_options.m"
{
#line 3138 "handle_options.m"
  {
#line 3138 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 3138 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1));
#line 3138 "handle_options.m"
    {
#line 3138 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr);
#line 3138 "handle_options.m"
      return;
    }
#line 3138 "handle_options.m"
  }
#line 3138 "handle_options.m"
}

#line 3138 "handle_options.m"
static void MR_CALL 
libs__handle_options__convert_grade_option_3_p_0_2(
#line 3138 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 3138 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 3138 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 3138 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 3138 "handle_options.m"
{
#line 3138 "handle_options.m"
  {
#line 3138 "handle_options.m"
    struct libs__handle_options__convert_grade_option_3_p_0_2_env_0_s libs__handle_options__env;

#line 3138 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 3138 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont = libs__handle_options__cont;
#line 3138 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 3138 "handle_options.m"
    {
#line 3138 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 3138 "handle_options.m"
      {
#line 3138 "handle_options.m"
        libs__handle_options__grade_start_values_1_p_0(&(libs__handle_options__env).libs__handle_options__convert_grade_option_3_p_0_2_env_0__conv0_HeadVar__1_1, libs__handle_options__convert_grade_option_3_p_0_1, &libs__handle_options__env);
      }
#line 3138 "handle_options.m"
    }
#line 3138 "handle_options.m"
  }
#line 3138 "handle_options.m"
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
#line 2764 "handle_options.m"
  {
#line 2764 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_39_39;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__TypeCtorInfo_42_42;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_43_43;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__TypeInfo_44_44;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__Options1_7;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__Components_8;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__NoComps_9;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__V_22_22;
#line 2764 "handle_options.m"
    MR_Word libs__handle_options__Chars_67;
#line 3138 "handle_options.m"
    MR_Box libs__handle_options__conv2_Options1_7;
#line 2768 "handle_options.m"
    MR_Word libs__handle_options___FinalComps_21;
#line 2768 "handle_options.m"
    MR_Box libs__handle_options__conv6_Options_6;
#line 2768 "handle_options.m"
    MR_Box libs__handle_options__conv5__FinalComps_21;

#line 3138 "handle_options.m"
    {
#line 3138 "handle_options.m"
      mercury__solutions__aggregate_4_p_0((MR_Word) &libs__handle_options_scalar_common_1[1], (MR_Word) &libs__handle_options_scalar_common_1[0], (MR_Word) &libs__handle_options_scalar_common_1[7], (MR_Word) &libs__handle_options_scalar_common_1[8], ((MR_Box) (libs__handle_options__Options0_5)), &libs__handle_options__conv2_Options1_7);
    }
#line 3138 "handle_options.m"
    libs__handle_options__Options1_7 = ((MR_Word) libs__handle_options__conv2_Options1_7);
#line 3180 "handle_options.m"
    {
#line 3180 "handle_options.m"
      mercury__string__to_char_list_2_p_0(libs__handle_options__GradeString_4, &libs__handle_options__Chars_67);
    }
#line 3181 "handle_options.m"
    {
#line 3181 "handle_options.m"
      libs__handle_options__succeeded = libs__handle_options__split_grade_string_2_2_p_0(libs__handle_options__Chars_67, &libs__handle_options__Components_8);
    }
#line 2764 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 2764 "handle_options.m"
      {
#line 16959 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_39_39 = (MR_Word) &libs__handle_options__libs__handle_options__type_ctor_info_grade_component_0;
#line 2767 "handle_options.m"
        {
#line 2767 "handle_options.m"
          mercury__set__init_1_p_0(libs__handle_options__TypeCtorInfo_39_39, &libs__handle_options__NoComps_9);
        }
#line 2768 "handle_options.m"
        libs__handle_options__V_22_22 = (MR_Word) &libs__handle_options_scalar_common_1[9];
#line 16968 "libs.handle_options.c"
        libs__handle_options__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16970 "libs.handle_options.c"
        libs__handle_options__TypeInfo_43_43 = (MR_Word) &libs__handle_options_scalar_common_1[0];
#line 16972 "libs.handle_options.c"
        libs__handle_options__TypeInfo_44_44 = (MR_Word) &libs__handle_options_scalar_common_2[0];
#line 2768 "handle_options.m"
        {
#line 2768 "handle_options.m"
          libs__handle_options__succeeded = mercury__list__foldl2_6_p_4(libs__handle_options__TypeCtorInfo_42_42, libs__handle_options__TypeInfo_43_43, libs__handle_options__TypeInfo_44_44, libs__handle_options__V_22_22, libs__handle_options__Components_8, ((MR_Box) (libs__handle_options__Options1_7)), &libs__handle_options__conv6_Options_6, ((MR_Box) (libs__handle_options__NoComps_9)), &libs__handle_options__conv5__FinalComps_21);
        }
#line 2768 "handle_options.m"
        if (libs__handle_options__succeeded)
#line 2768 "handle_options.m"
          {
#line 2768 "handle_options.m"
            *libs__handle_options__Options_6 = ((MR_Word) libs__handle_options__conv6_Options_6);
#line 2768 "handle_options.m"
            libs__handle_options___FinalComps_21 = ((MR_Word) libs__handle_options__conv5__FinalComps_21);
#line 2768 "handle_options.m"
            libs__handle_options__succeeded = MR_TRUE;
#line 2768 "handle_options.m"
          }
#line 2764 "handle_options.m"
      }
#line 2764 "handle_options.m"
    return libs__handle_options__succeeded;
#line 2764 "handle_options.m"
  }
#line 75 "handle_options.m"
}

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_1(
#line 2840 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__compute_grade_2_p_0_2_env_0_s *) libs__handle_options__env_ptr_arg;

#line 2840 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16));
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr);
#line 2840 "handle_options.m"
      return;
    }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
}

#line 2840 "handle_options.m"
static void MR_CALL 
libs__handle_options__compute_grade_2_p_0_2(
#line 2840 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2840 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 2840 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 2840 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 2840 "handle_options.m"
{
#line 2840 "handle_options.m"
  {
#line 2840 "handle_options.m"
    struct libs__handle_options__compute_grade_2_p_0_2_env_0_s libs__handle_options__env;

#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont = libs__handle_options__cont;
#line 2840 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2840 "handle_options.m"
      {
#line 2840 "handle_options.m"
        libs__handle_options__IntroducedFrom__pred__compute_grade_components__2840__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), &(libs__handle_options__env).libs__handle_options__compute_grade_2_p_0_2_env_0__conv0_HeadVar__2_16, libs__handle_options__compute_grade_2_p_0_1, &libs__handle_options__env);
      }
#line 2840 "handle_options.m"
    }
#line 2840 "handle_options.m"
  }
#line 2840 "handle_options.m"
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
#line 2811 "handle_options.m"
  {
#line 2811 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__Options_5;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__Components_6;
#line 2811 "handle_options.m"
    MR_Word libs__handle_options__V_21_21;

#line 2812 "handle_options.m"
    {
#line 2812 "handle_options.m"
      libs__globals__get_options_2_p_0(libs__handle_options__Globals_3, &libs__handle_options__Options_5);
    }
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      libs__handle_options__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[3]));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__compute_grade_2_p_0_2));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2840 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_21_21, 3) = ((MR_Box) (libs__handle_options__Options_5));
#line 2840 "handle_options.m"
    }
#line 2840 "handle_options.m"
    {
#line 2840 "handle_options.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &libs__handle_options_scalar_common_1[2], libs__handle_options__V_21_21, &libs__handle_options__Components_6);
    }
#line 2817 "handle_options.m"
    if ((libs__handle_options__Components_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2816 "handle_options.m"
      *libs__handle_options__Grade_4 = (MR_String) "none";
#line 2817 "handle_options.m"
    else
#line 2819 "handle_options.m"
      {
#line 2819 "handle_options.m"
        libs__handle_options__construct_string_2_p_0(libs__handle_options__Components_6, libs__handle_options__Grade_4);
#line 2819 "handle_options.m"
        return;
      }
#line 2811 "handle_options.m"
  }
#line 71 "handle_options.m"
}

#line 67 "handle_options.m"
void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
#line 67 "handle_options.m"
{
#line 2567 "handle_options.m"
  {
#line 2567 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2567 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2567 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2567 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2567 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2567 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2567 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2571 "handle_options.m"
    {
#line 2571 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2573 "handle_options.m"
    {
#line 2573 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[192])));
#line 2573 "handle_options.m"
    }
#line 2573 "handle_options.m"
    {
#line 2573 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2573 "handle_options.m"
    }
#line 2573 "handle_options.m"
    {
#line 2573 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2573 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2573 "handle_options.m"
    }
#line 2572 "handle_options.m"
    {
#line 2572 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2572 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
#line 2572 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2572 "handle_options.m"
    }
#line 2572 "handle_options.m"
    {
#line 2572 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
#line 2574 "handle_options.m"
    {
#line 2574 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2014 The University of Melbourne\n");
    }
#line 2576 "handle_options.m"
    {
#line 2576 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
#line 2577 "handle_options.m"
    {
#line 2577 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
#line 2578 "handle_options.m"
    {
#line 2578 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
#line 2580 "handle_options.m"
    {
#line 2580 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
#line 2582 "handle_options.m"
    {
#line 2582 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
#line 2584 "handle_options.m"
    {
#line 2584 "handle_options.m"
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
#line 2585 "handle_options.m"
    {
#line 2585 "handle_options.m"
      libs__options__options_help_2_p_0();
#line 2585 "handle_options.m"
      return;
    }
#line 2567 "handle_options.m"
  }
#line 67 "handle_options.m"
}

#line 63 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_2_p_0(void)
#line 63 "handle_options.m"
{
#line 2551 "handle_options.m"
  {
#line 2551 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2551 "handle_options.m"
    MR_Word libs__handle_options__AlreadyPrinted_4;

#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17272 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
#line 2548 "handle_options.m"
X = libs__handle_options__mutable_variable_already_printed_usage;

#line 17288 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
	 libs__handle_options__AlreadyPrinted_4  = X;
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17307 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2563 "handle_options.m"
    if ((libs__handle_options__AlreadyPrinted_4 == (MR_Integer) 0))
#line 2556 "handle_options.m"
      {
#line 2557 "handle_options.m"
        {
#line 2557 "handle_options.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 2558 "handle_options.m"
        {
#line 2558 "handle_options.m"
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[5]));
        }
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17339 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X =  (MR_Integer) 1 ;
		{
#line 2548 "handle_options.m"
libs__handle_options__mutable_variable_already_printed_usage = X;

#line 17356 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2548 "handle_options.m"
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#line 2548 "handle_options.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif

#line 17374 "libs.handle_options.c"

		;}
#undef MR_PROC_LABEL
#line 2548 "handle_options.m"
}
#line 2556 "handle_options.m"
      }
#line 2563 "handle_options.m"
    else
#line 2564 "handle_options.m"
      {
#line 2564 "handle_options.m"
      }
#line 2551 "handle_options.m"
  }
#line 63 "handle_options.m"
}

#line 2537 "handle_options.m"
static void MR_CALL 
libs__handle_options__usage_errors_3_p_0_1(
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 2537 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 2537 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_3)
#line 2537 "handle_options.m"
{
#line 2537 "handle_options.m"
  {
#line 2537 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 2537 "handle_options.m"
    {
#line 2537 "handle_options.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
#line 2537 "handle_options.m"
      return;
    }
#line 2537 "handle_options.m"
  }
#line 2537 "handle_options.m"
}

#line 59 "handle_options.m"
void MR_CALL 
libs__handle_options__usage_errors_3_p_0(
#line 59 "handle_options.m"
  MR_Word libs__handle_options__Errors_4)
#line 59 "handle_options.m"
{
#line 2535 "handle_options.m"
  {
#line 2535 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2535 "handle_options.m"
    MR_String libs__handle_options__ProgName_6;
#line 2535 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2537 "handle_options.m"
    MR_Box libs__handle_options__conv0_STATE_VARIABLE_IO_12_12;

#line 2536 "handle_options.m"
    {
#line 2536 "handle_options.m"
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_6);
    }
#line 2537 "handle_options.m"
    {
#line 2537 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2537 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
#line 2537 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__usage_errors_3_p_0_1));
#line 2537 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2537 "handle_options.m"
      MR_hl_field(MR_mktag(0), libs__handle_options__V_11_11, 3) = ((MR_Box) (libs__handle_options__ProgName_6));
#line 2537 "handle_options.m"
    }
#line 2537 "handle_options.m"
    {
#line 2537 "handle_options.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__handle_options__V_11_11, libs__handle_options__Errors_4, ((MR_Box) ((MR_Integer) 0)), &libs__handle_options__conv0_STATE_VARIABLE_IO_12_12);
    }
#line 2538 "handle_options.m"
    {
#line 2538 "handle_options.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 2539 "handle_options.m"
    {
#line 2539 "handle_options.m"
      libs__handle_options__usage_2_p_0();
#line 2539 "handle_options.m"
      return;
    }
#line 2535 "handle_options.m"
  }
#line 59 "handle_options.m"
}

#line 54 "handle_options.m"
void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
#line 54 "handle_options.m"
{
#line 2541 "handle_options.m"
  {
#line 2541 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 2541 "handle_options.m"
    MR_String libs__handle_options__Version_4;
#line 2541 "handle_options.m"
    MR_String libs__handle_options__Fullarch_5;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__V_8_8;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__V_11_11;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__V_12_12;
#line 2541 "handle_options.m"
    MR_Word libs__handle_options__V_14_14;

#line 2542 "handle_options.m"
    {
#line 2542 "handle_options.m"
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
#line 2544 "handle_options.m"
    {
#line 2544 "handle_options.m"
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_2[3])));
#line 2544 "handle_options.m"
    }
#line 2544 "handle_options.m"
    {
#line 2544 "handle_options.m"
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
#line 2544 "handle_options.m"
    }
#line 2544 "handle_options.m"
    {
#line 2544 "handle_options.m"
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
#line 2544 "handle_options.m"
    }
#line 2544 "handle_options.m"
    {
#line 2544 "handle_options.m"
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
#line 2544 "handle_options.m"
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
#line 2544 "handle_options.m"
    }
#line 2543 "handle_options.m"
    {
#line 2543 "handle_options.m"
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
#line 2543 "handle_options.m"
      return;
    }
#line 2541 "handle_options.m"
  }
#line 54 "handle_options.m"
}

#line 190 "handle_options.m"
static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Box libs__handle_options__wrapper_arg_3,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_4)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    MR_bool libs__handle_options__succeeded;
#line 190 "handle_options.m"
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
#line 190 "handle_options.m"
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
#line 190 "handle_options.m"
    if (libs__handle_options__succeeded)
#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
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
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
#line 190 "handle_options.m"
  void * libs__handle_options__env_ptr_arg)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

#line 190 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
#line 190 "handle_options.m"
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
#line 190 "handle_options.m"
      return;
    }
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
}

#line 190 "handle_options.m"
static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
#line 190 "handle_options.m"
  MR_Box libs__handle_options__closure_arg,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_1,
#line 190 "handle_options.m"
  MR_Box * libs__handle_options__wrapper_arg_2,
#line 190 "handle_options.m"
  MR_Cont libs__handle_options__cont,
#line 190 "handle_options.m"
  void * libs__handle_options__cont_env_ptr)
#line 190 "handle_options.m"
{
#line 190 "handle_options.m"
  {
#line 190 "handle_options.m"
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s libs__handle_options__env;

#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = libs__handle_options__cont;
#line 190 "handle_options.m"
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
#line 190 "handle_options.m"
    {
#line 190 "handle_options.m"
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

#line 190 "handle_options.m"
      {
#line 190 "handle_options.m"
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &libs__handle_options__env);
      }
#line 190 "handle_options.m"
    }
#line 190 "handle_options.m"
  }
#line 190 "handle_options.m"
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
#line 157 "handle_options.m"
        {
#line 157 "handle_options.m"
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 0) = ((MR_Box) (libs__handle_options__ErrorcheckOnly_30));
#line 157 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_68_68, 1) = ((MR_Box) (libs__handle_options__V_69_69));
#line 157 "handle_options.m"
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
#line 156 "handle_options.m"
        {
#line 156 "handle_options.m"
          libs__handle_options__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 0) = ((MR_Box) (libs__handle_options__MakeXmlDocumentation_27));
#line 156 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_65_65, 1) = ((MR_Box) (libs__handle_options__V_66_66));
#line 156 "handle_options.m"
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
#line 155 "handle_options.m"
        {
#line 155 "handle_options.m"
          libs__handle_options__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 0) = ((MR_Box) (libs__handle_options__MakeOptimizationInt_24));
#line 155 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_62_62, 1) = ((MR_Box) (libs__handle_options__V_63_63));
#line 155 "handle_options.m"
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
#line 154 "handle_options.m"
        {
#line 154 "handle_options.m"
          libs__handle_options__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 0) = ((MR_Box) (libs__handle_options__MakeInterface_21));
#line 154 "handle_options.m"
          MR_hl_field(MR_mktag(1), libs__handle_options__V_59_59, 1) = ((MR_Box) (libs__handle_options__V_60_60));
#line 154 "handle_options.m"
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
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 113, &libs__handle_options__Smart_36);
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
